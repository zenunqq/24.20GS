#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK
{

enum class EWidgetStateComponentUnloadDefaultBehavior : uint32
{
	WaitForAnimations                        = 0,
	DoNotWaitForAnimations                   = 1,
	EWidgetStateComponentUnloadDefaultBehavior_MAX = 2,
};

enum class EUIStateTransitionUrgency : uint8
{
	Normal                                   = 0,
	High                                     = 1,
	EUIStateTransitionUrgency_MAX            = 2,
};

enum class EUIStateAutomationType : uint8
{
	Initial                                  = 0,
	Continual                                = 1,
	EUIStateAutomationType_MAX               = 2,
};

enum class EUIStateChartContextConditionType : uint32
{
	IsEmpty                                  = 0,
	IsNotEmpty                               = 1,
	IsEqualTo                                = 2,
	IsNotEqualTo                             = 3,
	IsGreaterThan                            = 4,
	IsGreaterThanOrEqualTo                   = 5,
	IsLessThan                               = 6,
	IsLessThanOrEqualTo                      = 7,
	IsTrue                                   = 8,
	IsNotTrue                                = 9,
	StartsWith                               = 10,
	EndsWith                                 = 11,
	Contains                                 = 12,
	EUIStateChartContextConditionType_MAX    = 13,
};

enum class EUIChartRegionTransitionScope : uint8
{
	ThisRegionOnly                           = 0,
	ThisRegionOrChildRegions                 = 1,
	EUIChartRegionTransitionScope_MAX        = 2,
};

enum class EStateComponentStatus : uint32
{
	Inactive                                 = 0,
	PreparingForLoad                         = 1,
	Loading                                  = 2,
	DoneLoading                              = 3,
	Operational                              = 4,
	PreparingForUnload                       = 5,
	Unloading                                = 6,
	DoneUnloading                            = 7,
	EStateComponentStatus_MAX                = 8,
};

enum class EStateChartResourceScope : uint32
{
	StateChart                               = 0,
	Player                                   = 1,
	Global                                   = 2,
	EStateChartResourceScope_MAX             = 3,
};

struct FUIStateChartTransitionOperationParameters final
{
public:
	struct FGameplayTagContainer                  AnimationHints;
	EUIStateTransitionUrgency                     Urgency;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FUIStateChartTransitionOperationParameters) == 0x000008, "Wrong alignment on FUIStateChartTransitionOperationParameters");
static_assert(sizeof(FUIStateChartTransitionOperationParameters) == 0x000028, "Wrong size on FUIStateChartTransitionOperationParameters");
static_assert(offsetof(FUIStateChartTransitionOperationParameters, AnimationHints) == 0x000000, "Member 'FUIStateChartTransitionOperationParameters::AnimationHints' has a wrong offset!");
static_assert(offsetof(FUIStateChartTransitionOperationParameters, Urgency) == 0x000020, "Member 'FUIStateChartTransitionOperationParameters::Urgency' has a wrong offset!");

struct FContextSetterSetEntry final
{
public:
	struct FGameplayTag                           Key;
	uint8                                         Pad_4[0x4];
	class FString                                 Value;
};
static_assert(alignof(FContextSetterSetEntry) == 0x000008, "Wrong alignment on FContextSetterSetEntry");
static_assert(sizeof(FContextSetterSetEntry) == 0x000018, "Wrong size on FContextSetterSetEntry");
static_assert(offsetof(FContextSetterSetEntry, Key) == 0x000000, "Member 'FContextSetterSetEntry::Key' has a wrong offset!");
static_assert(offsetof(FContextSetterSetEntry, Value) == 0x000008, "Member 'FContextSetterSetEntry::Value' has a wrong offset!");

struct FContextSetterClearEntry final
{
public:
	struct FGameplayTag                           Key;
};
static_assert(alignof(FContextSetterClearEntry) == 0x000004, "Wrong alignment on FContextSetterClearEntry");
static_assert(sizeof(FContextSetterClearEntry) == 0x000004, "Wrong size on FContextSetterClearEntry");
static_assert(offsetof(FContextSetterClearEntry, Key) == 0x000000, "Member 'FContextSetterClearEntry::Key' has a wrong offset!");

