// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VirusP : ModuleRules
{
	public VirusP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
