// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_HUD.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "ItemLogicInterface.h"
#include "CharacterLogic.h"
#include "Macros.h"

bool UUW_HUD::Initialize()
{
    bool bSuccess = Super::Initialize();
    if (!bSuccess)
        return false;

    if (auto World = GetWorld())
        if (auto PlayerController = World->GetFirstPlayerController())
        {
            PlayerController->OnPossessedPawnChanged.AddDynamic(this, &UUW_HUD::SwitchControlledPawn);
            SwitchControlledPawn(nullptr, PlayerController->GetPawn());
        }
    return true;
}

void UUW_HUD::SwitchControlledPawn(APawn* OldPawn, APawn* NewPawn)
{
    if (CharacterLogicRef)
    {
        CharacterLogicRef->OnHealthChanged.RemoveDynamic(this, &UUW_HUD::SetHealth);
        CharacterLogicRef->OnStaminaChanged.RemoveDynamic(this, &UUW_HUD::SetStamina);
        CharacterLogicRef->OnEquipmentChanged.RemoveDynamic(this, &UUW_HUD::UpdateWeapon);
        CharacterLogicRef = nullptr;
    }

    if (IsValid(NewPawn))
        if (NewPawn->Implements<UItemLogicInterface>())
            if (auto ItemLogic = IItemLogicInterface::Execute_GetItemLogic(NewPawn))
                if (auto CharacterLogic = Cast<UCharacterLogic>(ItemLogic))
                {
                    CharacterLogicRef = CharacterLogic;
                    CharacterLogicRef->OnHealthChanged.AddDynamic(this, &UUW_HUD::SetHealth);
                    CharacterLogicRef->OnStaminaChanged.AddDynamic(this, &UUW_HUD::SetStamina);
                    CharacterLogicRef->OnEquipmentChanged.AddDynamic(this, &UUW_HUD::UpdateWeapon);
                    SetHealth(CharacterLogicRef->GetCurrentHealth(), CharacterLogicRef->GetMaxHealth());
                    SetStamina(CharacterLogicRef->GetCurrentStamina(), CharacterLogicRef->GetMaxStamina());
                }
    UpdateWeapon();
}

void UUW_HUD::UpdateWeapon()
{
    if (WeaponLogicRef)
    {
        WeaponLogicRef->OnAmmoChanged.RemoveDynamic(this, &UUW_HUD::SetAmmo);
        WeaponLogicRef = nullptr;
    }
    if (CharacterLogicRef)
        if (auto WeaponLogic = CharacterLogicRef->GetItemInSlot(EEquipmentSlot::RHand))
        {
            WeaponLogicRef = WeaponLogic;
            WeaponLogicRef->OnAmmoChanged.AddDynamic(this, &UUW_HUD::SetAmmo);
            SetAmmo(WeaponLogicRef->GetCurrentAmmo(), WeaponLogicRef->GetMaxAmmo());
        }
}

void UUW_HUD::SetHealth(float CurrentHealth, float MaxHealth)
{
    if (!HealthProgressBar)
        return;
    float HealthPercent = CurrentHealth / MaxHealth;
    HealthProgressBar->SetPercent(HealthPercent);
}

void UUW_HUD::SetStamina(float CurrentStamina, float MaxStamina)
{
    if (!StaminaProgressBar)
        return;
    float StaminaPercent = CurrentStamina / MaxStamina;
    StaminaProgressBar->SetPercent(StaminaPercent);
}

void UUW_HUD::SetAmmo(int32 CurrentAmmo, int32 MaxAmmo)
{
    if (!AmmoTextBlock)
        return;

    FString AmmoString = FString::Printf(TEXT("%d / %d"), CurrentAmmo, MaxAmmo);
    FText   TextAmmo   = FText::FromString(AmmoString);

    AmmoTextBlock->SetText(TextAmmo);
}
