// Copyright Druid Mechanics

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ShooterGameStateBase.generated.h"


class AShooterPlayerState;


//AGameStateBase 是 UE 游戏框架中管理全局共享状态的核心类。它由 GameModeBase 在服务器上生成，但会完整地复制到所有客户端，确保每个玩家看到一致的比赛时间、玩家列表等关键信息。
UCLASS()
class FPS_API AShooterGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
public:
	AShooterGameStateBase();

	//判断本局的第一滴血是否已经产生
	bool HasFirstBloodBeenHad() const;
	//更新当前分数最高的玩家
	void UpdateLeader();
	//获取当前得分最高者
	AShooterPlayerState* GetSoleLeader() const;

	//是否存在两个并列的得分最高者
	bool IsTiedForTheLead(AShooterPlayerState* PlayerState);
private:

	//本局的第一滴血是否已经产生
	bool bHasFirstBloodBeenHad;

	//存储得分最高者的数组（可能存在两个玩家并列）
	UPROPERTY()
	TArray<TObjectPtr<AShooterPlayerState>> Leaders;
};
