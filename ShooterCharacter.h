
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/PlayerInterface.h"
#include "ShooterTypes/ShooterTypes.h"
#include "ShooterCharacter.generated.h"

class UEliminationComponent;
class UHealthComponent;
class UCombatComponent;
class UCameraComponent;
class USpringArmComponent;
class UInputAction;
class AWeapon;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponFirstReplicated, AWeapon*, Weapon, bool, bTargetingPlayer);

UCLASS()
class FPS_API AShooterCharacter : public ACharacter, public IPlayerInterface
{
	GENERATED_BODY()

public:
	AShooterCharacter();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	//允许函数在C++和蓝图中都能被实现，需要实现一个带 _Implementation 后缀的函数（如 MyFunction_Implementation），调用必须通过Execute_MyFunction()
	/** PlayerInterface */
	virtual FName GetWeaponAttachPoint_Implementation(const FGameplayTag& WeaponType) const override;
	virtual USkeletalMeshComponent* GetMesh1P_Implementation() const override;
	virtual USkeletalMeshComponent* GetMesh3P_Implementation() const override;
	virtual void WeaponReplicated_Implementation() override;
	virtual AWeapon* GetCurrentWeapon_Implementation() override;
	virtual int32 GetReserveAmmo_Implementation() const override;
	virtual void Notify_CycleWeapon_Implementation() override;
	virtual void Notify_ReloadWeapon_Implementation() override;
	virtual void AddAmmo_Implementation(const FGameplayTag& WeaponType, int32 AmmoAmount) override;
	virtual bool DoDamage_Implementation(float DamageAmount, AActor* DamageInstigator) override;
	/** ~PlayerInterface */

	virtual void BeginPlay() override;
	virtual void BeginDestroy() override;

	UFUNCTION(BlueprintCallable)
	FRotator GetFixedAimRotation() const;

	UPROPERTY(BlueprintReadOnly, Category = "FPS|FABRIK")
	FTransform FABRIK_SocketTransform;

	UFUNCTION(BlueprintCallable)
	bool HasCurrentWeapon() const;

	UPROPERTY(BlueprintAssignable)
	FWeaponFirstReplicated OnWeaponFirstReplicated;

	bool HasWeaponFirstReplicated() const { return bWeaponFirstReplicated; }

	UPROPERTY(EditDefaultsOnly, Category = "FPS|HitReact")
	TArray<TObjectPtr<UAnimMontage>> HitReacts;

	UPROPERTY(EditDefaultsOnly, Category = "FPS|Respawn")
	float RespawnTime;
protected:


	//第一人称FPS的常见做法，设置仅本地玩家可见的手臂网格体，其他玩家所见的才是完整的模型
	//优点在于可以解决模型穿模问题与提升性能
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FPS|Mesh")
	TObjectPtr<USkeletalMeshComponent> Mesh1P;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FPS|Health")
	TObjectPtr<UHealthComponent> Health;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FPS|Combat")
	TObjectPtr<UCombatComponent> Combat;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FPS|Elimination")
	TObjectPtr<UEliminationComponent> Elimination;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FPS|Camera")
	TObjectPtr<UCameraComponent> FirstPersonCamera;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FPS|Aiming")
	float DefaultFieldOfView;

	UFUNCTION(BlueprintImplementableEvent)
	void OnAim(bool bIsAiming);

	UPROPERTY(BlueprintReadOnly, Category = "FPS|TurnInPlace")
	float AO_Yaw;

	UPROPERTY(BlueprintReadOnly, Category = "FPS|Strafing")
	float MovementOffsetYaw;

	UPROPERTY(BlueprintReadOnly, Category = "FPS|TurnInPlace")
	ETurningInPlace TurningStatus;

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_HitReact(int32 MontageIndex);

	UFUNCTION()
	void OnDeathStarted();

	UFUNCTION(BlueprintImplementableEvent)
	void DeathEffects();

private:

	void Input_CycleWeapon();
	void Input_ReloadWeapon();
	void Input_FireWeapon_Pressed();
	void Input_FireWeapon_Released();
	void Input_Aim_Pressed();
	void Input_Aim_Released();

	void CalculateFABRIKSocketTransform();
	void CalculateTurnInPlaceParameters(float DeltaTime);
	void TurnInPlace(float DeltaTime);

	bool bWeaponFirstReplicated;
	FRotator StartingAimRotation;
	float InterpAO_Yaw;
	FTimerHandle DeathTimer;

	void DeathTimerFinished();


	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(EditAnywhere, Category = "FPS|Input")
	TObjectPtr<UInputAction> CycleWeaponAction;

	UPROPERTY(EditAnywhere, Category = "FPS|Input")
	TObjectPtr<UInputAction> FireWeaponAction;

	UPROPERTY(EditAnywhere, Category = "FPS|Input")
	TObjectPtr<UInputAction> ReloadWeaponAction;

	UPROPERTY(EditAnywhere, Category = "FPS|Input")
	TObjectPtr<UInputAction> AimWeaponAction;
};
