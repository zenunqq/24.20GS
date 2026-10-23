#pragma once

#include "Basic.hpp"

#include "WBP_Augment_CollectionListEntry_classes.hpp"
#include "WBP_Augment_CollectionListEntry_parameters.hpp"

namespace SDK
{

void UWBP_Augment_CollectionListEntry_C::BP_OnCollectionStateSet(EFortCollectedState CollectedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionListEntry_C", "BP_OnCollectionStateSet");

	Params::WBP_Augment_CollectionListEntry_C_BP_OnCollectionStateSet Parms{};

	Parms.CollectedState = CollectedState;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_CollectionListEntry_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionListEntry_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_CollectionListEntry_C::BP_OnEntryImageSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionListEntry_C", "BP_OnEntryImageSet");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_CollectionListEntry_C::BP_OnEntryReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionListEntry_C", "BP_OnEntryReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_CollectionListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_CollectionListEntry_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionListEntry_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_CollectionListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_CollectionListEntry_C::ExecuteUbergraph_WBP_Augment_CollectionListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionListEntry_C", "ExecuteUbergraph_WBP_Augment_CollectionListEntry");

	Params::WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_CollectionListEntry_C::Update_Hover_Parameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionListEntry_C", "Update Hover Parameter");

	UObject::ProcessEvent(Func, nullptr);
}

}
