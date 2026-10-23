#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "StateTreeModule_structs.hpp"
#include "SmartObjectsModule_structs.hpp"
#include "StructUtils_structs.hpp"

namespace SDK
{

enum class EGameplayTaskActuationResult : uint8
{
	None                                     = 0,
	RequestFailed                            = 1,
	Failed                                   = 2,
	Succeeded                                = 3,
	EGameplayTaskActuationResult_MAX         = 4,
};

enum class EGameplayTransitionResult : uint8
{
	Cancelled                                = 0,
	Succeeded                                = 1,
	Failed                                   = 2,
	EGameplayTransitionResult_MAX            = 3,
};

enum class EGameplayInteractionAbortReason : uint8
{
	Unset                                    = 0,
	ExternalAbort                            = 1,
	InternalAbort                            = 2,
	EGameplayInteractionAbortReason_MAX      = 3,
};

enum class EGameplayInteractionModifyGameplayTagOperation : uint8
{
	Add                                      = 0,
	Remove                                   = 1,
	EGameplayInteractionModifyGameplayTagOperation_MAX = 2,
};

enum class EGameplayInteractionTaskModify : uint8
{
	OnEnterStateUndoOnExitState              = 0,
	OnEnterState                             = 1,
	OnExitState                              = 2,
	OnExitStateFailed                        = 3,
	OnExitStateSucceeded                     = 4,
	EGameplayInteractionTaskModify_MAX       = 5,
};

enum class EGameplayInteractionTaskTrigger : uint8
{
	OnEnterState                             = 0,
	OnExitState                              = 1,
	OnExitStateSucceeded                     = 2,
	OnExitStateFailed                        = 3,
	EGameplayInteractionTaskTrigger_MAX      = 4,
};

enum class EGameplayTaskMoveToIntent : uint8
{
	Stop                                     = 0,
	KeepMoving                               = 1,
	EGameplayTaskMoveToIntent_MAX            = 2,
};

enum class EPlayContextualAnimExitMode : uint8
{
	DefaultExit                              = 0,
	FastExit                                 = 1,
	Teleport                                 = 2,
	EPlayContextualAnimExitMode_MAX          = 3,
};

enum class EPlayContextualAnimStatus : uint8
{
	Unset                                    = 0,
	Playing                                  = 1,
	DonePlaying                              = 2,
	Failed                                   = 3,
	EPlayContextualAnimStatus_MAX            = 4,
};

enum class EGameplayInteractionMatchSlotTagSource : uint8
{
	ActivityTags                             = 0,
	RuntimeTags                              = 1,
	EGameplayInteractionMatchSlotTagSource_MAX = 2,
};

enum class EGameplayInteractionSlotReferenceType : uint8
{
	ByActivityTag                            = 0,
	ByLinkTag                                = 1,
	EGameplayInteractionSlotReferenceType_MAX = 2,
};

enum class EGameplayInteractionSyncSlotTransitionState : uint8
{
	WaitingForFromTag                        = 0,
	WaitingForToTag                          = 1,
	Completed                                = 2,
	EGameplayInteractionSyncSlotTransitionState_MAX = 3,
};

struct FGameplayActuationStateBase
{
public:
	uint8                                         Pad_0[0x8];
	class FName                                   ActuationName;
	uint8                                         Pad_C[0x4];
	struct FVector                                NavigationLocation;
};
static_assert(alignof(FGameplayActuationStateBase) == 0x000008, "Wrong alignment on FGameplayActuationStateBase");
static_assert(sizeof(FGameplayActuationStateBase) == 0x000028, "Wrong size on FGameplayActuationStateBase");
static_assert(offsetof(FGameplayActuationStateBase, ActuationName) == 0x000008, "Member 'FGameplayActuationStateBase::ActuationName' has a wrong offset!");
static_assert(offsetof(FGameplayActuationStateBase, NavigationLocation) == 0x000010, "Member 'FGameplayActuationStateBase::NavigationLocation' has a wrong offset!");

struct FGameplayActuationPredictedLocation final
{
public:
	struct FVector                                Location;
	struct FVector3f                              Direction;
	float                                         Time;
	float                                         Speed;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FGameplayActuationPredictedLocation) == 0x000008, "Wrong alignment on FGameplayActuationPredictedLocation");
static_assert(sizeof(FGameplayActuationPredictedLocation) == 0x000030, "Wrong size on FGameplayActuationPredictedLocation");
static_assert(offsetof(FGameplayActuationPredictedLocation, Location) == 0x000000, "Member 'FGameplayActuationPredictedLocation::Location' has a wrong offset!");
static_assert(offsetof(FGameplayActuationPredictedLocation, Direction) == 0x000018, "Member 'FGameplayActuationPredictedLocation::Direction' has a wrong offset!");
static_assert(offsetof(FGameplayActuationPredictedLocation, Time) == 0x000024, "Member 'FGameplayActuationPredictedLocation::Time' has a wrong offset!");
static_assert(offsetof(FGameplayActuationPredictedLocation, Speed) == 0x000028, "Member 'FGameplayActuationPredictedLocation::Speed' has a wrong offset!");

struct FGameplayActuationState_Moving : public FGameplayActuationStateBase
{
public:
	struct FVector3f                              HeadingDirection;
	uint8                                         Pad_34[0x4];
	struct FGameplayActuationPredictedLocation    Prediction;
	uint8                                         Pad_68[0x20];
};
static_assert(alignof(FGameplayActuationState_Moving) == 0x000008, "Wrong alignment on FGameplayActuationState_Moving");
static_assert(sizeof(FGameplayActuationState_Moving) == 0x000088, "Wrong size on FGameplayActuationState_Moving");
static_assert(offsetof(FGameplayActuationState_Moving, HeadingDirection) == 0x000028, "Member 'FGameplayActuationState_Moving::HeadingDirection' has a wrong offset!");
static_assert(offsetof(FGameplayActuationState_Moving, Prediction) == 0x000038, "Member 'FGameplayActuationState_Moving::Prediction' has a wrong offset!");

