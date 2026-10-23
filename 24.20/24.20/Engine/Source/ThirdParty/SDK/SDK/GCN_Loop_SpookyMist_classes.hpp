#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCN_Loop_SpookyMist_C final : public AFortGameplayCueNotifyLoop_SpookyMist
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UPostProcessComponent*                  PostProcess;
	float                                         Timeline_Interaction_Fade_In_Out_Visbility_5529D6B24898E091AFB4668B43CFAB50;
	ETimelineDirection                            Timeline_Interaction_Fade_In_Out__Direction_5529D6B24898E091AFB4668B43CFAB50;
	uint8                                         Pad_B15[0x3];
	class UTimelineComponent*                     Timeline_Interaction_Fade_In_Out;

public:
	void EndedInteract();
	void ExecuteUbergraph_GCN_Loop_SpookyMist(int32 EntryPoint);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void StartedInteract();
	void Timeline_Interaction_Fade_In_Out__FinishedFunc();
	void Timeline_Interaction_Fade_In_Out__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_SpookyMist_C">();
	}
	static class AGCN_Loop_SpookyMist_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_SpookyMist_C>();
	}
};
static_assert(alignof(AGCN_Loop_SpookyMist_C) == 0x000008, "Wrong alignment on AGCN_Loop_SpookyMist_C");
static_assert(sizeof(AGCN_Loop_SpookyMist_C) == 0x000B20, "Wrong size on AGCN_Loop_SpookyMist_C");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, UberGraphFrame) == 0x000B00, "Member 'AGCN_Loop_SpookyMist_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, PostProcess) == 0x000B08, "Member 'AGCN_Loop_SpookyMist_C::PostProcess' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, Timeline_Interaction_Fade_In_Out_Visbility_5529D6B24898E091AFB4668B43CFAB50) == 0x000B10, "Member 'AGCN_Loop_SpookyMist_C::Timeline_Interaction_Fade_In_Out_Visbility_5529D6B24898E091AFB4668B43CFAB50' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, Timeline_Interaction_Fade_In_Out__Direction_5529D6B24898E091AFB4668B43CFAB50) == 0x000B14, "Member 'AGCN_Loop_SpookyMist_C::Timeline_Interaction_Fade_In_Out__Direction_5529D6B24898E091AFB4668B43CFAB50' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, Timeline_Interaction_Fade_In_Out) == 0x000B18, "Member 'AGCN_Loop_SpookyMist_C::Timeline_Interaction_Fade_In_Out' has a wrong offset!");

}
