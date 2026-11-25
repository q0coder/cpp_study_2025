// Copyright Druid Mechanics

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShooterPlayerController.generated.h"

class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerStateReplicated);

UCLASS()
class FPS_API AShooterPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AShooterPlayerController();

	//playerState的网络同步委托
	UPROPERTY(BlueprintAssignable)
	FPlayerStateReplicated OnPlayerStateReplicated;

	//OnRep_PlayerState在客户端接收到服务端同步的PlayerState时由引擎调用
	virtual void OnRep_PlayerState() override;

	//玩家是否存活
	bool bPawnAlive;
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	//完成重生时会重新进行一次调用，Playercontroler的构造函数与BeginPaly都只会调用一次
	//完成重生后如果Pawn进行了销毁，重新生成的流程，那么Pawn的构造函数，BeginPaly都会重新调用，但是如果Pawn使用了对象池，那么构造函数与BeginPaly就不会重新调用了
	virtual void OnPossess(APawn* InPawn) override;
private:

	UPROPERTY(EditAnywhere, Category = "FPS|Input")
	TObjectPtr<UInputMappingContext> ShooterIMC;

	UPROPERTY(EditAnywhere, Category = "FPS|Input")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, Category = "FPS|Input")
	TObjectPtr<UInputAction> LookAction;

	UPROPERTY(EditAnywhere, Category = "FPS|Input")
	TObjectPtr<UInputAction> CrouchAction;

	UPROPERTY(EditAnywhere, Category = "FPS|Input")
	TObjectPtr<UInputAction> JumpAction;

	void Input_Crouch();
	void Input_Jump();
	void Input_Move(const FInputActionValue& InputActionValue);
	void Input_Look(const FInputActionValue& InputActionValue);
};