struct FContextSetterChanges final
{
public:
	TArray<struct FContextSetterSetEntry>         ValuesToSet;
	TArray<struct FContextSetterClearEntry>       ValuesToClear;
};
static_assert(alignof(FContextSetterChanges) == 0x000008, "Wrong alignment on FContextSetterChanges");
static_assert(sizeof(FContextSetterChanges) == 0x000020, "Wrong size on FContextSetterChanges");
static_assert(offsetof(FContextSetterChanges, ValuesToSet) == 0x000000, "Member 'FContextSetterChanges::ValuesToSet' has a wrong offset!");
static_assert(offsetof(FContextSetterChanges, ValuesToClear) == 0x000010, "Member 'FContextSetterChanges::ValuesToClear' has a wrong offset!");

struct FUIStateComponentInstanceStack final
{
public:
	TArray<class UStackingUIStateComponent*>      InstanceStack;
};
static_assert(alignof(FUIStateComponentInstanceStack) == 0x000008, "Wrong alignment on FUIStateComponentInstanceStack");
static_assert(sizeof(FUIStateComponentInstanceStack) == 0x000010, "Wrong size on FUIStateComponentInstanceStack");
static_assert(offsetof(FUIStateComponentInstanceStack, InstanceStack) == 0x000000, "Member 'FUIStateComponentInstanceStack::InstanceStack' has a wrong offset!");

struct FUIStateConfigurationChildReference final
{
public:
	int32                                         ChildStateId;
};
static_assert(alignof(FUIStateConfigurationChildReference) == 0x000004, "Wrong alignment on FUIStateConfigurationChildReference");
static_assert(sizeof(FUIStateConfigurationChildReference) == 0x000004, "Wrong size on FUIStateConfigurationChildReference");
static_assert(offsetof(FUIStateConfigurationChildReference, ChildStateId) == 0x000000, "Member 'FUIStateConfigurationChildReference::ChildStateId' has a wrong offset!");

struct FUIStateChartContextCondition final
{
public:
	struct FGameplayTag                           Key;
	EUIStateChartContextConditionType             ConditionType;
	class FString                                 ComparisonConstant;
};
static_assert(alignof(FUIStateChartContextCondition) == 0x000008, "Wrong alignment on FUIStateChartContextCondition");
static_assert(sizeof(FUIStateChartContextCondition) == 0x000018, "Wrong size on FUIStateChartContextCondition");
static_assert(offsetof(FUIStateChartContextCondition, Key) == 0x000000, "Member 'FUIStateChartContextCondition::Key' has a wrong offset!");
static_assert(offsetof(FUIStateChartContextCondition, ConditionType) == 0x000004, "Member 'FUIStateChartContextCondition::ConditionType' has a wrong offset!");
static_assert(offsetof(FUIStateChartContextCondition, ComparisonConstant) == 0x000008, "Member 'FUIStateChartContextCondition::ComparisonConstant' has a wrong offset!");

struct FUIStateAutomationRule final
{
public:
	TArray<struct FUIStateChartContextCondition>  ContextConditions;
	struct FUIStateConfigurationChildReference    ChildStateReference;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FUIStateAutomationRule) == 0x000008, "Wrong alignment on FUIStateAutomationRule");
static_assert(sizeof(FUIStateAutomationRule) == 0x000018, "Wrong size on FUIStateAutomationRule");
static_assert(offsetof(FUIStateAutomationRule, ContextConditions) == 0x000000, "Member 'FUIStateAutomationRule::ContextConditions' has a wrong offset!");
static_assert(offsetof(FUIStateAutomationRule, ChildStateReference) == 0x000010, "Member 'FUIStateAutomationRule::ChildStateReference' has a wrong offset!");

