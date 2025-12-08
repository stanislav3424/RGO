// Fill out your copyright notice in the Description page of Project Settings.

#include "BotCharacter.h"
#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"
#include "CharacterLogic.h"
#include "UW_BarBase.h"
#include "Macros.h"

ABotCharacter::ABotCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
    WidgetComponent->SetupAttachment(GetRootComponent());

    WidgetComponent->SetWidgetSpace(EWidgetSpace::World);
    WidgetComponent->SetDrawSize(FVector2D(200.f, 10.f));
    WidgetComponent->SetRelativeLocation(FVector(0.f, 0.f, 120.f));
}

void ABotCharacter::BeginPlay()
{
    Super::BeginPlay();

    if (auto Bar = Cast<UUW_BarBase>(WidgetComponent->GetUserWidgetObject()))
        Bar->InitWithCharacterLogic(CharacterLogic);
    if (CharacterLogic)
        CharacterLogic->OnDeath.AddDynamic(this, &ABotCharacter::OnDeath);
}

void ABotCharacter::OnDeath(UItemLogic* ItemLogic)
{
    WidgetComponent->SetWidget(nullptr);
}