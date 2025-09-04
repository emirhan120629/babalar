// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "eric.generated.h"

UCLASS()
class BABALAR_API Aeric : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	Aeric();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void
		SetupPlayerInputComponent(class
			UInputComponent* PlayerInputCompanent)
		override;

	//hareket fonksiyonlarý
	void MoveForward(float Value);
	void MoveRight(float value);
	void StartJump();
	void StopJump();
	void StartRun();
	void StopRun();
	void StartCrouch();
	void StopCrouch();
	void LieDown();
	void OpenBackpack();
	void OpenMap();

	// mause kontrolleri
	void FirePressed();
	void FireReleased();
	void GuardOrAimPressed();
	void GuardOrAimReleased();

	//karakter olculeri ve gorunum
	UPROPERTY(EditAnywhere,
		BlueprintReadWrite, Category = ''Character |
		Appearance'')
	float CharacterHeight = 175.0f;   //cm cinsinden

	UPROPERTY(EditAnywhere,
		BlueprintReadWrite, Category = ''Character |
		Appearance'')
	float ShoulderWidth = 45.0f;      //cm cinsinden

	UPROPERTY(EditAnywhere,
		BlueprintReadWrite, Category = ''Character |
		Appearance'')
	float MuscleLevel = 0.5f;         // 0.0 = zayýf 1.0 cok kaslý

	UPROPERTY(EditAnywhere,
		BlueprintReadWrite, Category = ''Character |
		Appearance'')
	FLinearColor SkinColor =
	FLinearColor(0.1f, 0.1f, 0.1f, 1.0f); 




};
