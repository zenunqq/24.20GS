#pragma once

#include "Basic.hpp"

#include "MainMenuButton_Large_classes.hpp"
#include "MainMenuButton_Large_parameters.hpp"

namespace SDK
{

void UMainMenuButton_Large_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuButton_Large_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMainMenuButton_Large_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuButton_Large_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMainMenuButton_Large_C::ExecuteUbergraph_MainMenuButton_Large(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuButton_Large_C", "ExecuteUbergraph_MainMenuButton_Large");

	Params::MainMenuButton_Large_C_ExecuteUbergraph_MainMenuButton_Large Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
