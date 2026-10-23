#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_SpringEgg_Hop_LowGravNoFall_C final : public AFortGameplayCueNotifyAthena_FallDamageImmunity
{
public:
	class UAudioComponent*                        InUseLoopAudio;
	class AActor*                                 Target;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_SpringEgg_Hop_LowGravNoFall_C">();
	}
	static class AGCNL_SpringEgg_Hop_LowGravNoFall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_SpringEgg_Hop_LowGravNoFall_C>();
	}
};
static_assert(alignof(AGCNL_SpringEgg_Hop_LowGravNoFall_C) == 0x000008, "Wrong alignment on AGCNL_SpringEgg_Hop_LowGravNoFall_C");
static_assert(sizeof(AGCNL_SpringEgg_Hop_LowGravNoFall_C) == 0x0009B8, "Wrong size on AGCNL_SpringEgg_Hop_LowGravNoFall_C");
static_assert(offsetof(AGCNL_SpringEgg_Hop_LowGravNoFall_C, InUseLoopAudio) == 0x0009A8, "Member 'AGCNL_SpringEgg_Hop_LowGravNoFall_C::InUseLoopAudio' has a wrong offset!");
static_assert(offsetof(AGCNL_SpringEgg_Hop_LowGravNoFall_C, Target) == 0x0009B0, "Member 'AGCNL_SpringEgg_Hop_LowGravNoFall_C::Target' has a wrong offset!");

}
