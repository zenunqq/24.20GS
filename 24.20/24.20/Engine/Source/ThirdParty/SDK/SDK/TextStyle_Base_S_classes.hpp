#pragma once

#include "Basic.hpp"

#include "TextStyle_BaseParent_classes.hpp"

namespace SDK
{

class UTextStyle_Base_S_C : public UTextStyle_BaseParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-Base-S_C">();
	}
	static class UTextStyle_Base_S_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_Base_S_C>();
	}
};
static_assert(alignof(UTextStyle_Base_S_C) == 0x000010, "Wrong alignment on UTextStyle_Base_S_C");
static_assert(sizeof(UTextStyle_Base_S_C) == 0x0001A0, "Wrong size on UTextStyle_Base_S_C");

}
