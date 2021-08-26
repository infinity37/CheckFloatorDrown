// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LittleTool : ModuleRules
{
	public LittleTool(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
        PrivateDependencyModuleNames.AddRange(new string[] { "slua_unreal", "Slate", "SlateCore", "UMG" });
        PrivateIncludePathModuleNames.AddRange(new string[] { "slua_unreal" });
        PublicIncludePathModuleNames.AddRange(new string[] { "slua_unreal" });
    }
}
