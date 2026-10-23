#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class ABP_FortPhysicsObjectManager_C final : public AFortPhysicsObjectManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortPhysicsObjectManager_C">();
	}
	static class ABP_FortPhysicsObjectManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FortPhysicsObjectManager_C>();
	}
};
static_assert(alignof(ABP_FortPhysicsObjectManager_C) == 0x000008, "Wrong alignment on ABP_FortPhysicsObjectManager_C");
static_assert(sizeof(ABP_FortPhysicsObjectManager_C) == 0x0003A0, "Wrong size on ABP_FortPhysicsObjectManager_C");

}
