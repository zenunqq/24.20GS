#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UEmptyBehavior_C final : public UHUDWidgetBehavior
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmptyBehavior_C">();
	}
	static class UEmptyBehavior_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmptyBehavior_C>();
	}
};
static_assert(alignof(UEmptyBehavior_C) == 0x000008, "Wrong alignment on UEmptyBehavior_C");
static_assert(sizeof(UEmptyBehavior_C) == 0x0000B0, "Wrong size on UEmptyBehavior_C");

}
