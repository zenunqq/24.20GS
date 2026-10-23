#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class APBWA_S1_Floor_C final : public ABuildingFloor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_S1_Floor_C">();
	}
	static class APBWA_S1_Floor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_S1_Floor_C>();
	}
};
static_assert(alignof(APBWA_S1_Floor_C) == 0x000008, "Wrong alignment on APBWA_S1_Floor_C");
static_assert(sizeof(APBWA_S1_Floor_C) == 0x000DC8, "Wrong size on APBWA_S1_Floor_C");

}
