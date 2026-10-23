#pragma once

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "IrisCore_structs.hpp"
#include "NetCore_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "DataRegistry_structs.hpp"
#include "MovieScene_structs.hpp"

namespace SDK
{

enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8
{
	CancelAbilityImmediately                 = 0,
	RemoveAbilityOnEnd                       = 1,
	DoNothing                                = 2,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3,
};

enum class EGameplayEffectAttributeCaptureSource : uint8
{
	Source                                   = 0,
	Target                                   = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2,
};

enum class EGameplayCueEvent : uint8
{
	OnActive                                 = 0,
	WhileActive                              = 1,
	Executed                                 = 2,
	Removed                                  = 3,
	EGameplayCueEvent_MAX                    = 4,
};

enum class EGameplayAbilityActivationMode : uint8
{
	Authority                                = 0,
	NonAuthority                             = 1,
	Predicting                               = 2,
	Confirmed                                = 3,
	Rejected                                 = 4,
	EGameplayAbilityActivationMode_MAX       = 5,
};

enum class EAbilityGenericReplicatedEvent : uint8
{
	GenericConfirm                           = 0,
	GenericCancel                            = 1,
	InputPressed                             = 2,
	InputReleased                            = 3,
	GenericSignalFromClient                  = 4,
	GenericSignalFromServer                  = 5,
	GameCustom1                              = 6,
	GameCustom2                              = 7,
	GameCustom3                              = 8,
	GameCustom4                              = 9,
	GameCustom5                              = 10,
	GameCustom6                              = 11,
	MAX                                      = 12,
};

enum class EGameplayCuePayloadType : uint8
{
	CueParameters                            = 0,
	FromSpec                                 = 1,
	EGameplayCuePayloadType_MAX              = 2,
};

enum class EGameplayAbilityInputBinds : uint8
{
	Ability1                                 = 0,
	Ability2                                 = 1,
	Ability3                                 = 2,
	Ability4                                 = 3,
	Ability5                                 = 4,
	Ability6                                 = 5,
	Ability7                                 = 6,
	Ability8                                 = 7,
	Ability9                                 = 8,
	EGameplayAbilityInputBinds_MAX           = 9,
};

enum class ETargetDataFilterSelf : uint8
{
	TDFS_Any                                 = 0,
	TDFS_NoSelf                              = 1,
	TDFS_NoOthers                            = 2,
	TDFS_MAX                                 = 3,
};

enum class EAbilityTaskWaitState : uint8
{
	WaitingOnGame                            = 1,
	WaitingOnUser                            = 2,
	WaitingOnAvatar                          = 4,
	EAbilityTaskWaitState_MAX                = 5,
};

enum class ERootMotionMoveToActorTargetOffsetType : uint8
{
	AlignFromTargetToSource                  = 0,
	AlignToTargetForward                     = 1,
	AlignToWorldSpace                        = 2,
	ERootMotionMoveToActorTargetOffsetType_MAX = 3,
};

enum class EAbilityTaskNetSyncType : uint8
{
	BothWait                                 = 0,
	OnlyServerWait                           = 1,
	OnlyClientWait                           = 2,
	EAbilityTaskNetSyncType_MAX              = 3,
};

enum class EWaitAttributeChangeComparison : uint8
{
	None                                     = 0,
	GreaterThan                              = 1,
	LessThan                                 = 2,
	GreaterThanOrEqualTo                     = 3,
	LessThanOrEqualTo                        = 4,
	NotEqualTo                               = 5,
	ExactlyEqualTo                           = 6,
	MAX                                      = 7,
};

enum class EWaitGameplayTagQueryTriggerCondition : uint8
{
	WhenTrue                                 = 0,
	WhenFalse                                = 1,
	EWaitGameplayTagQueryTriggerCondition_MAX = 2,
};

enum class EGameplayEffectReplicationMode : uint8
{
	Minimal                                  = 0,
	Mixed                                    = 1,
	Full                                     = 2,
	EGameplayEffectReplicationMode_MAX       = 3,
};

enum class ERepAnimPositionMethod : uint8
{
	Position                                 = 0,
	CurrentSectionId                         = 1,
	ERepAnimPositionMethod_MAX               = 2,
};

enum class EGameplayTargetingConfirmation : uint8
{
	Instant                                  = 0,
	UserConfirmed                            = 1,
	Custom                                   = 2,
	CustomMulti                              = 3,
	EGameplayTargetingConfirmation_MAX       = 4,
};

enum class EGameplayAbilityTargetingLocationType : uint8
{
	LiteralTransform                         = 0,
	ActorTransform                           = 1,
	SocketTransform                          = 2,
	EGameplayAbilityTargetingLocationType_MAX = 3,
};

enum class EGameplayAbilityInstancingPolicy : uint8
{
	NonInstanced                             = 0,
	InstancedPerActor                        = 1,
	InstancedPerExecution                    = 2,
	EGameplayAbilityInstancingPolicy_MAX     = 3,
};

enum class EGameplayAbilityNetExecutionPolicy : uint8
{
	LocalPredicted                           = 0,
	LocalOnly                                = 1,
	ServerInitiated                          = 2,
	ServerOnly                               = 3,
	EGameplayAbilityNetExecutionPolicy_MAX   = 4,
};

enum class EGameplayAbilityNetSecurityPolicy : uint8
{
	ClientOrServer                           = 0,
	ServerOnlyExecution                      = 1,
	ServerOnlyTermination                    = 2,
	ServerOnly                               = 3,
	EGameplayAbilityNetSecurityPolicy_MAX    = 4,
};

enum class EGameplayAbilityReplicationPolicy : uint8
{
	ReplicateNo                              = 0,
	ReplicateYes                             = 1,
	EGameplayAbilityReplicationPolicy_MAX    = 2,
};

enum class EGameplayAbilityTriggerSource : uint8
{
	GameplayEvent                            = 0,
	OwnedTagAdded                            = 1,
	OwnedTagPresent                          = 2,
	EGameplayAbilityTriggerSource_MAX        = 3,
};

enum class EGameplayCueNotify_EffectPlaySpace : uint8
{
	WorldSpace                               = 0,
	CameraSpace                              = 1,
	EGameplayCueNotify_MAX                   = 2,
};

enum class EGameplayCueNotify_LocallyControlledSource : uint8
{
	InstigatorActor                          = 0,
	TargetActor                              = 1,
	EGameplayCueNotify_MAX                   = 2,
};

enum class EGameplayCueNotify_LocallyControlledPolicy : uint8
{
	Always                                   = 0,
	LocalOnly                                = 1,
	NotLocal                                 = 2,
	EGameplayCueNotify_MAX                   = 3,
};

enum class EGameplayCueNotify_AttachPolicy : uint8
{
	DoNotAttach                              = 0,
	AttachToTarget                           = 1,
	EGameplayCueNotify_MAX                   = 2,
};

enum class EGameplayEffectMagnitudeCalculation : uint8
{
	ScalableFloat                            = 0,
	AttributeBased                           = 1,
	CustomCalculationClass                   = 2,
	SetByCaller                              = 3,
	EGameplayEffectMagnitudeCalculation_MAX  = 4,
};

enum class EAttributeBasedFloatCalculationType : uint8
{
	AttributeMagnitude                       = 0,
	AttributeBaseValue                       = 1,
	AttributeBonusMagnitude                  = 2,
	AttributeMagnitudeEvaluatedUpToChannel   = 3,
	EAttributeBasedFloatCalculationType_MAX  = 4,
};

enum class EGameplayEffectScopedModifierAggregatorType : uint8
{
	CapturedAttributeBacked                  = 0,
	Transient                                = 1,
	EGameplayEffectScopedModifierAggregatorType_MAX = 2,
};

enum class EGameplayEffectDurationType : uint8
{
	Instant                                  = 0,
	Infinite                                 = 1,
	HasDuration                              = 2,
	EGameplayEffectDurationType_MAX          = 3,
};

enum class EGameplayEffectStackingDurationPolicy : uint8
{
	RefreshOnSuccessfulApplication           = 0,
	NeverRefresh                             = 1,
	EGameplayEffectStackingDurationPolicy_MAX = 2,
};

enum class EGameplayEffectStackingPeriodPolicy : uint8
{
	ResetOnSuccessfulApplication             = 0,
	NeverReset                               = 1,
	EGameplayEffectStackingPeriodPolicy_MAX  = 2,
};

enum class EGameplayEffectStackingExpirationPolicy : uint8
{
	ClearEntireStack                         = 0,
	RemoveSingleStackAndRefreshDuration      = 1,
	RefreshDuration                          = 2,
	EGameplayEffectStackingExpirationPolicy_MAX = 3,
};

enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8
{
	NeverReset                               = 0,
	ResetPeriod                              = 1,
	ExecuteAndResetPeriod                    = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3,
};

enum class EGameplayModEvaluationChannel : uint8
{
	Channel0                                 = 0,
	Channel1                                 = 1,
	Channel2                                 = 2,
	Channel3                                 = 3,
	Channel4                                 = 4,
	Channel5                                 = 5,
	Channel6                                 = 6,
	Channel7                                 = 7,
	Channel8                                 = 8,
	Channel9                                 = 9,
	Channel_MAX                              = 10,
	EGameplayModEvaluationChannel_MAX        = 11,
};

enum class EGameplayModOp : uint8
{
	Additive                                 = 0,
	Multiplicitive                           = 1,
	Division                                 = 2,
	Override                                 = 3,
	Max                                      = 4,
};

enum class EGameplayEffectStackingType : uint8
{
	None                                     = 0,
	AggregateBySource                        = 1,
	AggregateByTarget                        = 2,
	EGameplayEffectStackingType_MAX          = 3,
};

enum class EGameplayTagEventType : uint8
{
	NewOrRemoved                             = 0,
	AnyCountChange                           = 1,
	EGameplayTagEventType_MAX                = 2,
};

struct FGameplayAttribute final
{
public:
	class FString                                 AttributeName;
	TFieldPath<class FProperty>                   Attribute;
	class UStruct*                                AttributeOwner;
};
static_assert(alignof(FGameplayAttribute) == 0x000008, "Wrong alignment on FGameplayAttribute");
static_assert(sizeof(FGameplayAttribute) == 0x000038, "Wrong size on FGameplayAttribute");
static_assert(offsetof(FGameplayAttribute, AttributeName) == 0x000000, "Member 'FGameplayAttribute::AttributeName' has a wrong offset!");
static_assert(offsetof(FGameplayAttribute, Attribute) == 0x000010, "Member 'FGameplayAttribute::Attribute' has a wrong offset!");
static_assert(offsetof(FGameplayAttribute, AttributeOwner) == 0x000030, "Member 'FGameplayAttribute::AttributeOwner' has a wrong offset!");

struct FGameplayEffectModifiedAttribute final
{
public:
	struct FGameplayAttribute                     Attribute;
	float                                         TotalMagnitude;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(FGameplayEffectModifiedAttribute) == 0x000008, "Wrong alignment on FGameplayEffectModifiedAttribute");
static_assert(sizeof(FGameplayEffectModifiedAttribute) == 0x000040, "Wrong size on FGameplayEffectModifiedAttribute");
static_assert(offsetof(FGameplayEffectModifiedAttribute, Attribute) == 0x000000, "Member 'FGameplayEffectModifiedAttribute::Attribute' has a wrong offset!");
static_assert(offsetof(FGameplayEffectModifiedAttribute, TotalMagnitude) == 0x000038, "Member 'FGameplayEffectModifiedAttribute::TotalMagnitude' has a wrong offset!");

struct FGameplayEffectAttributeCaptureDefinition final
{
public:
	struct FGameplayAttribute                     AttributeToCapture;
	EGameplayEffectAttributeCaptureSource         AttributeSource;
	bool                                          bSnapshot;
	uint8                                         Pad_3A[0x6];
};
static_assert(alignof(FGameplayEffectAttributeCaptureDefinition) == 0x000008, "Wrong alignment on FGameplayEffectAttributeCaptureDefinition");
static_assert(sizeof(FGameplayEffectAttributeCaptureDefinition) == 0x000040, "Wrong size on FGameplayEffectAttributeCaptureDefinition");
static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, AttributeToCapture) == 0x000000, "Member 'FGameplayEffectAttributeCaptureDefinition::AttributeToCapture' has a wrong offset!");
static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, AttributeSource) == 0x000038, "Member 'FGameplayEffectAttributeCaptureDefinition::AttributeSource' has a wrong offset!");
static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, bSnapshot) == 0x000039, "Member 'FGameplayEffectAttributeCaptureDefinition::bSnapshot' has a wrong offset!");

struct FGameplayEffectAttributeCaptureSpec final
{
public:
	struct FGameplayEffectAttributeCaptureDefinition BackingDefinition;
	uint8                                         Pad_40[0x10];
};
static_assert(alignof(FGameplayEffectAttributeCaptureSpec) == 0x000008, "Wrong alignment on FGameplayEffectAttributeCaptureSpec");
static_assert(sizeof(FGameplayEffectAttributeCaptureSpec) == 0x000050, "Wrong size on FGameplayEffectAttributeCaptureSpec");
static_assert(offsetof(FGameplayEffectAttributeCaptureSpec, BackingDefinition) == 0x000000, "Member 'FGameplayEffectAttributeCaptureSpec::BackingDefinition' has a wrong offset!");

struct FGameplayEffectAttributeCaptureSpecContainer final
{
public:
	TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes;
	TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes;
	bool                                          bHasNonSnapshottedAttributes;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FGameplayEffectAttributeCaptureSpecContainer) == 0x000008, "Wrong alignment on FGameplayEffectAttributeCaptureSpecContainer");
static_assert(sizeof(FGameplayEffectAttributeCaptureSpecContainer) == 0x000028, "Wrong size on FGameplayEffectAttributeCaptureSpecContainer");
static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, SourceAttributes) == 0x000000, "Member 'FGameplayEffectAttributeCaptureSpecContainer::SourceAttributes' has a wrong offset!");
static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, TargetAttributes) == 0x000010, "Member 'FGameplayEffectAttributeCaptureSpecContainer::TargetAttributes' has a wrong offset!");
static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, bHasNonSnapshottedAttributes) == 0x000020, "Member 'FGameplayEffectAttributeCaptureSpecContainer::bHasNonSnapshottedAttributes' has a wrong offset!");

struct FTagContainerAggregator final
{
public:
	struct FGameplayTagContainer                  CapturedActorTags;
	struct FGameplayTagContainer                  CapturedSpecTags;
	struct FGameplayTagContainer                  ScopedTags;
	uint8                                         Pad_60[0x28];
};
static_assert(alignof(FTagContainerAggregator) == 0x000008, "Wrong alignment on FTagContainerAggregator");
static_assert(sizeof(FTagContainerAggregator) == 0x000088, "Wrong size on FTagContainerAggregator");
static_assert(offsetof(FTagContainerAggregator, CapturedActorTags) == 0x000000, "Member 'FTagContainerAggregator::CapturedActorTags' has a wrong offset!");
static_assert(offsetof(FTagContainerAggregator, CapturedSpecTags) == 0x000020, "Member 'FTagContainerAggregator::CapturedSpecTags' has a wrong offset!");
static_assert(offsetof(FTagContainerAggregator, ScopedTags) == 0x000040, "Member 'FTagContainerAggregator::ScopedTags' has a wrong offset!");

struct alignas(0x08) FGameplayEffectContextHandle final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FGameplayEffectContextHandle) == 0x000008, "Wrong alignment on FGameplayEffectContextHandle");
static_assert(sizeof(FGameplayEffectContextHandle) == 0x000018, "Wrong size on FGameplayEffectContextHandle");

struct FModifierSpec final
{
public:
	float                                         EvaluatedMagnitude;
};
static_assert(alignof(FModifierSpec) == 0x000004, "Wrong alignment on FModifierSpec");
static_assert(sizeof(FModifierSpec) == 0x000004, "Wrong size on FModifierSpec");
static_assert(offsetof(FModifierSpec, EvaluatedMagnitude) == 0x000000, "Member 'FModifierSpec::EvaluatedMagnitude' has a wrong offset!");

struct FScalableFloat
{
public:
	float                                         Value;
	uint8                                         Pad_4[0x4];
	struct FCurveTableRowHandle                   Curve;
	struct FDataRegistryType                      RegistryType;
	uint8                                         Pad_1C[0xC];
};
static_assert(alignof(FScalableFloat) == 0x000008, "Wrong alignment on FScalableFloat");
static_assert(sizeof(FScalableFloat) == 0x000028, "Wrong size on FScalableFloat");
static_assert(offsetof(FScalableFloat, Value) == 0x000000, "Member 'FScalableFloat::Value' has a wrong offset!");
static_assert(offsetof(FScalableFloat, Curve) == 0x000008, "Member 'FScalableFloat::Curve' has a wrong offset!");
static_assert(offsetof(FScalableFloat, RegistryType) == 0x000018, "Member 'FScalableFloat::RegistryType' has a wrong offset!");

