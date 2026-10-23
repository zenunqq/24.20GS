#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Vent_Enter_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UPostProcessComponent*                  PostProcess;
	float                                         FadePPVol_LERP_6D28D8B64202D10F474B48B80194DA6D;
	ETimelineDirection                            FadePPVol__Direction_6D28D8B64202D10F474B48B80194DA6D;
	uint8                                         Pad_975[0x3];
	class UTimelineComponent*                     FadePPVol;
	class UClass*                                 CameraShakeClass;
	class ULegacyCameraShake*                     CameraShake;
	bool                                          UsePP;

public:
	void ExecuteUbergraph_GCNL_Vent_Enter(int32 EntryPoint);
	void FadePPVol__FinishedFunc();
	void FadePPVol__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Vent_Enter_C">();
	}
	static class AGCNL_Vent_Enter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Vent_Enter_C>();
	}
};
static_assert(alignof(AGCNL_Vent_Enter_C) == 0x000008, "Wrong alignment on AGCNL_Vent_Enter_C");
static_assert(sizeof(AGCNL_Vent_Enter_C) == 0x000998, "Wrong size on AGCNL_Vent_Enter_C");
static_assert(offsetof(AGCNL_Vent_Enter_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Vent_Enter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Vent_Enter_C, PostProcess) == 0x000968, "Member 'AGCNL_Vent_Enter_C::PostProcess' has a wrong offset!");
static_assert(offsetof(AGCNL_Vent_Enter_C, FadePPVol_LERP_6D28D8B64202D10F474B48B80194DA6D) == 0x000970, "Member 'AGCNL_Vent_Enter_C::FadePPVol_LERP_6D28D8B64202D10F474B48B80194DA6D' has a wrong offset!");
static_assert(offsetof(AGCNL_Vent_Enter_C, FadePPVol__Direction_6D28D8B64202D10F474B48B80194DA6D) == 0x000974, "Member 'AGCNL_Vent_Enter_C::FadePPVol__Direction_6D28D8B64202D10F474B48B80194DA6D' has a wrong offset!");
static_assert(offsetof(AGCNL_Vent_Enter_C, FadePPVol) == 0x000978, "Member 'AGCNL_Vent_Enter_C::FadePPVol' has a wrong offset!");
static_assert(offsetof(AGCNL_Vent_Enter_C, CameraShakeClass) == 0x000980, "Member 'AGCNL_Vent_Enter_C::CameraShakeClass' has a wrong offset!");
static_assert(offsetof(AGCNL_Vent_Enter_C, CameraShake) == 0x000988, "Member 'AGCNL_Vent_Enter_C::CameraShake' has a wrong offset!");
static_assert(offsetof(AGCNL_Vent_Enter_C, UsePP) == 0x000990, "Member 'AGCNL_Vent_Enter_C::UsePP' has a wrong offset!");

}
