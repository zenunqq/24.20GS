#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_RidingSprint_SpeedLines_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USoundBase*                             SpeedLinesAudio;
	class UAudioComponent*                        SpeedlinesAudioComp;

public:
	void ExecuteUbergraph_GCNL_RidingSprint_SpeedLines(int32 EntryPoint);
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_RidingSprint_SpeedLines_C">();
	}
	static class AGCNL_RidingSprint_SpeedLines_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_RidingSprint_SpeedLines_C>();
	}
};
static_assert(alignof(AGCNL_RidingSprint_SpeedLines_C) == 0x000008, "Wrong alignment on AGCNL_RidingSprint_SpeedLines_C");
static_assert(sizeof(AGCNL_RidingSprint_SpeedLines_C) == 0x000978, "Wrong size on AGCNL_RidingSprint_SpeedLines_C");
static_assert(offsetof(AGCNL_RidingSprint_SpeedLines_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_RidingSprint_SpeedLines_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_RidingSprint_SpeedLines_C, SpeedLinesAudio) == 0x000968, "Member 'AGCNL_RidingSprint_SpeedLines_C::SpeedLinesAudio' has a wrong offset!");
static_assert(offsetof(AGCNL_RidingSprint_SpeedLines_C, SpeedlinesAudioComp) == 0x000970, "Member 'AGCNL_RidingSprint_SpeedLines_C::SpeedlinesAudioComp' has a wrong offset!");

}
