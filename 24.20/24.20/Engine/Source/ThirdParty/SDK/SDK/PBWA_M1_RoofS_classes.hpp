#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class APBWA_M1_RoofS_C final : public ABuildingRoof
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_M1_RoofS_C">();
	}
	static class APBWA_M1_RoofS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_M1_RoofS_C>();
	}
};
static_assert(alignof(APBWA_M1_RoofS_C) == 0x000008, "Wrong alignment on APBWA_M1_RoofS_C");
static_assert(sizeof(APBWA_M1_RoofS_C) == 0x000DC8, "Wrong size on APBWA_M1_RoofS_C");

}
