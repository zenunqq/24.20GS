#pragma once

#include "Basic.hpp"

#include "SpeechBubbleWidget_classes.hpp"
#include "SpeechBubbleWidget_parameters.hpp"

namespace SDK
{

void USpeechBubbleWidget_C::ExecuteUbergraph_SpeechBubbleWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpeechBubbleWidget_C", "ExecuteUbergraph_SpeechBubbleWidget");

	Params::SpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USpeechBubbleWidget_C::InitFromObject(class UObject* InitObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpeechBubbleWidget_C", "InitFromObject");

	Params::SpeechBubbleWidget_C_InitFromObject Parms{};

	Parms.InitObject = InitObject;

	UObject::ProcessEvent(Func, &Parms);
}

}