struct FGameplayActuationState_Standing final : public FGameplayActuationState_Moving
{
};
static_assert(alignof(FGameplayActuationState_Standing) == 0x000008, "Wrong alignment on FGameplayActuationState_Standing");
static_assert(sizeof(FGameplayActuationState_Standing) == 0x000088, "Wrong size on FGameplayActuationState_Standing");

struct FGameplayActuationState_MovingTransition final : public FGameplayActuationState_Moving
{
};
static_assert(alignof(FGameplayActuationState_MovingTransition) == 0x000008, "Wrong alignment on FGameplayActuationState_MovingTransition");
static_assert(sizeof(FGameplayActuationState_MovingTransition) == 0x000088, "Wrong size on FGameplayActuationState_MovingTransition");

struct alignas(0x08) FGameplayTransitionDesc
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FGameplayTransitionDesc) == 0x000008, "Wrong alignment on FGameplayTransitionDesc");
static_assert(sizeof(FGameplayTransitionDesc) == 0x000008, "Wrong size on FGameplayTransitionDesc");

struct FGameplayInteractionAbortContext final
{
public:
	EGameplayInteractionAbortReason               Reason;
};
static_assert(alignof(FGameplayInteractionAbortContext) == 0x000001, "Wrong alignment on FGameplayInteractionAbortContext");
static_assert(sizeof(FGameplayInteractionAbortContext) == 0x000001, "Wrong size on FGameplayInteractionAbortContext");
static_assert(offsetof(FGameplayInteractionAbortContext, Reason) == 0x000000, "Member 'FGameplayInteractionAbortContext::Reason' has a wrong offset!");

struct FGameplayInteractionContext final
{
public:
	struct FStateTreeInstanceData                 StateTreeInstanceData;
	struct FSmartObjectClaimHandle                ClaimedHandle;
	struct FGameplayInteractionAbortContext       AbortContext;
	uint8                                         Pad_29[0x7];
	class AActor*                                 ContextActor;
	class AActor*                                 SmartObjectActor;
	class UGameplayInteractionSmartObjectBehaviorDefinition* Definition;
};
static_assert(alignof(FGameplayInteractionContext) == 0x000008, "Wrong alignment on FGameplayInteractionContext");
static_assert(sizeof(FGameplayInteractionContext) == 0x000048, "Wrong size on FGameplayInteractionContext");
static_assert(offsetof(FGameplayInteractionContext, StateTreeInstanceData) == 0x000000, "Member 'FGameplayInteractionContext::StateTreeInstanceData' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionContext, ClaimedHandle) == 0x000010, "Member 'FGameplayInteractionContext::ClaimedHandle' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionContext, AbortContext) == 0x000028, "Member 'FGameplayInteractionContext::AbortContext' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionContext, ContextActor) == 0x000030, "Member 'FGameplayInteractionContext::ContextActor' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionContext, SmartObjectActor) == 0x000038, "Member 'FGameplayInteractionContext::SmartObjectActor' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionContext, Definition) == 0x000040, "Member 'FGameplayInteractionContext::Definition' has a wrong offset!");

struct alignas(0x04) FGameplayInteractionSlotUserData final : public FSmartObjectSlotStateData
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FGameplayInteractionSlotUserData) == 0x000004, "Wrong alignment on FGameplayInteractionSlotUserData");
static_assert(sizeof(FGameplayInteractionSlotUserData) == 0x000008, "Wrong size on FGameplayInteractionSlotUserData");

struct FGameplayInteractionStateTreeTask : public FStateTreeTaskBase
{
};
static_assert(alignof(FGameplayInteractionStateTreeTask) == 0x000008, "Wrong alignment on FGameplayInteractionStateTreeTask");
static_assert(sizeof(FGameplayInteractionStateTreeTask) == 0x000020, "Wrong size on FGameplayInteractionStateTreeTask");

struct FGameplayInteractionStateTreeCondition : public FStateTreeConditionBase
{
};
static_assert(alignof(FGameplayInteractionStateTreeCondition) == 0x000008, "Wrong alignment on FGameplayInteractionStateTreeCondition");
static_assert(sizeof(FGameplayInteractionStateTreeCondition) == 0x000020, "Wrong size on FGameplayInteractionStateTreeCondition");

struct FGameplayTransitionDesc_MoveToStand final : public FGameplayTransitionDesc
{
};
static_assert(alignof(FGameplayTransitionDesc_MoveToStand) == 0x000008, "Wrong alignment on FGameplayTransitionDesc_MoveToStand");
static_assert(sizeof(FGameplayTransitionDesc_MoveToStand) == 0x000008, "Wrong size on FGameplayTransitionDesc_MoveToStand");

