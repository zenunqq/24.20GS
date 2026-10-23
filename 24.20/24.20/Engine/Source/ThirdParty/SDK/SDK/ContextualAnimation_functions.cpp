#pragma once

#include "Basic.hpp"

#include "ContextualAnimation_classes.hpp"
#include "ContextualAnimation_parameters.hpp"

namespace SDK
{

class USkeletalMeshComponent* IContextualAnimActorInterface::GetMesh() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimActorInterface", "GetMesh");

	Params::ContextualAnimActorInterface_GetMesh Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UContextualAnimManager* UContextualAnimManager::GetContextualAnimManager(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimManager", "GetContextualAnimManager");

	Params::ContextualAnimManager_GetContextualAnimManager Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UContextualAnimSceneInstance* UContextualAnimManager::BP_TryStartScene(const class UContextualAnimSceneAsset* SceneAsset, const struct FContextualAnimStartSceneParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimManager", "BP_TryStartScene");

	Params::ContextualAnimManager_BP_TryStartScene Parms{};

	Parms.SceneAsset = SceneAsset;
	Parms.Params_0 = std::move(Params_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UContextualAnimSceneInstance* UContextualAnimManager::GetSceneWithActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimManager", "GetSceneWithActor");

	Params::ContextualAnimManager_GetSceneWithActor Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UContextualAnimManager::OnSceneInstanceEnded(class UContextualAnimSceneInstance* SceneInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimManager", "OnSceneInstanceEnded");

	Params::ContextualAnimManager_OnSceneInstanceEnded Parms{};

	Parms.SceneInstance = SceneInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UContextualAnimManager::TryStopSceneWithActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimManager", "TryStopSceneWithActor");

	Params::ContextualAnimManager_TryStopSceneWithActor Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UContextualAnimManager::IsActorInAnyScene(class AActor* Actor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimManager", "IsActorInAnyScene");

	Params::ContextualAnimManager_IsActorInAnyScene Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UContextualAnimSceneActorComponent::LateJoinContextualAnimScene(class AActor* Actor, class FName Role)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "LateJoinContextualAnimScene");

	Params::ContextualAnimSceneActorComponent_LateJoinContextualAnimScene Parms{};

	Parms.Actor = Actor;
	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UContextualAnimSceneActorComponent::OnJoinedScene(const struct FContextualAnimSceneBindings& InBindings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnJoinedScene");

	Params::ContextualAnimSceneActorComponent_OnJoinedScene Parms{};

	Parms.InBindings = std::move(InBindings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UContextualAnimSceneActorComponent::OnLeftScene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnLeftScene");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UContextualAnimSceneActorComponent::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnMontageBlendingOut");

	Params::ContextualAnimSceneActorComponent_OnMontageBlendingOut Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UContextualAnimSceneActorComponent::OnRep_Bindings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnRep_Bindings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UContextualAnimSceneActorComponent::OnRep_LateJoinData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnRep_LateJoinData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UContextualAnimSceneActorComponent::OnRep_RepTransitionSingleActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnRep_RepTransitionSingleActor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UContextualAnimSceneActorComponent::OnRep_TransitionData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnRep_TransitionData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UContextualAnimSceneActorComponent::OnTickPose(class USkinnedMeshComponent* SkinnedMeshComponent, float DeltaTime, bool bNeedsValidRootMotion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "OnTickPose");

	Params::ContextualAnimSceneActorComponent_OnTickPose Parms{};

	Parms.SkinnedMeshComponent = SkinnedMeshComponent;
	Parms.DeltaTime = DeltaTime;
	Parms.bNeedsValidRootMotion = bNeedsValidRootMotion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UContextualAnimSceneActorComponent::ServerEarlyOutContextualAnimScene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "ServerEarlyOutContextualAnimScene");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UContextualAnimSceneActorComponent::ServerStartContextualAnimScene(const struct FContextualAnimSceneBindings& InBindings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "ServerStartContextualAnimScene");

	Params::ContextualAnimSceneActorComponent_ServerStartContextualAnimScene Parms{};

	Parms.InBindings = std::move(InBindings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UContextualAnimSceneActorComponent::StartContextualAnimScene(const struct FContextualAnimSceneBindings& InBindings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "StartContextualAnimScene");

	Params::ContextualAnimSceneActorComponent_StartContextualAnimScene Parms{};

	Parms.InBindings = std::move(InBindings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UContextualAnimSceneActorComponent::TransitionContextualAnimScene(class FName SectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "TransitionContextualAnimScene");

	Params::ContextualAnimSceneActorComponent_TransitionContextualAnimScene Parms{};

	Parms.SectionName = SectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UContextualAnimSceneActorComponent::TransitionSingleActor(int32 SectionIdx, int32 AnimSetIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "TransitionSingleActor");

	Params::ContextualAnimSceneActorComponent_TransitionSingleActor Parms{};

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FContextualAnimIKTarget UContextualAnimSceneActorComponent::GetIKTargetByGoalName(class FName GoalName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "GetIKTargetByGoalName");

	Params::ContextualAnimSceneActorComponent_GetIKTargetByGoalName Parms{};

	Parms.GoalName = GoalName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<struct FContextualAnimIKTarget> UContextualAnimSceneActorComponent::GetIKTargets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneActorComponent", "GetIKTargets");

	Params::ContextualAnimSceneActorComponent_GetIKTargets Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAnimSequenceBase* UContextualAnimSceneAsset::BP_FindAnimationForRole(int32 SectionIdx, int32 AnimSetIdx, class FName Role) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_FindAnimationForRole");

	Params::ContextualAnimSceneAsset_BP_FindAnimationForRole Parms{};

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;
	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UContextualAnimSceneAsset::BP_FindAnimSetIndexByAnimation(int32 SectionIdx, const class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_FindAnimSetIndexByAnimation");

	Params::ContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation Parms{};

	Parms.SectionIdx = SectionIdx;
	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UContextualAnimSceneAsset::BP_GetAlignmentTransformForRoleRelativeToWarpPoint(int32 SectionIdx, int32 AnimSetIdx, class FName Role, float Time) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_GetAlignmentTransformForRoleRelativeToWarpPoint");

	Params::ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint Parms{};

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;
	Parms.Role = Role;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UContextualAnimSceneAsset::BP_GetIKTargetTransformForRoleAtTime(int32 SectionIdx, int32 AnimSetIdx, class FName Role, class FName trackName, float Time) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_GetIKTargetTransformForRoleAtTime");

	Params::ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime Parms{};

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;
	Parms.Role = Role;
	Parms.trackName = trackName;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UContextualAnimSceneAsset::BP_GetStartAndEndTimeForWarpSection(int32 SectionIdx, int32 AnimSetIdx, class FName Role, class FName WarpSectionName, float* OutStartTime, float* OutEndTime) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "BP_GetStartAndEndTimeForWarpSection");

	Params::ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection Parms{};

	Parms.SectionIdx = SectionIdx;
	Parms.AnimSetIdx = AnimSetIdx;
	Parms.Role = Role;
	Parms.WarpSectionName = WarpSectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutStartTime != nullptr)
		*OutStartTime = Parms.OutStartTime;

	if (OutEndTime != nullptr)
		*OutEndTime = Parms.OutEndTime;
}

void UContextualAnimSceneAsset::GetAlignmentPointsForSecondaryRole(EContextualAnimPointType Type, int32 SectionIdx, const struct FContextualAnimSceneBindingContext& Primary, TArray<struct FContextualAnimPoint>* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "GetAlignmentPointsForSecondaryRole");

	Params::ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole Parms{};

	Parms.Type = Type;
	Parms.SectionIdx = SectionIdx;
	Parms.Primary = std::move(Primary);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = std::move(Parms.outResult);
}

void UContextualAnimSceneAsset::GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria(EContextualAnimPointType Type, int32 SectionIdx, const struct FContextualAnimSceneBindingContext& Primary, const struct FContextualAnimSceneBindingContext& Querier, EContextualAnimCriterionToConsider CriterionToConsider, TArray<struct FContextualAnimPoint>* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria");

	Params::ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria Parms{};

	Parms.Type = Type;
	Parms.SectionIdx = SectionIdx;
	Parms.Primary = std::move(Primary);
	Parms.Querier = std::move(Querier);
	Parms.CriterionToConsider = CriterionToConsider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = std::move(Parms.outResult);
}

TArray<class FName> UContextualAnimSceneAsset::GetRoles() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "GetRoles");

	Params::ContextualAnimSceneAsset_GetRoles Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UContextualAnimSceneAsset::Query(class FName Role, struct FContextualAnimQueryResult* outResult, const struct FContextualAnimQueryParams& QueryParams, const struct FTransform& ToWorldTransform) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneAsset", "Query");

	Params::ContextualAnimSceneAsset_Query Parms{};

	Parms.Role = Role;
	Parms.QueryParams = std::move(QueryParams);
	Parms.ToWorldTransform = std::move(ToWorldTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = std::move(Parms.outResult);

	return Parms.ReturnValue;
}

void UContextualAnimSceneInstance::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneInstance", "OnMontageBlendingOut");

	Params::ContextualAnimSceneInstance_OnMontageBlendingOut Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UContextualAnimSceneInstance::OnNotifyBeginReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneInstance", "OnNotifyBeginReceived");

	Params::ContextualAnimSceneInstance_OnNotifyBeginReceived Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = std::move(BranchingPointNotifyPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UContextualAnimSceneInstance::OnNotifyEndReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneInstance", "OnNotifyEndReceived");

	Params::ContextualAnimSceneInstance_OnNotifyEndReceived Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = std::move(BranchingPointNotifyPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AActor* UContextualAnimSceneInstance::GetActorByRole(class FName Role) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSceneInstance", "GetActorByRole");

	Params::ContextualAnimSceneInstance_GetActorByRole Parms{};

	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UContextualAnimSelectionCriterion_Blueprint::BP_DoesQuerierPassCondition(const struct FContextualAnimSceneBindingContext& Primary, const struct FContextualAnimSceneBindingContext& Querier) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSelectionCriterion_Blueprint", "BP_DoesQuerierPassCondition");

	Params::ContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition Parms{};

	Parms.Primary = std::move(Primary);
	Parms.Querier = std::move(Querier);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

const class UContextualAnimSceneAsset* UContextualAnimSelectionCriterion_Blueprint::GetSceneAsset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimSelectionCriterion_Blueprint", "GetSceneAsset");

	Params::ContextualAnimSelectionCriterion_Blueprint_GetSceneAsset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UContextualAnimTransition::CanEnterTransition(const class UContextualAnimSceneInstance* SceneInstance, const class FName& FromSection, const class FName& ToSection) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextualAnimTransition", "CanEnterTransition");

	Params::ContextualAnimTransition_CanEnterTransition Parms{};

	Parms.SceneInstance = SceneInstance;
	Parms.FromSection = FromSection;
	Parms.ToSection = ToSection;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UContextualAnimUtilities::BP_CreateContextualAnimSceneBindings(const class UContextualAnimSceneAsset* SceneAsset, const TMap<class FName, struct FContextualAnimSceneBindingContext>& Params_0, struct FContextualAnimSceneBindings* OutBindings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_CreateContextualAnimSceneBindings");

	Params::ContextualAnimUtilities_BP_CreateContextualAnimSceneBindings Parms{};

	Parms.SceneAsset = SceneAsset;
	Parms.Params_0 = std::move(Params_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutBindings != nullptr)
		*OutBindings = std::move(Parms.OutBindings);

	return Parms.ReturnValue;
}

bool UContextualAnimUtilities::BP_CreateContextualAnimSceneBindingsForTwoActors(const class UContextualAnimSceneAsset* SceneAsset, const struct FContextualAnimSceneBindingContext& Primary, const struct FContextualAnimSceneBindingContext& Secondary, struct FContextualAnimSceneBindings* OutBindings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_CreateContextualAnimSceneBindingsForTwoActors");

	Params::ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors Parms{};

	Parms.SceneAsset = SceneAsset;
	Parms.Primary = std::move(Primary);
	Parms.Secondary = std::move(Secondary);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutBindings != nullptr)
		*OutBindings = std::move(Parms.OutBindings);

	return Parms.ReturnValue;
}

void UContextualAnimUtilities::BP_DrawDebugPose(const class UObject* WorldContextObject, const class UAnimSequenceBase* Animation, float Time, const struct FTransform& LocalToWorldTransform, const struct FLinearColor& Color, float LifeTime, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_DrawDebugPose");

	Params::ContextualAnimUtilities_BP_DrawDebugPose Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Animation = Animation;
	Parms.Time = Time;
	Parms.LocalToWorldTransform = std::move(LocalToWorldTransform);
	Parms.Color = std::move(Color);
	Parms.LifeTime = LifeTime;
	Parms.Thickness = Thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UContextualAnimUtilities::BP_Montage_GetSectionLength(const class UAnimMontage* Montage, int32 SectionIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_Montage_GetSectionLength");

	Params::ContextualAnimUtilities_BP_Montage_GetSectionLength Parms{};

	Parms.Montage = Montage;
	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UContextualAnimUtilities::BP_Montage_GetSectionStartAndEndTime(const class UAnimMontage* Montage, int32 SectionIndex, float* OutStartTime, float* OutEndTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_Montage_GetSectionStartAndEndTime");

	Params::ContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime Parms{};

	Parms.Montage = Montage;
	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutStartTime != nullptr)
		*OutStartTime = Parms.OutStartTime;

	if (OutEndTime != nullptr)
		*OutEndTime = Parms.OutEndTime;
}

float UContextualAnimUtilities::BP_Montage_GetSectionTimeLeftFromPos(const class UAnimMontage* Montage, float Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_Montage_GetSectionTimeLeftFromPos");

	Params::ContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos Parms{};

	Parms.Montage = Montage;
	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* UContextualAnimUtilities::BP_SceneBinding_GetActor(const struct FContextualAnimSceneBinding& Binding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBinding_GetActor");

	Params::ContextualAnimUtilities_BP_SceneBinding_GetActor Parms{};

	Parms.Binding = std::move(Binding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class UAnimSequenceBase* UContextualAnimUtilities::BP_SceneBinding_GetAnimationFromBinding(const struct FContextualAnimSceneBindings& Bindings, const struct FContextualAnimSceneBinding& Binding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBinding_GetAnimationFromBinding");

	Params::ContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding Parms{};

	Parms.Bindings = std::move(Bindings);
	Parms.Binding = std::move(Binding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UContextualAnimUtilities::BP_SceneBinding_GetRoleFromBinding(const struct FContextualAnimSceneBindings& Bindings, const struct FContextualAnimSceneBinding& Binding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBinding_GetRoleFromBinding");

	Params::ContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding Parms{};

	Parms.Bindings = std::move(Bindings);
	Parms.Binding = std::move(Binding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USkeletalMeshComponent* UContextualAnimUtilities::BP_SceneBinding_GetSkeletalMesh(const struct FContextualAnimSceneBinding& Binding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBinding_GetSkeletalMesh");

	Params::ContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh Parms{};

	Parms.Binding = std::move(Binding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* UContextualAnimUtilities::BP_SceneBindingContext_GetActor(const struct FContextualAnimSceneBindingContext& BindingContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_GetActor");

	Params::ContextualAnimUtilities_BP_SceneBindingContext_GetActor Parms{};

	Parms.BindingContext = std::move(BindingContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UContextualAnimUtilities::BP_SceneBindingContext_GetTransform(const struct FContextualAnimSceneBindingContext& BindingContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_GetTransform");

	Params::ContextualAnimUtilities_BP_SceneBindingContext_GetTransform Parms{};

	Parms.BindingContext = std::move(BindingContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UContextualAnimUtilities::BP_SceneBindingContext_GetVelocity(const struct FContextualAnimSceneBindingContext& BindingContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_GetVelocity");

	Params::ContextualAnimUtilities_BP_SceneBindingContext_GetVelocity Parms{};

	Parms.BindingContext = std::move(BindingContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FContextualAnimSceneBindingContext UContextualAnimUtilities::BP_SceneBindingContext_MakeFromActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_MakeFromActor");

	Params::ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FContextualAnimSceneBindingContext UContextualAnimUtilities::BP_SceneBindingContext_MakeFromActorWithExternalTransform(class AActor* Actor, const struct FTransform& ExternalTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindingContext_MakeFromActorWithExternalTransform");

	Params::ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform Parms{};

	Parms.Actor = Actor;
	Parms.ExternalTransform = std::move(ExternalTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UContextualAnimUtilities::BP_SceneBindings_AddOrUpdateWarpTargetsForBindings(const struct FContextualAnimSceneBindings& Bindings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_AddOrUpdateWarpTargetsForBindings");

	Params::ContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings Parms{};

	Parms.Bindings = std::move(Bindings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UContextualAnimUtilities::BP_SceneBindings_CalculateWarpPoints(const struct FContextualAnimSceneBindings& Bindings, TArray<struct FContextualAnimWarpPoint>* OutWarpPoints)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_CalculateWarpPoints");

	Params::ContextualAnimUtilities_BP_SceneBindings_CalculateWarpPoints Parms{};

	Parms.Bindings = std::move(Bindings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutWarpPoints != nullptr)
		*OutWarpPoints = std::move(Parms.OutWarpPoints);
}

struct FTransform UContextualAnimUtilities::BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole(const struct FContextualAnimSceneBindings& Bindings, class FName Role, class FName RelativeToRole, float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole");

	Params::ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole Parms{};

	Parms.Bindings = std::move(Bindings);
	Parms.Role = Role;
	Parms.RelativeToRole = RelativeToRole;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UContextualAnimUtilities::BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint(const struct FContextualAnimSceneBindings& Bindings, class FName Role, const struct FContextualAnimWarpPoint& WarpPoint, float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint");

	Params::ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint Parms{};

	Parms.Bindings = std::move(Bindings);
	Parms.Role = Role;
	Parms.WarpPoint = std::move(WarpPoint);
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UContextualAnimUtilities::BP_SceneBindings_GetAlignmentTransformFromBinding(const struct FContextualAnimSceneBindings& Bindings, const struct FContextualAnimSceneBinding& Binding, const struct FContextualAnimWarpPoint& WarpPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetAlignmentTransformFromBinding");

	Params::ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding Parms{};

	Parms.Bindings = std::move(Bindings);
	Parms.Binding = std::move(Binding);
	Parms.WarpPoint = std::move(WarpPoint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FContextualAnimSceneBinding UContextualAnimUtilities::BP_SceneBindings_GetBindingByActor(const struct FContextualAnimSceneBindings& Bindings, const class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetBindingByActor");

	Params::ContextualAnimUtilities_BP_SceneBindings_GetBindingByActor Parms{};

	Parms.Bindings = std::move(Bindings);
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FContextualAnimSceneBinding UContextualAnimUtilities::BP_SceneBindings_GetBindingByRole(const struct FContextualAnimSceneBindings& Bindings, class FName Role)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetBindingByRole");

	Params::ContextualAnimUtilities_BP_SceneBindings_GetBindingByRole Parms{};

	Parms.Bindings = std::move(Bindings);
	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<struct FContextualAnimSceneBinding> UContextualAnimUtilities::BP_SceneBindings_GetBindings(const struct FContextualAnimSceneBindings& Bindings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetBindings");

	Params::ContextualAnimUtilities_BP_SceneBindings_GetBindings Parms{};

	Parms.Bindings = std::move(Bindings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class UContextualAnimSceneAsset* UContextualAnimUtilities::BP_SceneBindings_GetSceneAsset(const struct FContextualAnimSceneBindings& Bindings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetSceneAsset");

	Params::ContextualAnimUtilities_BP_SceneBindings_GetSceneAsset Parms{};

	Parms.Bindings = std::move(Bindings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UContextualAnimUtilities::BP_SceneBindings_GetSectionAndAnimSetIndices(const struct FContextualAnimSceneBindings& Bindings, int32* SectionIdx, int32* AnimSetIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ContextualAnimUtilities", "BP_SceneBindings_GetSectionAndAnimSetIndices");

	Params::ContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices Parms{};

	Parms.Bindings = std::move(Bindings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SectionIdx != nullptr)
		*SectionIdx = Parms.SectionIdx;

	if (AnimSetIdx != nullptr)
		*AnimSetIdx = Parms.AnimSetIdx;
}

}
