// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityLogic.h"

bool UAbilityLogic::ApplyAbility(UCharacterLogic* CharacterLogic)
{
    if (!CharacterLogic)
        return false;

    

    return false;
}

void UAbilityLogic::AbilityEnd()
{
    DestroyOwnerActor();
    MarkAsGarbage();
}
