#pragma once

#include "Basic.hpp"

#include "GameplayInteractionsModule_classes.hpp"
#include "GameplayInteractionsModule_parameters.hpp"

namespace SDK
{

class UAITask_UseGameplayInteraction* UAITask_UseGameplayInteraction::UseClaimedGameplayInteractionSmartObject(class AAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AITask_UseGameplayInteraction", "UseClaimedGameplayInteractionSmartObject");

	Params::AITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject Parms{};

	Parms.Controller = Controller;
	Parms.ClaimHandle = std::move(ClaimHandle);
	Parms.bLockAILogic = bLockAILogic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAITask_UseGameplayInteraction::RequestAbort()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AITask_UseGameplayInteraction", "RequestAbort");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UGameplayTask_MoveTo* UGameplayTask_MoveTo::MoveTo(class AActor* Actor, const struct FVector& GoalLocation, class AActor* GoalActor, const EGameplayTaskMoveToIntent EndOfPathIntent, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bUseContinuousGoalTracking, EAIOptionFlag ProjectGoalOnNavigation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayTask_MoveTo", "MoveTo");

	Params::GameplayTask_MoveTo_MoveTo Parms{};

	Parms.Actor = Actor;
	Parms.GoalLocation = std::move(GoalLocation);
	Parms.GoalActor = GoalActor;
	Parms.EndOfPathIntent = EndOfPathIntent;
	Parms.AcceptanceRadius = AcceptanceRadius;
	Parms.StopOnOverlap = StopOnOverlap;
	Parms.AcceptPartialPath = AcceptPartialPath;
	Parms.bUsePathfinding = bUsePathfinding;
	Parms.bUseContinuousGoalTracking = bUseContinuousGoalTracking;
	Parms.ProjectGoalOnNavigation = ProjectGoalOnNavigation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UGameplayTask_MoveToContextualAnim* UGameplayTask_MoveToContextualAnim::EnterContextualAnim(class AActor* Interactor, const class FName InteractorRole, class AActor* InteractableObject, const class FName InteractableObjectRole, const class FName SectionName, const class FName ExitSectionName, const class UContextualAnimSceneAsset* SceneAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayTask_MoveToContextualAnim", "EnterContextualAnim");

	Params::GameplayTask_MoveToContextualAnim_EnterContextualAnim Parms{};

	Parms.Interactor = Interactor;
	Parms.InteractorRole = InteractorRole;
	Parms.InteractableObject = InteractableObject;
	Parms.InteractableObjectRole = InteractableObjectRole;
	Parms.SectionName = SectionName;
	Parms.ExitSectionName = ExitSectionName;
	Parms.SceneAsset = SceneAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UGameplayTask_PlayContextualAnim* UGameplayTask_PlayContextualAnim::PlayContextualAnim(class AActor* Interactor, const class FName InteractorRole_0, class AActor* InteractableObject_0, const class FName InteractableObjectRole_0, const class FName SectionName, const class FName ExitSectionName_0, const class UContextualAnimSceneAsset* SceneAsset_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayTask_PlayContextualAnim", "PlayContextualAnim");

	Params::GameplayTask_PlayContextualAnim_PlayContextualAnim Parms{};

	Parms.Interactor = Interactor;
	Parms.InteractorRole_0 = InteractorRole_0;
	Parms.InteractableObject_0 = InteractableObject_0;
	Parms.InteractableObjectRole_0 = InteractableObjectRole_0;
	Parms.SectionName = SectionName;
	Parms.ExitSectionName_0 = ExitSectionName_0;
	Parms.SceneAsset_0 = SceneAsset_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayTask_PlayContextualAnim::OnSectionEndTimeReached(class UContextualAnimSceneInstance* SceneInstance_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayTask_PlayContextualAnim", "OnSectionEndTimeReached");

	Params::GameplayTask_PlayContextualAnim_OnSectionEndTimeReached Parms{};

	Parms.SceneInstance_0 = SceneInstance_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayTask_PlayContextualAnim::SetExit(EPlayContextualAnimExitMode ExitMode, class FName NewExitSectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayTask_PlayContextualAnim", "SetExit");

	Params::GameplayTask_PlayContextualAnim_SetExit Parms{};

	Parms.ExitMode = ExitMode;
	Parms.NewExitSectionName = NewExitSectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

EPlayContextualAnimStatus UGameplayTask_PlayContextualAnim::GetStatus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayTask_PlayContextualAnim", "GetStatus");

	Params::GameplayTask_PlayContextualAnim_GetStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UGameplayTask_StandAt* UGameplayTask_StandAt::StandAt(class APawn* Pawn, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayTask_StandAt", "StandAt");

	Params::GameplayTask_StandAt_StandAt Parms{};

	Parms.Pawn = Pawn;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
