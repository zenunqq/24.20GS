#pragma once

#include "Basic.hpp"

#include "UIChart_structs.hpp"
#include "DeveloperSettings_classes.hpp"
#include "CommonInput_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ModelViewViewModel_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UUIStateSettings final : public UDeveloperSettings
{
public:
	float                                         StateLoadTimeout;
	float                                         StateUnloadTimeout;
	float                                         WidgetStateComponentLoadTimeout;
	float                                         WidgetStateComponentUnloadTimeout;
	EWidgetStateComponentUnloadDefaultBehavior    WidgetStateComponentDefaultUnloadBehavior;
	uint8                                         Pad_44[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateSettings">();
	}
	static class UUIStateSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateSettings>();
	}
};
static_assert(alignof(UUIStateSettings) == 0x000008, "Wrong alignment on UUIStateSettings");
static_assert(sizeof(UUIStateSettings) == 0x000048, "Wrong size on UUIStateSettings");
static_assert(offsetof(UUIStateSettings, StateLoadTimeout) == 0x000030, "Member 'UUIStateSettings::StateLoadTimeout' has a wrong offset!");
static_assert(offsetof(UUIStateSettings, StateUnloadTimeout) == 0x000034, "Member 'UUIStateSettings::StateUnloadTimeout' has a wrong offset!");
static_assert(offsetof(UUIStateSettings, WidgetStateComponentLoadTimeout) == 0x000038, "Member 'UUIStateSettings::WidgetStateComponentLoadTimeout' has a wrong offset!");
static_assert(offsetof(UUIStateSettings, WidgetStateComponentUnloadTimeout) == 0x00003C, "Member 'UUIStateSettings::WidgetStateComponentUnloadTimeout' has a wrong offset!");
static_assert(offsetof(UUIStateSettings, WidgetStateComponentDefaultUnloadBehavior) == 0x000040, "Member 'UUIStateSettings::WidgetStateComponentDefaultUnloadBehavior' has a wrong offset!");

class UUIStateComponent : public UObject
{
public:
	EStateComponentStatus                         Status;
	uint8                                         Pad_2C[0x4];
	class UUIStateComponentConfiguration*         ComponentConfiguration;
	class UUIState*                               OwningState;
	class UUIStateChartRegion*                    StateChartRegion;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateComponent">();
	}
	static class UUIStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateComponent>();
	}
};
static_assert(alignof(UUIStateComponent) == 0x000008, "Wrong alignment on UUIStateComponent");
static_assert(sizeof(UUIStateComponent) == 0x000048, "Wrong size on UUIStateComponent");
static_assert(offsetof(UUIStateComponent, Status) == 0x000028, "Member 'UUIStateComponent::Status' has a wrong offset!");
static_assert(offsetof(UUIStateComponent, ComponentConfiguration) == 0x000030, "Member 'UUIStateComponent::ComponentConfiguration' has a wrong offset!");
static_assert(offsetof(UUIStateComponent, OwningState) == 0x000038, "Member 'UUIStateComponent::OwningState' has a wrong offset!");
static_assert(offsetof(UUIStateComponent, StateChartRegion) == 0x000040, "Member 'UUIStateComponent::StateChartRegion' has a wrong offset!");

class UContextSetterUIStateComponent final : public UUIStateComponent
{
public:
	class UContextSetterUIStateComponentConfiguration* Configuration;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextSetterUIStateComponent">();
	}
	static class UContextSetterUIStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextSetterUIStateComponent>();
	}
};
static_assert(alignof(UContextSetterUIStateComponent) == 0x000008, "Wrong alignment on UContextSetterUIStateComponent");
static_assert(sizeof(UContextSetterUIStateComponent) == 0x000050, "Wrong size on UContextSetterUIStateComponent");
static_assert(offsetof(UContextSetterUIStateComponent, Configuration) == 0x000048, "Member 'UContextSetterUIStateComponent::Configuration' has a wrong offset!");

class UUIStateComponentConfiguration : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateComponentConfiguration">();
	}
	static class UUIStateComponentConfiguration* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateComponentConfiguration>();
	}
};
static_assert(alignof(UUIStateComponentConfiguration) == 0x000008, "Wrong alignment on UUIStateComponentConfiguration");
static_assert(sizeof(UUIStateComponentConfiguration) == 0x000028, "Wrong size on UUIStateComponentConfiguration");

class UContextSetterUIStateComponentConfiguration final : public UUIStateComponentConfiguration
{
public:
	struct FContextSetterChanges                  ActivationChanges;
	struct FContextSetterChanges                  DeactivationChanges;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ContextSetterUIStateComponentConfiguration">();
	}
	static class UContextSetterUIStateComponentConfiguration* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextSetterUIStateComponentConfiguration>();
	}
};
static_assert(alignof(UContextSetterUIStateComponentConfiguration) == 0x000008, "Wrong alignment on UContextSetterUIStateComponentConfiguration");
static_assert(sizeof(UContextSetterUIStateComponentConfiguration) == 0x000068, "Wrong size on UContextSetterUIStateComponentConfiguration");
static_assert(offsetof(UContextSetterUIStateComponentConfiguration, ActivationChanges) == 0x000028, "Member 'UContextSetterUIStateComponentConfiguration::ActivationChanges' has a wrong offset!");
static_assert(offsetof(UContextSetterUIStateComponentConfiguration, DeactivationChanges) == 0x000048, "Member 'UContextSetterUIStateComponentConfiguration::DeactivationChanges' has a wrong offset!");

