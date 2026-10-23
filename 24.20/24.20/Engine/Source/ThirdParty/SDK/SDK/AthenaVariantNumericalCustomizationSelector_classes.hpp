#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaVariantNumericalCustomizationSelector_C final : public UFortVariantNumericalPicker
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaVariantNumericalCustomizationSelector_C">();
	}
	static class UAthenaVariantNumericalCustomizationSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaVariantNumericalCustomizationSelector_C>();
	}
};
static_assert(alignof(UAthenaVariantNumericalCustomizationSelector_C) == 0x000008, "Wrong alignment on UAthenaVariantNumericalCustomizationSelector_C");
static_assert(sizeof(UAthenaVariantNumericalCustomizationSelector_C) == 0x0003B8, "Wrong size on UAthenaVariantNumericalCustomizationSelector_C");

}
