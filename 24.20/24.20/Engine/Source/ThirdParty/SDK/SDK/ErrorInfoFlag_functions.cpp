#pragma once

#include "Basic.hpp"

#include "ErrorInfoFlag_classes.hpp"
#include "ErrorInfoFlag_parameters.hpp"

namespace SDK
{

void UErrorInfoFlag_C::UpdateText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorInfoFlag_C", "UpdateText");

	Params::ErrorInfoFlag_C_UpdateText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void UErrorInfoFlag_C::UpdateIconMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorInfoFlag_C", "UpdateIconMaterial");

	Params::ErrorInfoFlag_C_UpdateIconMaterial Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);
}

void UErrorInfoFlag_C::UpdateAccentColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorInfoFlag_C", "UpdateAccentColor");

	Params::ErrorInfoFlag_C_UpdateAccentColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}

void UErrorInfoFlag_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorInfoFlag_C", "PreConstruct");

	Params::ErrorInfoFlag_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UErrorInfoFlag_C::ExecuteUbergraph_ErrorInfoFlag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorInfoFlag_C", "ExecuteUbergraph_ErrorInfoFlag");

	Params::ErrorInfoFlag_C_ExecuteUbergraph_ErrorInfoFlag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UErrorInfoFlag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorInfoFlag_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