class UGlobalViewModelUIStateComponent final : public UUIStateComponent
{
public:
	class UGlobalViewModelUIStateComponentConfiguration* Configuration;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GlobalViewModelUIStateComponent">();
	}
	static class UGlobalViewModelUIStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGlobalViewModelUIStateComponent>();
	}
};
static_assert(alignof(UGlobalViewModelUIStateComponent) == 0x000008, "Wrong alignment on UGlobalViewModelUIStateComponent");
static_assert(sizeof(UGlobalViewModelUIStateComponent) == 0x000050, "Wrong size on UGlobalViewModelUIStateComponent");
static_assert(offsetof(UGlobalViewModelUIStateComponent, Configuration) == 0x000048, "Member 'UGlobalViewModelUIStateComponent::Configuration' has a wrong offset!");

class UGlobalViewModelUIStateComponentConfiguration final : public UUIStateComponentConfiguration
{
public:
	TArray<struct FMVVMViewModelContext>          ViewModelContexts;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GlobalViewModelUIStateComponentConfiguration">();
	}
	static class UGlobalViewModelUIStateComponentConfiguration* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGlobalViewModelUIStateComponentConfiguration>();
	}
};
static_assert(alignof(UGlobalViewModelUIStateComponentConfiguration) == 0x000008, "Wrong alignment on UGlobalViewModelUIStateComponentConfiguration");
static_assert(sizeof(UGlobalViewModelUIStateComponentConfiguration) == 0x000038, "Wrong size on UGlobalViewModelUIStateComponentConfiguration");
static_assert(offsetof(UGlobalViewModelUIStateComponentConfiguration, ViewModelContexts) == 0x000028, "Member 'UGlobalViewModelUIStateComponentConfiguration::ViewModelContexts' has a wrong offset!");

class UStackingUIStateComponent : public UUIStateComponent
{
public:
	EStateChartResourceScope                      StackScope;
	bool                                          bAlwaysRemoveStackingBehavior;
	bool                                          bIsOnStack;
	uint8                                         Pad_4E[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StackingUIStateComponent">();
	}
	static class UStackingUIStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackingUIStateComponent>();
	}
};
static_assert(alignof(UStackingUIStateComponent) == 0x000008, "Wrong alignment on UStackingUIStateComponent");
static_assert(sizeof(UStackingUIStateComponent) == 0x000050, "Wrong size on UStackingUIStateComponent");
static_assert(offsetof(UStackingUIStateComponent, StackScope) == 0x000048, "Member 'UStackingUIStateComponent::StackScope' has a wrong offset!");
static_assert(offsetof(UStackingUIStateComponent, bAlwaysRemoveStackingBehavior) == 0x00004C, "Member 'UStackingUIStateComponent::bAlwaysRemoveStackingBehavior' has a wrong offset!");
static_assert(offsetof(UStackingUIStateComponent, bIsOnStack) == 0x00004D, "Member 'UStackingUIStateComponent::bIsOnStack' has a wrong offset!");

class UInputConfigUIStateComponent final : public UStackingUIStateComponent
{
public:
	class UInputConfigUIStateComponentConfiguration* Configuration;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputConfigUIStateComponent">();
	}
	static class UInputConfigUIStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputConfigUIStateComponent>();
	}
};
static_assert(alignof(UInputConfigUIStateComponent) == 0x000008, "Wrong alignment on UInputConfigUIStateComponent");
static_assert(sizeof(UInputConfigUIStateComponent) == 0x000058, "Wrong size on UInputConfigUIStateComponent");
static_assert(offsetof(UInputConfigUIStateComponent, Configuration) == 0x000050, "Member 'UInputConfigUIStateComponent::Configuration' has a wrong offset!");

class UInputConfigUIStateComponentConfiguration final : public UUIStateComponentConfiguration
{
public:
	ECommonInputMode                              InputMode;
	EMouseCaptureMode                             MouseCaptureMode;
	bool                                          bHideCursorDuringCapture;
	bool                                          bIgnoreLookInput;
	bool                                          bIgnoreMovementInput;
	bool                                          bFlushPlayerInputWhenActivating;
	bool                                          bFlushPlayerInputWhenDeactivating;
	uint8                                         Pad_2F[0x1];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InputConfigUIStateComponentConfiguration">();
	}
	static class UInputConfigUIStateComponentConfiguration* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputConfigUIStateComponentConfiguration>();
	}
};
static_assert(alignof(UInputConfigUIStateComponentConfiguration) == 0x000008, "Wrong alignment on UInputConfigUIStateComponentConfiguration");
static_assert(sizeof(UInputConfigUIStateComponentConfiguration) == 0x000030, "Wrong size on UInputConfigUIStateComponentConfiguration");
static_assert(offsetof(UInputConfigUIStateComponentConfiguration, InputMode) == 0x000028, "Member 'UInputConfigUIStateComponentConfiguration::InputMode' has a wrong offset!");
static_assert(offsetof(UInputConfigUIStateComponentConfiguration, MouseCaptureMode) == 0x000029, "Member 'UInputConfigUIStateComponentConfiguration::MouseCaptureMode' has a wrong offset!");
static_assert(offsetof(UInputConfigUIStateComponentConfiguration, bHideCursorDuringCapture) == 0x00002A, "Member 'UInputConfigUIStateComponentConfiguration::bHideCursorDuringCapture' has a wrong offset!");
static_assert(offsetof(UInputConfigUIStateComponentConfiguration, bIgnoreLookInput) == 0x00002B, "Member 'UInputConfigUIStateComponentConfiguration::bIgnoreLookInput' has a wrong offset!");
static_assert(offsetof(UInputConfigUIStateComponentConfiguration, bIgnoreMovementInput) == 0x00002C, "Member 'UInputConfigUIStateComponentConfiguration::bIgnoreMovementInput' has a wrong offset!");
static_assert(offsetof(UInputConfigUIStateComponentConfiguration, bFlushPlayerInputWhenActivating) == 0x00002D, "Member 'UInputConfigUIStateComponentConfiguration::bFlushPlayerInputWhenActivating' has a wrong offset!");
static_assert(offsetof(UInputConfigUIStateComponentConfiguration, bFlushPlayerInputWhenDeactivating) == 0x00002E, "Member 'UInputConfigUIStateComponentConfiguration::bFlushPlayerInputWhenDeactivating' has a wrong offset!");

