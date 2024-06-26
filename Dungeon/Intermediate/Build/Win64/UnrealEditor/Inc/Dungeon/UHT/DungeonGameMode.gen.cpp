// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dungeon/DungeonGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGameMode() {}

// Begin Cross Module References
DUNGEON_API UClass* Z_Construct_UClass_ADungeonGameMode();
DUNGEON_API UClass* Z_Construct_UClass_ADungeonGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Dungeon();
// End Cross Module References

// Begin Class ADungeonGameMode
void ADungeonGameMode::StaticRegisterNativesADungeonGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonGameMode);
UClass* Z_Construct_UClass_ADungeonGameMode_NoRegister()
{
	return ADungeonGameMode::StaticClass();
}
struct Z_Construct_UClass_ADungeonGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DungeonGameMode.h" },
		{ "ModuleRelativePath", "DungeonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADungeonGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonGameMode_Statics::ClassParams = {
	&ADungeonGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonGameMode()
{
	if (!Z_Registration_Info_UClass_ADungeonGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonGameMode.OuterSingleton, Z_Construct_UClass_ADungeonGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonGameMode.OuterSingleton;
}
template<> DUNGEON_API UClass* StaticClass<ADungeonGameMode>()
{
	return ADungeonGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonGameMode);
ADungeonGameMode::~ADungeonGameMode() {}
// End Class ADungeonGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonGameMode, ADungeonGameMode::StaticClass, TEXT("ADungeonGameMode"), &Z_Registration_Info_UClass_ADungeonGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonGameMode), 2512073437U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonGameMode_h_3964719285(TEXT("/Script/Dungeon"),
	Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
