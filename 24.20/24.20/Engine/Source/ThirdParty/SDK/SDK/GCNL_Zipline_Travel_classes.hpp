#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Zipline_Travel_C final : public AFortGameplayCueNotifyLoop_ZiplineTravel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UAudioComponent*                        AttachSoundAudioComp;
	TArray<bool>                                  NewVar_0;

public:
	void ExecuteUbergraph_GCNL_Zipline_Travel(int32 EntryPoint);
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Zipline_Travel_C">();
	}
	static class AGCNL_Zipline_Travel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Zipline_Travel_C>();
	}
};
static_assert(alignof(AGCNL_Zipline_Travel_C) == 0x000008, "Wrong alignment on AGCNL_Zipline_Travel_C");
static_assert(sizeof(AGCNL_Zipline_Travel_C) == 0x000A60, "Wrong size on AGCNL_Zipline_Travel_C");
static_assert(offsetof(AGCNL_Zipline_Travel_C, UberGraphFrame) == 0x000A40, "Member 'AGCNL_Zipline_Travel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Zipline_Travel_C, AttachSoundAudioComp) == 0x000A48, "Member 'AGCNL_Zipline_Travel_C::AttachSoundAudioComp' has a wrong offset!");
static_assert(offsetof(AGCNL_Zipline_Travel_C, NewVar_0) == 0x000A50, "Member 'AGCNL_Zipline_Travel_C::NewVar_0' has a wrong offset!");

}
