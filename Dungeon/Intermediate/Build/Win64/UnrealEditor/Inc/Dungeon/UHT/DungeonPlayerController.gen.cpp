// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dungeon/DungeonPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonPlayerController() {}

// Begin Cross Module References
DUNGEON_API UClass* Z_Construct_UClass_ADungeonPlayerController();
DUNGEON_API UClass* Z_Construct_UClass_ADungeonPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_Dungeon();
// End Cross Module References

// Begin Class ADungeonPlayerController
void ADungeonPlayerController::StaticRegisterNativesADungeonPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonPlayerController);
UClass* Z_Construct_UClass_ADungeonPlayerController_NoRegister()
{
	return ADungeonPlayerController::StaticClass();
}
struct Z_Construct_UClass_ADungeonPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DungeonPlayerController.h" },
		{ "ModuleRelativePath", "DungeonPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "DungeonPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonPlayerController_Statics::ClassParams = {
	&ADungeonPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonPlayerController()
{
	if (!Z_Registration_Info_UClass_ADungeonPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonPlayerController.OuterSingleton, Z_Construct_UClass_ADungeonPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonPlayerController.OuterSingleton;
}
template<> DUNGEON_API UClass* StaticClass<ADungeonPlayerController>()
{
	return ADungeonPlayerController::StaticClass();
}
ADungeonPlayerController::ADungeonPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonPlayerController);
ADungeonPlayerController::~ADungeonPlayerController() {}
// End Class ADungeonPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonPlayerController, ADungeonPlayerController::StaticClass, TEXT("ADungeonPlayerController"), &Z_Registration_Info_UClass_ADungeonPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonPlayerController), 3180760387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonPlayerController_h_2435907071(TEXT("/Script/Dungeon"),
	Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
