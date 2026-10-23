#pragma once

#include "Basic.hpp"

#include "PlayerAnimOverrideLayerInterface_classes.hpp"
#include "PlayerAnimOverrideLayerInterface_parameters.hpp"

namespace SDK
{

void IPlayerAnimOverrideLayerInterface_C::CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerAnimOverrideLayerInterface_C", "CharacterSkeletalControlPostLegIK");

	Params::PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK Parms{};

	Parms.InPosePostLegIK = std::move(InPosePostLegIK);

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterSkeletalControlPostLegIK_0 != nullptr)
		*CharacterSkeletalControlPostLegIK_0 = std::move(Parms.CharacterSkeletalControlPostLegIK_0);
}

void IPlayerAnimOverrideLayerInterface_C::FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerAnimOverrideLayerInterface_C", "FullBodyOverride");

	Params::PlayerAnimOverrideLayerInterface_C_FullBodyOverride Parms{};

	Parms.PassThroughFullBodyPose = std::move(PassThroughFullBodyPose);

	UObject::ProcessEvent(Func, &Parms);

	if (FullBodyOverride_0 != nullptr)
		*FullBodyOverride_0 = std::move(Parms.FullBodyOverride_0);
}

}
