#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "NetCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

enum class ESpecialEventTODMModifyType : uint8
{
	Keep                                     = 0,
	Hide                                     = 1,
	Show                                     = 2,
	Spawn                                    = 3,
	Persistent                               = 4,
	ESpecialEventTODMModifyType_MAX          = 5,
};

enum class EDestroyActorsAndComponentsMutator_ComponentNameComparisonType : uint8
{
	NameEquals                               = 0,
	NameStartsWith                           = 1,
	NameContains                             = 2,
	AdditionalStatNameEquals                 = 3,
	AdditionalStatNameStartsWith             = 4,
	AdditionalStatNameContains               = 5,
	EDestroyActorsAndComponentsMutator_MAX   = 6,
};

enum class EFakeKillRelevancyPlayerKillStep : uint8
{
	Initiated                                = 0,
	BlueprintNotified                        = 1,
	VisualsPerformed                         = 2,
	EFakeKillRelevancyPlayerKillStep_MAX     = 3,
};

enum class EMutatorMovementMode : uint8
{
	None                                     = 0,
	BuffetBubbles                            = 25,
	BuffetBubblesIntro                       = 26,
	BuffetFlying                             = 27,
	BuffetFlyingRicochet                     = 28,
	Rewind                                   = 29,
	EMutatorMovementMode_MAX                 = 30,
};

enum class EFortCustomTickComponentCondition : uint8
{
	WasRecentlyRendered                      = 0,
	CameraDistance                           = 1,
	LocalPlayerDistance                      = 2,
	Count                                    = 3,
	EFortCustomTickComponentCondition_MAX    = 4,
};

enum class ESpecialEventGameUserSettingsResult : uint8
{
	Success                                  = 0,
	Failure                                  = 1,
	ESpecialEventGameUserSettingsResult_MAX  = 2,
};

enum class ESpecialEventPhaseState : uint8
{
	Unregistered                             = 0,
	Inactive                                 = 1,
	Active                                   = 2,
	Deactivated                              = 3,
	ESpecialEventPhaseState_MAX              = 4,
};

enum class ESpecialEventPhaseComponentNetModeType : uint8
{
	ClientControlled                         = 0,
	Client                                   = 1,
	DedicatedServer                          = 2,
	ESpecialEventPhaseComponentNetModeType_MAX = 3,
};

enum class ESpecialEventRewindComponentState : uint8
{
	Stop                                     = 0,
	Record                                   = 1,
	Rewind                                   = 2,
	ESpecialEventRewindComponentState_MAX    = 3,
};

struct FSpecialEventMathEaseData final
{
public:
	EEasingFunc                                   EasingFunc;
	uint8                                         Pad_1[0x3];
	float                                         BlendExp;
	int32                                         Steps;
};
static_assert(alignof(FSpecialEventMathEaseData) == 0x000004, "Wrong alignment on FSpecialEventMathEaseData");
static_assert(sizeof(FSpecialEventMathEaseData) == 0x00000C, "Wrong size on FSpecialEventMathEaseData");
static_assert(offsetof(FSpecialEventMathEaseData, EasingFunc) == 0x000000, "Member 'FSpecialEventMathEaseData::EasingFunc' has a wrong offset!");
static_assert(offsetof(FSpecialEventMathEaseData, BlendExp) == 0x000004, "Member 'FSpecialEventMathEaseData::BlendExp' has a wrong offset!");
static_assert(offsetof(FSpecialEventMathEaseData, Steps) == 0x000008, "Member 'FSpecialEventMathEaseData::Steps' has a wrong offset!");

struct FSpecialClientEvent final
{
public:
	class AFortPlayerControllerAthena*            PlayerController;
	float                                         TimeSeconds;
	struct FGameplayTag                           EventTag;
	int32                                         Count;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FSpecialClientEvent) == 0x000008, "Wrong alignment on FSpecialClientEvent");
static_assert(sizeof(FSpecialClientEvent) == 0x000018, "Wrong size on FSpecialClientEvent");
static_assert(offsetof(FSpecialClientEvent, PlayerController) == 0x000000, "Member 'FSpecialClientEvent::PlayerController' has a wrong offset!");
static_assert(offsetof(FSpecialClientEvent, TimeSeconds) == 0x000008, "Member 'FSpecialClientEvent::TimeSeconds' has a wrong offset!");
static_assert(offsetof(FSpecialClientEvent, EventTag) == 0x00000C, "Member 'FSpecialClientEvent::EventTag' has a wrong offset!");
static_assert(offsetof(FSpecialClientEvent, Count) == 0x000010, "Member 'FSpecialClientEvent::Count' has a wrong offset!");

struct FSpecialEventStatDefinition final
{
public:
	struct FGameplayTag                           LookupTag;
	float                                         min_0;
	float                                         max_0;
	float                                         DefaultValue;
};
static_assert(alignof(FSpecialEventStatDefinition) == 0x000004, "Wrong alignment on FSpecialEventStatDefinition");
static_assert(sizeof(FSpecialEventStatDefinition) == 0x000010, "Wrong size on FSpecialEventStatDefinition");
static_assert(offsetof(FSpecialEventStatDefinition, LookupTag) == 0x000000, "Member 'FSpecialEventStatDefinition::LookupTag' has a wrong offset!");
static_assert(offsetof(FSpecialEventStatDefinition, min_0) == 0x000004, "Member 'FSpecialEventStatDefinition::min_0' has a wrong offset!");
static_assert(offsetof(FSpecialEventStatDefinition, max_0) == 0x000008, "Member 'FSpecialEventStatDefinition::max_0' has a wrong offset!");
static_assert(offsetof(FSpecialEventStatDefinition, DefaultValue) == 0x00000C, "Member 'FSpecialEventStatDefinition::DefaultValue' has a wrong offset!");

