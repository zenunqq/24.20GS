#pragma once

#include "Basic.hpp"

#include "ShowdownLobbyPanel_classes.hpp"
#include "ShowdownLobbyPanel_parameters.hpp"

namespace SDK
{

void UShowdownLobbyPanel_C::BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::ShowdownLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownLobbyPanel_C::BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::ShowdownLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownLobbyPanel_C::BrandingToggle(bool hasBranding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "BrandingToggle");

	Params::ShowdownLobbyPanel_C_BrandingToggle Parms{};

	Parms.hasBranding = hasBranding;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownLobbyPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownLobbyPanel_C::EventColorize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "EventColorize");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownLobbyPanel_C::EventSwitchUI(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "EventSwitchUI");

	Params::ShowdownLobbyPanel_C_EventSwitchUI Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownLobbyPanel_C::ExecuteUbergraph_ShowdownLobbyPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "ExecuteUbergraph_ShowdownLobbyPanel");

	Params::ShowdownLobbyPanel_C_ExecuteUbergraph_ShowdownLobbyPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownLobbyPanel_C::HandleCrossplayChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "HandleCrossplayChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownLobbyPanel_C::InputTypeChanged(bool isGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "InputTypeChanged");

	Params::ShowdownLobbyPanel_C_InputTypeChanged Parms{};

	Parms.isGamepad = isGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownLobbyPanel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "PreConstruct");

	Params::ShowdownLobbyPanel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownLobbyPanel_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownLobbyPanel_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownLobbyPanel_C::UpdateColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "UpdateColors");

	UObject::ProcessEvent(Func, nullptr);
}

}
