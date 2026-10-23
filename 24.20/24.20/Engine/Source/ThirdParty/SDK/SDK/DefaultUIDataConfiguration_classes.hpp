#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UDefaultUIDataConfiguration_C final : public UFortUIDataConfiguration
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultUIDataConfiguration_C">();
	}
	static class UDefaultUIDataConfiguration_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultUIDataConfiguration_C>();
	}
};
static_assert(alignof(UDefaultUIDataConfiguration_C) == 0x000010, "Wrong alignment on UDefaultUIDataConfiguration_C");
static_assert(sizeof(UDefaultUIDataConfiguration_C) == 0x004B00, "Wrong size on UDefaultUIDataConfiguration_C");

}
