#pragma once

#include "Basic.hpp"

#include "AOE_Commando_KeepOutExplosion_classes.hpp"
#include "AOE_Commando_KeepOutExplosion_parameters.hpp"

namespace SDK
{

void AAOE_Commando_KeepOutExplosion_C::ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "ExecuteUbergraph_AOE_Commando_KeepOutExplosion");

	Params::AOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AAOE_Commando_KeepOutExplosion_C::OnRep_Radius()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "OnRep_Radius");

	UObject::ProcessEvent(Func, nullptr);
}

void AAOE_Commando_KeepOutExplosion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AAOE_Commando_KeepOutExplosion_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

void AAOE_Commando_KeepOutExplosion_C::Send_Info(double Radius_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "Send_Info");

	Params::AOE_Commando_KeepOutExplosion_C_Send_Info Parms{};

	Parms.Radius_0 = Radius_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
