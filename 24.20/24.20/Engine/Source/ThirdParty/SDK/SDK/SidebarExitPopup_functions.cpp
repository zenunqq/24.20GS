#pragma once

#include "Basic.hpp"

#include "SidebarExitPopup_classes.hpp"
#include "SidebarExitPopup_parameters.hpp"

namespace SDK
{

void USidebarExitPopup_C::BndEvt__SidebarExitPopup_Button_ExitGame_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarExitPopup_C", "BndEvt__SidebarExitPopup_Button_ExitGame_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::SidebarExitPopup_C_BndEvt__SidebarExitPopup_Button_ExitGame_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarExitPopup_C::BndEvt__SidebarExitPopup_Button_LeaveExperience_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarExitPopup_C", "BndEvt__SidebarExitPopup_Button_LeaveExperience_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::SidebarExitPopup_C_BndEvt__SidebarExitPopup_Button_LeaveExperience_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarExitPopup_C::BndEvt__SidebarExitPopup_Button_Logout_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarExitPopup_C", "BndEvt__SidebarExitPopup_Button_Logout_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::SidebarExitPopup_C_BndEvt__SidebarExitPopup_Button_Logout_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarExitPopup_C::BndEvt__SidebarExitPopup_Button_No_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarExitPopup_C", "BndEvt__SidebarExitPopup_Button_No_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::SidebarExitPopup_C_BndEvt__SidebarExitPopup_Button_No_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarExitPopup_C::BndEvt__SidebarExitPopup_Button_No_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarExitPopup_C", "BndEvt__SidebarExitPopup_Button_No_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature");

	Params::SidebarExitPopup_C_BndEvt__SidebarExitPopup_Button_No_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarExitPopup_C::BndEvt__SidebarExitPopup_Button_Yes_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarExitPopup_C", "BndEvt__SidebarExitPopup_Button_Yes_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature");

	Params::SidebarExitPopup_C_BndEvt__SidebarExitPopup_Button_Yes_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarExitPopup_C::BndEvt__SidebarExitPopup_Button_Yes_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarExitPopup_C", "BndEvt__SidebarExitPopup_Button_Yes_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::SidebarExitPopup_C_BndEvt__SidebarExitPopup_Button_Yes_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarExitPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarExitPopup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarExitPopup_C::ExecuteUbergraph_SidebarExitPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarExitPopup_C", "ExecuteUbergraph_SidebarExitPopup");

	Params::SidebarExitPopup_C_ExecuteUbergraph_SidebarExitPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarExitPopup_C::OnButtonBaseClicked_Event(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarExitPopup_C", "OnButtonBaseClicked_Event");

	Params::SidebarExitPopup_C_OnButtonBaseClicked_Event Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarExitPopup_C::OnInputMethodChanged(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarExitPopup_C", "OnInputMethodChanged");

	Params::SidebarExitPopup_C_OnInputMethodChanged Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarExitPopup_C::RefreshButtonsVisual(bool IsTouch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarExitPopup_C", "RefreshButtonsVisual");

	Params::SidebarExitPopup_C_RefreshButtonsVisual Parms{};

	Parms.IsTouch = IsTouch;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarExitPopup_C::UpdateNoEnabledButtonsText(const bool bAllowLogout, const bool bAllowQuit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarExitPopup_C", "UpdateNoEnabledButtonsText");

	Params::SidebarExitPopup_C_UpdateNoEnabledButtonsText Parms{};

	Parms.bAllowLogout = bAllowLogout;
	Parms.bAllowQuit = bAllowQuit;

	UObject::ProcessEvent(Func, &Parms);
}

}
