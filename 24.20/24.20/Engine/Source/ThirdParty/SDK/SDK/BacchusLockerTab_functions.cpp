#pragma once

#include "Basic.hpp"

#include "BacchusLockerTab_classes.hpp"
#include "BacchusLockerTab_parameters.hpp"

namespace SDK
{

void UBacchusLockerTab_C::AnimShowRandomDisclaimerEnabled(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "AnimShowRandomDisclaimerEnabled");

	Params::BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}

void UBacchusLockerTab_C::AssignAllSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "AssignAllSlots");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusLockerTab_C::BeginPickingCustomization(class UCommonButtonBase* WidgetToReturnFocusTo, const struct FAthenaCustomizationParams& CustomizationParams_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "BeginPickingCustomization");

	Params::BacchusLockerTab_C_BeginPickingCustomization Parms{};

	Parms.WidgetToReturnFocusTo = WidgetToReturnFocusTo;
	Parms.CustomizationParams_0 = std::move(CustomizationParams_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UBacchusLockerTab_C::BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::BacchusLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UBacchusLockerTab_C::BndEvt__AthenaLockerTab_LockerArchivingTooltip_K2Node_ComponentBoundEvent_0_OnDismissed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "BndEvt__AthenaLockerTab_LockerArchivingTooltip_K2Node_ComponentBoundEvent_0_OnDismissed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusLockerTab_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusLockerTab_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusLockerTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusLockerTab_C::ExecuteUbergraph_BacchusLockerTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "ExecuteUbergraph_BacchusLockerTab");

	Params::BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* UBacchusLockerTab_C::LoadoutButtonCustomNavigationDown(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "LoadoutButtonCustomNavigationDown");

	Params::BacchusLockerTab_C_LoadoutButtonCustomNavigationDown Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UBacchusLockerTab_C::OnBeginPickingCustomizationSlot(class UAthenaCustomizationSlotSelectorButton* SlotButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "OnBeginPickingCustomizationSlot");

	Params::BacchusLockerTab_C_OnBeginPickingCustomizationSlot Parms{};

	Parms.SlotButton = SlotButton;

	UObject::ProcessEvent(Func, &Parms);
}

void UBacchusLockerTab_C::OnBeginPickingLoadouts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "OnBeginPickingLoadouts");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusLockerTab_C::OnBeginSavingLoadouts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "OnBeginSavingLoadouts");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusLockerTab_C::OnInputMethodChanged_Event_0(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "OnInputMethodChanged_Event_0");

	Params::BacchusLockerTab_C_OnInputMethodChanged_Event_0 Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UBacchusLockerTab_C::OnModifiedStatusUpdated(bool bIsModified, bool bCanShowToolTip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "OnModifiedStatusUpdated");

	Params::BacchusLockerTab_C_OnModifiedStatusUpdated Parms{};

	Parms.bIsModified = bIsModified;
	Parms.bCanShowToolTip = bCanShowToolTip;

	UObject::ProcessEvent(Func, &Parms);
}

void UBacchusLockerTab_C::OnQuickRenameStatusUpdated(bool bIsAvailable, const class FText& LoadoutName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "OnQuickRenameStatusUpdated");

	Params::BacchusLockerTab_C_OnQuickRenameStatusUpdated Parms{};

	Parms.bIsAvailable = bIsAvailable;
	Parms.LoadoutName = std::move(LoadoutName);

	UObject::ProcessEvent(Func, &Parms);
}

void UBacchusLockerTab_C::OnRefreshForNewLoadout(const class FString& LoadoutName, bool bIsShuffleTile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "OnRefreshForNewLoadout");

	Params::BacchusLockerTab_C_OnRefreshForNewLoadout Parms{};

	Parms.LoadoutName = std::move(LoadoutName);
	Parms.bIsShuffleTile = bIsShuffleTile;

	UObject::ProcessEvent(Func, &Parms);
}

void UBacchusLockerTab_C::PlayEquippedLockerMusic_STW()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "PlayEquippedLockerMusic_STW");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusLockerTab_C::PlaySlotAnimationAndCenterSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "PlaySlotAnimationAndCenterSlot");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusLockerTab_C::PlaySlotClickedAnimation(class UAthenaCustomizationSlotButton_C* SlotToPlayAnimOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "PlaySlotClickedAnimation");

	Params::BacchusLockerTab_C_PlaySlotClickedAnimation Parms{};

	Parms.SlotToPlayAnimOn = SlotToPlayAnimOn;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* UBacchusLockerTab_C::TopRowCustomNavigationUp(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "TopRowCustomNavigationUp");

	Params::BacchusLockerTab_C_TopRowCustomNavigationUp Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UBacchusLockerTab_C::TriggerModifiedLoopingAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "TriggerModifiedLoopingAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusLockerTab_C::TriggerRandomLoopingAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "TriggerRandomLoopingAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusLockerTab_C::UpdatePresetButtonStyles(ECommonInputType InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusLockerTab_C", "UpdatePresetButtonStyles");

	Params::BacchusLockerTab_C_UpdatePresetButtonStyles Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}

}