class USceneUIStateComponent final : public UUIStateComponent
{
public:
	class USceneUIStateComponentConfiguration*    Configuration;
	TSet<struct FGameplayTag>                     ConditionContextKeys;
	uint8                                         Pad_A0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SceneUIStateComponent">();
	}
	static class USceneUIStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USceneUIStateComponent>();
	}
};
static_assert(alignof(USceneUIStateComponent) == 0x000008, "Wrong alignment on USceneUIStateComponent");
static_assert(sizeof(USceneUIStateComponent) == 0x0000A8, "Wrong size on USceneUIStateComponent");
static_assert(offsetof(USceneUIStateComponent, Configuration) == 0x000048, "Member 'USceneUIStateComponent::Configuration' has a wrong offset!");
static_assert(offsetof(USceneUIStateComponent, ConditionContextKeys) == 0x000050, "Member 'USceneUIStateComponent::ConditionContextKeys' has a wrong offset!");

class USceneUIStateComponentConfiguration final : public UUIStateComponentConfiguration
{
public:
	class UDynamicUIScene*                        Scene;
	TArray<struct FUIStateChartContextCondition>  ContextConditions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SceneUIStateComponentConfiguration">();
	}
	static class USceneUIStateComponentConfiguration* GetDefaultObj()
	{
		return GetDefaultObjImpl<USceneUIStateComponentConfiguration>();
	}
};
static_assert(alignof(USceneUIStateComponentConfiguration) == 0x000008, "Wrong alignment on USceneUIStateComponentConfiguration");
static_assert(sizeof(USceneUIStateComponentConfiguration) == 0x000040, "Wrong size on USceneUIStateComponentConfiguration");
static_assert(offsetof(USceneUIStateComponentConfiguration, Scene) == 0x000028, "Member 'USceneUIStateComponentConfiguration::Scene' has a wrong offset!");
static_assert(offsetof(USceneUIStateComponentConfiguration, ContextConditions) == 0x000030, "Member 'USceneUIStateComponentConfiguration::ContextConditions' has a wrong offset!");

class USplitScreenUIStateComponentBase final : public UUIStateComponent
{
public:
	class USplitScreenUIStateComponentBaseConfiguration* BaseConfiguration;
	TMap<class ULocalPlayer*, int32>              ChildStateCharts;
	TArray<int32>                                 DeactivatingStateCharts;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SplitScreenUIStateComponentBase">();
	}
	static class USplitScreenUIStateComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USplitScreenUIStateComponentBase>();
	}
};
static_assert(alignof(USplitScreenUIStateComponentBase) == 0x000008, "Wrong alignment on USplitScreenUIStateComponentBase");
static_assert(sizeof(USplitScreenUIStateComponentBase) == 0x0000B0, "Wrong size on USplitScreenUIStateComponentBase");
static_assert(offsetof(USplitScreenUIStateComponentBase, BaseConfiguration) == 0x000048, "Member 'USplitScreenUIStateComponentBase::BaseConfiguration' has a wrong offset!");
static_assert(offsetof(USplitScreenUIStateComponentBase, ChildStateCharts) == 0x000050, "Member 'USplitScreenUIStateComponentBase::ChildStateCharts' has a wrong offset!");
static_assert(offsetof(USplitScreenUIStateComponentBase, DeactivatingStateCharts) == 0x0000A0, "Member 'USplitScreenUIStateComponentBase::DeactivatingStateCharts' has a wrong offset!");

class USplitScreenUIStateComponentBaseConfiguration final : public UUIStateComponentConfiguration
{
public:
	class UUIStateChart*                          PlayerStateChart;
	bool                                          bIgnoreTransitionParametersOnActivation;
	EUIStateTransitionUrgency                     UrgencyOnPlayerAdd;
	uint8                                         Pad_32[0x6];
	struct FGameplayTagContainer                  AnimationHintsOnPlayerAdd;
	bool                                          bIgnoreTransitionParametersOnDeactivation;
	EUIStateTransitionUrgency                     UrgencyOnPlayerRemove;
	uint8                                         Pad_5A[0x6];
	struct FGameplayTagContainer                  AnimationHintsOnPlayerRemove;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SplitScreenUIStateComponentBaseConfiguration">();
	}
	static class USplitScreenUIStateComponentBaseConfiguration* GetDefaultObj()
	{
		return GetDefaultObjImpl<USplitScreenUIStateComponentBaseConfiguration>();
	}
};
static_assert(alignof(USplitScreenUIStateComponentBaseConfiguration) == 0x000008, "Wrong alignment on USplitScreenUIStateComponentBaseConfiguration");
static_assert(sizeof(USplitScreenUIStateComponentBaseConfiguration) == 0x000080, "Wrong size on USplitScreenUIStateComponentBaseConfiguration");
static_assert(offsetof(USplitScreenUIStateComponentBaseConfiguration, PlayerStateChart) == 0x000028, "Member 'USplitScreenUIStateComponentBaseConfiguration::PlayerStateChart' has a wrong offset!");
static_assert(offsetof(USplitScreenUIStateComponentBaseConfiguration, bIgnoreTransitionParametersOnActivation) == 0x000030, "Member 'USplitScreenUIStateComponentBaseConfiguration::bIgnoreTransitionParametersOnActivation' has a wrong offset!");
static_assert(offsetof(USplitScreenUIStateComponentBaseConfiguration, UrgencyOnPlayerAdd) == 0x000031, "Member 'USplitScreenUIStateComponentBaseConfiguration::UrgencyOnPlayerAdd' has a wrong offset!");
static_assert(offsetof(USplitScreenUIStateComponentBaseConfiguration, AnimationHintsOnPlayerAdd) == 0x000038, "Member 'USplitScreenUIStateComponentBaseConfiguration::AnimationHintsOnPlayerAdd' has a wrong offset!");
static_assert(offsetof(USplitScreenUIStateComponentBaseConfiguration, bIgnoreTransitionParametersOnDeactivation) == 0x000058, "Member 'USplitScreenUIStateComponentBaseConfiguration::bIgnoreTransitionParametersOnDeactivation' has a wrong offset!");
static_assert(offsetof(USplitScreenUIStateComponentBaseConfiguration, UrgencyOnPlayerRemove) == 0x000059, "Member 'USplitScreenUIStateComponentBaseConfiguration::UrgencyOnPlayerRemove' has a wrong offset!");
static_assert(offsetof(USplitScreenUIStateComponentBaseConfiguration, AnimationHintsOnPlayerRemove) == 0x000060, "Member 'USplitScreenUIStateComponentBaseConfiguration::AnimationHintsOnPlayerRemove' has a wrong offset!");

