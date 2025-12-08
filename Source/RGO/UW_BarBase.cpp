// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_BarBase.h"
#include "Components/WidgetComponent.h"
#include "Components/ProgressBar.h"
#include "ItemLogicInterface.h"
#include "CharacterLogic.h"
#include "ItemLogic.h"
#include "Macros.h"

void UUW_BarBase::InitWithCharacterLogic(UCharacterLogic* CharacterLogic)
{
    if (!CharacterLogic)
        return;
                CharacterLogicRef = CharacterLogic;
    CHECK_FIELD(CharacterLogicRef);

    if (CharacterLogicRef)
    {
        CharacterLogicRef->OnHealthChanged.AddDynamic(this, &UUW_BarBase::SetHealth);

        SetHealth(CharacterLogicRef->GetCurrentHealth(), CharacterLogicRef->GetMaxHealth());
    }
}

void UUW_BarBase::SetHealth(float CurrentHealth, float MaxHealth)
{
    if (!HealthProgressBar || MaxHealth <= 0.0f)
        return;
    float HealthPercent = FMath::Clamp(CurrentHealth / MaxHealth, 0.0f, 1.0f);
    HealthProgressBar->SetPercent(HealthPercent);
}