struct FGameplayAbilitySpecHandle final
{
public:
	int32                                         Handle;
};
static_assert(alignof(FGameplayAbilitySpecHandle) == 0x000004, "Wrong alignment on FGameplayAbilitySpecHandle");
static_assert(sizeof(FGameplayAbilitySpecHandle) == 0x000004, "Wrong size on FGameplayAbilitySpecHandle");
static_assert(offsetof(FGameplayAbilitySpecHandle, Handle) == 0x000000, "Member 'FGameplayAbilitySpecHandle::Handle' has a wrong offset!");

struct FGameplayAbilitySpecDef final
{
public:
	TSubclassOf<class UGameplayAbility>           Ability;
	struct FScalableFloat                         LevelScalableFloat;
	int32                                         InputID;
	EGameplayEffectGrantedAbilityRemovePolicy     RemovalPolicy;
	uint8                                         Pad_35[0x3];
	TWeakObjectPtr<class UObject>                 SourceObject;
	uint8                                         Pad_40[0x50];
	struct FGameplayAbilitySpecHandle             AssignedHandle;
	uint8                                         Pad_94[0x4];
};
static_assert(alignof(FGameplayAbilitySpecDef) == 0x000008, "Wrong alignment on FGameplayAbilitySpecDef");
static_assert(sizeof(FGameplayAbilitySpecDef) == 0x000098, "Wrong size on FGameplayAbilitySpecDef");
static_assert(offsetof(FGameplayAbilitySpecDef, Ability) == 0x000000, "Member 'FGameplayAbilitySpecDef::Ability' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpecDef, LevelScalableFloat) == 0x000008, "Member 'FGameplayAbilitySpecDef::LevelScalableFloat' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpecDef, InputID) == 0x000030, "Member 'FGameplayAbilitySpecDef::InputID' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpecDef, RemovalPolicy) == 0x000034, "Member 'FGameplayAbilitySpecDef::RemovalPolicy' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpecDef, SourceObject) == 0x000038, "Member 'FGameplayAbilitySpecDef::SourceObject' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpecDef, AssignedHandle) == 0x000090, "Member 'FGameplayAbilitySpecDef::AssignedHandle' has a wrong offset!");

struct FGameplayEffectSpec final
{
public:
	class UGameplayEffect*                        Def;
	TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes;
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;
	uint8                                         Pad_40[0x10];
	float                                         Duration;
	float                                         Period;
	float                                         ChanceToApplyToTarget;
	uint8                                         Pad_5C[0x4];
	struct FTagContainerAggregator                CapturedSourceTags;
	struct FTagContainerAggregator                CapturedTargetTags;
	struct FGameplayTagContainer                  DynamicGrantedTags;
	struct FGameplayTagContainer                  DynamicAssetTags;
	TArray<struct FModifierSpec>                  Modifiers;
	int32                                         StackCount;
	uint8                                         bCompletedSourceAttributeCapture : 1;
	uint8                                         bCompletedTargetAttributeCapture : 1;
	uint8                                         bDurationLocked : 1;
	uint8                                         Pad_1C5[0x3];
	TArray<struct FGameplayAbilitySpecDef>        GrantedAbilitySpecs;
	uint8                                         Pad_1D8[0xA0];
	struct FGameplayEffectContextHandle           EffectContext;
	float                                         Level;
	uint8                                         Pad_294[0x4];
};
static_assert(alignof(FGameplayEffectSpec) == 0x000008, "Wrong alignment on FGameplayEffectSpec");
static_assert(sizeof(FGameplayEffectSpec) == 0x000298, "Wrong size on FGameplayEffectSpec");
static_assert(offsetof(FGameplayEffectSpec, Def) == 0x000000, "Member 'FGameplayEffectSpec::Def' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, ModifiedAttributes) == 0x000008, "Member 'FGameplayEffectSpec::ModifiedAttributes' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, CapturedRelevantAttributes) == 0x000018, "Member 'FGameplayEffectSpec::CapturedRelevantAttributes' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, Duration) == 0x000050, "Member 'FGameplayEffectSpec::Duration' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, Period) == 0x000054, "Member 'FGameplayEffectSpec::Period' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, ChanceToApplyToTarget) == 0x000058, "Member 'FGameplayEffectSpec::ChanceToApplyToTarget' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, CapturedSourceTags) == 0x000060, "Member 'FGameplayEffectSpec::CapturedSourceTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, CapturedTargetTags) == 0x0000E8, "Member 'FGameplayEffectSpec::CapturedTargetTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, DynamicGrantedTags) == 0x000170, "Member 'FGameplayEffectSpec::DynamicGrantedTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, DynamicAssetTags) == 0x000190, "Member 'FGameplayEffectSpec::DynamicAssetTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, Modifiers) == 0x0001B0, "Member 'FGameplayEffectSpec::Modifiers' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, StackCount) == 0x0001C0, "Member 'FGameplayEffectSpec::StackCount' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, GrantedAbilitySpecs) == 0x0001C8, "Member 'FGameplayEffectSpec::GrantedAbilitySpecs' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, EffectContext) == 0x000278, "Member 'FGameplayEffectSpec::EffectContext' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, Level) == 0x000290, "Member 'FGameplayEffectSpec::Level' has a wrong offset!");

struct FPredictionKey final
{
public:
	class UPackageMap*                            PredictiveConnection;
	int16                                         Current;
	int16                                         Base;
	bool                                          bIsStale;
	bool                                          bIsServerInitiated;
	uint8                                         Pad_E[0xA];
};
static_assert(alignof(FPredictionKey) == 0x000008, "Wrong alignment on FPredictionKey");
static_assert(sizeof(FPredictionKey) == 0x000018, "Wrong size on FPredictionKey");
static_assert(offsetof(FPredictionKey, PredictiveConnection) == 0x000000, "Member 'FPredictionKey::PredictiveConnection' has a wrong offset!");
static_assert(offsetof(FPredictionKey, Current) == 0x000008, "Member 'FPredictionKey::Current' has a wrong offset!");
static_assert(offsetof(FPredictionKey, Base) == 0x00000A, "Member 'FPredictionKey::Base' has a wrong offset!");
static_assert(offsetof(FPredictionKey, bIsStale) == 0x00000C, "Member 'FPredictionKey::bIsStale' has a wrong offset!");
static_assert(offsetof(FPredictionKey, bIsServerInitiated) == 0x00000D, "Member 'FPredictionKey::bIsServerInitiated' has a wrong offset!");

struct FActiveGameplayEffect final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0xC];
	struct FGameplayEffectSpec                    Spec;
	struct FPredictionKey                         PredictionKey;
	float                                         StartServerWorldTime;
	float                                         CachedStartServerWorldTime;
	float                                         StartWorldTime;
	bool                                          bIsInhibited;
	uint8                                         Pad_2D5[0x83];
};
static_assert(alignof(FActiveGameplayEffect) == 0x000008, "Wrong alignment on FActiveGameplayEffect");
static_assert(sizeof(FActiveGameplayEffect) == 0x000358, "Wrong size on FActiveGameplayEffect");
static_assert(offsetof(FActiveGameplayEffect, Spec) == 0x000018, "Member 'FActiveGameplayEffect::Spec' has a wrong offset!");
static_assert(offsetof(FActiveGameplayEffect, PredictionKey) == 0x0002B0, "Member 'FActiveGameplayEffect::PredictionKey' has a wrong offset!");
static_assert(offsetof(FActiveGameplayEffect, StartServerWorldTime) == 0x0002C8, "Member 'FActiveGameplayEffect::StartServerWorldTime' has a wrong offset!");
static_assert(offsetof(FActiveGameplayEffect, CachedStartServerWorldTime) == 0x0002CC, "Member 'FActiveGameplayEffect::CachedStartServerWorldTime' has a wrong offset!");
static_assert(offsetof(FActiveGameplayEffect, StartWorldTime) == 0x0002D0, "Member 'FActiveGameplayEffect::StartWorldTime' has a wrong offset!");
static_assert(offsetof(FActiveGameplayEffect, bIsInhibited) == 0x0002D4, "Member 'FActiveGameplayEffect::bIsInhibited' has a wrong offset!");

struct FGameplayCueNotifyActorArray final
{
public:
	TArray<class AGameplayCueNotify_Actor*>       Actors;
};
static_assert(alignof(FGameplayCueNotifyActorArray) == 0x000008, "Wrong alignment on FGameplayCueNotifyActorArray");
static_assert(sizeof(FGameplayCueNotifyActorArray) == 0x000010, "Wrong size on FGameplayCueNotifyActorArray");
static_assert(offsetof(FGameplayCueNotifyActorArray, Actors) == 0x000000, "Member 'FGameplayCueNotifyActorArray::Actors' has a wrong offset!");

struct FGameplayEffectContext
{
public:
	uint8                                         Pad_0[0x8];
	TWeakObjectPtr<class AActor>                  Instigator;
	TWeakObjectPtr<class AActor>                  EffectCauser;
	TWeakObjectPtr<class UGameplayAbility>        AbilityCDO;
	TWeakObjectPtr<class UGameplayAbility>        AbilityInstanceNotReplicated;
	int32                                         AbilityLevel;
	TWeakObjectPtr<class UObject>                 SourceObject;
	TWeakObjectPtr<class UAbilitySystemComponent> InstigatorAbilitySystemComponent;
	uint8                                         Pad_3C[0x4];
	TArray<TWeakObjectPtr<class AActor>>          Actors;
	uint8                                         Pad_50[0x10];
	struct FVector                                WorldOrigin;
	uint8                                         bHasWorldOrigin : 1;
	uint8                                         bReplicateSourceObject : 1;
	uint8                                         bReplicateInstigator : 1;
	uint8                                         bReplicateEffectCauser : 1;
	uint8                                         Pad_79[0x7];
};
static_assert(alignof(FGameplayEffectContext) == 0x000008, "Wrong alignment on FGameplayEffectContext");
static_assert(sizeof(FGameplayEffectContext) == 0x000080, "Wrong size on FGameplayEffectContext");
static_assert(offsetof(FGameplayEffectContext, Instigator) == 0x000008, "Member 'FGameplayEffectContext::Instigator' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, EffectCauser) == 0x000010, "Member 'FGameplayEffectContext::EffectCauser' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, AbilityCDO) == 0x000018, "Member 'FGameplayEffectContext::AbilityCDO' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, AbilityInstanceNotReplicated) == 0x000020, "Member 'FGameplayEffectContext::AbilityInstanceNotReplicated' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, AbilityLevel) == 0x000028, "Member 'FGameplayEffectContext::AbilityLevel' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, SourceObject) == 0x00002C, "Member 'FGameplayEffectContext::SourceObject' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, InstigatorAbilitySystemComponent) == 0x000034, "Member 'FGameplayEffectContext::InstigatorAbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, Actors) == 0x000040, "Member 'FGameplayEffectContext::Actors' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, WorldOrigin) == 0x000060, "Member 'FGameplayEffectContext::WorldOrigin' has a wrong offset!");

struct FGameplayAbilityTargetingLocationInfo final
{
public:
	uint8                                         Pad_0[0x10];
	EGameplayAbilityTargetingLocationType         LocationType;
	uint8                                         Pad_11[0xF];
	struct FTransform                             LiteralTransform;
	class AActor*                                 SourceActor;
	class UMeshComponent*                         SourceComponent;
	class UGameplayAbility*                       SourceAbility;
	class FName                                   SourceSocketName;
	uint8                                         Pad_9C[0x4];
};
static_assert(alignof(FGameplayAbilityTargetingLocationInfo) == 0x000010, "Wrong alignment on FGameplayAbilityTargetingLocationInfo");
static_assert(sizeof(FGameplayAbilityTargetingLocationInfo) == 0x0000A0, "Wrong size on FGameplayAbilityTargetingLocationInfo");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, LocationType) == 0x000010, "Member 'FGameplayAbilityTargetingLocationInfo::LocationType' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, LiteralTransform) == 0x000020, "Member 'FGameplayAbilityTargetingLocationInfo::LiteralTransform' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceActor) == 0x000080, "Member 'FGameplayAbilityTargetingLocationInfo::SourceActor' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceComponent) == 0x000088, "Member 'FGameplayAbilityTargetingLocationInfo::SourceComponent' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceAbility) == 0x000090, "Member 'FGameplayAbilityTargetingLocationInfo::SourceAbility' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceSocketName) == 0x000098, "Member 'FGameplayAbilityTargetingLocationInfo::SourceSocketName' has a wrong offset!");

struct alignas(0x08) FGameplayAbilityTargetData
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FGameplayAbilityTargetData) == 0x000008, "Wrong alignment on FGameplayAbilityTargetData");
static_assert(sizeof(FGameplayAbilityTargetData) == 0x000008, "Wrong size on FGameplayAbilityTargetData");

struct FGameplayAbilityTargetData_ActorArray final : public FGameplayAbilityTargetData
{
public:
	uint8                                         Pad_8[0x8];
	struct FGameplayAbilityTargetingLocationInfo  SourceLocation;
	TArray<TWeakObjectPtr<class AActor>>          TargetActorArray;
};
static_assert(alignof(FGameplayAbilityTargetData_ActorArray) == 0x000010, "Wrong alignment on FGameplayAbilityTargetData_ActorArray");
static_assert(sizeof(FGameplayAbilityTargetData_ActorArray) == 0x0000C0, "Wrong size on FGameplayAbilityTargetData_ActorArray");
static_assert(offsetof(FGameplayAbilityTargetData_ActorArray, SourceLocation) == 0x000010, "Member 'FGameplayAbilityTargetData_ActorArray::SourceLocation' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetData_ActorArray, TargetActorArray) == 0x0000B0, "Member 'FGameplayAbilityTargetData_ActorArray::TargetActorArray' has a wrong offset!");

struct FActiveGameplayEffectsContainer final : public FFastArraySerializer
{
public:
	uint8                                         Pad_108[0x28];
	TArray<struct FActiveGameplayEffect>          GameplayEffects_Internal;
	uint8                                         Pad_140[0x310];
	TArray<class UGameplayEffect*>                ApplicationImmunityQueryEffects;
	uint8                                         Pad_460[0x20];
};
static_assert(alignof(FActiveGameplayEffectsContainer) == 0x000008, "Wrong alignment on FActiveGameplayEffectsContainer");
static_assert(sizeof(FActiveGameplayEffectsContainer) == 0x000480, "Wrong size on FActiveGameplayEffectsContainer");
static_assert(offsetof(FActiveGameplayEffectsContainer, GameplayEffects_Internal) == 0x000130, "Member 'FActiveGameplayEffectsContainer::GameplayEffects_Internal' has a wrong offset!");
static_assert(offsetof(FActiveGameplayEffectsContainer, ApplicationImmunityQueryEffects) == 0x000450, "Member 'FActiveGameplayEffectsContainer::ApplicationImmunityQueryEffects' has a wrong offset!");

struct FConditionalGameplayEffect final
{
public:
	TSubclassOf<class UGameplayEffect>            EffectClass;
	struct FGameplayTagContainer                  RequiredSourceTags;
};
static_assert(alignof(FConditionalGameplayEffect) == 0x000008, "Wrong alignment on FConditionalGameplayEffect");
static_assert(sizeof(FConditionalGameplayEffect) == 0x000028, "Wrong size on FConditionalGameplayEffect");
static_assert(offsetof(FConditionalGameplayEffect, EffectClass) == 0x000000, "Member 'FConditionalGameplayEffect::EffectClass' has a wrong offset!");
static_assert(offsetof(FConditionalGameplayEffect, RequiredSourceTags) == 0x000008, "Member 'FConditionalGameplayEffect::RequiredSourceTags' has a wrong offset!");

struct FGameplayAbilityTargetingLocationInfoNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FGameplayAbilityTargetingLocationInfoNetSerializerConfig) == 0x000008, "Wrong alignment on FGameplayAbilityTargetingLocationInfoNetSerializerConfig");
static_assert(sizeof(FGameplayAbilityTargetingLocationInfoNetSerializerConfig) == 0x000010, "Wrong size on FGameplayAbilityTargetingLocationInfoNetSerializerConfig");

struct FPredictionKeyNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FPredictionKeyNetSerializerConfig) == 0x000008, "Wrong alignment on FPredictionKeyNetSerializerConfig");
static_assert(sizeof(FPredictionKeyNetSerializerConfig) == 0x000010, "Wrong size on FPredictionKeyNetSerializerConfig");

