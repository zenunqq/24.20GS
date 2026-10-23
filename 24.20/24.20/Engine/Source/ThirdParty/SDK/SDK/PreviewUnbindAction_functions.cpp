#pragma once

#include "Basic.hpp"

#include "PreviewUnbindAction_classes.hpp"
#include "PreviewUnbindAction_parameters.hpp"

namespace SDK
{

void UPreviewUnbindAction_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewUnbindAction_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void UPreviewUnbindAction_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewUnbindAction_C", "BP_OnItemExpansionChanged");

	Params::PreviewUnbindAction_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}

void UPreviewUnbindAction_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewUnbindAction_C", "BP_OnItemSelectionChanged");

	Params::PreviewUnbindAction_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UPreviewUnbindAction_C::ExecuteUbergraph_PreviewUnbindAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewUnbindAction_C", "ExecuteUbergraph_PreviewUnbindAction");

	Params::PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPreviewUnbindAction_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewUnbindAction_C", "OnListItemObjectSet");

	Params::PreviewUnbindAction_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

}
