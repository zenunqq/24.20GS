#pragma once

#include "Basic.hpp"

#include "BPS24_CustomizationScreen_classes.hpp"
#include "BPS24_CustomizationScreen_parameters.hpp"

namespace SDK
{

void UBPS24_CustomizationScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_CustomizationScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_CustomizationScreen_C::ExecuteUbergraph_BPS24_CustomizationScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_CustomizationScreen_C", "ExecuteUbergraph_BPS24_CustomizationScreen");

	Params::BPS24_CustomizationScreen_C_ExecuteUbergraph_BPS24_CustomizationScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
