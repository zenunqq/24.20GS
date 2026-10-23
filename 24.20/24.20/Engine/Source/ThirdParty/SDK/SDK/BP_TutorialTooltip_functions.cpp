#pragma once

#include "Basic.hpp"

#include "BP_TutorialTooltip_classes.hpp"
#include "BP_TutorialTooltip_parameters.hpp"

namespace SDK
{

void UBP_TutorialTooltip_C::ExecuteUbergraph_BP_TutorialTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TutorialTooltip_C", "ExecuteUbergraph_BP_TutorialTooltip");

	Params::BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_TutorialTooltip_C::HideTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TutorialTooltip_C", "HideTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_TutorialTooltip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TutorialTooltip_C", "PreConstruct");

	Params::BP_TutorialTooltip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_TutorialTooltip_C::ShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TutorialTooltip_C", "ShowTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

}
