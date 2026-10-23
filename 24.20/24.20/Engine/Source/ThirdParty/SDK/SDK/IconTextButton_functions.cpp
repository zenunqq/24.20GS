#pragma once

#include "Basic.hpp"

#include "IconTextButton_classes.hpp"
#include "IconTextButton_parameters.hpp"

namespace SDK
{

void UIconTextButton_C::BindCommonInputSubsystem(bool bBind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "BindCommonInputSubsystem");

	Params::IconTextButton_C_BindCommonInputSubsystem Parms{};

	Parms.bBind = bBind;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButton_C::ExecuteUbergraph_IconTextButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "ExecuteUbergraph_IconTextButton");

	Params::IconTextButton_C_ExecuteUbergraph_IconTextButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::Get_Dynamic_Material(class UMaterialInstanceDynamic** Ret_Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "Get Dynamic Material");

	Params::IconTextButton_C_Get_Dynamic_Material Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret_Material != nullptr)
		*Ret_Material = Parms.Ret_Material;
}

void UIconTextButton_C::GetPressProgress(double* Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "GetPressProgress");

	Params::IconTextButton_C_GetPressProgress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;
}

void UIconTextButton_C::InitializeButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "InitializeButton");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButton_C::OnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnActionComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButton_C::OnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnActionProgress");

	Params::IconTextButton_C_OnActionProgress Parms{};

	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButton_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnFocusLost");

	Params::IconTextButton_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UIconTextButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnFocusReceived");

	Params::IconTextButton_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UIconTextButton_C::OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnTriggeredInputActionChanged");

	Params::IconTextButton_C_OnTriggeredInputActionChanged Parms{};

	Parms.NewTriggeredAction = std::move(NewTriggeredAction);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::OnTriggeringInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnTriggeringInputActionChanged");

	Params::IconTextButton_C_OnTriggeringInputActionChanged Parms{};

	Parms.NewTriggeredAction = std::move(NewTriggeredAction);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "PreConstruct");

	Params::IconTextButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::Set_Icon(const struct FSlateBrush& IconBrush_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "Set Icon");

	Params::IconTextButton_C_Set_Icon Parms{};

	Parms.IconBrush_0 = std::move(IconBrush_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::Set_Text(const class FText& ButtonText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "Set Text");

	Params::IconTextButton_C_Set_Text Parms{};

	Parms.ButtonText_0 = std::move(ButtonText_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::SetContentAlignment(EHorizontalAlignment ContentAlignment_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetContentAlignment");

	Params::IconTextButton_C_SetContentAlignment Parms{};

	Parms.ContentAlignment_0 = ContentAlignment_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::SetControllerStyle(class UClass* ControllerInputStyle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetControllerStyle");

	Params::IconTextButton_C_SetControllerStyle Parms{};

	Parms.ControllerInputStyle_0 = ControllerInputStyle_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::SetInitialMouseKeyboardStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetInitialMouseKeyboardStyle");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButton_C::SetMouseKeyboardStyle(class UClass* ControllerInputStyle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetMouseKeyboardStyle");

	Params::IconTextButton_C_SetMouseKeyboardStyle Parms{};

	Parms.ControllerInputStyle_0 = ControllerInputStyle_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetTabLabelInfo");

	Params::IconTextButton_C_SetTabLabelInfo Parms{};

	Parms.TabLabelInfo = std::move(TabLabelInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::SetTextInternal(const class FText& InButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetTextInternal");

	Params::IconTextButton_C_SetTextInternal Parms{};

	Parms.InButtonText = std::move(InButtonText);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::ShowIcon(bool bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "ShowIcon");

	Params::IconTextButton_C_ShowIcon Parms{};

	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::UpdateContentAlignment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateContentAlignment");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButton_C::UpdateStyle(bool UsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateStyle");

	Params::IconTextButton_C_UpdateStyle Parms{};

	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButton_C::UpdateTextAndStyle(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateTextAndStyle");

	Params::IconTextButton_C_UpdateTextAndStyle Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButton_C::UpdateTextStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateTextStyle");

	UObject::ProcessEvent(Func, nullptr);
}

}
