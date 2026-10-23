#pragma once

#include "Basic.hpp"

#include "BP_AthenaCollectionLocationEntry_Character_classes.hpp"
#include "BP_AthenaCollectionLocationEntry_Character_parameters.hpp"

namespace SDK
{

void UBP_AthenaCollectionLocationEntry_Character_C::BP_OnLocationsFoundSet(ELocationEntryState EntryState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionLocationEntry_Character_C", "BP_OnLocationsFoundSet");

	Params::BP_AthenaCollectionLocationEntry_Character_C_BP_OnLocationsFoundSet Parms{};

	Parms.EntryState = EntryState;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaCollectionLocationEntry_Character_C::ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionLocationEntry_Character_C", "ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character");

	Params::BP_AthenaCollectionLocationEntry_Character_C_ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
