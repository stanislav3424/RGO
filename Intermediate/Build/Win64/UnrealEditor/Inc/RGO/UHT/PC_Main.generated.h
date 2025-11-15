// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PC_Main.h"

#ifdef RGO_PC_Main_generated_h
#error "PC_Main.generated.h already included, missing '#pragma once' in PC_Main.h"
#endif
#define RGO_PC_Main_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APC_Main *****************************************************************
RGO_API UClass* Z_Construct_UClass_APC_Main_NoRegister();

#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_PC_Main_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPC_Main(); \
	friend struct Z_Construct_UClass_APC_Main_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RGO_API UClass* Z_Construct_UClass_APC_Main_NoRegister(); \
public: \
	DECLARE_CLASS2(APC_Main, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RGO"), Z_Construct_UClass_APC_Main_NoRegister) \
	DECLARE_SERIALIZER(APC_Main)


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_PC_Main_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APC_Main(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APC_Main(APC_Main&&) = delete; \
	APC_Main(const APC_Main&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APC_Main); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APC_Main); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APC_Main) \
	NO_API virtual ~APC_Main();


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_PC_Main_h_24_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_PC_Main_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_PC_Main_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_PC_Main_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APC_Main;

// ********** End Class APC_Main *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_PC_Main_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
