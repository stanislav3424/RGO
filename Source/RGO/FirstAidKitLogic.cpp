// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstAidKitLogic.h"
#include "CharacterLogic.h"

bool UFirstAidKitLogic::ApplyAbility(UCharacterLogic* CharacterLogic)
{
    if (!CharacterLogic)
        return false;

    if (CharacterLogic->GetCurrentHealth() < CharacterLogic->GetMaxHealth())
    {
        CharacterLogic->AddHealth(10000.f);
        AbilityEnd();
        return true;
    }

    return false;
}

