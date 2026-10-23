#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class ADecoTool_C final : public AFortDecoTool
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DecoTool_C">();
	}
	static class ADecoTool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADecoTool_C>();
	}
};
static_assert(alignof(ADecoTool_C) == 0x000008, "Wrong alignment on ADecoTool_C");
static_assert(sizeof(ADecoTool_C) == 0x0010F8, "Wrong size on ADecoTool_C");

}