struct FGameplayActuationState_ContextualAnim final : public FGameplayActuationStateBase
{
public:
	class FName                                   InteractorRole;
	uint8                                         Pad_2C[0x4];
	class AActor*                                 InteractableObject;
	class FName                                   InteractableObjectRole;
	class FName                                   SectionName;
	class FName                                   ExitSectionName;
	uint8                                         Pad_44[0x4];
	class UContextualAnimSceneAsset*              SceneAsset;
	class UContextualAnimSceneInstance*           SceneInstance;
};
static_assert(alignof(FGameplayActuationState_ContextualAnim) == 0x000008, "Wrong alignment on FGameplayActuationState_ContextualAnim");
static_assert(sizeof(FGameplayActuationState_ContextualAnim) == 0x000058, "Wrong size on FGameplayActuationState_ContextualAnim");
static_assert(offsetof(FGameplayActuationState_ContextualAnim, InteractorRole) == 0x000028, "Member 'FGameplayActuationState_ContextualAnim::InteractorRole' has a wrong offset!");
static_assert(offsetof(FGameplayActuationState_ContextualAnim, InteractableObject) == 0x000030, "Member 'FGameplayActuationState_ContextualAnim::InteractableObject' has a wrong offset!");
static_assert(offsetof(FGameplayActuationState_ContextualAnim, InteractableObjectRole) == 0x000038, "Member 'FGameplayActuationState_ContextualAnim::InteractableObjectRole' has a wrong offset!");
static_assert(offsetof(FGameplayActuationState_ContextualAnim, SectionName) == 0x00003C, "Member 'FGameplayActuationState_ContextualAnim::SectionName' has a wrong offset!");
static_assert(offsetof(FGameplayActuationState_ContextualAnim, ExitSectionName) == 0x000040, "Member 'FGameplayActuationState_ContextualAnim::ExitSectionName' has a wrong offset!");
static_assert(offsetof(FGameplayActuationState_ContextualAnim, SceneAsset) == 0x000048, "Member 'FGameplayActuationState_ContextualAnim::SceneAsset' has a wrong offset!");
static_assert(offsetof(FGameplayActuationState_ContextualAnim, SceneInstance) == 0x000050, "Member 'FGameplayActuationState_ContextualAnim::SceneInstance' has a wrong offset!");

struct FGameplayTransitionDesc_EnterContextualAnim final : public FGameplayTransitionDesc
{
};
static_assert(alignof(FGameplayTransitionDesc_EnterContextualAnim) == 0x000008, "Wrong alignment on FGameplayTransitionDesc_EnterContextualAnim");
static_assert(sizeof(FGameplayTransitionDesc_EnterContextualAnim) == 0x000008, "Wrong size on FGameplayTransitionDesc_EnterContextualAnim");

struct FGameplayTransitionDesc_ExitContextualAnim final : public FGameplayTransitionDesc
{
};
static_assert(alignof(FGameplayTransitionDesc_ExitContextualAnim) == 0x000008, "Wrong alignment on FGameplayTransitionDesc_ExitContextualAnim");
static_assert(sizeof(FGameplayTransitionDesc_ExitContextualAnim) == 0x000008, "Wrong size on FGameplayTransitionDesc_ExitContextualAnim");

struct FGameplayTransitionDesc_StandToMove final : public FGameplayTransitionDesc
{
};
static_assert(alignof(FGameplayTransitionDesc_StandToMove) == 0x000008, "Wrong alignment on FGameplayTransitionDesc_StandToMove");
static_assert(sizeof(FGameplayTransitionDesc_StandToMove) == 0x000008, "Wrong size on FGameplayTransitionDesc_StandToMove");

struct FGameplayTransitionDesc_SuddenTurn final : public FGameplayTransitionDesc
{
};
static_assert(alignof(FGameplayTransitionDesc_SuddenTurn) == 0x000008, "Wrong alignment on FGameplayTransitionDesc_SuddenTurn");
static_assert(sizeof(FGameplayTransitionDesc_SuddenTurn) == 0x000008, "Wrong size on FGameplayTransitionDesc_SuddenTurn");

struct FContextualAnimStateTreeTaskInstanceData final
{
public:
	class AActor*                                 Actor;
	class UContextualAnimSceneAsset*              ContextualAnimAsset;
	class AActor*                                 InteractableObject;
	class UGameplayTask_PlayContextualAnim*       Task;
	float                                         Duration;
	float                                         Time;
	class FName                                   InteractorRole;
	class FName                                   InteractableObjectRole;
	struct FGameplayInteractionAbortContext       AbortContext;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FContextualAnimStateTreeTaskInstanceData) == 0x000008, "Wrong alignment on FContextualAnimStateTreeTaskInstanceData");
static_assert(sizeof(FContextualAnimStateTreeTaskInstanceData) == 0x000038, "Wrong size on FContextualAnimStateTreeTaskInstanceData");
static_assert(offsetof(FContextualAnimStateTreeTaskInstanceData, Actor) == 0x000000, "Member 'FContextualAnimStateTreeTaskInstanceData::Actor' has a wrong offset!");
static_assert(offsetof(FContextualAnimStateTreeTaskInstanceData, ContextualAnimAsset) == 0x000008, "Member 'FContextualAnimStateTreeTaskInstanceData::ContextualAnimAsset' has a wrong offset!");
static_assert(offsetof(FContextualAnimStateTreeTaskInstanceData, InteractableObject) == 0x000010, "Member 'FContextualAnimStateTreeTaskInstanceData::InteractableObject' has a wrong offset!");
static_assert(offsetof(FContextualAnimStateTreeTaskInstanceData, Task) == 0x000018, "Member 'FContextualAnimStateTreeTaskInstanceData::Task' has a wrong offset!");
static_assert(offsetof(FContextualAnimStateTreeTaskInstanceData, Duration) == 0x000020, "Member 'FContextualAnimStateTreeTaskInstanceData::Duration' has a wrong offset!");
static_assert(offsetof(FContextualAnimStateTreeTaskInstanceData, Time) == 0x000024, "Member 'FContextualAnimStateTreeTaskInstanceData::Time' has a wrong offset!");
static_assert(offsetof(FContextualAnimStateTreeTaskInstanceData, InteractorRole) == 0x000028, "Member 'FContextualAnimStateTreeTaskInstanceData::InteractorRole' has a wrong offset!");
static_assert(offsetof(FContextualAnimStateTreeTaskInstanceData, InteractableObjectRole) == 0x00002C, "Member 'FContextualAnimStateTreeTaskInstanceData::InteractableObjectRole' has a wrong offset!");
static_assert(offsetof(FContextualAnimStateTreeTaskInstanceData, AbortContext) == 0x000030, "Member 'FContextualAnimStateTreeTaskInstanceData::AbortContext' has a wrong offset!");

