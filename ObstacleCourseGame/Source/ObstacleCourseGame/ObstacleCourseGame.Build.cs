// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ObstacleCourseGame : ModuleRules
{
	public ObstacleCourseGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ObstacleCourseGame",
			"ObstacleCourseGame/Variant_Platforming",
			"ObstacleCourseGame/Variant_Platforming/Animation",
			"ObstacleCourseGame/Variant_Combat",
			"ObstacleCourseGame/Variant_Combat/AI",
			"ObstacleCourseGame/Variant_Combat/Animation",
			"ObstacleCourseGame/Variant_Combat/Gameplay",
			"ObstacleCourseGame/Variant_Combat/Interfaces",
			"ObstacleCourseGame/Variant_Combat/UI",
			"ObstacleCourseGame/Variant_SideScrolling",
			"ObstacleCourseGame/Variant_SideScrolling/AI",
			"ObstacleCourseGame/Variant_SideScrolling/Gameplay",
			"ObstacleCourseGame/Variant_SideScrolling/Interfaces",
			"ObstacleCourseGame/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
