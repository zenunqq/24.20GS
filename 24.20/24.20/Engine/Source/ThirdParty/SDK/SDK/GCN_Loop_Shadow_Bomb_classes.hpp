#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class AGCN_Loop_Shadow_Bomb_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	float                                         Timeline_0_Visbility_E1DFEC9547FE3FAED2AFF3B0D8598182;
	ETimelineDirection                            Timeline_0__Direction_E1DFEC9547FE3FAED2AFF3B0D8598182;
	uint8                                         Pad_96D[0x3];
	class UTimelineComponent*                     Timeline_0;
	class AFortPlayerPawn*                        TargetPlayer;
	double                                        ExpirationSoundPeriod;
	double                                        VelocityInterp;
	TArray<class UParticleSystemComponent*>       AttachedFX;
	TArray<class USkeletalMeshComponent*>         PlayerSkeletalMeshes;
	bool                                          FriendlyPlayer;
	uint8                                         Pad_9B1[0x7];
	struct FTimerHandle                           ExpireTellDelayTimer;
	struct FTimerHandle                           ExpirationSoundTimer;
	double                                        VisbilityLevel;
	double                                        WalkVisMultiplier;
	double                                        SprintVisMultiplier;
	double                                        MinFriendlyOpacity;
	double                                        InteractVisibility;
	struct FScalableFloat                         DataDuration;
	struct FScalableFloat                         DataTellDuration;
	struct FScalableFloat                         DataWalkVisMult;
	struct FScalableFloat                         DataSprintVisMult;
	struct FScalableFloat                         DataFriendlyVisMult;
	struct FScalableFloat                         DataShadowPlaneOpacity;
	class UTimelineComponent*                     FadeInOut;
	bool                                          TickENabled;
	uint8                                         Pad_AE9[0x7];
	struct FScalableFloat                         SmokeBombDuration;
	double                                        TellDuration;
	double                                        ExpireTellOpacity;
	double                                        SmokeBombDurationUserSpecified;

public:
	void Audio_Tick();
	void BeginExpireTell();
	void ClearExpireTell();
	void EndedInteract();
	void ExecuteUbergraph_GCN_Loop_Shadow_Bomb(int32 EntryPoint);
	void ExpireWarningTick();
	void GetSkeletalMeshes();
	void OnFinishedCharacterCustomization_Bind(class AFortPlayerPawn* Pawn);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnWeaponEquippedDelegate_Event_0(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void ReceiveTick(float DeltaSeconds);
	void StartedInteract();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void UnbindEquippedWeapon();
	void UpdateTeamVisbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_Shadow_Bomb_C">();
	}
	static class AGCN_Loop_Shadow_Bomb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_Shadow_Bomb_C>();
	}
};
static_assert(alignof(AGCN_Loop_Shadow_Bomb_C) == 0x000008, "Wrong alignment on AGCN_Loop_Shadow_Bomb_C");
static_assert(sizeof(AGCN_Loop_Shadow_Bomb_C) == 0x000B30, "Wrong size on AGCN_Loop_Shadow_Bomb_C");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, UberGraphFrame) == 0x000960, "Member 'AGCN_Loop_Shadow_Bomb_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, Timeline_0_Visbility_E1DFEC9547FE3FAED2AFF3B0D8598182) == 0x000968, "Member 'AGCN_Loop_Shadow_Bomb_C::Timeline_0_Visbility_E1DFEC9547FE3FAED2AFF3B0D8598182' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, Timeline_0__Direction_E1DFEC9547FE3FAED2AFF3B0D8598182) == 0x00096C, "Member 'AGCN_Loop_Shadow_Bomb_C::Timeline_0__Direction_E1DFEC9547FE3FAED2AFF3B0D8598182' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, Timeline_0) == 0x000970, "Member 'AGCN_Loop_Shadow_Bomb_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, TargetPlayer) == 0x000978, "Member 'AGCN_Loop_Shadow_Bomb_C::TargetPlayer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, ExpirationSoundPeriod) == 0x000980, "Member 'AGCN_Loop_Shadow_Bomb_C::ExpirationSoundPeriod' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, VelocityInterp) == 0x000988, "Member 'AGCN_Loop_Shadow_Bomb_C::VelocityInterp' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, AttachedFX) == 0x000990, "Member 'AGCN_Loop_Shadow_Bomb_C::AttachedFX' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, PlayerSkeletalMeshes) == 0x0009A0, "Member 'AGCN_Loop_Shadow_Bomb_C::PlayerSkeletalMeshes' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, FriendlyPlayer) == 0x0009B0, "Member 'AGCN_Loop_Shadow_Bomb_C::FriendlyPlayer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, ExpireTellDelayTimer) == 0x0009B8, "Member 'AGCN_Loop_Shadow_Bomb_C::ExpireTellDelayTimer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, ExpirationSoundTimer) == 0x0009C0, "Member 'AGCN_Loop_Shadow_Bomb_C::ExpirationSoundTimer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, VisbilityLevel) == 0x0009C8, "Member 'AGCN_Loop_Shadow_Bomb_C::VisbilityLevel' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, WalkVisMultiplier) == 0x0009D0, "Member 'AGCN_Loop_Shadow_Bomb_C::WalkVisMultiplier' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, SprintVisMultiplier) == 0x0009D8, "Member 'AGCN_Loop_Shadow_Bomb_C::SprintVisMultiplier' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, MinFriendlyOpacity) == 0x0009E0, "Member 'AGCN_Loop_Shadow_Bomb_C::MinFriendlyOpacity' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, InteractVisibility) == 0x0009E8, "Member 'AGCN_Loop_Shadow_Bomb_C::InteractVisibility' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, DataDuration) == 0x0009F0, "Member 'AGCN_Loop_Shadow_Bomb_C::DataDuration' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, DataTellDuration) == 0x000A18, "Member 'AGCN_Loop_Shadow_Bomb_C::DataTellDuration' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, DataWalkVisMult) == 0x000A40, "Member 'AGCN_Loop_Shadow_Bomb_C::DataWalkVisMult' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, DataSprintVisMult) == 0x000A68, "Member 'AGCN_Loop_Shadow_Bomb_C::DataSprintVisMult' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, DataFriendlyVisMult) == 0x000A90, "Member 'AGCN_Loop_Shadow_Bomb_C::DataFriendlyVisMult' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, DataShadowPlaneOpacity) == 0x000AB8, "Member 'AGCN_Loop_Shadow_Bomb_C::DataShadowPlaneOpacity' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, FadeInOut) == 0x000AE0, "Member 'AGCN_Loop_Shadow_Bomb_C::FadeInOut' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, TickENabled) == 0x000AE8, "Member 'AGCN_Loop_Shadow_Bomb_C::TickENabled' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, SmokeBombDuration) == 0x000AF0, "Member 'AGCN_Loop_Shadow_Bomb_C::SmokeBombDuration' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, TellDuration) == 0x000B18, "Member 'AGCN_Loop_Shadow_Bomb_C::TellDuration' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, ExpireTellOpacity) == 0x000B20, "Member 'AGCN_Loop_Shadow_Bomb_C::ExpireTellOpacity' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Shadow_Bomb_C, SmokeBombDurationUserSpecified) == 0x000B28, "Member 'AGCN_Loop_Shadow_Bomb_C::SmokeBombDurationUserSpecified' has a wrong offset!");

}
