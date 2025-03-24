// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GASAbilityTaskRegistry : ModuleRules
{
	public GASAbilityTaskRegistry(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		// Public includes (Expose to other modules/plugins/projects)
		PublicIncludePaths.AddRange(
			new string[] {
				"GASAbilityTaskRegistry/Public"
			}
		);

		// Private includes
		PrivateIncludePaths.AddRange(
			new string[] {
				"GASAbilityTaskRegistry/Private"
			}
		);
			
		// Public dependencies (Core + Gameplay Ability modules)
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"GameplayAbilities",
				"GameplayTasks",
				"GameplayTags"
			}
		);
		
		// Private dependencies (UObject, Engine, UI, etc.)
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore"
			}
		);

		// Dynamic modules (if needed later)
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
		);
	}
}
