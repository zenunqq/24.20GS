#pragma once

#include "Basic.hpp"

#include "SoloButton_classes.hpp"
#include "SoloButton_parameters.hpp"

namespace SDK
{

void USoloButton_C::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_C", "SetText");

	Params::SoloButton_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void USoloButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_C", "PreConstruct");

	Params::SoloButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void USoloButton_C::HandleSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_C", "HandleSize");

	UObject::ProcessEvent(Func, nullptr);
}

void USoloButton_C::ExecuteUbergraph_SoloButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_C", "ExecuteUbergraph_SoloButton");

	Params::SoloButton_C_ExecuteUbergraph_SoloButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USoloButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USoloButton_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_C", "BP_OnEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

void USoloButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USoloButton_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_C", "BP_OnDisabled");

	UObject::ProcessEvent(Func, nullptr);
}

void USoloButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USoloButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

}
