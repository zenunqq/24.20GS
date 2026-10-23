#pragma once

#include "Basic.hpp"

#include "WBP_UIKit_ButtonCTA_Base_classes.hpp"
#include "WBP_UIKit_ButtonCTA_Base_parameters.hpp"

namespace SDK
{

void UWBP_UIKit_ButtonCTA_Base_C::AddModularBlock(class UWBP_UIKit_Block_Base_C* Modular_Block)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "AddModularBlock");

	Params::WBP_UIKit_ButtonCTA_Base_C_AddModularBlock Parms{};

	Parms.Modular_Block = Modular_Block;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_OnDisabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_OnEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_OnFocusLost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_OnFocusLost");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_OnFocusReceived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_OnFocusReceived");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_OnHoldCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_OnHoldCompleted");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_OnHoldEnded(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_OnHoldEnded");

	Params::WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldEnded Parms{};

	Parms.HoldPercentage = HoldPercentage;
	Parms.bInUseSecondaryHoldAnimation = bInUseSecondaryHoldAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_OnHoldReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_OnHoldReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_OnHoldStarted(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_OnHoldStarted");

	Params::WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldStarted Parms{};

	Parms.HoldPercentage = HoldPercentage;
	Parms.bInUseSecondaryHoldAnimation = bInUseSecondaryHoldAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_OnInputActionUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_OnInputActionUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_OnInputMethodChanged(ECommonInputType CurrentInputType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_OnInputMethodChanged");

	Params::WBP_UIKit_ButtonCTA_Base_C_BP_OnInputMethodChanged Parms{};

	Parms.CurrentInputType_0 = CurrentInputType_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_OnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_OnPressed");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_OnReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_OnReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_SetSecondaryText(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_SetSecondaryText");

	Params::WBP_UIKit_ButtonCTA_Base_C_BP_SetSecondaryText Parms{};

	Parms.Text_0 = std::move(Text_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::BP_SetText(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "BP_SetText");

	Params::WBP_UIKit_ButtonCTA_Base_C_BP_SetText Parms{};

	Parms.Text_0 = std::move(Text_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::EventOnFocusedManually()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "EventOnFocusedManually");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base");

	Params::WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::IsPromptAction(bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "IsPromptAction");

	Params::WBP_UIKit_ButtonCTA_Base_C_IsPromptAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}

void UWBP_UIKit_ButtonCTA_Base_C::IsPromptHoldable(bool* Holdable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "IsPromptHoldable");

	Params::WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Holdable != nullptr)
		*Holdable = Parms.Holdable;
}

void UWBP_UIKit_ButtonCTA_Base_C::IsPromptIcon(bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "IsPromptIcon");

	Params::WBP_UIKit_ButtonCTA_Base_C_IsPromptIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}

void UWBP_UIKit_ButtonCTA_Base_C::OnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "OnActionProgress");

	Params::WBP_UIKit_ButtonCTA_Base_C_OnActionProgress Parms{};

	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::OnHoldRequiredChanged(bool bHoldRequired)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "OnHoldRequiredChanged");

	Params::WBP_UIKit_ButtonCTA_Base_C_OnHoldRequiredChanged Parms{};

	Parms.bHoldRequired = bHoldRequired;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "PreConstruct");

	Params::WBP_UIKit_ButtonCTA_Base_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::ResetButtonState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "ResetButtonState");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::ResetPrompt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "ResetPrompt");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::Set_Prompt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "Set Prompt");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::SetBackgroundMaterial(class UMaterialInstance* Background_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "SetBackgroundMaterial");

	Params::WBP_UIKit_ButtonCTA_Base_C_SetBackgroundMaterial Parms{};

	Parms.Background_0 = Background_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::SetBackgroundVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "SetBackgroundVisibility");

	Params::WBP_UIKit_ButtonCTA_Base_C_SetBackgroundVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::SetBlockTiming(class UWBP_UIKit_Block_Base_C* bLock, double Time_Hovering, double Time_Unhovering, double Time_Focusing, double Time_Unfocusing, double Time_Pressing, double Time_Releasing, double Time_Disabling, double Time_Enabling)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "SetBlockTiming");

	Params::WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming Parms{};

	Parms.bLock = bLock;
	Parms.Time_Hovering = Time_Hovering;
	Parms.Time_Unhovering = Time_Unhovering;
	Parms.Time_Focusing = Time_Focusing;
	Parms.Time_Unfocusing = Time_Unfocusing;
	Parms.Time_Pressing = Time_Pressing;
	Parms.Time_Releasing = Time_Releasing;
	Parms.Time_Disabling = Time_Disabling;
	Parms.Time_Enabling = Time_Enabling;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::SetBorderMaterial(class UMaterialInstance* BorderMaterial_0, bool IsAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "SetBorderMaterial");

	Params::WBP_UIKit_ButtonCTA_Base_C_SetBorderMaterial Parms{};

	Parms.BorderMaterial_0 = BorderMaterial_0;
	Parms.IsAdditive = IsAdditive;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::SetButtonIsEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "SetButtonIsEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::SetButtonSize(EModularButtonSize ButtonSize_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "SetButtonSize");

	Params::WBP_UIKit_ButtonCTA_Base_C_SetButtonSize Parms{};

	Parms.ButtonSize_0 = ButtonSize_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::SetButtonTiming(double Time_Hovering, double Time_Unhovering, double Time_Focusing, double Time_Unfocusing, double Time_Pressing, double Time_Releasing, double Time_Disabling, double Time_Enabling)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "SetButtonTiming");

	Params::WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming Parms{};

	Parms.Time_Hovering = Time_Hovering;
	Parms.Time_Unhovering = Time_Unhovering;
	Parms.Time_Focusing = Time_Focusing;
	Parms.Time_Unfocusing = Time_Unfocusing;
	Parms.Time_Pressing = Time_Pressing;
	Parms.Time_Releasing = Time_Releasing;
	Parms.Time_Disabling = Time_Disabling;
	Parms.Time_Enabling = Time_Enabling;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::SetLanguageDirection(bool RightToLeft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "SetLanguageDirection");

	Params::WBP_UIKit_ButtonCTA_Base_C_SetLanguageDirection Parms{};

	Parms.RightToLeft = RightToLeft;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::ShowInputActionText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "ShowInputActionText");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::ShowPromptFallbackAction(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "ShowPromptFallbackAction");

	Params::WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonCTA_Base_C::UpdateButtonSIze()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "UpdateButtonSIze");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::UpdateButtonSizeToGrid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "UpdateButtonSizeToGrid");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::UpdateFonts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "UpdateFonts");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonCTA_Base_C::UpdatePrompt(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonCTA_Base_C", "UpdatePrompt");

	Params::WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}

}
