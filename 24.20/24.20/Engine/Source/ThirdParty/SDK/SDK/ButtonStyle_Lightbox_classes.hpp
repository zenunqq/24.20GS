#pragma once

#include "Basic.hpp"

#include "ButtonStyle_Base_classes.hpp"

namespace SDK
{

class UButtonStyle_Lightbox_C final : public UButtonStyle_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Lightbox_C">();
	}
	static class UButtonStyle_Lightbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Lightbox_C>();
	}
};
static_assert(alignof(UButtonStyle_Lightbox_C) == 0x000010, "Wrong alignment on UButtonStyle_Lightbox_C");
static_assert(sizeof(UButtonStyle_Lightbox_C) == 0x000730, "Wrong size on UButtonStyle_Lightbox_C");

}
