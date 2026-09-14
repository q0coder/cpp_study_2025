// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MySceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MySceneComponent"));
	MyStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyStaticMeshComponent"));
	MyBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("MyBoxComponent"));
	MyAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("MyAudioComponent"));
	MyParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MyParticleSystemComponent"));

	RootComponent = MySceneComponent;
	MyParticleSystemComponent->SetupAttachment(MySceneComponent);
	MyStaticMeshComponent->SetupAttachment(MySceneComponent);
	MyAudioComponent->SetupAttachment(MySceneComponent);
	MyBoxComponent->SetupAttachment(MySceneComponent);

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

