#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGSC_MiniMapDataOverride_C final : public UFortGameStateComponent_MiniMapDataOverride
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GSC_MiniMapDataOverride_C">();
	}
	static class UGSC_MiniMapDataOverride_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSC_MiniMapDataOverride_C>();
	}
};
static_assert(alignof(UGSC_MiniMapDataOverride_C) == 0x000008, "Wrong alignment on UGSC_MiniMapDataOverride_C");
static_assert(sizeof(UGSC_MiniMapDataOverride_C) == 0x0000C0, "Wrong size on UGSC_MiniMapDataOverride_C");

}
