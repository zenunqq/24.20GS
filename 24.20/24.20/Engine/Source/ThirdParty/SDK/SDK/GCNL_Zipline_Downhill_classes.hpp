#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Zipline_Downhill_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;
	class ULegacyCameraShake*                     matineeCamShake;
	double                                        MinCamShakeAmp;
	double                                        MaxCamShakeAmp;
	double                                        MinCamShakeFreq;
	double                                        MaxCamShakeFreq;

public:
	void cameraShakeTimer();
	void ExecuteUbergraph_GCNL_Zipline_Downhill(int32 EntryPoint);
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Zipline_Downhill_C">();
	}
	static class AGCNL_Zipline_Downhill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Zipline_Downhill_C>();
	}
};
static_assert(alignof(AGCNL_Zipline_Downhill_C) == 0x000008, "Wrong alignment on AGCNL_Zipline_Downhill_C");
static_assert(sizeof(AGCNL_Zipline_Downhill_C) == 0x000998, "Wrong size on AGCNL_Zipline_Downhill_C");
static_assert(offsetof(AGCNL_Zipline_Downhill_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Zipline_Downhill_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Zipline_Downhill_C, PlayerPawn) == 0x000968, "Member 'AGCNL_Zipline_Downhill_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AGCNL_Zipline_Downhill_C, matineeCamShake) == 0x000970, "Member 'AGCNL_Zipline_Downhill_C::matineeCamShake' has a wrong offset!");
static_assert(offsetof(AGCNL_Zipline_Downhill_C, MinCamShakeAmp) == 0x000978, "Member 'AGCNL_Zipline_Downhill_C::MinCamShakeAmp' has a wrong offset!");
static_assert(offsetof(AGCNL_Zipline_Downhill_C, MaxCamShakeAmp) == 0x000980, "Member 'AGCNL_Zipline_Downhill_C::MaxCamShakeAmp' has a wrong offset!");
static_assert(offsetof(AGCNL_Zipline_Downhill_C, MinCamShakeFreq) == 0x000988, "Member 'AGCNL_Zipline_Downhill_C::MinCamShakeFreq' has a wrong offset!");
static_assert(offsetof(AGCNL_Zipline_Downhill_C, MaxCamShakeFreq) == 0x000990, "Member 'AGCNL_Zipline_Downhill_C::MaxCamShakeFreq' has a wrong offset!");

}
