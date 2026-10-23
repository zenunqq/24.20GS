#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_Vehicle_ExitHoldEvent_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;
	struct FGameplayTag                           EquippingCue;

public:
	void EventReceived_209BF560404B83EBEAA8DD8090C443AC(const struct FGameplayEventData& Payload);
	void EventReceived_7AE1D485464AEC7EB429C3877D33AF69(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_Vehicle_ExitHoldEvent(int32 EntryPoint);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Vehicle_ExitHoldEvent_C">();
	}
	static class UGA_Vehicle_ExitHoldEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Vehicle_ExitHoldEvent_C>();
	}
};
static_assert(alignof(UGA_Vehicle_ExitHoldEvent_C) == 0x000008, "Wrong alignment on UGA_Vehicle_ExitHoldEvent_C");
static_assert(sizeof(UGA_Vehicle_ExitHoldEvent_C) == 0x000B40, "Wrong size on UGA_Vehicle_ExitHoldEvent_C");
static_assert(offsetof(UGA_Vehicle_ExitHoldEvent_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Vehicle_ExitHoldEvent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Vehicle_ExitHoldEvent_C, PlayerPawn) == 0x000B30, "Member 'UGA_Vehicle_ExitHoldEvent_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Vehicle_ExitHoldEvent_C, EquippingCue) == 0x000B38, "Member 'UGA_Vehicle_ExitHoldEvent_C::EquippingCue' has a wrong offset!");

}