struct FActiveGameplayEffectHandle final
{
public:
	int32                                         Handle;
	bool                                          bPassedFiltersAndWasExecuted;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FActiveGameplayEffectHandle) == 0x000004, "Wrong alignment on FActiveGameplayEffectHandle");
static_assert(sizeof(FActiveGameplayEffectHandle) == 0x000008, "Wrong size on FActiveGameplayEffectHandle");
static_assert(offsetof(FActiveGameplayEffectHandle, Handle) == 0x000000, "Member 'FActiveGameplayEffectHandle::Handle' has a wrong offset!");
static_assert(offsetof(FActiveGameplayEffectHandle, bPassedFiltersAndWasExecuted) == 0x000004, "Member 'FActiveGameplayEffectHandle::bPassedFiltersAndWasExecuted' has a wrong offset!");

struct alignas(0x08) FGameplayEffectSpecHandle final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FGameplayEffectSpecHandle) == 0x000008, "Wrong alignment on FGameplayEffectSpecHandle");
static_assert(sizeof(FGameplayEffectSpecHandle) == 0x000010, "Wrong size on FGameplayEffectSpecHandle");

struct FGameplayEffectQuery final
{
public:
	uint8                                         Pad_0[0x10];
	TDelegate<void(const struct FActiveGameplayEffect& Effect, bool* bMatches)> CustomMatchDelegate_BP;
	uint8                                         Pad_1C[0x4];
	struct FGameplayTagQuery                      OwningTagQuery;
	struct FGameplayTagQuery                      EffectTagQuery;
	struct FGameplayTagQuery                      SourceTagQuery;
	struct FGameplayAttribute                     ModifyingAttribute;
	class UObject*                                EffectSource;
	TSubclassOf<class UGameplayEffect>            EffectDefinition;
	uint8                                         Pad_140[0x10];
};
static_assert(alignof(FGameplayEffectQuery) == 0x000008, "Wrong alignment on FGameplayEffectQuery");
static_assert(sizeof(FGameplayEffectQuery) == 0x000150, "Wrong size on FGameplayEffectQuery");
static_assert(offsetof(FGameplayEffectQuery, CustomMatchDelegate_BP) == 0x000010, "Member 'FGameplayEffectQuery::CustomMatchDelegate_BP' has a wrong offset!");
static_assert(offsetof(FGameplayEffectQuery, OwningTagQuery) == 0x000020, "Member 'FGameplayEffectQuery::OwningTagQuery' has a wrong offset!");
static_assert(offsetof(FGameplayEffectQuery, EffectTagQuery) == 0x000068, "Member 'FGameplayEffectQuery::EffectTagQuery' has a wrong offset!");
static_assert(offsetof(FGameplayEffectQuery, SourceTagQuery) == 0x0000B0, "Member 'FGameplayEffectQuery::SourceTagQuery' has a wrong offset!");
static_assert(offsetof(FGameplayEffectQuery, ModifyingAttribute) == 0x0000F8, "Member 'FGameplayEffectQuery::ModifyingAttribute' has a wrong offset!");
static_assert(offsetof(FGameplayEffectQuery, EffectSource) == 0x000130, "Member 'FGameplayEffectQuery::EffectSource' has a wrong offset!");
static_assert(offsetof(FGameplayEffectQuery, EffectDefinition) == 0x000138, "Member 'FGameplayEffectQuery::EffectDefinition' has a wrong offset!");

struct FGameplayCueParameters final
{
public:
	float                                         NormalizedMagnitude;
	float                                         RawMagnitude;
	struct FGameplayEffectContextHandle           EffectContext;
	struct FGameplayTag                           MatchedTagName;
	struct FGameplayTag                           OriginalTag;
	struct FGameplayTagContainer                  AggregatedSourceTags;
	struct FGameplayTagContainer                  AggregatedTargetTags;
	struct FVector_NetQuantize10                  Location;
	struct FVector_NetQuantizeNormal              Normal;
	TWeakObjectPtr<class AActor>                  Instigator;
	TWeakObjectPtr<class AActor>                  EffectCauser;
	TWeakObjectPtr<class UObject>                 SourceObject;
	TWeakObjectPtr<class UPhysicalMaterial>       PhysicalMaterial;
	int32                                         GameplayEffectLevel;
	int32                                         AbilityLevel;
	TWeakObjectPtr<class USceneComponent>         TargetAttachComponent;
	bool                                          bReplicateLocationWhenUsingMinimalRepProxy;
	uint8                                         Pad_C9[0x7];
};
static_assert(alignof(FGameplayCueParameters) == 0x000008, "Wrong alignment on FGameplayCueParameters");
static_assert(sizeof(FGameplayCueParameters) == 0x0000D0, "Wrong size on FGameplayCueParameters");
static_assert(offsetof(FGameplayCueParameters, NormalizedMagnitude) == 0x000000, "Member 'FGameplayCueParameters::NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, RawMagnitude) == 0x000004, "Member 'FGameplayCueParameters::RawMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, EffectContext) == 0x000008, "Member 'FGameplayCueParameters::EffectContext' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, MatchedTagName) == 0x000020, "Member 'FGameplayCueParameters::MatchedTagName' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, OriginalTag) == 0x000024, "Member 'FGameplayCueParameters::OriginalTag' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, AggregatedSourceTags) == 0x000028, "Member 'FGameplayCueParameters::AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, AggregatedTargetTags) == 0x000048, "Member 'FGameplayCueParameters::AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, Location) == 0x000068, "Member 'FGameplayCueParameters::Location' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, Normal) == 0x000080, "Member 'FGameplayCueParameters::Normal' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, Instigator) == 0x000098, "Member 'FGameplayCueParameters::Instigator' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, EffectCauser) == 0x0000A0, "Member 'FGameplayCueParameters::EffectCauser' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, SourceObject) == 0x0000A8, "Member 'FGameplayCueParameters::SourceObject' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, PhysicalMaterial) == 0x0000B0, "Member 'FGameplayCueParameters::PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, GameplayEffectLevel) == 0x0000B8, "Member 'FGameplayCueParameters::GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, AbilityLevel) == 0x0000BC, "Member 'FGameplayCueParameters::AbilityLevel' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, TargetAttachComponent) == 0x0000C0, "Member 'FGameplayCueParameters::TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, bReplicateLocationWhenUsingMinimalRepProxy) == 0x0000C8, "Member 'FGameplayCueParameters::bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");

struct FActiveGameplayCue final : public FFastArraySerializerItem
{
public:
	struct FGameplayTag                           GameplayCueTag;
	struct FPredictionKey                         PredictionKey;
	struct FGameplayCueParameters                 Parameters;
	bool                                          bPredictivelyRemoved;
	uint8                                         Pad_F9[0x7];
};
static_assert(alignof(FActiveGameplayCue) == 0x000008, "Wrong alignment on FActiveGameplayCue");
static_assert(sizeof(FActiveGameplayCue) == 0x000100, "Wrong size on FActiveGameplayCue");
static_assert(offsetof(FActiveGameplayCue, GameplayCueTag) == 0x00000C, "Member 'FActiveGameplayCue::GameplayCueTag' has a wrong offset!");
static_assert(offsetof(FActiveGameplayCue, PredictionKey) == 0x000010, "Member 'FActiveGameplayCue::PredictionKey' has a wrong offset!");
static_assert(offsetof(FActiveGameplayCue, Parameters) == 0x000028, "Member 'FActiveGameplayCue::Parameters' has a wrong offset!");
static_assert(offsetof(FActiveGameplayCue, bPredictivelyRemoved) == 0x0000F8, "Member 'FActiveGameplayCue::bPredictivelyRemoved' has a wrong offset!");

struct FActiveGameplayCueContainer final : public FFastArraySerializer
{
public:
	TArray<struct FActiveGameplayCue>             GameplayCues;
	uint8                                         Pad_118[0x8];
	class UAbilitySystemComponent*                Owner;
};
static_assert(alignof(FActiveGameplayCueContainer) == 0x000008, "Wrong alignment on FActiveGameplayCueContainer");
static_assert(sizeof(FActiveGameplayCueContainer) == 0x000128, "Wrong size on FActiveGameplayCueContainer");
static_assert(offsetof(FActiveGameplayCueContainer, GameplayCues) == 0x000108, "Member 'FActiveGameplayCueContainer::GameplayCues' has a wrong offset!");
static_assert(offsetof(FActiveGameplayCueContainer, Owner) == 0x000120, "Member 'FActiveGameplayCueContainer::Owner' has a wrong offset!");

struct FGameplayCueObjectLibrary final
{
public:
	TArray<class FString>                         Paths;
	uint8                                         Pad_10[0x20];
	class UObjectLibrary*                         ActorObjectLibrary;
	class UObjectLibrary*                         StaticObjectLibrary;
	class UGameplayCueSet*                        CueSet;
	uint8                                         Pad_48[0x4];
	bool                                          bShouldSyncScan;
	bool                                          bShouldAsyncLoad;
	bool                                          bShouldSyncLoad;
	bool                                          bHasBeenInitialized;
};
static_assert(alignof(FGameplayCueObjectLibrary) == 0x000008, "Wrong alignment on FGameplayCueObjectLibrary");
static_assert(sizeof(FGameplayCueObjectLibrary) == 0x000050, "Wrong size on FGameplayCueObjectLibrary");
static_assert(offsetof(FGameplayCueObjectLibrary, Paths) == 0x000000, "Member 'FGameplayCueObjectLibrary::Paths' has a wrong offset!");
static_assert(offsetof(FGameplayCueObjectLibrary, ActorObjectLibrary) == 0x000030, "Member 'FGameplayCueObjectLibrary::ActorObjectLibrary' has a wrong offset!");
static_assert(offsetof(FGameplayCueObjectLibrary, StaticObjectLibrary) == 0x000038, "Member 'FGameplayCueObjectLibrary::StaticObjectLibrary' has a wrong offset!");
static_assert(offsetof(FGameplayCueObjectLibrary, CueSet) == 0x000040, "Member 'FGameplayCueObjectLibrary::CueSet' has a wrong offset!");
static_assert(offsetof(FGameplayCueObjectLibrary, bShouldSyncScan) == 0x00004C, "Member 'FGameplayCueObjectLibrary::bShouldSyncScan' has a wrong offset!");
static_assert(offsetof(FGameplayCueObjectLibrary, bShouldAsyncLoad) == 0x00004D, "Member 'FGameplayCueObjectLibrary::bShouldAsyncLoad' has a wrong offset!");
static_assert(offsetof(FGameplayCueObjectLibrary, bShouldSyncLoad) == 0x00004E, "Member 'FGameplayCueObjectLibrary::bShouldSyncLoad' has a wrong offset!");
static_assert(offsetof(FGameplayCueObjectLibrary, bHasBeenInitialized) == 0x00004F, "Member 'FGameplayCueObjectLibrary::bHasBeenInitialized' has a wrong offset!");

struct FGameplayEffectRemovalInfo final
{
public:
	bool                                          bPrematureRemoval;
	uint8                                         Pad_1[0x3];
	int32                                         StackCount;
	struct FGameplayEffectContextHandle           EffectContext;
};
static_assert(alignof(FGameplayEffectRemovalInfo) == 0x000008, "Wrong alignment on FGameplayEffectRemovalInfo");
static_assert(sizeof(FGameplayEffectRemovalInfo) == 0x000020, "Wrong size on FGameplayEffectRemovalInfo");
static_assert(offsetof(FGameplayEffectRemovalInfo, bPrematureRemoval) == 0x000000, "Member 'FGameplayEffectRemovalInfo::bPrematureRemoval' has a wrong offset!");
static_assert(offsetof(FGameplayEffectRemovalInfo, StackCount) == 0x000004, "Member 'FGameplayEffectRemovalInfo::StackCount' has a wrong offset!");
static_assert(offsetof(FGameplayEffectRemovalInfo, EffectContext) == 0x000008, "Member 'FGameplayEffectRemovalInfo::EffectContext' has a wrong offset!");

struct FGameplayAbilityLocalAnimMontage final
{
public:
	class UAnimMontage*                           AnimMontage;
	uint8                                         PlayInstanceId;
	uint8                                         Pad_9[0x7];
	struct FPredictionKey                         PredictionKey;
	TWeakObjectPtr<class UGameplayAbility>        AnimatingAbility;
};
static_assert(alignof(FGameplayAbilityLocalAnimMontage) == 0x000008, "Wrong alignment on FGameplayAbilityLocalAnimMontage");
static_assert(sizeof(FGameplayAbilityLocalAnimMontage) == 0x000030, "Wrong size on FGameplayAbilityLocalAnimMontage");
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, AnimMontage) == 0x000000, "Member 'FGameplayAbilityLocalAnimMontage::AnimMontage' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, PlayInstanceId) == 0x000008, "Member 'FGameplayAbilityLocalAnimMontage::PlayInstanceId' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, PredictionKey) == 0x000010, "Member 'FGameplayAbilityLocalAnimMontage::PredictionKey' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, AnimatingAbility) == 0x000028, "Member 'FGameplayAbilityLocalAnimMontage::AnimatingAbility' has a wrong offset!");

struct alignas(0x08) FGameplayAbilityTargetDataHandle final
{
public:
	uint8                                         Pad_0[0x28];
};
static_assert(alignof(FGameplayAbilityTargetDataHandle) == 0x000008, "Wrong alignment on FGameplayAbilityTargetDataHandle");
static_assert(sizeof(FGameplayAbilityTargetDataHandle) == 0x000028, "Wrong size on FGameplayAbilityTargetDataHandle");

struct FGameplayEventData final
{
public:
	struct FGameplayTag                           EventTag;
	uint8                                         Pad_4[0x4];
	class AActor*                                 Instigator;
	class AActor*                                 Target;
	class UObject*                                OptionalObject;
	class UObject*                                OptionalObject2;
	struct FGameplayEffectContextHandle           ContextHandle;
	struct FGameplayTagContainer                  InstigatorTags;
	struct FGameplayTagContainer                  TargetTags;
	float                                         EventMagnitude;
	uint8                                         Pad_84[0x4];
	struct FGameplayAbilityTargetDataHandle       TargetData;
};
static_assert(alignof(FGameplayEventData) == 0x000008, "Wrong alignment on FGameplayEventData");
static_assert(sizeof(FGameplayEventData) == 0x0000B0, "Wrong size on FGameplayEventData");
static_assert(offsetof(FGameplayEventData, EventTag) == 0x000000, "Member 'FGameplayEventData::EventTag' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, Instigator) == 0x000008, "Member 'FGameplayEventData::Instigator' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, Target) == 0x000010, "Member 'FGameplayEventData::Target' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, OptionalObject) == 0x000018, "Member 'FGameplayEventData::OptionalObject' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, OptionalObject2) == 0x000020, "Member 'FGameplayEventData::OptionalObject2' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, ContextHandle) == 0x000028, "Member 'FGameplayEventData::ContextHandle' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, InstigatorTags) == 0x000040, "Member 'FGameplayEventData::InstigatorTags' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, TargetTags) == 0x000060, "Member 'FGameplayEventData::TargetTags' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, EventMagnitude) == 0x000080, "Member 'FGameplayEventData::EventMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, TargetData) == 0x000088, "Member 'FGameplayEventData::TargetData' has a wrong offset!");

struct FMinimalGameplayCueReplicationProxyForNetSerializer final
{
public:
	TArray<struct FGameplayTag>                   Tags;
	TArray<struct FVector_NetQuantize>            Locations;
};
static_assert(alignof(FMinimalGameplayCueReplicationProxyForNetSerializer) == 0x000008, "Wrong alignment on FMinimalGameplayCueReplicationProxyForNetSerializer");
static_assert(sizeof(FMinimalGameplayCueReplicationProxyForNetSerializer) == 0x000020, "Wrong size on FMinimalGameplayCueReplicationProxyForNetSerializer");
static_assert(offsetof(FMinimalGameplayCueReplicationProxyForNetSerializer, Tags) == 0x000000, "Member 'FMinimalGameplayCueReplicationProxyForNetSerializer::Tags' has a wrong offset!");
static_assert(offsetof(FMinimalGameplayCueReplicationProxyForNetSerializer, Locations) == 0x000010, "Member 'FMinimalGameplayCueReplicationProxyForNetSerializer::Locations' has a wrong offset!");

