// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
public:

	AMovingPlatform();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Moving Platform")
		float MovingRate;

	virtual void Tick(float DeltaSeconds) override;

	void MoveActorConstantly(float TickSeconds);
};
