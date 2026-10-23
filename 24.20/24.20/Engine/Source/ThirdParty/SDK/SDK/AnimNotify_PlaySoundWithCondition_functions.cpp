#pragma once

#include "Basic.hpp"

#include "AnimNotify_PlaySoundWithCondition_classes.hpp"
#include "AnimNotify_PlaySoundWithCondition_parameters.hpp"

namespace SDK
{

bool UAnimNotify_PlaySoundWithCondition_C::ShouldTriggerAnimNotify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_PlaySoundWithCondition_C", "ShouldTriggerAnimNotify");

	Params::AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
