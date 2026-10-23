#pragma once

#include "Basic.hpp"

#include "CircleArrowButton_classes.hpp"
#include "CircleArrowButton_parameters.hpp"

namespace SDK
{

void UCircleArrowButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UCircleArrowButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UCircleArrowButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UCircleArrowButton_C::ExecuteUbergraph_CircleArrowButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "ExecuteUbergraph_CircleArrowButton");

	Params::CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCircleArrowButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "PreConstruct");

	Params::CircleArrowButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UCircleArrowButton_C::UpdateArrowColor(const struct FLinearColor& Color, const struct FLinearColor& HoverColor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "UpdateArrowColor");

	Params::CircleArrowButton_C_UpdateArrowColor Parms{};

	Parms.Color = std::move(Color);
	Parms.HoverColor_0 = std::move(HoverColor_0);

	UObject::ProcessEvent(Func, &Parms);
}

}
