#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UDefault3PCamera_C final : public UFort3PCam_Default
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Default3PCamera_C">();
	}
	static class UDefault3PCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefault3PCamera_C>();
	}
};
static_assert(alignof(UDefault3PCamera_C) == 0x000008, "Wrong alignment on UDefault3PCamera_C");
static_assert(sizeof(UDefault3PCamera_C) == 0x0001E8, "Wrong size on UDefault3PCamera_C");

}
