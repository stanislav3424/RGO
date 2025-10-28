// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_Actor.h"

#ifdef RGO_CPP_Actor_generated_h
#error "CPP_Actor.generated.h already included, missing '#pragma once' in CPP_Actor.h"
#endif
#define RGO_CPP_Actor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACPP_Actor ***************************************************************
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CPP_Actor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSinMovement);


RGO_API UClass* Z_Construct_UClass_ACPP_Actor_NoRegister();

#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CPP_Actor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_Actor(); \
	friend struct Z_Construct_UClass_ACPP_Actor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RGO_API UClass* Z_Construct_UClass_ACPP_Actor_NoRegister(); \
public: \
	DECLARE_CLASS2(ACPP_Actor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RGO"), Z_Construct_UClass_ACPP_Actor_NoRegister) \
	DECLARE_SERIALIZER(ACPP_Actor)


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CPP_Actor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACPP_Actor(ACPP_Actor&&) = delete; \
	ACPP_Actor(const ACPP_Actor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_Actor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_Actor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_Actor) \
	NO_API virtual ~ACPP_Actor();


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CPP_Actor_h_9_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CPP_Actor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CPP_Actor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CPP_Actor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CPP_Actor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACPP_Actor;

// ********** End Class ACPP_Actor *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CPP_Actor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
