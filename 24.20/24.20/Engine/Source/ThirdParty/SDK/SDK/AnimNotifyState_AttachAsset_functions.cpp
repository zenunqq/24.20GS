#pragma once

#include "Basic.hpp"

#include "AnimNotifyState_AttachAsset_classes.hpp"
#include "AnimNotifyState_AttachAsset_parameters.hpp"

namespace SDK
{

bool UAnimNotifyState_AttachAsset_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation_0, float TotalDuration, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_AttachAsset_C", "Received_NotifyBegin");

	Params::AnimNotifyState_AttachAsset_C_Received_NotifyBegin Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation_0 = Animation_0;
	Parms.TotalDuration = TotalDuration;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UAnimNotifyState_AttachAsset_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation_0, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_AttachAsset_C", "Received_NotifyEnd");

	Params::AnimNotifyState_AttachAsset_C_Received_NotifyEnd Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation_0 = Animation_0;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
