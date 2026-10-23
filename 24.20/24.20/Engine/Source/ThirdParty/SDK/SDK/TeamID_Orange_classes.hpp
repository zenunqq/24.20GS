#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UTeamID_Orange_C final : public UFortTeamIdentification
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamID_Orange_C">();
	}
	static class UTeamID_Orange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamID_Orange_C>();
	}
};
static_assert(alignof(UTeamID_Orange_C) == 0x000008, "Wrong alignment on UTeamID_Orange_C");
static_assert(sizeof(UTeamID_Orange_C) == 0x000038, "Wrong size on UTeamID_Orange_C");

}
