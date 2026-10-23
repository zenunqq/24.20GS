#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGC_Athena_OutsideSafeZone_C : public AFortGameplayCueNotifyLoop_OutsideSafeZone
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UPointLightComponent*                   Random_Lighting_Light;
	float                                         LightningFlashTL_LERP_3FDEC95248645BE865DCD0840F99915A;
	ETimelineDirection                            LightningFlashTL__Direction_3FDEC95248645BE865DCD0840F99915A;
	uint8                                         Pad_975[0x3];
	class UTimelineComponent*                     LightningFlashTL;
	class USoundBase*                             Storm_Sound;
	double                                        LightningFlashDiameter;
	double                                        LightningFlashHeight;
	struct FVector                                Lightning_Spawn_Location;
	double                                        _ChanceOfLightningMesh;
	double                                        Lightning_Intensity;
	double                                        LightningIntensityMin;
	double                                        LightningIntensityMax;
	double                                        LightningTimelinePlaySpeedMin;
	double                                        LightningTimelinePlaySpeedMax;
	class APlayerPawn_Athena_Generic_C*           Player_Pawn;
	double                                        LightningFlashRepeatDelayMin;
	double                                        LightningFlashRepeatDelayMax;
	int32                                         Storm_Stage;
	struct FGameplayTag                           StormAudioTag_Low;
	struct FGameplayTag                           StormAudioTag_Medium;
	struct FGameplayTag                           StormAudioTag_High;
	class UAmbientAudioDataAsset*                 StormAudioBank;
	bool                                          StormEffectsEnabled;

public:
	void ExecuteUbergraph_GC_Athena_OutsideSafeZone(int32 EntryPoint);
	void FlashTimeline();
	void Get_Location_in_Circle_XY(struct FVector* Location_Local_Space);
	void LightningFlashTL__FinishedFunc();
	void LightningFlashTL__UpdateFunc();
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnStormEffectsEnabled(bool bEnabled);
	void Random_Lighting_Flashes();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Athena_OutsideSafeZone_C">();
	}
	static class AGC_Athena_OutsideSafeZone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Athena_OutsideSafeZone_C>();
	}
};
static_assert(alignof(AGC_Athena_OutsideSafeZone_C) == 0x000008, "Wrong alignment on AGC_Athena_OutsideSafeZone_C");
static_assert(sizeof(AGC_Athena_OutsideSafeZone_C) == 0x000A18, "Wrong size on AGC_Athena_OutsideSafeZone_C");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, UberGraphFrame) == 0x000960, "Member 'AGC_Athena_OutsideSafeZone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, Random_Lighting_Light) == 0x000968, "Member 'AGC_Athena_OutsideSafeZone_C::Random_Lighting_Light' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningFlashTL_LERP_3FDEC95248645BE865DCD0840F99915A) == 0x000970, "Member 'AGC_Athena_OutsideSafeZone_C::LightningFlashTL_LERP_3FDEC95248645BE865DCD0840F99915A' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningFlashTL__Direction_3FDEC95248645BE865DCD0840F99915A) == 0x000974, "Member 'AGC_Athena_OutsideSafeZone_C::LightningFlashTL__Direction_3FDEC95248645BE865DCD0840F99915A' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningFlashTL) == 0x000978, "Member 'AGC_Athena_OutsideSafeZone_C::LightningFlashTL' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, Storm_Sound) == 0x000980, "Member 'AGC_Athena_OutsideSafeZone_C::Storm_Sound' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningFlashDiameter) == 0x000988, "Member 'AGC_Athena_OutsideSafeZone_C::LightningFlashDiameter' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningFlashHeight) == 0x000990, "Member 'AGC_Athena_OutsideSafeZone_C::LightningFlashHeight' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, Lightning_Spawn_Location) == 0x000998, "Member 'AGC_Athena_OutsideSafeZone_C::Lightning_Spawn_Location' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, _ChanceOfLightningMesh) == 0x0009B0, "Member 'AGC_Athena_OutsideSafeZone_C::_ChanceOfLightningMesh' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, Lightning_Intensity) == 0x0009B8, "Member 'AGC_Athena_OutsideSafeZone_C::Lightning_Intensity' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningIntensityMin) == 0x0009C0, "Member 'AGC_Athena_OutsideSafeZone_C::LightningIntensityMin' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningIntensityMax) == 0x0009C8, "Member 'AGC_Athena_OutsideSafeZone_C::LightningIntensityMax' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningTimelinePlaySpeedMin) == 0x0009D0, "Member 'AGC_Athena_OutsideSafeZone_C::LightningTimelinePlaySpeedMin' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningTimelinePlaySpeedMax) == 0x0009D8, "Member 'AGC_Athena_OutsideSafeZone_C::LightningTimelinePlaySpeedMax' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, Player_Pawn) == 0x0009E0, "Member 'AGC_Athena_OutsideSafeZone_C::Player_Pawn' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningFlashRepeatDelayMin) == 0x0009E8, "Member 'AGC_Athena_OutsideSafeZone_C::LightningFlashRepeatDelayMin' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, LightningFlashRepeatDelayMax) == 0x0009F0, "Member 'AGC_Athena_OutsideSafeZone_C::LightningFlashRepeatDelayMax' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, Storm_Stage) == 0x0009F8, "Member 'AGC_Athena_OutsideSafeZone_C::Storm_Stage' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, StormAudioTag_Low) == 0x0009FC, "Member 'AGC_Athena_OutsideSafeZone_C::StormAudioTag_Low' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, StormAudioTag_Medium) == 0x000A00, "Member 'AGC_Athena_OutsideSafeZone_C::StormAudioTag_Medium' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, StormAudioTag_High) == 0x000A04, "Member 'AGC_Athena_OutsideSafeZone_C::StormAudioTag_High' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, StormAudioBank) == 0x000A08, "Member 'AGC_Athena_OutsideSafeZone_C::StormAudioBank' has a wrong offset!");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_C, StormEffectsEnabled) == 0x000A10, "Member 'AGC_Athena_OutsideSafeZone_C::StormEffectsEnabled' has a wrong offset!");

}
