// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRGO_init() {}
	RGO_API UFunction* Z_Construct_UDelegateFunction_RGO_OnAmmoChanged__DelegateSignature();
	RGO_API UFunction* Z_Construct_UDelegateFunction_RGO_OnEquipmentChanged__DelegateSignature();
	RGO_API UFunction* Z_Construct_UDelegateFunction_RGO_OnHealthChanged__DelegateSignature();
	RGO_API UFunction* Z_Construct_UDelegateFunction_RGO_OnStaminaChanged__DelegateSignature();
	RGO_API UFunction* Z_Construct_UDelegateFunction_RGO_OnTogglePauseWidget__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RGO;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RGO()
	{
		if (!Z_Registration_Info_UPackage__Script_RGO.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RGO_OnAmmoChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RGO_OnEquipmentChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RGO_OnHealthChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RGO_OnStaminaChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RGO_OnTogglePauseWidget__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RGO",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x44CDA8FA,
				0xB5F420FA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RGO.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RGO.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RGO(Z_Construct_UPackage__Script_RGO, TEXT("/Script/RGO"), Z_Registration_Info_UPackage__Script_RGO, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x44CDA8FA, 0xB5F420FA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
