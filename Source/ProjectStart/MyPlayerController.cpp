// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

// Sets default values
AMyPlayerController::AMyPlayerController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPlayerController::Tick(float DeltaTime)
{
	//check hp
	if (m_hp > m_maxHp)
	{
		m_hp = m_maxHp;
	}
	else if (m_hp <= m_minHp)
	{
		m_isAlive = false;
	}

	if (m_isAlive)
	{
		Super::Tick(DeltaTime);
	}
}

// Called to bind functionality to input
void AMyPlayerController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


