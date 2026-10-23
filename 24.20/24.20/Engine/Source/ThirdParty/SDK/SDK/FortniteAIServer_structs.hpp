#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WorldConditions_structs.hpp"
#include "StateTreeModule_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "AIModule_structs.hpp"
#include "GameplayInteractionsModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

enum class ESwitchSeatType : uint8
{
	ToDriver                                 = 0,
	ToPassenger                              = 1,
	ToGunner                                 = 2,
	ToSpotter                                = 3,
	SwitchSeatType_MAX                       = 4,
};

enum class EFortAthenaStateTreeTaskFeatureExecutionMode : uint32
{
	DoNotExecute                             = 0,
	ExecuteOnEnter                           = 1,
	ExecuteOnExit                            = 2,
	EFortAthenaStateTreeTaskFeatureExecutionMode_MAX = 3,
};

enum class ESeatStatusType : uint8
{
	Driver                                   = 0,
	Passenger                                = 1,
	Gunner                                   = 2,
	Spotter                                  = 3,
	SeatStatusType_MAX                       = 4,
};

enum class EFortPointsFromNavGraphGoalPathDistanceFilterOperator : uint8
{
	AllGoalsInRange                          = 0,
	AnyGoalInRange                           = 1,
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator_MAX = 2,
};

enum class EFortTestGoalActorDot : uint8
{
	Dot3D                                    = 0,
	Dot2D                                    = 1,
	EFortTestGoalActorDot_MAX                = 2,
};

enum class EDistanceMode : uint8
{
	DistItemToContext                        = 0,
	DistItemGoalActorToContext               = 1,
	DistItemToItemGoalActor                  = 2,
	EDistanceMode_MAX                        = 3,
};

enum class ECountAIAssignedToType : uint8
{
	Goal                                     = 0,
	Actor                                    = 1,
	Assignment                               = 2,
	ECountAIAssignedToType_MAX               = 3,
};

enum class EFortAthenaAICanMoveState : uint8
{
	None                                     = 0,
	Failed_AgentOffNavmesh                   = 1,
	Failed_GoalOffNavmesh                    = 2,
	Failed_Falling                           = 3,
	Success                                  = 4,
	Success_Partial                          = 5,
	EFortAthenaAICanMoveState_MAX            = 6,
};

enum class EEvasiveManeuverType : uint8
{
	Crouch                                   = 0,
	Dodge                                    = 1,
	Jump                                     = 2,
	JetpackStrafe                            = 3,
	None                                     = 4,
	EEvasiveManeuverType_MAX                 = 5,
};

enum class EFreeFallingMode : uint8
{
	Idle                                     = 0,
	Random                                   = 1,
	TowardNearestAlly                        = 2,
	PatrolPath                               = 3,
	EFreeFallingMode_MAX                     = 4,
};

enum class EFocusingBehavior : uint8
{
	FocusCurrentTarget                       = 0,
	IgnoreThreatAfterTimer                   = 1,
	IgnoreThreatAlways                       = 2,
	IgnoreThreatToFlee                       = 3,
	LookAtInvestigate                        = 4,
	LookAtAmbush                             = 5,
	LookAtHeardSound                         = 6,
	LookAtScanAround                         = 7,
	LookAtScanAroundOnly                     = 8,
	Invalid                                  = 9,
	EFocusingBehavior_MAX                    = 10,
};

enum class EPathTestQueryType : uint8
{
	NavmeshRaycast2D                         = 0,
	HierarchicalQuery                        = 1,
	RegularPathFinding                       = 2,
	EPathTestQueryType_MAX                   = 3,
};

enum class EBTSetBlackboardBoolExitActions : uint8
{
	Invert                                   = 0,
	Revert                                   = 1,
	Keep                                     = 2,
	EBTSetBlackboardBoolExitActions_MAX      = 3,
};

enum class EGlideBehavior : uint8
{
	GlideFocusOnDestination                  = 0,
	GlideSurveyArea                          = 1,
	EGlideBehavior_MAX                       = 2,
};

enum class EGlideMovementType : uint8
{
	GlideMovementLinear                      = 0,
	GlideMovementSpiral                      = 1,
	GlideMovementSerpentine                  = 2,
	EGlideMovementType_MAX                   = 3,
};

enum class EActionState : uint8
{
	TryingToEquip                            = 0,
	EquippingItem                            = 1,
	UsingItem                                = 2,
	WaitingItemTermination                   = 3,
	WaitBeforeEquippingNextItem              = 4,
	ActionEndedWithNoError                   = 5,
	ActionEndedWithError                     = 6,
	EActionState_MAX                         = 7,
};

enum class EEncampmentRole : uint8
{
	Guard                                    = 0,
	Build                                    = 1,
	Count                                    = 2,
	EEncampmentRole_MAX                      = 3,
};

enum class EHasMatchingGameplayTagContainerTestType : uint8
{
	Any                                      = 0,
	All                                      = 1,
	EHasMatchingGameplayTagContainerTestType_MAX = 2,
};

enum class EFortAthenaArithmeticOperation : uint8
{
	Add                                      = 0,
	Subtract                                 = 1,
	Multiply                                 = 2,
	Divide                                   = 3,
	EFortAthenaArithmeticOperation_MAX       = 4,
};

enum class EFortAthenaPlayContextualAnimExecutionMethod : uint8
{
	StartInteraction                         = 0,
	JoinInteraction                          = 1,
	TransitionAllActors                      = 2,
	TransitionSingleActor                    = 3,
	EFortAthenaPlayContextualAnimExecutionMethod_MAX = 4,
};

struct FFortAthenaHandleSoftDisableStateTreeTaskInstanceData final
{
public:
	TArray<class AActor*>                         ActorsToCleanup;
	bool                                          bHasReceivedSoftDisableEvent;
	uint8                                         Pad_11[0x3];
	struct FGameplayTag                           ReceivedSoftDisableEvent;
};
static_assert(alignof(FFortAthenaHandleSoftDisableStateTreeTaskInstanceData) == 0x000008, "Wrong alignment on FFortAthenaHandleSoftDisableStateTreeTaskInstanceData");
static_assert(sizeof(FFortAthenaHandleSoftDisableStateTreeTaskInstanceData) == 0x000018, "Wrong size on FFortAthenaHandleSoftDisableStateTreeTaskInstanceData");
static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTaskInstanceData, ActorsToCleanup) == 0x000000, "Member 'FFortAthenaHandleSoftDisableStateTreeTaskInstanceData::ActorsToCleanup' has a wrong offset!");
static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTaskInstanceData, bHasReceivedSoftDisableEvent) == 0x000010, "Member 'FFortAthenaHandleSoftDisableStateTreeTaskInstanceData::bHasReceivedSoftDisableEvent' has a wrong offset!");
static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTaskInstanceData, ReceivedSoftDisableEvent) == 0x000014, "Member 'FFortAthenaHandleSoftDisableStateTreeTaskInstanceData::ReceivedSoftDisableEvent' has a wrong offset!");

struct FFortAthenaHandleSoftDisableStateTreeTask final : public FStateTreeTaskCommonBase
{
public:
	struct FGameplayTag                           StateTreeEventTag;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FFortAthenaHandleSoftDisableStateTreeTask) == 0x000008, "Wrong alignment on FFortAthenaHandleSoftDisableStateTreeTask");
