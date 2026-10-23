#pragma once

#include "Basic.hpp"

#include "ShowdownDivisionLobbyPanel_classes.hpp"
#include "ShowdownDivisionLobbyPanel_parameters.hpp"

namespace SDK
{

void UShowdownDivisionLobbyPanel_C::BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownDivisionLobbyPanel_C", "BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownDivisionLobbyPanel_C::BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownDivisionLobbyPanel_C", "BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownDivisionLobbyPanel_C::BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownDivisionLobbyPanel_C", "BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownDivisionLobbyPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownDivisionLobbyPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownDivisionLobbyPanel_C::EventColorize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownDivisionLobbyPanel_C", "EventColorize");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownDivisionLobbyPanel_C::EventSwitchUI(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownDivisionLobbyPanel_C", "EventSwitchUI");

	Params::ShowdownDivisionLobbyPanel_C_EventSwitchUI Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownDivisionLobbyPanel_C::ExecuteUbergraph_ShowdownDivisionLobbyPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownDivisionLobbyPanel_C", "ExecuteUbergraph_ShowdownDivisionLobbyPanel");

	Params::ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownDivisionLobbyPanel_C::HandleCrossplayChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownDivisionLobbyPanel_C", "HandleCrossplayChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownDivisionLobbyPanel_C::InputTypeChanged(bool isGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownDivisionLobbyPanel_C", "InputTypeChanged");

	Params::ShowdownDivisionLobbyPanel_C_InputTypeChanged Parms{};

	Parms.isGamepad = isGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownDivisionLobbyPanel_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownDivisionLobbyPanel_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownDivisionLobbyPanel_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownDivisionLobbyPanel_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownDivisionLobbyPanel_C::RefreshDivisionData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownDivisionLobbyPanel_C", "RefreshDivisionData");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownDivisionLobbyPanel_C::UpdateColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownDivisionLobbyPanel_C", "UpdateColors");

	UObject::ProcessEvent(Func, nullptr);
}

}
