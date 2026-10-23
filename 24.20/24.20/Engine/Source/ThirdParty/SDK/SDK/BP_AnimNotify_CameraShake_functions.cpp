#pragma once

#include "Basic.hpp"

#include "BP_AnimNotify_CameraShake_classes.hpp"
#include "BP_AnimNotify_CameraShake_parameters.hpp"

namespace SDK
{

bool UBP_AnimNotify_CameraShake_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnimNotify_CameraShake_C", "Received_Notify");

	Params::BP_AnimNotify_CameraShake_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