class UStackingUIStateComponentSharedData final : public UObject
{
public:
	TMap<class UClass*, struct FUIStateComponentInstanceStack> InstanceStacks;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StackingUIStateComponentSharedData">();
	}
	static class UStackingUIStateComponentSharedData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackingUIStateComponentSharedData>();
	}
};
static_assert(alignof(UStackingUIStateComponentSharedData) == 0x000008, "Wrong alignment on UStackingUIStateComponentSharedData");
static_assert(sizeof(UStackingUIStateComponentSharedData) == 0x000078, "Wrong size on UStackingUIStateComponentSharedData");
static_assert(offsetof(UStackingUIStateComponentSharedData, InstanceStacks) == 0x000028, "Member 'UStackingUIStateComponentSharedData::InstanceStacks' has a wrong offset!");

class UUIStateConfiguration final : public UObject
{
public:
	class FString                                 Name_0;
	struct FGameplayTagContainer                  StateTags;
	int32                                         ID;
	uint8                                         Pad_5C[0x4];
	TArray<class UUIStateConfiguration*>          Children;
	TArray<class UUIStateConfiguration*>          ParallelRegions;
	TArray<class UUIStateComponentConfiguration*> Components;
	float                                         MinimumUnloadTime;
	EUIStateAutomationType                        AutomationType;
	uint8                                         Pad_95[0x3];
	TArray<struct FUIStateAutomationRule>         AutomationRules;
	bool                                          bSupportsBacktracking;
	bool                                          bOverrideIncomingBacktracks;
	uint8                                         Pad_AA[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateConfiguration">();
	}
	static class UUIStateConfiguration* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateConfiguration>();
	}
};
static_assert(alignof(UUIStateConfiguration) == 0x000008, "Wrong alignment on UUIStateConfiguration");
static_assert(sizeof(UUIStateConfiguration) == 0x0000B0, "Wrong size on UUIStateConfiguration");
static_assert(offsetof(UUIStateConfiguration, Name_0) == 0x000028, "Member 'UUIStateConfiguration::Name_0' has a wrong offset!");
static_assert(offsetof(UUIStateConfiguration, StateTags) == 0x000038, "Member 'UUIStateConfiguration::StateTags' has a wrong offset!");
static_assert(offsetof(UUIStateConfiguration, ID) == 0x000058, "Member 'UUIStateConfiguration::ID' has a wrong offset!");
static_assert(offsetof(UUIStateConfiguration, Children) == 0x000060, "Member 'UUIStateConfiguration::Children' has a wrong offset!");
static_assert(offsetof(UUIStateConfiguration, ParallelRegions) == 0x000070, "Member 'UUIStateConfiguration::ParallelRegions' has a wrong offset!");
static_assert(offsetof(UUIStateConfiguration, Components) == 0x000080, "Member 'UUIStateConfiguration::Components' has a wrong offset!");
static_assert(offsetof(UUIStateConfiguration, MinimumUnloadTime) == 0x000090, "Member 'UUIStateConfiguration::MinimumUnloadTime' has a wrong offset!");
static_assert(offsetof(UUIStateConfiguration, AutomationType) == 0x000094, "Member 'UUIStateConfiguration::AutomationType' has a wrong offset!");
static_assert(offsetof(UUIStateConfiguration, AutomationRules) == 0x000098, "Member 'UUIStateConfiguration::AutomationRules' has a wrong offset!");
static_assert(offsetof(UUIStateConfiguration, bSupportsBacktracking) == 0x0000A8, "Member 'UUIStateConfiguration::bSupportsBacktracking' has a wrong offset!");
static_assert(offsetof(UUIStateConfiguration, bOverrideIncomingBacktracks) == 0x0000A9, "Member 'UUIStateConfiguration::bOverrideIncomingBacktracks' has a wrong offset!");

