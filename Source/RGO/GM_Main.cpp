// Fill out your copyright notice in the Description page of Project Settings.

#include "GM_Main.h"
#include "GameFramework/SpectatorPawn.h"
#include "ItemLogic.h"

void AGM_Main::BeginPlay()
{
    Super::BeginPlay();

    if (GetWorld())
        GameStartTimeSeconds = GetWorld()->GetTimeSeconds();

    StartGameEndTimerHandle();
}

void AGM_Main::StartGameEndTimerHandle()
{
    if (!GetWorld())
        return;
    GetWorldTimerManager().ClearTimer(GameEndTimerHandle);
    GetWorldTimerManager().SetTimer(GameEndTimerHandle, this, &AGM_Main::OnTimerComplete, DurationGameEndTimer, false);
}

void AGM_Main::OnTimerComplete()
{
    PlayerGameEnded();
}

void AGM_Main::PlayerGameEnded()
{
    EndMatch();
    if (auto World = GetWorld())
        if (auto PlayerController = World->GetFirstPlayerController())
            PlayerController->GameHasEnded(nullptr, false);
}

void AGM_Main::OnItemLogicDeath(UItemLogic* ItemLogic)
{
    if (!IsValid(ItemLogic))
        return;

    const int32 PointsToAdd = 1;

    PlayerScore += PointsToAdd;
}

void AGM_Main::RegisterItemLogic(UItemLogic* ItemLogic)
{
    if (!IsValid(ItemLogic))
        return;

    ItemLogic->OnDeath.AddDynamic(this, &AGM_Main::OnItemLogicDeath);

    RegisteredLogics.AddUnique(TWeakObjectPtr<UItemLogic>(ItemLogic));
}

void AGM_Main::ResetPlayerScore()
{
    PlayerScore = 0;

    for (TWeakObjectPtr<UItemLogic> WeakLogic : RegisteredLogics)
        if (UItemLogic* Logic = WeakLogic.Get())
            if (Logic->OnDeath.IsBound())
                Logic->OnDeath.RemoveDynamic(this, &AGM_Main::OnItemLogicDeath);
    RegisteredLogics.Empty();
}

float AGM_Main::GetGameElapsedTime() const
{
    if (!GetWorld())
        return 0.0f;
    double Now = GetWorld()->GetTimeSeconds();
    return static_cast<float>(Now - GameStartTimeSeconds);
}

float AGM_Main::GetGameRemainingTime() const
{
    return DurationGameEndTimer - GetGameElapsedTime();
}