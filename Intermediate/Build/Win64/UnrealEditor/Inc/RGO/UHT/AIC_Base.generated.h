// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIC_Base.h"

#ifdef RGO_AIC_Base_generated_h
#error "AIC_Base.generated.h already included, missing '#pragma once' in AIC_Base.h"
#endif
#define RGO_AIC_Base_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAIC_Base ****************************************************************
RGO_API UClass* Z_Construct_UClass_AAIC_Base_NoRegister();

#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_AIC_Base_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIC_Base(); \
	friend struct Z_Construct_UClass_AAIC_Base_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RGO_API UClass* Z_Construct_UClass_AAIC_Base_NoRegister(); \
public: \
	DECLARE_CLASS2(AAIC_Base, ADetourCrowdAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RGO"), Z_Construct_UClass_AAIC_Base_NoRegister) \
	DECLARE_SERIALIZER(AAIC_Base)


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_AIC_Base_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIC_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAIC_Base(AAIC_Base&&) = delete; \
	AAIC_Base(const AAIC_Base&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIC_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIC_Base); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIC_Base) \
	NO_API virtual ~AAIC_Base();


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_AIC_Base_h_12_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_AIC_Base_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_AIC_Base_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_AIC_Base_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAIC_Base;

// ********** End Class AAIC_Base ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_AIC_Base_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