class UUIState final : public UObject
{
public:
	TArray<class UUIState*>                       Children;
	TArray<class UUIStateChartRegion*>            ParallelRegions;
	TArray<class UUIStateComponent*>              Components;
	class UUIStateConfiguration*                  Configuration;
	TArray<class UUIStateChartTransition*>        OutgoingTransitions;
	float                                         SecondsUntilTimeout;
	uint8                                         Pad_74[0x4];
	class UUIState*                               Parent;
	class UUIStateChartRegion*                    StateChartRegion;
	EStateComponentStatus                         Status;
	uint8                                         Pad_8C[0x4];
	TSet<struct FGameplayTag>                     ContinualAutomationContextKeys;
	uint8                                         Pad_E0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIState">();
	}
	static class UUIState* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIState>();
	}
};
static_assert(alignof(UUIState) == 0x000008, "Wrong alignment on UUIState");
static_assert(sizeof(UUIState) == 0x0000E8, "Wrong size on UUIState");
static_assert(offsetof(UUIState, Children) == 0x000028, "Member 'UUIState::Children' has a wrong offset!");
static_assert(offsetof(UUIState, ParallelRegions) == 0x000038, "Member 'UUIState::ParallelRegions' has a wrong offset!");
static_assert(offsetof(UUIState, Components) == 0x000048, "Member 'UUIState::Components' has a wrong offset!");
static_assert(offsetof(UUIState, Configuration) == 0x000058, "Member 'UUIState::Configuration' has a wrong offset!");
static_assert(offsetof(UUIState, OutgoingTransitions) == 0x000060, "Member 'UUIState::OutgoingTransitions' has a wrong offset!");
static_assert(offsetof(UUIState, SecondsUntilTimeout) == 0x000070, "Member 'UUIState::SecondsUntilTimeout' has a wrong offset!");
static_assert(offsetof(UUIState, Parent) == 0x000078, "Member 'UUIState::Parent' has a wrong offset!");
static_assert(offsetof(UUIState, StateChartRegion) == 0x000080, "Member 'UUIState::StateChartRegion' has a wrong offset!");
static_assert(offsetof(UUIState, Status) == 0x000088, "Member 'UUIState::Status' has a wrong offset!");
static_assert(offsetof(UUIState, ContinualAutomationContextKeys) == 0x000090, "Member 'UUIState::ContinualAutomationContextKeys' has a wrong offset!");

class UUIStateChart final : public UDataAsset
{
public:
	class UUIStateConfiguration*                  RootState;
	TArray<struct FUIStateTransitionData>         Transitions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateChart">();
	}
	static class UUIStateChart* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateChart>();
	}
};
static_assert(alignof(UUIStateChart) == 0x000008, "Wrong alignment on UUIStateChart");
static_assert(sizeof(UUIStateChart) == 0x000048, "Wrong size on UUIStateChart");
static_assert(offsetof(UUIStateChart, RootState) == 0x000030, "Member 'UUIStateChart::RootState' has a wrong offset!");
static_assert(offsetof(UUIStateChart, Transitions) == 0x000038, "Member 'UUIStateChart::Transitions' has a wrong offset!");

class UUIStateChartContext final : public UObject
{
public:
	TMap<struct FGameplayTag, class UUIStateChartContextEntry*> Store;
	uint8                                         Pad_78[0x18];

public:
	void BP_ApplyCommonChanges(const struct FUIStateChartContextChangeSet& ContextChanges);
	void BP_ApplyPlayerChanges(const class ULocalPlayer* LocalPlayer, const struct FUIStateChartContextChangeSet& ContextChanges);
	void BP_ClearCommonValue(const struct FGameplayTag& Key);
	void BP_ClearEntry(const struct FGameplayTag& Key);
	void BP_ClearPlayerValue(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key);
	void BP_SetCommonBoolValue(const struct FGameplayTag& Key, bool Value);
	void BP_SetCommonFloatValue(const struct FGameplayTag& Key, float Value);
	void BP_SetCommonIntValue(const struct FGameplayTag& Key, int32 Value);
	void BP_SetCommonStringValue(const struct FGameplayTag& Key, const class FString& Value);
	void BP_SetPlayerBoolValue(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, bool Value);
	void BP_SetPlayerFloatValue(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, float Value);
	void BP_SetPlayerStringValue(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, const class FString& Value);
	void BP_SetPlayerValue(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, int32 Value);

	class UUIStateChartContextEntry* BP_FindEntry(const struct FGameplayTag& Key) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateChartContext">();
	}
	static class UUIStateChartContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateChartContext>();
	}
};
static_assert(alignof(UUIStateChartContext) == 0x000008, "Wrong alignment on UUIStateChartContext");
static_assert(sizeof(UUIStateChartContext) == 0x000090, "Wrong size on UUIStateChartContext");
static_assert(offsetof(UUIStateChartContext, Store) == 0x000028, "Member 'UUIStateChartContext::Store' has a wrong offset!");

class UUIStateChartContextEntry final : public UObject
{
public:
	class FString                                 CommonValue;
	TMap<class ULocalPlayer*, struct FUIStateChartContextEntryOverride> PlayerOverrides;
	uint8                                         Pad_88[0x18];

public:
	bool GetCommonValueAsBool() const;
	float GetCommonValueAsFloat() const;
	int32 GetCommonValueAsInt() const;
	class FString GetCommonValueAsString() const;
	bool GetPlayerValueAsBool(const class ULocalPlayer* InLocalPlayer) const;
	float GetPlayerValueAsFloat(const class ULocalPlayer* InLocalPlayer) const;
	int32 GetPlayerValueAsInt(const class ULocalPlayer* InLocalPlayer) const;
	class FString GetPlayerValueAsString(const class ULocalPlayer* InLocalPlayer) const;
	bool IsEmptyForPlayer(class ULocalPlayer* InLocalPlayer) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateChartContextEntry">();
	}
	static class UUIStateChartContextEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateChartContextEntry>();
	}
};
static_assert(alignof(UUIStateChartContextEntry) == 0x000008, "Wrong alignment on UUIStateChartContextEntry");
static_assert(sizeof(UUIStateChartContextEntry) == 0x0000A0, "Wrong size on UUIStateChartContextEntry");
static_assert(offsetof(UUIStateChartContextEntry, CommonValue) == 0x000028, "Member 'UUIStateChartContextEntry::CommonValue' has a wrong offset!");
static_assert(offsetof(UUIStateChartContextEntry, PlayerOverrides) == 0x000038, "Member 'UUIStateChartContextEntry::PlayerOverrides' has a wrong offset!");

