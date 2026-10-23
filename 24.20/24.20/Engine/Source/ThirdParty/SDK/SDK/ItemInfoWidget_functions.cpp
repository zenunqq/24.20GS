#pragma once

#include "Basic.hpp"

#include "ItemInfoWidget_classes.hpp"
#include "ItemInfoWidget_parameters.hpp"

namespace SDK
{

void UItemInfoWidget_C::SetRarityMaterialValues(class UFortItemDefinition* ItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoWidget_C", "SetRarityMaterialValues");

	Params::ItemInfoWidget_C_SetRarityMaterialValues Parms{};

	Parms.ItemDefinition = ItemDefinition;

	UObject::ProcessEvent(Func, &Parms);
}

void UItemInfoWidget_C::ExecuteUbergraph_ItemInfoWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoWidget_C", "ExecuteUbergraph_ItemInfoWidget");

	Params::ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