static_assert(sizeof(FFortAthenaHandleSoftDisableStateTreeTask) == 0x000028, "Wrong size on FFortAthenaHandleSoftDisableStateTreeTask");
static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTask, StateTreeEventTag) == 0x000020, "Member 'FFortAthenaHandleSoftDisableStateTreeTask::StateTreeEventTag' has a wrong offset!");

struct FFortAthenaPickRandomMontageConfig final
{
public:
	class UAnimMontage*                           Montage;
	int32                                         RandomWeight;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FFortAthenaPickRandomMontageConfig) == 0x000008, "Wrong alignment on FFortAthenaPickRandomMontageConfig");
static_assert(sizeof(FFortAthenaPickRandomMontageConfig) == 0x000010, "Wrong size on FFortAthenaPickRandomMontageConfig");
static_assert(offsetof(FFortAthenaPickRandomMontageConfig, Montage) == 0x000000, "Member 'FFortAthenaPickRandomMontageConfig::Montage' has a wrong offset!");
static_assert(offsetof(FFortAthenaPickRandomMontageConfig, RandomWeight) == 0x000008, "Member 'FFortAthenaPickRandomMontageConfig::RandomWeight' has a wrong offset!");

struct FFortAthenaPickRandomMontageStateTreeTaskInstanceData final
{
public:
	TArray<struct FFortAthenaPickRandomMontageConfig> PossibleMontages;
	class UAnimMontage*                           PickedMontage;
};
static_assert(alignof(FFortAthenaPickRandomMontageStateTreeTaskInstanceData) == 0x000008, "Wrong alignment on FFortAthenaPickRandomMontageStateTreeTaskInstanceData");
static_assert(sizeof(FFortAthenaPickRandomMontageStateTreeTaskInstanceData) == 0x000018, "Wrong size on FFortAthenaPickRandomMontageStateTreeTaskInstanceData");
static_assert(offsetof(FFortAthenaPickRandomMontageStateTreeTaskInstanceData, PossibleMontages) == 0x000000, "Member 'FFortAthenaPickRandomMontageStateTreeTaskInstanceData::PossibleMontages' has a wrong offset!");
static_assert(offsetof(FFortAthenaPickRandomMontageStateTreeTaskInstanceData, PickedMontage) == 0x000010, "Member 'FFortAthenaPickRandomMontageStateTreeTaskInstanceData::PickedMontage' has a wrong offset!");

struct FFortAthenaPickRandomMontageStateTreeTask final : public FStateTreeTaskCommonBase
{
};
static_assert(alignof(FFortAthenaPickRandomMontageStateTreeTask) == 0x000008, "Wrong alignment on FFortAthenaPickRandomMontageStateTreeTask");
static_assert(sizeof(FFortAthenaPickRandomMontageStateTreeTask) == 0x000020, "Wrong size on FFortAthenaPickRandomMontageStateTreeTask");

struct FFortAthenaToggleAllowInteractStateTreeTaskInstanceData final
{
public:
	class AActor*                                 Actor;
	class AActor*                                 TargetActor;
};
static_assert(alignof(FFortAthenaToggleAllowInteractStateTreeTaskInstanceData) == 0x000008, "Wrong alignment on FFortAthenaToggleAllowInteractStateTreeTaskInstanceData");
static_assert(sizeof(FFortAthenaToggleAllowInteractStateTreeTaskInstanceData) == 0x000010, "Wrong size on FFortAthenaToggleAllowInteractStateTreeTaskInstanceData");
static_assert(offsetof(FFortAthenaToggleAllowInteractStateTreeTaskInstanceData, Actor) == 0x000000, "Member 'FFortAthenaToggleAllowInteractStateTreeTaskInstanceData::Actor' has a wrong offset!");
static_assert(offsetof(FFortAthenaToggleAllowInteractStateTreeTaskInstanceData, TargetActor) == 0x000008, "Member 'FFortAthenaToggleAllowInteractStateTreeTaskInstanceData::TargetActor' has a wrong offset!");

struct FFortAthenaToggleAllowInteractStateTreeTaskTreeTask final : public FStateTreeTaskCommonBase
{
public:
	EFortAthenaStateTreeTaskFeatureExecutionMode  AddExecutionMode;
	EFortAthenaStateTreeTaskFeatureExecutionMode  RemoveExecutionMode;
};
static_assert(alignof(FFortAthenaToggleAllowInteractStateTreeTaskTreeTask) == 0x000008, "Wrong alignment on FFortAthenaToggleAllowInteractStateTreeTaskTreeTask");
static_assert(sizeof(FFortAthenaToggleAllowInteractStateTreeTaskTreeTask) == 0x000028, "Wrong size on FFortAthenaToggleAllowInteractStateTreeTaskTreeTask");
static_assert(offsetof(FFortAthenaToggleAllowInteractStateTreeTaskTreeTask, AddExecutionMode) == 0x000020, "Member 'FFortAthenaToggleAllowInteractStateTreeTaskTreeTask::AddExecutionMode' has a wrong offset!");
static_assert(offsetof(FFortAthenaToggleAllowInteractStateTreeTaskTreeTask, RemoveExecutionMode) == 0x000024, "Member 'FFortAthenaToggleAllowInteractStateTreeTaskTreeTask::RemoveExecutionMode' has a wrong offset!");

struct FFortAthenaTrackEventConsumeStateTreeTaskInstanceData final
{
public:
	struct FStateTreeStructRef                    ReferencedEvent;
};
static_assert(alignof(FFortAthenaTrackEventConsumeStateTreeTaskInstanceData) == 0x000008, "Wrong alignment on FFortAthenaTrackEventConsumeStateTreeTaskInstanceData");
static_assert(sizeof(FFortAthenaTrackEventConsumeStateTreeTaskInstanceData) == 0x000010, "Wrong size on FFortAthenaTrackEventConsumeStateTreeTaskInstanceData");
static_assert(offsetof(FFortAthenaTrackEventConsumeStateTreeTaskInstanceData, ReferencedEvent) == 0x000000, "Member 'FFortAthenaTrackEventConsumeStateTreeTaskInstanceData::ReferencedEvent' has a wrong offset!");

struct FFortAthenaTrackEventConsumeStateTreeTask final : public FStateTreeTaskCommonBase
{
};
static_assert(alignof(FFortAthenaTrackEventConsumeStateTreeTask) == 0x000008, "Wrong alignment on FFortAthenaTrackEventConsumeStateTreeTask");
static_assert(sizeof(FFortAthenaTrackEventConsumeStateTreeTask) == 0x000020, "Wrong size on FFortAthenaTrackEventConsumeStateTreeTask");

