#pragma once

#include "Basic.hpp"

#include "GAB_DropPlayer_classes.hpp"
#include "GAB_DropPlayer_parameters.hpp"

namespace SDK
{

void UGAB_DropPlayer_C::Cancelled_89F288114D44792D5568298354B7216C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_DropPlayer_C", "Cancelled_89F288114D44792D5568298354B7216C");

	Params::GAB_DropPlayer_C_Cancelled_89F288114D44792D5568298354B7216C Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_DropPlayer_C::Completed_89F288114D44792D5568298354B7216C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_DropPlayer_C", "Completed_89F288114D44792D5568298354B7216C");

	Params::GAB_DropPlayer_C_Completed_89F288114D44792D5568298354B7216C Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_DropPlayer_C::ExecuteUbergraph_GAB_DropPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_DropPlayer_C", "ExecuteUbergraph_GAB_DropPlayer");

	Params::GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_DropPlayer_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_DropPlayer_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_DropPlayer_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_DropPlayer_C", "K2_OnEndAbility");

	Params::GAB_DropPlayer_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_DropPlayer_C::Triggered_89F288114D44792D5568298354B7216C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_DropPlayer_C", "Triggered_89F288114D44792D5568298354B7216C");

	Params::GAB_DropPlayer_C_Triggered_89F288114D44792D5568298354B7216C Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

}