struct FSpecialEventStatArrayEntry final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	class USpecialEventStatComponent*             StatComponent;
	class AActor*                                 Owner;
	int32                                         StatDefinitionIndex;
	struct FSpecialEventStatDefinition            StatDefinitionCopy;
	float                                         Value;
	uint8                                         Pad_38[0x8];
};
static_assert(alignof(FSpecialEventStatArrayEntry) == 0x000008, "Wrong alignment on FSpecialEventStatArrayEntry");
static_assert(sizeof(FSpecialEventStatArrayEntry) == 0x000040, "Wrong size on FSpecialEventStatArrayEntry");
static_assert(offsetof(FSpecialEventStatArrayEntry, StatComponent) == 0x000010, "Member 'FSpecialEventStatArrayEntry::StatComponent' has a wrong offset!");
static_assert(offsetof(FSpecialEventStatArrayEntry, Owner) == 0x000018, "Member 'FSpecialEventStatArrayEntry::Owner' has a wrong offset!");
static_assert(offsetof(FSpecialEventStatArrayEntry, StatDefinitionIndex) == 0x000020, "Member 'FSpecialEventStatArrayEntry::StatDefinitionIndex' has a wrong offset!");
static_assert(offsetof(FSpecialEventStatArrayEntry, StatDefinitionCopy) == 0x000024, "Member 'FSpecialEventStatArrayEntry::StatDefinitionCopy' has a wrong offset!");
static_assert(offsetof(FSpecialEventStatArrayEntry, Value) == 0x000034, "Member 'FSpecialEventStatArrayEntry::Value' has a wrong offset!");

struct FDestroyActorsAndComponentsMutator_ComponentDefinition final
{
public:
	class FString                                 ComponentName;
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType NameComparisonType;
	bool                                          bDestroyOnServer;
	bool                                          bDestroyOnClient;
	bool                                          bPromoteChildrenOfDestroyedComponents;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FDestroyActorsAndComponentsMutator_ComponentDefinition) == 0x000008, "Wrong alignment on FDestroyActorsAndComponentsMutator_ComponentDefinition");
static_assert(sizeof(FDestroyActorsAndComponentsMutator_ComponentDefinition) == 0x000018, "Wrong size on FDestroyActorsAndComponentsMutator_ComponentDefinition");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ComponentDefinition, ComponentName) == 0x000000, "Member 'FDestroyActorsAndComponentsMutator_ComponentDefinition::ComponentName' has a wrong offset!");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ComponentDefinition, NameComparisonType) == 0x000010, "Member 'FDestroyActorsAndComponentsMutator_ComponentDefinition::NameComparisonType' has a wrong offset!");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ComponentDefinition, bDestroyOnServer) == 0x000011, "Member 'FDestroyActorsAndComponentsMutator_ComponentDefinition::bDestroyOnServer' has a wrong offset!");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ComponentDefinition, bDestroyOnClient) == 0x000012, "Member 'FDestroyActorsAndComponentsMutator_ComponentDefinition::bDestroyOnClient' has a wrong offset!");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ComponentDefinition, bPromoteChildrenOfDestroyedComponents) == 0x000013, "Member 'FDestroyActorsAndComponentsMutator_ComponentDefinition::bPromoteChildrenOfDestroyedComponents' has a wrong offset!");

struct FDestroyActorsAndComponentsMutator_ActorDefinition final
{
public:
	struct FGameplayTagContainer                  Tags;
	TSoftClassPtr<class UClass>                   SoftActorClass;
	bool                                          bStartEnabled;
	bool                                          bDestroyActorOnServer;
	bool                                          bDestroyActorOnClient;
	bool                                          bNetForceOnActorDestroy;
	bool                                          bShouldModifyLevelOnActorDestroy;
	uint8                                         Pad_4D[0x3];
	TArray<struct FDestroyActorsAndComponentsMutator_ComponentDefinition> ComponentDefinitions;
	bool                                          bCurrentlyEnabled;
	bool                                          bPermanentlyDisabled;
	uint8                                         Pad_62[0x6];
	TArray<class AActor*>                         ActorsToProcess;
};
static_assert(alignof(FDestroyActorsAndComponentsMutator_ActorDefinition) == 0x000008, "Wrong alignment on FDestroyActorsAndComponentsMutator_ActorDefinition");
static_assert(sizeof(FDestroyActorsAndComponentsMutator_ActorDefinition) == 0x000078, "Wrong size on FDestroyActorsAndComponentsMutator_ActorDefinition");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, Tags) == 0x000000, "Member 'FDestroyActorsAndComponentsMutator_ActorDefinition::Tags' has a wrong offset!");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, SoftActorClass) == 0x000020, "Member 'FDestroyActorsAndComponentsMutator_ActorDefinition::SoftActorClass' has a wrong offset!");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, bStartEnabled) == 0x000048, "Member 'FDestroyActorsAndComponentsMutator_ActorDefinition::bStartEnabled' has a wrong offset!");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, bDestroyActorOnServer) == 0x000049, "Member 'FDestroyActorsAndComponentsMutator_ActorDefinition::bDestroyActorOnServer' has a wrong offset!");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, bDestroyActorOnClient) == 0x00004A, "Member 'FDestroyActorsAndComponentsMutator_ActorDefinition::bDestroyActorOnClient' has a wrong offset!");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, bNetForceOnActorDestroy) == 0x00004B, "Member 'FDestroyActorsAndComponentsMutator_ActorDefinition::bNetForceOnActorDestroy' has a wrong offset!");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, bShouldModifyLevelOnActorDestroy) == 0x00004C, "Member 'FDestroyActorsAndComponentsMutator_ActorDefinition::bShouldModifyLevelOnActorDestroy' has a wrong offset!");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, ComponentDefinitions) == 0x000050, "Member 'FDestroyActorsAndComponentsMutator_ActorDefinition::ComponentDefinitions' has a wrong offset!");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, bCurrentlyEnabled) == 0x000060, "Member 'FDestroyActorsAndComponentsMutator_ActorDefinition::bCurrentlyEnabled' has a wrong offset!");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, bPermanentlyDisabled) == 0x000061, "Member 'FDestroyActorsAndComponentsMutator_ActorDefinition::bPermanentlyDisabled' has a wrong offset!");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, ActorsToProcess) == 0x000068, "Member 'FDestroyActorsAndComponentsMutator_ActorDefinition::ActorsToProcess' has a wrong offset!");

