// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dungeon/BoxTriggerComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxTriggerComponent() {}

// Begin Cross Module References
DUNGEON_API UClass* Z_Construct_UClass_UBoxTriggerComponent();
DUNGEON_API UClass* Z_Construct_UClass_UBoxTriggerComponent_NoRegister();
DUNGEON_API UClass* Z_Construct_UClass_UMoveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_Dungeon();
// End Cross Module References

// Begin Class UBoxTriggerComponent Function OnOverlapBegin
struct Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics
{
	struct BoxTriggerComponent_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxTriggerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxTriggerComponent_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxTriggerComponent_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxTriggerComponent_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxTriggerComponent_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((BoxTriggerComponent_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BoxTriggerComponent_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxTriggerComponent_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxTriggerComponent, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::BoxTriggerComponent_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::BoxTriggerComponent_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBoxTriggerComponent::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class UBoxTriggerComponent Function OnOverlapBegin

// Begin Class UBoxTriggerComponent Function OnOverlapEnd
struct Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics
{
	struct BoxTriggerComponent_eventOnOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxTriggerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxTriggerComponent_eventOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxTriggerComponent_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxTriggerComponent_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxTriggerComponent_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxTriggerComponent, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::BoxTriggerComponent_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::BoxTriggerComponent_eventOnOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBoxTriggerComponent::execOnOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class UBoxTriggerComponent Function OnOverlapEnd

// Begin Class UBoxTriggerComponent Function SetMoveComponent
struct Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent_Statics
{
	struct BoxTriggerComponent_eventSetMoveComponent_Parms
	{
		UMoveComponent* moveComponentIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxTriggerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveComponentIn_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_moveComponentIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent_Statics::NewProp_moveComponentIn = { "moveComponentIn", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxTriggerComponent_eventSetMoveComponent_Parms, moveComponentIn), Z_Construct_UClass_UMoveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveComponentIn_MetaData), NewProp_moveComponentIn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent_Statics::NewProp_moveComponentIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxTriggerComponent, nullptr, "SetMoveComponent", nullptr, nullptr, Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent_Statics::BoxTriggerComponent_eventSetMoveComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent_Statics::BoxTriggerComponent_eventSetMoveComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBoxTriggerComponent::execSetMoveComponent)
{
	P_GET_OBJECT(UMoveComponent,Z_Param_moveComponentIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMoveComponent(Z_Param_moveComponentIn);
	P_NATIVE_END;
}
// End Class UBoxTriggerComponent Function SetMoveComponent

// Begin Class UBoxTriggerComponent
void UBoxTriggerComponent::StaticRegisterNativesUBoxTriggerComponent()
{
	UClass* Class = UBoxTriggerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &UBoxTriggerComponent::execOnOverlapBegin },
		{ "OnOverlapEnd", &UBoxTriggerComponent::execOnOverlapEnd },
		{ "SetMoveComponent", &UBoxTriggerComponent::execSetMoveComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoxTriggerComponent);
UClass* Z_Construct_UClass_UBoxTriggerComponent_NoRegister()
{
	return UBoxTriggerComponent::StaticClass();
}
struct Z_Construct_UClass_UBoxTriggerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "BoxTriggerComponent.h" },
		{ "ModuleRelativePath", "BoxTriggerComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapBegin, "OnOverlapBegin" }, // 3442515722
		{ &Z_Construct_UFunction_UBoxTriggerComponent_OnOverlapEnd, "OnOverlapEnd" }, // 3411529226
		{ &Z_Construct_UFunction_UBoxTriggerComponent_SetMoveComponent, "SetMoveComponent" }, // 2766888920
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoxTriggerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBoxTriggerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBoxComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoxTriggerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoxTriggerComponent_Statics::ClassParams = {
	&UBoxTriggerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoxTriggerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoxTriggerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoxTriggerComponent()
{
	if (!Z_Registration_Info_UClass_UBoxTriggerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoxTriggerComponent.OuterSingleton, Z_Construct_UClass_UBoxTriggerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoxTriggerComponent.OuterSingleton;
}
template<> DUNGEON_API UClass* StaticClass<UBoxTriggerComponent>()
{
	return UBoxTriggerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoxTriggerComponent);
UBoxTriggerComponent::~UBoxTriggerComponent() {}
// End Class UBoxTriggerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_BoxTriggerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBoxTriggerComponent, UBoxTriggerComponent::StaticClass, TEXT("UBoxTriggerComponent"), &Z_Registration_Info_UClass_UBoxTriggerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoxTriggerComponent), 3268240207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_BoxTriggerComponent_h_612373995(TEXT("/Script/Dungeon"),
	Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_BoxTriggerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_BoxTriggerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
