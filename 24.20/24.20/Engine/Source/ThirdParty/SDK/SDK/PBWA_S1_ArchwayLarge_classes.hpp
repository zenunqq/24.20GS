#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class APBWA_S1_ArchwayLarge_C final : public ABuildingWall
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_S1_ArchwayLarge_C">();
	}
	static class APBWA_S1_ArchwayLarge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_S1_ArchwayLarge_C>();
	}
};
static_assert(alignof(APBWA_S1_ArchwayLarge_C) == 0x000008, "Wrong alignment on APBWA_S1_ArchwayLarge_C");
static_assert(sizeof(APBWA_S1_ArchwayLarge_C) == 0x001018, "Wrong size on APBWA_S1_ArchwayLarge_C");

}
