#pragma once

#include "Basic.hpp"

#include "GA_DuelObserver_classes.hpp"
#include "GA_DuelObserver_parameters.hpp"

namespace SDK
{

void UGA_DuelObserver_C::ExecuteUbergraph_GA_DuelObserver(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DuelObserver_C", "ExecuteUbergraph_GA_DuelObserver");

	Params::GA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_DuelObserver_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DuelObserver_C", "K2_ActivateAbilityFromEvent");

	Params::GA_DuelObserver_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_DuelObserver_C::OnDuelChange(EDuelState NewDuelState, const struct FDuelOverlayData& ChangedDuelOverlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DuelObserver_C", "OnDuelChange");

	Params::GA_DuelObserver_C_OnDuelChange Parms{};

	Parms.NewDuelState = NewDuelState;
	Parms.ChangedDuelOverlayData = std::move(ChangedDuelOverlayData);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_DuelObserver_C::UpdateDuelUI(EDuelState Duel_State, const struct FDuelOverlayData& Cached_Duel_Overlay_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DuelObserver_C", "UpdateDuelUI");

	Params::GA_DuelObserver_C_UpdateDuelUI Parms{};

	Parms.Duel_State = Duel_State;
	Parms.Cached_Duel_Overlay_Data = std::move(Cached_Duel_Overlay_Data);

	UObject::ProcessEvent(Func, &Parms);
}

}