struct FGameplayAbilityRepAnimMontage final
{
public:
	class UAnimMontage*                           AnimMontage;
	float                                         PlayRate;
	float                                         Position;
	float                                         BlendTime;
	uint8                                         NextSectionID;
	uint8                                         PlayInstanceId;
	uint8                                         bRepPosition : 1;
	uint8                                         IsStopped : 1;
	uint8                                         SkipPositionCorrection : 1;
	uint8                                         bSkipPlayRate : 1;
	uint8                                         Pad_17[0x1];
	struct FPredictionKey                         PredictionKey;
	uint8                                         SectionIdToPlay;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FGameplayAbilityRepAnimMontage) == 0x000008, "Wrong alignment on FGameplayAbilityRepAnimMontage");
static_assert(sizeof(FGameplayAbilityRepAnimMontage) == 0x000038, "Wrong size on FGameplayAbilityRepAnimMontage");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, AnimMontage) == 0x000000, "Member 'FGameplayAbilityRepAnimMontage::AnimMontage' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, PlayRate) == 0x000008, "Member 'FGameplayAbilityRepAnimMontage::PlayRate' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, Position) == 0x00000C, "Member 'FGameplayAbilityRepAnimMontage::Position' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, BlendTime) == 0x000010, "Member 'FGameplayAbilityRepAnimMontage::BlendTime' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, NextSectionID) == 0x000014, "Member 'FGameplayAbilityRepAnimMontage::NextSectionID' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, PlayInstanceId) == 0x000015, "Member 'FGameplayAbilityRepAnimMontage::PlayInstanceId' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, PredictionKey) == 0x000018, "Member 'FGameplayAbilityRepAnimMontage::PredictionKey' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, SectionIdToPlay) == 0x000030, "Member 'FGameplayAbilityRepAnimMontage::SectionIdToPlay' has a wrong offset!");

struct FMinimalReplicationTagCountMapNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FMinimalReplicationTagCountMapNetSerializerConfig) == 0x000008, "Wrong alignment on FMinimalReplicationTagCountMapNetSerializerConfig");
static_assert(sizeof(FMinimalReplicationTagCountMapNetSerializerConfig) == 0x000010, "Wrong size on FMinimalReplicationTagCountMapNetSerializerConfig");

struct FGameplayAbilityBindInfo final
{
public:
	EGameplayAbilityInputBinds                    Command;
	uint8                                         Pad_1[0x7];
	TSubclassOf<class UGameplayAbility>           GameplayAbilityClass;
};
static_assert(alignof(FGameplayAbilityBindInfo) == 0x000008, "Wrong alignment on FGameplayAbilityBindInfo");
static_assert(sizeof(FGameplayAbilityBindInfo) == 0x000010, "Wrong size on FGameplayAbilityBindInfo");
static_assert(offsetof(FGameplayAbilityBindInfo, Command) == 0x000000, "Member 'FGameplayAbilityBindInfo::Command' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityBindInfo, GameplayAbilityClass) == 0x000008, "Member 'FGameplayAbilityBindInfo::GameplayAbilityClass' has a wrong offset!");

struct FGameplayTagRequirements final
{
public:
	struct FGameplayTagContainer                  RequireTags;
	struct FGameplayTagContainer                  IgnoreTags;
};
static_assert(alignof(FGameplayTagRequirements) == 0x000008, "Wrong alignment on FGameplayTagRequirements");
static_assert(sizeof(FGameplayTagRequirements) == 0x000040, "Wrong size on FGameplayTagRequirements");
static_assert(offsetof(FGameplayTagRequirements, RequireTags) == 0x000000, "Member 'FGameplayTagRequirements::RequireTags' has a wrong offset!");
static_assert(offsetof(FGameplayTagRequirements, IgnoreTags) == 0x000020, "Member 'FGameplayTagRequirements::IgnoreTags' has a wrong offset!");

struct alignas(0x08) FGameplayTargetDataFilterHandle final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FGameplayTargetDataFilterHandle) == 0x000008, "Wrong alignment on FGameplayTargetDataFilterHandle");
static_assert(sizeof(FGameplayTargetDataFilterHandle) == 0x000010, "Wrong size on FGameplayTargetDataFilterHandle");

struct FGameplayAbilityActivationInfo final
{
public:
	EGameplayAbilityActivationMode                ActivationMode;
	uint8                                         bCanBeEndedByOtherInstance : 1;
	uint8                                         Pad_2[0x6];
	struct FPredictionKey                         PredictionKeyWhenActivated;
};
static_assert(alignof(FGameplayAbilityActivationInfo) == 0x000008, "Wrong alignment on FGameplayAbilityActivationInfo");
static_assert(sizeof(FGameplayAbilityActivationInfo) == 0x000020, "Wrong size on FGameplayAbilityActivationInfo");
static_assert(offsetof(FGameplayAbilityActivationInfo, ActivationMode) == 0x000000, "Member 'FGameplayAbilityActivationInfo::ActivationMode' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActivationInfo, PredictionKeyWhenActivated) == 0x000008, "Member 'FGameplayAbilityActivationInfo::PredictionKeyWhenActivated' has a wrong offset!");

struct FWorldReticleParameters final
{
public:
	struct FVector                                AOEScale;
};
static_assert(alignof(FWorldReticleParameters) == 0x000008, "Wrong alignment on FWorldReticleParameters");
static_assert(sizeof(FWorldReticleParameters) == 0x000018, "Wrong size on FWorldReticleParameters");
static_assert(offsetof(FWorldReticleParameters, AOEScale) == 0x000000, "Member 'FWorldReticleParameters::AOEScale' has a wrong offset!");

struct FAttributeDefaults final
{
public:
	TSubclassOf<class UAttributeSet>              Attributes;
	class UDataTable*                             DefaultStartingTable;
};
static_assert(alignof(FAttributeDefaults) == 0x000008, "Wrong alignment on FAttributeDefaults");
static_assert(sizeof(FAttributeDefaults) == 0x000010, "Wrong size on FAttributeDefaults");
static_assert(offsetof(FAttributeDefaults, Attributes) == 0x000000, "Member 'FAttributeDefaults::Attributes' has a wrong offset!");
static_assert(offsetof(FAttributeDefaults, DefaultStartingTable) == 0x000008, "Member 'FAttributeDefaults::DefaultStartingTable' has a wrong offset!");

struct FGameplayEffectSpecForRPC final
{
public:
	class UGameplayEffect*                        Def;
	TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes;
	struct FGameplayEffectContextHandle           EffectContext;
	struct FGameplayTagContainer                  AggregatedSourceTags;
	struct FGameplayTagContainer                  AggregatedTargetTags;
	float                                         Level;
	float                                         AbilityLevel;
};
static_assert(alignof(FGameplayEffectSpecForRPC) == 0x000008, "Wrong alignment on FGameplayEffectSpecForRPC");
static_assert(sizeof(FGameplayEffectSpecForRPC) == 0x000078, "Wrong size on FGameplayEffectSpecForRPC");
static_assert(offsetof(FGameplayEffectSpecForRPC, Def) == 0x000000, "Member 'FGameplayEffectSpecForRPC::Def' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpecForRPC, ModifiedAttributes) == 0x000008, "Member 'FGameplayEffectSpecForRPC::ModifiedAttributes' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpecForRPC, EffectContext) == 0x000018, "Member 'FGameplayEffectSpecForRPC::EffectContext' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpecForRPC, AggregatedSourceTags) == 0x000030, "Member 'FGameplayEffectSpecForRPC::AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpecForRPC, AggregatedTargetTags) == 0x000050, "Member 'FGameplayEffectSpecForRPC::AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpecForRPC, Level) == 0x000070, "Member 'FGameplayEffectSpecForRPC::Level' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpecForRPC, AbilityLevel) == 0x000074, "Member 'FGameplayEffectSpecForRPC::AbilityLevel' has a wrong offset!");

struct GameplayAbilities::FServerAbilityRPCBatch final
{
public:
	struct FGameplayAbilitySpecHandle             AbilitySpecHandle;
	uint8                                         Pad_4[0x4];
	struct FPredictionKey                         PredictionKey;
	struct FGameplayAbilityTargetDataHandle       TargetData;
	bool                                          InputPressed;
	bool                                          Ended;
	bool                                          Started;
	uint8                                         Pad_4B[0x5];
};
static_assert(alignof(GameplayAbilities::FServerAbilityRPCBatch) == 0x000008, "Wrong alignment on GameplayAbilities::FServerAbilityRPCBatch");
static_assert(sizeof(GameplayAbilities::FServerAbilityRPCBatch) == 0x000050, "Wrong size on GameplayAbilities::FServerAbilityRPCBatch");
static_assert(offsetof(GameplayAbilities::FServerAbilityRPCBatch, AbilitySpecHandle) == 0x000000, "Member 'GameplayAbilities::FServerAbilityRPCBatch::AbilitySpecHandle' has a wrong offset!");
static_assert(offsetof(GameplayAbilities::FServerAbilityRPCBatch, PredictionKey) == 0x000008, "Member 'GameplayAbilities::FServerAbilityRPCBatch::PredictionKey' has a wrong offset!");
static_assert(offsetof(GameplayAbilities::FServerAbilityRPCBatch, TargetData) == 0x000020, "Member 'GameplayAbilities::FServerAbilityRPCBatch::TargetData' has a wrong offset!");
static_assert(offsetof(GameplayAbilities::FServerAbilityRPCBatch, InputPressed) == 0x000048, "Member 'GameplayAbilities::FServerAbilityRPCBatch::InputPressed' has a wrong offset!");
static_assert(offsetof(GameplayAbilities::FServerAbilityRPCBatch, Ended) == 0x000049, "Member 'GameplayAbilities::FServerAbilityRPCBatch::Ended' has a wrong offset!");
static_assert(offsetof(GameplayAbilities::FServerAbilityRPCBatch, Started) == 0x00004A, "Member 'GameplayAbilities::FServerAbilityRPCBatch::Started' has a wrong offset!");

struct alignas(0x08) FGameplayAttributeData
{
public:
	uint8                                         Pad_0[0x8];
	float                                         BaseValue;
	float                                         CurrentValue;
};
static_assert(alignof(FGameplayAttributeData) == 0x000008, "Wrong alignment on FGameplayAttributeData");
static_assert(sizeof(FGameplayAttributeData) == 0x000010, "Wrong size on FGameplayAttributeData");
static_assert(offsetof(FGameplayAttributeData, BaseValue) == 0x000008, "Member 'FGameplayAttributeData::BaseValue' has a wrong offset!");
static_assert(offsetof(FGameplayAttributeData, CurrentValue) == 0x00000C, "Member 'FGameplayAttributeData::CurrentValue' has a wrong offset!");

struct FReplicatedPredictionKeyItem final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	struct FPredictionKey                         PredictionKey;
};
static_assert(alignof(FReplicatedPredictionKeyItem) == 0x000008, "Wrong alignment on FReplicatedPredictionKeyItem");
static_assert(sizeof(FReplicatedPredictionKeyItem) == 0x000028, "Wrong size on FReplicatedPredictionKeyItem");
static_assert(offsetof(FReplicatedPredictionKeyItem, PredictionKey) == 0x000010, "Member 'FReplicatedPredictionKeyItem::PredictionKey' has a wrong offset!");

struct FReplicatedPredictionKeyMap final : public FFastArraySerializer
{
public:
	TArray<struct FReplicatedPredictionKeyItem>   PredictionKeys;
};
static_assert(alignof(FReplicatedPredictionKeyMap) == 0x000008, "Wrong alignment on FReplicatedPredictionKeyMap");
static_assert(sizeof(FReplicatedPredictionKeyMap) == 0x000118, "Wrong size on FReplicatedPredictionKeyMap");
static_assert(offsetof(FReplicatedPredictionKeyMap, PredictionKeys) == 0x000108, "Member 'FReplicatedPredictionKeyMap::PredictionKeys' has a wrong offset!");

struct alignas(0x08) FGameplayAbilityActorInfo final
{
public:
	uint8                                         Pad_0[0x8];
	TWeakObjectPtr<class AActor>                  OwnerActor;
	TWeakObjectPtr<class AActor>                  AvatarActor;
	TWeakObjectPtr<class APlayerController>       PlayerController;
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<class USkeletalMeshComponent>  SkeletalMeshComponent;
	TWeakObjectPtr<class UAnimInstance>           AnimInstance;
	TWeakObjectPtr<class UMovementComponent>      MovementComponent;
	class FName                                   AffectedAnimInstanceTag;
	uint8                                         Pad_44[0x4];
};
static_assert(alignof(FGameplayAbilityActorInfo) == 0x000008, "Wrong alignment on FGameplayAbilityActorInfo");
static_assert(sizeof(FGameplayAbilityActorInfo) == 0x000048, "Wrong size on FGameplayAbilityActorInfo");
static_assert(offsetof(FGameplayAbilityActorInfo, OwnerActor) == 0x000008, "Member 'FGameplayAbilityActorInfo::OwnerActor' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActorInfo, AvatarActor) == 0x000010, "Member 'FGameplayAbilityActorInfo::AvatarActor' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActorInfo, PlayerController) == 0x000018, "Member 'FGameplayAbilityActorInfo::PlayerController' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActorInfo, AbilitySystemComponent) == 0x000020, "Member 'FGameplayAbilityActorInfo::AbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActorInfo, SkeletalMeshComponent) == 0x000028, "Member 'FGameplayAbilityActorInfo::SkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActorInfo, AnimInstance) == 0x000030, "Member 'FGameplayAbilityActorInfo::AnimInstance' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActorInfo, MovementComponent) == 0x000038, "Member 'FGameplayAbilityActorInfo::MovementComponent' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActorInfo, AffectedAnimInstanceTag) == 0x000040, "Member 'FGameplayAbilityActorInfo::AffectedAnimInstanceTag' has a wrong offset!");

struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
public:
	struct FHitResult                             HitResult;
	bool                                          bHitReplaced;
	uint8                                         Pad_E9[0x7];
};
static_assert(alignof(FGameplayAbilityTargetData_SingleTargetHit) == 0x000008, "Wrong alignment on FGameplayAbilityTargetData_SingleTargetHit");
static_assert(sizeof(FGameplayAbilityTargetData_SingleTargetHit) == 0x0000F0, "Wrong size on FGameplayAbilityTargetData_SingleTargetHit");
static_assert(offsetof(FGameplayAbilityTargetData_SingleTargetHit, HitResult) == 0x000008, "Member 'FGameplayAbilityTargetData_SingleTargetHit::HitResult' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetData_SingleTargetHit, bHitReplaced) == 0x0000E8, "Member 'FGameplayAbilityTargetData_SingleTargetHit::bHitReplaced' has a wrong offset!");

struct FMinimalReplicationTagCountMap final
{
public:
	uint8                                         Pad_0[0x50];
	class UAbilitySystemComponent*                Owner;
	uint8                                         Pad_58[0x8];
};
static_assert(alignof(FMinimalReplicationTagCountMap) == 0x000008, "Wrong alignment on FMinimalReplicationTagCountMap");
static_assert(sizeof(FMinimalReplicationTagCountMap) == 0x000060, "Wrong size on FMinimalReplicationTagCountMap");
static_assert(offsetof(FMinimalReplicationTagCountMap, Owner) == 0x000050, "Member 'FMinimalReplicationTagCountMap::Owner' has a wrong offset!");

struct alignas(0x10) FMinimalGameplayCueReplicationProxy final
{
public:
	uint8                                         Pad_0[0x2C0];
	class UAbilitySystemComponent*                Owner;
	uint8                                         Pad_2C8[0x8];
};
static_assert(alignof(FMinimalGameplayCueReplicationProxy) == 0x000010, "Wrong alignment on FMinimalGameplayCueReplicationProxy");
static_assert(sizeof(FMinimalGameplayCueReplicationProxy) == 0x0002D0, "Wrong size on FMinimalGameplayCueReplicationProxy");
static_assert(offsetof(FMinimalGameplayCueReplicationProxy, Owner) == 0x0002C0, "Member 'FMinimalGameplayCueReplicationProxy::Owner' has a wrong offset!");

struct FPreallocationInfo final
{
public:
	TMap<TSubclassOf<class UObject>, struct FGameplayCueNotifyActorArray> PreallocatedInstances;
	TArray<TSubclassOf<class AGameplayCueNotify_Actor>> ClassesNeedingPreallocation;
	uint8                                         Pad_60[0x8];
};
static_assert(alignof(FPreallocationInfo) == 0x000008, "Wrong alignment on FPreallocationInfo");
static_assert(sizeof(FPreallocationInfo) == 0x000068, "Wrong size on FPreallocationInfo");
static_assert(offsetof(FPreallocationInfo, PreallocatedInstances) == 0x000000, "Member 'FPreallocationInfo::PreallocatedInstances' has a wrong offset!");
static_assert(offsetof(FPreallocationInfo, ClassesNeedingPreallocation) == 0x000050, "Member 'FPreallocationInfo::ClassesNeedingPreallocation' has a wrong offset!");

struct FGameplayAbilitySpec final : public FFastArraySerializerItem
{
public:
	struct FGameplayAbilitySpecHandle             Handle;
	class UGameplayAbility*                       Ability;
	int32                                         Level;
	int32                                         InputID;
	TWeakObjectPtr<class UObject>                 SourceObject;
	uint8                                         ActiveCount;
	uint8                                         InputPressed : 1;
	uint8                                         RemoveAfterActivation : 1;
	uint8                                         PendingRemove : 1;
	uint8                                         bActivateOnce : 1;
	uint8                                         Pad_2A[0x6];
	struct FGameplayAbilityActivationInfo         ActivationInfo;
	struct FGameplayTagContainer                  DynamicAbilityTags;
	TArray<class UGameplayAbility*>               NonReplicatedInstances;
	TArray<class UGameplayAbility*>               ReplicatedInstances;
	struct FActiveGameplayEffectHandle            GameplayEffectHandle;
	uint8                                         Pad_98[0x50];
};
static_assert(alignof(FGameplayAbilitySpec) == 0x000008, "Wrong alignment on FGameplayAbilitySpec");
static_assert(sizeof(FGameplayAbilitySpec) == 0x0000E8, "Wrong size on FGameplayAbilitySpec");
static_assert(offsetof(FGameplayAbilitySpec, Handle) == 0x00000C, "Member 'FGameplayAbilitySpec::Handle' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, Ability) == 0x000010, "Member 'FGameplayAbilitySpec::Ability' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, Level) == 0x000018, "Member 'FGameplayAbilitySpec::Level' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, InputID) == 0x00001C, "Member 'FGameplayAbilitySpec::InputID' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, SourceObject) == 0x000020, "Member 'FGameplayAbilitySpec::SourceObject' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, ActiveCount) == 0x000028, "Member 'FGameplayAbilitySpec::ActiveCount' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, ActivationInfo) == 0x000030, "Member 'FGameplayAbilitySpec::ActivationInfo' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, DynamicAbilityTags) == 0x000050, "Member 'FGameplayAbilitySpec::DynamicAbilityTags' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, NonReplicatedInstances) == 0x000070, "Member 'FGameplayAbilitySpec::NonReplicatedInstances' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, ReplicatedInstances) == 0x000080, "Member 'FGameplayAbilitySpec::ReplicatedInstances' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, GameplayEffectHandle) == 0x000090, "Member 'FGameplayAbilitySpec::GameplayEffectHandle' has a wrong offset!");

