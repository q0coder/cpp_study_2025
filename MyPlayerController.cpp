// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "MyPawn.h"

AMyPlayerController::AMyPlayerController()
{

}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetGamePlayInput();
}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EIC=Cast<UEnhancedInputComponent>(InputComponent))
	{
		EIC->BindAction(MoveAction,ETriggerEvent::Triggered,this,&AMyPlayerController::HandleMove);
		EIC->BindAction(LookAction,ETriggerEvent::Triggered,this,&AMyPlayerController::HandleLook);
		EIC->BindAction(PauseAction,ETriggerEvent::Started,this,&AMyPlayerController::HandlePause);
		EIC->BindAction(ZoomAction,ETriggerEvent::Triggered,this,&AMyPlayerController::HandleZoom);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to cast InputComponent to UEnhancedInputComponent"));
	}

}

void AMyPlayerController::HandleMove(const FInputActionValue& Value)
{


	if (APawn* ControlledPawn=GetPawn())
	{


		FVector2D MoveValue=Value.Get<FVector2D>();

		const FRotator YawRotation(0.f,GetControlRotation().Yaw,0.f);
		const FVector ForwardDir = YawRotation.Quaternion().GetForwardVector();
		const FVector RightDir   = YawRotation.Quaternion().GetRightVector();


		ControlledPawn->AddMovementInput(ForwardDir, MoveValue.X);
		ControlledPawn->AddMovementInput(RightDir,   MoveValue.Y);

	}

}

void AMyPlayerController::HandleLook(const FInputActionValue& Value)
{

		FVector2D LookValue=Value.Get<FVector2D>();
		AddYawInput(LookValue.X);
		AddPitchInput(LookValue.Y);

}

void AMyPlayerController::HandlePause(const FInputActionValue& Value)
{
	SetMenuInput();
}

void AMyPlayerController::HandleZoom(const FInputActionValue& Value)
{
	if (AMyPawn* ControlledPawn=Cast<AMyPawn>(GetPawn()))
	{

		float ZoomValue=Value.Get<float>();

		ControlledPawn->Zoom(ZoomValue);

	}
}

void AMyPlayerController::SetGamePlayInput()
{
	SetInputMode(FInputModeGameOnly());
	if (ULocalPlayer* LP=GetLocalPlayer())
	{

		if (auto* Subsystem=ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LP))
		{



			Subsystem->RemoveMappingContext(MenuIMC);
			 Subsystem->AddMappingContext(GamePlayIMC, 0
			 	);

		}
	}
}

void AMyPlayerController::SetMenuInput()
{

	if (ULocalPlayer* LP=GetLocalPlayer())
	{
		if (auto* Subsystem=ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LP))
		{
			Subsystem->RemoveMappingContext(GamePlayIMC);
			Subsystem->AddMappingContext(MenuIMC,1);
		}
	}
}
