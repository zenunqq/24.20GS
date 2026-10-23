#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_TransparentList_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle_TransparentList_C">();
	}
	static class UButtonStyle_TransparentList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_TransparentList_C>();
	}
};
static_assert(alignof(UButtonStyle_TransparentList_C) == 0x000010, "Wrong alignment on UButtonStyle_TransparentList_C");
static_assert(sizeof(UButtonStyle_TransparentList_C) == 0x000730, "Wrong size on UButtonStyle_TransparentList_C");

}
