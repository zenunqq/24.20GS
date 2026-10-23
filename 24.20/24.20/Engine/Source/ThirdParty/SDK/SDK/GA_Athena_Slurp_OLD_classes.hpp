#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_Athena_Slurp_OLD_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;
	int32                                         IncreCheck;
	uint8                                         Pad_B3C[0x4];
	double                                        MaxTicks;
	struct FTimerHandle                           TimerHandle;
	double                                        TickRate;

public:
	void ApplyHealthOrShield();
	void ExecuteUbergraph_GA_Athena_Slurp_OLD(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Slurp_OLD_C">();
	}
	static class UGA_Athena_Slurp_OLD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Slurp_OLD_C>();
	}
};
static_assert(alignof(UGA_Athena_Slurp_OLD_C) == 0x000008, "Wrong alignment on UGA_Athena_Slurp_OLD_C");
static_assert(sizeof(UGA_Athena_Slurp_OLD_C) == 0x000B58, "Wrong size on UGA_Athena_Slurp_OLD_C");
static_assert(offsetof(UGA_Athena_Slurp_OLD_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_Slurp_OLD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Slurp_OLD_C, PlayerPawn) == 0x000B30, "Member 'UGA_Athena_Slurp_OLD_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Slurp_OLD_C, IncreCheck) == 0x000B38, "Member 'UGA_Athena_Slurp_OLD_C::IncreCheck' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Slurp_OLD_C, MaxTicks) == 0x000B40, "Member 'UGA_Athena_Slurp_OLD_C::MaxTicks' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Slurp_OLD_C, TimerHandle) == 0x000B48, "Member 'UGA_Athena_Slurp_OLD_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Slurp_OLD_C, TickRate) == 0x000B50, "Member 'UGA_Athena_Slurp_OLD_C::TickRate' has a wrong offset!");

}
