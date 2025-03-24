// Copyright Games By Moshi 2025. All Rights Reserved.

using UnrealBuildTool;

public class GASAbilityTaskRegistry : ModuleRules
{
	public GASAbilityTaskRegistry(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
            
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"GameplayAbilities",
				"GameplayTasks",
				"GameplayTags"
			}
		);
        
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore"
			}
		);

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
		);
	}
}