#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaRichColorVariantPicker_C final : public UFortVariantRichColorPicker
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaRichColorVariantPicker_C">();
	}
	static class UAthenaRichColorVariantPicker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaRichColorVariantPicker_C>();
	}
};
static_assert(alignof(UAthenaRichColorVariantPicker_C) == 0x000008, "Wrong alignment on UAthenaRichColorVariantPicker_C");
static_assert(sizeof(UAthenaRichColorVariantPicker_C) == 0x0003B8, "Wrong size on UAthenaRichColorVariantPicker_C");

}
