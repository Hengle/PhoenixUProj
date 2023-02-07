using UnrealBuildTool;

public class Phoenix : ModuleRules {
    public Phoenix(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AIPathScheduler",
            "AbleCore",
            "AccessibilitySettings",
            "ActorMeshStates",
            "AkAudio",
            "Ambulatory",
            "AnimGraphRuntime",
            "AnimatedLights",
            "AnimationArchitectRuntime",
            "AnimationBudgetAllocator",
            "AnimationCore",
            "AnimationSharing",
            "AudioMixer",
            "AvaAnimation",
            "AvaAudioLow",
            "AvaRenderTech",
            "BTCustomRuntime",
            "BTUtilityAI",
            "BinkMediaPlayer",
            "CISQLite3",
            "CameraStack",
            "Chaos",
            "ChaosCaching",
            "ChaosCloth",
            "ChaosSolverEngine",
            "CinematicCamera",
            "ClothingSystemRuntimeCommon",
            "ClothingSystemRuntimeInterface",
            "Cognition",
            "ConsoleMacros",
            "ControlMapper",
            "ControlRig",
            "Core",
            "CoreUObject",
            "CustomizableCharacter",
            "DayNight",
            "DbAssetMapper",
            "DebugPanel",
            "DesignerHelper",
            "DeveloperSettings",
            "EditorCustomizationHelper",
            "Engine",
            "EnvironmentalGlobals",
            "ExposureConvert",
            "ExposureExpressions",
            "FXUtil",
            "FieldSystemEngine",
            "Flow",
            "Foliage",
            "GameLogicRuntime",
            "GameScheduler",
            "GameplayMods",
            "GameplayTags",
            "GameplayTasks",
            "GeometryCollectionEngine",
            "GlobalLightRig",
            "Hermes",
            "HoverDrone",
            "HydraManager",
            "IcarusRuntime",
            "InputCore",
            "LODStreamingManager",
            "Landscape",
            "LerpVolumes",
            "LevelSequence",
            "LightCulling",
            "MasterTickThrottler",
            "Mastermind",
            "MaterialPermuter",
            "MediaAssets",
            "MediaUtils",
            "Mercuna",
            "Mercuna3DMovement",
            "MovieScene",
            "MovieSceneTracks",
            "MultiFX2",
            "Munitions",
            "NavigationSystem",
            "Niagara",
            "NiagaraAnimNotifies",
            "NiagaraCore",
            "NiagaraHelpers",
            "NiagaraShader",
            "NiagaraStarField",
            "OdysseyRuntime",
            "PathRuntime",
            "PersistentData",
            "PhoenixSignificanceManager",
            "PhysicsCore",
            "ProceduralMeshComponent",
            "PropertyPath",
            "Ragdoll",
            "RenderSettings",
            "RigVM",
            "SceneRig",
            "SkinFX",
            "Slate",
            "SlateCore",
            "SocialDisplay",
            "StencilManager",
            "TimeRig",
            "Toolset",
            "UMG",
            "UMGFocus",
            "UtilitiesRuntime",
            "VolumetricClouds",
            "Weather",
            "Wind",
            "WorldFX",
        });
    }
}