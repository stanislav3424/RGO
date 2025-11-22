// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RGOGameModeBase.h"

#ifdef RGO_RGOGameModeBase_generated_h
#error "RGOGameModeBase.generated.h already included, missing '#pragma once' in RGOGameModeBase.h"
#endif
#define RGO_RGOGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARGOGameModeBase *********************************************************
RGO_API UClass* Z_Construct_UClass_ARGOGameModeBase_NoRegister();

#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_RGOGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARGOGameModeBase(); \
	friend struct Z_Construct_UClass_ARGOGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RGO_API UClass* Z_Construct_UClass_ARGOGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ARGOGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RGO"), Z_Construct_UClass_ARGOGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(ARGOGameModeBase)


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_RGOGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARGOGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARGOGameModeBase(ARGOGameModeBase&&) = delete; \
	ARGOGameModeBase(const ARGOGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARGOGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARGOGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARGOGameModeBase) \
	NO_API virtual ~ARGOGameModeBase();


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_RGOGameModeBase_h_12_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_RGOGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_RGOGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_RGOGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARGOGameModeBase;

// ********** End Class ARGOGameModeBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_RGOGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
