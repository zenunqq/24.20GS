#pragma once

#include "Basic.hpp"

#include "ProgressModalWidget_classes.hpp"
#include "ProgressModalWidget_parameters.hpp"

namespace SDK
{

void UProgressModalWidget_C::OnBeginOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "OnBeginOutro");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressModalWidget_C::OnBeginIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "OnBeginIntro");

	UObject::ProcessEvent(Func, nullptr);
}

struct FEventReply UProgressModalWidget_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "OnAnalogValueChanged");

	Params::ProgressModalWidget_C_OnAnalogValueChanged Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InAnalogInputEvent = std::move(InAnalogInputEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UProgressModalWidget_C::HandleOutroEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "HandleOutroEnded");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressModalWidget_C::HandleIntroEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "HandleIntroEnded");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressModalWidget_C::ExecuteUbergraph_ProgressModalWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "ExecuteUbergraph_ProgressModalWidget");

	Params::ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressModalWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressModalWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
