#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class AGCNL_Athena_Player_Sliding_CameraShake_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UPostProcessComponent*                  PostProcess;
	float                                         Timeline_0_BlendWeight_11D30796436EDF3C6112C3BD3BA47DBC;
	ETimelineDirection                            Timeline_0__Direction_11D30796436EDF3C6112C3BD3BA47DBC;
	uint8                                         Pad_975[0x3];
	class UTimelineComponent*                     Timeline_0;
	class AFortPlayerPawn*                        PlayerPawn;
	class ULegacyCameraShake*                     matineeCamShake;
	double                                        MinCamShakeAmp;
	double                                        MaxCamShakeAmp;
	double                                        MinCamShakeFreq;
	double                                        MaxCamShakeFreq;
	struct FScalableFloat                         MaxSlideSpeed;
	double                                        CameraShakeSpeed;
	bool                                          bIsSuperHigh;

public:
	void cameraShakeTimer();
	void ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake(int32 EntryPoint);
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_Player_Sliding_CameraShake_C">();
	}
	static class AGCNL_Athena_Player_Sliding_CameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_Player_Sliding_CameraShake_C>();
	}
};
static_assert(alignof(AGCNL_Athena_Player_Sliding_CameraShake_C) == 0x000008, "Wrong alignment on AGCNL_Athena_Player_Sliding_CameraShake_C");
static_assert(sizeof(AGCNL_Athena_Player_Sliding_CameraShake_C) == 0x0009E8, "Wrong size on AGCNL_Athena_Player_Sliding_CameraShake_C");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_CameraShake_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Athena_Player_Sliding_CameraShake_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_CameraShake_C, PostProcess) == 0x000968, "Member 'AGCNL_Athena_Player_Sliding_CameraShake_C::PostProcess' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_CameraShake_C, Timeline_0_BlendWeight_11D30796436EDF3C6112C3BD3BA47DBC) == 0x000970, "Member 'AGCNL_Athena_Player_Sliding_CameraShake_C::Timeline_0_BlendWeight_11D30796436EDF3C6112C3BD3BA47DBC' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_CameraShake_C, Timeline_0__Direction_11D30796436EDF3C6112C3BD3BA47DBC) == 0x000974, "Member 'AGCNL_Athena_Player_Sliding_CameraShake_C::Timeline_0__Direction_11D30796436EDF3C6112C3BD3BA47DBC' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_CameraShake_C, Timeline_0) == 0x000978, "Member 'AGCNL_Athena_Player_Sliding_CameraShake_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_CameraShake_C, PlayerPawn) == 0x000980, "Member 'AGCNL_Athena_Player_Sliding_CameraShake_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_CameraShake_C, matineeCamShake) == 0x000988, "Member 'AGCNL_Athena_Player_Sliding_CameraShake_C::matineeCamShake' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_CameraShake_C, MinCamShakeAmp) == 0x000990, "Member 'AGCNL_Athena_Player_Sliding_CameraShake_C::MinCamShakeAmp' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_CameraShake_C, MaxCamShakeAmp) == 0x000998, "Member 'AGCNL_Athena_Player_Sliding_CameraShake_C::MaxCamShakeAmp' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_CameraShake_C, MinCamShakeFreq) == 0x0009A0, "Member 'AGCNL_Athena_Player_Sliding_CameraShake_C::MinCamShakeFreq' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_CameraShake_C, MaxCamShakeFreq) == 0x0009A8, "Member 'AGCNL_Athena_Player_Sliding_CameraShake_C::MaxCamShakeFreq' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_CameraShake_C, MaxSlideSpeed) == 0x0009B0, "Member 'AGCNL_Athena_Player_Sliding_CameraShake_C::MaxSlideSpeed' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_CameraShake_C, CameraShakeSpeed) == 0x0009D8, "Member 'AGCNL_Athena_Player_Sliding_CameraShake_C::CameraShakeSpeed' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_CameraShake_C, bIsSuperHigh) == 0x0009E0, "Member 'AGCNL_Athena_Player_Sliding_CameraShake_C::bIsSuperHigh' has a wrong offset!");

}
