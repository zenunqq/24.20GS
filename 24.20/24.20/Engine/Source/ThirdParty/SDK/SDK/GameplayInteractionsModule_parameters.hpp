#pragma once

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "SmartObjectsModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayInteractionsModule_structs.hpp"

namespace SDK::Params
{

struct AITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject final
{
public:
	class AAIController*                          Controller;
	struct FSmartObjectClaimHandle                ClaimHandle;
	bool                                          bLockAILogic;
	uint8                                         Pad_21[0x7];
	class UAITask_UseGameplayInteraction*         ReturnValue;
};
static_assert(alignof(AITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject) == 0x000008, "Wrong alignment on AITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject");
static_assert(sizeof(AITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject) == 0x000030, "Wrong size on AITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject");
static_assert(offsetof(AITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject, Controller) == 0x000000, "Member 'AITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject::Controller' has a wrong offset!");
static_assert(offsetof(AITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject, ClaimHandle) == 0x000008, "Member 'AITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject::ClaimHandle' has a wrong offset!");
static_assert(offsetof(AITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject, bLockAILogic) == 0x000020, "Member 'AITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject::bLockAILogic' has a wrong offset!");
static_assert(offsetof(AITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject, ReturnValue) == 0x000028, "Member 'AITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject::ReturnValue' has a wrong offset!");

struct GameplayTask_MoveTo_MoveTo final
{
public:
	class AActor*                                 Actor;
	struct FVector                                GoalLocation;
	class AActor*                                 GoalActor;
	EGameplayTaskMoveToIntent                     EndOfPathIntent;
	uint8                                         Pad_29[0x3];
	float                                         AcceptanceRadius;
	EAIOptionFlag                                 StopOnOverlap;
	EAIOptionFlag                                 AcceptPartialPath;
	bool                                          bUsePathfinding;
	bool                                          bUseContinuousGoalTracking;
	EAIOptionFlag                                 ProjectGoalOnNavigation;
	uint8                                         Pad_35[0x3];
	class UGameplayTask_MoveTo*                   ReturnValue;
};
static_assert(alignof(GameplayTask_MoveTo_MoveTo) == 0x000008, "Wrong alignment on GameplayTask_MoveTo_MoveTo");
static_assert(sizeof(GameplayTask_MoveTo_MoveTo) == 0x000040, "Wrong size on GameplayTask_MoveTo_MoveTo");
static_assert(offsetof(GameplayTask_MoveTo_MoveTo, Actor) == 0x000000, "Member 'GameplayTask_MoveTo_MoveTo::Actor' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveTo_MoveTo, GoalLocation) == 0x000008, "Member 'GameplayTask_MoveTo_MoveTo::GoalLocation' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveTo_MoveTo, GoalActor) == 0x000020, "Member 'GameplayTask_MoveTo_MoveTo::GoalActor' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveTo_MoveTo, EndOfPathIntent) == 0x000028, "Member 'GameplayTask_MoveTo_MoveTo::EndOfPathIntent' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveTo_MoveTo, AcceptanceRadius) == 0x00002C, "Member 'GameplayTask_MoveTo_MoveTo::AcceptanceRadius' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveTo_MoveTo, StopOnOverlap) == 0x000030, "Member 'GameplayTask_MoveTo_MoveTo::StopOnOverlap' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveTo_MoveTo, AcceptPartialPath) == 0x000031, "Member 'GameplayTask_MoveTo_MoveTo::AcceptPartialPath' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveTo_MoveTo, bUsePathfinding) == 0x000032, "Member 'GameplayTask_MoveTo_MoveTo::bUsePathfinding' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveTo_MoveTo, bUseContinuousGoalTracking) == 0x000033, "Member 'GameplayTask_MoveTo_MoveTo::bUseContinuousGoalTracking' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveTo_MoveTo, ProjectGoalOnNavigation) == 0x000034, "Member 'GameplayTask_MoveTo_MoveTo::ProjectGoalOnNavigation' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveTo_MoveTo, ReturnValue) == 0x000038, "Member 'GameplayTask_MoveTo_MoveTo::ReturnValue' has a wrong offset!");

