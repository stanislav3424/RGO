// Fill out your copyright notice in the Description page of Project Settings.

#include "FunctionLibrary.h"
#include "CharacterLogic.h"
#include "ItemLogicInterface.h"

bool UFunctionLibrary::IsTeamsEqual(UCharacterLogic* First, UCharacterLogic* Second)
{
    if (!First || !Second)
        return false;

    const auto FirstTeam  = First->GetTeam();
    const auto SecondTeam = Second->GetTeam();

    return (FirstTeam == SecondTeam) ? true : false;
}

bool UFunctionLibrary::IsTeamsEqualActor(AActor* First, AActor* Second)
{
    if (!IsValid(First) || !IsValid(Second))
        return false;

    if (!First->Implements<UItemLogicInterface>() || !Second->Implements<UItemLogicInterface>())
        return false;
    auto FirstItemLogic  = Cast<UCharacterLogic>(IItemLogicInterface::Execute_GetItemLogic(First));
    auto SecondItemLogic = Cast<UCharacterLogic>(IItemLogicInterface::Execute_GetItemLogic(Second));

    return UFunctionLibrary::IsTeamsEqual(FirstItemLogic, SecondItemLogic);
}
