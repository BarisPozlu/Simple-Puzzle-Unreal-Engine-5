// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoxTriggerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMoveComponent;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DUNGEON_BoxTriggerComponent_generated_h
#error "BoxTriggerComponent.generated.h already included, missing '#pragma once' in BoxTriggerComponent.h"
#endif
#define DUNGEON_BoxTriggerComponent_generated_h

#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_BoxTriggerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMoveComponent); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_BoxTriggerComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoxTriggerComponent(); \
	friend struct Z_Construct_UClass_UBoxTriggerComponent_Statics; \
public: \
	DECLARE_CLASS(UBoxTriggerComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dungeon"), NO_API) \
	DECLARE_SERIALIZER(UBoxTriggerComponent)


#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_BoxTriggerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBoxTriggerComponent(UBoxTriggerComponent&&); \
	UBoxTriggerComponent(const UBoxTriggerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoxTriggerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoxTriggerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBoxTriggerComponent) \
	NO_API virtual ~UBoxTriggerComponent();


#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_BoxTriggerComponent_h_11_PROLOG
#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_BoxTriggerComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_BoxTriggerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_BoxTriggerComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_BoxTriggerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEON_API UClass* StaticClass<class UBoxTriggerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_BoxTriggerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
