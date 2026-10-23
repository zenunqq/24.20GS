#pragma once

#include "Basic.hpp"

#include "AnimNotifyState_StopMontageGroup_classes.hpp"
#include "AnimNotifyState_StopMontageGroup_parameters.hpp"

namespace SDK
{

bool UAnimNotifyState_StopMontageGroup_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_StopMontageGroup_C", "Received_NotifyBegin");

	Params::AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