class UUIStateChartManager final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0x8];
	TMap<class ULocalPlayer*, class UUIStateChartManagerPlayer*> PlayerEntries;
	TArray<class UUIStateChartManagerPlayer*>     RemovedPlayerEntries;
	class UUIStateChartContext*                   Context;
	class UUIStateChartResourceCollection*        GlobalResources;
	uint8                                         Pad_A8[0x50];

public:
	int32 BP_AddStateChart(const class UUIStateChart* StateChartAsset, class ULocalPlayer* OwningLocalPlayer, const struct FGameplayTagContainer& AnimationHints, const struct FGameplayTag& InitialStateTag, EUIStateTransitionUrgency Urgency);
	bool BP_DeactivateStateChart(int32 Key, const struct FGameplayTagContainer& AnimationHints, const struct FUIStateChartContextChangeSet& ContextChanges, EUIStateTransitionUrgency Urgency);
	bool BP_DispatchTransitionEvent(const struct FGameplayTag& TransitionTag, const class ULocalPlayer* StateChartOwner, const struct FGameplayTagContainer& AnimationHints, const struct FUIStateChartContextChangeSet& ContextChanges, EUIStateTransitionUrgency Urgency, bool bBacktrack);
	void BP_ReactivateStateChart(int32 Key, const struct FGameplayTagContainer& AnimationHints, const struct FGameplayTag& StateTag, EUIStateTransitionUrgency Urgency);
	bool BP_RemoveStateChart(int32 Key, const struct FGameplayTagContainer& AnimationHints, const struct FUIStateChartContextChangeSet& ContextChanges, EUIStateTransitionUrgency Urgency);

	class UUIStateChartContext* GetContext() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateChartManager">();
	}
	static class UUIStateChartManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateChartManager>();
	}
};
static_assert(alignof(UUIStateChartManager) == 0x000008, "Wrong alignment on UUIStateChartManager");
static_assert(sizeof(UUIStateChartManager) == 0x0000F8, "Wrong size on UUIStateChartManager");
static_assert(offsetof(UUIStateChartManager, PlayerEntries) == 0x000038, "Member 'UUIStateChartManager::PlayerEntries' has a wrong offset!");
static_assert(offsetof(UUIStateChartManager, RemovedPlayerEntries) == 0x000088, "Member 'UUIStateChartManager::RemovedPlayerEntries' has a wrong offset!");
static_assert(offsetof(UUIStateChartManager, Context) == 0x000098, "Member 'UUIStateChartManager::Context' has a wrong offset!");
static_assert(offsetof(UUIStateChartManager, GlobalResources) == 0x0000A0, "Member 'UUIStateChartManager::GlobalResources' has a wrong offset!");

class UUIStateChartManagerEntry final : public UObject
{
public:
	class UUIStateChartRegion*                    MainRegion;
	class UUIStateChartManagerPlayer*             ManagerPlayer;
	class UUIStateChartResourceCollection*        StateChartResources;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateChartManagerEntry">();
	}
	static class UUIStateChartManagerEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateChartManagerEntry>();
	}
};
static_assert(alignof(UUIStateChartManagerEntry) == 0x000008, "Wrong alignment on UUIStateChartManagerEntry");
static_assert(sizeof(UUIStateChartManagerEntry) == 0x000040, "Wrong size on UUIStateChartManagerEntry");
static_assert(offsetof(UUIStateChartManagerEntry, MainRegion) == 0x000028, "Member 'UUIStateChartManagerEntry::MainRegion' has a wrong offset!");
static_assert(offsetof(UUIStateChartManagerEntry, ManagerPlayer) == 0x000030, "Member 'UUIStateChartManagerEntry::ManagerPlayer' has a wrong offset!");
static_assert(offsetof(UUIStateChartManagerEntry, StateChartResources) == 0x000038, "Member 'UUIStateChartManagerEntry::StateChartResources' has a wrong offset!");

class UUIStateChartManagerPlayer final : public UObject
{
public:
	TMap<int32, class UUIStateChartManagerEntry*> ActiveChartEntries;
	TMap<int32, class UUIStateChartManagerEntry*> InactiveChartEntries;
	TArray<struct FUIStateChartManagerChartDeactivationRequest> DeactivationRequests;
	class ULocalPlayer*                           OwningLocalPlayer;
	class UUIStateChartManager*                   Manager;
	class UUIStateChartResourceCollection*        PlayerResources;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateChartManagerPlayer">();
	}
	static class UUIStateChartManagerPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateChartManagerPlayer>();
	}
};
static_assert(alignof(UUIStateChartManagerPlayer) == 0x000008, "Wrong alignment on UUIStateChartManagerPlayer");
static_assert(sizeof(UUIStateChartManagerPlayer) == 0x0000F0, "Wrong size on UUIStateChartManagerPlayer");
static_assert(offsetof(UUIStateChartManagerPlayer, ActiveChartEntries) == 0x000028, "Member 'UUIStateChartManagerPlayer::ActiveChartEntries' has a wrong offset!");
static_assert(offsetof(UUIStateChartManagerPlayer, InactiveChartEntries) == 0x000078, "Member 'UUIStateChartManagerPlayer::InactiveChartEntries' has a wrong offset!");
static_assert(offsetof(UUIStateChartManagerPlayer, DeactivationRequests) == 0x0000C8, "Member 'UUIStateChartManagerPlayer::DeactivationRequests' has a wrong offset!");
static_assert(offsetof(UUIStateChartManagerPlayer, OwningLocalPlayer) == 0x0000D8, "Member 'UUIStateChartManagerPlayer::OwningLocalPlayer' has a wrong offset!");
static_assert(offsetof(UUIStateChartManagerPlayer, Manager) == 0x0000E0, "Member 'UUIStateChartManagerPlayer::Manager' has a wrong offset!");
static_assert(offsetof(UUIStateChartManagerPlayer, PlayerResources) == 0x0000E8, "Member 'UUIStateChartManagerPlayer::PlayerResources' has a wrong offset!");

