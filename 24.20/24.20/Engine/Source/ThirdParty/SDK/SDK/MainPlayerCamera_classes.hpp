#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AMainPlayerCamera_C final : public AFortPlayerCameraZone
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainPlayerCamera_C">();
	}
	static class AMainPlayerCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMainPlayerCamera_C>();
	}
};
static_assert(alignof(AMainPlayerCamera_C) == 0x000010, "Wrong alignment on AMainPlayerCamera_C");
static_assert(sizeof(AMainPlayerCamera_C) == 0x003C90, "Wrong size on AMainPlayerCamera_C");

}
