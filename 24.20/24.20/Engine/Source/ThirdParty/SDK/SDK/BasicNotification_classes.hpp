#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UBasicNotification_C final : public UFortUINotification
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BasicNotification_C">();
	}
	static class UBasicNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasicNotification_C>();
	}
};
static_assert(alignof(UBasicNotification_C) == 0x000008, "Wrong alignment on UBasicNotification_C");
static_assert(sizeof(UBasicNotification_C) == 0x000108, "Wrong size on UBasicNotification_C");

}
