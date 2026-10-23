#pragma once

#include "Basic.hpp"

#include "LobbyGadgetButton_classes.hpp"
#include "LobbyGadgetButton_parameters.hpp"

namespace SDK
{

void ULobbyGadgetButton_C::SetLocked(bool bLocked_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "SetLocked");

	Params::LobbyGadgetButton_C_SetLocked Parms{};

	Parms.bLocked_0 = bLocked_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ULobbyGadgetButton_C::Refresh(class UFortWorldItem* WorldItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "Refresh");

	Params::LobbyGadgetButton_C_Refresh Parms{};

	Parms.WorldItem = WorldItem;

	UObject::ProcessEvent(Func, &Parms);
}

void ULobbyGadgetButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "PreConstruct");

	Params::LobbyGadgetButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void ULobbyGadgetButton_C::GetLocked(bool* bLocked_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "GetLocked");

	Params::LobbyGadgetButton_C_GetLocked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bLocked_0 != nullptr)
		*bLocked_0 = Parms.bLocked_0;
}

void ULobbyGadgetButton_C::GetGadgetItem(class UFortWorldItem** GadgetItem_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "GetGadgetItem");

	Params::LobbyGadgetButton_C_GetGadgetItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GadgetItem_0 != nullptr)
		*GadgetItem_0 = Parms.GadgetItem_0;
}

void ULobbyGadgetButton_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "Focus");

	UObject::ProcessEvent(Func, nullptr);
}

void ULobbyGadgetButton_C::ExecuteUbergraph_LobbyGadgetButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "ExecuteUbergraph_LobbyGadgetButton");

	Params::LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULobbyGadgetButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature");

	Params::LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button_0 = Button_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ULobbyGadgetButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");

	Params::LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button_0 = Button_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
