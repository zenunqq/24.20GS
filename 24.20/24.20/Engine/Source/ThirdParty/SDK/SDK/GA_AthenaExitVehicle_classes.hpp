#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_AthenaExitVehicle_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTag                           Keep_DBNO_players_in_Vehicles;
	uint8                                         Pad_B34[0x4];
	struct FGameplayTagContainer                  Event_Damage_Died_Tags;

public:
	void ExecuteUbergraph_GA_AthenaExitVehicle(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_AthenaExitVehicle_C">();
	}
	static class UGA_AthenaExitVehicle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_AthenaExitVehicle_C>();
	}
};
static_assert(alignof(UGA_AthenaExitVehicle_C) == 0x000008, "Wrong alignment on UGA_AthenaExitVehicle_C");
static_assert(sizeof(UGA_AthenaExitVehicle_C) == 0x000B58, "Wrong size on UGA_AthenaExitVehicle_C");
static_assert(offsetof(UGA_AthenaExitVehicle_C, UberGraphFrame) == 0x000B28, "Member 'UGA_AthenaExitVehicle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_AthenaExitVehicle_C, Keep_DBNO_players_in_Vehicles) == 0x000B30, "Member 'UGA_AthenaExitVehicle_C::Keep_DBNO_players_in_Vehicles' has a wrong offset!");
static_assert(offsetof(UGA_AthenaExitVehicle_C, Event_Damage_Died_Tags) == 0x000B38, "Member 'UGA_AthenaExitVehicle_C::Event_Damage_Died_Tags' has a wrong offset!");

}
