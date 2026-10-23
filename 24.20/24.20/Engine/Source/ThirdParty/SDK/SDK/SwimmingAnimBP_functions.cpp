#pragma once

#include "Basic.hpp"

#include "SwimmingAnimBP_classes.hpp"
#include "SwimmingAnimBP_parameters.hpp"

namespace SDK
{

void USwimmingAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "AnimGraph");

	Params::SwimmingAnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void USwimmingAnimBP_C::AnimNotify_SwimMovementAccelAdditive_Exited_Layer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimMovementAccelAdditive_Exited_Layer");

	UObject::ProcessEvent(Func, nullptr);
}

void USwimmingAnimBP_C::AnimNotify_SwimSprint_Entered_Layer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimSprint_Entered_Layer");

	UObject::ProcessEvent(Func, nullptr);
}

void USwimmingAnimBP_C::AnimNotify_SwimSprintSlow_Entered_Layer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimSprintSlow_Entered_Layer");

	UObject::ProcessEvent(Func, nullptr);
}

void USwimmingAnimBP_C::AnimNotify_SwimSprintStart_Entered_Layer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimSprintStart_Entered_Layer");

	UObject::ProcessEvent(Func, nullptr);
}

void USwimmingAnimBP_C::AnimNotify_SwimSprintStart_Exited_Layer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimSprintStart_Exited_Layer");

	UObject::ProcessEvent(Func, nullptr);
}

void USwimmingAnimBP_C::AnimNotify_SwimStartAdditive_Entered_Layer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimStartAdditive_Entered_Layer");

	UObject::ProcessEvent(Func, nullptr);
}

void USwimmingAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_63C0C596447D773617BA3F81E189DD6A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_63C0C596447D773617BA3F81E189DD6A");

	UObject::ProcessEvent(Func, nullptr);
}

void USwimmingAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_A2BC0C1C4C08F505008D78822E2CDA35()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_A2BC0C1C4C08F505008D78822E2CDA35");

	UObject::ProcessEvent(Func, nullptr);
}

void USwimmingAnimBP_C::ExecuteUbergraph_SwimmingAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "ExecuteUbergraph_SwimmingAnimBP");

	Params::SwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USwimmingAnimBP_C::MovementMode_AimOffset(const struct FPoseLink& InAimOffsetsPose, const struct FPoseLink& InSourcePosePreAimOffsets, struct FPoseLink* MovementMode_AimOffset_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "MovementMode_AimOffset");

	Params::SwimmingAnimBP_C_MovementMode_AimOffset Parms{};

	Parms.InAimOffsetsPose = std::move(InAimOffsetsPose);
	Parms.InSourcePosePreAimOffsets = std::move(InSourcePosePreAimOffsets);

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_AimOffset_0 != nullptr)
		*MovementMode_AimOffset_0 = std::move(Parms.MovementMode_AimOffset_0);
}

void USwimmingAnimBP_C::MovementMode_FinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* MovementMode_FinalPoseOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "MovementMode_FinalPoseOverride");

	Params::SwimmingAnimBP_C_MovementMode_FinalPoseOverride Parms{};

	Parms.InFinalPose = std::move(InFinalPose);

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_FinalPoseOverride_0 != nullptr)
		*MovementMode_FinalPoseOverride_0 = std::move(Parms.MovementMode_FinalPoseOverride_0);
}

void USwimmingAnimBP_C::MovementMode_FullBodyOverride(const struct FPoseLink& InputPoseFullBody, struct FPoseLink* MovementMode_FullBodyOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "MovementMode_FullBodyOverride");

	Params::SwimmingAnimBP_C_MovementMode_FullBodyOverride Parms{};

	Parms.InputPoseFullBody = std::move(InputPoseFullBody);

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_FullBodyOverride_0 != nullptr)
		*MovementMode_FullBodyOverride_0 = std::move(Parms.MovementMode_FullBodyOverride_0);
}

void USwimmingAnimBP_C::MovementMode_LocomotionAdditives(const struct FPoseLink& InLocomotionAdditivesPose, struct FPoseLink* MovementMode_LocomotionAdditives_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "MovementMode_LocomotionAdditives");

	Params::SwimmingAnimBP_C_MovementMode_LocomotionAdditives Parms{};

	Parms.InLocomotionAdditivesPose = std::move(InLocomotionAdditivesPose);

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LocomotionAdditives_0 != nullptr)
		*MovementMode_LocomotionAdditives_0 = std::move(Parms.MovementMode_LocomotionAdditives_0);
}

void USwimmingAnimBP_C::MovementMode_LowerBodyOverride(const struct FPoseLink& InLowerBodyPose, const struct FPoseLink& InSourcePose, struct FPoseLink* MovementMode_LowerBodyOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "MovementMode_LowerBodyOverride");

	Params::SwimmingAnimBP_C_MovementMode_LowerBodyOverride Parms{};

	Parms.InLowerBodyPose = std::move(InLowerBodyPose);
	Parms.InSourcePose = std::move(InSourcePose);

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LowerBodyOverride_0 != nullptr)
		*MovementMode_LowerBodyOverride_0 = std::move(Parms.MovementMode_LowerBodyOverride_0);
}

void USwimmingAnimBP_C::MovementMode_SourcePose(const struct FPoseLink& InSourcePoseBase, struct FPoseLink* MovementMode_SourcePose_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "MovementMode_SourcePose");

	Params::SwimmingAnimBP_C_MovementMode_SourcePose Parms{};

	Parms.InSourcePoseBase = std::move(InSourcePoseBase);

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_SourcePose_0 != nullptr)
		*MovementMode_SourcePose_0 = std::move(Parms.MovementMode_SourcePose_0);
}

void USwimmingAnimBP_C::On_Dive_Jump_Ground_Land_Update(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwimmingAnimBP_C", "On Dive Jump Ground Land Update");

	Params::SwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update Parms{};

	Parms.Context = std::move(Context);
	Parms.Node = std::move(Node);

	UObject::ProcessEvent(Func, &Parms);
}

}
