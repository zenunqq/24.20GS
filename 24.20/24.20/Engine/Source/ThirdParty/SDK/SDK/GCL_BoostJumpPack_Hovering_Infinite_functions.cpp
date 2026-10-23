#pragma once

#include "Basic.hpp"

#include "GCL_BoostJumpPack_Hovering_Infinite_classes.hpp"
#include "GCL_BoostJumpPack_Hovering_Infinite_parameters.hpp"

namespace SDK
{

void AGCL_BoostJumpPack_Hovering_Infinite_C::ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_Infinite_C", "ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite");

	Params::GCL_BoostJumpPack_Hovering_Infinite_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCL_BoostJumpPack_Hovering_Infinite_C::On_Pawn_Landed(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_Infinite_C", "On Pawn Landed");

	Params::GCL_BoostJumpPack_Hovering_Infinite_C_On_Pawn_Landed Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

bool AGCL_BoostJumpPack_Hovering_Infinite_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_Infinite_C", "OnActive");

	Params::GCL_BoostJumpPack_Hovering_Infinite_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool AGCL_BoostJumpPack_Hovering_Infinite_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_Infinite_C", "OnRemove");

	Params::GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AGCL_BoostJumpPack_Hovering_Infinite_C::SetJetpackAudioEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_Infinite_C", "SetJetpackAudioEnabled");

	Params::GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

}
