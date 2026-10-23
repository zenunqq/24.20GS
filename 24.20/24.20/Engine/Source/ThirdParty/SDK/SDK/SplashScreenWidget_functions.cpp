#pragma once

#include "Basic.hpp"

#include "SplashScreenWidget_classes.hpp"
#include "SplashScreenWidget_parameters.hpp"

namespace SDK
{

void USplashScreenWidget_C::OnInputMethodChanged(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplashScreenWidget_C", "OnInputMethodChanged");

	Params::SplashScreenWidget_C_OnInputMethodChanged Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}

void USplashScreenWidget_C::ExecuteUbergraph_SplashScreenWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplashScreenWidget_C", "ExecuteUbergraph_SplashScreenWidget");

	Params::SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USplashScreenWidget_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplashScreenWidget_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}