struct FSpecialEventTODMSubphaseData final
{
public:
	float                                         PhaseTime;
	ESpecialEventTODMModifyType                   ModifyType;
	uint8                                         Pad_5[0x3];
	TSubclassOf<class AFortTimeOfDayManager>      SpawnClass;
	float                                         TimeOfDay;
	float                                         SpeedFactor;
};
static_assert(alignof(FSpecialEventTODMSubphaseData) == 0x000008, "Wrong alignment on FSpecialEventTODMSubphaseData");
static_assert(sizeof(FSpecialEventTODMSubphaseData) == 0x000018, "Wrong size on FSpecialEventTODMSubphaseData");
static_assert(offsetof(FSpecialEventTODMSubphaseData, PhaseTime) == 0x000000, "Member 'FSpecialEventTODMSubphaseData::PhaseTime' has a wrong offset!");
static_assert(offsetof(FSpecialEventTODMSubphaseData, ModifyType) == 0x000004, "Member 'FSpecialEventTODMSubphaseData::ModifyType' has a wrong offset!");
static_assert(offsetof(FSpecialEventTODMSubphaseData, SpawnClass) == 0x000008, "Member 'FSpecialEventTODMSubphaseData::SpawnClass' has a wrong offset!");
static_assert(offsetof(FSpecialEventTODMSubphaseData, TimeOfDay) == 0x000010, "Member 'FSpecialEventTODMSubphaseData::TimeOfDay' has a wrong offset!");
static_assert(offsetof(FSpecialEventTODMSubphaseData, SpeedFactor) == 0x000014, "Member 'FSpecialEventTODMSubphaseData::SpeedFactor' has a wrong offset!");

struct FSpecialEventTODMPhaseData final
{
public:
	struct FGameplayTag                           PhaseTag;
	uint8                                         Pad_4[0x4];
	TArray<struct FSpecialEventTODMSubphaseData>  SubphaseDataArray;
	uint8                                         Pad_18[0x8];
};
static_assert(alignof(FSpecialEventTODMPhaseData) == 0x000008, "Wrong alignment on FSpecialEventTODMPhaseData");
static_assert(sizeof(FSpecialEventTODMPhaseData) == 0x000020, "Wrong size on FSpecialEventTODMPhaseData");
static_assert(offsetof(FSpecialEventTODMPhaseData, PhaseTag) == 0x000000, "Member 'FSpecialEventTODMPhaseData::PhaseTag' has a wrong offset!");
static_assert(offsetof(FSpecialEventTODMPhaseData, SubphaseDataArray) == 0x000008, "Member 'FSpecialEventTODMPhaseData::SubphaseDataArray' has a wrong offset!");

struct FFakeKillRelevancyVictim final
{
public:
	class AFortPlayerStateAthena*                 PlayerState;
	struct FVector                                DeathLocation;
};
static_assert(alignof(FFakeKillRelevancyVictim) == 0x000008, "Wrong alignment on FFakeKillRelevancyVictim");
static_assert(sizeof(FFakeKillRelevancyVictim) == 0x000020, "Wrong size on FFakeKillRelevancyVictim");
static_assert(offsetof(FFakeKillRelevancyVictim, PlayerState) == 0x000000, "Member 'FFakeKillRelevancyVictim::PlayerState' has a wrong offset!");
static_assert(offsetof(FFakeKillRelevancyVictim, DeathLocation) == 0x000008, "Member 'FFakeKillRelevancyVictim::DeathLocation' has a wrong offset!");

struct FFakeKillRelevancyPlayerDataEntry final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	TArray<struct FFakeKillRelevancyVictim>       Victims;
	struct FGameplayTag                           Reason;
	int32                                         PhaseNum;
	int32                                         WaveNum;
	float                                         RelevancyDelay;
	float                                         RelevancyChangeServerWorldTime;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FFakeKillRelevancyPlayerDataEntry) == 0x000008, "Wrong alignment on FFakeKillRelevancyPlayerDataEntry");
static_assert(sizeof(FFakeKillRelevancyPlayerDataEntry) == 0x000038, "Wrong size on FFakeKillRelevancyPlayerDataEntry");
static_assert(offsetof(FFakeKillRelevancyPlayerDataEntry, Victims) == 0x000010, "Member 'FFakeKillRelevancyPlayerDataEntry::Victims' has a wrong offset!");
static_assert(offsetof(FFakeKillRelevancyPlayerDataEntry, Reason) == 0x000020, "Member 'FFakeKillRelevancyPlayerDataEntry::Reason' has a wrong offset!");
static_assert(offsetof(FFakeKillRelevancyPlayerDataEntry, PhaseNum) == 0x000024, "Member 'FFakeKillRelevancyPlayerDataEntry::PhaseNum' has a wrong offset!");
static_assert(offsetof(FFakeKillRelevancyPlayerDataEntry, WaveNum) == 0x000028, "Member 'FFakeKillRelevancyPlayerDataEntry::WaveNum' has a wrong offset!");
static_assert(offsetof(FFakeKillRelevancyPlayerDataEntry, RelevancyDelay) == 0x00002C, "Member 'FFakeKillRelevancyPlayerDataEntry::RelevancyDelay' has a wrong offset!");
static_assert(offsetof(FFakeKillRelevancyPlayerDataEntry, RelevancyChangeServerWorldTime) == 0x000030, "Member 'FFakeKillRelevancyPlayerDataEntry::RelevancyChangeServerWorldTime' has a wrong offset!");

struct FFakeKillRelevancyPlayerDataArray final : public FFastArraySerializer
{
public:
	TArray<struct FFakeKillRelevancyPlayerDataEntry> Entries;
	class UFortControllerComponent_FakeKillRelevancy* ControllerComponent;
};
static_assert(alignof(FFakeKillRelevancyPlayerDataArray) == 0x000008, "Wrong alignment on FFakeKillRelevancyPlayerDataArray");
static_assert(sizeof(FFakeKillRelevancyPlayerDataArray) == 0x000120, "Wrong size on FFakeKillRelevancyPlayerDataArray");
static_assert(offsetof(FFakeKillRelevancyPlayerDataArray, Entries) == 0x000108, "Member 'FFakeKillRelevancyPlayerDataArray::Entries' has a wrong offset!");
static_assert(offsetof(FFakeKillRelevancyPlayerDataArray, ControllerComponent) == 0x000118, "Member 'FFakeKillRelevancyPlayerDataArray::ControllerComponent' has a wrong offset!");

