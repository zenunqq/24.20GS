#pragma once

#include "Basic.hpp"

#include "LoginScreen_classes.hpp"
#include "LoginScreen_parameters.hpp"

namespace SDK
{

void ULoginScreen_C::SetKeyArtVisibility(int32 NewActiveWidgetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginScreen_C", "SetKeyArtVisibility");

	Params::LoginScreen_C_SetKeyArtVisibility Parms{};

	Parms.NewActiveWidgetIndex = NewActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void ULoginScreen_C::ExecuteUbergraph_LoginScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginScreen_C", "ExecuteUbergraph_LoginScreen");

	Params::LoginScreen_C_ExecuteUbergraph_LoginScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULoginScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void ULoginScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void ULoginScreen_C::BndEvt__LoginScreen_Splash_Screen_K2Node_ComponentBoundEvent_0_OnWidgetActivationChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginScreen_C", "BndEvt__LoginScreen_Splash_Screen_K2Node_ComponentBoundEvent_0_OnWidgetActivationChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}
