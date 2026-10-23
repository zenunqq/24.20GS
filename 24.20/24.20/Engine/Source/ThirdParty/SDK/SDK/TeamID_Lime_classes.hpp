#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UTeamID_Lime_C final : public UFortTeamIdentification
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamID_Lime_C">();
	}
	static class UTeamID_Lime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamID_Lime_C>();
	}
};
static_assert(alignof(UTeamID_Lime_C) == 0x000008, "Wrong alignment on UTeamID_Lime_C");
static_assert(sizeof(UTeamID_Lime_C) == 0x000038, "Wrong size on UTeamID_Lime_C");

}
