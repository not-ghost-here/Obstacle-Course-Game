// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObstacleCourseGamePlayerController.h"

#ifdef OBSTACLECOURSEGAME_ObstacleCourseGamePlayerController_generated_h
#error "ObstacleCourseGamePlayerController.generated.h already included, missing '#pragma once' in ObstacleCourseGamePlayerController.h"
#endif
#define OBSTACLECOURSEGAME_ObstacleCourseGamePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AObstacleCourseGamePlayerController **************************************
OBSTACLECOURSEGAME_API UClass* Z_Construct_UClass_AObstacleCourseGamePlayerController_NoRegister();

#define FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGamePlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacleCourseGamePlayerController(); \
	friend struct Z_Construct_UClass_AObstacleCourseGamePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBSTACLECOURSEGAME_API UClass* Z_Construct_UClass_AObstacleCourseGamePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AObstacleCourseGamePlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstacleCourseGame"), Z_Construct_UClass_AObstacleCourseGamePlayerController_NoRegister) \
	DECLARE_SERIALIZER(AObstacleCourseGamePlayerController)


#define FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGamePlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObstacleCourseGamePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AObstacleCourseGamePlayerController(AObstacleCourseGamePlayerController&&) = delete; \
	AObstacleCourseGamePlayerController(const AObstacleCourseGamePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacleCourseGamePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacleCourseGamePlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObstacleCourseGamePlayerController) \
	NO_API virtual ~AObstacleCourseGamePlayerController();


#define FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGamePlayerController_h_16_PROLOG
#define FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGamePlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGamePlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGamePlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AObstacleCourseGamePlayerController;

// ********** End Class AObstacleCourseGamePlayerController ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGamePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
