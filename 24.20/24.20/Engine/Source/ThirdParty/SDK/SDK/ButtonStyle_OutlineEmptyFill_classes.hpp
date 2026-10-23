#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_OutlineEmptyFill_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-OutlineEmptyFill_C">();
	}
	static class UButtonStyle_OutlineEmptyFill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_OutlineEmptyFill_C>();
	}
};
static_assert(alignof(UButtonStyle_OutlineEmptyFill_C) == 0x000010, "Wrong alignment on UButtonStyle_OutlineEmptyFill_C");
static_assert(sizeof(UButtonStyle_OutlineEmptyFill_C) == 0x000730, "Wrong size on UButtonStyle_OutlineEmptyFill_C");

}
