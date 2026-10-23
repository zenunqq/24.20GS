#pragma once

#include "Basic.hpp"

#include "EventsSimpleTab_classes.hpp"
#include "EventsSimpleTab_parameters.hpp"

namespace SDK
{

void UEventsSimpleTab_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventsSimpleTab_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventsSimpleTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventsSimpleTab_C::ExecuteUbergraph_EventsSimpleTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "ExecuteUbergraph_EventsSimpleTab");

	Params::EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventsSimpleTab_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventsSimpleTab_C::OnSelectedChangedEvent(class UCommonButtonLegacy* Button, bool Selected_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "OnSelectedChangedEvent");

	Params::EventsSimpleTab_C_OnSelectedChangedEvent Parms{};

	Parms.Button = Button;
	Parms.Selected_0 = Selected_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventsSimpleTab_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "PreConstruct");

	Params::EventsSimpleTab_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventsSimpleTab_C::UpdateColor(const class FString& ParameterName, const struct FLinearColor& New_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "UpdateColor");

	Params::EventsSimpleTab_C_UpdateColor Parms{};

	Parms.ParameterName = std::move(ParameterName);
	Parms.New_Color = std::move(New_Color);

	UObject::ProcessEvent(Func, &Parms);
}

}
