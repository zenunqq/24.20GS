#pragma once

#include "Basic.hpp"

#include "ButtonStyle_MediumTransparentNoCues_classes.hpp"

namespace SDK
{

class UButtonStyle_TransparentWithCues_XS_B_C final : public UButtonStyle_MediumTransparentNoCues_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-TransparentWithCues-XS-B_C">();
	}
	static class UButtonStyle_TransparentWithCues_XS_B_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_TransparentWithCues_XS_B_C>();
	}
};
static_assert(alignof(UButtonStyle_TransparentWithCues_XS_B_C) == 0x000010, "Wrong alignment on UButtonStyle_TransparentWithCues_XS_B_C");
static_assert(sizeof(UButtonStyle_TransparentWithCues_XS_B_C) == 0x000730, "Wrong size on UButtonStyle_TransparentWithCues_XS_B_C");

}
