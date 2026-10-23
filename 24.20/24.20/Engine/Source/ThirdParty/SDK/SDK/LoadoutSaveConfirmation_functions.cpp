#pragma once

#include "Basic.hpp"

#include "LoadoutSaveConfirmation_classes.hpp"
#include "LoadoutSaveConfirmation_parameters.hpp"

namespace SDK
{

void ULoadoutSaveConfirmation_C::ExecuteUbergraph_LoadoutSaveConfirmation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadoutSaveConfirmation_C", "ExecuteUbergraph_LoadoutSaveConfirmation");

	Params::LoadoutSaveConfirmation_C_ExecuteUbergraph_LoadoutSaveConfirmation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULoadoutSaveConfirmation_C::OnCanSaveAsNew(bool bCanSaveAsNew)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadoutSaveConfirmation_C", "OnCanSaveAsNew");

	Params::LoadoutSaveConfirmation_C_OnCanSaveAsNew Parms{};

	Parms.bCanSaveAsNew = bCanSaveAsNew;

	UObject::ProcessEvent(Func, &Parms);
}

void ULoadoutSaveConfirmation_C::Toggle_Save_as_New_Visibility(bool CanSaveAsNew)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadoutSaveConfirmation_C", "Toggle Save as New Visibility");

	Params::LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility Parms{};

	Parms.CanSaveAsNew = CanSaveAsNew;

	UObject::ProcessEvent(Func, &Parms);
}

}
