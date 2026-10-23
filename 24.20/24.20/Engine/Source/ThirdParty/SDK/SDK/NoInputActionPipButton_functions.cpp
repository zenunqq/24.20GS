#pragma once

#include "Basic.hpp"

#include "NoInputActionPipButton_classes.hpp"
#include "NoInputActionPipButton_parameters.hpp"

namespace SDK
{

void UNoInputActionPipButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NoInputActionPipButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UNoInputActionPipButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NoInputActionPipButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UNoInputActionPipButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NoInputActionPipButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UNoInputActionPipButton_C::ExecuteUbergraph_NoInputActionPipButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NoInputActionPipButton_C", "ExecuteUbergraph_NoInputActionPipButton");

	Params::NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UNoInputActionPipButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NoInputActionPipButton_C", "PreConstruct");

	Params::NoInputActionPipButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UNoInputActionPipButton_C::Set_Pip_Colors(const struct FLinearColor& Base_Color, const struct FLinearColor& Hover_Color, const struct FLinearColor& Select_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NoInputActionPipButton_C", "Set Pip Colors");

	Params::NoInputActionPipButton_C_Set_Pip_Colors Parms{};

	Parms.Base_Color = std::move(Base_Color);
	Parms.Hover_Color = std::move(Hover_Color);
	Parms.Select_Color = std::move(Select_Color);

	UObject::ProcessEvent(Func, &Parms);
}

}