struct FContextualAnimStateTreeTask final : public FGameplayInteractionStateTreeTask
{
public:
	class FName                                   Section;
	class FName                                   ExitSection;
	bool                                          bEnabled;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FContextualAnimStateTreeTask) == 0x000008, "Wrong alignment on FContextualAnimStateTreeTask");
static_assert(sizeof(FContextualAnimStateTreeTask) == 0x000030, "Wrong size on FContextualAnimStateTreeTask");
static_assert(offsetof(FContextualAnimStateTreeTask, Section) == 0x000020, "Member 'FContextualAnimStateTreeTask::Section' has a wrong offset!");
static_assert(offsetof(FContextualAnimStateTreeTask, ExitSection) == 0x000024, "Member 'FContextualAnimStateTreeTask::ExitSection' has a wrong offset!");
static_assert(offsetof(FContextualAnimStateTreeTask, bEnabled) == 0x000028, "Member 'FContextualAnimStateTreeTask::bEnabled' has a wrong offset!");

struct FGameplayInteractionMatchSlotTagsConditionInstanceData final
{
public:
	struct FSmartObjectSlotHandle                 Slot;
	struct FGameplayTagContainer                  TagsToMatch;
};
static_assert(alignof(FGameplayInteractionMatchSlotTagsConditionInstanceData) == 0x000008, "Wrong alignment on FGameplayInteractionMatchSlotTagsConditionInstanceData");
static_assert(sizeof(FGameplayInteractionMatchSlotTagsConditionInstanceData) == 0x000028, "Wrong size on FGameplayInteractionMatchSlotTagsConditionInstanceData");
static_assert(offsetof(FGameplayInteractionMatchSlotTagsConditionInstanceData, Slot) == 0x000000, "Member 'FGameplayInteractionMatchSlotTagsConditionInstanceData::Slot' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionMatchSlotTagsConditionInstanceData, TagsToMatch) == 0x000008, "Member 'FGameplayInteractionMatchSlotTagsConditionInstanceData::TagsToMatch' has a wrong offset!");

struct FGameplayInteractionSlotTagsMatchCondition final : public FGameplayInteractionStateTreeCondition
{
public:
	EGameplayInteractionMatchSlotTagSource        Source;
	EGameplayContainerMatchType                   MatchType;
	bool                                          bExactMatch;
	bool                                          bInvert;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FGameplayInteractionSlotTagsMatchCondition) == 0x000008, "Wrong alignment on FGameplayInteractionSlotTagsMatchCondition");
static_assert(sizeof(FGameplayInteractionSlotTagsMatchCondition) == 0x000028, "Wrong size on FGameplayInteractionSlotTagsMatchCondition");
static_assert(offsetof(FGameplayInteractionSlotTagsMatchCondition, Source) == 0x000020, "Member 'FGameplayInteractionSlotTagsMatchCondition::Source' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionSlotTagsMatchCondition, MatchType) == 0x000021, "Member 'FGameplayInteractionSlotTagsMatchCondition::MatchType' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionSlotTagsMatchCondition, bExactMatch) == 0x000022, "Member 'FGameplayInteractionSlotTagsMatchCondition::bExactMatch' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionSlotTagsMatchCondition, bInvert) == 0x000023, "Member 'FGameplayInteractionSlotTagsMatchCondition::bInvert' has a wrong offset!");

struct FGameplayInteractionQuerySlotTagsConditionInstanceData final
{
public:
	struct FSmartObjectSlotHandle                 Slot;
};
static_assert(alignof(FGameplayInteractionQuerySlotTagsConditionInstanceData) == 0x000008, "Wrong alignment on FGameplayInteractionQuerySlotTagsConditionInstanceData");
static_assert(sizeof(FGameplayInteractionQuerySlotTagsConditionInstanceData) == 0x000008, "Wrong size on FGameplayInteractionQuerySlotTagsConditionInstanceData");
static_assert(offsetof(FGameplayInteractionQuerySlotTagsConditionInstanceData, Slot) == 0x000000, "Member 'FGameplayInteractionQuerySlotTagsConditionInstanceData::Slot' has a wrong offset!");

struct FGameplayInteractionQuerySlotTagCondition final : public FGameplayInteractionStateTreeCondition
{
public:
	EGameplayInteractionMatchSlotTagSource        Source;
	uint8                                         Pad_21[0x7];
	struct FGameplayTagQuery                      TagQuery;
	bool                                          bInvert;
	uint8                                         Pad_71[0x7];
};
static_assert(alignof(FGameplayInteractionQuerySlotTagCondition) == 0x000008, "Wrong alignment on FGameplayInteractionQuerySlotTagCondition");
static_assert(sizeof(FGameplayInteractionQuerySlotTagCondition) == 0x000078, "Wrong size on FGameplayInteractionQuerySlotTagCondition");
static_assert(offsetof(FGameplayInteractionQuerySlotTagCondition, Source) == 0x000020, "Member 'FGameplayInteractionQuerySlotTagCondition::Source' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionQuerySlotTagCondition, TagQuery) == 0x000028, "Member 'FGameplayInteractionQuerySlotTagCondition::TagQuery' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionQuerySlotTagCondition, bInvert) == 0x000070, "Member 'FGameplayInteractionQuerySlotTagCondition::bInvert' has a wrong offset!");

