// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTask_SpawnSafeActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_SpawnSafeActor;
class UGameplayAbility;
#ifdef GASABILITYTASKREGISTRY_AbilityTask_SpawnSafeActor_generated_h
#error "AbilityTask_SpawnSafeActor.generated.h already included, missing '#pragma once' in AbilityTask_SpawnSafeActor.h"
#endif
#define GASABILITYTASKREGISTRY_AbilityTask_SpawnSafeActor_generated_h

#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h_9_DELEGATE \
GASABILITYTASKREGISTRY_API void FSpawnActorDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpawnActorDelegate, AActor* SpawnedActor);


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h_10_DELEGATE \
GASABILITYTASKREGISTRY_API void FPreFinishSpawnDelegate_DelegateWrapper(const FMulticastScriptDelegate& PreFinishSpawnDelegate, AActor* SpawnedActor);


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnSafeActor);


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_SpawnSafeActor(); \
	friend struct Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_SpawnSafeActor, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASAbilityTaskRegistry"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_SpawnSafeActor)


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_SpawnSafeActor(UAbilityTask_SpawnSafeActor&&); \
	UAbilityTask_SpawnSafeActor(const UAbilityTask_SpawnSafeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_SpawnSafeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_SpawnSafeActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_SpawnSafeActor) \
	NO_API virtual ~UAbilityTask_SpawnSafeActor();


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h_12_PROLOG
#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASABILITYTASKREGISTRY_API UClass* StaticClass<class UAbilityTask_SpawnSafeActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