struct FFortAthenaTrackEventStateTreeTaskStateTreeParameter final
{
public:
	bool                                          bHasReceivedTrackedEvent;
	uint8                                         Pad_1[0x3];
	struct FGameplayTag                           ReceivedEventTag;
};
static_assert(alignof(FFortAthenaTrackEventStateTreeTaskStateTreeParameter) == 0x000004, "Wrong alignment on FFortAthenaTrackEventStateTreeTaskStateTreeParameter");
static_assert(sizeof(FFortAthenaTrackEventStateTreeTaskStateTreeParameter) == 0x000008, "Wrong size on FFortAthenaTrackEventStateTreeTaskStateTreeParameter");
static_assert(offsetof(FFortAthenaTrackEventStateTreeTaskStateTreeParameter, bHasReceivedTrackedEvent) == 0x000000, "Member 'FFortAthenaTrackEventStateTreeTaskStateTreeParameter::bHasReceivedTrackedEvent' has a wrong offset!");
static_assert(offsetof(FFortAthenaTrackEventStateTreeTaskStateTreeParameter, ReceivedEventTag) == 0x000004, "Member 'FFortAthenaTrackEventStateTreeTaskStateTreeParameter::ReceivedEventTag' has a wrong offset!");

struct FFortAthenaTrackEventStateTreeTaskInstanceData final
{
public:
	struct FFortAthenaTrackEventStateTreeTaskStateTreeParameter OutParameter;
};
static_assert(alignof(FFortAthenaTrackEventStateTreeTaskInstanceData) == 0x000004, "Wrong alignment on FFortAthenaTrackEventStateTreeTaskInstanceData");
static_assert(sizeof(FFortAthenaTrackEventStateTreeTaskInstanceData) == 0x000008, "Wrong size on FFortAthenaTrackEventStateTreeTaskInstanceData");
static_assert(offsetof(FFortAthenaTrackEventStateTreeTaskInstanceData, OutParameter) == 0x000000, "Member 'FFortAthenaTrackEventStateTreeTaskInstanceData::OutParameter' has a wrong offset!");

struct FFortAthenaTrackEventStateTreeTask final : public FStateTreeTaskCommonBase
{
public:
	struct FGameplayTagQuery                      EventTagQuery;
	struct FGameplayTag                           StateTreeEventTag;
	uint8                                         Pad_6C[0x4];
};
static_assert(alignof(FFortAthenaTrackEventStateTreeTask) == 0x000008, "Wrong alignment on FFortAthenaTrackEventStateTreeTask");
static_assert(sizeof(FFortAthenaTrackEventStateTreeTask) == 0x000070, "Wrong size on FFortAthenaTrackEventStateTreeTask");
static_assert(offsetof(FFortAthenaTrackEventStateTreeTask, EventTagQuery) == 0x000020, "Member 'FFortAthenaTrackEventStateTreeTask::EventTagQuery' has a wrong offset!");
static_assert(offsetof(FFortAthenaTrackEventStateTreeTask, StateTreeEventTag) == 0x000068, "Member 'FFortAthenaTrackEventStateTreeTask::StateTreeEventTag' has a wrong offset!");

struct FFortAthenaWorldConditionInstanceData final
{
public:
	class AActor*                                 ActorA;
	class AActor*                                 ActorB;
	class AActor*                                 ActorC;
	bool                                          bOutResult;
	uint8                                         Pad_19[0x7];
	struct FWorldConditionQueryState              QueryState;
};
static_assert(alignof(FFortAthenaWorldConditionInstanceData) == 0x000008, "Wrong alignment on FFortAthenaWorldConditionInstanceData");
static_assert(sizeof(FFortAthenaWorldConditionInstanceData) == 0x000050, "Wrong size on FFortAthenaWorldConditionInstanceData");
static_assert(offsetof(FFortAthenaWorldConditionInstanceData, ActorA) == 0x000000, "Member 'FFortAthenaWorldConditionInstanceData::ActorA' has a wrong offset!");
static_assert(offsetof(FFortAthenaWorldConditionInstanceData, ActorB) == 0x000008, "Member 'FFortAthenaWorldConditionInstanceData::ActorB' has a wrong offset!");
static_assert(offsetof(FFortAthenaWorldConditionInstanceData, ActorC) == 0x000010, "Member 'FFortAthenaWorldConditionInstanceData::ActorC' has a wrong offset!");
static_assert(offsetof(FFortAthenaWorldConditionInstanceData, bOutResult) == 0x000018, "Member 'FFortAthenaWorldConditionInstanceData::bOutResult' has a wrong offset!");
static_assert(offsetof(FFortAthenaWorldConditionInstanceData, QueryState) == 0x000020, "Member 'FFortAthenaWorldConditionInstanceData::QueryState' has a wrong offset!");

struct FFortAthenaWorldConditionInstanceDataStateTreeTask final : public FStateTreeTaskCommonBase
{
public:
	struct FWorldConditionQueryDefinition         Conditions;
	struct FGameplayTag                           StateTreeEventTag;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(FFortAthenaWorldConditionInstanceDataStateTreeTask) == 0x000008, "Wrong alignment on FFortAthenaWorldConditionInstanceDataStateTreeTask");
static_assert(sizeof(FFortAthenaWorldConditionInstanceDataStateTreeTask) == 0x000040, "Wrong size on FFortAthenaWorldConditionInstanceDataStateTreeTask");
static_assert(offsetof(FFortAthenaWorldConditionInstanceDataStateTreeTask, Conditions) == 0x000020, "Member 'FFortAthenaWorldConditionInstanceDataStateTreeTask::Conditions' has a wrong offset!");
static_assert(offsetof(FFortAthenaWorldConditionInstanceDataStateTreeTask, StateTreeEventTag) == 0x000038, "Member 'FFortAthenaWorldConditionInstanceDataStateTreeTask::StateTreeEventTag' has a wrong offset!");

struct FFortBTService_InjectionTagKey final
{
public:
	struct FGameplayTag                           InjectionTag;
	class FName                                   InjectionKeyName;
};
static_assert(alignof(FFortBTService_InjectionTagKey) == 0x000004, "Wrong alignment on FFortBTService_InjectionTagKey");
static_assert(sizeof(FFortBTService_InjectionTagKey) == 0x000008, "Wrong size on FFortBTService_InjectionTagKey");
static_assert(offsetof(FFortBTService_InjectionTagKey, InjectionTag) == 0x000000, "Member 'FFortBTService_InjectionTagKey::InjectionTag' has a wrong offset!");
static_assert(offsetof(FFortBTService_InjectionTagKey, InjectionKeyName) == 0x000004, "Member 'FFortBTService_InjectionTagKey::InjectionKeyName' has a wrong offset!");

struct alignas(0x08) FFortWorldConditionGameplayTagActorQueryState final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FFortWorldConditionGameplayTagActorQueryState) == 0x000008, "Wrong alignment on FFortWorldConditionGameplayTagActorQueryState");
static_assert(sizeof(FFortWorldConditionGameplayTagActorQueryState) == 0x000008, "Wrong size on FFortWorldConditionGameplayTagActorQueryState");

