#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class APBWA_BG_ArchwayLargeSupport_C final : public ABuildingWall
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_BG_ArchwayLargeSupport_C">();
	}
	static class APBWA_BG_ArchwayLargeSupport_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_BG_ArchwayLargeSupport_C>();
	}
};
static_assert(alignof(APBWA_BG_ArchwayLargeSupport_C) == 0x000008, "Wrong alignment on APBWA_BG_ArchwayLargeSupport_C");
static_assert(sizeof(APBWA_BG_ArchwayLargeSupport_C) == 0x001018, "Wrong size on APBWA_BG_ArchwayLargeSupport_C");

}
