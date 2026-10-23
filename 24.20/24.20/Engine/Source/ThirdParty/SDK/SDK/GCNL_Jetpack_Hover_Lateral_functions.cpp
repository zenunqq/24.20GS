#pragma once

#include "Basic.hpp"

#include "GCNL_Jetpack_Hover_Lateral_classes.hpp"
#include "GCNL_Jetpack_Hover_Lateral_parameters.hpp"

namespace SDK
{

void AGCNL_Jetpack_Hover_Lateral_C::ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral");

	Params::GCNL_Jetpack_Hover_Lateral_C_ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Jetpack_Hover_Lateral_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "K2_HandleGameplayCue");

	Params::GCNL_Jetpack_Hover_Lateral_C_K2_HandleGameplayCue Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

bool AGCNL_Jetpack_Hover_Lateral_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "OnActive");

	Params::GCNL_Jetpack_Hover_Lateral_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool AGCNL_Jetpack_Hover_Lateral_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "OnRemove");

	Params::GCNL_Jetpack_Hover_Lateral_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AGCNL_Jetpack_Hover_Lateral_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Jetpack_Hover_Lateral_C::ResetFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "ResetFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Jetpack_Hover_Lateral_C::SetJetpackAudioEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "SetJetpackAudioEnabled");

	Params::GCNL_Jetpack_Hover_Lateral_C_SetJetpackAudioEnabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Jetpack_Hover_Lateral_C::TryToPlayGroundEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Jetpack_Hover_Lateral_C", "TryToPlayGroundEffects");

	UObject::ProcessEvent(Func, nullptr);
}

}
