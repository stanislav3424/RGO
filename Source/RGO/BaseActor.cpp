// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseActor.h"
#include "ItemLogic.h"
#include "GameInstance_Main.h"
#include "Macros.h"

void ABaseActor::BeginPlay()
{
    Super::BeginPlay();

    if (bIsAutoActive)
        AutomaticActivation();
}

void ABaseActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (ItemLogic)
        ItemLogic->Tick(DeltaTime);
}

UItemLogic* ABaseActor::GetItemLogic_Implementation()
{
    return ItemLogic;
}

void ABaseActor::SetItemLogic_Implementation(UItemLogic* NewItemLogic)
{
    ItemLogic = nullptr;
    if (NewItemLogic)
        ItemLogic = NewItemLogic;
    CHECK_FIELD(ItemLogic);
}

void ABaseActor::AutomaticActivation()
{
    if (bIsActive)
        return;

    if (auto GameInstance = GetGameInstance<UGameInstance_Main>())
        bIsActive = GameInstance->AutomaticActivation(this);
}