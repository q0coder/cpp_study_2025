// Copyright Druid Mechanics

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ShooterTypes/ShooterTypes.h"
#include "SpecialElimData.generated.h"

class UTexture2D;

//特殊击杀的信息结构体，存储该特殊击杀的类型，UI文本，UI-Icon，多杀与连杀数
USTRUCT(BlueprintType)
struct FSpecialElimInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	ESpecialElimType ElimType = ESpecialElimType::None;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FString ElimMessage = FString();

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TObjectPtr<UTexture2D> ElimIcon = nullptr;

	UPROPERTY(BlueprintReadOnly)
	int32 SequentialElimCount = 0;

	UPROPERTY(BlueprintReadOnly)
	int32 StreakCount = 0;
};

//特殊击杀数据类
UCLASS()
class FPS_API USpecialElimData : public UDataAsset
{
	GENERATED_BODY()
public:

	//特殊击杀的信息键值对
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FPS|SpecialElims")
	TMap<ESpecialElimType, FSpecialElimInfo> SpecialElimInfo;
};