struct FGameplayInteractionIsSlotHandleValidConditionInstanceData final
{
public:
	struct FSmartObjectSlotHandle                 Slot;
};
static_assert(alignof(FGameplayInteractionIsSlotHandleValidConditionInstanceData) == 0x000008, "Wrong alignment on FGameplayInteractionIsSlotHandleValidConditionInstanceData");
static_assert(sizeof(FGameplayInteractionIsSlotHandleValidConditionInstanceData) == 0x000008, "Wrong size on FGameplayInteractionIsSlotHandleValidConditionInstanceData");
static_assert(offsetof(FGameplayInteractionIsSlotHandleValidConditionInstanceData, Slot) == 0x000000, "Member 'FGameplayInteractionIsSlotHandleValidConditionInstanceData::Slot' has a wrong offset!");

struct FGameplayInteractionIsSlotHandleValidCondition final : public FGameplayInteractionStateTreeCondition
{
public:
	bool                                          bInvert;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FGameplayInteractionIsSlotHandleValidCondition) == 0x000008, "Wrong alignment on FGameplayInteractionIsSlotHandleValidCondition");
static_assert(sizeof(FGameplayInteractionIsSlotHandleValidCondition) == 0x000028, "Wrong size on FGameplayInteractionIsSlotHandleValidCondition");
static_assert(offsetof(FGameplayInteractionIsSlotHandleValidCondition, bInvert) == 0x000020, "Member 'FGameplayInteractionIsSlotHandleValidCondition::bInvert' has a wrong offset!");

