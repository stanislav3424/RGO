// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponActor.h"

#ifdef RGO_WeaponActor_generated_h
#error "WeaponActor.generated.h already included, missing '#pragma once' in WeaponActor.h"
#endif
#define RGO_WeaponActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWeaponActor *************************************************************
RGO_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();

#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponActor(); \
	friend struct Z_Construct_UClass_AWeaponActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RGO_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AWeaponActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RGO"), Z_Construct_UClass_AWeaponActor_NoRegister) \
	DECLARE_SERIALIZER(AWeaponActor) \
	virtual UObject* _getUObject() const override { return const_cast<AWeaponActor*>(this); }


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponActor_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWeaponActor(AWeaponActor&&) = delete; \
	AWeaponActor(const AWeaponActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponActor) \
	NO_API virtual ~AWeaponActor();


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponActor_h_12_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWeaponActor;

// ********** End Class AWeaponActor ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
