#pragma once

#include "Basic.hpp"

#include "AthenaLockerTab_classes.hpp"
#include "AthenaLockerTab_parameters.hpp"

namespace SDK
{

void UAthenaLockerTab_C::AnimShowRandomDisclaimerEnabled(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "AnimShowRandomDisclaimerEnabled");

	Params::AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLockerTab_C::AssignAllSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "AssignAllSlots");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLockerTab_C::BeginPickingCustomization(class UCommonButtonBase* WidgetToReturnFocusTo, const struct FAthenaCustomizationParams& CustomizationParams_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "BeginPickingCustomization");

	Params::AthenaLockerTab_C_BeginPickingCustomization Parms{};

	Parms.WidgetToReturnFocusTo = WidgetToReturnFocusTo;
	Parms.CustomizationParams_0 = std::move(CustomizationParams_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLockerTab_C::BndEvt__AthenaLockerTab_Button_BackToGame_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "BndEvt__AthenaLockerTab_Button_BackToGame_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_BackToGame_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLockerTab_C::BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLockerTab_C::BndEvt__AthenaLockerTab_LockerArchivingTooltip_K2Node_ComponentBoundEvent_0_OnDismissed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "BndEvt__AthenaLockerTab_LockerArchivingTooltip_K2Node_ComponentBoundEvent_0_OnDismissed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLockerTab_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLockerTab_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLockerTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLockerTab_C::ExecuteUbergraph_AthenaLockerTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "ExecuteUbergraph_AthenaLockerTab");

	Params::AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* UAthenaLockerTab_C::LoadoutButtonCustomNavigationDown(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "LoadoutButtonCustomNavigationDown");

	Params::AthenaLockerTab_C_LoadoutButtonCustomNavigationDown Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UAthenaLockerTab_C::OnBeginPickingCustomizationSlot(class UAthenaCustomizationSlotSelectorButton* SlotButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "OnBeginPickingCustomizationSlot");

	Params::AthenaLockerTab_C_OnBeginPickingCustomizationSlot Parms{};

	Parms.SlotButton = SlotButton;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLockerTab_C::OnBeginPickingLoadouts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "OnBeginPickingLoadouts");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLockerTab_C::OnBeginSavingLoadouts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "OnBeginSavingLoadouts");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLockerTab_C::OnModifiedStatusUpdated(bool bIsModified, bool bCanShowToolTip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "OnModifiedStatusUpdated");

	Params::AthenaLockerTab_C_OnModifiedStatusUpdated Parms{};

	Parms.bIsModified = bIsModified;
	Parms.bCanShowToolTip = bCanShowToolTip;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLockerTab_C::OnPreviewActionButtonUpdated(const class FText& RowDisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "OnPreviewActionButtonUpdated");

	Params::AthenaLockerTab_C_OnPreviewActionButtonUpdated Parms{};

	Parms.RowDisplayName = std::move(RowDisplayName);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLockerTab_C::OnQuickRenameStatusUpdated(bool bIsAvailable, const class FText& LoadoutName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "OnQuickRenameStatusUpdated");

	Params::AthenaLockerTab_C_OnQuickRenameStatusUpdated Parms{};

	Parms.bIsAvailable = bIsAvailable;
	Parms.LoadoutName = std::move(LoadoutName);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLockerTab_C::OnRefreshForNewLoadout(const class FString& LoadoutName, bool bIsShuffleTile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "OnRefreshForNewLoadout");

	Params::AthenaLockerTab_C_OnRefreshForNewLoadout Parms{};

	Parms.LoadoutName = std::move(LoadoutName);
	Parms.bIsShuffleTile = bIsShuffleTile;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLockerTab_C::PlayEquippedLockerMusic_STW()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "PlayEquippedLockerMusic_STW");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLockerTab_C::PlaySlotAnimationAndCenterSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "PlaySlotAnimationAndCenterSlot");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLockerTab_C::PlaySlotClickedAnimation(class UAthenaCustomizationSlotButton_C* SlotToPlayAnimOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "PlaySlotClickedAnimation");

	Params::AthenaLockerTab_C_PlaySlotClickedAnimation Parms{};

	Parms.SlotToPlayAnimOn = SlotToPlayAnimOn;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* UAthenaLockerTab_C::TopRowCustomNavigationUp(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "TopRowCustomNavigationUp");

	Params::AthenaLockerTab_C_TopRowCustomNavigationUp Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UAthenaLockerTab_C::TriggerModifiedLoopingAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "TriggerModifiedLoopingAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLockerTab_C::TriggerRandomLoopingAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "TriggerRandomLoopingAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLockerTab_C::UpdatePresetButtonStyles(ECommonInputType InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "UpdatePresetButtonStyles");

	Params::AthenaLockerTab_C_UpdatePresetButtonStyles Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}

}
