#pragma once

#include "Basic.hpp"

#include "BPS24_TutorialTooltip_classes.hpp"
#include "BPS24_TutorialTooltip_parameters.hpp"

namespace SDK
{

void UBPS24_TutorialTooltip_C::ExecuteUbergraph_BPS24_TutorialTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_TutorialTooltip_C", "ExecuteUbergraph_BPS24_TutorialTooltip");

	Params::BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_TutorialTooltip_C::HideTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_TutorialTooltip_C", "HideTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_TutorialTooltip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_TutorialTooltip_C", "PreConstruct");

	Params::BPS24_TutorialTooltip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_TutorialTooltip_C::ShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_TutorialTooltip_C", "ShowTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

}