struct FUIStateTransitionData final
{
public:
	struct FGameplayTag                           TriggerTag;
	int32                                         SourceStateId;
	int32                                         TargetStateId;
};
static_assert(alignof(FUIStateTransitionData) == 0x000004, "Wrong alignment on FUIStateTransitionData");
static_assert(sizeof(FUIStateTransitionData) == 0x00000C, "Wrong size on FUIStateTransitionData");
static_assert(offsetof(FUIStateTransitionData, TriggerTag) == 0x000000, "Member 'FUIStateTransitionData::TriggerTag' has a wrong offset!");
static_assert(offsetof(FUIStateTransitionData, SourceStateId) == 0x000004, "Member 'FUIStateTransitionData::SourceStateId' has a wrong offset!");
static_assert(offsetof(FUIStateTransitionData, TargetStateId) == 0x000008, "Member 'FUIStateTransitionData::TargetStateId' has a wrong offset!");

struct FUIStateChartContextChangeSet final
{
public:
	TMap<struct FGameplayTag, class FString>      Changes;
};
static_assert(alignof(FUIStateChartContextChangeSet) == 0x000008, "Wrong alignment on FUIStateChartContextChangeSet");
static_assert(sizeof(FUIStateChartContextChangeSet) == 0x000050, "Wrong size on FUIStateChartContextChangeSet");
static_assert(offsetof(FUIStateChartContextChangeSet, Changes) == 0x000000, "Member 'FUIStateChartContextChangeSet::Changes' has a wrong offset!");

struct FUIStateChartContextEntryOverride final
{
public:
	class FString                                 OverrideValue;
	uint8                                         Pad_10[0x18];
};
static_assert(alignof(FUIStateChartContextEntryOverride) == 0x000008, "Wrong alignment on FUIStateChartContextEntryOverride");
static_assert(sizeof(FUIStateChartContextEntryOverride) == 0x000028, "Wrong size on FUIStateChartContextEntryOverride");
static_assert(offsetof(FUIStateChartContextEntryOverride, OverrideValue) == 0x000000, "Member 'FUIStateChartContextEntryOverride::OverrideValue' has a wrong offset!");

struct alignas(0x08) FUIStateChartManagerChartDeactivationRequest final
{
public:
	uint8                                         Pad_0[0x88];
};
static_assert(alignof(FUIStateChartManagerChartDeactivationRequest) == 0x000008, "Wrong alignment on FUIStateChartManagerChartDeactivationRequest");
static_assert(sizeof(FUIStateChartManagerChartDeactivationRequest) == 0x000088, "Wrong size on FUIStateChartManagerChartDeactivationRequest");

struct FUIStateRelayBaton final
{
public:
	uint8                                         Pad_0[0x10];
	class UUIStateComponent*                      OfferingComponent;
	TSubclassOf<class UUIStateComponent>          OfferingComponentType;
	class UUIStateComponentConfiguration*         OfferingComponentConfiguration;
};
static_assert(alignof(FUIStateRelayBaton) == 0x000008, "Wrong alignment on FUIStateRelayBaton");
static_assert(sizeof(FUIStateRelayBaton) == 0x000028, "Wrong size on FUIStateRelayBaton");
static_assert(offsetof(FUIStateRelayBaton, OfferingComponent) == 0x000010, "Member 'FUIStateRelayBaton::OfferingComponent' has a wrong offset!");
static_assert(offsetof(FUIStateRelayBaton, OfferingComponentType) == 0x000018, "Member 'FUIStateRelayBaton::OfferingComponentType' has a wrong offset!");
static_assert(offsetof(FUIStateRelayBaton, OfferingComponentConfiguration) == 0x000020, "Member 'FUIStateRelayBaton::OfferingComponentConfiguration' has a wrong offset!");

struct FUIStateRelay final
{
public:
	TArray<struct FUIStateRelayBaton>             AvailableBatons;
	TArray<struct FUIStateRelayBaton>             ClaimedBatons;
	uint8                                         Pad_20[0x8];
};
static_assert(alignof(FUIStateRelay) == 0x000008, "Wrong alignment on FUIStateRelay");
static_assert(sizeof(FUIStateRelay) == 0x000028, "Wrong size on FUIStateRelay");
static_assert(offsetof(FUIStateRelay, AvailableBatons) == 0x000000, "Member 'FUIStateRelay::AvailableBatons' has a wrong offset!");
static_assert(offsetof(FUIStateRelay, ClaimedBatons) == 0x000010, "Member 'FUIStateRelay::ClaimedBatons' has a wrong offset!");

}
