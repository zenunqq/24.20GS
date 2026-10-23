#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UVideoPlayerWidget_C final : public UFortVideoPlayerWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VideoPlayerWidget_C">();
	}
	static class UVideoPlayerWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVideoPlayerWidget_C>();
	}
};
static_assert(alignof(UVideoPlayerWidget_C) == 0x000008, "Wrong alignment on UVideoPlayerWidget_C");
static_assert(sizeof(UVideoPlayerWidget_C) == 0x000370, "Wrong size on UVideoPlayerWidget_C");

}
