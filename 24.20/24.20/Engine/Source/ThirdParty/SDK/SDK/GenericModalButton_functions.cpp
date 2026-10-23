#pragma once

#include "Basic.hpp"

#include "GenericModalButton_classes.hpp"
#include "GenericModalButton_parameters.hpp"

namespace SDK
{

void UGenericModalButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericModalButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UGenericModalButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericModalButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UGenericModalButton_C::ExecuteUbergraph_GenericModalButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericModalButton_C", "ExecuteUbergraph_GenericModalButton");

	Params::GenericModalButton_C_ExecuteUbergraph_GenericModalButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGenericModalButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericModalButton_C", "PreConstruct");

	Params::GenericModalButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UGenericModalButton_C::SetBorderShowEffectWhenDisable(bool ShowEffectWhenDisabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericModalButton_C", "SetBorderShowEffectWhenDisable");

	Params::GenericModalButton_C_SetBorderShowEffectWhenDisable Parms{};

	Parms.ShowEffectWhenDisabled = ShowEffectWhenDisabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGenericModalButton_C::SetButtonText(const class FText& ButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericModalButton_C", "SetButtonText");

	Params::GenericModalButton_C_SetButtonText Parms{};

	Parms.ButtonText = std::move(ButtonText);

	UObject::ProcessEvent(Func, &Parms);
}

}
