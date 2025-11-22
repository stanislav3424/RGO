// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD_Main.h"
#include "Blueprint/UserWidget.h"
#include "PC_Main.h"
#include "Macros.h"

void AHUD_Main::BeginPlay()
{
    CHECK_FIELD(PauseWidgetClass);
    CHECK_FIELD(HUD_WidgetClass);

}

void AHUD_Main::AddUserWidget()
{
    if (auto World = GetWorld())
        if (auto PlayerControler = World->GetFirstPlayerController<APC_Main>())
            PlayerControler->OnTogglePauseWidget.AddDynamic(this, &AHUD_Main::TogglePauseWidget);

    if (HUD_WidgetClass)
    {
        HUD_Widget = CreateWidget<UUserWidget>(GetWorld(), HUD_WidgetClass);
        HUD_Widget->AddToViewport();
    }
}

void AHUD_Main::TogglePauseWidget(bool bShow)
{
    if (bShow)
    {
        if (PauseWidgetClass && !PauseWidget)
        {
            PauseWidget = CreateWidget<UUserWidget>(GetWorld(), PauseWidgetClass);
            if (PauseWidget)
                PauseWidget->AddToViewport(1);
        }
    }
    else
    {
        if (PauseWidget)
        {
            PauseWidget->RemoveFromParent();
            PauseWidget = nullptr;
        }
    }
}

void AHUD_Main::GameHasEnded()
{
    TogglePauseWidget(false);

    FTimerHandle DelayHandle;
    GetWorld()->GetTimerManager().SetTimer(DelayHandle, this, &AHUD_Main::OnGameEndDelayComplete, 2.5f, false);
}

void AHUD_Main::OnGameEndDelayComplete()
{
    TogglePauseWidget(true);
}
