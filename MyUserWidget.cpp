// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"

#include "FindInBlueprints.h"
#include "Components/Button.h"
#include "Components/ProgressBar.h"
void UMyUserWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	ButtonStart->OnClicked.AddDynamic(this, &UMyUserWidget::Start);
	ButtonQuit->OnClicked.AddDynamic(this, &UMyUserWidget::Quit);

	OnHealthChanged.BindUObject(this, &UMyUserWidget::UpdateHealth);

}

void UMyUserWidget::Start()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Start Button Clicked!"));
	HealthChanged(CurrentHealth);
}

void UMyUserWidget::Quit()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Quit Button Clicked!"));
}

void UMyUserWidget::UpdateHealth(float& currentHealth)
{
	if (HealthBar)
	{
		HealthBar->SetPercent(currentHealth / MaxHealth);
	}
}




void UMyUserWidget::HealthChanged(float& currentHealth)
{
	if (currentHealth<=0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Health is zero!"));

	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Current Health: %.2f"), currentHealth));
	currentHealth-=10.0f;
	OnHealthChanged.ExecuteIfBound(currentHealth);


}

