// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC_Monsters.h"

// Sets default values
ANPC_Monsters::ANPC_Monsters()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANPC_Monsters::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANPC_Monsters::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPC_Monsters::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UBehaviorTree* ANPC_Monsters::GetBehaviorTree() const
{
	return Tree;
}