struct FFortWorldConditionGameplayTagActor final : public FWorldConditionCommonBase
{
public:
	struct FWorldConditionContextDataRef          ActorContextRef;
	struct FGameplayTagContainer                  TagContainerToCheck;
	EHasMatchingGameplayTagContainerTestType      TestType;
	uint8                                         Pad_39[0x7];
};
static_assert(alignof(FFortWorldConditionGameplayTagActor) == 0x000008, "Wrong alignment on FFortWorldConditionGameplayTagActor");
static_assert(sizeof(FFortWorldConditionGameplayTagActor) == 0x000040, "Wrong size on FFortWorldConditionGameplayTagActor");
static_assert(offsetof(FFortWorldConditionGameplayTagActor, ActorContextRef) == 0x000010, "Member 'FFortWorldConditionGameplayTagActor::ActorContextRef' has a wrong offset!");
static_assert(offsetof(FFortWorldConditionGameplayTagActor, TagContainerToCheck) == 0x000018, "Member 'FFortWorldConditionGameplayTagActor::TagContainerToCheck' has a wrong offset!");
static_assert(offsetof(FFortWorldConditionGameplayTagActor, TestType) == 0x000038, "Member 'FFortWorldConditionGameplayTagActor::TestType' has a wrong offset!");

struct FFortWorldConditionTimeOfDay final : public FWorldConditionCommonBase
{
public:
	struct FWorldConditionContextDataRef          ActorContextRef;
	int32                                         ValidTimesOfDay;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FFortWorldConditionTimeOfDay) == 0x000008, "Wrong alignment on FFortWorldConditionTimeOfDay");
static_assert(sizeof(FFortWorldConditionTimeOfDay) == 0x000020, "Wrong size on FFortWorldConditionTimeOfDay");
static_assert(offsetof(FFortWorldConditionTimeOfDay, ActorContextRef) == 0x000010, "Member 'FFortWorldConditionTimeOfDay::ActorContextRef' has a wrong offset!");
static_assert(offsetof(FFortWorldConditionTimeOfDay, ValidTimesOfDay) == 0x000018, "Member 'FFortWorldConditionTimeOfDay::ValidTimesOfDay' has a wrong offset!");

struct FGameFeatureFortAIEvaluatorEntry final
{
public:
	TSoftObjectPtr<class UBehaviorTree>           TreeAsset;
	struct FGameplayTag                           InjectionTag;
	uint8                                         Pad_2C[0x4];
	TSoftClassPtr<class UClass>                   AIEvaluatorClass;
};
static_assert(alignof(FGameFeatureFortAIEvaluatorEntry) == 0x000008, "Wrong alignment on FGameFeatureFortAIEvaluatorEntry");
static_assert(sizeof(FGameFeatureFortAIEvaluatorEntry) == 0x000058, "Wrong size on FGameFeatureFortAIEvaluatorEntry");
static_assert(offsetof(FGameFeatureFortAIEvaluatorEntry, TreeAsset) == 0x000000, "Member 'FGameFeatureFortAIEvaluatorEntry::TreeAsset' has a wrong offset!");
static_assert(offsetof(FGameFeatureFortAIEvaluatorEntry, InjectionTag) == 0x000028, "Member 'FGameFeatureFortAIEvaluatorEntry::InjectionTag' has a wrong offset!");
static_assert(offsetof(FGameFeatureFortAIEvaluatorEntry, AIEvaluatorClass) == 0x000030, "Member 'FGameFeatureFortAIEvaluatorEntry::AIEvaluatorClass' has a wrong offset!");

struct FFortPointOnCurveRange final
{
public:
	float                                         MinPercentage;
	float                                         MaxPercentage;
};
static_assert(alignof(FFortPointOnCurveRange) == 0x000004, "Wrong alignment on FFortPointOnCurveRange");
static_assert(sizeof(FFortPointOnCurveRange) == 0x000008, "Wrong size on FFortPointOnCurveRange");
static_assert(offsetof(FFortPointOnCurveRange, MinPercentage) == 0x000000, "Member 'FFortPointOnCurveRange::MinPercentage' has a wrong offset!");
static_assert(offsetof(FFortPointOnCurveRange, MaxPercentage) == 0x000004, "Member 'FFortPointOnCurveRange::MaxPercentage' has a wrong offset!");

struct FFortPointsOnCurve final
{
public:
	TSoftObjectPtr<class UCurveFloat>             Curve;
	TArray<struct FFortPointOnCurveRange>         RangesForPointsOnCurve;
};
static_assert(alignof(FFortPointsOnCurve) == 0x000008, "Wrong alignment on FFortPointsOnCurve");
static_assert(sizeof(FFortPointsOnCurve) == 0x000038, "Wrong size on FFortPointsOnCurve");
static_assert(offsetof(FFortPointsOnCurve, Curve) == 0x000000, "Member 'FFortPointsOnCurve::Curve' has a wrong offset!");
static_assert(offsetof(FFortPointsOnCurve, RangesForPointsOnCurve) == 0x000028, "Member 'FFortPointsOnCurve::RangesForPointsOnCurve' has a wrong offset!");

struct FFortQueryGenerator_PerceivedActors_Settings final
{
public:
	bool                                          bIgnoreDBNOPawns;
	bool                                          bIgnoreSleepingAIs;
	uint8                                         Pad_2[0x6];
	struct FAIDataProviderFloatValue              MaxTimeSincePerceived;
};
static_assert(alignof(FFortQueryGenerator_PerceivedActors_Settings) == 0x000008, "Wrong alignment on FFortQueryGenerator_PerceivedActors_Settings");
static_assert(sizeof(FFortQueryGenerator_PerceivedActors_Settings) == 0x000040, "Wrong size on FFortQueryGenerator_PerceivedActors_Settings");
static_assert(offsetof(FFortQueryGenerator_PerceivedActors_Settings, bIgnoreDBNOPawns) == 0x000000, "Member 'FFortQueryGenerator_PerceivedActors_Settings::bIgnoreDBNOPawns' has a wrong offset!");
static_assert(offsetof(FFortQueryGenerator_PerceivedActors_Settings, bIgnoreSleepingAIs) == 0x000001, "Member 'FFortQueryGenerator_PerceivedActors_Settings::bIgnoreSleepingAIs' has a wrong offset!");
static_assert(offsetof(FFortQueryGenerator_PerceivedActors_Settings, MaxTimeSincePerceived) == 0x000008, "Member 'FFortQueryGenerator_PerceivedActors_Settings::MaxTimeSincePerceived' has a wrong offset!");

struct FFortGameplayTagQueryPerDifficulty final
{
public:
	struct FDataTableRowHandle                    DifficultyInfo;
	struct FGameplayTagQuery                      TagQueryToMatch;
	float                                         Difficulty;
	uint8                                         Pad_5C[0x4];
};
static_assert(alignof(FFortGameplayTagQueryPerDifficulty) == 0x000008, "Wrong alignment on FFortGameplayTagQueryPerDifficulty");
static_assert(sizeof(FFortGameplayTagQueryPerDifficulty) == 0x000060, "Wrong size on FFortGameplayTagQueryPerDifficulty");
static_assert(offsetof(FFortGameplayTagQueryPerDifficulty, DifficultyInfo) == 0x000000, "Member 'FFortGameplayTagQueryPerDifficulty::DifficultyInfo' has a wrong offset!");
static_assert(offsetof(FFortGameplayTagQueryPerDifficulty, TagQueryToMatch) == 0x000010, "Member 'FFortGameplayTagQueryPerDifficulty::TagQueryToMatch' has a wrong offset!");
static_assert(offsetof(FFortGameplayTagQueryPerDifficulty, Difficulty) == 0x000058, "Member 'FFortGameplayTagQueryPerDifficulty::Difficulty' has a wrong offset!");

