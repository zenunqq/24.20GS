#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class APBWA_M1_StairF_C final : public ABuildingStairs
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_M1_StairF_C">();
	}
	static class APBWA_M1_StairF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_M1_StairF_C>();
	}
};
static_assert(alignof(APBWA_M1_StairF_C) == 0x000008, "Wrong alignment on APBWA_M1_StairF_C");
static_assert(sizeof(APBWA_M1_StairF_C) == 0x000DD0, "Wrong size on APBWA_M1_StairF_C");

}
