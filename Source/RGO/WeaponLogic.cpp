// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponLogic.h"
#include "Engine/World.h"
#include "Macros.h"
#include "TimerManager.h"
#include "WeaponActor.h"
#include "GameFramework/Character.h"
#include "Animation/AnimInstance.h"

UWeaponLogic::UWeaponLogic()
{
}

void UWeaponLogic::Initialize()
{
    CurrentAmmo        = MaxAmmo;
    CurrentWeaponState = EWeaponState::Idle;
    bIsInputBlocked    = false;

    Super::Initialize();
}

void UWeaponLogic::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void UWeaponLogic::Shutdown()
{
    StopShooting();
    CancelReload();
    Super::Shutdown();
}

void UWeaponLogic::CheckField()
{
    Super::CheckField();

    CHECK_INDEX_NONE(MaxAmmo);
    CHECK_INDEX_NONE(CurrentAmmo);
    CHECK_INDEX_NONE(RateFire);
}

bool UWeaponLogic::SetAttachmentParent(AActor* Actor)
{
    if (IsValid(Actor))
        if (auto Character = Cast<ACharacter>(Actor))
        {
            AttachmentParent = Character;
            return true;
        }

    return false;
}

bool UWeaponLogic::ShootStarted()
{
    if (bIsInputBlocked || CurrentWeaponState == EWeaponState::Reloading)
        return false;

    if (!CanShoot())
        if (CurrentAmmo <= 0 && bAutoReload)
        {
            ReloadWeapon();
            return false;
        }

    if (CurrentWeaponState == EWeaponState::Shooting)
        return true;

    CurrentWeaponState = EWeaponState::Shooting;

    PerformShoot();

    if (auto World = GetWorld())
        World->GetTimerManager().SetTimer(ShootTimerHandle, this, &UWeaponLogic::ShootTimerElapsed, RateFire, true);

    return true;
}

bool UWeaponLogic::ShootCompleted()
{
    if (CurrentWeaponState != EWeaponState::Shooting)
        return false;

    StopShooting();
    return true;
}

bool UWeaponLogic::CanShoot() const
{
      return CurrentAmmo > 0 &&
           (CurrentWeaponState == EWeaponState::Idle || CurrentWeaponState == EWeaponState::Shooting) &&
           !bIsInputBlocked;
}

void UWeaponLogic::PerformShoot()
{
    if (CurrentAmmo <= 0)
    {
        StopShooting();
        return;
    }

    if (IsValid(AttachmentParent) && ShootAnimMontage)
        if (auto MeshComponent = AttachmentParent->GetMesh())
            if (auto AnimInstance = MeshComponent->GetAnimInstance())
                AnimInstance->Montage_Play(ShootAnimMontage);

    if (IsValid(AttachmentParent))
        if (auto MeshComponent = AttachmentParent->GetMesh())
        {
            auto Transform = MeshComponent->GetSocketTransform(TEXT("weapon_r_muzzle"));
            auto Rotator   = AttachmentParent->GetActorRotation();

            FVector StartLocation = Transform.GetLocation();
            FVector EndLocation   = StartLocation + Rotator.Vector() * 1000.0f;

            FHitResult            HitResult;
            FCollisionQueryParams CollisionParams;

            if (auto World = GetWorld())
            {
                World->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, CollisionParams);

                FColor TraceColor = HitResult.bBlockingHit ? FColor::Red : FColor::Green;
                float  DrawTime   = 5.0f;

                DrawDebugLine(GetWorld(), StartLocation, HitResult.bBlockingHit ? HitResult.Location : EndLocation,
                    TraceColor, false, DrawTime);

                if (HitResult.bBlockingHit)
                    DrawDebugPoint(GetWorld(), HitResult.Location, 10.0f, FColor::Red, false, DrawTime);
            }
        }

    --CurrentAmmo;

    if (CurrentAmmo <= 0)
    {
        StopShooting();

        if (bAutoReload)
            if (auto World = GetWorld())
                World->GetTimerManager().SetTimer(
                    ReloadTimerHandle, this, &UWeaponLogic::StartReload, AutoReloadDelay, false);
    }
}

void UWeaponLogic::ShootTimerElapsed()
{
    if (CurrentWeaponState == EWeaponState::Shooting && CanShoot())
        PerformShoot();
    else
        StopShooting();
}

void UWeaponLogic::StopShooting()
{
    if (CurrentWeaponState == EWeaponState::Shooting)
        CurrentWeaponState = EWeaponState::Idle;

    if (auto World = GetWorld())
        World->GetTimerManager().ClearTimer(ShootTimerHandle);
}

bool UWeaponLogic::CanReload() const
{
    return CurrentWeaponState != EWeaponState::Reloading && CurrentAmmo < MaxAmmo && !bIsInputBlocked;
}

bool UWeaponLogic::ReloadWeapon()
{
    if (!CanReload())
        return false;

    StartReload();
    return true;
}

void UWeaponLogic::StartReload()
{
    StopShooting();

    CurrentWeaponState = EWeaponState::Reloading;
    bIsInputBlocked    = true;

    float ReloadDuration = 2.0f;
    if (IsValid(AttachmentParent) && ReloadAnimMontage)
        if (auto MeshComponent = AttachmentParent->GetMesh())
            if (auto AnimInstance = MeshComponent->GetAnimInstance())
                ReloadDuration = AnimInstance->Montage_Play(ReloadAnimMontage);

    if (auto World = GetWorld())
        World->GetTimerManager().SetTimer(ReloadTimerHandle, this, &UWeaponLogic::FinishReload, ReloadDuration, false);
}

void UWeaponLogic::FinishReload()
{
    CurrentAmmo        = MaxAmmo;
    CurrentWeaponState = EWeaponState::Idle;
    bIsInputBlocked    = false;

    if (auto World = GetWorld())
        World->GetTimerManager().ClearTimer(ReloadTimerHandle);
}

void UWeaponLogic::CancelReload()
{
    if (CurrentWeaponState == EWeaponState::Reloading)
    {
        CurrentWeaponState = EWeaponState::Idle;
        bIsInputBlocked    = false;

        if (IsValid(AttachmentParent) && ReloadAnimMontage)
            if (auto MeshComponent = AttachmentParent->GetMesh())
                if (auto AnimInstance = MeshComponent->GetAnimInstance())
                    AnimInstance->Montage_Stop(0.2f, ReloadAnimMontage);

        if (auto World = GetWorld())
            World->GetTimerManager().ClearTimer(ReloadTimerHandle);
    }
}