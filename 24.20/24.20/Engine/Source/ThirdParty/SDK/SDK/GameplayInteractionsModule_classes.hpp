#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "StateTreeModule_structs.hpp"
#include "StateTreeModule_classes.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "SmartObjectsModule_structs.hpp"
#include "SmartObjectsModule_classes.hpp"
#include "GameplayInteractionsModule_structs.hpp"
#include "GameplayTasks_classes.hpp"
#include "StructUtils_structs.hpp"
#include "ContextualAnimation_structs.hpp"

namespace SDK
{

class IGameplayActuationStateProvider final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayActuationStateProvider">();
	}
	static class IGameplayActuationStateProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGameplayActuationStateProvider>();
	}
};
static_assert(alignof(IGameplayActuationStateProvider) == 0x000008, "Wrong alignment on IGameplayActuationStateProvider");
static_assert(sizeof(IGameplayActuationStateProvider) == 0x000028, "Wrong size on IGameplayActuationStateProvider");

class UGameplayInteractionSmartObjectBehaviorDefinition : public USmartObjectBehaviorDefinition
{
public:
	struct FStateTreeReference                    StateTreeReference;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayInteractionSmartObjectBehaviorDefinition">();
	}
	static class UGameplayInteractionSmartObjectBehaviorDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayInteractionSmartObjectBehaviorDefinition>();
	}
};
static_assert(alignof(UGameplayInteractionSmartObjectBehaviorDefinition) == 0x000008, "Wrong alignment on UGameplayInteractionSmartObjectBehaviorDefinition");
static_assert(sizeof(UGameplayInteractionSmartObjectBehaviorDefinition) == 0x000040, "Wrong size on UGameplayInteractionSmartObjectBehaviorDefinition");
static_assert(offsetof(UGameplayInteractionSmartObjectBehaviorDefinition, StateTreeReference) == 0x000028, "Member 'UGameplayInteractionSmartObjectBehaviorDefinition::StateTreeReference' has a wrong offset!");

class IGameplayTaskTransition final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTaskTransition">();
	}
	static class IGameplayTaskTransition* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGameplayTaskTransition>();
	}
};
static_assert(alignof(IGameplayTaskTransition) == 0x000008, "Wrong alignment on IGameplayTaskTransition");
static_assert(sizeof(IGameplayTaskTransition) == 0x000028, "Wrong size on IGameplayTaskTransition");

class UAITask_UseGameplayInteraction final : public UAITask
{
public:
	TMulticastInlineDelegate<void()>              OnFinished;
	struct FGameplayInteractionContext            GameplayInteractionContext;
	struct FSmartObjectClaimHandle                ClaimedHandle;
	struct FGameplayInteractionAbortContext       AbortContext;
	uint8                                         Pad_D9[0x7];

public:
	static class UAITask_UseGameplayInteraction* UseClaimedGameplayInteractionSmartObject(class AAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic);

	void RequestAbort();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AITask_UseGameplayInteraction">();
	}
	static class UAITask_UseGameplayInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAITask_UseGameplayInteraction>();
	}
};
static_assert(alignof(UAITask_UseGameplayInteraction) == 0x000008, "Wrong alignment on UAITask_UseGameplayInteraction");
static_assert(sizeof(UAITask_UseGameplayInteraction) == 0x0000E0, "Wrong size on UAITask_UseGameplayInteraction");
static_assert(offsetof(UAITask_UseGameplayInteraction, OnFinished) == 0x000068, "Member 'UAITask_UseGameplayInteraction::OnFinished' has a wrong offset!");
static_assert(offsetof(UAITask_UseGameplayInteraction, GameplayInteractionContext) == 0x000078, "Member 'UAITask_UseGameplayInteraction::GameplayInteractionContext' has a wrong offset!");
static_assert(offsetof(UAITask_UseGameplayInteraction, ClaimedHandle) == 0x0000C0, "Member 'UAITask_UseGameplayInteraction::ClaimedHandle' has a wrong offset!");
static_assert(offsetof(UAITask_UseGameplayInteraction, AbortContext) == 0x0000D8, "Member 'UAITask_UseGameplayInteraction::AbortContext' has a wrong offset!");

class UGameplayActuationComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x8];
	struct FInstancedStruct                       ActuationState;
	uint8                                         Pad_B8[0x8];
	TArray<struct FInstancedStruct>               Transitions;
	bool                                          bEnableTransitions;
	uint8                                         Pad_D1[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayActuationComponent">();
	}
	static class UGameplayActuationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayActuationComponent>();
	}
};
static_assert(alignof(UGameplayActuationComponent) == 0x000008, "Wrong alignment on UGameplayActuationComponent");
static_assert(sizeof(UGameplayActuationComponent) == 0x0000D8, "Wrong size on UGameplayActuationComponent");
static_assert(offsetof(UGameplayActuationComponent, ActuationState) == 0x0000A8, "Member 'UGameplayActuationComponent::ActuationState' has a wrong offset!");
static_assert(offsetof(UGameplayActuationComponent, Transitions) == 0x0000C0, "Member 'UGameplayActuationComponent::Transitions' has a wrong offset!");
static_assert(offsetof(UGameplayActuationComponent, bEnableTransitions) == 0x0000D0, "Member 'UGameplayActuationComponent::bEnableTransitions' has a wrong offset!");

class UGameplayInteractionStateTreeSchema final : public UStateTreeSchema
{
public:
	TSubclassOf<class AActor>                     ContextActorClass;
	TSubclassOf<class AActor>                     SmartObjectActorClass;
	TArray<struct FStateTreeExternalDataDesc>     ContextDataDescs;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayInteractionStateTreeSchema">();
	}
	static class UGameplayInteractionStateTreeSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayInteractionStateTreeSchema>();
	}
};
static_assert(alignof(UGameplayInteractionStateTreeSchema) == 0x000008, "Wrong alignment on UGameplayInteractionStateTreeSchema");
static_assert(sizeof(UGameplayInteractionStateTreeSchema) == 0x000048, "Wrong size on UGameplayInteractionStateTreeSchema");
static_assert(offsetof(UGameplayInteractionStateTreeSchema, ContextActorClass) == 0x000028, "Member 'UGameplayInteractionStateTreeSchema::ContextActorClass' has a wrong offset!");
static_assert(offsetof(UGameplayInteractionStateTreeSchema, SmartObjectActorClass) == 0x000030, "Member 'UGameplayInteractionStateTreeSchema::SmartObjectActorClass' has a wrong offset!");
static_assert(offsetof(UGameplayInteractionStateTreeSchema, ContextDataDescs) == 0x000038, "Member 'UGameplayInteractionStateTreeSchema::ContextDataDescs' has a wrong offset!");

class UGameplayTask_MoveTo : public UGameplayTask
{
public:
	uint8                                         Pad_60[0x8];
	TMulticastInlineDelegate<void()>              OnRequestFailed;
	TMulticastInlineDelegate<void(EGameplayTaskActuationResult Result, class AActor* Actor)> OnCompleted;
	class UCharacterMovementComponent*            MovementComponent;
	class UGameplayActuationComponent*            ActuationComponent;
	struct FAIMoveRequest                         MoveRequest;
	uint8                                         Pad_E8[0x120];
	class UGameplayTask*                          StartTransitionTask;
	class UGameplayTask*                          EndTransitionTask;

public:
	static class UGameplayTask_MoveTo* MoveTo(class AActor* Actor, const struct FVector& GoalLocation, class AActor* GoalActor, const EGameplayTaskMoveToIntent EndOfPathIntent, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bUseContinuousGoalTracking, EAIOptionFlag ProjectGoalOnNavigation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_MoveTo">();
	}
	static class UGameplayTask_MoveTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_MoveTo>();
	}
};
static_assert(alignof(UGameplayTask_MoveTo) == 0x000008, "Wrong alignment on UGameplayTask_MoveTo");
static_assert(sizeof(UGameplayTask_MoveTo) == 0x000218, "Wrong size on UGameplayTask_MoveTo");
static_assert(offsetof(UGameplayTask_MoveTo, OnRequestFailed) == 0x000068, "Member 'UGameplayTask_MoveTo::OnRequestFailed' has a wrong offset!");
static_assert(offsetof(UGameplayTask_MoveTo, OnCompleted) == 0x000078, "Member 'UGameplayTask_MoveTo::OnCompleted' has a wrong offset!");
static_assert(offsetof(UGameplayTask_MoveTo, MovementComponent) == 0x000088, "Member 'UGameplayTask_MoveTo::MovementComponent' has a wrong offset!");
static_assert(offsetof(UGameplayTask_MoveTo, ActuationComponent) == 0x000090, "Member 'UGameplayTask_MoveTo::ActuationComponent' has a wrong offset!");
static_assert(offsetof(UGameplayTask_MoveTo, MoveRequest) == 0x000098, "Member 'UGameplayTask_MoveTo::MoveRequest' has a wrong offset!");
static_assert(offsetof(UGameplayTask_MoveTo, StartTransitionTask) == 0x000208, "Member 'UGameplayTask_MoveTo::StartTransitionTask' has a wrong offset!");
static_assert(offsetof(UGameplayTask_MoveTo, EndTransitionTask) == 0x000210, "Member 'UGameplayTask_MoveTo::EndTransitionTask' has a wrong offset!");

