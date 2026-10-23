#pragma once

#include "Basic.hpp"

#include "AnimNotify_Player_HandSplash_R_classes.hpp"
#include "AnimNotify_Player_HandSplash_R_parameters.hpp"

namespace SDK
{

bool UAnimNotify_Player_HandSplash_R_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_Player_HandSplash_R_C", "Received_Notify");

	Params::AnimNotify_Player_HandSplash_R_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
