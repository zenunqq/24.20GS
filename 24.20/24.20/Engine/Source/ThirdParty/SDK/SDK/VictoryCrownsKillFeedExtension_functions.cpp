#pragma once

#include "Basic.hpp"

#include "VictoryCrownsKillFeedExtension_classes.hpp"
#include "VictoryCrownsKillFeedExtension_parameters.hpp"

namespace SDK
{

class FString UVictoryCrownsKillFeedExtension_C::CheckForOverrideKillerStyle(const class AFortPlayerStateAthena* KillerPlayerStateAthena, const class FString& KillerStyle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsKillFeedExtension_C", "CheckForOverrideKillerStyle");

	Params::VictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle Parms{};

	Parms.KillerPlayerStateAthena = KillerPlayerStateAthena;
	Parms.KillerStyle = std::move(KillerStyle);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class FString UVictoryCrownsKillFeedExtension_C::CheckForOverrideVictimStyle(const class AFortPlayerStateAthena* VictimPlayerStateAthena, const class FString& VictimStyle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownsKillFeedExtension_C", "CheckForOverrideVictimStyle");

	Params::VictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle Parms{};

	Parms.VictimPlayerStateAthena = VictimPlayerStateAthena;
	Parms.VictimStyle = std::move(VictimStyle);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
