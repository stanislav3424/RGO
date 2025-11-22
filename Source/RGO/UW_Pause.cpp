// Fill out your copyright notice in the Description page of Project Settings.


#include "UW_Pause.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "PC_Main.h"
#include "GM_Main.h"

bool UUW_Pause::Initialize()
{
    bool bSuccess = Super::Initialize();
    if (!bSuccess)
        return false;

    if (ResumeButton)
        ResumeButton->OnClicked.AddDynamic(this, &UUW_Pause::OnResumeClicked);
    if (RestartButton)
        RestartButton->OnClicked.AddDynamic(this, &UUW_Pause::OnRestartClicked);
    if (MainMenuButton)
        MainMenuButton->OnClicked.AddDynamic(this, &UUW_Pause::OnMainMenuClicked);
    if (QuitButton)
        QuitButton->OnClicked.AddDynamic(this, &UUW_Pause::OnQuitClicked);

    return true;
}

void UUW_Pause::NativeConstruct()
{
    Super::NativeConstruct();

    if (auto World = GetWorld())
        if (auto GameMode = World->GetAuthGameMode<AGM_Main>())
            if (GameMode->HasMatchEnded() && ResumeButton)
                ResumeButton->SetVisibility(ESlateVisibility::Collapsed);
}

void UUW_Pause::OnResumeClicked()
{
    UGameplayStatics::SetGamePaused(GetWorld(), false);

    if (auto World = GetWorld())
        if (auto PlayerController = World->GetFirstPlayerController<APC_Main>())
            PlayerController->SetPause(false);
}

void UUW_Pause::OnRestartClicked()
{
    FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(GetWorld());
    UGameplayStatics::OpenLevel(GetWorld(), FName(*CurrentLevelName));
}

void UUW_Pause::OnMainMenuClicked()
{
    UGameplayStatics::OpenLevel(GetWorld(), TEXT("MainMenu"));
}

void UUW_Pause::OnQuitClicked()
{
    UKismetSystemLibrary::QuitGame(GetWorld(), GetOwningPlayer(), EQuitPreference::Quit, false);
}