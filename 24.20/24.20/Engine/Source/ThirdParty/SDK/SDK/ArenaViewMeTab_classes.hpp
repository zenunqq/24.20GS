#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UArenaViewMeTab_C final : public UFortArenaPersonalViewTab
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void Colorize(const struct FFortTournamentDisplayInfo& ColorInfo);
	void ExecuteUbergraph_ArenaViewMeTab(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ArenaViewMeTab_C">();
	}
	static class UArenaViewMeTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArenaViewMeTab_C>();
	}
};
static_assert(alignof(UArenaViewMeTab_C) == 0x000008, "Wrong alignment on UArenaViewMeTab_C");
static_assert(sizeof(UArenaViewMeTab_C) == 0x0003B8, "Wrong size on UArenaViewMeTab_C");
static_assert(offsetof(UArenaViewMeTab_C, UberGraphFrame) == 0x0003B0, "Member 'UArenaViewMeTab_C::UberGraphFrame' has a wrong offset!");

}
