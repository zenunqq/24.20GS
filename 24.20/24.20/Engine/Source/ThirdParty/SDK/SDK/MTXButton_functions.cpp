#pragma once

#include "Basic.hpp"

#include "MTXButton_classes.hpp"
#include "MTXButton_parameters.hpp"

namespace SDK
{

class UWidgetAnimation* UMTXButton_C::GetHoverAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "GetHoverAnimation");

	Params::MTXButton_C_GetHoverAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UMTXButton_C::BP_OnReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "BP_OnReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void UMTXButton_C::ExecuteUbergraph_MTXButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "ExecuteUbergraph_MTXButton");

	Params::MTXButton_C_ExecuteUbergraph_MTXButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UMTXButton_C::BP_OnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "BP_OnPressed");

	UObject::ProcessEvent(Func, nullptr);
}

void UMTXButton_C::EventOnInputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "EventOnInputMethodChanged");

	Params::MTXButton_C_EventOnInputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UMTXButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMTXButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UMTXButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MTXButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

}