struct alignas(0x08) FFakeKillRelevancyPhaseData final
{
public:
	uint8                                         Pad_0[0x10];
	struct FGameplayTag                           Reason;
	int32                                         NumWavesExpected;
	int32                                         WaveNum;
	float                                         RelevancyDelay;
	uint8                                         Pad_20[0x10];
};
static_assert(alignof(FFakeKillRelevancyPhaseData) == 0x000008, "Wrong alignment on FFakeKillRelevancyPhaseData");
static_assert(sizeof(FFakeKillRelevancyPhaseData) == 0x000030, "Wrong size on FFakeKillRelevancyPhaseData");
static_assert(offsetof(FFakeKillRelevancyPhaseData, Reason) == 0x000010, "Member 'FFakeKillRelevancyPhaseData::Reason' has a wrong offset!");
static_assert(offsetof(FFakeKillRelevancyPhaseData, NumWavesExpected) == 0x000014, "Member 'FFakeKillRelevancyPhaseData::NumWavesExpected' has a wrong offset!");
static_assert(offsetof(FFakeKillRelevancyPhaseData, WaveNum) == 0x000018, "Member 'FFakeKillRelevancyPhaseData::WaveNum' has a wrong offset!");
static_assert(offsetof(FFakeKillRelevancyPhaseData, RelevancyDelay) == 0x00001C, "Member 'FFakeKillRelevancyPhaseData::RelevancyDelay' has a wrong offset!");

struct alignas(0x08) FFakeKillRelevancyBucket final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FFakeKillRelevancyBucket) == 0x000008, "Wrong alignment on FFakeKillRelevancyBucket");
static_assert(sizeof(FFakeKillRelevancyBucket) == 0x000010, "Wrong size on FFakeKillRelevancyBucket");

struct alignas(0x08) FFakeKillRelevancySupergroup final
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FFakeKillRelevancySupergroup) == 0x000008, "Wrong alignment on FFakeKillRelevancySupergroup");
static_assert(sizeof(FFakeKillRelevancySupergroup) == 0x000020, "Wrong size on FFakeKillRelevancySupergroup");

struct alignas(0x08) FFakeKillRelevancyTestParameters final
{
public:
	uint8                                         Pad_0[0x38];
};
static_assert(alignof(FFakeKillRelevancyTestParameters) == 0x000008, "Wrong alignment on FFakeKillRelevancyTestParameters");
static_assert(sizeof(FFakeKillRelevancyTestParameters) == 0x000038, "Wrong size on FFakeKillRelevancyTestParameters");

struct FSpecialEventMapData final
{
public:
	struct FGameplayTag                           MapTag;
	uint8                                         Pad_4[0x4];
	TArray<class FName>                           MapNames;
	bool                                          bReplicatedHasBeenUnloaded;
	bool                                          bHasBeenUnloaded;
	uint8                                         Pad_1A[0x6];
};
static_assert(alignof(FSpecialEventMapData) == 0x000008, "Wrong alignment on FSpecialEventMapData");
static_assert(sizeof(FSpecialEventMapData) == 0x000020, "Wrong size on FSpecialEventMapData");
static_assert(offsetof(FSpecialEventMapData, MapTag) == 0x000000, "Member 'FSpecialEventMapData::MapTag' has a wrong offset!");
static_assert(offsetof(FSpecialEventMapData, MapNames) == 0x000008, "Member 'FSpecialEventMapData::MapNames' has a wrong offset!");
static_assert(offsetof(FSpecialEventMapData, bReplicatedHasBeenUnloaded) == 0x000018, "Member 'FSpecialEventMapData::bReplicatedHasBeenUnloaded' has a wrong offset!");
static_assert(offsetof(FSpecialEventMapData, bHasBeenUnloaded) == 0x000019, "Member 'FSpecialEventMapData::bHasBeenUnloaded' has a wrong offset!");

struct FFortDelayRTMMData final
{
public:
	bool                                          bDelayRTTM;
	uint8                                         Pad_1[0x3];
	float                                         MinRTTMDelay;
	float                                         MaxRTTMDelay;
	float                                         Timestamp;
};
static_assert(alignof(FFortDelayRTMMData) == 0x000004, "Wrong alignment on FFortDelayRTMMData");
static_assert(sizeof(FFortDelayRTMMData) == 0x000010, "Wrong size on FFortDelayRTMMData");
static_assert(offsetof(FFortDelayRTMMData, bDelayRTTM) == 0x000000, "Member 'FFortDelayRTMMData::bDelayRTTM' has a wrong offset!");
static_assert(offsetof(FFortDelayRTMMData, MinRTTMDelay) == 0x000004, "Member 'FFortDelayRTMMData::MinRTTMDelay' has a wrong offset!");
static_assert(offsetof(FFortDelayRTMMData, MaxRTTMDelay) == 0x000008, "Member 'FFortDelayRTMMData::MaxRTTMDelay' has a wrong offset!");
static_assert(offsetof(FFortDelayRTMMData, Timestamp) == 0x00000C, "Member 'FFortDelayRTMMData::Timestamp' has a wrong offset!");

struct FFortSpecialEventGEData final
{
public:
	TSubclassOf<class UGameplayEffect>            GameplayEffect;
	int32                                         Level;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FFortSpecialEventGEData) == 0x000008, "Wrong alignment on FFortSpecialEventGEData");
static_assert(sizeof(FFortSpecialEventGEData) == 0x000010, "Wrong size on FFortSpecialEventGEData");
static_assert(offsetof(FFortSpecialEventGEData, GameplayEffect) == 0x000000, "Member 'FFortSpecialEventGEData::GameplayEffect' has a wrong offset!");
static_assert(offsetof(FFortSpecialEventGEData, Level) == 0x000008, "Member 'FFortSpecialEventGEData::Level' has a wrong offset!");

struct FFortSpecialEventOverrideParts final
{
public:
	TArray<class UCustomCharacterPart*>           OverrideParts;
	struct FFortSpecialEventGEData                GameplayEffectToApplyOnSwap;
};
static_assert(alignof(FFortSpecialEventOverrideParts) == 0x000008, "Wrong alignment on FFortSpecialEventOverrideParts");
static_assert(sizeof(FFortSpecialEventOverrideParts) == 0x000020, "Wrong size on FFortSpecialEventOverrideParts");
static_assert(offsetof(FFortSpecialEventOverrideParts, OverrideParts) == 0x000000, "Member 'FFortSpecialEventOverrideParts::OverrideParts' has a wrong offset!");
static_assert(offsetof(FFortSpecialEventOverrideParts, GameplayEffectToApplyOnSwap) == 0x000010, "Member 'FFortSpecialEventOverrideParts::GameplayEffectToApplyOnSwap' has a wrong offset!");

