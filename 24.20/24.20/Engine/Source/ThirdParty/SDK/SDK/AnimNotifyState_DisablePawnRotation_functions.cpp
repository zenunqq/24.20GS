#pragma once

#include "Basic.hpp"

#include "AnimNotifyState_DisablePawnRotation_classes.hpp"
#include "AnimNotifyState_DisablePawnRotation_parameters.hpp"

namespace SDK
{

bool UAnimNotifyState_DisablePawnRotation_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_DisablePawnRotation_C", "Received_NotifyBegin");

	Params::AnimNotifyState_DisablePawnRotation_C_Received_NotifyBegin Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UAnimNotifyState_DisablePawnRotation_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_DisablePawnRotation_C", "Received_NotifyEnd");

	Params::AnimNotifyState_DisablePawnRotation_C_Received_NotifyEnd Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
