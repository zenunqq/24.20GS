#pragma once

#include "Basic.hpp"

#include "PrimarySkewButton_classes.hpp"
#include "PrimarySkewButton_parameters.hpp"

namespace SDK
{

void UPrimarySkewButton_C::ExecuteUbergraph_PrimarySkewButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_C", "ExecuteUbergraph_PrimarySkewButton");

	Params::PrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPrimarySkewButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UPrimarySkewButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_C", "PreConstruct");

	Params::PrimarySkewButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UPrimarySkewButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

struct FEventReply UPrimarySkewButton_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_C", "OnMouseButtonUp");

	Params::PrimarySkewButton_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UPrimarySkewButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

struct FEventReply UPrimarySkewButton_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_C", "OnMouseButtonDown");

	Params::PrimarySkewButton_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UPrimarySkewButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UPrimarySkewButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimarySkewButton_C", "BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::PrimarySkewButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

}
