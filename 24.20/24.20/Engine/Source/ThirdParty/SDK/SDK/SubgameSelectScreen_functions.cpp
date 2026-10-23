#pragma once

#include "Basic.hpp"

#include "SubgameSelectScreen_classes.hpp"
#include "SubgameSelectScreen_parameters.hpp"

namespace SDK
{

void USubgameSelectScreen_C::OnEventUpdated_57187EC14A536D0960088EB25BDF39E5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameSelectScreen_C", "OnEventUpdated_57187EC14A536D0960088EB25BDF39E5");

	Params::SubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5 Parms{};

	Parms.EventName = std::move(EventName);
	Parms.TimeUntilEnd = std::move(TimeUntilEnd);
	Parms.TimeSinceBegin = std::move(TimeSinceBegin);
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);
}

void USubgameSelectScreen_C::OnEventEnded_57187EC14A536D0960088EB25BDF39E5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameSelectScreen_C", "OnEventEnded_57187EC14A536D0960088EB25BDF39E5");

	Params::SubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5 Parms{};

	Parms.EventName = std::move(EventName);
	Parms.TimeUntilEnd = std::move(TimeUntilEnd);
	Parms.TimeSinceBegin = std::move(TimeSinceBegin);
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);
}

void USubgameSelectScreen_C::ExecuteUbergraph_SubgameSelectScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameSelectScreen_C", "ExecuteUbergraph_SubgameSelectScreen");

	Params::SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USubgameSelectScreen_C::OnEventActive_57187EC14A536D0960088EB25BDF39E5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameSelectScreen_C", "OnEventActive_57187EC14A536D0960088EB25BDF39E5");

	Params::SubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5 Parms{};

	Parms.EventName = std::move(EventName);
	Parms.TimeUntilEnd = std::move(TimeUntilEnd);
	Parms.TimeSinceBegin = std::move(TimeSinceBegin);
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);
}

void USubgameSelectScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameSelectScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void USubgameSelectScreen_C::IsMinorShutdownWarningEnabled(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameSelectScreen_C", "IsMinorShutdownWarningEnabled");

	Params::SubgameSelectScreen_C_IsMinorShutdownWarningEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;
}

void USubgameSelectScreen_C::AdvanceTextureCycle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameSelectScreen_C", "AdvanceTextureCycle");

	UObject::ProcessEvent(Func, nullptr);
}

bool USubgameSelectScreen_C::IsBusyMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameSelectScreen_C", "IsBusyMatchmaking");

	Params::SubgameSelectScreen_C_IsBusyMatchmaking Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void USubgameSelectScreen_C::InitializeTextureCycle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameSelectScreen_C", "InitializeTextureCycle");

	UObject::ProcessEvent(Func, nullptr);
}

}
