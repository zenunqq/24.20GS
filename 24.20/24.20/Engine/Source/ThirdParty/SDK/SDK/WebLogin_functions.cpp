#pragma once

#include "Basic.hpp"

#include "WebLogin_classes.hpp"
#include "WebLogin_parameters.hpp"

namespace SDK
{

void UWebLogin_C::ExecuteUbergraph_WebLogin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebLogin_C", "ExecuteUbergraph_WebLogin");

	Params::WebLogin_C_ExecuteUbergraph_WebLogin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWebLogin_C::DisplayWidget(class UWidget* WebWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebLogin_C", "DisplayWidget");

	Params::WebLogin_C_DisplayWidget Parms{};

	Parms.WebWidget = WebWidget;

	UObject::ProcessEvent(Func, &Parms);
}

void UWebLogin_C::DismissWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebLogin_C", "DismissWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}
