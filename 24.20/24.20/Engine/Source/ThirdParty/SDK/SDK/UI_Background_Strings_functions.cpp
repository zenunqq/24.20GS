#pragma once

#include "Basic.hpp"

#include "UI_Background_Strings_classes.hpp"
#include "UI_Background_Strings_parameters.hpp"

namespace SDK
{

void UUI_Background_Strings_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Background_Strings_C", "PreConstruct");

	Params::UI_Background_Strings_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UUI_Background_Strings_C::ExecuteUbergraph_UI_Background_Strings(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Background_Strings_C", "ExecuteUbergraph_UI_Background_Strings");

	Params::UI_Background_Strings_C_ExecuteUbergraph_UI_Background_Strings Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UUI_Background_Strings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Background_Strings_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
