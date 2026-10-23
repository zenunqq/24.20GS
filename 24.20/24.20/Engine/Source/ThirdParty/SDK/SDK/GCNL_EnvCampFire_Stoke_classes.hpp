#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class AGCNL_EnvCampFire_Stoke_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FScalableFloat                         Row_TickInterval;
	struct FScalableFloat                         Row_MaxHeals;

public:
	void ExecuteUbergraph_GCNL_EnvCampFire_Stoke(int32 EntryPoint);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_EnvCampFire_Stoke_C">();
	}
	static class AGCNL_EnvCampFire_Stoke_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_EnvCampFire_Stoke_C>();
	}
};
static_assert(alignof(AGCNL_EnvCampFire_Stoke_C) == 0x000008, "Wrong alignment on AGCNL_EnvCampFire_Stoke_C");
static_assert(sizeof(AGCNL_EnvCampFire_Stoke_C) == 0x0009B8, "Wrong size on AGCNL_EnvCampFire_Stoke_C");
static_assert(offsetof(AGCNL_EnvCampFire_Stoke_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_EnvCampFire_Stoke_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_EnvCampFire_Stoke_C, Row_TickInterval) == 0x000968, "Member 'AGCNL_EnvCampFire_Stoke_C::Row_TickInterval' has a wrong offset!");
static_assert(offsetof(AGCNL_EnvCampFire_Stoke_C, Row_MaxHeals) == 0x000990, "Member 'AGCNL_EnvCampFire_Stoke_C::Row_MaxHeals' has a wrong offset!");

}