class UUIStateBacktrackStep final : public UObject
{
public:
	struct FGameplayTag                           TransitionTag;
	uint8                                         Pad_2C[0x4];
	class UUIState*                               ReturnState;
	class UUIState*                               AvailableState;
	struct FUIStateChartContextChangeSet          ReverseContextChanges;
	TArray<class UUIStateBacktrackStep*>          AvailablePaths;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateBacktrackStep">();
	}
	static class UUIStateBacktrackStep* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateBacktrackStep>();
	}
};
static_assert(alignof(UUIStateBacktrackStep) == 0x000008, "Wrong alignment on UUIStateBacktrackStep");
static_assert(sizeof(UUIStateBacktrackStep) == 0x0000A0, "Wrong size on UUIStateBacktrackStep");
static_assert(offsetof(UUIStateBacktrackStep, TransitionTag) == 0x000028, "Member 'UUIStateBacktrackStep::TransitionTag' has a wrong offset!");
static_assert(offsetof(UUIStateBacktrackStep, ReturnState) == 0x000030, "Member 'UUIStateBacktrackStep::ReturnState' has a wrong offset!");
static_assert(offsetof(UUIStateBacktrackStep, AvailableState) == 0x000038, "Member 'UUIStateBacktrackStep::AvailableState' has a wrong offset!");
static_assert(offsetof(UUIStateBacktrackStep, ReverseContextChanges) == 0x000040, "Member 'UUIStateBacktrackStep::ReverseContextChanges' has a wrong offset!");
static_assert(offsetof(UUIStateBacktrackStep, AvailablePaths) == 0x000090, "Member 'UUIStateBacktrackStep::AvailablePaths' has a wrong offset!");

class UUIStateChartRegion final : public UObject
{
public:
	class UUIStateChartManagerEntry*              ManagerEntry;
	class UUIState*                               RootState;
	class UUIState*                               ParentState;
	TArray<class UUIStateChartRegion*>            ParallelRegions;
	TMap<struct FGameplayTag, class UUIState*>    TaggedStates;
	class UUIState*                               ActiveLeafState;
	class UUIStateChartTransitionOperation*       ActiveTransitionOperation;
	class UUIStateChartTransitionOperation*       QueuedTransitionOperation;
	TArray<class UUIStateBacktrackStep*>          AvailableBacktrackPaths;
	class UUIStateBacktrackStep*                  ActiveTransitionBacktrackStep;
	class FString                                 ChartName;
	uint8                                         Pad_E0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateChartRegion">();
	}
	static class UUIStateChartRegion* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateChartRegion>();
	}
};
static_assert(alignof(UUIStateChartRegion) == 0x000008, "Wrong alignment on UUIStateChartRegion");
static_assert(sizeof(UUIStateChartRegion) == 0x0000E8, "Wrong size on UUIStateChartRegion");
static_assert(offsetof(UUIStateChartRegion, ManagerEntry) == 0x000028, "Member 'UUIStateChartRegion::ManagerEntry' has a wrong offset!");
static_assert(offsetof(UUIStateChartRegion, RootState) == 0x000030, "Member 'UUIStateChartRegion::RootState' has a wrong offset!");
static_assert(offsetof(UUIStateChartRegion, ParentState) == 0x000038, "Member 'UUIStateChartRegion::ParentState' has a wrong offset!");
static_assert(offsetof(UUIStateChartRegion, ParallelRegions) == 0x000040, "Member 'UUIStateChartRegion::ParallelRegions' has a wrong offset!");
static_assert(offsetof(UUIStateChartRegion, TaggedStates) == 0x000050, "Member 'UUIStateChartRegion::TaggedStates' has a wrong offset!");
static_assert(offsetof(UUIStateChartRegion, ActiveLeafState) == 0x0000A0, "Member 'UUIStateChartRegion::ActiveLeafState' has a wrong offset!");
static_assert(offsetof(UUIStateChartRegion, ActiveTransitionOperation) == 0x0000A8, "Member 'UUIStateChartRegion::ActiveTransitionOperation' has a wrong offset!");
static_assert(offsetof(UUIStateChartRegion, QueuedTransitionOperation) == 0x0000B0, "Member 'UUIStateChartRegion::QueuedTransitionOperation' has a wrong offset!");
static_assert(offsetof(UUIStateChartRegion, AvailableBacktrackPaths) == 0x0000B8, "Member 'UUIStateChartRegion::AvailableBacktrackPaths' has a wrong offset!");
static_assert(offsetof(UUIStateChartRegion, ActiveTransitionBacktrackStep) == 0x0000C8, "Member 'UUIStateChartRegion::ActiveTransitionBacktrackStep' has a wrong offset!");
static_assert(offsetof(UUIStateChartRegion, ChartName) == 0x0000D0, "Member 'UUIStateChartRegion::ChartName' has a wrong offset!");

