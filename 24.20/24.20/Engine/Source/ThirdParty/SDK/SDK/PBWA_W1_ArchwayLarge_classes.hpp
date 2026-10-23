#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class APBWA_W1_ArchwayLarge_C final : public ABuildingWall
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_W1_ArchwayLarge_C">();
	}
	static class APBWA_W1_ArchwayLarge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_W1_ArchwayLarge_C>();
	}
};
static_assert(alignof(APBWA_W1_ArchwayLarge_C) == 0x000008, "Wrong alignment on APBWA_W1_ArchwayLarge_C");
static_assert(sizeof(APBWA_W1_ArchwayLarge_C) == 0x001018, "Wrong size on APBWA_W1_ArchwayLarge_C");

}
