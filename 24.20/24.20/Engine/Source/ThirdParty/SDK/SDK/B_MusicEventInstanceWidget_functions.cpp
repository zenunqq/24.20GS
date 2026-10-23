#pragma once

#include "Basic.hpp"

#include "B_MusicEventInstanceWidget_classes.hpp"
#include "B_MusicEventInstanceWidget_parameters.hpp"

namespace SDK
{

void UB_MusicEventInstanceWidget_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MusicEventInstanceWidget_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_MusicEventInstanceWidget_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MusicEventInstanceWidget_C", "BP_OnItemExpansionChanged");

	Params::B_MusicEventInstanceWidget_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}

void UB_MusicEventInstanceWidget_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MusicEventInstanceWidget_C", "BP_OnItemSelectionChanged");

	Params::B_MusicEventInstanceWidget_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UB_MusicEventInstanceWidget_C::ExecuteUbergraph_B_MusicEventInstanceWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MusicEventInstanceWidget_C", "ExecuteUbergraph_B_MusicEventInstanceWidget");

	Params::B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UB_MusicEventInstanceWidget_C::GetFormatText(class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MusicEventInstanceWidget_C", "GetFormatText");

	Params::B_MusicEventInstanceWidget_C_GetFormatText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}

struct FSlateColor UB_MusicEventInstanceWidget_C::GetTextColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MusicEventInstanceWidget_C", "GetTextColor");

	Params::B_MusicEventInstanceWidget_C_GetTextColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UB_MusicEventInstanceWidget_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MusicEventInstanceWidget_C", "OnListItemObjectSet");

	Params::B_MusicEventInstanceWidget_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

void UB_MusicEventInstanceWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MusicEventInstanceWidget_C", "Tick");

	Params::B_MusicEventInstanceWidget_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
