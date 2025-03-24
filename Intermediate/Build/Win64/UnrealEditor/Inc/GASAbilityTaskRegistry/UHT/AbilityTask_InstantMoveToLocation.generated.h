// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTask_InstantMoveToLocation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_InstantMoveToLocation;
class UGameplayAbility;
#ifdef GASABILITYTASKREGISTRY_AbilityTask_InstantMoveToLocation_generated_h
#error "AbilityTask_InstantMoveToLocation.generated.h already included, missing '#pragma once' in AbilityTask_InstantMoveToLocation.h"
#endif
#define GASABILITYTASKREGISTRY_AbilityTask_InstantMoveToLocation_generated_h

#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InstantMoveToLocation_h_8_DELEGATE \
GASABILITYTASKREGISTRY_API void FInstantMoveCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InstantMoveCompletedDelegate, FVector NewLocation);


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InstantMoveToLocation_h_9_DELEGATE \
GASABILITYTASKREGISTRY_API void FInstantMoveFailedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InstantMoveFailedDelegate);


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InstantMoveToLocation_h_15_RPC_WRAPPERS \
	DECLARE_FUNCTION(execInstantMoveToLocation); \
	DECLARE_FUNCTION(execExecuteMove);


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InstantMoveToLocation_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_InstantMoveToLocation(); \
	friend struct Z_Construct_UClass_UAbilityTask_InstantMoveToLocation_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_InstantMoveToLocation, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASAbilityTaskRegistry"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_InstantMoveToLocation)


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InstantMoveToLocation_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_InstantMoveToLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_InstantMoveToLocation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_InstantMoveToLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_InstantMoveToLocation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_InstantMoveToLocation(UAbilityTask_InstantMoveToLocation&&); \
	UAbilityTask_InstantMoveToLocation(const UAbilityTask_InstantMoveToLocation&); \
public: \
	NO_API virtual ~UAbilityTask_InstantMoveToLocation();


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InstantMoveToLocation_h_12_PROLOG
#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InstantMoveToLocation_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InstantMoveToLocation_h_15_RPC_WRAPPERS \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InstantMoveToLocation_h_15_INCLASS \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InstantMoveToLocation_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASABILITYTASKREGISTRY_API UClass* StaticClass<class UAbilityTask_InstantMoveToLocation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InstantMoveToLocation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
