#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UGA_Athena_ZipLine_ReachedEnd_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;
	struct FScalableFloat                         MaxLateralSpeed;
	struct FVector                                ImpulseVec;
	struct FScalableFloat                         JumpVertStrength;
	struct FScalableFloat                         LateralDamping;
	struct FScalableFloat                         MaxZiplineVel;
	bool                                          Debug;
	uint8                                         Pad_BF1[0x7];
	struct FScalableFloat                         MinJumpVertStrength;

public:
	void ExecuteUbergraph_GA_Athena_ZipLine_ReachedEnd(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_ZipLine_ReachedEnd_C">();
	}
	static class UGA_Athena_ZipLine_ReachedEnd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_ZipLine_ReachedEnd_C>();
	}
};
static_assert(alignof(UGA_Athena_ZipLine_ReachedEnd_C) == 0x000008, "Wrong alignment on UGA_Athena_ZipLine_ReachedEnd_C");
static_assert(sizeof(UGA_Athena_ZipLine_ReachedEnd_C) == 0x000C20, "Wrong size on UGA_Athena_ZipLine_ReachedEnd_C");
static_assert(offsetof(UGA_Athena_ZipLine_ReachedEnd_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_ZipLine_ReachedEnd_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_ReachedEnd_C, PlayerPawn) == 0x000B30, "Member 'UGA_Athena_ZipLine_ReachedEnd_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_ReachedEnd_C, MaxLateralSpeed) == 0x000B38, "Member 'UGA_Athena_ZipLine_ReachedEnd_C::MaxLateralSpeed' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_ReachedEnd_C, ImpulseVec) == 0x000B60, "Member 'UGA_Athena_ZipLine_ReachedEnd_C::ImpulseVec' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_ReachedEnd_C, JumpVertStrength) == 0x000B78, "Member 'UGA_Athena_ZipLine_ReachedEnd_C::JumpVertStrength' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_ReachedEnd_C, LateralDamping) == 0x000BA0, "Member 'UGA_Athena_ZipLine_ReachedEnd_C::LateralDamping' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_ReachedEnd_C, MaxZiplineVel) == 0x000BC8, "Member 'UGA_Athena_ZipLine_ReachedEnd_C::MaxZiplineVel' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_ReachedEnd_C, Debug) == 0x000BF0, "Member 'UGA_Athena_ZipLine_ReachedEnd_C::Debug' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_ReachedEnd_C, MinJumpVertStrength) == 0x000BF8, "Member 'UGA_Athena_ZipLine_ReachedEnd_C::MinJumpVertStrength' has a wrong offset!");

}
