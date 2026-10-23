#pragma once

#include "Basic.hpp"

#include "CrewPurchaseScreen_classes.hpp"
#include "CrewPurchaseScreen_parameters.hpp"

namespace SDK
{

void UCrewPurchaseScreen_C::BeginProgress(const class FText& ProgressLabel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "BeginProgress");

	Params::CrewPurchaseScreen_C_BeginProgress Parms{};

	Parms.ProgressLabel = std::move(ProgressLabel);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen_C::BlockScreenContent(const bool bBlockScreen, const class FText& ContentBlockedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "BlockScreenContent");

	Params::CrewPurchaseScreen_C_BlockScreenContent Parms{};

	Parms.bBlockScreen = bBlockScreen;
	Parms.ContentBlockedText = std::move(ContentBlockedText);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewPurchaseScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewPurchaseScreen_C::ContentBlocked(bool isContentBlocked, const class FText& ContentBlockedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "ContentBlocked");

	Params::CrewPurchaseScreen_C_ContentBlocked Parms{};

	Parms.isContentBlocked = isContentBlocked;
	Parms.ContentBlockedText = std::move(ContentBlockedText);

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* UCrewPurchaseScreen_C::DownFromRecurringRewards(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "DownFromRecurringRewards");

	Params::CrewPurchaseScreen_C_DownFromRecurringRewards Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UCrewPurchaseScreen_C::EndProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "EndProgress");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewPurchaseScreen_C::EventScreenTransitionIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "EventScreenTransitionIn");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewPurchaseScreen_C::EventSetColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "EventSetColors");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewPurchaseScreen_C::ExecuteUbergraph_CrewPurchaseScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "ExecuteUbergraph_CrewPurchaseScreen");

	Params::CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen_C::OnContainerTabVisibilityUpdated(const bool bTabsVisible, const float SpacingAdjustmentForTabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "OnContainerTabVisibilityUpdated");

	Params::CrewPurchaseScreen_C_OnContainerTabVisibilityUpdated Parms{};

	Parms.bTabsVisible = bTabsVisible;
	Parms.SpacingAdjustmentForTabs = SpacingAdjustmentForTabs;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen_C::OnDownloadBackgroundComplete(class UTexture2D* NewBackground)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "OnDownloadBackgroundComplete");

	Params::CrewPurchaseScreen_C_OnDownloadBackgroundComplete Parms{};

	Parms.NewBackground = NewBackground;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen_C::OnSetNavButtonNotificationText(const class FText& NotificationText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "OnSetNavButtonNotificationText");

	Params::CrewPurchaseScreen_C_OnSetNavButtonNotificationText Parms{};

	Parms.NotificationText = std::move(NotificationText);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen_C::OnShowNavButtonNotification(const bool bShowNotification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "OnShowNavButtonNotification");

	Params::CrewPurchaseScreen_C_OnShowNavButtonNotification Parms{};

	Parms.bShowNotification = bShowNotification;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen_C::OnStartingDownloadBackground()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "OnStartingDownloadBackground");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewPurchaseScreen_C::OnUpdatePurchaseButtonState(ECrewPurchaseButtonState ButtonState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "OnUpdatePurchaseButtonState");

	Params::CrewPurchaseScreen_C_OnUpdatePurchaseButtonState Parms{};

	Parms.ButtonState = ButtonState;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen_C::OnUpdateVBuckRefundVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "OnUpdateVBuckRefundVisibility");

	Params::CrewPurchaseScreen_C_OnUpdateVBuckRefundVisibility Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen_C::OnUserInformationTextsUpdated(const class FText& UserInformationText1, const class FText& UserInformationText2, EMcpSubscriptionState SubscriptionState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "OnUserInformationTextsUpdated");

	Params::CrewPurchaseScreen_C_OnUserInformationTextsUpdated Parms{};

	Parms.UserInformationText1 = std::move(UserInformationText1);
	Parms.UserInformationText2 = std::move(UserInformationText2);
	Parms.SubscriptionState = SubscriptionState;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "PreConstruct");

	Params::CrewPurchaseScreen_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen_C::Set_Up_Error_Info_Flags(const class FText& UserInformationText_1, const class FText& UserInformationText_2, EMcpSubscriptionState SubscriptionState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "Set Up Error Info Flags");

	Params::CrewPurchaseScreen_C_Set_Up_Error_Info_Flags Parms{};

	Parms.UserInformationText_1 = std::move(UserInformationText_1);
	Parms.UserInformationText_2 = std::move(UserInformationText_2);
	Parms.SubscriptionState = SubscriptionState;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen_C::SetDesignTimeImages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "SetDesignTimeImages");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewPurchaseScreen_C::UpdateLayoutForTabs(bool bTabsVisible, double SpacingAdjustmentForTabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "UpdateLayoutForTabs");

	Params::CrewPurchaseScreen_C_UpdateLayoutForTabs Parms{};

	Parms.bTabsVisible = bTabsVisible;
	Parms.SpacingAdjustmentForTabs = SpacingAdjustmentForTabs;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* UCrewPurchaseScreen_C::UpFromLimitedTimeRewards(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "UpFromLimitedTimeRewards");

	Params::CrewPurchaseScreen_C_UpFromLimitedTimeRewards Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UWidget* UCrewPurchaseScreen_C::UpToFirstTile(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen_C", "UpToFirstTile");

	Params::CrewPurchaseScreen_C_UpToFirstTile Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
