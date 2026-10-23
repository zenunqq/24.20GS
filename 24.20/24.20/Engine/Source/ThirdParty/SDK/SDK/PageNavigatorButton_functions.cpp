#pragma once

#include "Basic.hpp"

#include "PageNavigatorButton_classes.hpp"
#include "PageNavigatorButton_parameters.hpp"

namespace SDK
{

void UPageNavigatorButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigatorButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPageNavigatorButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigatorButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPageNavigatorButton_C::ExecuteUbergraph_PageNavigatorButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigatorButton_C", "ExecuteUbergraph_PageNavigatorButton");

	Params::PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPageNavigatorButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigatorButton_C", "PreConstruct");

	Params::PageNavigatorButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UPageNavigatorButton_C::Set_Button_colors(const struct FLinearColor& Color1, const struct FLinearColor& Color2, const struct FLinearColor& Color3, const struct FLinearColor& Color4, const struct FLinearColor& Color5)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigatorButton_C", "Set Button colors");

	Params::PageNavigatorButton_C_Set_Button_colors Parms{};

	Parms.Color1 = std::move(Color1);
	Parms.Color2 = std::move(Color2);
	Parms.Color3 = std::move(Color3);
	Parms.Color4 = std::move(Color4);
	Parms.Color5 = std::move(Color5);

	UObject::ProcessEvent(Func, &Parms);
}

void UPageNavigatorButton_C::Set_colors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigatorButton_C", "Set colors");

	UObject::ProcessEvent(Func, nullptr);
}

}
