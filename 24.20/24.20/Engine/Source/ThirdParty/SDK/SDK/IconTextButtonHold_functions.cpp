#pragma once

#include "Basic.hpp"

#include "IconTextButtonHold_classes.hpp"
#include "IconTextButtonHold_parameters.hpp"

namespace SDK
{

void UIconTextButtonHold_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButtonHold_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButtonHold_C::ExecuteUbergraph_IconTextButtonHold(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "ExecuteUbergraph_IconTextButtonHold");

	Params::IconTextButtonHold_C_ExecuteUbergraph_IconTextButtonHold Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButtonHold_C::Get_Dynamic_Material(class UMaterialInstanceDynamic** Ret_Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "Get Dynamic Material");

	Params::IconTextButtonHold_C_Get_Dynamic_Material Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret_Material != nullptr)
		*Ret_Material = Parms.Ret_Material;
}

void UIconTextButtonHold_C::GetPressProgress(double* Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "GetPressProgress");

	Params::IconTextButtonHold_C_GetPressProgress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;
}

void UIconTextButtonHold_C::InitializeButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "InitializeButton");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButtonHold_C::OnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "OnActionComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButtonHold_C::OnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "OnActionProgress");

	Params::IconTextButtonHold_C_OnActionProgress Parms{};

	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButtonHold_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButtonHold_C::OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "OnTriggeredInputActionChanged");

	Params::IconTextButtonHold_C_OnTriggeredInputActionChanged Parms{};

	Parms.NewTriggeredAction = std::move(NewTriggeredAction);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButtonHold_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "PreConstruct");

	Params::IconTextButtonHold_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButtonHold_C::Set_Icon(const struct FSlateBrush& IconBrush_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "Set Icon");

	Params::IconTextButtonHold_C_Set_Icon Parms{};

	Parms.IconBrush_0 = std::move(IconBrush_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButtonHold_C::Set_Text(const class FText& ButtonText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "Set Text");

	Params::IconTextButtonHold_C_Set_Text Parms{};

	Parms.ButtonText_0 = std::move(ButtonText_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButtonHold_C::SetContentAlignment(EHorizontalAlignment ContentAlignment_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "SetContentAlignment");

	Params::IconTextButtonHold_C_SetContentAlignment Parms{};

	Parms.ContentAlignment_0 = ContentAlignment_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButtonHold_C::SetControllerStyle(class UClass* ControllerInputStyle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "SetControllerStyle");

	Params::IconTextButtonHold_C_SetControllerStyle Parms{};

	Parms.ControllerInputStyle_0 = ControllerInputStyle_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButtonHold_C::SetInitialMouseKeyboardStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "SetInitialMouseKeyboardStyle");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButtonHold_C::SetMouseKeyboardStyle(class UClass* ControllerInputStyle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "SetMouseKeyboardStyle");

	Params::IconTextButtonHold_C_SetMouseKeyboardStyle Parms{};

	Parms.ControllerInputStyle_0 = ControllerInputStyle_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButtonHold_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "SetTabLabelInfo");

	Params::IconTextButtonHold_C_SetTabLabelInfo Parms{};

	Parms.TabLabelInfo = std::move(TabLabelInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButtonHold_C::SetTextInternal(const class FText& InButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "SetTextInternal");

	Params::IconTextButtonHold_C_SetTextInternal Parms{};

	Parms.InButtonText = std::move(InButtonText);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButtonHold_C::ShowIcon(bool bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "ShowIcon");

	Params::IconTextButtonHold_C_ShowIcon Parms{};

	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButtonHold_C::UpdateContentAlignment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "UpdateContentAlignment");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButtonHold_C::UpdateStyle(bool UsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "UpdateStyle");

	Params::IconTextButtonHold_C_UpdateStyle Parms{};

	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButtonHold_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTextButtonHold_C::UpdateTextAndStyle(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "UpdateTextAndStyle");

	Params::IconTextButtonHold_C_UpdateTextAndStyle Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTextButtonHold_C::UpdateTextStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButtonHold_C", "UpdateTextStyle");

	UObject::ProcessEvent(Func, nullptr);
}

}
