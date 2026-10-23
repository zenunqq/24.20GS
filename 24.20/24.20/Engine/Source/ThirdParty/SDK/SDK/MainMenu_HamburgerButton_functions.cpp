#pragma once

#include "Basic.hpp"

#include "MainMenu_HamburgerButton_classes.hpp"
#include "MainMenu_HamburgerButton_parameters.hpp"

namespace SDK
{

void UMainMenu_HamburgerButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_HamburgerButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMainMenu_HamburgerButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_HamburgerButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMainMenu_HamburgerButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_HamburgerButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UMainMenu_HamburgerButton_C::ExecuteUbergraph_MainMenu_HamburgerButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_HamburgerButton_C", "ExecuteUbergraph_MainMenu_HamburgerButton");

	Params::MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
