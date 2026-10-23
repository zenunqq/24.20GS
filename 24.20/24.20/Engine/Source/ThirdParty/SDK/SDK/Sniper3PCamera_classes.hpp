#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class USniper3PCamera_C final : public UFort3PCam_Default
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Sniper3PCamera_C">();
	}
	static class USniper3PCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USniper3PCamera_C>();
	}
};
static_assert(alignof(USniper3PCamera_C) == 0x000008, "Wrong alignment on USniper3PCamera_C");
static_assert(sizeof(USniper3PCamera_C) == 0x0001E8, "Wrong size on USniper3PCamera_C");

}
