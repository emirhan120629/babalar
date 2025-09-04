// Fill out your copyright notice in the Description page of Project Settings.


#include "cellan.h"

// Sets default values
Acellan::Acellan()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Acellan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Acellan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Acellan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

