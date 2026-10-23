#pragma once

#include "Basic.hpp"

#include "CrewUI_classes.hpp"

namespace SDK
{

class UProgressiveContentContainer_C final : public UFortProgressiveContentContainer
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressiveContentContainer_C">();
	}
	static class UProgressiveContentContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressiveContentContainer_C>();
	}
};
static_assert(alignof(UProgressiveContentContainer_C) == 0x000008, "Wrong alignment on UProgressiveContentContainer_C");
static_assert(sizeof(UProgressiveContentContainer_C) == 0x0003F8, "Wrong size on UProgressiveContentContainer_C");

}
