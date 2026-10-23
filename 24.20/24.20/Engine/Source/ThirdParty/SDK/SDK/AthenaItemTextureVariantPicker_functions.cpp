#pragma once

#include "Basic.hpp"

#include "AthenaItemTextureVariantPicker_classes.hpp"
#include "AthenaItemTextureVariantPicker_parameters.hpp"

namespace SDK
{

void UAthenaItemTextureVariantPicker_C::OnToggleAllItemsArchivedMessage(bool bDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemTextureVariantPicker_C", "OnToggleAllItemsArchivedMessage");

	Params::AthenaItemTextureVariantPicker_C_OnToggleAllItemsArchivedMessage Parms{};

	Parms.bDisplay = bDisplay;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemTextureVariantPicker_C::ExecuteUbergraph_AthenaItemTextureVariantPicker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemTextureVariantPicker_C", "ExecuteUbergraph_AthenaItemTextureVariantPicker");

	Params::AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemTextureVariantPicker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemTextureVariantPicker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
