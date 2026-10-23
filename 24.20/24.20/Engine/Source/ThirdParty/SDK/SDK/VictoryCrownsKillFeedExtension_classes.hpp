#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UVictoryCrownsKillFeedExtension_C final : public UFortGameStateComponent_KillFeedExtension
{
public:
	class FString                                 OverrideVictimStyle;
	class FString                                 OverrideKillerStyle;

public:
	class FString CheckForOverrideKillerStyle(const class AFortPlayerStateAthena* KillerPlayerStateAthena, const class FString& KillerStyle) const;
	class FString CheckForOverrideVictimStyle(const class AFortPlayerStateAthena* VictimPlayerStateAthena, const class FString& VictimStyle) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VictoryCrownsKillFeedExtension_C">();
	}
	static class UVictoryCrownsKillFeedExtension_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVictoryCrownsKillFeedExtension_C>();
	}
};
static_assert(alignof(UVictoryCrownsKillFeedExtension_C) == 0x000008, "Wrong alignment on UVictoryCrownsKillFeedExtension_C");
static_assert(sizeof(UVictoryCrownsKillFeedExtension_C) == 0x0000C0, "Wrong size on UVictoryCrownsKillFeedExtension_C");
static_assert(offsetof(UVictoryCrownsKillFeedExtension_C, OverrideVictimStyle) == 0x0000A0, "Member 'UVictoryCrownsKillFeedExtension_C::OverrideVictimStyle' has a wrong offset!");
static_assert(offsetof(UVictoryCrownsKillFeedExtension_C, OverrideKillerStyle) == 0x0000B0, "Member 'UVictoryCrownsKillFeedExtension_C::OverrideKillerStyle' has a wrong offset!");

}
