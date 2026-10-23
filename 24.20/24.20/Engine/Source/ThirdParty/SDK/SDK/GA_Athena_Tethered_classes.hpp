#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UGA_Athena_Tethered_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FActiveGameplayEffectHandle            GE_TetheredHandle;
	class AFortPlayerPawn*                        OwningFortPlayerPawn;
	double                                        maxSpeedToPlayGCN;
	struct FGameplayTag                           GCTagPlayerLand;
	uint8                                         Pad_B4C[0x4];
	class UClass*                                 StructureDamageGE;
	struct FGameplayTag                           SmashGC;
	uint8                                         Pad_B5C[0x4];
	struct FScalableFloat                         BreakStructuresOnTetherEnabled;
	struct FScalableFloat                         BreakStructuresOnTetherRange;
	struct FGameplayTag                           Event_FishingForceEnd;

public:
	void BreakBuildingsAtPlayerInDirectionOfTether();
	void BreakNearbyStructures(const struct FVector& ForwardVector, double OffsetForward);
	void ExecuteUbergraph_GA_Athena_Tethered(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void MovementModeChangedDelegate_Event_0(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Tethered_C">();
	}
	static class UGA_Athena_Tethered_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Tethered_C>();
	}
};
static_assert(alignof(UGA_Athena_Tethered_C) == 0x000008, "Wrong alignment on UGA_Athena_Tethered_C");
static_assert(sizeof(UGA_Athena_Tethered_C) == 0x000BB8, "Wrong size on UGA_Athena_Tethered_C");
static_assert(offsetof(UGA_Athena_Tethered_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_Tethered_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, GE_TetheredHandle) == 0x000B30, "Member 'UGA_Athena_Tethered_C::GE_TetheredHandle' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, OwningFortPlayerPawn) == 0x000B38, "Member 'UGA_Athena_Tethered_C::OwningFortPlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, maxSpeedToPlayGCN) == 0x000B40, "Member 'UGA_Athena_Tethered_C::maxSpeedToPlayGCN' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, GCTagPlayerLand) == 0x000B48, "Member 'UGA_Athena_Tethered_C::GCTagPlayerLand' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, StructureDamageGE) == 0x000B50, "Member 'UGA_Athena_Tethered_C::StructureDamageGE' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, SmashGC) == 0x000B58, "Member 'UGA_Athena_Tethered_C::SmashGC' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, BreakStructuresOnTetherEnabled) == 0x000B60, "Member 'UGA_Athena_Tethered_C::BreakStructuresOnTetherEnabled' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, BreakStructuresOnTetherRange) == 0x000B88, "Member 'UGA_Athena_Tethered_C::BreakStructuresOnTetherRange' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_C, Event_FishingForceEnd) == 0x000BB0, "Member 'UGA_Athena_Tethered_C::Event_FishingForceEnd' has a wrong offset!");

}
