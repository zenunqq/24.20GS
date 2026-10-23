#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ColorSelect_structs.hpp"
#include "GrindRailRuntime_structs.hpp"
#include "GrindRailRuntime_classes.hpp"

namespace SDK
{

class AGCNL_Grinding_C final : public AFortGameplayCueNotifyLoop_Grinding
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UFortSoundIndicatorComponent*           FortSoundIndicator;
	float                                         AlphaCurve_AlphaCurve_9B7371B340D33525AE3B1686831C0FC6;
	ETimelineDirection                            AlphaCurve__Direction_9B7371B340D33525AE3B1686831C0FC6;
	uint8                                         Pad_B05[0x3];
	class UTimelineComponent*                     AlphaCurve;
	class UFXSystemComponent*                     GrindRailFX;
	class UBP_GrindingComponent_C*                Cached_Grinding_Component;
	class UAudioComponent*                        BoostEndAudio;
	class UAudioComponent*                        GrindAudioLoop;
	class UAudioComponent*                        GrindAudioStart;
	class AFortPlayerPawn*                        PlayerPawn_0;
	class UAudioComponent*                        GrindAudioStop;
	EColorSelect                                  ColorEnum;
	uint8                                         Pad_B49[0x7];
	class AFortGrindRail*                         GrindRail;
	class ABuildingGameplayActor*                 GrindingRail;
	struct FTimerHandle                           GrindAudioLoopHandle;
	double                                        AudioSpeedParam;
	class UAudioComponent*                        TurnAudio;
	double                                        AudioForwardParam;
	double                                        AudioBoostParam;
	bool                                          bAudioBoosted;
	uint8                                         Pad_B89[0x7];
	class UAudioComponent*                        BoostAudio;
	class UAudioComponent*                        JumpOffAudio;
	double                                        AudioCurveParam;
	double                                        AudioSpeedInterp;
	double                                        AudioForwardInterp;
	double                                        AudioBoostRelease;
	double                                        AudioCurveMinInput;
	double                                        AudioCurveInterp;
	double                                        AudioCurveMaxInput;
	double                                        AudioGrindingParam;
	double                                        AudioBoostAttack;
	double                                        AudioGrindingInterp;
	double                                        AudioSlowDownParam;
	double                                        AudioSlowDownInterp;
	class USoundBase*                             StopLoopSound;
	class USoundBase*                             StartLoopSound;
	class USoundBase*                             JumpUpSound;
	class USoundBase*                             LeanForwardSound;
	bool                                          HasLeanForward;
	uint8                                         Pad_C21[0x3];
	float                                         NotRenderedDisableEffectsTime;

public:
	void AllowAudio();
	void AlphaCurve__FinishedFunc();
	void AlphaCurve__UpdateFunc();
	void ExecuteUbergraph_GCNL_Grinding(int32 EntryPoint);
	void GrindAudioState(bool Start);
	void HandleGrindRailChanged(class AFortGrindRail* OldRail, class AFortGrindRail* NewRail);
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnFeetLanded();
	void OnForwardChanged(bool bNewState);
	void OnGrindRailBoosterMode(EGrindRailBoosterMode PreviousBoosterMode);
	void OnGrindRailSprint(bool bNewIsSprinting);
	void OnJumpedOff();
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ReceiveTick(float DeltaSeconds);
	void UpdateAudioParams();
	void UpdateGrindAudioLoop();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Grinding_C">();
	}
	static class AGCNL_Grinding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Grinding_C>();
	}
};
static_assert(alignof(AGCNL_Grinding_C) == 0x000008, "Wrong alignment on AGCNL_Grinding_C");
static_assert(sizeof(AGCNL_Grinding_C) == 0x000C28, "Wrong size on AGCNL_Grinding_C");
static_assert(offsetof(AGCNL_Grinding_C, UberGraphFrame) == 0x000AF0, "Member 'AGCNL_Grinding_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, FortSoundIndicator) == 0x000AF8, "Member 'AGCNL_Grinding_C::FortSoundIndicator' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AlphaCurve_AlphaCurve_9B7371B340D33525AE3B1686831C0FC6) == 0x000B00, "Member 'AGCNL_Grinding_C::AlphaCurve_AlphaCurve_9B7371B340D33525AE3B1686831C0FC6' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AlphaCurve__Direction_9B7371B340D33525AE3B1686831C0FC6) == 0x000B04, "Member 'AGCNL_Grinding_C::AlphaCurve__Direction_9B7371B340D33525AE3B1686831C0FC6' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AlphaCurve) == 0x000B08, "Member 'AGCNL_Grinding_C::AlphaCurve' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, GrindRailFX) == 0x000B10, "Member 'AGCNL_Grinding_C::GrindRailFX' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, Cached_Grinding_Component) == 0x000B18, "Member 'AGCNL_Grinding_C::Cached_Grinding_Component' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, BoostEndAudio) == 0x000B20, "Member 'AGCNL_Grinding_C::BoostEndAudio' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, GrindAudioLoop) == 0x000B28, "Member 'AGCNL_Grinding_C::GrindAudioLoop' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, GrindAudioStart) == 0x000B30, "Member 'AGCNL_Grinding_C::GrindAudioStart' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, PlayerPawn_0) == 0x000B38, "Member 'AGCNL_Grinding_C::PlayerPawn_0' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, GrindAudioStop) == 0x000B40, "Member 'AGCNL_Grinding_C::GrindAudioStop' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, ColorEnum) == 0x000B48, "Member 'AGCNL_Grinding_C::ColorEnum' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, GrindRail) == 0x000B50, "Member 'AGCNL_Grinding_C::GrindRail' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, GrindingRail) == 0x000B58, "Member 'AGCNL_Grinding_C::GrindingRail' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, GrindAudioLoopHandle) == 0x000B60, "Member 'AGCNL_Grinding_C::GrindAudioLoopHandle' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioSpeedParam) == 0x000B68, "Member 'AGCNL_Grinding_C::AudioSpeedParam' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, TurnAudio) == 0x000B70, "Member 'AGCNL_Grinding_C::TurnAudio' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioForwardParam) == 0x000B78, "Member 'AGCNL_Grinding_C::AudioForwardParam' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioBoostParam) == 0x000B80, "Member 'AGCNL_Grinding_C::AudioBoostParam' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, bAudioBoosted) == 0x000B88, "Member 'AGCNL_Grinding_C::bAudioBoosted' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, BoostAudio) == 0x000B90, "Member 'AGCNL_Grinding_C::BoostAudio' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, JumpOffAudio) == 0x000B98, "Member 'AGCNL_Grinding_C::JumpOffAudio' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioCurveParam) == 0x000BA0, "Member 'AGCNL_Grinding_C::AudioCurveParam' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioSpeedInterp) == 0x000BA8, "Member 'AGCNL_Grinding_C::AudioSpeedInterp' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioForwardInterp) == 0x000BB0, "Member 'AGCNL_Grinding_C::AudioForwardInterp' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioBoostRelease) == 0x000BB8, "Member 'AGCNL_Grinding_C::AudioBoostRelease' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioCurveMinInput) == 0x000BC0, "Member 'AGCNL_Grinding_C::AudioCurveMinInput' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioCurveInterp) == 0x000BC8, "Member 'AGCNL_Grinding_C::AudioCurveInterp' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioCurveMaxInput) == 0x000BD0, "Member 'AGCNL_Grinding_C::AudioCurveMaxInput' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioGrindingParam) == 0x000BD8, "Member 'AGCNL_Grinding_C::AudioGrindingParam' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioBoostAttack) == 0x000BE0, "Member 'AGCNL_Grinding_C::AudioBoostAttack' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioGrindingInterp) == 0x000BE8, "Member 'AGCNL_Grinding_C::AudioGrindingInterp' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioSlowDownParam) == 0x000BF0, "Member 'AGCNL_Grinding_C::AudioSlowDownParam' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, AudioSlowDownInterp) == 0x000BF8, "Member 'AGCNL_Grinding_C::AudioSlowDownInterp' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, StopLoopSound) == 0x000C00, "Member 'AGCNL_Grinding_C::StopLoopSound' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, StartLoopSound) == 0x000C08, "Member 'AGCNL_Grinding_C::StartLoopSound' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, JumpUpSound) == 0x000C10, "Member 'AGCNL_Grinding_C::JumpUpSound' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, LeanForwardSound) == 0x000C18, "Member 'AGCNL_Grinding_C::LeanForwardSound' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, HasLeanForward) == 0x000C20, "Member 'AGCNL_Grinding_C::HasLeanForward' has a wrong offset!");
static_assert(offsetof(AGCNL_Grinding_C, NotRenderedDisableEffectsTime) == 0x000C24, "Member 'AGCNL_Grinding_C::NotRenderedDisableEffectsTime' has a wrong offset!");

}
