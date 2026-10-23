#pragma once

#include "Basic.hpp"

#include "WBP_Violator_classes.hpp"
#include "WBP_Violator_parameters.hpp"

namespace SDK
{

void UWBP_Violator_C::ExecuteUbergraph_WBP_Violator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Violator_C", "ExecuteUbergraph_WBP_Violator");

	Params::WBP_Violator_C_ExecuteUbergraph_WBP_Violator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Violator_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Violator_C", "PreConstruct");

	Params::WBP_Violator_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Violator_C::UpdateViolatorText(const class FText& InText, bool bDisplayTimeIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Violator_C", "UpdateViolatorText");

	Params::WBP_Violator_C_UpdateViolatorText Parms{};

	Parms.InText = std::move(InText);
	Parms.bDisplayTimeIcon = bDisplayTimeIcon;

	UObject::ProcessEvent(Func, &Parms);
}

}
