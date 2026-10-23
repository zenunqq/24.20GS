#pragma once

#include "Basic.hpp"

#include "GA_Riding_Player_Petting_classes.hpp"
#include "GA_Riding_Player_Petting_parameters.hpp"

namespace SDK
{

void UGA_Riding_Player_Petting_C::Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Petting_C", "Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Riding_Player_Petting_C::ExecuteUbergraph_GA_Riding_Player_Petting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Petting_C", "ExecuteUbergraph_GA_Riding_Player_Petting");

	Params::GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Riding_Player_Petting_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Petting_C", "FailedToActivatePassiveAbility");

	Params::GA_Riding_Player_Petting_C_FailedToActivatePassiveAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Riding_Player_Petting_C::GetRiderPettingMontage(class UAnimMontage** RiderPettingMontage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Petting_C", "GetRiderPettingMontage");

	Params::GA_Riding_Player_Petting_C_GetRiderPettingMontage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RiderPettingMontage != nullptr)
		*RiderPettingMontage = Parms.RiderPettingMontage;
}

void UGA_Riding_Player_Petting_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Petting_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Riding_Player_Petting_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Petting_C", "K2_OnEndAbility");

	Params::GA_Riding_Player_Petting_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Riding_Player_Petting_C::OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Petting_C", "OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Riding_Player_Petting_C::OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Petting_C", "OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Riding_Player_Petting_C::OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Petting_C", "OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Riding_Player_Petting_C::OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Petting_C", "OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Riding_Player_Petting_C::PettingTelemetry(class AActor* Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Riding_Player_Petting_C", "PettingTelemetry");

	Params::GA_Riding_Player_Petting_C_PettingTelemetry Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);
}

}
