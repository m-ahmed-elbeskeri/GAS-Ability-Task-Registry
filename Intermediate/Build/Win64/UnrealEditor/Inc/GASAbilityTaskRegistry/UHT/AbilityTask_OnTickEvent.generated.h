// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTask_OnTickEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_OnTickEvent;
class UGameplayAbility;
#ifdef GASABILITYTASKREGISTRY_AbilityTask_OnTickEvent_generated_h
#error "AbilityTask_OnTickEvent.generated.h already included, missing '#pragma once' in AbilityTask_OnTickEvent.h"
#endif
#define GASABILITYTASKREGISTRY_AbilityTask_OnTickEvent_generated_h

#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_OnTickEvent_h_9_DELEGATE \
GASABILITYTASKREGISTRY_API void FTickEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& TickEventDelegate, float DeltaTime);


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_OnTickEvent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTickEvent);


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_OnTickEvent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_OnTickEvent(); \
	friend struct Z_Construct_UClass_UAbilityTask_OnTickEvent_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_OnTickEvent, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASAbilityTaskRegistry"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_OnTickEvent)


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_OnTickEvent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_OnTickEvent(UAbilityTask_OnTickEvent&&); \
	UAbilityTask_OnTickEvent(const UAbilityTask_OnTickEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_OnTickEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_OnTickEvent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilityTask_OnTickEvent) \
	NO_API virtual ~UAbilityTask_OnTickEvent();


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_OnTickEvent_h_12_PROLOG
#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_OnTickEvent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_OnTickEvent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_OnTickEvent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_OnTickEvent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASABILITYTASKREGISTRY_API UClass* StaticClass<class UAbilityTask_OnTickEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_OnTickEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
