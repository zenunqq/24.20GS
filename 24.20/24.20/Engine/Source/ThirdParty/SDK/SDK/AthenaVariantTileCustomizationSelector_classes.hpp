#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaVariantTileCustomizationSelector_C final : public UFortVariantSelector
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaVariantTileCustomizationSelector_C">();
	}
	static class UAthenaVariantTileCustomizationSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaVariantTileCustomizationSelector_C>();
	}
};
static_assert(alignof(UAthenaVariantTileCustomizationSelector_C) == 0x000008, "Wrong alignment on UAthenaVariantTileCustomizationSelector_C");
static_assert(sizeof(UAthenaVariantTileCustomizationSelector_C) == 0x000398, "Wrong size on UAthenaVariantTileCustomizationSelector_C");

}
