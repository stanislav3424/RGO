// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD_Main.h"

#ifdef RGO_HUD_Main_generated_h
#error "HUD_Main.generated.h already included, missing '#pragma once' in HUD_Main.h"
#endif
#define RGO_HUD_Main_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHUD_Main ****************************************************************
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_HUD_Main_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGameEndDelayComplete); \
	DECLARE_FUNCTION(execGameHasEnded); \
	DECLARE_FUNCTION(execTogglePauseWidget); \
	DECLARE_FUNCTION(execAddUserWidget);


RGO_API UClass* Z_Construct_UClass_AHUD_Main_NoRegister();

#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_HUD_Main_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHUD_Main(); \
	friend struct Z_Construct_UClass_AHUD_Main_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RGO_API UClass* Z_Construct_UClass_AHUD_Main_NoRegister(); \
public: \
	DECLARE_CLASS2(AHUD_Main, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RGO"), Z_Construct_UClass_AHUD_Main_NoRegister) \
	DECLARE_SERIALIZER(AHUD_Main)


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_HUD_Main_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHUD_Main(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHUD_Main(AHUD_Main&&) = delete; \
	AHUD_Main(const AHUD_Main&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUD_Main); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUD_Main); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUD_Main) \
	NO_API virtual ~AHUD_Main();


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_HUD_Main_h_12_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_HUD_Main_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_HUD_Main_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_HUD_Main_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_HUD_Main_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHUD_Main;

// ********** End Class AHUD_Main ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_HUD_Main_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
