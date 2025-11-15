// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemLogic.h"

#ifdef RGO_ItemLogic_generated_h
#error "ItemLogic.generated.h already included, missing '#pragma once' in ItemLogic.h"
#endif
#define RGO_ItemLogic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AController;
class UDamageType;
enum class ESpawnActorCollisionHandlingMethod : uint8;

// ********** Begin Class UItemLogic ***************************************************************
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogic_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCanTakeDamage); \
	DECLARE_FUNCTION(execGetCanTakeDamage); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execHandleOwnerDamage); \
	DECLARE_FUNCTION(execGetOwnerActor); \
	DECLARE_FUNCTION(execSetOwnerActorTransform); \
	DECLARE_FUNCTION(execSetOwnerActorLocation); \
	DECLARE_FUNCTION(execDestroyOwnerActor); \
	DECLARE_FUNCTION(execSetOwnerActor); \
	DECLARE_FUNCTION(execSpawnOwnerActor);


RGO_API UClass* Z_Construct_UClass_UItemLogic_NoRegister();

#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogic_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemLogic(); \
	friend struct Z_Construct_UClass_UItemLogic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RGO_API UClass* Z_Construct_UClass_UItemLogic_NoRegister(); \
public: \
	DECLARE_CLASS2(UItemLogic, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RGO"), Z_Construct_UClass_UItemLogic_NoRegister) \
	DECLARE_SERIALIZER(UItemLogic)


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogic_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UItemLogic(UItemLogic&&) = delete; \
	UItemLogic(const UItemLogic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemLogic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemLogic) \
	NO_API virtual ~UItemLogic();


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogic_h_9_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogic_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogic_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogic_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogic_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UItemLogic;

// ********** End Class UItemLogic *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
