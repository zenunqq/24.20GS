#pragma once

#include "Basic.hpp"

#include "PageNavigatorPipButton_classes.hpp"
#include "PageNavigatorPipButton_parameters.hpp"

namespace SDK
{

void UPageNavigatorPipButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigatorPipButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UPageNavigatorPipButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigatorPipButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UPageNavigatorPipButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigatorPipButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UPageNavigatorPipButton_C::ExecuteUbergraph_PageNavigatorPipButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigatorPipButton_C", "ExecuteUbergraph_PageNavigatorPipButton");

	Params::PageNavigatorPipButton_C_ExecuteUbergraph_PageNavigatorPipButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPageNavigatorPipButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigatorPipButton_C", "PreConstruct");

	Params::PageNavigatorPipButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UPageNavigatorPipButton_C::Set_Pip_Colors(const struct FLinearColor& Base_Color, const struct FLinearColor& Hover_Color, const struct FLinearColor& Select_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigatorPipButton_C", "Set Pip Colors");

	Params::PageNavigatorPipButton_C_Set_Pip_Colors Parms{};

	Parms.Base_Color = std::move(Base_Color);
	Parms.Hover_Color = std::move(Hover_Color);
	Parms.Select_Color = std::move(Select_Color);

	UObject::ProcessEvent(Func, &Parms);
}

void UPageNavigatorPipButton_C::SetRightStickIconAllowed(bool Allowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigatorPipButton_C", "SetRightStickIconAllowed");

	Params::PageNavigatorPipButton_C_SetRightStickIconAllowed Parms{};

	Parms.Allowed = Allowed;

	UObject::ProcessEvent(Func, &Parms);
}

}
