// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeon_init() {}
	DUNGEON_API UFunction* Z_Construct_UDelegateFunction_Dungeon_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Dungeon;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Dungeon()
	{
		if (!Z_Registration_Info_UPackage__Script_Dungeon.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Dungeon_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Dungeon",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x961E4888,
				0x9888351C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Dungeon.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Dungeon.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Dungeon(Z_Construct_UPackage__Script_Dungeon, TEXT("/Script/Dungeon"), Z_Registration_Info_UPackage__Script_Dungeon, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x961E4888, 0x9888351C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
