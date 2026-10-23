#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaFPSTicker_C final : public UAthenaFPSBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaFPSTicker_C">();
	}
	static class UAthenaFPSTicker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaFPSTicker_C>();
	}
};
static_assert(alignof(UAthenaFPSTicker_C) == 0x000008, "Wrong alignment on UAthenaFPSTicker_C");
static_assert(sizeof(UAthenaFPSTicker_C) == 0x0002B0, "Wrong size on UAthenaFPSTicker_C");

}
