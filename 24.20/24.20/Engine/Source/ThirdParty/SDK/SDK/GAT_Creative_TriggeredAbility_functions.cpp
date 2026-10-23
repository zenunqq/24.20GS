#pragma once

#include "Basic.hpp"

#include "GAT_Creative_TriggeredAbility_classes.hpp"
#include "GAT_Creative_TriggeredAbility_parameters.hpp"

namespace SDK
{

void UGAT_Creative_TriggeredAbility_C::AbilityTimeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_C", "AbilityTimeout");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAT_Creative_TriggeredAbility_C::ExecuteUbergraph_GAT_Creative_TriggeredAbility(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_C", "ExecuteUbergraph_GAT_Creative_TriggeredAbility");

	Params::GAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAT_Creative_TriggeredAbility_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_C", "K2_ActivateAbilityFromEvent");

	Params::GAT_Creative_TriggeredAbility_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAT_Creative_TriggeredAbility_C::SetupAbilityFailsafeTimer(double Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_C", "SetupAbilityFailsafeTimer");

	Params::GAT_Creative_TriggeredAbility_C_SetupAbilityFailsafeTimer Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAT_Creative_TriggeredAbility_C::IsPropertyOverridden(class FName PropertyName, bool* bResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_C", "IsPropertyOverridden");

	Params::GAT_Creative_TriggeredAbility_C_IsPropertyOverridden Parms{};

	Parms.PropertyName = PropertyName;

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}

}
