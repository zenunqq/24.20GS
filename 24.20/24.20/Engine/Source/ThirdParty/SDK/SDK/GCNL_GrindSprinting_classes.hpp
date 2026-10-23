#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_GrindSprinting_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UAudioComponent*                        BoostAudio;
	class UAudioComponent*                        BoostEndAudio;

public:
	void ExecuteUbergraph_GCNL_GrindSprinting(int32 EntryPoint);
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_GrindSprinting_C">();
	}
	static class AGCNL_GrindSprinting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_GrindSprinting_C>();
	}
};
static_assert(alignof(AGCNL_GrindSprinting_C) == 0x000008, "Wrong alignment on AGCNL_GrindSprinting_C");
static_assert(sizeof(AGCNL_GrindSprinting_C) == 0x000978, "Wrong size on AGCNL_GrindSprinting_C");
static_assert(offsetof(AGCNL_GrindSprinting_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_GrindSprinting_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_GrindSprinting_C, BoostAudio) == 0x000968, "Member 'AGCNL_GrindSprinting_C::BoostAudio' has a wrong offset!");
static_assert(offsetof(AGCNL_GrindSprinting_C, BoostEndAudio) == 0x000970, "Member 'AGCNL_GrindSprinting_C::BoostEndAudio' has a wrong offset!");

}
