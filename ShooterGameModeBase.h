// Copyright Druid Mechanics

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShooterGameModeBase.generated.h"


UCLASS()
class FPS_API AShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	//处理玩家的死亡销毁与重生点的随机选择
	void RequestRespawn(ACharacter* Character, AController* Controller);
};
