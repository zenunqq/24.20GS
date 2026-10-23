#pragma once

#include "Basic.hpp"

#include "AthenaLoadoutTile_classes.hpp"
#include "AthenaLoadoutTile_parameters.hpp"

namespace SDK
{

void UAthenaLoadoutTile_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLoadoutTile_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLoadoutTile_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLoadoutTile_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLoadoutTile_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLoadoutTile_C", "BP_OnItemSelectionChanged");

	Params::AthenaLoadoutTile_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLoadoutTile_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLoadoutTile_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLoadoutTile_C::ExecuteUbergraph_AthenaLoadoutTile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLoadoutTile_C", "ExecuteUbergraph_AthenaLoadoutTile");

	Params::AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
