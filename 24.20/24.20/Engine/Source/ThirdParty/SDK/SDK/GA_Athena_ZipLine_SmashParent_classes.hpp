#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UGA_Athena_ZipLine_SmashParent_C : public UFortGameplayAbility_ZiplineSmashBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;
	double                                        UpdateIntervalForSmashVolume;
	class UClass*                                 StructureDamageGE;
	class ABP_ZipLine_Athena_Harness_C*           ZiplineHarness;
	class AFortAthenaZipline*                     Zipline;
	class UPrimitiveComponent*                    ZiplineInteractComponent;
	EFortCustomMovement                           DrivingCustomMovementMode;
	uint8                                         Pad_B79[0x3];
	struct FActiveGameplayEffectHandle            FallImmunityGEFX;
	struct FGameplayTag                           AttachVFXCue;
	struct FGameplayTag                           SmashCue;
	struct FGameplayTag                           T_Swimming;
	struct FGameplayTag                           T_Falling;
	uint8                                         Pad_B94[0x4];
	struct FGameplayTagContainer                  TagsThatBlockFallImmunityRemoval;
	struct FTimerHandle                           TH_DelayFallDamageRemoval;
	struct FTimerHandle                           SurroundingsCheckTimerHandle;
	struct FGameplayTag                           ZiplineExitTag;
	uint8                                         Pad_BCC[0x4];
	struct FVector                                Smash_Box_Extent;
	double                                        SmashBoxPosAdditionalZ;

public:
	void Added_5A9C02A9480D39B213A8AC81767C7A76();
	void BindEvent();
	void BreakNearbyStructures(class AFortPlayerPawn* PlayerPawn_0);
	void CheckForQuestProgress();
	void CheckMotor();
	void DelaySpawnMotor();
	void EndAsyncBreakNearbyStructuresOverlap(const TArray<class AActor*>& OverlapActors);
	void EnterWaterExit(class AFortPlayerPawn* FortPlayerPawn);
	void ExecuteUbergraph_GA_Athena_ZipLine_SmashParent(int32 EntryPoint);
	void FallingTagRemoved();
	void GameplayEvent_ZiplineEnter_BeginZiplining();
	void GameplayTagEvent_ZiplineEnter(const struct FGameplayEventData& EventData);
	void GameplayTagEvent_ZiplineExit(const struct FGameplayEventData& EventData);
	void Get_Zipline_Motor_Offset(struct FVector* Offset);
	void Get_Zipline_Pole_A_Socket_Loc(struct FVector* PoleBSocketLoc);
	void Get_Zipline_Pole_B_Socket_Loc(struct FVector* PoleBSocketLoc);
	void GetZiplineRotationForMotor(struct FRotator* Rotation);
	void HandleClientSplineZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* Pawn);
	void HandleGameplayEventTag(const struct FGameplayEventData& EventData);
	void HandleZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* Pawn);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnBeginSkydiving_Bind();
	void OnEnteredAircraft_Bind();
	void OnEnterVehicle_Bind();
	void OnPawnDied(const class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnPawnLanded_Bind(const struct FHitResult& Hit);
	void Pre_BeginZiplinging();
	void Remove_Fall_Damage_Immunity_Delayed();
	void Removed_A0F18316443E5C5267615C9692274B36();
	void RemoveFallDamageImmunity();
	void Spawn_Motor(class AActor* PlayerPawn_0);
	void SplineZiplineMovementModeDelayOver();
	void StartSurroundingsCheck();
	void SurroundingsCheck();
	void SurroundingsCheck_MotorCheck();
	void SurroundingsCheck_SmashObjects();
	void SurruondingsCheck_VehicleCheck();
	void SwimmingStarted();
	void ZiplinePostBegin_Event();
	void ZipliningComplete();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_ZipLine_SmashParent_C">();
	}
	static class UGA_Athena_ZipLine_SmashParent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_ZipLine_SmashParent_C>();
	}
};
static_assert(alignof(UGA_Athena_ZipLine_SmashParent_C) == 0x000008, "Wrong alignment on UGA_Athena_ZipLine_SmashParent_C");
static_assert(sizeof(UGA_Athena_ZipLine_SmashParent_C) == 0x000BF0, "Wrong size on UGA_Athena_ZipLine_SmashParent_C");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, UberGraphFrame) == 0x000B40, "Member 'UGA_Athena_ZipLine_SmashParent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, PlayerPawn) == 0x000B48, "Member 'UGA_Athena_ZipLine_SmashParent_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, UpdateIntervalForSmashVolume) == 0x000B50, "Member 'UGA_Athena_ZipLine_SmashParent_C::UpdateIntervalForSmashVolume' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, StructureDamageGE) == 0x000B58, "Member 'UGA_Athena_ZipLine_SmashParent_C::StructureDamageGE' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, ZiplineHarness) == 0x000B60, "Member 'UGA_Athena_ZipLine_SmashParent_C::ZiplineHarness' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, Zipline) == 0x000B68, "Member 'UGA_Athena_ZipLine_SmashParent_C::Zipline' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, ZiplineInteractComponent) == 0x000B70, "Member 'UGA_Athena_ZipLine_SmashParent_C::ZiplineInteractComponent' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, DrivingCustomMovementMode) == 0x000B78, "Member 'UGA_Athena_ZipLine_SmashParent_C::DrivingCustomMovementMode' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, FallImmunityGEFX) == 0x000B7C, "Member 'UGA_Athena_ZipLine_SmashParent_C::FallImmunityGEFX' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, AttachVFXCue) == 0x000B84, "Member 'UGA_Athena_ZipLine_SmashParent_C::AttachVFXCue' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, SmashCue) == 0x000B88, "Member 'UGA_Athena_ZipLine_SmashParent_C::SmashCue' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, T_Swimming) == 0x000B8C, "Member 'UGA_Athena_ZipLine_SmashParent_C::T_Swimming' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, T_Falling) == 0x000B90, "Member 'UGA_Athena_ZipLine_SmashParent_C::T_Falling' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, TagsThatBlockFallImmunityRemoval) == 0x000B98, "Member 'UGA_Athena_ZipLine_SmashParent_C::TagsThatBlockFallImmunityRemoval' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, TH_DelayFallDamageRemoval) == 0x000BB8, "Member 'UGA_Athena_ZipLine_SmashParent_C::TH_DelayFallDamageRemoval' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, SurroundingsCheckTimerHandle) == 0x000BC0, "Member 'UGA_Athena_ZipLine_SmashParent_C::SurroundingsCheckTimerHandle' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, ZiplineExitTag) == 0x000BC8, "Member 'UGA_Athena_ZipLine_SmashParent_C::ZiplineExitTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, Smash_Box_Extent) == 0x000BD0, "Member 'UGA_Athena_ZipLine_SmashParent_C::Smash_Box_Extent' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_SmashParent_C, SmashBoxPosAdditionalZ) == 0x000BE8, "Member 'UGA_Athena_ZipLine_SmashParent_C::SmashBoxPosAdditionalZ' has a wrong offset!");

}
