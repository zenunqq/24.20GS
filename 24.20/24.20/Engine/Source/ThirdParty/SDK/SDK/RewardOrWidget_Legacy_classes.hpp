#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class URewardOrWidget_Legacy_C final : public UFortRewardInfoButton_Legacy
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RewardOrWidget_Legacy_C">();
	}
	static class URewardOrWidget_Legacy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URewardOrWidget_Legacy_C>();
	}
};
static_assert(alignof(URewardOrWidget_Legacy_C) == 0x000010, "Wrong alignment on URewardOrWidget_Legacy_C");
static_assert(sizeof(URewardOrWidget_Legacy_C) == 0x001450, "Wrong size on URewardOrWidget_Legacy_C");

}
