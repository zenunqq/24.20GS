#pragma once

#include "Basic.hpp"

#include "AnimNotifyState_NiagaraNotify_SetParameters_classes.hpp"
#include "AnimNotifyState_NiagaraNotify_SetParameters_parameters.hpp"

namespace SDK
{

bool UAnimNotifyState_NiagaraNotify_SetParameters_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_NiagaraNotify_SetParameters_C", "Received_NotifyTick");

	Params::AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.FrameDeltaTime = FrameDeltaTime;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
