// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/WarriorHeroCharacter.h"

#include "WarriorDebugHelper.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

AWarriorHeroCharacter::AWarriorHeroCharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);

	//一般第三人称的统一设置，玩家不跟随摄像机（视角）旋转而旋转
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll=false;
	bUseControllerRotationYaw=false;

	CameraBoom=CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength=200.f;
	//摄像机相对于弹簧臂末端的物理位置偏移。
	//摄像机向右上偏移，通过更好的视角，防止遮挡准星
	CameraBoom->SocketOffset=FVector(0.f,55.f,65.f);
	//设置弹簧臂（摄像机）是否跟随玩家的控制器（鼠标/摇杆）进行旋转。
	CameraBoom->bUsePawnControlRotation=true;;

	FollowCamera=CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom,USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation=false;

	GetCharacterMovement()->bOrientRotationToMovement=true;
	//设置玩家的最大速度，转身速度与减速度。
	GetCharacterMovement()->RotationRate=FRotator(0.f,500.f,0.f);
	GetCharacterMovement()->MaxWalkSpeed=400.f;
	GetCharacterMovement()->BrakingDecelerationWalking=2000.f;



}
