#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class ADefaultBuildingTool_C final : public AFortWeap_BuildingTool
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultBuildingTool_C">();
	}
	static class ADefaultBuildingTool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADefaultBuildingTool_C>();
	}
};
static_assert(alignof(ADefaultBuildingTool_C) == 0x000008, "Wrong alignment on ADefaultBuildingTool_C");
static_assert(sizeof(ADefaultBuildingTool_C) == 0x0011E8, "Wrong size on ADefaultBuildingTool_C");

}
