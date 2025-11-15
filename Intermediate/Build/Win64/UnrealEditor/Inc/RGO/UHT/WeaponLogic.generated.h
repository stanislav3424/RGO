// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponLogic.h"

#ifdef RGO_WeaponLogic_generated_h
#error "WeaponLogic.generated.h already included, missing '#pragma once' in WeaponLogic.h"
#endif
#define RGO_WeaponLogic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EEquipmentSlot : uint8;
enum class EWeaponState : uint8;

// ********** Begin Class UWeaponLogic *************************************************************
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanReload); \
	DECLARE_FUNCTION(execGetIsShooting); \
	DECLARE_FUNCTION(execGetMaxAmmo); \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execGetEquipmentSlot); \
	DECLARE_FUNCTION(execReloadWeapon); \
	DECLARE_FUNCTION(execPerformShoot); \
	DECLARE_FUNCTION(execCanShoot); \
	DECLARE_FUNCTION(execShootCompleted); \
	DECLARE_FUNCTION(execShootStarted); \
	DECLARE_FUNCTION(execGetIsInputBlocked); \
	DECLARE_FUNCTION(execGetWeaponState);


RGO_API UClass* Z_Construct_UClass_UWeaponLogic_NoRegister();

#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponLogic(); \
	friend struct Z_Construct_UClass_UWeaponLogic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RGO_API UClass* Z_Construct_UClass_UWeaponLogic_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeaponLogic, UItemLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RGO"), Z_Construct_UClass_UWeaponLogic_NoRegister) \
	DECLARE_SERIALIZER(UWeaponLogic)


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeaponLogic(UWeaponLogic&&) = delete; \
	UWeaponLogic(const UWeaponLogic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponLogic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponLogic) \
	NO_API virtual ~UWeaponLogic();


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h_32_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h_35_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeaponLogic;

// ********** End Class UWeaponLogic ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h

// ********** Begin Enum EEquipmentSlot ************************************************************
#define FOREACH_ENUM_EEQUIPMENTSLOT(op) \
	op(EEquipmentSlot::RHand) 

enum class EEquipmentSlot : uint8;
template<> struct TIsUEnumClass<EEquipmentSlot> { enum { Value = true }; };
template<> RGO_API UEnum* StaticEnum<EEquipmentSlot>();
// ********** End Enum EEquipmentSlot **************************************************************

// ********** Begin Enum EGanSlot ******************************************************************
#define FOREACH_ENUM_EGANSLOT(op) \
	op(EGanSlot::Muzzle) 

enum class EGanSlot : uint8;
template<> struct TIsUEnumClass<EGanSlot> { enum { Value = true }; };
template<> RGO_API UEnum* StaticEnum<EGanSlot>();
// ********** End Enum EGanSlot ********************************************************************

// ********** Begin Enum EWeaponState **************************************************************
#define FOREACH_ENUM_EWEAPONSTATE(op) \
	op(EWeaponState::Idle) \
	op(EWeaponState::Shooting) \
	op(EWeaponState::Reloading) 

enum class EWeaponState : uint8;
template<> struct TIsUEnumClass<EWeaponState> { enum { Value = true }; };
template<> RGO_API UEnum* StaticEnum<EWeaponState>();
// ********** End Enum EWeaponState ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
