// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NPC_Monsters_AIController.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API ANPC_Monsters_AIController : public AAIController
{
	GENERATED_BODY()
public:
	explicit ANPC_Monsters_AIController(FObjectInitializer const& objectInitializer);

protected:
	virtual void OnPossess(APawn* pawn) override;
};
