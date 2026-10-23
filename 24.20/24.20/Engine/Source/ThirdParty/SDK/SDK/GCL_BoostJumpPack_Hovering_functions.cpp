#pragma once

#include "Basic.hpp"

#include "GCL_BoostJumpPack_Hovering_classes.hpp"
#include "GCL_BoostJumpPack_Hovering_parameters.hpp"

namespace SDK
{

void AGCL_BoostJumpPack_Hovering_C::ExecuteUbergraph_GCL_BoostJumpPack_Hovering(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_C", "ExecuteUbergraph_GCL_BoostJumpPack_Hovering");

	Params::GCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCL_BoostJumpPack_Hovering_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_C", "K2_HandleGameplayCue");

	Params::GCL_BoostJumpPack_Hovering_C_K2_HandleGameplayCue Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

bool AGCL_BoostJumpPack_Hovering_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_C", "OnActive");

	Params::GCL_BoostJumpPack_Hovering_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool AGCL_BoostJumpPack_Hovering_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_C", "OnRemove");

	Params::GCL_BoostJumpPack_Hovering_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AGCL_BoostJumpPack_Hovering_C::PlayLowFuelWarning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_C", "PlayLowFuelWarning");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCL_BoostJumpPack_Hovering_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCL_BoostJumpPack_Hovering_C::ResetFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_C", "ResetFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCL_BoostJumpPack_Hovering_C::SetJetpackAudioEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_C", "SetJetpackAudioEnabled");

	Params::GCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCL_BoostJumpPack_Hovering_C::TryToPlayGroundEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_C", "TryToPlayGroundEffects");

	UObject::ProcessEvent(Func, nullptr);
}

}
