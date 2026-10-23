#pragma once

#include "Basic.hpp"

#include "SupportModal_classes.hpp"
#include "SupportModal_parameters.hpp"

namespace SDK
{

void USupportModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SupportModal_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void USupportModal_C::ExecuteUbergraph_SupportModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SupportModal_C", "ExecuteUbergraph_SupportModal");

	Params::SupportModal_C_ExecuteUbergraph_SupportModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USupportModal_C::OnModalBackout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SupportModal_C", "OnModalBackout");

	UObject::ProcessEvent(Func, nullptr);
}

}
