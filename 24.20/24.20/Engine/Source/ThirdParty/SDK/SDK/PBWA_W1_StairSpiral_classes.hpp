#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class APBWA_W1_StairSpiral_C final : public ABuildingStairs
{
public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_W1_StairSpiral_C">();
	}
	static class APBWA_W1_StairSpiral_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_W1_StairSpiral_C>();
	}
};
static_assert(alignof(APBWA_W1_StairSpiral_C) == 0x000008, "Wrong alignment on APBWA_W1_StairSpiral_C");
static_assert(sizeof(APBWA_W1_StairSpiral_C) == 0x000DD0, "Wrong size on APBWA_W1_StairSpiral_C");

}
