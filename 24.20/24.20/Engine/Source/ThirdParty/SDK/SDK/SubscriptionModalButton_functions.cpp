#pragma once

#include "Basic.hpp"

#include "SubscriptionModalButton_classes.hpp"
#include "SubscriptionModalButton_parameters.hpp"

namespace SDK
{

void USubscriptionModalButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionModalButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USubscriptionModalButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionModalButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USubscriptionModalButton_C::ExecuteUbergraph_SubscriptionModalButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionModalButton_C", "ExecuteUbergraph_SubscriptionModalButton");

	Params::SubscriptionModalButton_C_ExecuteUbergraph_SubscriptionModalButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USubscriptionModalButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionModalButton_C", "PreConstruct");

	Params::SubscriptionModalButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void USubscriptionModalButton_C::SetBorderShowEffectWhenDisable(bool ShowEffectWhenDisabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionModalButton_C", "SetBorderShowEffectWhenDisable");

	Params::SubscriptionModalButton_C_SetBorderShowEffectWhenDisable Parms{};

	Parms.ShowEffectWhenDisabled = ShowEffectWhenDisabled;

	UObject::ProcessEvent(Func, &Parms);
}

}
