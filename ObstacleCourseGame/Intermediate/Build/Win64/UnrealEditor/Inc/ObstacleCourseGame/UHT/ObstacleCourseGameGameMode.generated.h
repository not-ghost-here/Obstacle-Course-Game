// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObstacleCourseGameGameMode.h"

#ifdef OBSTACLECOURSEGAME_ObstacleCourseGameGameMode_generated_h
#error "ObstacleCourseGameGameMode.generated.h already included, missing '#pragma once' in ObstacleCourseGameGameMode.h"
#endif
#define OBSTACLECOURSEGAME_ObstacleCourseGameGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AObstacleCourseGameGameMode **********************************************
OBSTACLECOURSEGAME_API UClass* Z_Construct_UClass_AObstacleCourseGameGameMode_NoRegister();

#define FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacleCourseGameGameMode(); \
	friend struct Z_Construct_UClass_AObstacleCourseGameGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBSTACLECOURSEGAME_API UClass* Z_Construct_UClass_AObstacleCourseGameGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AObstacleCourseGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstacleCourseGame"), Z_Construct_UClass_AObstacleCourseGameGameMode_NoRegister) \
	DECLARE_SERIALIZER(AObstacleCourseGameGameMode)


#define FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AObstacleCourseGameGameMode(AObstacleCourseGameGameMode&&) = delete; \
	AObstacleCourseGameGameMode(const AObstacleCourseGameGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacleCourseGameGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacleCourseGameGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AObstacleCourseGameGameMode) \
	NO_API virtual ~AObstacleCourseGameGameMode();


#define FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameGameMode_h_12_PROLOG
#define FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AObstacleCourseGameGameMode;

// ********** End Class AObstacleCourseGameGameMode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
