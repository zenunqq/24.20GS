#pragma once

#include "Basic.hpp"

#include "AnimNotifyState_SyncPettingCreature_classes.hpp"
#include "AnimNotifyState_SyncPettingCreature_parameters.hpp"

namespace SDK
{

void UAnimNotifyState_SyncPettingCreature_C::GetRiderPettingMontage(class AActor* RiderActor, class UAnimMontage** RiderPettingMontage) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_SyncPettingCreature_C", "GetRiderPettingMontage");

	Params::AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage Parms{};

	Parms.RiderActor = RiderActor;

	UObject::ProcessEvent(Func, &Parms);

	if (RiderPettingMontage != nullptr)
		*RiderPettingMontage = Parms.RiderPettingMontage;
}

bool UAnimNotifyState_SyncPettingCreature_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_SyncPettingCreature_C", "Received_NotifyBegin");

	Params::AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UAnimNotifyState_SyncPettingCreature_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_SyncPettingCreature_C", "Received_NotifyEnd");

	Params::AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
