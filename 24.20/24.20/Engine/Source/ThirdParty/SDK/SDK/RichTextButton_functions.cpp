#pragma once

#include "Basic.hpp"

#include "RichTextButton_classes.hpp"
#include "RichTextButton_parameters.hpp"

namespace SDK
{

void URichTextButton_C::ExecuteUbergraph_RichTextButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextButton_C", "ExecuteUbergraph_RichTextButton");

	Params::RichTextButton_C_ExecuteUbergraph_RichTextButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void URichTextButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RichTextButton_C", "PreConstruct");

	Params::RichTextButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
