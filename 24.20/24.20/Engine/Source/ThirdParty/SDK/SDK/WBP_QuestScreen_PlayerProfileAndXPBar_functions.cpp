#pragma once

#include "Basic.hpp"

#include "WBP_QuestScreen_PlayerProfileAndXPBar_classes.hpp"
#include "WBP_QuestScreen_PlayerProfileAndXPBar_parameters.hpp"

namespace SDK
{

void UWBP_QuestScreen_PlayerProfileAndXPBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestScreen_PlayerProfileAndXPBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_QuestScreen_PlayerProfileAndXPBar_C::ExecuteUbergraph_WBP_QuestScreen_PlayerProfileAndXPBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestScreen_PlayerProfileAndXPBar_C", "ExecuteUbergraph_WBP_QuestScreen_PlayerProfileAndXPBar");

	Params::WBP_QuestScreen_PlayerProfileAndXPBar_C_ExecuteUbergraph_WBP_QuestScreen_PlayerProfileAndXPBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_QuestScreen_PlayerProfileAndXPBar_C::SetCollapsedMode(bool IsCollapsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestScreen_PlayerProfileAndXPBar_C", "SetCollapsedMode");

	Params::WBP_QuestScreen_PlayerProfileAndXPBar_C_SetCollapsedMode Parms{};

	Parms.IsCollapsed = IsCollapsed;

	UObject::ProcessEvent(Func, &Parms);
}

}
