// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemLogic.h"
#include "AbilityLogic.generated.h"

class UCharacterLogic;

UCLASS()
class RGO_API UAbilityLogic : public UItemLogic
{
    GENERATED_BODY()

public:
    virtual bool ApplyAbility(UCharacterLogic* CharacterLogic);

protected:
    virtual void AbilityEnd();
};
