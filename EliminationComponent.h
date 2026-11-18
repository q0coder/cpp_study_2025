// Copyright Druid Mechanics

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EliminationComponent.generated.h"


class AShooterGameStateBase;
enum class ESpecialElimType : uint16;
class AShooterPlayerState;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class FPS_API UEliminationComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UEliminationComponent();

	//处理当回合的击杀战报，包括击杀该回合的加杀数量，击中数量，为击中数
	UFUNCTION()
	void OnRoundReported(AActor* Attacker, AActor* Victim, bool bHit, bool bHeadShot, bool bLethal);

	//连杀判定的持续时间
	UPROPERTY(EditDefaultsOnly, Category = "FPS|Elimination")
	float SequentialElimInterval;

	//触发连杀需要的击杀数
	UPROPERTY(EditDefaultsOnly, Category = "FPS|Elimination")
	int32 ElimsNeededForStreak;
private:

	//上一次击杀发生的时间
	float LastElimTime;

	//当前连续击杀的数量
	int32 SequentialElims;

	//不死情况下当前连续击杀的数量
	int32 Streak;

	//获取Actor对应的PlayerState
	AShooterPlayerState* GetPlayerStateFromActor(AActor* Actor);
	//增加击中与未击中数
	void ProcessHitOrMiss(bool bHit, AShooterPlayerState* AttackerPS);
	//处理击杀,添加击杀者的击杀数量，受击者的死亡次数，并调研函数处理特殊击杀的情况
	void ProcessElimination(bool bHeadShot, AShooterPlayerState* AttackerPS, AShooterPlayerState* VictimPS);
	//处理爆头，增加爆头击杀的计数
	void ProcessHeadshot(bool bHeadShot, ESpecialElimType& OutElimType, AShooterPlayerState* AttackerPS);
	//处理多杀
	void ProcessSequentialEliminations(ESpecialElimType& OutElimType, AShooterPlayerState* AttackerPS);
	//处理连杀
	void ProcessStreaks(ESpecialElimType& OutElimType, AShooterPlayerState* AttackerPS, AShooterPlayerState* VictimPS);
	//处理一血
	void HandleFirstBlood(AShooterGameStateBase* GameState, ESpecialElimType& OutElimType, AShooterPlayerState* AttackerPS);
	//更新击杀分数领先者
	void UpdateLeaderStatus(AShooterGameStateBase* GameState, ESpecialElimType& OutElimType, AShooterPlayerState* AttackerPS, AShooterPlayerState* VictimPS);
	//
	bool HasSpecialElimTypes(const ESpecialElimType& SpecialElimType) const;
};