struct FGameplayInteractionFindSlotTaskInstanceData final
{
public:
	struct FSmartObjectSlotHandle                 ReferenceSlot;
	struct FSmartObjectSlotHandle                 ResultSlot;
};
static_assert(alignof(FGameplayInteractionFindSlotTaskInstanceData) == 0x000008, "Wrong alignment on FGameplayInteractionFindSlotTaskInstanceData");
static_assert(sizeof(FGameplayInteractionFindSlotTaskInstanceData) == 0x000010, "Wrong size on FGameplayInteractionFindSlotTaskInstanceData");
static_assert(offsetof(FGameplayInteractionFindSlotTaskInstanceData, ReferenceSlot) == 0x000000, "Member 'FGameplayInteractionFindSlotTaskInstanceData::ReferenceSlot' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionFindSlotTaskInstanceData, ResultSlot) == 0x000008, "Member 'FGameplayInteractionFindSlotTaskInstanceData::ResultSlot' has a wrong offset!");

struct FGameplayInteractionFindSlotTask final : public FGameplayInteractionStateTreeTask
{
public:
	EGameplayInteractionSlotReferenceType         ReferenceType;
	uint8                                         Pad_21[0x3];
	struct FGameplayTag                           FindByTag;
	uint8                                         Pad_28[0x8];
};
static_assert(alignof(FGameplayInteractionFindSlotTask) == 0x000008, "Wrong alignment on FGameplayInteractionFindSlotTask");
static_assert(sizeof(FGameplayInteractionFindSlotTask) == 0x000030, "Wrong size on FGameplayInteractionFindSlotTask");
static_assert(offsetof(FGameplayInteractionFindSlotTask, ReferenceType) == 0x000020, "Member 'FGameplayInteractionFindSlotTask::ReferenceType' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionFindSlotTask, FindByTag) == 0x000024, "Member 'FGameplayInteractionFindSlotTask::FindByTag' has a wrong offset!");

struct FGameplayInteractionGetSlotActorTaskInstanceData final
{
public:
	struct FSmartObjectSlotHandle                 TargetSlot;
	class AActor*                                 ResultActor;
};
static_assert(alignof(FGameplayInteractionGetSlotActorTaskInstanceData) == 0x000008, "Wrong alignment on FGameplayInteractionGetSlotActorTaskInstanceData");
static_assert(sizeof(FGameplayInteractionGetSlotActorTaskInstanceData) == 0x000010, "Wrong size on FGameplayInteractionGetSlotActorTaskInstanceData");
static_assert(offsetof(FGameplayInteractionGetSlotActorTaskInstanceData, TargetSlot) == 0x000000, "Member 'FGameplayInteractionGetSlotActorTaskInstanceData::TargetSlot' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionGetSlotActorTaskInstanceData, ResultActor) == 0x000008, "Member 'FGameplayInteractionGetSlotActorTaskInstanceData::ResultActor' has a wrong offset!");

struct FGameplayInteractionGetSlotActorTask final : public FGameplayInteractionStateTreeTask
{
public:
	bool                                          bFailIfNotFound;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FGameplayInteractionGetSlotActorTask) == 0x000008, "Wrong alignment on FGameplayInteractionGetSlotActorTask");
static_assert(sizeof(FGameplayInteractionGetSlotActorTask) == 0x000028, "Wrong size on FGameplayInteractionGetSlotActorTask");
static_assert(offsetof(FGameplayInteractionGetSlotActorTask, bFailIfNotFound) == 0x000020, "Member 'FGameplayInteractionGetSlotActorTask::bFailIfNotFound' has a wrong offset!");

struct FGameplayInteractionListenSlotEventsTaskInstanceData final
{
public:
	struct FSmartObjectSlotHandle                 TargetSlot;
	uint8                                         Pad_8[0x8];
};
static_assert(alignof(FGameplayInteractionListenSlotEventsTaskInstanceData) == 0x000008, "Wrong alignment on FGameplayInteractionListenSlotEventsTaskInstanceData");
static_assert(sizeof(FGameplayInteractionListenSlotEventsTaskInstanceData) == 0x000010, "Wrong size on FGameplayInteractionListenSlotEventsTaskInstanceData");
static_assert(offsetof(FGameplayInteractionListenSlotEventsTaskInstanceData, TargetSlot) == 0x000000, "Member 'FGameplayInteractionListenSlotEventsTaskInstanceData::TargetSlot' has a wrong offset!");

struct FGameplayInteractionListenSlotEventsTask final : public FGameplayInteractionStateTreeTask
{
public:
	uint8                                         Pad_20[0x8];
};
static_assert(alignof(FGameplayInteractionListenSlotEventsTask) == 0x000008, "Wrong alignment on FGameplayInteractionListenSlotEventsTask");
static_assert(sizeof(FGameplayInteractionListenSlotEventsTask) == 0x000028, "Wrong size on FGameplayInteractionListenSlotEventsTask");

struct FGameplayInteractionModifySlotTagTaskInstanceData final
{
public:
	struct FSmartObjectSlotHandle                 TargetSlot;
	bool                                          bTagRemoved;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FGameplayInteractionModifySlotTagTaskInstanceData) == 0x000008, "Wrong alignment on FGameplayInteractionModifySlotTagTaskInstanceData");
static_assert(sizeof(FGameplayInteractionModifySlotTagTaskInstanceData) == 0x000010, "Wrong size on FGameplayInteractionModifySlotTagTaskInstanceData");
static_assert(offsetof(FGameplayInteractionModifySlotTagTaskInstanceData, TargetSlot) == 0x000000, "Member 'FGameplayInteractionModifySlotTagTaskInstanceData::TargetSlot' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionModifySlotTagTaskInstanceData, bTagRemoved) == 0x000008, "Member 'FGameplayInteractionModifySlotTagTaskInstanceData::bTagRemoved' has a wrong offset!");

struct FGameplayInteractionModifySlotTagTask final : public FGameplayInteractionStateTreeTask
{
public:
	EGameplayInteractionTaskModify                Modify;
	EGameplayInteractionModifyGameplayTagOperation Operation;
	uint8                                         Pad_22[0x2];
	struct FGameplayTag                           tag;
	uint8                                         Pad_28[0x8];
};
static_assert(alignof(FGameplayInteractionModifySlotTagTask) == 0x000008, "Wrong alignment on FGameplayInteractionModifySlotTagTask");
static_assert(sizeof(FGameplayInteractionModifySlotTagTask) == 0x000030, "Wrong size on FGameplayInteractionModifySlotTagTask");
static_assert(offsetof(FGameplayInteractionModifySlotTagTask, Modify) == 0x000020, "Member 'FGameplayInteractionModifySlotTagTask::Modify' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionModifySlotTagTask, Operation) == 0x000021, "Member 'FGameplayInteractionModifySlotTagTask::Operation' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionModifySlotTagTask, tag) == 0x000024, "Member 'FGameplayInteractionModifySlotTagTask::tag' has a wrong offset!");

struct FGameplayInteractionSendSlotEventTaskInstanceData final
{
public:
	struct FSmartObjectSlotHandle                 TargetSlot;
};
static_assert(alignof(FGameplayInteractionSendSlotEventTaskInstanceData) == 0x000008, "Wrong alignment on FGameplayInteractionSendSlotEventTaskInstanceData");
static_assert(sizeof(FGameplayInteractionSendSlotEventTaskInstanceData) == 0x000008, "Wrong size on FGameplayInteractionSendSlotEventTaskInstanceData");
static_assert(offsetof(FGameplayInteractionSendSlotEventTaskInstanceData, TargetSlot) == 0x000000, "Member 'FGameplayInteractionSendSlotEventTaskInstanceData::TargetSlot' has a wrong offset!");

struct FGameplayInteractionSendSlotEventTask final : public FGameplayInteractionStateTreeTask
{
public:
	struct FGameplayTag                           EventTag;
	uint8                                         Pad_24[0x4];
	struct FInstancedStruct                       Payload;
	EGameplayInteractionTaskTrigger               Trigger;
	bool                                          bShouldTriggerOnReselect;
	uint8                                         Pad_3A[0x6];
};
static_assert(alignof(FGameplayInteractionSendSlotEventTask) == 0x000008, "Wrong alignment on FGameplayInteractionSendSlotEventTask");
static_assert(sizeof(FGameplayInteractionSendSlotEventTask) == 0x000040, "Wrong size on FGameplayInteractionSendSlotEventTask");
static_assert(offsetof(FGameplayInteractionSendSlotEventTask, EventTag) == 0x000020, "Member 'FGameplayInteractionSendSlotEventTask::EventTag' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionSendSlotEventTask, Payload) == 0x000028, "Member 'FGameplayInteractionSendSlotEventTask::Payload' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionSendSlotEventTask, Trigger) == 0x000038, "Member 'FGameplayInteractionSendSlotEventTask::Trigger' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionSendSlotEventTask, bShouldTriggerOnReselect) == 0x000039, "Member 'FGameplayInteractionSendSlotEventTask::bShouldTriggerOnReselect' has a wrong offset!");

struct FGameplayInteractionSetSlotEnabledInstanceData final
{
public:
	struct FSmartObjectSlotHandle                 TargetSlot;
	bool                                          bInitialState;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FGameplayInteractionSetSlotEnabledInstanceData) == 0x000008, "Wrong alignment on FGameplayInteractionSetSlotEnabledInstanceData");
