#pragma once

#include "Basic.hpp"

#include "BP_BotController_NPC_Base_classes.hpp"
#include "BP_BotController_NPC_Base_parameters.hpp"

namespace SDK
{

void ABP_BotController_NPC_Base_C::BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_0_PatrollingComponentOnStartPatrolling__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BotController_NPC_Base_C", "BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_0_PatrollingComponentOnStartPatrolling__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_BotController_NPC_Base_C::BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_1_PatrollingComponentOnStopPatrolling__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BotController_NPC_Base_C", "BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_1_PatrollingComponentOnStopPatrolling__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_BotController_NPC_Base_C::ExecuteUbergraph_BP_BotController_NPC_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BotController_NPC_Base_C", "ExecuteUbergraph_BP_BotController_NPC_Base");

	Params::BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
