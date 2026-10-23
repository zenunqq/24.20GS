#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AParent_BuildingWall_C : public ABuildingWall
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Parent_BuildingWall_C">();
	}
	static class AParent_BuildingWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParent_BuildingWall_C>();
	}
};
static_assert(alignof(AParent_BuildingWall_C) == 0x000008, "Wrong alignment on AParent_BuildingWall_C");
static_assert(sizeof(AParent_BuildingWall_C) == 0x001018, "Wrong size on AParent_BuildingWall_C");

}