struct FBuffetBubblesReplicatedData final
{
public:
	struct FTransform                             RelativeTransform;
	struct FVector                                RelativeVelocity;
	uint8                                         Pad_78[0x8];
};
static_assert(alignof(FBuffetBubblesReplicatedData) == 0x000010, "Wrong alignment on FBuffetBubblesReplicatedData");
static_assert(sizeof(FBuffetBubblesReplicatedData) == 0x000080, "Wrong size on FBuffetBubblesReplicatedData");
static_assert(offsetof(FBuffetBubblesReplicatedData, RelativeTransform) == 0x000000, "Member 'FBuffetBubblesReplicatedData::RelativeTransform' has a wrong offset!");
static_assert(offsetof(FBuffetBubblesReplicatedData, RelativeVelocity) == 0x000060, "Member 'FBuffetBubblesReplicatedData::RelativeVelocity' has a wrong offset!");

struct alignas(0x10) FBuffetBubblesDebugData final
{
public:
	uint8                                         Pad_0[0xF0];
};
static_assert(alignof(FBuffetBubblesDebugData) == 0x000010, "Wrong alignment on FBuffetBubblesDebugData");
static_assert(sizeof(FBuffetBubblesDebugData) == 0x0000F0, "Wrong size on FBuffetBubblesDebugData");

struct FBuffetFlyingRicochetReplicatedData final
{
public:
	float                                         StartTime;
	uint8                                         Pad_4[0x4];
	struct FVector                                Velocity;
};
static_assert(alignof(FBuffetFlyingRicochetReplicatedData) == 0x000008, "Wrong alignment on FBuffetFlyingRicochetReplicatedData");
static_assert(sizeof(FBuffetFlyingRicochetReplicatedData) == 0x000020, "Wrong size on FBuffetFlyingRicochetReplicatedData");
static_assert(offsetof(FBuffetFlyingRicochetReplicatedData, StartTime) == 0x000000, "Member 'FBuffetFlyingRicochetReplicatedData::StartTime' has a wrong offset!");
static_assert(offsetof(FBuffetFlyingRicochetReplicatedData, Velocity) == 0x000008, "Member 'FBuffetFlyingRicochetReplicatedData::Velocity' has a wrong offset!");

struct FCustomTickComonentQualitySettings final
{
public:
	int32                                         NumFramesToSkipBetweenEvaluations;
	int32                                         MinFramesToSkipBetweenCustomTicks;
	int32                                         MaxFramesToSkipBetweenCustomTicks;
	float                                         InnerDistance;
	float                                         OuterDistance;
};
static_assert(alignof(FCustomTickComonentQualitySettings) == 0x000004, "Wrong alignment on FCustomTickComonentQualitySettings");
static_assert(sizeof(FCustomTickComonentQualitySettings) == 0x000014, "Wrong size on FCustomTickComonentQualitySettings");
static_assert(offsetof(FCustomTickComonentQualitySettings, NumFramesToSkipBetweenEvaluations) == 0x000000, "Member 'FCustomTickComonentQualitySettings::NumFramesToSkipBetweenEvaluations' has a wrong offset!");
static_assert(offsetof(FCustomTickComonentQualitySettings, MinFramesToSkipBetweenCustomTicks) == 0x000004, "Member 'FCustomTickComonentQualitySettings::MinFramesToSkipBetweenCustomTicks' has a wrong offset!");
static_assert(offsetof(FCustomTickComonentQualitySettings, MaxFramesToSkipBetweenCustomTicks) == 0x000008, "Member 'FCustomTickComonentQualitySettings::MaxFramesToSkipBetweenCustomTicks' has a wrong offset!");
static_assert(offsetof(FCustomTickComonentQualitySettings, InnerDistance) == 0x00000C, "Member 'FCustomTickComonentQualitySettings::InnerDistance' has a wrong offset!");
static_assert(offsetof(FCustomTickComonentQualitySettings, OuterDistance) == 0x000010, "Member 'FCustomTickComonentQualitySettings::OuterDistance' has a wrong offset!");

struct alignas(0x08) FSpecialEventAudioHapticsAction final
{
public:
	float                                         LoudnessFloor;
	float                                         LoudnessCeiling;
	float                                         HapticsIntensity;
	int32                                         ChannelIndex;
	uint8                                         bAffectsLeftLarge : 1;
	uint8                                         bAffectsLeftSmall : 1;
	uint8                                         bAffectsRightLarge : 1;
	uint8                                         bAffectsRightSmall : 1;
	uint8                                         Pad_11[0xF];
};
static_assert(alignof(FSpecialEventAudioHapticsAction) == 0x000008, "Wrong alignment on FSpecialEventAudioHapticsAction");
static_assert(sizeof(FSpecialEventAudioHapticsAction) == 0x000020, "Wrong size on FSpecialEventAudioHapticsAction");
static_assert(offsetof(FSpecialEventAudioHapticsAction, LoudnessFloor) == 0x000000, "Member 'FSpecialEventAudioHapticsAction::LoudnessFloor' has a wrong offset!");
static_assert(offsetof(FSpecialEventAudioHapticsAction, LoudnessCeiling) == 0x000004, "Member 'FSpecialEventAudioHapticsAction::LoudnessCeiling' has a wrong offset!");
static_assert(offsetof(FSpecialEventAudioHapticsAction, HapticsIntensity) == 0x000008, "Member 'FSpecialEventAudioHapticsAction::HapticsIntensity' has a wrong offset!");
static_assert(offsetof(FSpecialEventAudioHapticsAction, ChannelIndex) == 0x00000C, "Member 'FSpecialEventAudioHapticsAction::ChannelIndex' has a wrong offset!");

