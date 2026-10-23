#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UGA_Athena_ZipLine_Jump_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;
	struct FScalableFloat                         MaxLateralSpeed;
	struct FVector                                ImpulseVec;
	struct FScalableFloat                         JumpVertStrength;
	struct FScalableFloat                         JumpLateralDamper;

public:
	void ExecuteUbergraph_GA_Athena_ZipLine_Jump(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_ZipLine_Jump_C">();
	}
	static class UGA_Athena_ZipLine_Jump_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_ZipLine_Jump_C>();
	}
};
static_assert(alignof(UGA_Athena_ZipLine_Jump_C) == 0x000008, "Wrong alignment on UGA_Athena_ZipLine_Jump_C");
static_assert(sizeof(UGA_Athena_ZipLine_Jump_C) == 0x000BC8, "Wrong size on UGA_Athena_ZipLine_Jump_C");
static_assert(offsetof(UGA_Athena_ZipLine_Jump_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_ZipLine_Jump_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Jump_C, PlayerPawn) == 0x000B30, "Member 'UGA_Athena_ZipLine_Jump_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Jump_C, MaxLateralSpeed) == 0x000B38, "Member 'UGA_Athena_ZipLine_Jump_C::MaxLateralSpeed' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Jump_C, ImpulseVec) == 0x000B60, "Member 'UGA_Athena_ZipLine_Jump_C::ImpulseVec' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Jump_C, JumpVertStrength) == 0x000B78, "Member 'UGA_Athena_ZipLine_Jump_C::JumpVertStrength' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Jump_C, JumpLateralDamper) == 0x000BA0, "Member 'UGA_Athena_ZipLine_Jump_C::JumpLateralDamper' has a wrong offset!");

}
