#pragma once

#include "Basic.hpp"

#include "ItemSeriesOrRarity_classes.hpp"
#include "ItemSeriesOrRarity_parameters.hpp"

namespace SDK
{

void UItemSeriesOrRarity_C::UpdateItemDefinition(class UFortItemDefinition* ItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSeriesOrRarity_C", "UpdateItemDefinition");

	Params::ItemSeriesOrRarity_C_UpdateItemDefinition Parms{};

	Parms.ItemDefinition = ItemDefinition;

	UObject::ProcessEvent(Func, &Parms);
}

}
