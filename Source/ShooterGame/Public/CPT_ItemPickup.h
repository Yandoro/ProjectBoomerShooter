// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPT_ItemPickup.generated.h"

class UStaticMeshComponent;

UCLASS()

class SHOOTERGAME_API ACPT_ItemPickup : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACPT_ItemPickup();

protected:
	UPROPERTY(EditDefaultsOnly, Category="Item Pickup")
	TObjectPtr<UStaticMeshComponent> MeshComponent;
};