struct FGameplayAbilitySpecContainer final : public FFastArraySerializer
{
public:
	TArray<struct FGameplayAbilitySpec>           Items;
	class UAbilitySystemComponent*                Owner;
};
static_assert(alignof(FGameplayAbilitySpecContainer) == 0x000008, "Wrong alignment on FGameplayAbilitySpecContainer");
static_assert(sizeof(FGameplayAbilitySpecContainer) == 0x000120, "Wrong size on FGameplayAbilitySpecContainer");
static_assert(offsetof(FGameplayAbilitySpecContainer, Items) == 0x000108, "Member 'FGameplayAbilitySpecContainer::Items' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpecContainer, Owner) == 0x000118, "Member 'FGameplayAbilitySpecContainer::Owner' has a wrong offset!");

struct FNetSerializeScriptStructCache final
{
public:
	TArray<class UScriptStruct*>                  ScriptStructs;
};
static_assert(alignof(FNetSerializeScriptStructCache) == 0x000008, "Wrong alignment on FNetSerializeScriptStructCache");
static_assert(sizeof(FNetSerializeScriptStructCache) == 0x000010, "Wrong size on FNetSerializeScriptStructCache");
static_assert(offsetof(FNetSerializeScriptStructCache, ScriptStructs) == 0x000000, "Member 'FNetSerializeScriptStructCache::ScriptStructs' has a wrong offset!");

struct FGameplayCuePendingExecute final
{
public:
	uint8                                         Pad_0[0x18];
	struct FPredictionKey                         PredictionKey;
	EGameplayCuePayloadType                       PayloadType;
	uint8                                         Pad_31[0x7];
	class UAbilitySystemComponent*                OwningComponent;
	struct FGameplayEffectSpecForRPC              FromSpec;
	struct FGameplayCueParameters                 CueParameters;
};
static_assert(alignof(FGameplayCuePendingExecute) == 0x000008, "Wrong alignment on FGameplayCuePendingExecute");
static_assert(sizeof(FGameplayCuePendingExecute) == 0x000188, "Wrong size on FGameplayCuePendingExecute");
static_assert(offsetof(FGameplayCuePendingExecute, PredictionKey) == 0x000018, "Member 'FGameplayCuePendingExecute::PredictionKey' has a wrong offset!");
static_assert(offsetof(FGameplayCuePendingExecute, PayloadType) == 0x000030, "Member 'FGameplayCuePendingExecute::PayloadType' has a wrong offset!");
static_assert(offsetof(FGameplayCuePendingExecute, OwningComponent) == 0x000038, "Member 'FGameplayCuePendingExecute::OwningComponent' has a wrong offset!");
static_assert(offsetof(FGameplayCuePendingExecute, FromSpec) == 0x000040, "Member 'FGameplayCuePendingExecute::FromSpec' has a wrong offset!");
static_assert(offsetof(FGameplayCuePendingExecute, CueParameters) == 0x0000B8, "Member 'FGameplayCuePendingExecute::CueParameters' has a wrong offset!");

struct FMinimalReplicationTagCountMapForNetSerializer final
{
public:
	TArray<struct FGameplayTag>                   Tags;
};
static_assert(alignof(FMinimalReplicationTagCountMapForNetSerializer) == 0x000008, "Wrong alignment on FMinimalReplicationTagCountMapForNetSerializer");
static_assert(sizeof(FMinimalReplicationTagCountMapForNetSerializer) == 0x000010, "Wrong size on FMinimalReplicationTagCountMapForNetSerializer");
static_assert(offsetof(FMinimalReplicationTagCountMapForNetSerializer, Tags) == 0x000000, "Member 'FMinimalReplicationTagCountMapForNetSerializer::Tags' has a wrong offset!");

struct FAbilityTriggerData final
{
public:
	struct FGameplayTag                           TriggerTag;
	EGameplayAbilityTriggerSource                 TriggerSource;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FAbilityTriggerData) == 0x000004, "Wrong alignment on FAbilityTriggerData");
static_assert(sizeof(FAbilityTriggerData) == 0x000008, "Wrong size on FAbilityTriggerData");
static_assert(offsetof(FAbilityTriggerData, TriggerTag) == 0x000000, "Member 'FAbilityTriggerData::TriggerTag' has a wrong offset!");
static_assert(offsetof(FAbilityTriggerData, TriggerSource) == 0x000004, "Member 'FAbilityTriggerData::TriggerSource' has a wrong offset!");

struct FGameplayTargetDataFilter final
{
public:
	uint8                                         Pad_0[0x8];
	class AActor*                                 SelfActor;
	TSubclassOf<class AActor>                     RequiredActorClass;
	ETargetDataFilterSelf                         SelfFilter;
	bool                                          bReverseFilter;
	uint8                                         Pad_1A[0x6];
};
static_assert(alignof(FGameplayTargetDataFilter) == 0x000008, "Wrong alignment on FGameplayTargetDataFilter");
static_assert(sizeof(FGameplayTargetDataFilter) == 0x000020, "Wrong size on FGameplayTargetDataFilter");
static_assert(offsetof(FGameplayTargetDataFilter, SelfActor) == 0x000008, "Member 'FGameplayTargetDataFilter::SelfActor' has a wrong offset!");
static_assert(offsetof(FGameplayTargetDataFilter, RequiredActorClass) == 0x000010, "Member 'FGameplayTargetDataFilter::RequiredActorClass' has a wrong offset!");
static_assert(offsetof(FGameplayTargetDataFilter, SelfFilter) == 0x000018, "Member 'FGameplayTargetDataFilter::SelfFilter' has a wrong offset!");
static_assert(offsetof(FGameplayTargetDataFilter, bReverseFilter) == 0x000019, "Member 'FGameplayTargetDataFilter::bReverseFilter' has a wrong offset!");

struct FAttributeMetaData final : public FTableRowBase
{
public:
	float                                         BaseValue;
	float                                         MinValue;
	float                                         MaxValue;
	uint8                                         Pad_14[0x4];
	class FString                                 DerivedAttributeInfo;
	bool                                          bCanStack;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FAttributeMetaData) == 0x000008, "Wrong alignment on FAttributeMetaData");
static_assert(sizeof(FAttributeMetaData) == 0x000030, "Wrong size on FAttributeMetaData");
static_assert(offsetof(FAttributeMetaData, BaseValue) == 0x000008, "Member 'FAttributeMetaData::BaseValue' has a wrong offset!");
static_assert(offsetof(FAttributeMetaData, MinValue) == 0x00000C, "Member 'FAttributeMetaData::MinValue' has a wrong offset!");
static_assert(offsetof(FAttributeMetaData, MaxValue) == 0x000010, "Member 'FAttributeMetaData::MaxValue' has a wrong offset!");
static_assert(offsetof(FAttributeMetaData, DerivedAttributeInfo) == 0x000018, "Member 'FAttributeMetaData::DerivedAttributeInfo' has a wrong offset!");
static_assert(offsetof(FAttributeMetaData, bCanStack) == 0x000028, "Member 'FAttributeMetaData::bCanStack' has a wrong offset!");

struct FGameplayAbilityTargetData_LocationInfo final : public FGameplayAbilityTargetData
{
public:
	uint8                                         Pad_8[0x8];
	struct FGameplayAbilityTargetingLocationInfo  SourceLocation;
	struct FGameplayAbilityTargetingLocationInfo  TargetLocation;
};
static_assert(alignof(FGameplayAbilityTargetData_LocationInfo) == 0x000010, "Wrong alignment on FGameplayAbilityTargetData_LocationInfo");
static_assert(sizeof(FGameplayAbilityTargetData_LocationInfo) == 0x000150, "Wrong size on FGameplayAbilityTargetData_LocationInfo");
static_assert(offsetof(FGameplayAbilityTargetData_LocationInfo, SourceLocation) == 0x000010, "Member 'FGameplayAbilityTargetData_LocationInfo::SourceLocation' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetData_LocationInfo, TargetLocation) == 0x0000B0, "Member 'FGameplayAbilityTargetData_LocationInfo::TargetLocation' has a wrong offset!");

struct FGameplayCueNotify_PlacementInfo final
{
public:
	class FName                                   SocketName;
	EGameplayCueNotify_AttachPolicy               AttachPolicy;
	EAttachmentRule                               AttachmentRule;
	uint8                                         Pad_6[0x2];
	uint8                                         bOverrideRotation : 1;
	uint8                                         bOverrideScale : 1;
	uint8                                         Pad_9[0x7];
	struct FRotator                               RotationOverride;
	struct FVector                                ScaleOverride;
};
static_assert(alignof(FGameplayCueNotify_PlacementInfo) == 0x000008, "Wrong alignment on FGameplayCueNotify_PlacementInfo");
static_assert(sizeof(FGameplayCueNotify_PlacementInfo) == 0x000040, "Wrong size on FGameplayCueNotify_PlacementInfo");
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, SocketName) == 0x000000, "Member 'FGameplayCueNotify_PlacementInfo::SocketName' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, AttachPolicy) == 0x000004, "Member 'FGameplayCueNotify_PlacementInfo::AttachPolicy' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, AttachmentRule) == 0x000005, "Member 'FGameplayCueNotify_PlacementInfo::AttachmentRule' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, RotationOverride) == 0x000010, "Member 'FGameplayCueNotify_PlacementInfo::RotationOverride' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, ScaleOverride) == 0x000028, "Member 'FGameplayCueNotify_PlacementInfo::ScaleOverride' has a wrong offset!");

struct FAbilityEndedData final
{
public:
	class UGameplayAbility*                       AbilityThatEnded;
	struct FGameplayAbilitySpecHandle             AbilitySpecHandle;
	bool                                          bReplicateEndAbility;
	bool                                          bWasCancelled;
	uint8                                         Pad_E[0x2];
};
static_assert(alignof(FAbilityEndedData) == 0x000008, "Wrong alignment on FAbilityEndedData");
static_assert(sizeof(FAbilityEndedData) == 0x000010, "Wrong size on FAbilityEndedData");
static_assert(offsetof(FAbilityEndedData, AbilityThatEnded) == 0x000000, "Member 'FAbilityEndedData::AbilityThatEnded' has a wrong offset!");
static_assert(offsetof(FAbilityEndedData, AbilitySpecHandle) == 0x000008, "Member 'FAbilityEndedData::AbilitySpecHandle' has a wrong offset!");
static_assert(offsetof(FAbilityEndedData, bReplicateEndAbility) == 0x00000C, "Member 'FAbilityEndedData::bReplicateEndAbility' has a wrong offset!");
static_assert(offsetof(FAbilityEndedData, bWasCancelled) == 0x00000D, "Member 'FAbilityEndedData::bWasCancelled' has a wrong offset!");

struct FAbilityTaskDebugMessage final
{
public:
	class UGameplayTask*                          FromTask;
	class FString                                 message;
};
static_assert(alignof(FAbilityTaskDebugMessage) == 0x000008, "Wrong alignment on FAbilityTaskDebugMessage");
static_assert(sizeof(FAbilityTaskDebugMessage) == 0x000018, "Wrong size on FAbilityTaskDebugMessage");
static_assert(offsetof(FAbilityTaskDebugMessage, FromTask) == 0x000000, "Member 'FAbilityTaskDebugMessage::FromTask' has a wrong offset!");
static_assert(offsetof(FAbilityTaskDebugMessage, message) == 0x000008, "Member 'FAbilityTaskDebugMessage::message' has a wrong offset!");

struct FGameplayAbilitySpecHandleAndPredictionKey final
{
public:
	struct FGameplayAbilitySpecHandle             AbilityHandle;
	int32                                         PredictionKeyAtCreation;
};
static_assert(alignof(FGameplayAbilitySpecHandleAndPredictionKey) == 0x000004, "Wrong alignment on FGameplayAbilitySpecHandleAndPredictionKey");
static_assert(sizeof(FGameplayAbilitySpecHandleAndPredictionKey) == 0x000008, "Wrong size on FGameplayAbilitySpecHandleAndPredictionKey");
static_assert(offsetof(FGameplayAbilitySpecHandleAndPredictionKey, AbilityHandle) == 0x000000, "Member 'FGameplayAbilitySpecHandleAndPredictionKey::AbilityHandle' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpecHandleAndPredictionKey, PredictionKeyAtCreation) == 0x000004, "Member 'FGameplayAbilitySpecHandleAndPredictionKey::PredictionKeyAtCreation' has a wrong offset!");

struct FGameplayCueTag final
{
public:
	struct FGameplayTag                           GameplayCueTag;
};
static_assert(alignof(FGameplayCueTag) == 0x000004, "Wrong alignment on FGameplayCueTag");
static_assert(sizeof(FGameplayCueTag) == 0x000004, "Wrong size on FGameplayCueTag");
static_assert(offsetof(FGameplayCueTag, GameplayCueTag) == 0x000000, "Member 'FGameplayCueTag::GameplayCueTag' has a wrong offset!");

struct FGameplayCueNotify_SpawnCondition final
{
public:
	EGameplayCueNotify_LocallyControlledSource    LocallyControlledSource;
	EGameplayCueNotify_LocallyControlledPolicy    LocallyControlledPolicy;
	uint8                                         Pad_2[0x2];
	float                                         ChanceToPlay;
	TArray<EPhysicalSurface>                      AllowedSurfaceTypes;
	uint8                                         Pad_18[0x8];
	TArray<EPhysicalSurface>                      RejectedSurfaceTypes;
	uint8                                         Pad_30[0x8];
};
static_assert(alignof(FGameplayCueNotify_SpawnCondition) == 0x000008, "Wrong alignment on FGameplayCueNotify_SpawnCondition");
static_assert(sizeof(FGameplayCueNotify_SpawnCondition) == 0x000038, "Wrong size on FGameplayCueNotify_SpawnCondition");
static_assert(offsetof(FGameplayCueNotify_SpawnCondition, LocallyControlledSource) == 0x000000, "Member 'FGameplayCueNotify_SpawnCondition::LocallyControlledSource' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SpawnCondition, LocallyControlledPolicy) == 0x000001, "Member 'FGameplayCueNotify_SpawnCondition::LocallyControlledPolicy' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SpawnCondition, ChanceToPlay) == 0x000004, "Member 'FGameplayCueNotify_SpawnCondition::ChanceToPlay' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SpawnCondition, AllowedSurfaceTypes) == 0x000008, "Member 'FGameplayCueNotify_SpawnCondition::AllowedSurfaceTypes' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SpawnCondition, RejectedSurfaceTypes) == 0x000020, "Member 'FGameplayCueNotify_SpawnCondition::RejectedSurfaceTypes' has a wrong offset!");

