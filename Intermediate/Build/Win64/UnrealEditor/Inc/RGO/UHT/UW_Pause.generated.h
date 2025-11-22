// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UW_Pause.h"

#ifdef RGO_UW_Pause_generated_h
#error "UW_Pause.generated.h already included, missing '#pragma once' in UW_Pause.h"
#endif
#define RGO_UW_Pause_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUW_Pause ****************************************************************
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_Pause_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnMainMenuClicked); \
	DECLARE_FUNCTION(execOnRestartClicked); \
	DECLARE_FUNCTION(execOnResumeClicked);


RGO_API UClass* Z_Construct_UClass_UUW_Pause_NoRegister();

#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_Pause_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUW_Pause(); \
	friend struct Z_Construct_UClass_UUW_Pause_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RGO_API UClass* Z_Construct_UClass_UUW_Pause_NoRegister(); \
public: \
	DECLARE_CLASS2(UUW_Pause, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RGO"), Z_Construct_UClass_UUW_Pause_NoRegister) \
	DECLARE_SERIALIZER(UUW_Pause)


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_Pause_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUW_Pause(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUW_Pause(UUW_Pause&&) = delete; \
	UUW_Pause(const UUW_Pause&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUW_Pause); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUW_Pause); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUW_Pause) \
	NO_API virtual ~UUW_Pause();


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_Pause_h_14_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_Pause_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_Pause_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_Pause_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_Pause_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUW_Pause;

// ********** End Class UUW_Pause ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_Pause_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
