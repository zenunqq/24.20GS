#pragma once

#include "Basic.hpp"

#include "ButtonStyle_Base_classes.hpp"

namespace SDK
{

class UButtonStyle_MediumBase_C : public UButtonStyle_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-MediumBase_C">();
	}
	static class UButtonStyle_MediumBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_MediumBase_C>();
	}
};
static_assert(alignof(UButtonStyle_MediumBase_C) == 0x000010, "Wrong alignment on UButtonStyle_MediumBase_C");
static_assert(sizeof(UButtonStyle_MediumBase_C) == 0x000730, "Wrong size on UButtonStyle_MediumBase_C");

}
