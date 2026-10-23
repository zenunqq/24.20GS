#pragma once

#include "Basic.hpp"

#include "FlagSelectionModal_classes.hpp"
#include "FlagSelectionModal_parameters.hpp"

namespace SDK
{

void UFlagSelectionModal_C::BndEvt__FlagSelectionModal_Button_Change_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlagSelectionModal_C", "BndEvt__FlagSelectionModal_Button_Change_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::FlagSelectionModal_C_BndEvt__FlagSelectionModal_Button_Change_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UFlagSelectionModal_C::BndEvt__FlagSelectionModal_Button_ConfirmationCancel_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlagSelectionModal_C", "BndEvt__FlagSelectionModal_Button_ConfirmationCancel_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::FlagSelectionModal_C_BndEvt__FlagSelectionModal_Button_ConfirmationCancel_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UFlagSelectionModal_C::BndEvt__FlagSelectionModal_TileView_FlagOptions_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlagSelectionModal_C", "BndEvt__FlagSelectionModal_TileView_FlagOptions_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");

	Params::FlagSelectionModal_C_BndEvt__FlagSelectionModal_TileView_FlagOptions_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void UFlagSelectionModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlagSelectionModal_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFlagSelectionModal_C::ExecuteUbergraph_FlagSelectionModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlagSelectionModal_C", "ExecuteUbergraph_FlagSelectionModal");

	Params::FlagSelectionModal_C_ExecuteUbergraph_FlagSelectionModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UFlagSelectionModal_C::Handle_Back(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlagSelectionModal_C", "Handle Back");

	Params::FlagSelectionModal_C_Handle_Back Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}

}
