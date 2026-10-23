#pragma once

#include "Basic.hpp"

#include "B_MasterPetAnimBP_classes.hpp"
#include "B_MasterPetAnimBP_parameters.hpp"

namespace SDK
{

void UB_MasterPetAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimGraph");

	Params::B_MasterPetAnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void UB_MasterPetAnimBP_C::AnimNotify_CrouchIdle1_FullyBlended()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_CrouchIdle1_FullyBlended");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_MasterPetAnimBP_C::AnimNotify_CrouchIdle2_FullyBlended()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_CrouchIdle2_FullyBlended");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_MasterPetAnimBP_C::AnimNotify_Entered_Crouching()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_Entered_Crouching");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_MasterPetAnimBP_C::AnimNotify_Entered_DownSightsToCrouch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_Entered_DownSightsToCrouch");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_MasterPetAnimBP_C::AnimNotify_RollRandomIdle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_RollRandomIdle");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_MasterPetAnimBP_C::AnimNotify_RollRandomIdle2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_RollRandomIdle2");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_MasterPetAnimBP_C::AnimNotify_StartJump_Entered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_StartJump_Entered");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_MasterPetAnimBP_C::AnimNotify_StartJump_Entered_Test()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_StartJump_Entered_Test");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_MasterPetAnimBP_C::ExecuteUbergraph_B_MasterPetAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "ExecuteUbergraph_B_MasterPetAnimBP");

	Params::B_MasterPetAnimBP_C_ExecuteUbergraph_B_MasterPetAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UB_MasterPetAnimBP_C::LobbySkyDive_IsDiving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "LobbySkyDive_IsDiving");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_MasterPetAnimBP_C::LobbySkyDive_IsGliding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "LobbySkyDive_IsGliding");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_MasterPetAnimBP_C::PetFullOverrideLayer(const struct FPoseLink& InPose, struct FPoseLink* PetFullOverrideLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "PetFullOverrideLayer");

	Params::B_MasterPetAnimBP_C_PetFullOverrideLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (PetFullOverrideLayer_0 != nullptr)
		*PetFullOverrideLayer_0 = std::move(Parms.PetFullOverrideLayer_0);
}

void UB_MasterPetAnimBP_C::PetSkeletalControlLayer(const struct FPoseLink& Pose, double LookAtOverrideInput_0, const struct FVector& LookAtTargetLocationInput_0, double LegIKAlphaOverride_0, double HandIKAlphaOverride_0, struct FPoseLink* PetSkeletalControlLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "PetSkeletalControlLayer");

	Params::B_MasterPetAnimBP_C_PetSkeletalControlLayer Parms{};

	Parms.Pose = std::move(Pose);
	Parms.LookAtOverrideInput_0 = LookAtOverrideInput_0;
	Parms.LookAtTargetLocationInput_0 = std::move(LookAtTargetLocationInput_0);
	Parms.LegIKAlphaOverride_0 = LegIKAlphaOverride_0;
	Parms.HandIKAlphaOverride_0 = HandIKAlphaOverride_0;

	UObject::ProcessEvent(Func, &Parms);

	if (PetSkeletalControlLayer_0 != nullptr)
		*PetSkeletalControlLayer_0 = std::move(Parms.PetSkeletalControlLayer_0);
}

}
