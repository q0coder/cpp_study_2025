// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include  "MyPawn.h"
#include "MyPlayerController.h"
#include "MyHUD.h"
#include "MyPlayerState.h"
#include"MyGameStateBase.h"
#include "GameFramework/GameMode.h"
#include "MyGameMode.generated.h"

/**
 *
 */
UCLASS()
class TEST_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()
	AMyGameMode();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	bool varBool;
	int32 varInt;
	int64 varInt64;
	FString varString;
	FName varName;
	FText varText;
	FVector varVector;
	FRotator varRotator;
	FTransform varTransform;
	BYTE varByte;
	uint8 varUnit8;


	TArray<int32> MyTArray;
	TSet<int32> MyTSet;
	void Printf();
};