struct FGoalDistanceData final
{
public:
	bool                                          bIgnoreScreeningDistance;
	uint8                                         Pad_1[0x7];
	struct FAIDataProviderFloatValue              ScreeningTestMaxDistance;
	TSoftObjectPtr<class UCurveFloat>             TestScoreCurve;
	struct FAIDataProviderFloatValue              CurveDistanceScale;
};
static_assert(alignof(FGoalDistanceData) == 0x000008, "Wrong alignment on FGoalDistanceData");
static_assert(sizeof(FGoalDistanceData) == 0x0000A0, "Wrong size on FGoalDistanceData");
static_assert(offsetof(FGoalDistanceData, bIgnoreScreeningDistance) == 0x000000, "Member 'FGoalDistanceData::bIgnoreScreeningDistance' has a wrong offset!");
static_assert(offsetof(FGoalDistanceData, ScreeningTestMaxDistance) == 0x000008, "Member 'FGoalDistanceData::ScreeningTestMaxDistance' has a wrong offset!");
static_assert(offsetof(FGoalDistanceData, TestScoreCurve) == 0x000040, "Member 'FGoalDistanceData::TestScoreCurve' has a wrong offset!");
static_assert(offsetof(FGoalDistanceData, CurveDistanceScale) == 0x000068, "Member 'FGoalDistanceData::CurveDistanceScale' has a wrong offset!");

struct FFailedToReachPOI final
{
public:
	int32                                         BotPOIID;
	int32                                         FailCount;
};
static_assert(alignof(FFailedToReachPOI) == 0x000004, "Wrong alignment on FFailedToReachPOI");
static_assert(sizeof(FFailedToReachPOI) == 0x000008, "Wrong size on FFailedToReachPOI");
static_assert(offsetof(FFailedToReachPOI, BotPOIID) == 0x000000, "Member 'FFailedToReachPOI::BotPOIID' has a wrong offset!");
static_assert(offsetof(FFailedToReachPOI, FailCount) == 0x000004, "Member 'FFailedToReachPOI::FailCount' has a wrong offset!");

struct alignas(0x08) FSmartObjectActivityResult final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FSmartObjectActivityResult) == 0x000008, "Wrong alignment on FSmartObjectActivityResult");
static_assert(sizeof(FSmartObjectActivityResult) == 0x000010, "Wrong size on FSmartObjectActivityResult");

struct FGameplayTagActorHasMatchingGameplayTagInstanceData final
{
public:
	class AActor*                                 Actor;
	struct FGameplayTag                           TagToCheck;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FGameplayTagActorHasMatchingGameplayTagInstanceData) == 0x000008, "Wrong alignment on FGameplayTagActorHasMatchingGameplayTagInstanceData");
static_assert(sizeof(FGameplayTagActorHasMatchingGameplayTagInstanceData) == 0x000010, "Wrong size on FGameplayTagActorHasMatchingGameplayTagInstanceData");
static_assert(offsetof(FGameplayTagActorHasMatchingGameplayTagInstanceData, Actor) == 0x000000, "Member 'FGameplayTagActorHasMatchingGameplayTagInstanceData::Actor' has a wrong offset!");
static_assert(offsetof(FGameplayTagActorHasMatchingGameplayTagInstanceData, TagToCheck) == 0x000008, "Member 'FGameplayTagActorHasMatchingGameplayTagInstanceData::TagToCheck' has a wrong offset!");

struct FGameplayTagActorHasMatchingGameplayTagCondition final : public FStateTreeConditionCommonBase
{
public:
	bool                                          bInvert;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FGameplayTagActorHasMatchingGameplayTagCondition) == 0x000008, "Wrong alignment on FGameplayTagActorHasMatchingGameplayTagCondition");
static_assert(sizeof(FGameplayTagActorHasMatchingGameplayTagCondition) == 0x000028, "Wrong size on FGameplayTagActorHasMatchingGameplayTagCondition");
static_assert(offsetof(FGameplayTagActorHasMatchingGameplayTagCondition, bInvert) == 0x000020, "Member 'FGameplayTagActorHasMatchingGameplayTagCondition::bInvert' has a wrong offset!");

struct FGameplayTagActorHasMatchingGameplayTagContainerInstanceData final
{
public:
	class AActor*                                 Actor;
	struct FGameplayTagContainer                  TagContainerToCheck;
};
static_assert(alignof(FGameplayTagActorHasMatchingGameplayTagContainerInstanceData) == 0x000008, "Wrong alignment on FGameplayTagActorHasMatchingGameplayTagContainerInstanceData");
static_assert(sizeof(FGameplayTagActorHasMatchingGameplayTagContainerInstanceData) == 0x000028, "Wrong size on FGameplayTagActorHasMatchingGameplayTagContainerInstanceData");
static_assert(offsetof(FGameplayTagActorHasMatchingGameplayTagContainerInstanceData, Actor) == 0x000000, "Member 'FGameplayTagActorHasMatchingGameplayTagContainerInstanceData::Actor' has a wrong offset!");
static_assert(offsetof(FGameplayTagActorHasMatchingGameplayTagContainerInstanceData, TagContainerToCheck) == 0x000008, "Member 'FGameplayTagActorHasMatchingGameplayTagContainerInstanceData::TagContainerToCheck' has a wrong offset!");

struct FGameplayTagActorHasMatchingGameplayContainerTagCondition final : public FStateTreeConditionCommonBase
{
public:
	EHasMatchingGameplayTagContainerTestType      TestType;
	bool                                          bInvert;
	uint8                                         Pad_22[0x6];
};
static_assert(alignof(FGameplayTagActorHasMatchingGameplayContainerTagCondition) == 0x000008, "Wrong alignment on FGameplayTagActorHasMatchingGameplayContainerTagCondition");
static_assert(sizeof(FGameplayTagActorHasMatchingGameplayContainerTagCondition) == 0x000028, "Wrong size on FGameplayTagActorHasMatchingGameplayContainerTagCondition");
static_assert(offsetof(FGameplayTagActorHasMatchingGameplayContainerTagCondition, TestType) == 0x000020, "Member 'FGameplayTagActorHasMatchingGameplayContainerTagCondition::TestType' has a wrong offset!");
static_assert(offsetof(FGameplayTagActorHasMatchingGameplayContainerTagCondition, bInvert) == 0x000021, "Member 'FGameplayTagActorHasMatchingGameplayContainerTagCondition::bInvert' has a wrong offset!");

struct FFortAthenaAddGameplayTagsStateTreeTaskInstanceData final
{
public:
	class AActor*                                 Actor;
	struct FGameplayTagContainer                  Tags;
};
static_assert(alignof(FFortAthenaAddGameplayTagsStateTreeTaskInstanceData) == 0x000008, "Wrong alignment on FFortAthenaAddGameplayTagsStateTreeTaskInstanceData");
static_assert(sizeof(FFortAthenaAddGameplayTagsStateTreeTaskInstanceData) == 0x000028, "Wrong size on FFortAthenaAddGameplayTagsStateTreeTaskInstanceData");
static_assert(offsetof(FFortAthenaAddGameplayTagsStateTreeTaskInstanceData, Actor) == 0x000000, "Member 'FFortAthenaAddGameplayTagsStateTreeTaskInstanceData::Actor' has a wrong offset!");
static_assert(offsetof(FFortAthenaAddGameplayTagsStateTreeTaskInstanceData, Tags) == 0x000008, "Member 'FFortAthenaAddGameplayTagsStateTreeTaskInstanceData::Tags' has a wrong offset!");