class UGameplayTask_MoveToContextualAnim final : public UGameplayTask_MoveTo
{
public:
	struct FGameplayActuationState_ContextualAnim NextState;

public:
	static class UGameplayTask_MoveToContextualAnim* EnterContextualAnim(class AActor* Interactor, const class FName InteractorRole, class AActor* InteractableObject, const class FName InteractableObjectRole, const class FName SectionName, const class FName ExitSectionName, const class UContextualAnimSceneAsset* SceneAsset);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_MoveToContextualAnim">();
	}
	static class UGameplayTask_MoveToContextualAnim* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_MoveToContextualAnim>();
	}
};
static_assert(alignof(UGameplayTask_MoveToContextualAnim) == 0x000008, "Wrong alignment on UGameplayTask_MoveToContextualAnim");
static_assert(sizeof(UGameplayTask_MoveToContextualAnim) == 0x000270, "Wrong size on UGameplayTask_MoveToContextualAnim");
static_assert(offsetof(UGameplayTask_MoveToContextualAnim, NextState) == 0x000218, "Member 'UGameplayTask_MoveToContextualAnim::NextState' has a wrong offset!");

class UGameplayTask_MoveToStandTransition final : public UGameplayTask
{
public:
	uint8                                         Pad_60[0x10];
	class UCharacterMovementComponent*            MovementComponent;
	uint8                                         Pad_78[0xC8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_MoveToStandTransition">();
	}
	static class UGameplayTask_MoveToStandTransition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_MoveToStandTransition>();
	}
};
static_assert(alignof(UGameplayTask_MoveToStandTransition) == 0x000008, "Wrong alignment on UGameplayTask_MoveToStandTransition");
static_assert(sizeof(UGameplayTask_MoveToStandTransition) == 0x000140, "Wrong size on UGameplayTask_MoveToStandTransition");
static_assert(offsetof(UGameplayTask_MoveToStandTransition, MovementComponent) == 0x000070, "Member 'UGameplayTask_MoveToStandTransition::MovementComponent' has a wrong offset!");

class UGameplayTask_PlayContextualAnim final : public UGameplayTask
{
public:
	uint8                                         Pad_60[0x80];
	TMulticastInlineDelegate<void()>              OnRequestFailed;
	TMulticastInlineDelegate<void(EGameplayTaskActuationResult Result, class AActor* Actor)> OnCompleted;
	int32                                         SectionIdx;
	int32                                         AnimSetIdx;
	TArray<struct FTransform>                     Pivots;
	class UContextualAnimSceneAsset*              SceneAsset;
	class FName                                   InteractorRole;
	uint8                                         Pad_124[0x4];
	class AActor*                                 InteractableObject;
	class FName                                   InteractableObjectRole;
	class FName                                   ExitSectionName;
	class UContextualAnimSceneInstance*           SceneInstance;
	class UGameplayActuationComponent*            ActuationComponent;
	struct FContextualAnimStartSceneParams        SceneParams;
	struct FTransform                             SafeExitPoint;
	EPlayContextualAnimStatus                     Status;
	bool                                          bTeleportOnTaskEnd;
	uint8                                         Pad_212[0xE];

public:
	static class UGameplayTask_PlayContextualAnim* PlayContextualAnim(class AActor* Interactor, const class FName InteractorRole_0, class AActor* InteractableObject_0, const class FName InteractableObjectRole_0, const class FName SectionName, const class FName ExitSectionName_0, const class UContextualAnimSceneAsset* SceneAsset_0);

	void OnSectionEndTimeReached(class UContextualAnimSceneInstance* SceneInstance_0);
	void SetExit(EPlayContextualAnimExitMode ExitMode, class FName NewExitSectionName);

