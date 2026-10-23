#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AThreatPostProcessManagerAndParticleBlueprint_C final : public AFortThreatParticleActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UAudioComponent*                        EnterTheStormSound;
	class UBillboardComponent*                    Sprite1;
	float                                         Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4;
	ETimelineDirection                            Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4;
	uint8                                         Pad_2B5[0x3];
	class UTimelineComponent*                     Ramp_Up_down_values_on_death;
	TMulticastInlineDelegate<void()>              NewEventDispatcher;
	TMulticastInlineDelegate<void()>              NewEventDispatcher0;
	TArray<struct FVector>                        Array_of_Cloud_Positions;
	int32                                         RecalculateTimer;
	bool                                          Is_Alive;
	bool                                          IsAliveJustChanged;
	bool                                          IsAlivePrevious;
	uint8                                         Pad_2F7[0x1];
	int32                                         Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_alive;
	int32                                         Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_dead;
	class APostProcessVolume*                     Materialpost;
	double                                        post_process_volume_falloff__around_the_threat_volume;
	bool                                          ShowRainEffect;
	uint8                                         Pad_311[0x7];
	double                                        DeltaTime;
	double                                        PostProcessTargetWeight;
	double                                        Current_Post_Process_Weight;
	double                                        Post_Process_Fade_in_speed;
	bool                                          SoundIsActive;
	bool                                          SoundWasPreviouslyActive;
	bool                                          is_On;
	uint8                                         Pad_33B[0x1];
	struct FLinearColor                           ThreatFogPostProcessColor_Morning;
	struct FLinearColor                           ThreatFogPostProcessColor_Day;
	struct FLinearColor                           ThreatFogPostProcessColor_Evening;
	struct FLinearColor                           ThreatFogPostProcessColor_Night;
	uint8                                         Pad_37C[0x4];
	TArray<struct FBox>                           Array_of_Cloud_Volumes;
	double                                        PostProcessWeightModulation;
	double                                        Ramp_Up_And_Down_Anim_Values;
	bool                                          ShowRainOnCameraLens;
	uint8                                         Pad_3A1[0x7];
	class AEmitterCameraLensEffectBase*           Rain_Camera_Lens_Effect;
	class UParticleSystemComponent*               LocalizedParticleSystem;
	bool                                          IsWorldReady;
	uint8                                         Pad_3B9[0x7];
	double                                        Rain_Trace_Timer;
	struct FVector                                RainTraceOffset;
	double                                        RainMultiplierCurrent;
	double                                        Rain_Spawn_Rate_Exponent;
	bool                                          TracePrevious;
	bool                                          IsAthenaWorld;
	bool                                          bThreatOverride;
	bool                                          bForceOff;
	uint8                                         Pad_3F4[0x4];
	TScriptInterface<class ICameraLensEffectInterface> CameraLensEffectInterface;

