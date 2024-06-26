// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEON_DefaultPlayerController_generated_h
#error "DefaultPlayerController.generated.h already included, missing '#pragma once' in DefaultPlayerController.h"
#endif
#define DUNGEON_DefaultPlayerController_generated_h

#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DefaultPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultPlayerController(); \
	friend struct Z_Construct_UClass_ADefaultPlayerController_Statics; \
public: \
	DECLARE_CLASS(ADefaultPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dungeon"), NO_API) \
	DECLARE_SERIALIZER(ADefaultPlayerController)


#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DefaultPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADefaultPlayerController(ADefaultPlayerController&&); \
	ADefaultPlayerController(const ADefaultPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultPlayerController) \
	NO_API virtual ~ADefaultPlayerController();


#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DefaultPlayerController_h_17_PROLOG
#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DefaultPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DefaultPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DefaultPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEON_API UClass* StaticClass<class ADefaultPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DefaultPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
