#pragma once

#include "Basic.hpp"

#include "BattlePassPurchaseScreen_classes.hpp"
#include "BattlePassPurchaseScreen_parameters.hpp"

namespace SDK
{

void UBattlePassPurchaseScreen_C::BndEvt__BattlePassPurchaseScreen_Button_ConfirmBundle_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "BndEvt__BattlePassPurchaseScreen_Button_ConfirmBundle_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature");

	Params::BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ConfirmBundle_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassPurchaseScreen_C::BndEvt__BattlePassPurchaseScreen_Button_ToCrew_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "BndEvt__BattlePassPurchaseScreen_Button_ToCrew_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ToCrew_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassPurchaseScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassPurchaseScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassPurchaseScreen_C::EventScreenTransitionIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "EventScreenTransitionIn");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassPurchaseScreen_C::ExecuteUbergraph_BattlePassPurchaseScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "ExecuteUbergraph_BattlePassPurchaseScreen");

	Params::BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassPurchaseScreen_C::OnDownloadBackgroundComplete(class UTexture2D* NewBackground)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "OnDownloadBackgroundComplete");

	Params::BattlePassPurchaseScreen_C_OnDownloadBackgroundComplete Parms{};

	Parms.NewBackground = NewBackground;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassPurchaseScreen_C::OnPurchaseConfirmed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "OnPurchaseConfirmed");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassPurchaseScreen_C::OnPurchaseStateChanged(EBattlePassPurchaseState InCurrentState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "OnPurchaseStateChanged");

	Params::BattlePassPurchaseScreen_C_OnPurchaseStateChanged Parms{};

	Parms.InCurrentState = InCurrentState;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassPurchaseScreen_C::OnSetNavButtonNotificationText(const class FText& NotificationText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "OnSetNavButtonNotificationText");

	Params::BattlePassPurchaseScreen_C_OnSetNavButtonNotificationText Parms{};

	Parms.NotificationText = std::move(NotificationText);

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassPurchaseScreen_C::OnSetScreenInteractable(bool bInteractable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "OnSetScreenInteractable");

	Params::BattlePassPurchaseScreen_C_OnSetScreenInteractable Parms{};

	Parms.bInteractable = bInteractable;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassPurchaseScreen_C::OnShowNavButtonNotification(const bool bShowNotification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "OnShowNavButtonNotification");

	Params::BattlePassPurchaseScreen_C_OnShowNavButtonNotification Parms{};

	Parms.bShowNotification = bShowNotification;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassPurchaseScreen_C::OnStartingDownloadBackground()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "OnStartingDownloadBackground");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassPurchaseScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "PreConstruct");

	Params::BattlePassPurchaseScreen_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassPurchaseScreen_C::SetDesignTimeImages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "SetDesignTimeImages");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassPurchaseScreen_C::SetMobileVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "SetMobileVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

}