struct GameplayTask_MoveToContextualAnim_EnterContextualAnim final
{
public:
	class AActor*                                 Interactor;
	class FName                                   InteractorRole;
	uint8                                         Pad_C[0x4];
	class AActor*                                 InteractableObject;
	class FName                                   InteractableObjectRole;
	class FName                                   SectionName;
	class FName                                   ExitSectionName;
	uint8                                         Pad_24[0x4];
	const class UContextualAnimSceneAsset*        SceneAsset;
	class UGameplayTask_MoveToContextualAnim*     ReturnValue;
};
static_assert(alignof(GameplayTask_MoveToContextualAnim_EnterContextualAnim) == 0x000008, "Wrong alignment on GameplayTask_MoveToContextualAnim_EnterContextualAnim");
static_assert(sizeof(GameplayTask_MoveToContextualAnim_EnterContextualAnim) == 0x000038, "Wrong size on GameplayTask_MoveToContextualAnim_EnterContextualAnim");
static_assert(offsetof(GameplayTask_MoveToContextualAnim_EnterContextualAnim, Interactor) == 0x000000, "Member 'GameplayTask_MoveToContextualAnim_EnterContextualAnim::Interactor' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveToContextualAnim_EnterContextualAnim, InteractorRole) == 0x000008, "Member 'GameplayTask_MoveToContextualAnim_EnterContextualAnim::InteractorRole' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveToContextualAnim_EnterContextualAnim, InteractableObject) == 0x000010, "Member 'GameplayTask_MoveToContextualAnim_EnterContextualAnim::InteractableObject' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveToContextualAnim_EnterContextualAnim, InteractableObjectRole) == 0x000018, "Member 'GameplayTask_MoveToContextualAnim_EnterContextualAnim::InteractableObjectRole' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveToContextualAnim_EnterContextualAnim, SectionName) == 0x00001C, "Member 'GameplayTask_MoveToContextualAnim_EnterContextualAnim::SectionName' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveToContextualAnim_EnterContextualAnim, ExitSectionName) == 0x000020, "Member 'GameplayTask_MoveToContextualAnim_EnterContextualAnim::ExitSectionName' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveToContextualAnim_EnterContextualAnim, SceneAsset) == 0x000028, "Member 'GameplayTask_MoveToContextualAnim_EnterContextualAnim::SceneAsset' has a wrong offset!");
static_assert(offsetof(GameplayTask_MoveToContextualAnim_EnterContextualAnim, ReturnValue) == 0x000030, "Member 'GameplayTask_MoveToContextualAnim_EnterContextualAnim::ReturnValue' has a wrong offset!");

struct GameplayTask_PlayContextualAnim_PlayContextualAnim final
{
public:
	class AActor*                                 Interactor;
	class FName                                   InteractorRole_0;
	uint8                                         Pad_C[0x4];
	class AActor*                                 InteractableObject_0;
	class FName                                   InteractableObjectRole_0;
	class FName                                   SectionName;
	class FName                                   ExitSectionName_0;
	uint8                                         Pad_24[0x4];
	const class UContextualAnimSceneAsset*        SceneAsset_0;
	class UGameplayTask_PlayContextualAnim*       ReturnValue;
};
static_assert(alignof(GameplayTask_PlayContextualAnim_PlayContextualAnim) == 0x000008, "Wrong alignment on GameplayTask_PlayContextualAnim_PlayContextualAnim");
static_assert(sizeof(GameplayTask_PlayContextualAnim_PlayContextualAnim) == 0x000038, "Wrong size on GameplayTask_PlayContextualAnim_PlayContextualAnim");
static_assert(offsetof(GameplayTask_PlayContextualAnim_PlayContextualAnim, Interactor) == 0x000000, "Member 'GameplayTask_PlayContextualAnim_PlayContextualAnim::Interactor' has a wrong offset!");
static_assert(offsetof(GameplayTask_PlayContextualAnim_PlayContextualAnim, InteractorRole_0) == 0x000008, "Member 'GameplayTask_PlayContextualAnim_PlayContextualAnim::InteractorRole_0' has a wrong offset!");
static_assert(offsetof(GameplayTask_PlayContextualAnim_PlayContextualAnim, InteractableObject_0) == 0x000010, "Member 'GameplayTask_PlayContextualAnim_PlayContextualAnim::InteractableObject_0' has a wrong offset!");
static_assert(offsetof(GameplayTask_PlayContextualAnim_PlayContextualAnim, InteractableObjectRole_0) == 0x000018, "Member 'GameplayTask_PlayContextualAnim_PlayContextualAnim::InteractableObjectRole_0' has a wrong offset!");
static_assert(offsetof(GameplayTask_PlayContextualAnim_PlayContextualAnim, SectionName) == 0x00001C, "Member 'GameplayTask_PlayContextualAnim_PlayContextualAnim::SectionName' has a wrong offset!");
static_assert(offsetof(GameplayTask_PlayContextualAnim_PlayContextualAnim, ExitSectionName_0) == 0x000020, "Member 'GameplayTask_PlayContextualAnim_PlayContextualAnim::ExitSectionName_0' has a wrong offset!");
static_assert(offsetof(GameplayTask_PlayContextualAnim_PlayContextualAnim, SceneAsset_0) == 0x000028, "Member 'GameplayTask_PlayContextualAnim_PlayContextualAnim::SceneAsset_0' has a wrong offset!");
static_assert(offsetof(GameplayTask_PlayContextualAnim_PlayContextualAnim, ReturnValue) == 0x000030, "Member 'GameplayTask_PlayContextualAnim_PlayContextualAnim::ReturnValue' has a wrong offset!");