struct FSpecialEventCursorMode final
{
public:
	TSubclassOf<class UUserWidget>                WidgetClass;
	bool                                          bAllowDebugCursorDrawing;
	uint8                                         Pad_9[0x3];
	struct FSpecialEventMathEaseData              GamepadMoveEaseData;
	struct FScalableFloat                         GamepadMoveSpeed;
	struct FSpecialEventMathEaseData              TouchMoveEaseData;
	uint8                                         Pad_4C[0x4];
	struct FScalableFloat                         TouchMoveSpeed;
	float                                         TouchDeadzoneTreshold;
	float                                         TouchAttenuator;
	struct FScalableFloat                         MinCursorPercentForAdditiveRotationPitch;
	struct FScalableFloat                         MinCursorPercentForAdditiveRotationYaw;
	struct FScalableFloat                         MaxAdditiveRotationPitch;
	struct FScalableFloat                         MaxAdditiveRotationYaw;
	struct FScalableFloat                         AdditiveRotationInterpSpeed;
	struct FScalableFloat                         ZoomInInterpSpeed;
	struct FScalableFloat                         ZoomOutInterpSpeed;
	struct FScalableFloat                         ZoomAdditiveFOV;
	struct FScalableFloat                         GamepadZoomMoveSpeed;
	struct FScalableFloat                         TouchZoomMoveSpeed;
	bool                                          bAllowTrace;
	ECollisionChannel                             TraceChannel;
	uint8                                         Pad_212[0x6];
	struct FScalableFloat                         SweepRadius;
	struct FScalableFloat                         TraceDistance;
	struct FScalableFloat                         bTraceComplex;
	uint8                                         Pad_290[0x8];
};
static_assert(alignof(FSpecialEventCursorMode) == 0x000008, "Wrong alignment on FSpecialEventCursorMode");
static_assert(sizeof(FSpecialEventCursorMode) == 0x000298, "Wrong size on FSpecialEventCursorMode");
static_assert(offsetof(FSpecialEventCursorMode, WidgetClass) == 0x000000, "Member 'FSpecialEventCursorMode::WidgetClass' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, bAllowDebugCursorDrawing) == 0x000008, "Member 'FSpecialEventCursorMode::bAllowDebugCursorDrawing' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, GamepadMoveEaseData) == 0x00000C, "Member 'FSpecialEventCursorMode::GamepadMoveEaseData' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, GamepadMoveSpeed) == 0x000018, "Member 'FSpecialEventCursorMode::GamepadMoveSpeed' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, TouchMoveEaseData) == 0x000040, "Member 'FSpecialEventCursorMode::TouchMoveEaseData' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, TouchMoveSpeed) == 0x000050, "Member 'FSpecialEventCursorMode::TouchMoveSpeed' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, TouchDeadzoneTreshold) == 0x000078, "Member 'FSpecialEventCursorMode::TouchDeadzoneTreshold' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, TouchAttenuator) == 0x00007C, "Member 'FSpecialEventCursorMode::TouchAttenuator' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, MinCursorPercentForAdditiveRotationPitch) == 0x000080, "Member 'FSpecialEventCursorMode::MinCursorPercentForAdditiveRotationPitch' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, MinCursorPercentForAdditiveRotationYaw) == 0x0000A8, "Member 'FSpecialEventCursorMode::MinCursorPercentForAdditiveRotationYaw' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, MaxAdditiveRotationPitch) == 0x0000D0, "Member 'FSpecialEventCursorMode::MaxAdditiveRotationPitch' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, MaxAdditiveRotationYaw) == 0x0000F8, "Member 'FSpecialEventCursorMode::MaxAdditiveRotationYaw' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, AdditiveRotationInterpSpeed) == 0x000120, "Member 'FSpecialEventCursorMode::AdditiveRotationInterpSpeed' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, ZoomInInterpSpeed) == 0x000148, "Member 'FSpecialEventCursorMode::ZoomInInterpSpeed' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, ZoomOutInterpSpeed) == 0x000170, "Member 'FSpecialEventCursorMode::ZoomOutInterpSpeed' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, ZoomAdditiveFOV) == 0x000198, "Member 'FSpecialEventCursorMode::ZoomAdditiveFOV' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, GamepadZoomMoveSpeed) == 0x0001C0, "Member 'FSpecialEventCursorMode::GamepadZoomMoveSpeed' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, TouchZoomMoveSpeed) == 0x0001E8, "Member 'FSpecialEventCursorMode::TouchZoomMoveSpeed' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, bAllowTrace) == 0x000210, "Member 'FSpecialEventCursorMode::bAllowTrace' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, TraceChannel) == 0x000211, "Member 'FSpecialEventCursorMode::TraceChannel' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, SweepRadius) == 0x000218, "Member 'FSpecialEventCursorMode::SweepRadius' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, TraceDistance) == 0x000240, "Member 'FSpecialEventCursorMode::TraceDistance' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorMode, bTraceComplex) == 0x000268, "Member 'FSpecialEventCursorMode::bTraceComplex' has a wrong offset!");

struct FSpecialEventCursorStackEntry final
{
public:
	struct FGameplayTag                           CursorModeTag;
	TWeakObjectPtr<class UObject>                 InstigatingObject;
};
static_assert(alignof(FSpecialEventCursorStackEntry) == 0x000004, "Wrong alignment on FSpecialEventCursorStackEntry");
static_assert(sizeof(FSpecialEventCursorStackEntry) == 0x00000C, "Wrong size on FSpecialEventCursorStackEntry");
static_assert(offsetof(FSpecialEventCursorStackEntry, CursorModeTag) == 0x000000, "Member 'FSpecialEventCursorStackEntry::CursorModeTag' has a wrong offset!");
static_assert(offsetof(FSpecialEventCursorStackEntry, InstigatingObject) == 0x000004, "Member 'FSpecialEventCursorStackEntry::InstigatingObject' has a wrong offset!");

struct FSpecialEventPhaseComponentNetModeInfo final
{
public:
	ESpecialEventPhaseComponentNetModeType        NetModeType;
	uint8                                         Pad_1[0x7];
	TSubclassOf<class UActorComponent>            ComponentClass;
};
static_assert(alignof(FSpecialEventPhaseComponentNetModeInfo) == 0x000008, "Wrong alignment on FSpecialEventPhaseComponentNetModeInfo");
static_assert(sizeof(FSpecialEventPhaseComponentNetModeInfo) == 0x000010, "Wrong size on FSpecialEventPhaseComponentNetModeInfo");
static_assert(offsetof(FSpecialEventPhaseComponentNetModeInfo, NetModeType) == 0x000000, "Member 'FSpecialEventPhaseComponentNetModeInfo::NetModeType' has a wrong offset!");
static_assert(offsetof(FSpecialEventPhaseComponentNetModeInfo, ComponentClass) == 0x000008, "Member 'FSpecialEventPhaseComponentNetModeInfo::ComponentClass' has a wrong offset!");