class UUIStateChartResourceCollection final : public UObject
{
public:
	TMap<class UClass*, class UObject*>           ResourcesByClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateChartResourceCollection">();
	}
	static class UUIStateChartResourceCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateChartResourceCollection>();
	}
};
static_assert(alignof(UUIStateChartResourceCollection) == 0x000008, "Wrong alignment on UUIStateChartResourceCollection");
static_assert(sizeof(UUIStateChartResourceCollection) == 0x000078, "Wrong size on UUIStateChartResourceCollection");
static_assert(offsetof(UUIStateChartResourceCollection, ResourcesByClass) == 0x000028, "Member 'UUIStateChartResourceCollection::ResourcesByClass' has a wrong offset!");

class UUIStateChartTransition final : public UObject
{
public:
	class UUIState*                               Source;
	class UUIState*                               Target;
	uint8                                         Pad_38[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateChartTransition">();
	}
	static class UUIStateChartTransition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateChartTransition>();
	}
};
static_assert(alignof(UUIStateChartTransition) == 0x000008, "Wrong alignment on UUIStateChartTransition");
static_assert(sizeof(UUIStateChartTransition) == 0x000040, "Wrong size on UUIStateChartTransition");
static_assert(offsetof(UUIStateChartTransition, Source) == 0x000028, "Member 'UUIStateChartTransition::Source' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransition, Target) == 0x000030, "Member 'UUIStateChartTransition::Target' has a wrong offset!");

class UUIStateChartTransitionOperation final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UUIStateChartRegion*                    Region;
	class UUIState*                               OriginState;
	class UUIState*                               EndState;
	class UUIState*                               TransitionTargetState;
	uint8                                         Pad_50[0x8];
	TArray<class UUIState*>                       KnownStatesToActivate;
	TArray<class UUIState*>                       StatesToDeactivate;
	class UUIStateChartTransitionOperationGroup*  Group;
	struct FUIStateRelay                          StateRelay;
	uint8                                         Pad_A8[0x8];
	class UUIState*                               BacktrackReturnState;
	uint8                                         Pad_B8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateChartTransitionOperation">();
	}
	static class UUIStateChartTransitionOperation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateChartTransitionOperation>();
	}
};
static_assert(alignof(UUIStateChartTransitionOperation) == 0x000008, "Wrong alignment on UUIStateChartTransitionOperation");
static_assert(sizeof(UUIStateChartTransitionOperation) == 0x0000C0, "Wrong size on UUIStateChartTransitionOperation");
static_assert(offsetof(UUIStateChartTransitionOperation, Region) == 0x000030, "Member 'UUIStateChartTransitionOperation::Region' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperation, OriginState) == 0x000038, "Member 'UUIStateChartTransitionOperation::OriginState' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperation, EndState) == 0x000040, "Member 'UUIStateChartTransitionOperation::EndState' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperation, TransitionTargetState) == 0x000048, "Member 'UUIStateChartTransitionOperation::TransitionTargetState' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperation, KnownStatesToActivate) == 0x000058, "Member 'UUIStateChartTransitionOperation::KnownStatesToActivate' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperation, StatesToDeactivate) == 0x000068, "Member 'UUIStateChartTransitionOperation::StatesToDeactivate' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperation, Group) == 0x000078, "Member 'UUIStateChartTransitionOperation::Group' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperation, StateRelay) == 0x000080, "Member 'UUIStateChartTransitionOperation::StateRelay' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperation, BacktrackReturnState) == 0x0000B0, "Member 'UUIStateChartTransitionOperation::BacktrackReturnState' has a wrong offset!");

class UUIStateChartTransitionOperationGroup final : public UObject
{
public:
	TSet<class UUIStateChartTransitionOperation*> Operations;
	TSet<class UUIStateChartTransitionOperation*> OperationsReadyForContextUpdate;
	class UUIStateChartContext*                   Context;
	class ULocalPlayer*                           LocalPlayer;
	struct FUIStateChartContextChangeSet          ContextChanges;
	struct FUIStateChartContextChangeSet          ReverseContextChanges;
	struct FUIStateChartTransitionOperationParameters Parameters;
	struct FGameplayTag                           TransitionEventTag;
	uint8                                         Pad_1A4[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UIStateChartTransitionOperationGroup">();
	}
	static class UUIStateChartTransitionOperationGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIStateChartTransitionOperationGroup>();
	}
};
static_assert(alignof(UUIStateChartTransitionOperationGroup) == 0x000008, "Wrong alignment on UUIStateChartTransitionOperationGroup");
static_assert(sizeof(UUIStateChartTransitionOperationGroup) == 0x0001A8, "Wrong size on UUIStateChartTransitionOperationGroup");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, Operations) == 0x000028, "Member 'UUIStateChartTransitionOperationGroup::Operations' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, OperationsReadyForContextUpdate) == 0x000078, "Member 'UUIStateChartTransitionOperationGroup::OperationsReadyForContextUpdate' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, Context) == 0x0000C8, "Member 'UUIStateChartTransitionOperationGroup::Context' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, LocalPlayer) == 0x0000D0, "Member 'UUIStateChartTransitionOperationGroup::LocalPlayer' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, ContextChanges) == 0x0000D8, "Member 'UUIStateChartTransitionOperationGroup::ContextChanges' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, ReverseContextChanges) == 0x000128, "Member 'UUIStateChartTransitionOperationGroup::ReverseContextChanges' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, Parameters) == 0x000178, "Member 'UUIStateChartTransitionOperationGroup::Parameters' has a wrong offset!");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, TransitionEventTag) == 0x0001A0, "Member 'UUIStateChartTransitionOperationGroup::TransitionEventTag' has a wrong offset!");

}
