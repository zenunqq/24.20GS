#pragma once

#include "Basic.hpp"

#include "GAB_GenericApplyFullBodyHit_classes.hpp"
#include "GAB_GenericApplyFullBodyHit_parameters.hpp"

namespace SDK
{

void UGAB_GenericApplyFullBodyHit_C::ExecuteUbergraph_GAB_GenericApplyFullBodyHit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericApplyFullBodyHit_C", "ExecuteUbergraph_GAB_GenericApplyFullBodyHit");

	Params::GAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_GenericApplyFullBodyHit_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericApplyFullBodyHit_C", "K2_ActivateAbilityFromEvent");

	Params::GAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_GenericApplyFullBodyHit_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericApplyFullBodyHit_C", "K2_OnEndAbility");

	Params::GAB_GenericApplyFullBodyHit_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_GenericApplyFullBodyHit_C::OnBlendOut_25E5E66442E815EB40A6DB8205FE0D98()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericApplyFullBodyHit_C", "OnBlendOut_25E5E66442E815EB40A6DB8205FE0D98");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_GenericApplyFullBodyHit_C::OnCancelled_25E5E66442E815EB40A6DB8205FE0D98()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericApplyFullBodyHit_C", "OnCancelled_25E5E66442E815EB40A6DB8205FE0D98");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_GenericApplyFullBodyHit_C::OnCompleted_25E5E66442E815EB40A6DB8205FE0D98()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericApplyFullBodyHit_C", "OnCompleted_25E5E66442E815EB40A6DB8205FE0D98");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_GenericApplyFullBodyHit_C::OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericApplyFullBodyHit_C", "OnHitPawn");

	Params::GAB_GenericApplyFullBodyHit_C_OnHitPawn Parms{};

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_GenericApplyFullBodyHit_C::OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericApplyFullBodyHit_C", "OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_GenericApplyFullBodyHit_C::PickFullBodyHitMontageSection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericApplyFullBodyHit_C", "PickFullBodyHitMontageSection");

	UObject::ProcessEvent(Func, nullptr);
}

bool UGAB_GenericApplyFullBodyHit_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericApplyFullBodyHit_C", "K2_CanActivateAbility");

	Params::GAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}