struct FSpecialEventRewindComponentStateData final
{
public:
	ESpecialEventRewindComponentState             State;
	uint8                                         StateChangedCount;
	uint8                                         Pad_2[0x2];
	float                                         ServerWorldTime;
};
static_assert(alignof(FSpecialEventRewindComponentStateData) == 0x000004, "Wrong alignment on FSpecialEventRewindComponentStateData");
static_assert(sizeof(FSpecialEventRewindComponentStateData) == 0x000008, "Wrong size on FSpecialEventRewindComponentStateData");
static_assert(offsetof(FSpecialEventRewindComponentStateData, State) == 0x000000, "Member 'FSpecialEventRewindComponentStateData::State' has a wrong offset!");
static_assert(offsetof(FSpecialEventRewindComponentStateData, StateChangedCount) == 0x000001, "Member 'FSpecialEventRewindComponentStateData::StateChangedCount' has a wrong offset!");
static_assert(offsetof(FSpecialEventRewindComponentStateData, ServerWorldTime) == 0x000004, "Member 'FSpecialEventRewindComponentStateData::ServerWorldTime' has a wrong offset!");

struct FSpecialEventRewindComponentFrame : public FFastArraySerializerItem
{
public:
	float                                         ServerWorldTime;
};
static_assert(alignof(FSpecialEventRewindComponentFrame) == 0x000004, "Wrong alignment on FSpecialEventRewindComponentFrame");
static_assert(sizeof(FSpecialEventRewindComponentFrame) == 0x000010, "Wrong size on FSpecialEventRewindComponentFrame");
static_assert(offsetof(FSpecialEventRewindComponentFrame, ServerWorldTime) == 0x00000C, "Member 'FSpecialEventRewindComponentFrame::ServerWorldTime' has a wrong offset!");

struct FSpecialEventRewindComponentRecording
{
public:
	uint8                                         Pad_0[0x8];
	class USpecialEventRewindComponent*           RewindComponent;
	int32                                         StartFrameIndex;
	int32                                         EndFrameIndex;
	uint8                                         Pad_18[0x8];
};
static_assert(alignof(FSpecialEventRewindComponentRecording) == 0x000008, "Wrong alignment on FSpecialEventRewindComponentRecording");
static_assert(sizeof(FSpecialEventRewindComponentRecording) == 0x000020, "Wrong size on FSpecialEventRewindComponentRecording");
static_assert(offsetof(FSpecialEventRewindComponentRecording, RewindComponent) == 0x000008, "Member 'FSpecialEventRewindComponentRecording::RewindComponent' has a wrong offset!");
static_assert(offsetof(FSpecialEventRewindComponentRecording, StartFrameIndex) == 0x000010, "Member 'FSpecialEventRewindComponentRecording::StartFrameIndex' has a wrong offset!");
static_assert(offsetof(FSpecialEventRewindComponentRecording, EndFrameIndex) == 0x000014, "Member 'FSpecialEventRewindComponentRecording::EndFrameIndex' has a wrong offset!");

struct FSpecialEventRewindComponentFrame_PlayerPawn final : public FSpecialEventRewindComponentFrame
{
public:
	struct FVector_NetQuantize                    Location;
	uint8                                         CompressedYaw;
	uint8                                         CompressedControlRotationPitch;
	uint8                                         Pad_2A[0x6];
};
static_assert(alignof(FSpecialEventRewindComponentFrame_PlayerPawn) == 0x000008, "Wrong alignment on FSpecialEventRewindComponentFrame_PlayerPawn");
static_assert(sizeof(FSpecialEventRewindComponentFrame_PlayerPawn) == 0x000030, "Wrong size on FSpecialEventRewindComponentFrame_PlayerPawn");
static_assert(offsetof(FSpecialEventRewindComponentFrame_PlayerPawn, Location) == 0x000010, "Member 'FSpecialEventRewindComponentFrame_PlayerPawn::Location' has a wrong offset!");
static_assert(offsetof(FSpecialEventRewindComponentFrame_PlayerPawn, CompressedYaw) == 0x000028, "Member 'FSpecialEventRewindComponentFrame_PlayerPawn::CompressedYaw' has a wrong offset!");
static_assert(offsetof(FSpecialEventRewindComponentFrame_PlayerPawn, CompressedControlRotationPitch) == 0x000029, "Member 'FSpecialEventRewindComponentFrame_PlayerPawn::CompressedControlRotationPitch' has a wrong offset!");

struct FSpecialEventRewindComponentRecordingFastArray_PlayerPawn final : public FFastArraySerializer
{
public:
	TArray<struct FSpecialEventRewindComponentFrame_PlayerPawn> Frames;
};
static_assert(alignof(FSpecialEventRewindComponentRecordingFastArray_PlayerPawn) == 0x000008, "Wrong alignment on FSpecialEventRewindComponentRecordingFastArray_PlayerPawn");
static_assert(sizeof(FSpecialEventRewindComponentRecordingFastArray_PlayerPawn) == 0x000118, "Wrong size on FSpecialEventRewindComponentRecordingFastArray_PlayerPawn");
static_assert(offsetof(FSpecialEventRewindComponentRecordingFastArray_PlayerPawn, Frames) == 0x000108, "Member 'FSpecialEventRewindComponentRecordingFastArray_PlayerPawn::Frames' has a wrong offset!");

struct FSpecialEventRewindComponentRecording_PlayerPawn final : public FSpecialEventRewindComponentRecording
{
};
static_assert(alignof(FSpecialEventRewindComponentRecording_PlayerPawn) == 0x000008, "Wrong alignment on FSpecialEventRewindComponentRecording_PlayerPawn");
static_assert(sizeof(FSpecialEventRewindComponentRecording_PlayerPawn) == 0x000020, "Wrong size on FSpecialEventRewindComponentRecording_PlayerPawn");