public:
	void SetForceOff(bool bForceOff_0);
	void ReceiveTick(float DeltaSeconds);
	void Ramp_Up_down_values_on_death__UpdateFunc();
	void Ramp_Up_down_values_on_death__FinishedFunc();
	void VFX_RainTracePeriodic();
	void StartTraceTimer();
	void OnWorldReady();
	void ForceUpdateLensEffect();
	void OnThreatOverrideChanged(bool bForceThreatOn);
	void OnThreatCloudsChanged(const TArray<struct FThreatLocationInfo>& ThreatLocationInfo);
	void ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int32 EntryPoint);
	void CalculatePlayerPositionNearBox(const struct FVector& BoxMin, const struct FVector& BoxMax, double* VolumePlayerCoveragePercentage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ThreatPostProcessManagerAndParticleBlueprint_C">();
	}
	static class AThreatPostProcessManagerAndParticleBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AThreatPostProcessManagerAndParticleBlueprint_C>();
	}
};
static_assert(alignof(AThreatPostProcessManagerAndParticleBlueprint_C) == 0x000008, "Wrong alignment on AThreatPostProcessManagerAndParticleBlueprint_C");
static_assert(sizeof(AThreatPostProcessManagerAndParticleBlueprint_C) == 0x000408, "Wrong size on AThreatPostProcessManagerAndParticleBlueprint_C");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, UberGraphFrame) == 0x000298, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, EnterTheStormSound) == 0x0002A0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::EnterTheStormSound' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Sprite1) == 0x0002A8, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Sprite1' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4) == 0x0002B0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4) == 0x0002B4, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Ramp_Up_down_values_on_death) == 0x0002B8, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, NewEventDispatcher) == 0x0002C0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::NewEventDispatcher' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, NewEventDispatcher0) == 0x0002D0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::NewEventDispatcher0' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Array_of_Cloud_Positions) == 0x0002E0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Array_of_Cloud_Positions' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, RecalculateTimer) == 0x0002F0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::RecalculateTimer' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Is_Alive) == 0x0002F4, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Is_Alive' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, IsAliveJustChanged) == 0x0002F5, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::IsAliveJustChanged' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, IsAlivePrevious) == 0x0002F6, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::IsAlivePrevious' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_alive) == 0x0002F8, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_alive' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_dead) == 0x0002FC, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_dead' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Materialpost) == 0x000300, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Materialpost' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, post_process_volume_falloff__around_the_threat_volume) == 0x000308, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::post_process_volume_falloff__around_the_threat_volume' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, ShowRainEffect) == 0x000310, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::ShowRainEffect' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, DeltaTime) == 0x000318, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::DeltaTime' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, PostProcessTargetWeight) == 0x000320, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::PostProcessTargetWeight' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Current_Post_Process_Weight) == 0x000328, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Current_Post_Process_Weight' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Post_Process_Fade_in_speed) == 0x000330, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Post_Process_Fade_in_speed' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, SoundIsActive) == 0x000338, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::SoundIsActive' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, SoundWasPreviouslyActive) == 0x000339, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::SoundWasPreviouslyActive' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, is_On) == 0x00033A, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::is_On' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, ThreatFogPostProcessColor_Morning) == 0x00033C, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::ThreatFogPostProcessColor_Morning' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, ThreatFogPostProcessColor_Day) == 0x00034C, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::ThreatFogPostProcessColor_Day' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, ThreatFogPostProcessColor_Evening) == 0x00035C, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::ThreatFogPostProcessColor_Evening' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, ThreatFogPostProcessColor_Night) == 0x00036C, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::ThreatFogPostProcessColor_Night' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Array_of_Cloud_Volumes) == 0x000380, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Array_of_Cloud_Volumes' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, PostProcessWeightModulation) == 0x000390, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::PostProcessWeightModulation' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Ramp_Up_And_Down_Anim_Values) == 0x000398, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_And_Down_Anim_Values' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, ShowRainOnCameraLens) == 0x0003A0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::ShowRainOnCameraLens' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Rain_Camera_Lens_Effect) == 0x0003A8, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Rain_Camera_Lens_Effect' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, LocalizedParticleSystem) == 0x0003B0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::LocalizedParticleSystem' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, IsWorldReady) == 0x0003B8, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::IsWorldReady' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Rain_Trace_Timer) == 0x0003C0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Rain_Trace_Timer' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, RainTraceOffset) == 0x0003C8, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::RainTraceOffset' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, RainMultiplierCurrent) == 0x0003E0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::RainMultiplierCurrent' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Rain_Spawn_Rate_Exponent) == 0x0003E8, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Rain_Spawn_Rate_Exponent' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, TracePrevious) == 0x0003F0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::TracePrevious' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, IsAthenaWorld) == 0x0003F1, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::IsAthenaWorld' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, bThreatOverride) == 0x0003F2, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::bThreatOverride' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, bForceOff) == 0x0003F3, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::bForceOff' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, CameraLensEffectInterface) == 0x0003F8, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::CameraLensEffectInterface' has a wrong offset!");

}
