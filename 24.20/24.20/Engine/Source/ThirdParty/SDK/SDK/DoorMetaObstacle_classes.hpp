#pragma once

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"

namespace SDK
{

class UDoorMetaObstacle_C final : public UNavAreaMeta_SwitchByAgent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DoorMetaObstacle_C">();
	}
	static class UDoorMetaObstacle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDoorMetaObstacle_C>();
	}
};
static_assert(alignof(UDoorMetaObstacle_C) == 0x000008, "Wrong alignment on UDoorMetaObstacle_C");
static_assert(sizeof(UDoorMetaObstacle_C) == 0x0000C8, "Wrong size on UDoorMetaObstacle_C");

}