struct FFortAthenaAddGameplayTagsStateTreeTask final : public FStateTreeTaskCommonBase
{
public:
	bool                                          bReplicateChange;
	uint8                                         Pad_21[0x3];
	EFortAthenaStateTreeTaskFeatureExecutionMode  AddExecutionMode;
	EFortAthenaStateTreeTaskFeatureExecutionMode  RemoveExecutionMode;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FFortAthenaAddGameplayTagsStateTreeTask) == 0x000008, "Wrong alignment on FFortAthenaAddGameplayTagsStateTreeTask");
static_assert(sizeof(FFortAthenaAddGameplayTagsStateTreeTask) == 0x000030, "Wrong size on FFortAthenaAddGameplayTagsStateTreeTask");
static_assert(offsetof(FFortAthenaAddGameplayTagsStateTreeTask, bReplicateChange) == 0x000020, "Member 'FFortAthenaAddGameplayTagsStateTreeTask::bReplicateChange' has a wrong offset!");
static_assert(offsetof(FFortAthenaAddGameplayTagsStateTreeTask, AddExecutionMode) == 0x000024, "Member 'FFortAthenaAddGameplayTagsStateTreeTask::AddExecutionMode' has a wrong offset!");
static_assert(offsetof(FFortAthenaAddGameplayTagsStateTreeTask, RemoveExecutionMode) == 0x000028, "Member 'FFortAthenaAddGameplayTagsStateTreeTask::RemoveExecutionMode' has a wrong offset!");

struct FFortAthenaArithmeticStateTreeTask : public FStateTreeTaskCommonBase
{
public:
	EGameplayInteractionTaskTrigger               OperationTrigger;
	EFortAthenaArithmeticOperation                Operation;
	uint8                                         Pad_22[0x6];
};
static_assert(alignof(FFortAthenaArithmeticStateTreeTask) == 0x000008, "Wrong alignment on FFortAthenaArithmeticStateTreeTask");
static_assert(sizeof(FFortAthenaArithmeticStateTreeTask) == 0x000028, "Wrong size on FFortAthenaArithmeticStateTreeTask");
static_assert(offsetof(FFortAthenaArithmeticStateTreeTask, OperationTrigger) == 0x000020, "Member 'FFortAthenaArithmeticStateTreeTask::OperationTrigger' has a wrong offset!");
static_assert(offsetof(FFortAthenaArithmeticStateTreeTask, Operation) == 0x000021, "Member 'FFortAthenaArithmeticStateTreeTask::Operation' has a wrong offset!");

struct FFortAthenaIntArithmeticStateTreeTaskInstanceData final
{
public:
	int32                                         FirstOperand;
	int32                                         SecondOperand;
	struct FStateTreeStructRef                    ReferencedResult;
};
static_assert(alignof(FFortAthenaIntArithmeticStateTreeTaskInstanceData) == 0x000008, "Wrong alignment on FFortAthenaIntArithmeticStateTreeTaskInstanceData");
static_assert(sizeof(FFortAthenaIntArithmeticStateTreeTaskInstanceData) == 0x000018, "Wrong size on FFortAthenaIntArithmeticStateTreeTaskInstanceData");
static_assert(offsetof(FFortAthenaIntArithmeticStateTreeTaskInstanceData, FirstOperand) == 0x000000, "Member 'FFortAthenaIntArithmeticStateTreeTaskInstanceData::FirstOperand' has a wrong offset!");
static_assert(offsetof(FFortAthenaIntArithmeticStateTreeTaskInstanceData, SecondOperand) == 0x000004, "Member 'FFortAthenaIntArithmeticStateTreeTaskInstanceData::SecondOperand' has a wrong offset!");
static_assert(offsetof(FFortAthenaIntArithmeticStateTreeTaskInstanceData, ReferencedResult) == 0x000008, "Member 'FFortAthenaIntArithmeticStateTreeTaskInstanceData::ReferencedResult' has a wrong offset!");

struct FFortAthenaIntArithmeticStateTreeTask final : public FFortAthenaArithmeticStateTreeTask
{
};
static_assert(alignof(FFortAthenaIntArithmeticStateTreeTask) == 0x000008, "Wrong alignment on FFortAthenaIntArithmeticStateTreeTask");
static_assert(sizeof(FFortAthenaIntArithmeticStateTreeTask) == 0x000028, "Wrong size on FFortAthenaIntArithmeticStateTreeTask");

struct FFortAthenaFocusAtStateTreeTaskInstanceData final
{
public:
	class AActor*                                 Actor;
	class AActor*                                 FocusActor;
	struct FVector                                FocusActorOffset;
	struct FVector                                FocusWorldPoint;
	bool                                          bSetBackOnExit;
	uint8                                         Pad_41[0x4F];
};
static_assert(alignof(FFortAthenaFocusAtStateTreeTaskInstanceData) == 0x000008, "Wrong alignment on FFortAthenaFocusAtStateTreeTaskInstanceData");
static_assert(sizeof(FFortAthenaFocusAtStateTreeTaskInstanceData) == 0x000090, "Wrong size on FFortAthenaFocusAtStateTreeTaskInstanceData");
static_assert(offsetof(FFortAthenaFocusAtStateTreeTaskInstanceData, Actor) == 0x000000, "Member 'FFortAthenaFocusAtStateTreeTaskInstanceData::Actor' has a wrong offset!");
static_assert(offsetof(FFortAthenaFocusAtStateTreeTaskInstanceData, FocusActor) == 0x000008, "Member 'FFortAthenaFocusAtStateTreeTaskInstanceData::FocusActor' has a wrong offset!");
static_assert(offsetof(FFortAthenaFocusAtStateTreeTaskInstanceData, FocusActorOffset) == 0x000010, "Member 'FFortAthenaFocusAtStateTreeTaskInstanceData::FocusActorOffset' has a wrong offset!");
static_assert(offsetof(FFortAthenaFocusAtStateTreeTaskInstanceData, FocusWorldPoint) == 0x000028, "Member 'FFortAthenaFocusAtStateTreeTaskInstanceData::FocusWorldPoint' has a wrong offset!");
static_assert(offsetof(FFortAthenaFocusAtStateTreeTaskInstanceData, bSetBackOnExit) == 0x000040, "Member 'FFortAthenaFocusAtStateTreeTaskInstanceData::bSetBackOnExit' has a wrong offset!");

struct FFortAthenaFocusAtStateTreeTask final : public FStateTreeTaskCommonBase
{
};
static_assert(alignof(FFortAthenaFocusAtStateTreeTask) == 0x000008, "Wrong alignment on FFortAthenaFocusAtStateTreeTask");
static_assert(sizeof(FFortAthenaFocusAtStateTreeTask) == 0x000020, "Wrong size on FFortAthenaFocusAtStateTreeTask");

