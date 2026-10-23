#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Athena_FallDamageImmunity_C final : public AFortGameplayCueNotifyAthena_FallDamageImmunity
{
public:
	class UAudioComponent*                        InUseLoopAudio;
	class AActor*                                 Target;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_FallDamageImmunity_C">();
	}
	static class AGCNL_Athena_FallDamageImmunity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_FallDamageImmunity_C>();
	}
};
static_assert(alignof(AGCNL_Athena_FallDamageImmunity_C) == 0x000008, "Wrong alignment on AGCNL_Athena_FallDamageImmunity_C");
static_assert(sizeof(AGCNL_Athena_FallDamageImmunity_C) == 0x0009B8, "Wrong size on AGCNL_Athena_FallDamageImmunity_C");
static_assert(offsetof(AGCNL_Athena_FallDamageImmunity_C, InUseLoopAudio) == 0x0009A8, "Member 'AGCNL_Athena_FallDamageImmunity_C::InUseLoopAudio' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_FallDamageImmunity_C, Target) == 0x0009B0, "Member 'AGCNL_Athena_FallDamageImmunity_C::Target' has a wrong offset!");

}
