#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_Athena_FallDmgImmune_RemoveFX_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;
	struct FGameplayTag                           Looping_GC;
	struct FGameplayTag                           Player_Landing_GC;
	struct FTimerHandle                           VehicleOnGroundTimer;

public:
	void ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX(int32 EntryPoint);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void K2_ActivateAbility();
	void OnChange_E07DC5494A7BED888E9B24AA514662A5(EMovementMode NewMovementMode);
	void OnChange_FD84FE4040E65CB60551DE8433D51332(EMovementMode NewMovementMode);
	void VehicleLandedCheck();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_FallDmgImmune_RemoveFX_C">();
	}
	static class UGA_Athena_FallDmgImmune_RemoveFX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_FallDmgImmune_RemoveFX_C>();
	}
};
static_assert(alignof(UGA_Athena_FallDmgImmune_RemoveFX_C) == 0x000008, "Wrong alignment on UGA_Athena_FallDmgImmune_RemoveFX_C");
static_assert(sizeof(UGA_Athena_FallDmgImmune_RemoveFX_C) == 0x000B48, "Wrong size on UGA_Athena_FallDmgImmune_RemoveFX_C");
static_assert(offsetof(UGA_Athena_FallDmgImmune_RemoveFX_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_FallDmgImmune_RemoveFX_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FallDmgImmune_RemoveFX_C, PlayerPawn) == 0x000B30, "Member 'UGA_Athena_FallDmgImmune_RemoveFX_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FallDmgImmune_RemoveFX_C, Looping_GC) == 0x000B38, "Member 'UGA_Athena_FallDmgImmune_RemoveFX_C::Looping_GC' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FallDmgImmune_RemoveFX_C, Player_Landing_GC) == 0x000B3C, "Member 'UGA_Athena_FallDmgImmune_RemoveFX_C::Player_Landing_GC' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FallDmgImmune_RemoveFX_C, VehicleOnGroundTimer) == 0x000B40, "Member 'UGA_Athena_FallDmgImmune_RemoveFX_C::VehicleOnGroundTimer' has a wrong offset!");

}
