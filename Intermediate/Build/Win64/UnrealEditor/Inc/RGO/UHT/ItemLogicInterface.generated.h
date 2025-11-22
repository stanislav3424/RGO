// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemLogicInterface.h"

#ifdef RGO_ItemLogicInterface_generated_h
#error "ItemLogicInterface.generated.h already included, missing '#pragma once' in ItemLogicInterface.h"
#endif
#define RGO_ItemLogicInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UItemLogic;

// ********** Begin Interface UItemLogicInterface **************************************************
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetItemLogic_Implementation(UItemLogic* NewItemLogic) {}; \
	virtual UItemLogic* GetItemLogic_Implementation() { return NULL; }; \
	DECLARE_FUNCTION(execSetItemLogic); \
	DECLARE_FUNCTION(execGetItemLogic);


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h_14_CALLBACK_WRAPPERS
RGO_API UClass* Z_Construct_UClass_UItemLogicInterface_NoRegister();

#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RGO_API UItemLogicInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UItemLogicInterface(UItemLogicInterface&&) = delete; \
	UItemLogicInterface(const UItemLogicInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RGO_API, UItemLogicInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemLogicInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemLogicInterface) \
	virtual ~UItemLogicInterface() = default;


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUItemLogicInterface(); \
	friend struct Z_Construct_UClass_UItemLogicInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RGO_API UClass* Z_Construct_UClass_UItemLogicInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UItemLogicInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RGO"), Z_Construct_UClass_UItemLogicInterface_NoRegister) \
	DECLARE_SERIALIZER(UItemLogicInterface)


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IItemLogicInterface() {} \
public: \
	typedef UItemLogicInterface UClassType; \
	typedef IItemLogicInterface ThisClass; \
	static UItemLogic* Execute_GetItemLogic(UObject* O); \
	static void Execute_SetItemLogic(UObject* O, UItemLogic* NewItemLogic); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h_11_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h_14_CALLBACK_WRAPPERS \
	FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UItemLogicInterface;

// ********** End Interface UItemLogicInterface ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
