#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_Riding_Creature_EatToRefuel_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTagContainer                  Slap_Berry_Tags;
	TSubclassOf<class UGameplayEffect>            Slap_Berry_Gameplay_Effect;

public:
	void ExecuteUbergraph_GA_Riding_Creature_EatToRefuel(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Riding_Creature_EatToRefuel_C">();
	}
	static class UGA_Riding_Creature_EatToRefuel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Riding_Creature_EatToRefuel_C>();
	}
};
static_assert(alignof(UGA_Riding_Creature_EatToRefuel_C) == 0x000008, "Wrong alignment on UGA_Riding_Creature_EatToRefuel_C");
static_assert(sizeof(UGA_Riding_Creature_EatToRefuel_C) == 0x000B58, "Wrong size on UGA_Riding_Creature_EatToRefuel_C");
static_assert(offsetof(UGA_Riding_Creature_EatToRefuel_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Riding_Creature_EatToRefuel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Riding_Creature_EatToRefuel_C, Slap_Berry_Tags) == 0x000B30, "Member 'UGA_Riding_Creature_EatToRefuel_C::Slap_Berry_Tags' has a wrong offset!");
static_assert(offsetof(UGA_Riding_Creature_EatToRefuel_C, Slap_Berry_Gameplay_Effect) == 0x000B50, "Member 'UGA_Riding_Creature_EatToRefuel_C::Slap_Berry_Gameplay_Effect' has a wrong offset!");

}
