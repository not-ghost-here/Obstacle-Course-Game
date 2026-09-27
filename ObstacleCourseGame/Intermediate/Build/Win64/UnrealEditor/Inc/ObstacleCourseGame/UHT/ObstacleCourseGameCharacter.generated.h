// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObstacleCourseGameCharacter.h"

#ifdef OBSTACLECOURSEGAME_ObstacleCourseGameCharacter_generated_h
#error "ObstacleCourseGameCharacter.generated.h already included, missing '#pragma once' in ObstacleCourseGameCharacter.h"
#endif
#define OBSTACLECOURSEGAME_ObstacleCourseGameCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AObstacleCourseGameCharacter *********************************************
#define FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


OBSTACLECOURSEGAME_API UClass* Z_Construct_UClass_AObstacleCourseGameCharacter_NoRegister();

#define FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacleCourseGameCharacter(); \
	friend struct Z_Construct_UClass_AObstacleCourseGameCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBSTACLECOURSEGAME_API UClass* Z_Construct_UClass_AObstacleCourseGameCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AObstacleCourseGameCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstacleCourseGame"), Z_Construct_UClass_AObstacleCourseGameCharacter_NoRegister) \
	DECLARE_SERIALIZER(AObstacleCourseGameCharacter)


#define FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AObstacleCourseGameCharacter(AObstacleCourseGameCharacter&&) = delete; \
	AObstacleCourseGameCharacter(const AObstacleCourseGameCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacleCourseGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacleCourseGameCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AObstacleCourseGameCharacter) \
	NO_API virtual ~AObstacleCourseGameCharacter();


#define FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameCharacter_h_21_PROLOG
#define FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AObstacleCourseGameCharacter;

// ********** End Class AObstacleCourseGameCharacter ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
