#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_TransparentList_Social_NoHovered_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle_TransparentList_Social_NoHovered_C">();
	}
	static class UButtonStyle_TransparentList_Social_NoHovered_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_TransparentList_Social_NoHovered_C>();
	}
};
static_assert(alignof(UButtonStyle_TransparentList_Social_NoHovered_C) == 0x000010, "Wrong alignment on UButtonStyle_TransparentList_Social_NoHovered_C");
static_assert(sizeof(UButtonStyle_TransparentList_Social_NoHovered_C) == 0x000730, "Wrong size on UButtonStyle_TransparentList_Social_NoHovered_C");

}
