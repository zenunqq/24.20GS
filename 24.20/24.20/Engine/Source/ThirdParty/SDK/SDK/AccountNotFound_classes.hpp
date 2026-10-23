#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAccountNotFound_C final : public UFortAccountNotFound
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AccountNotFound_C">();
	}
	static class UAccountNotFound_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAccountNotFound_C>();
	}
};
static_assert(alignof(UAccountNotFound_C) == 0x000008, "Wrong alignment on UAccountNotFound_C");
static_assert(sizeof(UAccountNotFound_C) == 0x000508, "Wrong size on UAccountNotFound_C");

}
