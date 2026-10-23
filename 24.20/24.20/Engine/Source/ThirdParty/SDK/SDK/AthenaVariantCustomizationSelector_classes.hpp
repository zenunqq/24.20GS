#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaVariantCustomizationSelector_C final : public UFortVariantPicker
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaVariantCustomizationSelector_C">();
	}
	static class UAthenaVariantCustomizationSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaVariantCustomizationSelector_C>();
	}
};
static_assert(alignof(UAthenaVariantCustomizationSelector_C) == 0x000008, "Wrong alignment on UAthenaVariantCustomizationSelector_C");
static_assert(sizeof(UAthenaVariantCustomizationSelector_C) == 0x000568, "Wrong size on UAthenaVariantCustomizationSelector_C");

}
