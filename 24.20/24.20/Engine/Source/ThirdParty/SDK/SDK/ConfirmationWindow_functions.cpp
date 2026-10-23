#pragma once

#include "Basic.hpp"

#include "ConfirmationWindow_classes.hpp"
#include "ConfirmationWindow_parameters.hpp"

namespace SDK
{

void UConfirmationWindow_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmationWindow_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::ConfirmationWindow_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UConfirmationWindow_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmationWindow_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UConfirmationWindow_C::ConfigureConfirmationButton(class UCommonButtonBase* Button, const struct FConfirmationDialogAction& Action, bool bSimpleConfirm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmationWindow_C", "ConfigureConfirmationButton");

	Params::ConfirmationWindow_C_ConfigureConfirmationButton Parms{};

	Parms.Button = Button;
	Parms.Action = std::move(Action);
	Parms.bSimpleConfirm = bSimpleConfirm;

	UObject::ProcessEvent(Func, &Parms);
}

void UConfirmationWindow_C::ConfigureDeclineButton(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmationWindow_C", "ConfigureDeclineButton");

	Params::ConfirmationWindow_C_ConfigureDeclineButton Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UConfirmationWindow_C::ExecuteUbergraph_ConfirmationWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmationWindow_C", "ExecuteUbergraph_ConfirmationWindow");

	Params::ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

struct FDataTableRowHandle UConfirmationWindow_C::GetInputAction(class FName RowName, bool UseInputAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmationWindow_C", "GetInputAction");

	Params::ConfirmationWindow_C_GetInputAction Parms{};

	Parms.RowName = RowName;
	Parms.UseInputAction = UseInputAction;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UConfirmationWindow_C::Handle_Configure_Decline_Button(class UCommonButtonBase* New_Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmationWindow_C", "Handle Configure Decline Button");

	Params::ConfirmationWindow_C_Handle_Configure_Decline_Button Parms{};

	Parms.New_Button = New_Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UConfirmationWindow_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmationWindow_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}

void UConfirmationWindow_C::OnBeginOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmationWindow_C", "OnBeginOutro");

	UObject::ProcessEvent(Func, nullptr);
}

void UConfirmationWindow_C::PlayShowSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmationWindow_C", "PlayShowSound");

	UObject::ProcessEvent(Func, nullptr);
}

void UConfirmationWindow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmationWindow_C", "PreConstruct");

	Params::ConfirmationWindow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UConfirmationWindow_C::SetupNonInteractiveContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmationWindow_C", "SetupNonInteractiveContent");

	UObject::ProcessEvent(Func, nullptr);
}

struct FEventReply UConfirmationWindow_C::TapToClose(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfirmationWindow_C", "TapToClose");

	Params::ConfirmationWindow_C_TapToClose Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
