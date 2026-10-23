#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_DuelObserver_C final : public UFortGameplayAbility_ObserveDuels
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_GA_DuelObserver(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnDuelChange(EDuelState NewDuelState, const struct FDuelOverlayData& ChangedDuelOverlayData);
	void UpdateDuelUI(EDuelState Duel_State, const struct FDuelOverlayData& Cached_Duel_Overlay_Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DuelObserver_C">();
	}
	static class UGA_DuelObserver_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DuelObserver_C>();
	}
};
static_assert(alignof(UGA_DuelObserver_C) == 0x000008, "Wrong alignment on UGA_DuelObserver_C");
static_assert(sizeof(UGA_DuelObserver_C) == 0x000B40, "Wrong size on UGA_DuelObserver_C");
static_assert(offsetof(UGA_DuelObserver_C, UberGraphFrame) == 0x000B38, "Member 'UGA_DuelObserver_C::UberGraphFrame' has a wrong offset!");

}
