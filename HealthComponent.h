
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FHealthChanged, UHealthComponent*, HealthComponent, float, OldValue, float, NewValue, AActor*, Instigator);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeathStarted);

UENUM(BlueprintType)
enum class EDeathState : uint8
{
	NotDead,
	DeathStarted,
	DeathFinished
};

//meta=(BlueprintSpawnableComponent)作用是将该类暴露给蓝图，ClassGroup作用是设置该类在蓝图菜单中的分组
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class FPS_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UHealthComponent();
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	//接收一个Actor获取其拥有的HealthComponent
	UFUNCTION(BlueprintPure, Category = "FPS|Health")
	static UHealthComponent* FindHealthComponent(const AActor* Actor) { return IsValid(Actor) ? Actor->FindComponentByClass<UHealthComponent>() : nullptr; }

	//获取当前血量的比例
	UFUNCTION(BlueprintCallable)
	float GetHealthNormalized() const;

	//更改当前血量，返回的bool代表是否死亡
	bool ChangeHealthByAmount(float Amount, AActor* Instigator);
	//更改最大血量
	void ChangeMaxHealthByAmount(float Amount, AActor* Instigator);


	//ReplicatedUsing的作用是把数据同步过去之后，立刻执行一个指定的回调函数（RepNotify），方便我更新 UI 或播放特效
	//与Replicated相比，会额外执行一个回调函数
	//当前死亡状态枚举
	UPROPERTY(ReplicatedUsing = OnRep_DeathState)
	EDeathState DeathState;

	//当前血量
	UPROPERTY(ReplicatedUsing = OnRep_Health, EditDefaultsOnly, Category = "FPS|Health")
	float Health;

	//最大血量
	UPROPERTY(ReplicatedUsing = OnRep_MaxHealth, EditDefaultsOnly, Category = "FPS|Health")
	float MaxHealth;

	UPROPERTY(BlueprintAssignable)
	FHealthChanged OnHealthChanged;

	UPROPERTY(BlueprintAssignable)
	FHealthChanged OnMaxHealthChanged;

	UPROPERTY(BlueprintAssignable)
	FDeathStarted OnDeathStarted;

protected:
	virtual void BeginPlay() override;

	//数据网络同步之后进行的三个回调函数
	UFUNCTION()
	void OnRep_DeathState(EDeathState OldDeathState);

	UFUNCTION()
	void OnRep_Health(float OldValue);

	UFUNCTION()
	void OnRep_MaxHealth(float OldValue);

private:

	void StartDeath();
};
