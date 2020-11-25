// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzlePlatforms/Public/Gameplay/MovingPlatform.h"

AMovingPlatform::AMovingPlatform()
{
	SetReplicates(true);
	SetActorTickEnabled(true);
	SetMobility(EComponentMobility::Movable);
	/*This wasn't necessary before, interesting!*/
	PrimaryActorTick.bCanEverTick = true;
}

void AMovingPlatform::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	FVector UpdatedPlatformLocation = GetActorLocation();
// Debugging Speed	GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Red, FString::SanitizeFloat(UpdatedPlatformLocation.Y));
	UpdatedPlatformLocation.Y += MovingRate * DeltaSeconds;
	SetActorLocation(UpdatedPlatformLocation);
// Debugging Speed	GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Cyan, FString::SanitizeFloat(UpdatedPlatformLocation.Y));
}