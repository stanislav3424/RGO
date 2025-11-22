// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UW_HUD.h"

#ifdef RGO_UW_HUD_generated_h
#error "UW_HUD.generated.h already included, missing '#pragma once' in UW_HUD.h"
#endif
#define RGO_UW_HUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APawn;

// ********** Begin Class UUW_HUD ******************************************************************
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_HUD_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAmmo); \
	DECLARE_FUNCTION(execSetStamina); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execUpdateWeapon); \
	DECLARE_FUNCTION(execSwitchControlledPawn);


RGO_API UClass* Z_Construct_UClass_UUW_HUD_NoRegister();

#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_HUD_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUW_HUD(); \
	friend struct Z_Construct_UClass_UUW_HUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RGO_API UClass* Z_Construct_UClass_UUW_HUD_NoRegister(); \
public: \
	DECLARE_CLASS2(UUW_HUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RGO"), Z_Construct_UClass_UUW_HUD_NoRegister) \
	DECLARE_SERIALIZER(UUW_HUD)


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_HUD_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUW_HUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUW_HUD(UUW_HUD&&) = delete; \
	UUW_HUD(const UUW_HUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUW_HUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUW_HUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUW_HUD) \
	NO_API virtual ~UUW_HUD();


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_HUD_h_17_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_HUD_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_HUD_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_HUD_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_HUD_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUW_HUD;

// ********** End Class UUW_HUD ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_HUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
