// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterLogic.h"

#ifdef RGO_CharacterLogic_generated_h
#error "CharacterLogic.generated.h already included, missing '#pragma once' in CharacterLogic.h"
#endif
#define RGO_CharacterLogic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UItemLogic;
class UWeaponLogic;
enum class EEquipmentSlot : uint8;
enum class EMovementState : uint8;
enum class ETypeMovementState : uint8;

// ********** Begin Class UCharacterLogic **********************************************************
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetItemInSlot); \
	DECLARE_FUNCTION(execTakeOffItem); \
	DECLARE_FUNCTION(execEquipItem); \
	DECLARE_FUNCTION(execGetTypeMovementState); \
	DECLARE_FUNCTION(execGetMovementState); \
	DECLARE_FUNCTION(execHandleRunInput); \
	DECLARE_FUNCTION(execCommandReloadWeapon); \
	DECLARE_FUNCTION(execCommandShootCompleted); \
	DECLARE_FUNCTION(execCommandShootStarted);


RGO_API UClass* Z_Construct_UClass_UCharacterLogic_NoRegister();

#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterLogic(); \
	friend struct Z_Construct_UClass_UCharacterLogic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RGO_API UClass* Z_Construct_UClass_UCharacterLogic_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterLogic, UItemLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RGO"), Z_Construct_UClass_UCharacterLogic_NoRegister) \
	DECLARE_SERIALIZER(UCharacterLogic)


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterLogic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterLogic(UCharacterLogic&&) = delete; \
	UCharacterLogic(const UCharacterLogic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterLogic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterLogic) \
	NO_API virtual ~UCharacterLogic();


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h_28_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h_31_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterLogic;

// ********** End Class UCharacterLogic ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h

// ********** Begin Enum EMovementState ************************************************************
#define FOREACH_ENUM_EMOVEMENTSTATE(op) \
	op(EMovementState::Idle) \
	op(EMovementState::Walk) \
	op(EMovementState::Run) 

enum class EMovementState : uint8;
template<> struct TIsUEnumClass<EMovementState> { enum { Value = true }; };
template<> RGO_API UEnum* StaticEnum<EMovementState>();
// ********** End Enum EMovementState **************************************************************

// ********** Begin Enum ETypeMovementState ********************************************************
#define FOREACH_ENUM_ETYPEMOVEMENTSTATE(op) \
	op(ETypeMovementState::Unarmed) \
	op(ETypeMovementState::Rifle) 

enum class ETypeMovementState : uint8;
template<> struct TIsUEnumClass<ETypeMovementState> { enum { Value = true }; };
template<> RGO_API UEnum* StaticEnum<ETypeMovementState>();
// ********** End Enum ETypeMovementState **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
