// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dungeon/GrabComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabComponent() {}

// Begin Cross Module References
DUNGEON_API UClass* Z_Construct_UClass_UGrabComponent();
DUNGEON_API UClass* Z_Construct_UClass_UGrabComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_Dungeon();
// End Cross Module References

// Begin Class UGrabComponent
void UGrabComponent::StaticRegisterNativesUGrabComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrabComponent);
UClass* Z_Construct_UClass_UGrabComponent_NoRegister()
{
	return UGrabComponent::StaticClass();
}
struct Z_Construct_UClass_UGrabComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GrabComponent.h" },
		{ "ModuleRelativePath", "GrabComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGrabComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrabComponent_Statics::ClassParams = {
	&UGrabComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrabComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGrabComponent()
{
	if (!Z_Registration_Info_UClass_UGrabComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrabComponent.OuterSingleton, Z_Construct_UClass_UGrabComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGrabComponent.OuterSingleton;
}
template<> DUNGEON_API UClass* StaticClass<UGrabComponent>()
{
	return UGrabComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabComponent);
UGrabComponent::~UGrabComponent() {}
// End Class UGrabComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_GrabComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGrabComponent, UGrabComponent::StaticClass, TEXT("UGrabComponent"), &Z_Registration_Info_UClass_UGrabComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrabComponent), 2877295252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_GrabComponent_h_2188918711(TEXT("/Script/Dungeon"),
	Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_GrabComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_GrabComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
