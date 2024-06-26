// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEON_DungeonPlayerController_generated_h
#error "DungeonPlayerController.generated.h already included, missing '#pragma once' in DungeonPlayerController.h"
#endif
#define DUNGEON_DungeonPlayerController_generated_h

#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonPlayerController(); \
	friend struct Z_Construct_UClass_ADungeonPlayerController_Statics; \
public: \
	DECLARE_CLASS(ADungeonPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dungeon"), NO_API) \
	DECLARE_SERIALIZER(ADungeonPlayerController)


#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADungeonPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeonPlayerController(ADungeonPlayerController&&); \
	ADungeonPlayerController(const ADungeonPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADungeonPlayerController) \
	NO_API virtual ~ADungeonPlayerController();


#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonPlayerController_h_14_PROLOG
#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEON_API UClass* StaticClass<class ADungeonPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