struct FGameplayCueNotify_SpawnResult final
{
public:
	TArray<class UFXSystemComponent*>             FxSystemComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	TArray<class UCameraShakeBase*>               CameraShakes;
	TArray<TScriptInterface<class ICameraLensEffectInterface>> CameraLensEffects;
	class UForceFeedbackComponent*                ForceFeedbackComponent;
	class APlayerController*                      ForceFeedbackTargetPC;
	class UDecalComponent*                        DecalComponent;
};
static_assert(alignof(FGameplayCueNotify_SpawnResult) == 0x000008, "Wrong alignment on FGameplayCueNotify_SpawnResult");
static_assert(sizeof(FGameplayCueNotify_SpawnResult) == 0x000058, "Wrong size on FGameplayCueNotify_SpawnResult");
static_assert(offsetof(FGameplayCueNotify_SpawnResult, FxSystemComponents) == 0x000000, "Member 'FGameplayCueNotify_SpawnResult::FxSystemComponents' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SpawnResult, AudioComponents) == 0x000010, "Member 'FGameplayCueNotify_SpawnResult::AudioComponents' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SpawnResult, CameraShakes) == 0x000020, "Member 'FGameplayCueNotify_SpawnResult::CameraShakes' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SpawnResult, CameraLensEffects) == 0x000030, "Member 'FGameplayCueNotify_SpawnResult::CameraLensEffects' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SpawnResult, ForceFeedbackComponent) == 0x000040, "Member 'FGameplayCueNotify_SpawnResult::ForceFeedbackComponent' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SpawnResult, ForceFeedbackTargetPC) == 0x000048, "Member 'FGameplayCueNotify_SpawnResult::ForceFeedbackTargetPC' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SpawnResult, DecalComponent) == 0x000050, "Member 'FGameplayCueNotify_SpawnResult::DecalComponent' has a wrong offset!");

struct FGameplayCueNotify_ParticleInfo final
{
public:
	struct FGameplayCueNotify_SpawnCondition      SpawnConditionOverride;
	struct FGameplayCueNotify_PlacementInfo       PlacementInfoOverride;
	class UNiagaraSystem*                         NiagaraSystem;
	uint8                                         bOverrideSpawnCondition : 1;
	uint8                                         bOverridePlacementInfo : 1;
	uint8                                         bCastShadow : 1;
	uint8                                         Pad_81[0x7];
};
static_assert(alignof(FGameplayCueNotify_ParticleInfo) == 0x000008, "Wrong alignment on FGameplayCueNotify_ParticleInfo");
static_assert(sizeof(FGameplayCueNotify_ParticleInfo) == 0x000088, "Wrong size on FGameplayCueNotify_ParticleInfo");
static_assert(offsetof(FGameplayCueNotify_ParticleInfo, SpawnConditionOverride) == 0x000000, "Member 'FGameplayCueNotify_ParticleInfo::SpawnConditionOverride' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_ParticleInfo, PlacementInfoOverride) == 0x000038, "Member 'FGameplayCueNotify_ParticleInfo::PlacementInfoOverride' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_ParticleInfo, NiagaraSystem) == 0x000078, "Member 'FGameplayCueNotify_ParticleInfo::NiagaraSystem' has a wrong offset!");

struct FGameplayCueNotify_SoundParameterInterfaceInfo final
{
public:
	class FName                                   StopTriggerName;
};
static_assert(alignof(FGameplayCueNotify_SoundParameterInterfaceInfo) == 0x000004, "Wrong alignment on FGameplayCueNotify_SoundParameterInterfaceInfo");
static_assert(sizeof(FGameplayCueNotify_SoundParameterInterfaceInfo) == 0x000004, "Wrong size on FGameplayCueNotify_SoundParameterInterfaceInfo");
static_assert(offsetof(FGameplayCueNotify_SoundParameterInterfaceInfo, StopTriggerName) == 0x000000, "Member 'FGameplayCueNotify_SoundParameterInterfaceInfo::StopTriggerName' has a wrong offset!");

struct FGameplayCueNotify_SoundInfo final
{
public:
	struct FGameplayCueNotify_SpawnCondition      SpawnConditionOverride;
	struct FGameplayCueNotify_PlacementInfo       PlacementInfoOverride;
	class USoundBase*                             sound;
	class USoundBase*                             SoundCue;
	float                                         LoopingFadeOutDuration;
	float                                         LoopingFadeVolumeLevel;
	struct FGameplayCueNotify_SoundParameterInterfaceInfo SoundParameterInterfaceInfo;
	uint8                                         bOverrideSpawnCondition : 1;
	uint8                                         bOverridePlacementInfo : 1;
	uint8                                         bUseSoundParameterInterface : 1;
	uint8                                         Pad_95[0x3];
};
static_assert(alignof(FGameplayCueNotify_SoundInfo) == 0x000008, "Wrong alignment on FGameplayCueNotify_SoundInfo");
static_assert(sizeof(FGameplayCueNotify_SoundInfo) == 0x000098, "Wrong size on FGameplayCueNotify_SoundInfo");
static_assert(offsetof(FGameplayCueNotify_SoundInfo, SpawnConditionOverride) == 0x000000, "Member 'FGameplayCueNotify_SoundInfo::SpawnConditionOverride' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SoundInfo, PlacementInfoOverride) == 0x000038, "Member 'FGameplayCueNotify_SoundInfo::PlacementInfoOverride' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SoundInfo, sound) == 0x000078, "Member 'FGameplayCueNotify_SoundInfo::sound' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SoundInfo, SoundCue) == 0x000080, "Member 'FGameplayCueNotify_SoundInfo::SoundCue' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SoundInfo, LoopingFadeOutDuration) == 0x000088, "Member 'FGameplayCueNotify_SoundInfo::LoopingFadeOutDuration' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SoundInfo, LoopingFadeVolumeLevel) == 0x00008C, "Member 'FGameplayCueNotify_SoundInfo::LoopingFadeVolumeLevel' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_SoundInfo, SoundParameterInterfaceInfo) == 0x000090, "Member 'FGameplayCueNotify_SoundInfo::SoundParameterInterfaceInfo' has a wrong offset!");

struct FGameplayCueNotify_CameraShakeInfo final
{
public:
	struct FGameplayCueNotify_SpawnCondition      SpawnConditionOverride;
	struct FGameplayCueNotify_PlacementInfo       PlacementInfoOverride;
	TSubclassOf<class UCameraShakeBase>           CameraShake;
	float                                         ShakeScale;
	EGameplayCueNotify_EffectPlaySpace            Playspace;
	uint8                                         Pad_85[0x3];
	uint8                                         bOverrideSpawnCondition : 1;
	uint8                                         bOverridePlacementInfo : 1;
	uint8                                         bPlayInWorld : 1;
	uint8                                         Pad_89[0x3];
	float                                         WorldInnerRadius;
	float                                         WorldOuterRadius;
	float                                         WorldFalloffExponent;
};
static_assert(alignof(FGameplayCueNotify_CameraShakeInfo) == 0x000008, "Wrong alignment on FGameplayCueNotify_CameraShakeInfo");
static_assert(sizeof(FGameplayCueNotify_CameraShakeInfo) == 0x000098, "Wrong size on FGameplayCueNotify_CameraShakeInfo");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, SpawnConditionOverride) == 0x000000, "Member 'FGameplayCueNotify_CameraShakeInfo::SpawnConditionOverride' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, PlacementInfoOverride) == 0x000038, "Member 'FGameplayCueNotify_CameraShakeInfo::PlacementInfoOverride' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, CameraShake) == 0x000078, "Member 'FGameplayCueNotify_CameraShakeInfo::CameraShake' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, ShakeScale) == 0x000080, "Member 'FGameplayCueNotify_CameraShakeInfo::ShakeScale' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, Playspace) == 0x000084, "Member 'FGameplayCueNotify_CameraShakeInfo::Playspace' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, WorldInnerRadius) == 0x00008C, "Member 'FGameplayCueNotify_CameraShakeInfo::WorldInnerRadius' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, WorldOuterRadius) == 0x000090, "Member 'FGameplayCueNotify_CameraShakeInfo::WorldOuterRadius' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, WorldFalloffExponent) == 0x000094, "Member 'FGameplayCueNotify_CameraShakeInfo::WorldFalloffExponent' has a wrong offset!");

struct FGameplayCueNotify_CameraLensEffectInfo final
{
public:
	struct FGameplayCueNotify_SpawnCondition      SpawnConditionOverride;
	struct FGameplayCueNotify_PlacementInfo       PlacementInfoOverride;
	TSubclassOf<class AActor>                     CameraLensEffect;
	uint8                                         bOverrideSpawnCondition : 1;
	uint8                                         bOverridePlacementInfo : 1;
	uint8                                         bPlayInWorld : 1;
	uint8                                         Pad_81[0x3];
	float                                         WorldInnerRadius;
	float                                         WorldOuterRadius;
	uint8                                         Pad_8C[0x4];
};
static_assert(alignof(FGameplayCueNotify_CameraLensEffectInfo) == 0x000008, "Wrong alignment on FGameplayCueNotify_CameraLensEffectInfo");
static_assert(sizeof(FGameplayCueNotify_CameraLensEffectInfo) == 0x000090, "Wrong size on FGameplayCueNotify_CameraLensEffectInfo");
static_assert(offsetof(FGameplayCueNotify_CameraLensEffectInfo, SpawnConditionOverride) == 0x000000, "Member 'FGameplayCueNotify_CameraLensEffectInfo::SpawnConditionOverride' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_CameraLensEffectInfo, PlacementInfoOverride) == 0x000038, "Member 'FGameplayCueNotify_CameraLensEffectInfo::PlacementInfoOverride' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_CameraLensEffectInfo, CameraLensEffect) == 0x000078, "Member 'FGameplayCueNotify_CameraLensEffectInfo::CameraLensEffect' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_CameraLensEffectInfo, WorldInnerRadius) == 0x000084, "Member 'FGameplayCueNotify_CameraLensEffectInfo::WorldInnerRadius' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_CameraLensEffectInfo, WorldOuterRadius) == 0x000088, "Member 'FGameplayCueNotify_CameraLensEffectInfo::WorldOuterRadius' has a wrong offset!");

struct FGameplayCueNotify_ForceFeedbackInfo final
{
public:
	struct FGameplayCueNotify_SpawnCondition      SpawnConditionOverride;
	struct FGameplayCueNotify_PlacementInfo       PlacementInfoOverride;
	class UForceFeedbackEffect*                   ForceFeedbackEffect;
	class FName                                   ForceFeedbackTag;
	uint8                                         bIsLooping : 1;
	uint8                                         bOverrideSpawnCondition : 1;
	uint8                                         bOverridePlacementInfo : 1;
	uint8                                         bPlayInWorld : 1;
	uint8                                         Pad_85[0x3];
	float                                         WorldIntensity;
	uint8                                         Pad_8C[0x4];
	class UForceFeedbackAttenuation*              WorldAttenuation;
};
static_assert(alignof(FGameplayCueNotify_ForceFeedbackInfo) == 0x000008, "Wrong alignment on FGameplayCueNotify_ForceFeedbackInfo");
static_assert(sizeof(FGameplayCueNotify_ForceFeedbackInfo) == 0x000098, "Wrong size on FGameplayCueNotify_ForceFeedbackInfo");
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, SpawnConditionOverride) == 0x000000, "Member 'FGameplayCueNotify_ForceFeedbackInfo::SpawnConditionOverride' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, PlacementInfoOverride) == 0x000038, "Member 'FGameplayCueNotify_ForceFeedbackInfo::PlacementInfoOverride' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, ForceFeedbackEffect) == 0x000078, "Member 'FGameplayCueNotify_ForceFeedbackInfo::ForceFeedbackEffect' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, ForceFeedbackTag) == 0x000080, "Member 'FGameplayCueNotify_ForceFeedbackInfo::ForceFeedbackTag' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, WorldIntensity) == 0x000088, "Member 'FGameplayCueNotify_ForceFeedbackInfo::WorldIntensity' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, WorldAttenuation) == 0x000090, "Member 'FGameplayCueNotify_ForceFeedbackInfo::WorldAttenuation' has a wrong offset!");

struct FGameplayCueNotify_InputDevicePropertyInfo final
{
public:
	TArray<TSubclassOf<class UInputDeviceProperty>> DeviceProperties;
};
static_assert(alignof(FGameplayCueNotify_InputDevicePropertyInfo) == 0x000008, "Wrong alignment on FGameplayCueNotify_InputDevicePropertyInfo");
static_assert(sizeof(FGameplayCueNotify_InputDevicePropertyInfo) == 0x000010, "Wrong size on FGameplayCueNotify_InputDevicePropertyInfo");
static_assert(offsetof(FGameplayCueNotify_InputDevicePropertyInfo, DeviceProperties) == 0x000000, "Member 'FGameplayCueNotify_InputDevicePropertyInfo::DeviceProperties' has a wrong offset!");

struct FGameplayCueNotify_DecalInfo final
{
public:
	struct FGameplayCueNotify_SpawnCondition      SpawnConditionOverride;
	struct FGameplayCueNotify_PlacementInfo       PlacementInfoOverride;
	class UMaterialInterface*                     DecalMaterial;
	struct FVector                                DecalSize;
	uint8                                         bOverrideSpawnCondition : 1;
	uint8                                         bOverridePlacementInfo : 1;
	uint8                                         bOverrideFadeOut : 1;
	uint8                                         Pad_99[0x3];
	float                                         FadeOutStartDelay;
	float                                         FadeOutDuration;
	uint8                                         Pad_A4[0x4];
};
static_assert(alignof(FGameplayCueNotify_DecalInfo) == 0x000008, "Wrong alignment on FGameplayCueNotify_DecalInfo");
static_assert(sizeof(FGameplayCueNotify_DecalInfo) == 0x0000A8, "Wrong size on FGameplayCueNotify_DecalInfo");
static_assert(offsetof(FGameplayCueNotify_DecalInfo, SpawnConditionOverride) == 0x000000, "Member 'FGameplayCueNotify_DecalInfo::SpawnConditionOverride' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_DecalInfo, PlacementInfoOverride) == 0x000038, "Member 'FGameplayCueNotify_DecalInfo::PlacementInfoOverride' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_DecalInfo, DecalMaterial) == 0x000078, "Member 'FGameplayCueNotify_DecalInfo::DecalMaterial' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_DecalInfo, DecalSize) == 0x000080, "Member 'FGameplayCueNotify_DecalInfo::DecalSize' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_DecalInfo, FadeOutStartDelay) == 0x00009C, "Member 'FGameplayCueNotify_DecalInfo::FadeOutStartDelay' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_DecalInfo, FadeOutDuration) == 0x0000A0, "Member 'FGameplayCueNotify_DecalInfo::FadeOutDuration' has a wrong offset!");

struct FGameplayCueNotify_BurstEffects final
{
public:
	TArray<struct FGameplayCueNotify_ParticleInfo> BurstParticles;
	TArray<struct FGameplayCueNotify_SoundInfo>   BurstSounds;
	struct FGameplayCueNotify_CameraShakeInfo     BurstCameraShake;
	struct FGameplayCueNotify_CameraLensEffectInfo BurstCameraLensEffect;
	struct FGameplayCueNotify_ForceFeedbackInfo   BurstForceFeedback;
	struct FGameplayCueNotify_InputDevicePropertyInfo BurstDevicePropertyEffect;
	struct FGameplayCueNotify_DecalInfo           BurstDecal;
};
static_assert(alignof(FGameplayCueNotify_BurstEffects) == 0x000008, "Wrong alignment on FGameplayCueNotify_BurstEffects");
static_assert(sizeof(FGameplayCueNotify_BurstEffects) == 0x000298, "Wrong size on FGameplayCueNotify_BurstEffects");
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstParticles) == 0x000000, "Member 'FGameplayCueNotify_BurstEffects::BurstParticles' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstSounds) == 0x000010, "Member 'FGameplayCueNotify_BurstEffects::BurstSounds' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstCameraShake) == 0x000020, "Member 'FGameplayCueNotify_BurstEffects::BurstCameraShake' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstCameraLensEffect) == 0x0000B8, "Member 'FGameplayCueNotify_BurstEffects::BurstCameraLensEffect' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstForceFeedback) == 0x000148, "Member 'FGameplayCueNotify_BurstEffects::BurstForceFeedback' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstDevicePropertyEffect) == 0x0001E0, "Member 'FGameplayCueNotify_BurstEffects::BurstDevicePropertyEffect' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstDecal) == 0x0001F0, "Member 'FGameplayCueNotify_BurstEffects::BurstDecal' has a wrong offset!");

