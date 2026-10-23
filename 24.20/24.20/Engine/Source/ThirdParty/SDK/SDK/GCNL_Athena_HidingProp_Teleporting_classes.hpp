#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Athena_HidingProp_Teleporting_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	float                                         Timeline_0_LerpWhiteWash_3C12694840EC8C9B33E562A2C6B279BA;
	ETimelineDirection                            Timeline_0__Direction_3C12694840EC8C9B33E562A2C6B279BA;
	uint8                                         Pad_96D[0x3];
	class UTimelineComponent*                     Timeline_0;
	class UAudioComponent*                        OnePTravelAudio;
	TScriptInterface<class ICameraLensEffectInterface> LensEffectInterface;
	class AActor*                                 LensEffectActor;
	class USoundMix*                              OnepMixMod;
	class AFortPlayerPawn*                        OwningActor;

public:
	void ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting(int32 EntryPoint);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void Timeline_0__DoFlash__EventFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_HidingProp_Teleporting_C">();
	}
	static class AGCNL_Athena_HidingProp_Teleporting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_HidingProp_Teleporting_C>();
	}
};
static_assert(alignof(AGCNL_Athena_HidingProp_Teleporting_C) == 0x000008, "Wrong alignment on AGCNL_Athena_HidingProp_Teleporting_C");
static_assert(sizeof(AGCNL_Athena_HidingProp_Teleporting_C) == 0x0009A8, "Wrong size on AGCNL_Athena_HidingProp_Teleporting_C");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, Timeline_0_LerpWhiteWash_3C12694840EC8C9B33E562A2C6B279BA) == 0x000968, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::Timeline_0_LerpWhiteWash_3C12694840EC8C9B33E562A2C6B279BA' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, Timeline_0__Direction_3C12694840EC8C9B33E562A2C6B279BA) == 0x00096C, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::Timeline_0__Direction_3C12694840EC8C9B33E562A2C6B279BA' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, Timeline_0) == 0x000970, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, OnePTravelAudio) == 0x000978, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::OnePTravelAudio' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, LensEffectInterface) == 0x000980, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::LensEffectInterface' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, LensEffectActor) == 0x000990, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::LensEffectActor' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, OnepMixMod) == 0x000998, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::OnepMixMod' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, OwningActor) == 0x0009A0, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::OwningActor' has a wrong offset!");

}
