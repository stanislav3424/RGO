// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameInstance_Main.h"

#ifdef RGO_GameInstance_Main_generated_h
#error "GameInstance_Main.generated.h already included, missing '#pragma once' in GameInstance_Main.h"
#endif
#define RGO_GameInstance_Main_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UItemLogic;
enum class ESpawnActorCollisionHandlingMethod : uint8;
struct FBaseItemRow;

// ********** Begin ScriptStruct FBaseItemRow ******************************************************
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBaseItemRow_Statics; \
	RGO_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FBaseItemRow;
// ********** End ScriptStruct FBaseItemRow ********************************************************

// ********** Begin Class UGameInstance_Main *******************************************************
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAutomaticActivation); \
	DECLARE_FUNCTION(execGetRowNameByActorClass); \
	DECLARE_FUNCTION(execGetItemRowByActorClass); \
	DECLARE_FUNCTION(execSpawnActor); \
	DECLARE_FUNCTION(execCreateItemLogic); \
	DECLARE_FUNCTION(execGetItemRow);


RGO_API UClass* Z_Construct_UClass_UGameInstance_Main_NoRegister();

#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInstance_Main(); \
	friend struct Z_Construct_UClass_UGameInstance_Main_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RGO_API UClass* Z_Construct_UClass_UGameInstance_Main_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameInstance_Main, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RGO"), Z_Construct_UClass_UGameInstance_Main_NoRegister) \
	DECLARE_SERIALIZER(UGameInstance_Main)


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInstance_Main(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameInstance_Main(UGameInstance_Main&&) = delete; \
	UGameInstance_Main(const UGameInstance_Main&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInstance_Main); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstance_Main); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInstance_Main) \
	NO_API virtual ~UGameInstance_Main();


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h_22_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameInstance_Main;

// ********** End Class UGameInstance_Main *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