struct GameplayTask_PlayContextualAnim_OnSectionEndTimeReached final
{
public:
	class UContextualAnimSceneInstance*           SceneInstance_0;
};
static_assert(alignof(GameplayTask_PlayContextualAnim_OnSectionEndTimeReached) == 0x000008, "Wrong alignment on GameplayTask_PlayContextualAnim_OnSectionEndTimeReached");
static_assert(sizeof(GameplayTask_PlayContextualAnim_OnSectionEndTimeReached) == 0x000008, "Wrong size on GameplayTask_PlayContextualAnim_OnSectionEndTimeReached");
static_assert(offsetof(GameplayTask_PlayContextualAnim_OnSectionEndTimeReached, SceneInstance_0) == 0x000000, "Member 'GameplayTask_PlayContextualAnim_OnSectionEndTimeReached::SceneInstance_0' has a wrong offset!");

struct GameplayTask_PlayContextualAnim_SetExit final
{
public:
	EPlayContextualAnimExitMode                   ExitMode;
	uint8                                         Pad_1[0x3];
	class FName                                   NewExitSectionName;
};
static_assert(alignof(GameplayTask_PlayContextualAnim_SetExit) == 0x000004, "Wrong alignment on GameplayTask_PlayContextualAnim_SetExit");
static_assert(sizeof(GameplayTask_PlayContextualAnim_SetExit) == 0x000008, "Wrong size on GameplayTask_PlayContextualAnim_SetExit");
static_assert(offsetof(GameplayTask_PlayContextualAnim_SetExit, ExitMode) == 0x000000, "Member 'GameplayTask_PlayContextualAnim_SetExit::ExitMode' has a wrong offset!");
static_assert(offsetof(GameplayTask_PlayContextualAnim_SetExit, NewExitSectionName) == 0x000004, "Member 'GameplayTask_PlayContextualAnim_SetExit::NewExitSectionName' has a wrong offset!");

struct GameplayTask_PlayContextualAnim_GetStatus final
{
public:
	EPlayContextualAnimStatus                     ReturnValue;
};
static_assert(alignof(GameplayTask_PlayContextualAnim_GetStatus) == 0x000001, "Wrong alignment on GameplayTask_PlayContextualAnim_GetStatus");
static_assert(sizeof(GameplayTask_PlayContextualAnim_GetStatus) == 0x000001, "Wrong size on GameplayTask_PlayContextualAnim_GetStatus");
static_assert(offsetof(GameplayTask_PlayContextualAnim_GetStatus, ReturnValue) == 0x000000, "Member 'GameplayTask_PlayContextualAnim_GetStatus::ReturnValue' has a wrong offset!");

struct GameplayTask_StandAt_StandAt final
{
public:
	class APawn*                                  Pawn;
	float                                         Duration;
	uint8                                         Pad_C[0x4];
	class UGameplayTask_StandAt*                  ReturnValue;
};
static_assert(alignof(GameplayTask_StandAt_StandAt) == 0x000008, "Wrong alignment on GameplayTask_StandAt_StandAt");
static_assert(sizeof(GameplayTask_StandAt_StandAt) == 0x000018, "Wrong size on GameplayTask_StandAt_StandAt");
static_assert(offsetof(GameplayTask_StandAt_StandAt, Pawn) == 0x000000, "Member 'GameplayTask_StandAt_StandAt::Pawn' has a wrong offset!");
static_assert(offsetof(GameplayTask_StandAt_StandAt, Duration) == 0x000008, "Member 'GameplayTask_StandAt_StandAt::Duration' has a wrong offset!");
static_assert(offsetof(GameplayTask_StandAt_StandAt, ReturnValue) == 0x000010, "Member 'GameplayTask_StandAt_StandAt::ReturnValue' has a wrong offset!");

}
