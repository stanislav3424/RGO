// Fill out your copyright notice in the Description page of Project Settings.

#include "AutoDoorActor.h"
#include "Components/BoxComponent.h"
#include "DoorLogic.h"

AAutoDoorActor::AAutoDoorActor()
{
    PrimaryActorTick.bCanEverTick = true;

    TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    TriggerBox->SetupAttachment(RootComponent);
    TriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    TriggerBox->SetCollisionResponseToAllChannels(ECR_Ignore);
    TriggerBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    TriggerBox->SetGenerateOverlapEvents(true);
    TriggerBox->SetBoxExtent(FVector(200.f, 200.f, 200.f));
}

void AAutoDoorActor::BeginPlay()
{
    Super::BeginPlay();

    if (TriggerBox)
    {
        TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AAutoDoorActor::OnTriggerBeginOverlap);
        TriggerBox->OnComponentEndOverlap.AddDynamic(this, &AAutoDoorActor::OnTriggerEndOverlap);
    }

}

void AAutoDoorActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void AAutoDoorActor::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (!OtherActor || OtherActor == this)
        return;

    if (TriggerClass && !OtherActor->IsA(TriggerClass))
        return;

    OverlappingActorsOfClass.Add(OtherActor);

    if (!bOnce)
        if (OverlappingActorsOfClass.Num() > 0)
            if (auto DoorLogic = Cast<UDoorLogic>(ItemLogic))
            {
                DoorLogic->OpenDoor();
                bOnce = true;
            }
}

void AAutoDoorActor::OnTriggerEndOverlap(
    UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (!OtherActor)
        return;

    if (TriggerClass && !OtherActor->IsA(TriggerClass))
        return;

    OverlappingActorsOfClass.Remove(OtherActor);

    if (OverlappingActorsOfClass.Num() == 0)
        if (auto DoorLogic = Cast<UDoorLogic>(ItemLogic))
        {
            DoorLogic->CloseDoor();
            bOnce = false;
        }
}