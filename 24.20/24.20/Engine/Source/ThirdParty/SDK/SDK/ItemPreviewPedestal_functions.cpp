#pragma once

#include "Basic.hpp"

#include "ItemPreviewPedestal_classes.hpp"
#include "ItemPreviewPedestal_parameters.hpp"

namespace SDK
{

void AItemPreviewPedestal_C::ExecuteUbergraph_ItemPreviewPedestal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPreviewPedestal_C", "ExecuteUbergraph_ItemPreviewPedestal");

	Params::ItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AItemPreviewPedestal_C::Remove_Floor(class AFortItemPreviewActor* Preview)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPreviewPedestal_C", "Remove Floor");

	Params::ItemPreviewPedestal_C_Remove_Floor Parms{};

	Parms.Preview = Preview;

	UObject::ProcessEvent(Func, &Parms);
}

void AItemPreviewPedestal_C::OnItemDisplayed(EFortItemType ItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPreviewPedestal_C", "OnItemDisplayed");

	Params::ItemPreviewPedestal_C_OnItemDisplayed Parms{};

	Parms.ItemType = ItemType;

	UObject::ProcessEvent(Func, &Parms);
}

}