static_assert(sizeof(FGameplayInteractionSetSlotEnabledInstanceData) == 0x000010, "Wrong size on FGameplayInteractionSetSlotEnabledInstanceData");
static_assert(offsetof(FGameplayInteractionSetSlotEnabledInstanceData, TargetSlot) == 0x000000, "Member 'FGameplayInteractionSetSlotEnabledInstanceData::TargetSlot' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionSetSlotEnabledInstanceData, bInitialState) == 0x000008, "Member 'FGameplayInteractionSetSlotEnabledInstanceData::bInitialState' has a wrong offset!");

struct FGameplayInteractionSetSlotEnabledTask final : public FGameplayInteractionStateTreeTask
{
public:
	EGameplayInteractionTaskModify                Modify;
	bool                                          bEnableSlot;
	uint8                                         Pad_22[0x6];
};
static_assert(alignof(FGameplayInteractionSetSlotEnabledTask) == 0x000008, "Wrong alignment on FGameplayInteractionSetSlotEnabledTask");
static_assert(sizeof(FGameplayInteractionSetSlotEnabledTask) == 0x000028, "Wrong size on FGameplayInteractionSetSlotEnabledTask");
static_assert(offsetof(FGameplayInteractionSetSlotEnabledTask, Modify) == 0x000020, "Member 'FGameplayInteractionSetSlotEnabledTask::Modify' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionSetSlotEnabledTask, bEnableSlot) == 0x000021, "Member 'FGameplayInteractionSetSlotEnabledTask::bEnableSlot' has a wrong offset!");

struct FGameplayInteractionSyncSlotTagStateInstanceData final
{
public:
	struct FSmartObjectSlotHandle                 TargetSlot;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FGameplayInteractionSyncSlotTagStateInstanceData) == 0x000008, "Wrong alignment on FGameplayInteractionSyncSlotTagStateInstanceData");
static_assert(sizeof(FGameplayInteractionSyncSlotTagStateInstanceData) == 0x000018, "Wrong size on FGameplayInteractionSyncSlotTagStateInstanceData");
static_assert(offsetof(FGameplayInteractionSyncSlotTagStateInstanceData, TargetSlot) == 0x000000, "Member 'FGameplayInteractionSyncSlotTagStateInstanceData::TargetSlot' has a wrong offset!");

struct FGameplayInteractionSyncSlotTagStateTask final : public FGameplayInteractionStateTreeTask
{
public:
	struct FGameplayTag                           TagToMonitor;
	struct FGameplayTag                           BreakEventTag;
	uint8                                         Pad_28[0x8];
};
static_assert(alignof(FGameplayInteractionSyncSlotTagStateTask) == 0x000008, "Wrong alignment on FGameplayInteractionSyncSlotTagStateTask");
static_assert(sizeof(FGameplayInteractionSyncSlotTagStateTask) == 0x000030, "Wrong size on FGameplayInteractionSyncSlotTagStateTask");
static_assert(offsetof(FGameplayInteractionSyncSlotTagStateTask, TagToMonitor) == 0x000020, "Member 'FGameplayInteractionSyncSlotTagStateTask::TagToMonitor' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionSyncSlotTagStateTask, BreakEventTag) == 0x000024, "Member 'FGameplayInteractionSyncSlotTagStateTask::BreakEventTag' has a wrong offset!");

struct FGameplayInteractionSyncSlotTagTransitionInstanceData final
{
public:
	struct FSmartObjectSlotHandle                 TargetSlot;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FGameplayInteractionSyncSlotTagTransitionInstanceData) == 0x000008, "Wrong alignment on FGameplayInteractionSyncSlotTagTransitionInstanceData");
static_assert(sizeof(FGameplayInteractionSyncSlotTagTransitionInstanceData) == 0x000018, "Wrong size on FGameplayInteractionSyncSlotTagTransitionInstanceData");
static_assert(offsetof(FGameplayInteractionSyncSlotTagTransitionInstanceData, TargetSlot) == 0x000000, "Member 'FGameplayInteractionSyncSlotTagTransitionInstanceData::TargetSlot' has a wrong offset!");

struct FGameplayInteractionSyncSlotTagTransitionTask final : public FGameplayInteractionStateTreeTask
{
public:
	struct FGameplayTag                           TransitionFromTag;
	struct FGameplayTag                           TransitionToTag;
	struct FGameplayTag                           TransitionEventTag;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FGameplayInteractionSyncSlotTagTransitionTask) == 0x000008, "Wrong alignment on FGameplayInteractionSyncSlotTagTransitionTask");
