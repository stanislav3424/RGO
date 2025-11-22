// Fill out your copyright notice in the Description page of Project Settings.


#include "GM_Main.h"
#include "GameFramework/SpectatorPawn.h"

void AGM_Main::BeginPlay()
{
    Super::BeginPlay();
    StartGameEndTimerHandle();
}

void AGM_Main::StartGameEndTimerHandle()
{
    GetWorldTimerManager().ClearTimer(GameEndTimerHandle);
    GetWorldTimerManager().SetTimer(GameEndTimerHandle, this, &AGM_Main::OnTimerComplete, DurationGameEndTimer, false);
}

void AGM_Main::OnTimerComplete()
{
    EndMatch(); 
    PlayersGameEnded();
}

void AGM_Main::PlayersGameEnded()
{
    if (auto World = GetWorld())
        for (auto It = World->GetPlayerControllerIterator(); It; ++It)
            if (auto PlayerController = It->Get())
                PlayerController->GameHasEnded(nullptr, false);
}
//