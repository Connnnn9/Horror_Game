// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC_Monsters_AIController.h"
#include "NPC_Monsters.h"

void ANPC_Monsters_AIController::OnPossess(APawn* pawn)
{
    Super::OnPossess(pawn);
    if (ANPC_Monsters* const npc = Cast<ANPC_Monsters>(pawn))
    {
        if (UBehaviorTree* const tree = npc->GetBehaviorTree())
        {
            UBlackboardComponent* b;
            UseBlackboard(tree->BlackboardAsset, b);
            Blackboard = b;
            RunBehaviorTree(tree);
        }
    }
}
