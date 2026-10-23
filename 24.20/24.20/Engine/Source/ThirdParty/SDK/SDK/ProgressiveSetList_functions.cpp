#pragma once

#include "Basic.hpp"

#include "ProgressiveSetList_classes.hpp"
#include "ProgressiveSetList_parameters.hpp"

namespace SDK
{

class UFortProgressiveSetTile* UProgressiveSetList_C::AddSetTile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveSetList_C", "AddSetTile");

	Params::ProgressiveSetList_C_AddSetTile Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UProgressiveSetList_C::ClearSetTiles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveSetList_C", "ClearSetTiles");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveSetList_C::ExecuteUbergraph_ProgressiveSetList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveSetList_C", "ExecuteUbergraph_ProgressiveSetList");

	Params::ProgressiveSetList_C_ExecuteUbergraph_ProgressiveSetList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
