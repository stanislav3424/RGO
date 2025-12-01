// Fill out your copyright notice in the Description page of Project Settings.


#include "AIC_Base.h"
#include "Macros.h"

void AAIC_Base::BeginPlay()
{
    Super::BeginPlay();

    CHECK_FIELD(BehaviorTree)

    StartBehaviorTree();
}

void AAIC_Base::StartBehaviorTree()
{
    if (BehaviorTree)
        RunBehaviorTree(BehaviorTree);
}