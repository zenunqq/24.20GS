#pragma once

#include "Basic.hpp"

#include "ActivityBrowserModeSetListEntry_classes.hpp"
#include "ActivityBrowserModeSetListEntry_parameters.hpp"

namespace SDK
{

void UActivityBrowserModeSetListEntry_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityBrowserModeSetListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityBrowserModeSetListEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "BP_OnItemSelectionChanged");

	Params::ActivityBrowserModeSetListEntry_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityBrowserModeSetListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityBrowserModeSetListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityBrowserModeSetListEntry_C::ExecuteUbergraph_ActivityBrowserModeSetListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "ExecuteUbergraph_ActivityBrowserModeSetListEntry");

	Params::ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityBrowserModeSetListEntry_C::OnActivityNameSet(const class FText& ActivityName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "OnActivityNameSet");

	Params::ActivityBrowserModeSetListEntry_C_OnActivityNameSet Parms{};

	Parms.ActivityName = std::move(ActivityName);

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityBrowserModeSetListEntry_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "OnFocusLost");

	Params::ActivityBrowserModeSetListEntry_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityBrowserModeSetListEntry_C::OnPartySizeChanged(const int32 PartySize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "OnPartySizeChanged");

	Params::ActivityBrowserModeSetListEntry_C_OnPartySizeChanged Parms{};

	Parms.PartySize = PartySize;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityBrowserModeSetListEntry_C::OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "OnPreviewImageChanged");

	Params::ActivityBrowserModeSetListEntry_C_OnPreviewImageChanged Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityBrowserModeSetListEntry_C::OnSavedActivitySet(const bool IsSaved)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "OnSavedActivitySet");

	Params::ActivityBrowserModeSetListEntry_C_OnSavedActivitySet Parms{};

	Parms.IsSaved = IsSaved;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityBrowserModeSetListEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "PreConstruct");

	Params::ActivityBrowserModeSetListEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityBrowserModeSetListEntry_C::RefreshDisabledState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "RefreshDisabledState");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityBrowserModeSetListEntry_C::ResetSetDisabledColorationAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "ResetSetDisabledColorationAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityBrowserModeSetListEntry_C::SetHoveredState(bool IsHovered_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserModeSetListEntry_C", "SetHoveredState");

	Params::ActivityBrowserModeSetListEntry_C_SetHoveredState Parms{};

	Parms.IsHovered_0 = IsHovered_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
