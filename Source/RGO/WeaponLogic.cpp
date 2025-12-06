// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponLogic.h"
#include "Engine/World.h"
#include "Macros.h"
#include "TimerManager.h"
#include "WeaponActor.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Animation/AnimInstance.h"
#include "GameInstance_Main.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"

void UWeaponLogic::Initialize()
{
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

void UWeaponLogic::UploadingData()
{
    Super::UploadingData();

    if (!GameInstance_Main)
        return;

    auto Row    = GameInstance_Main->GetItemRowTyped<FWeaponItemRow>(ItemName);
    MaxAmmo     = Row.MaxAmmo;
    CurrentAmmo = MaxAmmo;
    Damage      = Row.Damage;
    RateFire    = 60.f / Row.RateFire;

    float WeaponMOA = 100.0f;
    MOARadians  = FMath::DegreesToRadians(WeaponMOA / 60.0f);

    //BulletEffect = Row.BulletEffect;
}

void UWeaponLogic::CheckField()
{
    Super::CheckField();

    CHECK_INDEX_NONE(MaxAmmo);
    CHECK_INDEX_NONE(CurrentAmmo);
    CHECK_INDEX_NONE(RateFire);
    CHECK_FIELD(ShootAnimMontage);
    CHECK_FIELD(ReloadAnimMontage);
    CHECK_FIELD(BulletEffect);
}

void UWeaponLogic::UpdateOwnerActor(AActor* Actor)
{
    Super::UpdateOwnerActor(Actor);

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

    FVector StartLocation;
    FVector EndLocation;

    PlayShootAnimation();
    CalculateShotDirection(StartLocation, EndLocation);
    SpawnBulletEffect(StartLocation, EndLocation);

    FHitResult HitResult;
    if (PerformLineTrace(StartLocation, EndLocation, HitResult))
    {
        ApplyDamage(HitResult, StartLocation, EndLocation);
    }

    HandleAmmo();
}

void UWeaponLogic::PlayShootAnimation()
{
    if (IsValid(AttachmentParent) && ShootAnimMontage)
        if (auto MeshComponent = AttachmentParent->GetMesh())
            if (auto AnimInstance = MeshComponent->GetAnimInstance())
                AnimInstance->Montage_Play(ShootAnimMontage);
}

void UWeaponLogic::SpawnBulletEffect(const FVector& StartLocation, const FVector& EndLocation)
{
    if (IsValid(AttachmentParent))
        if (auto MeshComponent = AttachmentParent->GetMesh())
        {
            auto Transform = MeshComponent->GetSocketTransform(TEXT("weapon_r_muzzle"));
            FRotator Rotator   = (EndLocation - StartLocation).Rotation();

            if (BulletEffect)
            {
                UNiagaraFunctionLibrary::SpawnSystemAtLocation(
                    GetWorld(), BulletEffect, Transform.GetLocation(), Rotator);
            }
        }
}

void UWeaponLogic::CalculateShotDirection(FVector& StartLocation, FVector& EndLocation)
{
    if (auto MeshComponent = AttachmentParent->GetMesh())
    {
        auto Transform = MeshComponent->GetSocketTransform(TEXT("weapon_r_muzzle"));
        StartLocation       = Transform.GetLocation();

        FVector Forward = AttachmentParent->GetActorRotation().Vector();

        

        FVector RandomSpread = FMath::VRandCone(Forward, MOARadians);

        EndLocation = StartLocation + RandomSpread * 2000.0f;
    }
}

bool UWeaponLogic::PerformLineTrace(const FVector& StartLocation, const FVector& EndLocation, FHitResult& OutHit)
{
    if (auto World = GetWorld())
    {
        FCollisionQueryParams Params;
        bool                  bHit = World->LineTraceSingleByChannel(OutHit, StartLocation, EndLocation, ECC_Visibility, Params);

        FColor TraceColor = bHit ? FColor::Red : FColor::Green;
        //DrawDebugLine(World, Start, bHit ? OutHit.Location : End, TraceColor, false, 1.0f);

        if (bHit)
            DrawDebugPoint(World, OutHit.Location, 10.0f, FColor::Red, false, 1.0f);

        return bHit;
    }
    return false;
}

void UWeaponLogic::ApplyDamage(const FHitResult& Hit, const FVector& Start, const FVector& End)
{
    auto HitActor = Hit.GetActor();
    if (HitActor && HitActor != AttachmentParent)
    {
        const FVector ShotDirection = (End - Start).GetSafeNormal();
        UGameplayStatics::ApplyPointDamage(
            HitActor, Damage, ShotDirection, Hit, nullptr, AttachmentParent, UDamageType::StaticClass());
    }
}

void UWeaponLogic::HandleAmmo()
{
    --CurrentAmmo;
    OnAmmoChanged.Broadcast(CurrentAmmo, MaxAmmo);

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

    OnAmmoChanged.Broadcast(CurrentAmmo, MaxAmmo);

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