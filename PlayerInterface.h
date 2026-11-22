// Copyright Druid Mechanics

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerInterface.generated.h"

class AWeapon;
struct FGameplayTag;
// This class does not need to be modified.
UINTERFACE()
class UPlayerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class FPS_API IPlayerInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//根据武器的类型获取武器在玩家上的附加点
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	FName GetWeaponAttachPoint(const FGameplayTag& WeaponType) const;

	//获取玩家的第一人称网格体
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	USkeletalMeshComponent* GetMesh1P() const;

	//获取玩家的第三人称网格体
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	USkeletalMeshComponent* GetMesh3P() const;

	//武器是否第一次被同步到客户端，并广播相应的委托
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void WeaponReplicated();

	//获取当前装备的武器
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	AWeapon* GetCurrentWeapon();

	//获取当前的备弹
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	int32 GetReserveAmmo() const;

	//通知进行切换武器
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Notify_CycleWeapon();

	//通知进行换弹
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Notify_ReloadWeapon();

	//拾取增加弹药
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void AddAmmo(const FGameplayTag& WeaponType, int32 AmmoAmount);

	//造成伤害
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool DoDamage(float DamageAmount, AActor* DamageInstigator);
};
