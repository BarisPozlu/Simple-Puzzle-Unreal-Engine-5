// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dungeon/DefaultPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultPlayerController() {}

// Begin Cross Module References
DUNGEON_API UClass* Z_Construct_UClass_ADefaultPlayerController();
DUNGEON_API UClass* Z_Construct_UClass_ADefaultPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_Dungeon();
// End Cross Module References

// Begin Class ADefaultPlayerController
void ADefaultPlayerController::StaticRegisterNativesADefaultPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultPlayerController);
UClass* Z_Construct_UClass_ADefaultPlayerController_NoRegister()
{
	return ADefaultPlayerController::StaticClass();
}
struct Z_Construct_UClass_ADefaultPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DefaultPlayerController.h" },
		{ "ModuleRelativePath", "DefaultPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grabAction_MetaData[] = {
		{ "Category", "DefaultPlayerController" },
		{ "ModuleRelativePath", "DefaultPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_defaultMapping_MetaData[] = {
		{ "Category", "DefaultPlayerController" },
		{ "ModuleRelativePath", "DefaultPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_grabAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_defaultMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultPlayerController_Statics::NewProp_grabAction = { "grabAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultPlayerController, grabAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grabAction_MetaData), NewProp_grabAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultPlayerController_Statics::NewProp_defaultMapping = { "defaultMapping", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultPlayerController, defaultMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_defaultMapping_MetaData), NewProp_defaultMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultPlayerController_Statics::NewProp_grabAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultPlayerController_Statics::NewProp_defaultMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADefaultPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultPlayerController_Statics::ClassParams = {
	&ADefaultPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADefaultPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefaultPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefaultPlayerController()
{
	if (!Z_Registration_Info_UClass_ADefaultPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultPlayerController.OuterSingleton, Z_Construct_UClass_ADefaultPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefaultPlayerController.OuterSingleton;
}
template<> DUNGEON_API UClass* StaticClass<ADefaultPlayerController>()
{
	return ADefaultPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultPlayerController);
ADefaultPlayerController::~ADefaultPlayerController() {}
// End Class ADefaultPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DefaultPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultPlayerController, ADefaultPlayerController::StaticClass, TEXT("ADefaultPlayerController"), &Z_Registration_Info_UClass_ADefaultPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultPlayerController), 3987617210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DefaultPlayerController_h_2610120355(TEXT("/Script/Dungeon"),
	Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DefaultPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DefaultPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
