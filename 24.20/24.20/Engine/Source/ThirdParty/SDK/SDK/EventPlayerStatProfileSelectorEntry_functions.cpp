#pragma once

#include "Basic.hpp"

#include "EventPlayerStatProfileSelectorEntry_classes.hpp"
#include "EventPlayerStatProfileSelectorEntry_parameters.hpp"

namespace SDK
{

void UEventPlayerStatProfileSelectorEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventPlayerStatProfileSelectorEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventPlayerStatProfileSelectorEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventPlayerStatProfileSelectorEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventPlayerStatProfileSelectorEntry_C::ExecuteUbergraph_EventPlayerStatProfileSelectorEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventPlayerStatProfileSelectorEntry_C", "ExecuteUbergraph_EventPlayerStatProfileSelectorEntry");

	Params::EventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
