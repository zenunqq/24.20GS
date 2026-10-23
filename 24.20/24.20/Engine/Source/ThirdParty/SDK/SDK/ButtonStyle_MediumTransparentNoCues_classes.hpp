#pragma once

#include "Basic.hpp"

#include "ButtonStyle_MediumBase_classes.hpp"

namespace SDK
{

class UButtonStyle_MediumTransparentNoCues_C : public UButtonStyle_MediumBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-MediumTransparentNoCues_C">();
	}
	static class UButtonStyle_MediumTransparentNoCues_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_MediumTransparentNoCues_C>();
	}
};
static_assert(alignof(UButtonStyle_MediumTransparentNoCues_C) == 0x000010, "Wrong alignment on UButtonStyle_MediumTransparentNoCues_C");
static_assert(sizeof(UButtonStyle_MediumTransparentNoCues_C) == 0x000730, "Wrong size on UButtonStyle_MediumTransparentNoCues_C");

}
