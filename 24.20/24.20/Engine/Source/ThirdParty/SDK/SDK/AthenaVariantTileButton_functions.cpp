#pragma once

#include "Basic.hpp"

#include "AthenaVariantTileButton_classes.hpp"
#include "AthenaVariantTileButton_parameters.hpp"

namespace SDK
{

void UAthenaVariantTileButton_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaVariantTileButton_C", "OnListItemObjectSet");

	Params::AthenaVariantTileButton_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaVariantTileButton_C::ExecuteUbergraph_AthenaVariantTileButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaVariantTileButton_C", "ExecuteUbergraph_AthenaVariantTileButton");

	Params::AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaVariantTileButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaVariantTileButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaVariantTileButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaVariantTileButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

}
