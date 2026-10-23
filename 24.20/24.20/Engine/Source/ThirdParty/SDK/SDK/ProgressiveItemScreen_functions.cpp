#pragma once

#include "Basic.hpp"

#include "ProgressiveItemScreen_classes.hpp"
#include "ProgressiveItemScreen_parameters.hpp"

namespace SDK
{

void UProgressiveItemScreen_C::BlockScreenContent(const bool bBlockScreen, const class FText& ContentBlockedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "BlockScreenContent");

	Params::ProgressiveItemScreen_C_BlockScreenContent Parms{};

	Parms.bBlockScreen = bBlockScreen;
	Parms.ContentBlockedText = std::move(ContentBlockedText);

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItemScreen_C::BP_OnContainerTabVisibilityUpdated(const bool bTabsVisible, const float SpacingAdjustmentForTabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "BP_OnContainerTabVisibilityUpdated");

	Params::ProgressiveItemScreen_C_BP_OnContainerTabVisibilityUpdated Parms{};

	Parms.bTabsVisible = bTabsVisible;
	Parms.SpacingAdjustmentForTabs = SpacingAdjustmentForTabs;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItemScreen_C::ContentBlocking(bool isContentBlocked, const class FText& ContentBlockedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "ContentBlocking");

	Params::ProgressiveItemScreen_C_ContentBlocking Parms{};

	Parms.isContentBlocked = isContentBlocked;
	Parms.ContentBlockedText = std::move(ContentBlockedText);

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemScreen_C::ExecuteUbergraph_ProgressiveItemScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "ExecuteUbergraph_ProgressiveItemScreen");

	Params::ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* UProgressiveItemScreen_C::Navigate_Right_from_Items_List(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "Navigate Right from Items List");

	Params::ProgressiveItemScreen_C_Navigate_Right_from_Items_List Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UProgressiveItemScreen_C::OnErrorStateTextUpdated(const class FText& ErrorStateText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "OnErrorStateTextUpdated");

	Params::ProgressiveItemScreen_C_OnErrorStateTextUpdated Parms{};

	Parms.ErrorStateText = std::move(ErrorStateText);

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemScreen_C::OnItemSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "OnItemSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItemScreen_C::OnPreviewActionButtonUpdated(const class FText& RowDisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "OnPreviewActionButtonUpdated");

	Params::ProgressiveItemScreen_C_OnPreviewActionButtonUpdated Parms{};

	Parms.RowDisplayName = std::move(RowDisplayName);

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemScreen_C::OnSetIsSoloScreen(const bool bInIsSoloScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "OnSetIsSoloScreen");

	Params::ProgressiveItemScreen_C_OnSetIsSoloScreen Parms{};

	Parms.bInIsSoloScreen = bInIsSoloScreen;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemScreen_C::OnUpdateSubscriptionState(const bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "OnUpdateSubscriptionState");

	Params::ProgressiveItemScreen_C_OnUpdateSubscriptionState Parms{};

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemScreen_C::UpdateLayoutForTabs(bool bTabsVisible, double Spacing_Adjustment_For_Tabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "UpdateLayoutForTabs");

	Params::ProgressiveItemScreen_C_UpdateLayoutForTabs Parms{};

	Parms.bTabsVisible = bTabsVisible;
	Parms.Spacing_Adjustment_For_Tabs = Spacing_Adjustment_For_Tabs;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemScreen_C::UpdateSubscribedVisuals(bool Subscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "UpdateSubscribedVisuals");

	Params::ProgressiveItemScreen_C_UpdateSubscribedVisuals Parms{};

	Parms.Subscribed = Subscribed;

	UObject::ProcessEvent(Func, &Parms);
}

}
