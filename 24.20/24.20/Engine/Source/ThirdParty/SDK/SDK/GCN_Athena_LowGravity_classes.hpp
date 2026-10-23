#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCN_Athena_LowGravity_C : public AFortGameplayCueNotifyLoop_LowGravity
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AActor*                                 MyTargetCached;
	struct FTimerHandle                           ExpireTellDelayTimer;
	double                                        ExpirationSoundPeriod;
	struct FTimerHandle                           ExpirationSoundTimer;
	double                                        MaxDrawDistance;
	class UFXSystemComponent*                     LoopingFX;

public:
	void Activated(class AActor* PlayerPawn);
	void ClearExpireTell();
	void ExecuteUbergraph_GCN_Athena_LowGravity(int32 EntryPoint);
	void ExpireTell();
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void PlayExpirationSound();
	void ReceiveBeginPlay();
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_LowGravity_C">();
	}
	static class AGCN_Athena_LowGravity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Athena_LowGravity_C>();
	}
};
static_assert(alignof(AGCN_Athena_LowGravity_C) == 0x000008, "Wrong alignment on AGCN_Athena_LowGravity_C");
static_assert(sizeof(AGCN_Athena_LowGravity_C) == 0x0003E8, "Wrong size on AGCN_Athena_LowGravity_C");
static_assert(offsetof(AGCN_Athena_LowGravity_C, UberGraphFrame) == 0x0003B0, "Member 'AGCN_Athena_LowGravity_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, MyTargetCached) == 0x0003B8, "Member 'AGCN_Athena_LowGravity_C::MyTargetCached' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, ExpireTellDelayTimer) == 0x0003C0, "Member 'AGCN_Athena_LowGravity_C::ExpireTellDelayTimer' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, ExpirationSoundPeriod) == 0x0003C8, "Member 'AGCN_Athena_LowGravity_C::ExpirationSoundPeriod' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, ExpirationSoundTimer) == 0x0003D0, "Member 'AGCN_Athena_LowGravity_C::ExpirationSoundTimer' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, MaxDrawDistance) == 0x0003D8, "Member 'AGCN_Athena_LowGravity_C::MaxDrawDistance' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_LowGravity_C, LoopingFX) == 0x0003E0, "Member 'AGCN_Athena_LowGravity_C::LoopingFX' has a wrong offset!");

}
