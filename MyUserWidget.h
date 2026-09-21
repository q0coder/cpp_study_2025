// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

class UButton;
class UProgressBar;
DECLARE_DELEGATE_OneParam(FOnHealthChanged, float&);
/**
 *
 */
UCLASS()
class TEST_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UButton* ButtonStart;
	UPROPERTY(meta = (BindWidget))
	UButton* ButtonQuit;
	UPROPERTY(meta = (BindWidget))
	UProgressBar* HealthBar;

	 virtual void   NativeOnInitialized() override;

	UFUNCTION()
	void Start();

	UFUNCTION()
	void Quit();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta = (AllowPrivateAccess = "true"))
	float CurrentHealth=100.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta = (AllowPrivateAccess = "true"))
	float MaxHealth=100.0f;



	void UpdateHealth(float& currentHealth);

	FOnHealthChanged OnHealthChanged;

	void HealthChanged(float& currentHealth);

};
