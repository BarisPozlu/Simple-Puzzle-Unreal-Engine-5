// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DUNGEON_DungeonProjectile_generated_h
#error "DungeonProjectile.generated.h already included, missing '#pragma once' in DungeonProjectile.h"
#endif
#define DUNGEON_DungeonProjectile_generated_h

#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonProjectile(); \
	friend struct Z_Construct_UClass_ADungeonProjectile_Statics; \
public: \
	DECLARE_CLASS(ADungeonProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dungeon"), NO_API) \
	DECLARE_SERIALIZER(ADungeonProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeonProjectile(ADungeonProjectile&&); \
	ADungeonProjectile(const ADungeonProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonProjectile) \
	NO_API virtual ~ADungeonProjectile();


#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonProjectile_h_12_PROLOG
#define FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEON_API UClass* StaticClass<class ADungeonProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_pantb_Documents_Unreal_Projects_Dungeon_Source_Dungeon_DungeonProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