struct FGameplayCueNotify_LoopingEffects final
{
public:
	TArray<struct FGameplayCueNotify_ParticleInfo> LoopingParticles;
	TArray<struct FGameplayCueNotify_SoundInfo>   LoopingSounds;
	struct FGameplayCueNotify_CameraShakeInfo     LoopingCameraShake;
	struct FGameplayCueNotify_CameraLensEffectInfo LoopingCameraLensEffect;
	struct FGameplayCueNotify_ForceFeedbackInfo   LoopingForceFeedback;
	struct FGameplayCueNotify_InputDevicePropertyInfo LoopingInputDevicePropertyEffect;
};
static_assert(alignof(FGameplayCueNotify_LoopingEffects) == 0x000008, "Wrong alignment on FGameplayCueNotify_LoopingEffects");
static_assert(sizeof(FGameplayCueNotify_LoopingEffects) == 0x0001F0, "Wrong size on FGameplayCueNotify_LoopingEffects");
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingParticles) == 0x000000, "Member 'FGameplayCueNotify_LoopingEffects::LoopingParticles' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingSounds) == 0x000010, "Member 'FGameplayCueNotify_LoopingEffects::LoopingSounds' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingCameraShake) == 0x000020, "Member 'FGameplayCueNotify_LoopingEffects::LoopingCameraShake' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingCameraLensEffect) == 0x0000B8, "Member 'FGameplayCueNotify_LoopingEffects::LoopingCameraLensEffect' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingForceFeedback) == 0x000148, "Member 'FGameplayCueNotify_LoopingEffects::LoopingForceFeedback' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingInputDevicePropertyEffect) == 0x0001E0, "Member 'FGameplayCueNotify_LoopingEffects::LoopingInputDevicePropertyEffect' has a wrong offset!");

struct FGameplayCueNotifyData final
{
public:
	struct FGameplayTag                           GameplayCueTag;
	uint8                                         Pad_4[0x4];
	struct FSoftObjectPath                        GameplayCueNotifyObj;
	TSubclassOf<class UObject>                    LoadedGameplayCueClass;
	uint8                                         Pad_28[0x8];
};
static_assert(alignof(FGameplayCueNotifyData) == 0x000008, "Wrong alignment on FGameplayCueNotifyData");
static_assert(sizeof(FGameplayCueNotifyData) == 0x000030, "Wrong size on FGameplayCueNotifyData");
static_assert(offsetof(FGameplayCueNotifyData, GameplayCueTag) == 0x000000, "Member 'FGameplayCueNotifyData::GameplayCueTag' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotifyData, GameplayCueNotifyObj) == 0x000008, "Member 'FGameplayCueNotifyData::GameplayCueNotifyObj' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotifyData, LoadedGameplayCueClass) == 0x000020, "Member 'FGameplayCueNotifyData::LoadedGameplayCueClass' has a wrong offset!");

struct FGameplayCueTranslatorNodeIndex final
{
public:
	int32                                         Index;
};
static_assert(alignof(FGameplayCueTranslatorNodeIndex) == 0x000004, "Wrong alignment on FGameplayCueTranslatorNodeIndex");
static_assert(sizeof(FGameplayCueTranslatorNodeIndex) == 0x000004, "Wrong size on FGameplayCueTranslatorNodeIndex");
static_assert(offsetof(FGameplayCueTranslatorNodeIndex, Index) == 0x000000, "Member 'FGameplayCueTranslatorNodeIndex::Index' has a wrong offset!");

struct FGameplayCueTranslationLink final
{
public:
	class UGameplayCueTranslator*                 RulesCDO;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FGameplayCueTranslationLink) == 0x000008, "Wrong alignment on FGameplayCueTranslationLink");
static_assert(sizeof(FGameplayCueTranslationLink) == 0x000018, "Wrong size on FGameplayCueTranslationLink");
static_assert(offsetof(FGameplayCueTranslationLink, RulesCDO) == 0x000000, "Member 'FGameplayCueTranslationLink::RulesCDO' has a wrong offset!");

struct FGameplayCueTranslatorNode final
{
public:
	TArray<struct FGameplayCueTranslationLink>    Links;
	struct FGameplayCueTranslatorNodeIndex        CachedIndex;
	struct FGameplayTag                           CachedGameplayTag;
	class FName                                   CachedGameplayTagName;
	uint8                                         Pad_1C[0x54];
};
static_assert(alignof(FGameplayCueTranslatorNode) == 0x000008, "Wrong alignment on FGameplayCueTranslatorNode");
static_assert(sizeof(FGameplayCueTranslatorNode) == 0x000070, "Wrong size on FGameplayCueTranslatorNode");
static_assert(offsetof(FGameplayCueTranslatorNode, Links) == 0x000000, "Member 'FGameplayCueTranslatorNode::Links' has a wrong offset!");
static_assert(offsetof(FGameplayCueTranslatorNode, CachedIndex) == 0x000010, "Member 'FGameplayCueTranslatorNode::CachedIndex' has a wrong offset!");
static_assert(offsetof(FGameplayCueTranslatorNode, CachedGameplayTag) == 0x000014, "Member 'FGameplayCueTranslatorNode::CachedGameplayTag' has a wrong offset!");
static_assert(offsetof(FGameplayCueTranslatorNode, CachedGameplayTagName) == 0x000018, "Member 'FGameplayCueTranslatorNode::CachedGameplayTagName' has a wrong offset!");

struct FGameplayCueTranslationManager final
{
public:
	TArray<struct FGameplayCueTranslatorNode>     TranslationLUT;
	TMap<class FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap;
	class UGameplayTagsManager*                   TagManager;
	uint8                                         Pad_68[0x18];
};
static_assert(alignof(FGameplayCueTranslationManager) == 0x000008, "Wrong alignment on FGameplayCueTranslationManager");
static_assert(sizeof(FGameplayCueTranslationManager) == 0x000080, "Wrong size on FGameplayCueTranslationManager");
static_assert(offsetof(FGameplayCueTranslationManager, TranslationLUT) == 0x000000, "Member 'FGameplayCueTranslationManager::TranslationLUT' has a wrong offset!");
static_assert(offsetof(FGameplayCueTranslationManager, TranslationNameToIndexMap) == 0x000010, "Member 'FGameplayCueTranslationManager::TranslationNameToIndexMap' has a wrong offset!");
static_assert(offsetof(FGameplayCueTranslationManager, TagManager) == 0x000060, "Member 'FGameplayCueTranslationManager::TagManager' has a wrong offset!");

struct FAttributeBasedFloat final
{
public:
	struct FScalableFloat                         Coefficient;
	struct FScalableFloat                         PreMultiplyAdditiveValue;
	struct FScalableFloat                         PostMultiplyAdditiveValue;
	struct FGameplayEffectAttributeCaptureDefinition BackingAttribute;
	struct FCurveTableRowHandle                   AttributeCurve;
	EAttributeBasedFloatCalculationType           AttributeCalculationType;
	EGameplayModEvaluationChannel                 FinalChannel;
	uint8                                         Pad_CA[0x6];
	struct FGameplayTagContainer                  SourceTagFilter;
	struct FGameplayTagContainer                  TargetTagFilter;
};
static_assert(alignof(FAttributeBasedFloat) == 0x000008, "Wrong alignment on FAttributeBasedFloat");
static_assert(sizeof(FAttributeBasedFloat) == 0x000110, "Wrong size on FAttributeBasedFloat");
static_assert(offsetof(FAttributeBasedFloat, Coefficient) == 0x000000, "Member 'FAttributeBasedFloat::Coefficient' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, PreMultiplyAdditiveValue) == 0x000028, "Member 'FAttributeBasedFloat::PreMultiplyAdditiveValue' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, PostMultiplyAdditiveValue) == 0x000050, "Member 'FAttributeBasedFloat::PostMultiplyAdditiveValue' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, BackingAttribute) == 0x000078, "Member 'FAttributeBasedFloat::BackingAttribute' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, AttributeCurve) == 0x0000B8, "Member 'FAttributeBasedFloat::AttributeCurve' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, AttributeCalculationType) == 0x0000C8, "Member 'FAttributeBasedFloat::AttributeCalculationType' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, FinalChannel) == 0x0000C9, "Member 'FAttributeBasedFloat::FinalChannel' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, SourceTagFilter) == 0x0000D0, "Member 'FAttributeBasedFloat::SourceTagFilter' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, TargetTagFilter) == 0x0000F0, "Member 'FAttributeBasedFloat::TargetTagFilter' has a wrong offset!");

struct FCustomCalculationBasedFloat final
{
public:
	TSubclassOf<class UGameplayModMagnitudeCalculation> CalculationClassMagnitude;
	struct FScalableFloat                         Coefficient;
	struct FScalableFloat                         PreMultiplyAdditiveValue;
	struct FScalableFloat                         PostMultiplyAdditiveValue;
	struct FCurveTableRowHandle                   FinalLookupCurve;
};
static_assert(alignof(FCustomCalculationBasedFloat) == 0x000008, "Wrong alignment on FCustomCalculationBasedFloat");
static_assert(sizeof(FCustomCalculationBasedFloat) == 0x000090, "Wrong size on FCustomCalculationBasedFloat");
static_assert(offsetof(FCustomCalculationBasedFloat, CalculationClassMagnitude) == 0x000000, "Member 'FCustomCalculationBasedFloat::CalculationClassMagnitude' has a wrong offset!");
static_assert(offsetof(FCustomCalculationBasedFloat, Coefficient) == 0x000008, "Member 'FCustomCalculationBasedFloat::Coefficient' has a wrong offset!");
static_assert(offsetof(FCustomCalculationBasedFloat, PreMultiplyAdditiveValue) == 0x000030, "Member 'FCustomCalculationBasedFloat::PreMultiplyAdditiveValue' has a wrong offset!");
static_assert(offsetof(FCustomCalculationBasedFloat, PostMultiplyAdditiveValue) == 0x000058, "Member 'FCustomCalculationBasedFloat::PostMultiplyAdditiveValue' has a wrong offset!");
static_assert(offsetof(FCustomCalculationBasedFloat, FinalLookupCurve) == 0x000080, "Member 'FCustomCalculationBasedFloat::FinalLookupCurve' has a wrong offset!");

struct FSetByCallerFloat final
{
public:
	class FName                                   DataName;
	struct FGameplayTag                           DataTag;
};
static_assert(alignof(FSetByCallerFloat) == 0x000004, "Wrong alignment on FSetByCallerFloat");
static_assert(sizeof(FSetByCallerFloat) == 0x000008, "Wrong size on FSetByCallerFloat");
static_assert(offsetof(FSetByCallerFloat, DataName) == 0x000000, "Member 'FSetByCallerFloat::DataName' has a wrong offset!");
static_assert(offsetof(FSetByCallerFloat, DataTag) == 0x000004, "Member 'FSetByCallerFloat::DataTag' has a wrong offset!");

struct FGameplayEffectModifierMagnitude final
{
public:
	EGameplayEffectMagnitudeCalculation           MagnitudeCalculationType;
	uint8                                         Pad_1[0x7];
	struct FScalableFloat                         ScalableFloatMagnitude;
	struct FAttributeBasedFloat                   AttributeBasedMagnitude;
	struct FCustomCalculationBasedFloat           CustomMagnitude;
	struct FSetByCallerFloat                      SetByCallerMagnitude;
};
static_assert(alignof(FGameplayEffectModifierMagnitude) == 0x000008, "Wrong alignment on FGameplayEffectModifierMagnitude");
static_assert(sizeof(FGameplayEffectModifierMagnitude) == 0x0001D8, "Wrong size on FGameplayEffectModifierMagnitude");
static_assert(offsetof(FGameplayEffectModifierMagnitude, MagnitudeCalculationType) == 0x000000, "Member 'FGameplayEffectModifierMagnitude::MagnitudeCalculationType' has a wrong offset!");
static_assert(offsetof(FGameplayEffectModifierMagnitude, ScalableFloatMagnitude) == 0x000008, "Member 'FGameplayEffectModifierMagnitude::ScalableFloatMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayEffectModifierMagnitude, AttributeBasedMagnitude) == 0x000030, "Member 'FGameplayEffectModifierMagnitude::AttributeBasedMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayEffectModifierMagnitude, CustomMagnitude) == 0x000140, "Member 'FGameplayEffectModifierMagnitude::CustomMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayEffectModifierMagnitude, SetByCallerMagnitude) == 0x0001D0, "Member 'FGameplayEffectModifierMagnitude::SetByCallerMagnitude' has a wrong offset!");

struct FGameplayModEvaluationChannelSettings final
{
public:
	EGameplayModEvaluationChannel                 Channel;
};
static_assert(alignof(FGameplayModEvaluationChannelSettings) == 0x000001, "Wrong alignment on FGameplayModEvaluationChannelSettings");
static_assert(sizeof(FGameplayModEvaluationChannelSettings) == 0x000001, "Wrong size on FGameplayModEvaluationChannelSettings");
static_assert(offsetof(FGameplayModEvaluationChannelSettings, Channel) == 0x000000, "Member 'FGameplayModEvaluationChannelSettings::Channel' has a wrong offset!");

struct FGameplayEffectExecutionScopedModifierInfo final
{
public:
	struct FGameplayEffectAttributeCaptureDefinition CapturedAttribute;
	struct FGameplayTag                           TransientAggregatorIdentifier;
	EGameplayEffectScopedModifierAggregatorType   AggregatorType;
	EGameplayModOp                                ModifierOp;
	uint8                                         Pad_46[0x2];
	struct FGameplayEffectModifierMagnitude       ModifierMagnitude;
	struct FGameplayModEvaluationChannelSettings  EvaluationChannelSettings;
	uint8                                         Pad_221[0x7];
	struct FGameplayTagRequirements               SourceTags;
	struct FGameplayTagRequirements               TargetTags;
};
static_assert(alignof(FGameplayEffectExecutionScopedModifierInfo) == 0x000008, "Wrong alignment on FGameplayEffectExecutionScopedModifierInfo");
static_assert(sizeof(FGameplayEffectExecutionScopedModifierInfo) == 0x0002A8, "Wrong size on FGameplayEffectExecutionScopedModifierInfo");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, CapturedAttribute) == 0x000000, "Member 'FGameplayEffectExecutionScopedModifierInfo::CapturedAttribute' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, TransientAggregatorIdentifier) == 0x000040, "Member 'FGameplayEffectExecutionScopedModifierInfo::TransientAggregatorIdentifier' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, AggregatorType) == 0x000044, "Member 'FGameplayEffectExecutionScopedModifierInfo::AggregatorType' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, ModifierOp) == 0x000045, "Member 'FGameplayEffectExecutionScopedModifierInfo::ModifierOp' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, ModifierMagnitude) == 0x000048, "Member 'FGameplayEffectExecutionScopedModifierInfo::ModifierMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, EvaluationChannelSettings) == 0x000220, "Member 'FGameplayEffectExecutionScopedModifierInfo::EvaluationChannelSettings' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, SourceTags) == 0x000228, "Member 'FGameplayEffectExecutionScopedModifierInfo::SourceTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, TargetTags) == 0x000268, "Member 'FGameplayEffectExecutionScopedModifierInfo::TargetTags' has a wrong offset!");

