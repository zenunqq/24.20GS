#pragma once

#include "Basic.hpp"

#include "InfoFlag_classes.hpp"
#include "InfoFlag_parameters.hpp"

namespace SDK
{

void UInfoFlag_C::UpdateTrimColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoFlag_C", "UpdateTrimColor");

	Params::InfoFlag_C_UpdateTrimColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}

void UInfoFlag_C::UpdateText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoFlag_C", "UpdateText");

	Params::InfoFlag_C_UpdateText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void UInfoFlag_C::UpdateGradientColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoFlag_C", "UpdateGradientColor");

	Params::InfoFlag_C_UpdateGradientColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}

void UInfoFlag_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoFlag_C", "PreConstruct");

	Params::InfoFlag_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UInfoFlag_C::ExecuteUbergraph_InfoFlag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoFlag_C", "ExecuteUbergraph_InfoFlag");

	Params::InfoFlag_C_ExecuteUbergraph_InfoFlag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UInfoFlag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InfoFlag_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
