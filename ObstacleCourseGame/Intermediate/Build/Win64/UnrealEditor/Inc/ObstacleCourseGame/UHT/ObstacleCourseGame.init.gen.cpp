// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacleCourseGame_init() {}
	OBSTACLECOURSEGAME_API UFunction* Z_Construct_UDelegateFunction_ObstacleCourseGame_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ObstacleCourseGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ObstacleCourseGame()
	{
		if (!Z_Registration_Info_UPackage__Script_ObstacleCourseGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ObstacleCourseGame_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ObstacleCourseGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1EEFD4EB,
				0xD24C89F2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ObstacleCourseGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ObstacleCourseGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ObstacleCourseGame(Z_Construct_UPackage__Script_ObstacleCourseGame, TEXT("/Script/ObstacleCourseGame"), Z_Registration_Info_UPackage__Script_ObstacleCourseGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1EEFD4EB, 0xD24C89F2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
