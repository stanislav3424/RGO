// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_HUD.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "ItemLogicInterface.h"
#include "CharacterLogic.h"
#include "GM_Main.h"
#include "Macros.h"
#include "Components/Border.h"
#include "Materials/MaterialInstanceDynamic.h"

bool UUW_HUD::Initialize()
{
    bool bSuccess = Super::Initialize();
    if (!bSuccess)
        return false;

    if (auto World = GetWorld())
    {
        if (auto PlayerController = World->GetFirstPlayerController())
        {
            PlayerController->OnPossessedPawnChanged.AddDynamic(this, &UUW_HUD::SwitchControlledPawn);
            SwitchControlledPawn(nullptr, PlayerController->GetPawn());
        }

        World->GetTimerManager().SetTimer(HUDUpdateTimerHandle, this, &UUW_HUD::UpdateHUD, HUDUpdateInterval, true);
    }

    UpdateHUD();

    return true;
}

void UUW_HUD::NativeDestruct()
{
    if (auto World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(HUDUpdateTimerHandle);
    }

    if (CharacterLogicRef)
    {
        CharacterLogicRef->OnHealthChanged.RemoveDynamic(this, &UUW_HUD::SetHealth);
        CharacterLogicRef->OnStaminaChanged.RemoveDynamic(this, &UUW_HUD::SetStamina);
        CharacterLogicRef->OnEquipmentChanged.RemoveDynamic(this, &UUW_HUD::UpdateWeapon);
        CharacterLogicRef = nullptr;
    }

    if (WeaponLogicRef)
    {
        WeaponLogicRef->OnAmmoChanged.RemoveDynamic(this, &UUW_HUD::SetAmmo);
        WeaponLogicRef = nullptr;
    }

    Super::NativeDestruct();
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

    UpdateHUD();
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
    if (!HealthProgressBar || MaxHealth <= 0.0f)
        return;
    float HealthPercent = FMath::Clamp(CurrentHealth / MaxHealth, 0.0f, 1.0f);
    HealthProgressBar->SetPercent(HealthPercent);
    UE_LOG(LogTemp, Error, TEXT("1"));

    if (!VignetteMID && BackgroundBorder)
    {
        const FSlateBrush& Brush  = BackgroundBorder->Background;
        UMaterialInstance* BaseMI = Cast<UMaterialInstance>(Brush.GetResourceObject());
        if (BaseMI)
        {
            VignetteMID = UMaterialInstanceDynamic::Create(BaseMI, this);
            if (VignetteMID)
            {
                FSlateBrush NewBrush;
                NewBrush.SetResourceObject(VignetteMID);
                BackgroundBorder->SetBrush(NewBrush);
            }
        }
        else
        {
            return;
        }
    }
    UE_LOG(LogTemp, Error, TEXT("2"));
    float FillValue = 1.0f - HealthPercent;
    VignetteMID->SetScalarParameterValue(TEXT("FillPercent"), FillValue);

    float EnabledValue = (HealthPercent >= 1.0f) ? 0.0f : 1.0f;
    VignetteMID->SetScalarParameterValue(TEXT("VignetteEnabled"), EnabledValue);
}

void UUW_HUD::SetStamina(float CurrentStamina, float MaxStamina)
{
    if (!StaminaProgressBar || MaxStamina <= 0.0f)
        return;
    float StaminaPercent = FMath::Clamp(CurrentStamina / MaxStamina, 0.0f, 1.0f);
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

void UUW_HUD::UpdateHUD()
{
    if (!GetWorld())
        return;

    auto GM_Main = Cast<AGM_Main>(GetWorld()->GetAuthGameMode());
    if (!IsValid(GM_Main))
    {
        UpdateScoreDisplay(0);
        UpdateTimeDisplay(0.0f);
        return;
    }

    int32 Score     = GM_Main->GetPlayerScore();
    float Remaining = GM_Main->GetGameRemainingTime();

    UpdateScoreDisplay(Score);
    UpdateTimeDisplay(Remaining);
}

void UUW_HUD::UpdateScoreDisplay(int32 Score)
{
    if (!ScoreTextBlock)
        return;

    FString ScoreStr = FString::Printf(TEXT("Score: %d"), Score);
    ScoreTextBlock->SetText(FText::FromString(ScoreStr));
}

void UUW_HUD::UpdateTimeDisplay(float RemainingSeconds)
{
    if (!TimeTextBlock)
        return;

    float Clamped = FMath::Max(0.0f, RemainingSeconds);

    int32 TotalSeconds = FMath::CeilToInt(Clamped);
    int32 Minutes      = TotalSeconds / 60;
    int32 Seconds      = TotalSeconds % 60;

    FString TimeStr = FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
    TimeTextBlock->SetText(FText::FromString(TimeStr));
}