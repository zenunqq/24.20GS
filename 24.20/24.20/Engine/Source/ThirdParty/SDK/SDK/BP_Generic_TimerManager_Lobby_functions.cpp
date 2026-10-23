#pragma once

#include "Basic.hpp"

#include "BP_Generic_TimerManager_Lobby_classes.hpp"
#include "BP_Generic_TimerManager_Lobby_parameters.hpp"

namespace SDK
{

void ABP_Generic_TimerManager_Lobby_C::VisualUpdateEverySecond()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "VisualUpdateEverySecond");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_Generic_TimerManager_Lobby_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_Generic_TimerManager_Lobby_C::OnEventUpdated_2CA6194447CC90E72CA40FB1A2CD843E(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "OnEventUpdated_2CA6194447CC90E72CA40FB1A2CD843E");

	Params::BP_Generic_TimerManager_Lobby_C_OnEventUpdated_2CA6194447CC90E72CA40FB1A2CD843E Parms{};

	Parms.EventName = std::move(EventName);
	Parms.TimeUntilEnd = std::move(TimeUntilEnd);
	Parms.TimeSinceBegin = std::move(TimeSinceBegin);
	Parms.TimespanRatio_0 = TimespanRatio_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_Generic_TimerManager_Lobby_C::OnEventEnded_2CA6194447CC90E72CA40FB1A2CD843E(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "OnEventEnded_2CA6194447CC90E72CA40FB1A2CD843E");

	Params::BP_Generic_TimerManager_Lobby_C_OnEventEnded_2CA6194447CC90E72CA40FB1A2CD843E Parms{};

	Parms.EventName = std::move(EventName);
	Parms.TimeUntilEnd = std::move(TimeUntilEnd);
	Parms.TimeSinceBegin = std::move(TimeSinceBegin);
	Parms.TimespanRatio_0 = TimespanRatio_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_Generic_TimerManager_Lobby_C::OnEventActive_2CA6194447CC90E72CA40FB1A2CD843E(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "OnEventActive_2CA6194447CC90E72CA40FB1A2CD843E");

	Params::BP_Generic_TimerManager_Lobby_C_OnEventActive_2CA6194447CC90E72CA40FB1A2CD843E Parms{};

	Parms.EventName = std::move(EventName);
	Parms.TimeUntilEnd = std::move(TimeUntilEnd);
	Parms.TimeSinceBegin = std::move(TimeSinceBegin);
	Parms.TimespanRatio_0 = TimespanRatio_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_Generic_TimerManager_Lobby_C::ExecuteUbergraph_BP_Generic_TimerManager_Lobby(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "ExecuteUbergraph_BP_Generic_TimerManager_Lobby");

	Params::BP_Generic_TimerManager_Lobby_C_ExecuteUbergraph_BP_Generic_TimerManager_Lobby Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_Generic_TimerManager_Lobby_C::CountdownTimer_New()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "CountdownTimer_New");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_Generic_TimerManager_Lobby_C::CountDownTimer_AccuracyFix()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "CountDownTimer_AccuracyFix");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_Generic_TimerManager_Lobby_C::ContinueClockCountdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "ContinueClockCountdown");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_Generic_TimerManager_Lobby_C::ClearTimerVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Generic_TimerManager_Lobby_C", "ClearTimerVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

}
