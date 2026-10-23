#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UVariantScript_Backpack_BistroAstronaut_Color_C final : public UFortLoadoutTagDrivenVariantScript
{
public:
	struct FGameplayTag DetermineVariantSelection(const struct FFortAthenaLoadout& Loadout) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VariantScript_Backpack_BistroAstronaut_Color_C">();
	}
	static class UVariantScript_Backpack_BistroAstronaut_Color_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVariantScript_Backpack_BistroAstronaut_Color_C>();
	}
};
static_assert(alignof(UVariantScript_Backpack_BistroAstronaut_Color_C) == 0x000008, "Wrong alignment on UVariantScript_Backpack_BistroAstronaut_Color_C");
static_assert(sizeof(UVariantScript_Backpack_BistroAstronaut_Color_C) == 0x000028, "Wrong size on UVariantScript_Backpack_BistroAstronaut_Color_C");

}
