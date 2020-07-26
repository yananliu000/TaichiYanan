// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPlayerController.generated.h"

UCLASS()
class PROJECTSTART_API AMyPlayerController : public APawn
{
	GENERATED_BODY()


private:
	float m_hp;
	float m_maxHp;
	float m_minHp;
	bool m_isAlive;

public:

	float GetHp() { return m_hp; }
	void SetHp(float hp) { m_hp = hp; }
	void AddHp(float value) { m_hp += value; }

	// Sets default values for this pawn's properties
	AMyPlayerController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
};