	EPlayContextualAnimStatus GetStatus() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_PlayContextualAnim">();
	}
	static class UGameplayTask_PlayContextualAnim* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_PlayContextualAnim>();
	}
};
static_assert(alignof(UGameplayTask_PlayContextualAnim) == 0x000010, "Wrong alignment on UGameplayTask_PlayContextualAnim");
static_assert(sizeof(UGameplayTask_PlayContextualAnim) == 0x000220, "Wrong size on UGameplayTask_PlayContextualAnim");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, OnRequestFailed) == 0x0000E0, "Member 'UGameplayTask_PlayContextualAnim::OnRequestFailed' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, OnCompleted) == 0x0000F0, "Member 'UGameplayTask_PlayContextualAnim::OnCompleted' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, SectionIdx) == 0x000100, "Member 'UGameplayTask_PlayContextualAnim::SectionIdx' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, AnimSetIdx) == 0x000104, "Member 'UGameplayTask_PlayContextualAnim::AnimSetIdx' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, Pivots) == 0x000108, "Member 'UGameplayTask_PlayContextualAnim::Pivots' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, SceneAsset) == 0x000118, "Member 'UGameplayTask_PlayContextualAnim::SceneAsset' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, InteractorRole) == 0x000120, "Member 'UGameplayTask_PlayContextualAnim::InteractorRole' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, InteractableObject) == 0x000128, "Member 'UGameplayTask_PlayContextualAnim::InteractableObject' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, InteractableObjectRole) == 0x000130, "Member 'UGameplayTask_PlayContextualAnim::InteractableObjectRole' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, ExitSectionName) == 0x000134, "Member 'UGameplayTask_PlayContextualAnim::ExitSectionName' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, SceneInstance) == 0x000138, "Member 'UGameplayTask_PlayContextualAnim::SceneInstance' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, ActuationComponent) == 0x000140, "Member 'UGameplayTask_PlayContextualAnim::ActuationComponent' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, SceneParams) == 0x000148, "Member 'UGameplayTask_PlayContextualAnim::SceneParams' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, SafeExitPoint) == 0x0001B0, "Member 'UGameplayTask_PlayContextualAnim::SafeExitPoint' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, Status) == 0x000210, "Member 'UGameplayTask_PlayContextualAnim::Status' has a wrong offset!");
static_assert(offsetof(UGameplayTask_PlayContextualAnim, bTeleportOnTaskEnd) == 0x000211, "Member 'UGameplayTask_PlayContextualAnim::bTeleportOnTaskEnd' has a wrong offset!");

class UGameplayTask_StandAt final : public UGameplayTask
{
public:
	uint8                                         Pad_60[0x8];
	TMulticastInlineDelegate<void()>              OnRequestFailed;
	TMulticastInlineDelegate<void(EGameplayTaskActuationResult Result, class AActor* Actor)> OnCompleted;
	uint8                                         Pad_88[0x98];
	class UCharacterMovementComponent*            MovementComponent;

public:
	static class UGameplayTask_StandAt* StandAt(class APawn* Pawn, float Duration);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_StandAt">();
	}
	static class UGameplayTask_StandAt* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_StandAt>();
	}
};
static_assert(alignof(UGameplayTask_StandAt) == 0x000008, "Wrong alignment on UGameplayTask_StandAt");
static_assert(sizeof(UGameplayTask_StandAt) == 0x000128, "Wrong size on UGameplayTask_StandAt");
static_assert(offsetof(UGameplayTask_StandAt, OnRequestFailed) == 0x000068, "Member 'UGameplayTask_StandAt::OnRequestFailed' has a wrong offset!");
static_assert(offsetof(UGameplayTask_StandAt, OnCompleted) == 0x000078, "Member 'UGameplayTask_StandAt::OnCompleted' has a wrong offset!");
static_assert(offsetof(UGameplayTask_StandAt, MovementComponent) == 0x000120, "Member 'UGameplayTask_StandAt::MovementComponent' has a wrong offset!");

class UGameplayTask_StandToMoveTransition final : public UGameplayTask
{
public:
	uint8                                         Pad_60[0x10];
	class UCharacterMovementComponent*            MovementComponent;
	uint8                                         Pad_78[0xC8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_StandToMoveTransition">();
	}
	static class UGameplayTask_StandToMoveTransition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_StandToMoveTransition>();
	}
};
static_assert(alignof(UGameplayTask_StandToMoveTransition) == 0x000008, "Wrong alignment on UGameplayTask_StandToMoveTransition");
static_assert(sizeof(UGameplayTask_StandToMoveTransition) == 0x000140, "Wrong size on UGameplayTask_StandToMoveTransition");
static_assert(offsetof(UGameplayTask_StandToMoveTransition, MovementComponent) == 0x000070, "Member 'UGameplayTask_StandToMoveTransition::MovementComponent' has a wrong offset!");

class UGameplayTask_SuddenTurnTransition final : public UGameplayTask
{
public:
	uint8                                         Pad_60[0x10];
	class UCharacterMovementComponent*            MovementComponent;
	uint8                                         Pad_78[0xC8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_SuddenTurnTransition">();
	}
	static class UGameplayTask_SuddenTurnTransition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_SuddenTurnTransition>();
	}
};
static_assert(alignof(UGameplayTask_SuddenTurnTransition) == 0x000008, "Wrong alignment on UGameplayTask_SuddenTurnTransition");
static_assert(sizeof(UGameplayTask_SuddenTurnTransition) == 0x000140, "Wrong size on UGameplayTask_SuddenTurnTransition");
static_assert(offsetof(UGameplayTask_SuddenTurnTransition, MovementComponent) == 0x000070, "Member 'UGameplayTask_SuddenTurnTransition::MovementComponent' has a wrong offset!");

}