struct FGameplayEffectExecutionDefinition final
{
public:
	TSubclassOf<class UGameplayEffectExecutionCalculation> CalculationClass;
	struct FGameplayTagContainer                  PassedInTags;
	TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;
	TArray<TSubclassOf<class UGameplayEffect>>    ConditionalGameplayEffectClasses;
	TArray<struct FConditionalGameplayEffect>     ConditionalGameplayEffects;
};
static_assert(alignof(FGameplayEffectExecutionDefinition) == 0x000008, "Wrong alignment on FGameplayEffectExecutionDefinition");
static_assert(sizeof(FGameplayEffectExecutionDefinition) == 0x000058, "Wrong size on FGameplayEffectExecutionDefinition");
static_assert(offsetof(FGameplayEffectExecutionDefinition, CalculationClass) == 0x000000, "Member 'FGameplayEffectExecutionDefinition::CalculationClass' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionDefinition, PassedInTags) == 0x000008, "Member 'FGameplayEffectExecutionDefinition::PassedInTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionDefinition, CalculationModifiers) == 0x000028, "Member 'FGameplayEffectExecutionDefinition::CalculationModifiers' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionDefinition, ConditionalGameplayEffectClasses) == 0x000038, "Member 'FGameplayEffectExecutionDefinition::ConditionalGameplayEffectClasses' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionDefinition, ConditionalGameplayEffects) == 0x000048, "Member 'FGameplayEffectExecutionDefinition::ConditionalGameplayEffects' has a wrong offset!");

struct FGameplayModifierInfo final
{
public:
	struct FGameplayAttribute                     Attribute;
	EGameplayModOp                                ModifierOp;
	uint8                                         Pad_39[0x7];
	struct FScalableFloat                         Magnitude;
	struct FGameplayEffectModifierMagnitude       ModifierMagnitude;
	struct FGameplayModEvaluationChannelSettings  EvaluationChannelSettings;
	uint8                                         Pad_241[0x7];
	struct FGameplayTagRequirements               SourceTags;
	struct FGameplayTagRequirements               TargetTags;
};
static_assert(alignof(FGameplayModifierInfo) == 0x000008, "Wrong alignment on FGameplayModifierInfo");
static_assert(sizeof(FGameplayModifierInfo) == 0x0002C8, "Wrong size on FGameplayModifierInfo");
static_assert(offsetof(FGameplayModifierInfo, Attribute) == 0x000000, "Member 'FGameplayModifierInfo::Attribute' has a wrong offset!");
static_assert(offsetof(FGameplayModifierInfo, ModifierOp) == 0x000038, "Member 'FGameplayModifierInfo::ModifierOp' has a wrong offset!");
static_assert(offsetof(FGameplayModifierInfo, Magnitude) == 0x000040, "Member 'FGameplayModifierInfo::Magnitude' has a wrong offset!");
static_assert(offsetof(FGameplayModifierInfo, ModifierMagnitude) == 0x000068, "Member 'FGameplayModifierInfo::ModifierMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayModifierInfo, EvaluationChannelSettings) == 0x000240, "Member 'FGameplayModifierInfo::EvaluationChannelSettings' has a wrong offset!");
static_assert(offsetof(FGameplayModifierInfo, SourceTags) == 0x000248, "Member 'FGameplayModifierInfo::SourceTags' has a wrong offset!");
static_assert(offsetof(FGameplayModifierInfo, TargetTags) == 0x000288, "Member 'FGameplayModifierInfo::TargetTags' has a wrong offset!");

struct FGameplayEffectCue final
{
public:
	struct FGameplayAttribute                     MagnitudeAttribute;
	float                                         MinLevel;
	float                                         MaxLevel;
	struct FGameplayTagContainer                  GameplayCueTags;
};
static_assert(alignof(FGameplayEffectCue) == 0x000008, "Wrong alignment on FGameplayEffectCue");
static_assert(sizeof(FGameplayEffectCue) == 0x000060, "Wrong size on FGameplayEffectCue");
static_assert(offsetof(FGameplayEffectCue, MagnitudeAttribute) == 0x000000, "Member 'FGameplayEffectCue::MagnitudeAttribute' has a wrong offset!");
static_assert(offsetof(FGameplayEffectCue, MinLevel) == 0x000038, "Member 'FGameplayEffectCue::MinLevel' has a wrong offset!");
static_assert(offsetof(FGameplayEffectCue, MaxLevel) == 0x00003C, "Member 'FGameplayEffectCue::MaxLevel' has a wrong offset!");
static_assert(offsetof(FGameplayEffectCue, GameplayCueTags) == 0x000040, "Member 'FGameplayEffectCue::GameplayCueTags' has a wrong offset!");

struct FInheritedTagContainer final
{
public:
	struct FGameplayTagContainer                  CombinedTags;
	struct FGameplayTagContainer                  Added;
	struct FGameplayTagContainer                  Removed;
};
static_assert(alignof(FInheritedTagContainer) == 0x000008, "Wrong alignment on FInheritedTagContainer");
static_assert(sizeof(FInheritedTagContainer) == 0x000060, "Wrong size on FInheritedTagContainer");
static_assert(offsetof(FInheritedTagContainer, CombinedTags) == 0x000000, "Member 'FInheritedTagContainer::CombinedTags' has a wrong offset!");
static_assert(offsetof(FInheritedTagContainer, Added) == 0x000020, "Member 'FInheritedTagContainer::Added' has a wrong offset!");
static_assert(offsetof(FInheritedTagContainer, Removed) == 0x000040, "Member 'FInheritedTagContainer::Removed' has a wrong offset!");

struct alignas(0x08) FActiveGameplayEffectQuery final
{
public:
	uint8                                         Pad_0[0x88];
};
static_assert(alignof(FActiveGameplayEffectQuery) == 0x000008, "Wrong alignment on FActiveGameplayEffectQuery");
static_assert(sizeof(FActiveGameplayEffectQuery) == 0x000088, "Wrong size on FActiveGameplayEffectQuery");

struct alignas(0x08) FGameplayEffectCustomExecutionParameters final
{
public:
	uint8                                         Pad_0[0xF8];
};
static_assert(alignof(FGameplayEffectCustomExecutionParameters) == 0x000008, "Wrong alignment on FGameplayEffectCustomExecutionParameters");
static_assert(sizeof(FGameplayEffectCustomExecutionParameters) == 0x0000F8, "Wrong size on FGameplayEffectCustomExecutionParameters");

struct FGameplayModifierEvaluatedData final
{
public:
	struct FGameplayAttribute                     Attribute;
	EGameplayModOp                                ModifierOp;
	uint8                                         Pad_39[0x3];
	float                                         Magnitude;
	struct FActiveGameplayEffectHandle            Handle;
	bool                                          IsValid;
	uint8                                         Pad_49[0x7];
};
static_assert(alignof(FGameplayModifierEvaluatedData) == 0x000008, "Wrong alignment on FGameplayModifierEvaluatedData");
static_assert(sizeof(FGameplayModifierEvaluatedData) == 0x000050, "Wrong size on FGameplayModifierEvaluatedData");
static_assert(offsetof(FGameplayModifierEvaluatedData, Attribute) == 0x000000, "Member 'FGameplayModifierEvaluatedData::Attribute' has a wrong offset!");
static_assert(offsetof(FGameplayModifierEvaluatedData, ModifierOp) == 0x000038, "Member 'FGameplayModifierEvaluatedData::ModifierOp' has a wrong offset!");
static_assert(offsetof(FGameplayModifierEvaluatedData, Magnitude) == 0x00003C, "Member 'FGameplayModifierEvaluatedData::Magnitude' has a wrong offset!");
static_assert(offsetof(FGameplayModifierEvaluatedData, Handle) == 0x000040, "Member 'FGameplayModifierEvaluatedData::Handle' has a wrong offset!");
static_assert(offsetof(FGameplayModifierEvaluatedData, IsValid) == 0x000048, "Member 'FGameplayModifierEvaluatedData::IsValid' has a wrong offset!");

struct FGameplayEffectCustomExecutionOutput final
{
public:
	TArray<struct FGameplayModifierEvaluatedData> OutputModifiers;
	uint8                                         bTriggerConditionalGameplayEffects : 1;
	uint8                                         bHandledStackCountManually : 1;
	uint8                                         bHandledGameplayCuesManually : 1;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FGameplayEffectCustomExecutionOutput) == 0x000008, "Wrong alignment on FGameplayEffectCustomExecutionOutput");
static_assert(sizeof(FGameplayEffectCustomExecutionOutput) == 0x000018, "Wrong size on FGameplayEffectCustomExecutionOutput");
static_assert(offsetof(FGameplayEffectCustomExecutionOutput, OutputModifiers) == 0x000000, "Member 'FGameplayEffectCustomExecutionOutput::OutputModifiers' has a wrong offset!");

struct FGameplayTagBlueprintPropertyMapping final
{
public:
	struct FGameplayTag                           TagToMap;
	uint8                                         Pad_4[0x4];
	TFieldPath<class FProperty>                   PropertyToEdit;
	class FName                                   PropertyName;
	struct FGuid                                  PropertyGuid;
	uint8                                         Pad_3C[0xC];
};
static_assert(alignof(FGameplayTagBlueprintPropertyMapping) == 0x000008, "Wrong alignment on FGameplayTagBlueprintPropertyMapping");
static_assert(sizeof(FGameplayTagBlueprintPropertyMapping) == 0x000048, "Wrong size on FGameplayTagBlueprintPropertyMapping");
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, TagToMap) == 0x000000, "Member 'FGameplayTagBlueprintPropertyMapping::TagToMap' has a wrong offset!");
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyToEdit) == 0x000008, "Member 'FGameplayTagBlueprintPropertyMapping::PropertyToEdit' has a wrong offset!");
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyName) == 0x000028, "Member 'FGameplayTagBlueprintPropertyMapping::PropertyName' has a wrong offset!");
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyGuid) == 0x00002C, "Member 'FGameplayTagBlueprintPropertyMapping::PropertyGuid' has a wrong offset!");

struct FGameplayTagBlueprintPropertyMap final
{
public:
	uint8                                         Pad_0[0x10];
	TArray<struct FGameplayTagBlueprintPropertyMapping> PropertyMappings;
};
static_assert(alignof(FGameplayTagBlueprintPropertyMap) == 0x000008, "Wrong alignment on FGameplayTagBlueprintPropertyMap");
static_assert(sizeof(FGameplayTagBlueprintPropertyMap) == 0x000020, "Wrong size on FGameplayTagBlueprintPropertyMap");
static_assert(offsetof(FGameplayTagBlueprintPropertyMap, PropertyMappings) == 0x000010, "Member 'FGameplayTagBlueprintPropertyMap::PropertyMappings' has a wrong offset!");

struct FGameplayTagReponsePair final
{
public:
	struct FGameplayTag                           tag;
	uint8                                         Pad_4[0x4];
	TSubclassOf<class UGameplayEffect>            ResponseGameplayEffect;
	TArray<TSubclassOf<class UGameplayEffect>>    ResponseGameplayEffects;
	int32                                         SoftCountCap;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FGameplayTagReponsePair) == 0x000008, "Wrong alignment on FGameplayTagReponsePair");
static_assert(sizeof(FGameplayTagReponsePair) == 0x000028, "Wrong size on FGameplayTagReponsePair");
static_assert(offsetof(FGameplayTagReponsePair, tag) == 0x000000, "Member 'FGameplayTagReponsePair::tag' has a wrong offset!");
static_assert(offsetof(FGameplayTagReponsePair, ResponseGameplayEffect) == 0x000008, "Member 'FGameplayTagReponsePair::ResponseGameplayEffect' has a wrong offset!");
static_assert(offsetof(FGameplayTagReponsePair, ResponseGameplayEffects) == 0x000010, "Member 'FGameplayTagReponsePair::ResponseGameplayEffects' has a wrong offset!");
static_assert(offsetof(FGameplayTagReponsePair, SoftCountCap) == 0x000020, "Member 'FGameplayTagReponsePair::SoftCountCap' has a wrong offset!");

struct FGameplayTagResponseTableEntry final
{
public:
	struct FGameplayTagReponsePair                Positive;
	struct FGameplayTagReponsePair                Negative;
};
static_assert(alignof(FGameplayTagResponseTableEntry) == 0x000008, "Wrong alignment on FGameplayTagResponseTableEntry");
static_assert(sizeof(FGameplayTagResponseTableEntry) == 0x000050, "Wrong size on FGameplayTagResponseTableEntry");
static_assert(offsetof(FGameplayTagResponseTableEntry, Positive) == 0x000000, "Member 'FGameplayTagResponseTableEntry::Positive' has a wrong offset!");
static_assert(offsetof(FGameplayTagResponseTableEntry, Negative) == 0x000028, "Member 'FGameplayTagResponseTableEntry::Negative' has a wrong offset!");

struct FMovieSceneGameplayCueKey final
{
public:
	struct FGameplayCueTag                        Cue;
	uint8                                         Pad_4[0x4];
	struct FVector                                Location;
	struct FVector                                Normal;
	class FName                                   AttachSocketName;
	float                                         NormalizedMagnitude;
	struct FMovieSceneObjectBindingID             Instigator;
	struct FMovieSceneObjectBindingID             EffectCauser;
	class UPhysicalMaterial*                      PhysicalMaterial;
	int32                                         GameplayEffectLevel;
	int32                                         AbilityLevel;
	bool                                          bAttachToBinding;
	uint8                                         Pad_81[0x7];
};
static_assert(alignof(FMovieSceneGameplayCueKey) == 0x000008, "Wrong alignment on FMovieSceneGameplayCueKey");
static_assert(sizeof(FMovieSceneGameplayCueKey) == 0x000088, "Wrong size on FMovieSceneGameplayCueKey");
static_assert(offsetof(FMovieSceneGameplayCueKey, Cue) == 0x000000, "Member 'FMovieSceneGameplayCueKey::Cue' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, Location) == 0x000008, "Member 'FMovieSceneGameplayCueKey::Location' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, Normal) == 0x000020, "Member 'FMovieSceneGameplayCueKey::Normal' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, AttachSocketName) == 0x000038, "Member 'FMovieSceneGameplayCueKey::AttachSocketName' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, NormalizedMagnitude) == 0x00003C, "Member 'FMovieSceneGameplayCueKey::NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, Instigator) == 0x000040, "Member 'FMovieSceneGameplayCueKey::Instigator' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, EffectCauser) == 0x000058, "Member 'FMovieSceneGameplayCueKey::EffectCauser' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, PhysicalMaterial) == 0x000070, "Member 'FMovieSceneGameplayCueKey::PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, GameplayEffectLevel) == 0x000078, "Member 'FMovieSceneGameplayCueKey::GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, AbilityLevel) == 0x00007C, "Member 'FMovieSceneGameplayCueKey::AbilityLevel' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, bAttachToBinding) == 0x000080, "Member 'FMovieSceneGameplayCueKey::bAttachToBinding' has a wrong offset!");

struct FMovieSceneGameplayCueChannel final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   KeyTimes;
	TArray<struct FMovieSceneGameplayCueKey>      KeyValues;
	uint8                                         Pad_70[0x88];
};
static_assert(alignof(FMovieSceneGameplayCueChannel) == 0x000008, "Wrong alignment on FMovieSceneGameplayCueChannel");
static_assert(sizeof(FMovieSceneGameplayCueChannel) == 0x0000F8, "Wrong size on FMovieSceneGameplayCueChannel");
static_assert(offsetof(FMovieSceneGameplayCueChannel, KeyTimes) == 0x000050, "Member 'FMovieSceneGameplayCueChannel::KeyTimes' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueChannel, KeyValues) == 0x000060, "Member 'FMovieSceneGameplayCueChannel::KeyValues' has a wrong offset!");

struct FGameplayAbilityRepAnimMontageNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FGameplayAbilityRepAnimMontageNetSerializerConfig) == 0x000008, "Wrong alignment on FGameplayAbilityRepAnimMontageNetSerializerConfig");
static_assert(sizeof(FGameplayAbilityRepAnimMontageNetSerializerConfig) == 0x000010, "Wrong size on FGameplayAbilityRepAnimMontageNetSerializerConfig");

struct FGameplayEffectContextHandleNetSerializerConfig final : public FPolymorphicStructNetSerializerConfig
{
};
static_assert(alignof(FGameplayEffectContextHandleNetSerializerConfig) == 0x000008, "Wrong alignment on FGameplayEffectContextHandleNetSerializerConfig");
static_assert(sizeof(FGameplayEffectContextHandleNetSerializerConfig) == 0x000028, "Wrong size on FGameplayEffectContextHandleNetSerializerConfig");

struct FGameplayEffectContextNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FGameplayEffectContextNetSerializerConfig) == 0x000008, "Wrong alignment on FGameplayEffectContextNetSerializerConfig");
static_assert(sizeof(FGameplayEffectContextNetSerializerConfig) == 0x000010, "Wrong size on FGameplayEffectContextNetSerializerConfig");

struct FMinimalGameplayCueReplicationProxyNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FMinimalGameplayCueReplicationProxyNetSerializerConfig) == 0x000008, "Wrong alignment on FMinimalGameplayCueReplicationProxyNetSerializerConfig");
static_assert(sizeof(FMinimalGameplayCueReplicationProxyNetSerializerConfig) == 0x000010, "Wrong size on FMinimalGameplayCueReplicationProxyNetSerializerConfig");

}
