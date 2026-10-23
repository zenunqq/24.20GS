#pragma once

#include "Basic.hpp"

#include "SocialScreen_classes.hpp"
#include "SocialScreen_parameters.hpp"

namespace SDK
{

void USocialScreen_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialScreen_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialScreen_C::ExecuteUbergraph_SocialScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialScreen_C", "ExecuteUbergraph_SocialScreen");

	Params::SocialScreen_C_ExecuteUbergraph_SocialScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USocialScreen_C::Show_Career_Screen_Event(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialScreen_C", "Show Career Screen Event");

	Params::SocialScreen_C_Show_Career_Screen_Event Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

}
