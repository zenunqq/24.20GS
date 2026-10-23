#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class URanged3PCamera_C final : public UFort3PCam_Default
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ranged3PCamera_C">();
	}
	static class URanged3PCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URanged3PCamera_C>();
	}
};
static_assert(alignof(URanged3PCamera_C) == 0x000008, "Wrong alignment on URanged3PCamera_C");
static_assert(sizeof(URanged3PCamera_C) == 0x0001E8, "Wrong size on URanged3PCamera_C");

}
