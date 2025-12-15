// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"
#include "CharacterLogic.h"
#include "GameInstance_Main.h"
#include "Macros.h"

ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
    if (bIsAutoActive)
        AutomaticActivation();
}

void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CharacterLogic)
        CharacterLogic->Tick(DeltaTime);
}


UItemLogic* ABaseCharacter::GetItemLogic_Implementation()
{
    return CharacterLogic;
}

void ABaseCharacter::SetItemLogic_Implementation(UItemLogic* NewItemLogic)
{
    if (auto NewCharacterLogic = Cast<UCharacterLogic>(NewItemLogic))
        CharacterLogic = NewCharacterLogic;
    CHECK_FIELD(CharacterLogic);

    CharacterLogicChanged();
}

void ABaseCharacter::AutomaticActivation()
{
    if (bIsActive)
        return;

    if (auto GameInstance = GetGameInstance<UGameInstance_Main>())
        bIsActive = GameInstance->AutomaticActivation(this);
}