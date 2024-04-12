// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter11.h"

// Sets default values
AMyCharacter11::AMyCharacter11()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter11::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter11::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter11::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

