#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection final
{
public:
	struct FFortAthenaLoadout                     Loadout;
	struct FGameplayTag                           ReturnValue;
	struct FGameplayTag                           CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue;
	struct FGameplayTag                           CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1;
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	bool                                          CallFunc_IsItemInLoadout_ReturnValue;
};
static_assert(alignof(VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection) == 0x000008, "Wrong alignment on VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection");
static_assert(sizeof(VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection) == 0x000188, "Wrong size on VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection");
static_assert(offsetof(VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection, Loadout) == 0x000000, "Member 'VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection::Loadout' has a wrong offset!");
static_assert(offsetof(VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection, ReturnValue) == 0x000178, "Member 'VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection::ReturnValue' has a wrong offset!");
static_assert(offsetof(VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection, CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue) == 0x00017C, "Member 'VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection::CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue' has a wrong offset!");
static_assert(offsetof(VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection, CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1) == 0x000180, "Member 'VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection::CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000184, "Member 'VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection, CallFunc_IsItemInLoadout_ReturnValue) == 0x000185, "Member 'VariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection::CallFunc_IsItemInLoadout_ReturnValue' has a wrong offset!");

}
