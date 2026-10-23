#pragma once

#include "Basic.hpp"

#include "CosmeticLoadoutScreen_classes.hpp"
#include "CosmeticLoadoutScreen_parameters.hpp"

namespace SDK
{

void UCosmeticLoadoutScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UCosmeticLoadoutScreen_C::ExecuteUbergraph_CosmeticLoadoutScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutScreen_C", "ExecuteUbergraph_CosmeticLoadoutScreen");

	Params::CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticLoadoutScreen_C::OnFlavorForScreenMode(EFortCosmeticLoadoutScreenMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutScreen_C", "OnFlavorForScreenMode");

	Params::CosmeticLoadoutScreen_C_OnFlavorForScreenMode Parms{};

	Parms.NewMode = NewMode;

	UObject::ProcessEvent(Func, &Parms);
}

}
