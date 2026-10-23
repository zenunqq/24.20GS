#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_Riding_Player_StopRidingOnTriggered_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Riding_Player_StopRidingOnTriggered_C">();
	}
	static class UGA_Riding_Player_StopRidingOnTriggered_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Riding_Player_StopRidingOnTriggered_C>();
	}
};
static_assert(alignof(UGA_Riding_Player_StopRidingOnTriggered_C) == 0x000008, "Wrong alignment on UGA_Riding_Player_StopRidingOnTriggered_C");
static_assert(sizeof(UGA_Riding_Player_StopRidingOnTriggered_C) == 0x000B30, "Wrong size on UGA_Riding_Player_StopRidingOnTriggered_C");
static_assert(offsetof(UGA_Riding_Player_StopRidingOnTriggered_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Riding_Player_StopRidingOnTriggered_C::UberGraphFrame' has a wrong offset!");

}