struct FPhaseLevelEntry final
{
public:
	TSoftObjectPtr<class UWorld>                  LevelToLoad;
	class FString                                 LevelName;
	bool                                          bLoadLevelOnScriptStart;
	bool                                          bLevelStartsVisible;
	bool                                          bUnloadLevelOnPhaseEnd;
	bool                                          bExcludeFromServerPreload;
	bool                                          bMakeVisibleOnPhaseStart;
	uint8                                         Pad_3D[0x3];
	struct FGameplayTagContainer                  MakeVisibleAtPhaseTags;
	struct FGameplayTagContainer                  UnloadLevelAtPhaseTags;
	struct FVector                                Location;
	struct FRotator                               Rotation;
	class ULevelStreamingDynamic*                 LevelInstance;
};
static_assert(alignof(FPhaseLevelEntry) == 0x000008, "Wrong alignment on FPhaseLevelEntry");
static_assert(sizeof(FPhaseLevelEntry) == 0x0000B8, "Wrong size on FPhaseLevelEntry");
static_assert(offsetof(FPhaseLevelEntry, LevelToLoad) == 0x000000, "Member 'FPhaseLevelEntry::LevelToLoad' has a wrong offset!");
static_assert(offsetof(FPhaseLevelEntry, LevelName) == 0x000028, "Member 'FPhaseLevelEntry::LevelName' has a wrong offset!");
static_assert(offsetof(FPhaseLevelEntry, bLoadLevelOnScriptStart) == 0x000038, "Member 'FPhaseLevelEntry::bLoadLevelOnScriptStart' has a wrong offset!");
static_assert(offsetof(FPhaseLevelEntry, bLevelStartsVisible) == 0x000039, "Member 'FPhaseLevelEntry::bLevelStartsVisible' has a wrong offset!");
static_assert(offsetof(FPhaseLevelEntry, bUnloadLevelOnPhaseEnd) == 0x00003A, "Member 'FPhaseLevelEntry::bUnloadLevelOnPhaseEnd' has a wrong offset!");
static_assert(offsetof(FPhaseLevelEntry, bExcludeFromServerPreload) == 0x00003B, "Member 'FPhaseLevelEntry::bExcludeFromServerPreload' has a wrong offset!");
static_assert(offsetof(FPhaseLevelEntry, bMakeVisibleOnPhaseStart) == 0x00003C, "Member 'FPhaseLevelEntry::bMakeVisibleOnPhaseStart' has a wrong offset!");
static_assert(offsetof(FPhaseLevelEntry, MakeVisibleAtPhaseTags) == 0x000040, "Member 'FPhaseLevelEntry::MakeVisibleAtPhaseTags' has a wrong offset!");
static_assert(offsetof(FPhaseLevelEntry, UnloadLevelAtPhaseTags) == 0x000060, "Member 'FPhaseLevelEntry::UnloadLevelAtPhaseTags' has a wrong offset!");
static_assert(offsetof(FPhaseLevelEntry, Location) == 0x000080, "Member 'FPhaseLevelEntry::Location' has a wrong offset!");
static_assert(offsetof(FPhaseLevelEntry, Rotation) == 0x000098, "Member 'FPhaseLevelEntry::Rotation' has a wrong offset!");
static_assert(offsetof(FPhaseLevelEntry, LevelInstance) == 0x0000B0, "Member 'FPhaseLevelEntry::LevelInstance' has a wrong offset!");

struct FPhaseInfo final
{
public:
	TSubclassOf<class ASpecialEventPhase>         PhaseActorClass;
	struct FGameplayTag                           PhaseTag;
	float                                         SequenceTime;
	bool                                          bSetRelevancyMode;
	ESpecialRelevancyMode                         RelevancyMode;
	uint8                                         Pad_12[0x2];
	int32                                         NumOfSquadsInRelevancyGroup;
	struct FGameplayTagContainer                  RequireLevelsFromPhaseTags;
	bool                                          bStartNextPhaseOnPhaseFinished;
	bool                                          bGarbageCollectAtPhaseStartOnServer;
	bool                                          bGarbageCollectAtPhaseStartOnClient;
	uint8                                         Pad_3B[0x5];
	TArray<struct FPhaseLevelEntry>               Levels;
	class ASpecialEventPhase*                     PhaseActor;
};
static_assert(alignof(FPhaseInfo) == 0x000008, "Wrong alignment on FPhaseInfo");
static_assert(sizeof(FPhaseInfo) == 0x000058, "Wrong size on FPhaseInfo");
static_assert(offsetof(FPhaseInfo, PhaseActorClass) == 0x000000, "Member 'FPhaseInfo::PhaseActorClass' has a wrong offset!");
static_assert(offsetof(FPhaseInfo, PhaseTag) == 0x000008, "Member 'FPhaseInfo::PhaseTag' has a wrong offset!");
static_assert(offsetof(FPhaseInfo, SequenceTime) == 0x00000C, "Member 'FPhaseInfo::SequenceTime' has a wrong offset!");
static_assert(offsetof(FPhaseInfo, bSetRelevancyMode) == 0x000010, "Member 'FPhaseInfo::bSetRelevancyMode' has a wrong offset!");
static_assert(offsetof(FPhaseInfo, RelevancyMode) == 0x000011, "Member 'FPhaseInfo::RelevancyMode' has a wrong offset!");
static_assert(offsetof(FPhaseInfo, NumOfSquadsInRelevancyGroup) == 0x000014, "Member 'FPhaseInfo::NumOfSquadsInRelevancyGroup' has a wrong offset!");
static_assert(offsetof(FPhaseInfo, RequireLevelsFromPhaseTags) == 0x000018, "Member 'FPhaseInfo::RequireLevelsFromPhaseTags' has a wrong offset!");
static_assert(offsetof(FPhaseInfo, bStartNextPhaseOnPhaseFinished) == 0x000038, "Member 'FPhaseInfo::bStartNextPhaseOnPhaseFinished' has a wrong offset!");
static_assert(offsetof(FPhaseInfo, bGarbageCollectAtPhaseStartOnServer) == 0x000039, "Member 'FPhaseInfo::bGarbageCollectAtPhaseStartOnServer' has a wrong offset!");
static_assert(offsetof(FPhaseInfo, bGarbageCollectAtPhaseStartOnClient) == 0x00003A, "Member 'FPhaseInfo::bGarbageCollectAtPhaseStartOnClient' has a wrong offset!");
static_assert(offsetof(FPhaseInfo, Levels) == 0x000040, "Member 'FPhaseInfo::Levels' has a wrong offset!");
static_assert(offsetof(FPhaseInfo, PhaseActor) == 0x000050, "Member 'FPhaseInfo::PhaseActor' has a wrong offset!");

struct FSpecialEventStatArray final : public FFastArraySerializer
{
public:
	TArray<struct FSpecialEventStatArrayEntry>    Stats;
	class USpecialEventStatComponent*             StatComponent;
};
static_assert(alignof(FSpecialEventStatArray) == 0x000008, "Wrong alignment on FSpecialEventStatArray");
static_assert(sizeof(FSpecialEventStatArray) == 0x000120, "Wrong size on FSpecialEventStatArray");
static_assert(offsetof(FSpecialEventStatArray, Stats) == 0x000108, "Member 'FSpecialEventStatArray::Stats' has a wrong offset!");
static_assert(offsetof(FSpecialEventStatArray, StatComponent) == 0x000118, "Member 'FSpecialEventStatArray::StatComponent' has a wrong offset!");

}
