#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UTeamID_Default_C final : public UFortTeamIdentification
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamID_Default_C">();
	}
	static class UTeamID_Default_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamID_Default_C>();
	}
};
static_assert(alignof(UTeamID_Default_C) == 0x000008, "Wrong alignment on UTeamID_Default_C");
static_assert(sizeof(UTeamID_Default_C) == 0x000038, "Wrong size on UTeamID_Default_C");

}
