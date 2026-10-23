#pragma once

#include "Basic.hpp"

#include "ButtonStyle_MediumTransparentNoCues_classes.hpp"

namespace SDK
{

class UButtonStyle_CycleArrow_Right_C final : public UButtonStyle_MediumTransparentNoCues_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle_CycleArrow_Right_C">();
	}
	static class UButtonStyle_CycleArrow_Right_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_CycleArrow_Right_C>();
	}
};
static_assert(alignof(UButtonStyle_CycleArrow_Right_C) == 0x000010, "Wrong alignment on UButtonStyle_CycleArrow_Right_C");
static_assert(sizeof(UButtonStyle_CycleArrow_Right_C) == 0x000730, "Wrong size on UButtonStyle_CycleArrow_Right_C");

}