struct FFortAthenaIntStateTreeParameter final
{
public:
	int32                                         Int;
};
static_assert(alignof(FFortAthenaIntStateTreeParameter) == 0x000004, "Wrong alignment on FFortAthenaIntStateTreeParameter");
static_assert(sizeof(FFortAthenaIntStateTreeParameter) == 0x000004, "Wrong size on FFortAthenaIntStateTreeParameter");
static_assert(offsetof(FFortAthenaIntStateTreeParameter, Int) == 0x000000, "Member 'FFortAthenaIntStateTreeParameter::Int' has a wrong offset!");

struct FFortAthenaMakeIntVariableStateTreeTaskInstanceData final
{
public:
	int32                                         DefaultIntValue;
	struct FFortAthenaIntStateTreeParameter       OutInt;
};
static_assert(alignof(FFortAthenaMakeIntVariableStateTreeTaskInstanceData) == 0x000004, "Wrong alignment on FFortAthenaMakeIntVariableStateTreeTaskInstanceData");
static_assert(sizeof(FFortAthenaMakeIntVariableStateTreeTaskInstanceData) == 0x000008, "Wrong size on FFortAthenaMakeIntVariableStateTreeTaskInstanceData");
static_assert(offsetof(FFortAthenaMakeIntVariableStateTreeTaskInstanceData, DefaultIntValue) == 0x000000, "Member 'FFortAthenaMakeIntVariableStateTreeTaskInstanceData::DefaultIntValue' has a wrong offset!");
static_assert(offsetof(FFortAthenaMakeIntVariableStateTreeTaskInstanceData, OutInt) == 0x000004, "Member 'FFortAthenaMakeIntVariableStateTreeTaskInstanceData::OutInt' has a wrong offset!");

struct FFortAthenaMakeIntVariableStateTreeTask final : public FStateTreeTaskCommonBase
{
public:
	bool                                          bResetOnReselect;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FFortAthenaMakeIntVariableStateTreeTask) == 0x000008, "Wrong alignment on FFortAthenaMakeIntVariableStateTreeTask");
static_assert(sizeof(FFortAthenaMakeIntVariableStateTreeTask) == 0x000028, "Wrong size on FFortAthenaMakeIntVariableStateTreeTask");
static_assert(offsetof(FFortAthenaMakeIntVariableStateTreeTask, bResetOnReselect) == 0x000020, "Member 'FFortAthenaMakeIntVariableStateTreeTask::bResetOnReselect' has a wrong offset!");

struct FFortAthenaPlayContextualAnimStateTreeTask final : public FStateTreeTaskCommonBase
{
};
static_assert(alignof(FFortAthenaPlayContextualAnimStateTreeTask) == 0x000008, "Wrong alignment on FFortAthenaPlayContextualAnimStateTreeTask");
static_assert(sizeof(FFortAthenaPlayContextualAnimStateTreeTask) == 0x000020, "Wrong size on FFortAthenaPlayContextualAnimStateTreeTask");

struct alignas(0x04) FFortAthenaPlayInteractionStateTreeTaskActorInfo final
{
public:
	uint8                                         Pad_0[0x24];
};
static_assert(alignof(FFortAthenaPlayInteractionStateTreeTaskActorInfo) == 0x000004, "Wrong alignment on FFortAthenaPlayInteractionStateTreeTaskActorInfo");
static_assert(sizeof(FFortAthenaPlayInteractionStateTreeTaskActorInfo) == 0x000024, "Wrong size on FFortAthenaPlayInteractionStateTreeTaskActorInfo");

struct FFortAthenaStateTreeCrouchTaskInstanceData final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(FFortAthenaStateTreeCrouchTaskInstanceData) == 0x000008, "Wrong alignment on FFortAthenaStateTreeCrouchTaskInstanceData");
static_assert(sizeof(FFortAthenaStateTreeCrouchTaskInstanceData) == 0x000008, "Wrong size on FFortAthenaStateTreeCrouchTaskInstanceData");
static_assert(offsetof(FFortAthenaStateTreeCrouchTaskInstanceData, Actor) == 0x000000, "Member 'FFortAthenaStateTreeCrouchTaskInstanceData::Actor' has a wrong offset!");

struct FFortAthenaStateTreeCrouchTask final : public FStateTreeTaskCommonBase
{
};
static_assert(alignof(FFortAthenaStateTreeCrouchTask) == 0x000008, "Wrong alignment on FFortAthenaStateTreeCrouchTask");
static_assert(sizeof(FFortAthenaStateTreeCrouchTask) == 0x000020, "Wrong size on FFortAthenaStateTreeCrouchTask");

struct FFortAthenaStateTreeInteractTaskInstanceData final
{
public:
	ETInteractionType                             InteractType;
	uint8                                         Pad_1[0x7];
	class AActor*                                 Actor;
	class AActor*                                 InteractTargetActor;
	float                                         InteractDuration;
	float                                         Timer;
};
static_assert(alignof(FFortAthenaStateTreeInteractTaskInstanceData) == 0x000008, "Wrong alignment on FFortAthenaStateTreeInteractTaskInstanceData");
static_assert(sizeof(FFortAthenaStateTreeInteractTaskInstanceData) == 0x000020, "Wrong size on FFortAthenaStateTreeInteractTaskInstanceData");
static_assert(offsetof(FFortAthenaStateTreeInteractTaskInstanceData, InteractType) == 0x000000, "Member 'FFortAthenaStateTreeInteractTaskInstanceData::InteractType' has a wrong offset!");
static_assert(offsetof(FFortAthenaStateTreeInteractTaskInstanceData, Actor) == 0x000008, "Member 'FFortAthenaStateTreeInteractTaskInstanceData::Actor' has a wrong offset!");
static_assert(offsetof(FFortAthenaStateTreeInteractTaskInstanceData, InteractTargetActor) == 0x000010, "Member 'FFortAthenaStateTreeInteractTaskInstanceData::InteractTargetActor' has a wrong offset!");
static_assert(offsetof(FFortAthenaStateTreeInteractTaskInstanceData, InteractDuration) == 0x000018, "Member 'FFortAthenaStateTreeInteractTaskInstanceData::InteractDuration' has a wrong offset!");
static_assert(offsetof(FFortAthenaStateTreeInteractTaskInstanceData, Timer) == 0x00001C, "Member 'FFortAthenaStateTreeInteractTaskInstanceData::Timer' has a wrong offset!");

struct FFortAthenaStateTreeInteractTask final : public FStateTreeTaskCommonBase
{
};
static_assert(alignof(FFortAthenaStateTreeInteractTask) == 0x000008, "Wrong alignment on FFortAthenaStateTreeInteractTask");
static_assert(sizeof(FFortAthenaStateTreeInteractTask) == 0x000020, "Wrong size on FFortAthenaStateTreeInteractTask");

