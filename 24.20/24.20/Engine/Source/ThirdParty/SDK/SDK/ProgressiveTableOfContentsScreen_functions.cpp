#pragma once

#include "Basic.hpp"

#include "ProgressiveTableOfContentsScreen_classes.hpp"
#include "ProgressiveTableOfContentsScreen_parameters.hpp"

namespace SDK
{

void UProgressiveTableOfContentsScreen_C::BlockScreenContent(const bool bBlockScreen, const class FText& ContentBlockedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTableOfContentsScreen_C", "BlockScreenContent");

	Params::ProgressiveTableOfContentsScreen_C_BlockScreenContent Parms{};

	Parms.bBlockScreen = bBlockScreen;
	Parms.ContentBlockedText = std::move(ContentBlockedText);

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTableOfContentsScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTableOfContentsScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveTableOfContentsScreen_C::BP_OnContainerTabVisibilityUpdated(const bool bTabsVisible, const float SpacingAdjustmentForTabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTableOfContentsScreen_C", "BP_OnContainerTabVisibilityUpdated");

	Params::ProgressiveTableOfContentsScreen_C_BP_OnContainerTabVisibilityUpdated Parms{};

	Parms.bTabsVisible = bTabsVisible;
	Parms.SpacingAdjustmentForTabs = SpacingAdjustmentForTabs;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTableOfContentsScreen_C::BP_OnSetDescriptionText(const class FText& ProductDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTableOfContentsScreen_C", "BP_OnSetDescriptionText");

	Params::ProgressiveTableOfContentsScreen_C_BP_OnSetDescriptionText Parms{};

	Parms.ProductDescription = std::move(ProductDescription);

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTableOfContentsScreen_C::BP_OnUpdateBanner(const class FText& BannerText, const bool bAllSetsCompleted, const bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTableOfContentsScreen_C", "BP_OnUpdateBanner");

	Params::ProgressiveTableOfContentsScreen_C_BP_OnUpdateBanner Parms{};

	Parms.BannerText = std::move(BannerText);
	Parms.bAllSetsCompleted = bAllSetsCompleted;
	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTableOfContentsScreen_C::BP_OnUpdateErrorStateText(const class FText& ErrorStateText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTableOfContentsScreen_C", "BP_OnUpdateErrorStateText");

	Params::ProgressiveTableOfContentsScreen_C_BP_OnUpdateErrorStateText Parms{};

	Parms.ErrorStateText = std::move(ErrorStateText);

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTableOfContentsScreen_C::BP_OnUpdateNumTilesAvailable(const int32 NumTiles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTableOfContentsScreen_C", "BP_OnUpdateNumTilesAvailable");

	Params::ProgressiveTableOfContentsScreen_C_BP_OnUpdateNumTilesAvailable Parms{};

	Parms.NumTiles = NumTiles;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTableOfContentsScreen_C::BP_OnUpdateSubscriptionState(const bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTableOfContentsScreen_C", "BP_OnUpdateSubscriptionState");

	Params::ProgressiveTableOfContentsScreen_C_BP_OnUpdateSubscriptionState Parms{};

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTableOfContentsScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTableOfContentsScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveTableOfContentsScreen_C::ContentBlocking(bool isContentBlocked, const class FText& ContentBlockedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTableOfContentsScreen_C", "ContentBlocking");

	Params::ProgressiveTableOfContentsScreen_C_ContentBlocking Parms{};

	Parms.isContentBlocked = isContentBlocked;
	Parms.ContentBlockedText = std::move(ContentBlockedText);

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTableOfContentsScreen_C::ExecuteUbergraph_ProgressiveTableOfContentsScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTableOfContentsScreen_C", "ExecuteUbergraph_ProgressiveTableOfContentsScreen");

	Params::ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTableOfContentsScreen_C::No_Items_to_Show(int32 ItemsShown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTableOfContentsScreen_C", "No Items to Show");

	Params::ProgressiveTableOfContentsScreen_C_No_Items_to_Show Parms{};

	Parms.ItemsShown = ItemsShown;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTableOfContentsScreen_C::Update_Subscribed_Visuals(bool Subscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTableOfContentsScreen_C", "Update Subscribed Visuals");

	Params::ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals Parms{};

	Parms.Subscribed = Subscribed;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTableOfContentsScreen_C::UpdateLayoutForTabs(bool bTabsVisible, double Spacing_Adjustment_For_Tabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTableOfContentsScreen_C", "UpdateLayoutForTabs");

	Params::ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs Parms{};

	Parms.bTabsVisible = bTabsVisible;
	Parms.Spacing_Adjustment_For_Tabs = Spacing_Adjustment_For_Tabs;

	UObject::ProcessEvent(Func, &Parms);
}

}