static_assert(sizeof(FGameplayInteractionSyncSlotTagTransitionTask) == 0x000030, "Wrong size on FGameplayInteractionSyncSlotTagTransitionTask");
static_assert(offsetof(FGameplayInteractionSyncSlotTagTransitionTask, TransitionFromTag) == 0x000020, "Member 'FGameplayInteractionSyncSlotTagTransitionTask::TransitionFromTag' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionSyncSlotTagTransitionTask, TransitionToTag) == 0x000024, "Member 'FGameplayInteractionSyncSlotTagTransitionTask::TransitionToTag' has a wrong offset!");
static_assert(offsetof(FGameplayInteractionSyncSlotTagTransitionTask, TransitionEventTag) == 0x000028, "Member 'FGameplayInteractionSyncSlotTagTransitionTask::TransitionEventTag' has a wrong offset!");

struct FPlayMontageStateTreeTaskInstanceData final
{
public:
	class AActor*                                 Actor;
	float                                         ComputedDuration;
	float                                         Time;
};
static_assert(alignof(FPlayMontageStateTreeTaskInstanceData) == 0x000008, "Wrong alignment on FPlayMontageStateTreeTaskInstanceData");
static_assert(sizeof(FPlayMontageStateTreeTaskInstanceData) == 0x000010, "Wrong size on FPlayMontageStateTreeTaskInstanceData");
static_assert(offsetof(FPlayMontageStateTreeTaskInstanceData, Actor) == 0x000000, "Member 'FPlayMontageStateTreeTaskInstanceData::Actor' has a wrong offset!");
static_assert(offsetof(FPlayMontageStateTreeTaskInstanceData, ComputedDuration) == 0x000008, "Member 'FPlayMontageStateTreeTaskInstanceData::ComputedDuration' has a wrong offset!");
static_assert(offsetof(FPlayMontageStateTreeTaskInstanceData, Time) == 0x00000C, "Member 'FPlayMontageStateTreeTaskInstanceData::Time' has a wrong offset!");

struct FPlayMontageStateTreeTask final : public FGameplayInteractionStateTreeTask
{
public:
	class UAnimMontage*                           Montage;
};
static_assert(alignof(FPlayMontageStateTreeTask) == 0x000008, "Wrong alignment on FPlayMontageStateTreeTask");
static_assert(sizeof(FPlayMontageStateTreeTask) == 0x000028, "Wrong size on FPlayMontageStateTreeTask");
static_assert(offsetof(FPlayMontageStateTreeTask, Montage) == 0x000020, "Member 'FPlayMontageStateTreeTask::Montage' has a wrong offset!");

struct FStateTreeTask_FindSlotEntryForActor_InstanceData final
{
public:
	class AActor*                                 UserActor;
	struct FSmartObjectSlotHandle                 ReferenceSlot;
	struct FTransform                             EntryTransform;
	struct FGameplayTag                           EntryTag;
	uint8                                         Pad_74[0xC];
};
static_assert(alignof(FStateTreeTask_FindSlotEntryForActor_InstanceData) == 0x000010, "Wrong alignment on FStateTreeTask_FindSlotEntryForActor_InstanceData");
static_assert(sizeof(FStateTreeTask_FindSlotEntryForActor_InstanceData) == 0x000080, "Wrong size on FStateTreeTask_FindSlotEntryForActor_InstanceData");
static_assert(offsetof(FStateTreeTask_FindSlotEntryForActor_InstanceData, UserActor) == 0x000000, "Member 'FStateTreeTask_FindSlotEntryForActor_InstanceData::UserActor' has a wrong offset!");
static_assert(offsetof(FStateTreeTask_FindSlotEntryForActor_InstanceData, ReferenceSlot) == 0x000008, "Member 'FStateTreeTask_FindSlotEntryForActor_InstanceData::ReferenceSlot' has a wrong offset!");
static_assert(offsetof(FStateTreeTask_FindSlotEntryForActor_InstanceData, EntryTransform) == 0x000010, "Member 'FStateTreeTask_FindSlotEntryForActor_InstanceData::EntryTransform' has a wrong offset!");
static_assert(offsetof(FStateTreeTask_FindSlotEntryForActor_InstanceData, EntryTag) == 0x000070, "Member 'FStateTreeTask_FindSlotEntryForActor_InstanceData::EntryTag' has a wrong offset!");

struct FStateTreeTask_FindSlotEntryForActor final : public FGameplayInteractionStateTreeTask
{
public:
	EFSmartObjectSlotEntrySelectionMethod         SelectMethod;
	bool                                          bRequireResultInNavigableSpace;
	bool                                          bUseSlotLocationAsFallbackCandidate;
	bool                                          bIncludeEntriesAsCandidates;
	bool                                          bIncludeExistsAsCandidates;
	uint8                                         Pad_25[0x3];
	TSubclassOf<class UNavigationQueryFilter>     NavigationFilter;
	struct FVector3f                              NavigationValidationExtents;
	struct FRotator3f                             ResultRotationAdjustment;
	uint8                                         Pad_48[0x8];
};
static_assert(alignof(FStateTreeTask_FindSlotEntryForActor) == 0x000008, "Wrong alignment on FStateTreeTask_FindSlotEntryForActor");
static_assert(sizeof(FStateTreeTask_FindSlotEntryForActor) == 0x000050, "Wrong size on FStateTreeTask_FindSlotEntryForActor");
static_assert(offsetof(FStateTreeTask_FindSlotEntryForActor, SelectMethod) == 0x000020, "Member 'FStateTreeTask_FindSlotEntryForActor::SelectMethod' has a wrong offset!");
static_assert(offsetof(FStateTreeTask_FindSlotEntryForActor, bRequireResultInNavigableSpace) == 0x000021, "Member 'FStateTreeTask_FindSlotEntryForActor::bRequireResultInNavigableSpace' has a wrong offset!");
static_assert(offsetof(FStateTreeTask_FindSlotEntryForActor, bUseSlotLocationAsFallbackCandidate) == 0x000022, "Member 'FStateTreeTask_FindSlotEntryForActor::bUseSlotLocationAsFallbackCandidate' has a wrong offset!");
static_assert(offsetof(FStateTreeTask_FindSlotEntryForActor, bIncludeEntriesAsCandidates) == 0x000023, "Member 'FStateTreeTask_FindSlotEntryForActor::bIncludeEntriesAsCandidates' has a wrong offset!");
static_assert(offsetof(FStateTreeTask_FindSlotEntryForActor, bIncludeExistsAsCandidates) == 0x000024, "Member 'FStateTreeTask_FindSlotEntryForActor::bIncludeExistsAsCandidates' has a wrong offset!");
static_assert(offsetof(FStateTreeTask_FindSlotEntryForActor, NavigationFilter) == 0x000028, "Member 'FStateTreeTask_FindSlotEntryForActor::NavigationFilter' has a wrong offset!");
static_assert(offsetof(FStateTreeTask_FindSlotEntryForActor, NavigationValidationExtents) == 0x000030, "Member 'FStateTreeTask_FindSlotEntryForActor::NavigationValidationExtents' has a wrong offset!");
static_assert(offsetof(FStateTreeTask_FindSlotEntryForActor, ResultRotationAdjustment) == 0x00003C, "Member 'FStateTreeTask_FindSlotEntryForActor::ResultRotationAdjustment' has a wrong offset!");

}