struct FFortAthenaStateTreeLookAroundTaskInstanceData final
{
public:
	class AActor*                                 Actor;
	float                                         LookAtDurationMin;
	float                                         LookAtDurationMax;
	float                                         LookAtDuration;
	float                                         Timer;
};
static_assert(alignof(FFortAthenaStateTreeLookAroundTaskInstanceData) == 0x000008, "Wrong alignment on FFortAthenaStateTreeLookAroundTaskInstanceData");
static_assert(sizeof(FFortAthenaStateTreeLookAroundTaskInstanceData) == 0x000018, "Wrong size on FFortAthenaStateTreeLookAroundTaskInstanceData");
static_assert(offsetof(FFortAthenaStateTreeLookAroundTaskInstanceData, Actor) == 0x000000, "Member 'FFortAthenaStateTreeLookAroundTaskInstanceData::Actor' has a wrong offset!");
static_assert(offsetof(FFortAthenaStateTreeLookAroundTaskInstanceData, LookAtDurationMin) == 0x000008, "Member 'FFortAthenaStateTreeLookAroundTaskInstanceData::LookAtDurationMin' has a wrong offset!");
static_assert(offsetof(FFortAthenaStateTreeLookAroundTaskInstanceData, LookAtDurationMax) == 0x00000C, "Member 'FFortAthenaStateTreeLookAroundTaskInstanceData::LookAtDurationMax' has a wrong offset!");
static_assert(offsetof(FFortAthenaStateTreeLookAroundTaskInstanceData, LookAtDuration) == 0x000010, "Member 'FFortAthenaStateTreeLookAroundTaskInstanceData::LookAtDuration' has a wrong offset!");
static_assert(offsetof(FFortAthenaStateTreeLookAroundTaskInstanceData, Timer) == 0x000014, "Member 'FFortAthenaStateTreeLookAroundTaskInstanceData::Timer' has a wrong offset!");

struct FFortAthenaStateTreeLookAroundTask final : public FStateTreeTaskCommonBase
{
};
static_assert(alignof(FFortAthenaStateTreeLookAroundTask) == 0x000008, "Wrong alignment on FFortAthenaStateTreeLookAroundTask");
static_assert(sizeof(FFortAthenaStateTreeLookAroundTask) == 0x000020, "Wrong size on FFortAthenaStateTreeLookAroundTask");

struct FFortAthenaTeleportToActorStateTreeTaskInstanceData final
{
public:
	class AActor*                                 Actor;
	class AActor*                                 TargetActor;
	struct FVector                                TeleportRelativeLocation;
	struct FRotator                               TeleportRelativeRotation;
};
static_assert(alignof(FFortAthenaTeleportToActorStateTreeTaskInstanceData) == 0x000008, "Wrong alignment on FFortAthenaTeleportToActorStateTreeTaskInstanceData");
static_assert(sizeof(FFortAthenaTeleportToActorStateTreeTaskInstanceData) == 0x000040, "Wrong size on FFortAthenaTeleportToActorStateTreeTaskInstanceData");
static_assert(offsetof(FFortAthenaTeleportToActorStateTreeTaskInstanceData, Actor) == 0x000000, "Member 'FFortAthenaTeleportToActorStateTreeTaskInstanceData::Actor' has a wrong offset!");
static_assert(offsetof(FFortAthenaTeleportToActorStateTreeTaskInstanceData, TargetActor) == 0x000008, "Member 'FFortAthenaTeleportToActorStateTreeTaskInstanceData::TargetActor' has a wrong offset!");
static_assert(offsetof(FFortAthenaTeleportToActorStateTreeTaskInstanceData, TeleportRelativeLocation) == 0x000010, "Member 'FFortAthenaTeleportToActorStateTreeTaskInstanceData::TeleportRelativeLocation' has a wrong offset!");
static_assert(offsetof(FFortAthenaTeleportToActorStateTreeTaskInstanceData, TeleportRelativeRotation) == 0x000028, "Member 'FFortAthenaTeleportToActorStateTreeTaskInstanceData::TeleportRelativeRotation' has a wrong offset!");

struct FFortAthenaTeleportToActorStateTreeTask final : public FStateTreeTaskCommonBase
{
};
static_assert(alignof(FFortAthenaTeleportToActorStateTreeTask) == 0x000008, "Wrong alignment on FFortAthenaTeleportToActorStateTreeTask");
static_assert(sizeof(FFortAthenaTeleportToActorStateTreeTask) == 0x000020, "Wrong size on FFortAthenaTeleportToActorStateTreeTask");

struct FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData final
{
public:
	class AActor*                                 Actor;
	class AActor*                                 TargetActor;
	TArray<TSubclassOf<class UGameplayEffect>>    GameplayEffectClassesToAdd;
	bool                                          bAutomaticallyRemoveAddedEffectsOnExit;
	uint8                                         Pad_21[0x7];
	TArray<TSubclassOf<class UGameplayEffect>>    GameplayEffectClassesToRemove;
	struct FGameplayTagContainer                  GameplayEffectsByTagsToRemove;
	struct FGameplayTagContainer                  GameplayEffectsBySourceTagsToRemove;
	struct FGameplayTagContainer                  GameplayEffectsByAppliedTagsToRemove;
	struct FGameplayTagContainer                  GameplayEffectsByGrantedTagsToRemove;
	uint8                                         Pad_B8[0x10];
};
static_assert(alignof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData) == 0x000008, "Wrong alignment on FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData");
static_assert(sizeof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData) == 0x0000C8, "Wrong size on FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, Actor) == 0x000000, "Member 'FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::Actor' has a wrong offset!");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, TargetActor) == 0x000008, "Member 'FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::TargetActor' has a wrong offset!");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, GameplayEffectClassesToAdd) == 0x000010, "Member 'FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::GameplayEffectClassesToAdd' has a wrong offset!");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, bAutomaticallyRemoveAddedEffectsOnExit) == 0x000020, "Member 'FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::bAutomaticallyRemoveAddedEffectsOnExit' has a wrong offset!");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, GameplayEffectClassesToRemove) == 0x000028, "Member 'FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::GameplayEffectClassesToRemove' has a wrong offset!");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, GameplayEffectsByTagsToRemove) == 0x000038, "Member 'FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::GameplayEffectsByTagsToRemove' has a wrong offset!");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, GameplayEffectsBySourceTagsToRemove) == 0x000058, "Member 'FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::GameplayEffectsBySourceTagsToRemove' has a wrong offset!");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, GameplayEffectsByAppliedTagsToRemove) == 0x000078, "Member 'FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::GameplayEffectsByAppliedTagsToRemove' has a wrong offset!");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, GameplayEffectsByGrantedTagsToRemove) == 0x000098, "Member 'FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::GameplayEffectsByGrantedTagsToRemove' has a wrong offset!");

struct FFortAthenaToggleGameplayEffectStateTreeTask final : public FStateTreeTaskCommonBase
{
public:
	EFortAthenaStateTreeTaskFeatureExecutionMode  AddExecutionMode;
	EFortAthenaStateTreeTaskFeatureExecutionMode  RemoveExecutionMode;
};
static_assert(alignof(FFortAthenaToggleGameplayEffectStateTreeTask) == 0x000008, "Wrong alignment on FFortAthenaToggleGameplayEffectStateTreeTask");
static_assert(sizeof(FFortAthenaToggleGameplayEffectStateTreeTask) == 0x000028, "Wrong size on FFortAthenaToggleGameplayEffectStateTreeTask");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTask, AddExecutionMode) == 0x000020, "Member 'FFortAthenaToggleGameplayEffectStateTreeTask::AddExecutionMode' has a wrong offset!");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTask, RemoveExecutionMode) == 0x000024, "Member 'FFortAthenaToggleGameplayEffectStateTreeTask::RemoveExecutionMode' has a wrong offset!");

}
