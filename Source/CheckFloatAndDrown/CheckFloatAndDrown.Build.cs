// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CheckFloatAndDrown : ModuleRules
{
	public CheckFloatAndDrown(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
