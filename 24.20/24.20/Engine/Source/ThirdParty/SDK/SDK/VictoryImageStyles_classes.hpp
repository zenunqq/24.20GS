#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UVictoryImageStyles_C final : public URichTextBlockImageDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VictoryImageStyles_C">();
	}
	static class UVictoryImageStyles_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVictoryImageStyles_C>();
	}
};
static_assert(alignof(UVictoryImageStyles_C) == 0x000008, "Wrong alignment on UVictoryImageStyles_C");
static_assert(sizeof(UVictoryImageStyles_C) == 0x000030, "Wrong size on UVictoryImageStyles_C");

}
