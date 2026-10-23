#pragma once

#include "Basic.hpp"

#include "AthenaBannerSelectModal_classes.hpp"
#include "AthenaBannerSelectModal_parameters.hpp"

namespace SDK
{

void UAthenaBannerSelectModal_C::BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBannerSelectModal_C", "BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature");

	Params::AthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature Parms{};

	Parms.IconId = IconId;
	Parms.ColorId = ColorId;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaBannerSelectModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBannerSelectModal_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaBannerSelectModal_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBannerSelectModal_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaBannerSelectModal_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBannerSelectModal_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaBannerSelectModal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBannerSelectModal_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaBannerSelectModal_C::ExecuteUbergraph_AthenaBannerSelectModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBannerSelectModal_C", "ExecuteUbergraph_AthenaBannerSelectModal");

	Params::AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaBannerSelectModal_C::HandleCloseAction(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBannerSelectModal_C", "HandleCloseAction");

	Params::AthenaBannerSelectModal_C_HandleCloseAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}

struct FEventReply UAthenaBannerSelectModal_C::On_BorderTouch_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBannerSelectModal_C", "On_BorderTouch_MouseButtonDown_0");

	Params::AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UAthenaBannerSelectModal_C::Setup_Input_Action_Handlers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBannerSelectModal_C", "Setup Input Action Handlers");

	UObject::ProcessEvent(Func, nullptr);
}

}
