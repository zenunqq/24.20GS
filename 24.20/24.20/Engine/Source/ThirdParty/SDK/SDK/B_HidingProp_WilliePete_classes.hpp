#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "B_HidingProp_classes.hpp"

namespace SDK
{

class AB_HidingProp_WilliePete_C final : public AB_HidingProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_HidingProp_WilliePete_C;
	class UStaticMeshComponent*                   overlapCylinder;
	class UAudioComponent*                        WilliePete_Ambient_Loop;
	class UStaticMeshComponent*                   Geyser;
	class UStaticMeshComponent*                   S_Whirlpool_01;
	class UParticleSystemComponent*               P_WilliePete_SurfaceVerticalSplash;
	class UFortProjectileMovementComponent*       OverlappedFortProjectileMovementComponent;
	class UProjectileMovementComponent*           OverlappedStandardProjectileMovementComponent;
	class AActor*                                 TeleportingNonPawn;
	struct FHitResult                             SphereOverlapResult;
	double                                        ProjectileSpeedCeiling;
	struct FRotator                               ProjectileExitFVectorRotation;
	int32                                         WaterLevel;
	struct FGameplayTag                           GC_Exit;
	struct FGameplayTag                           GC_Enter;
	uint8                                         Pad_1554[0x4];
	struct FScalableFloat                         EnabledValue;
	struct FScalableFloat                         LaunchHeightValue;
	class AFortPlayerPawnAthena*                  LaunchPawn;
	struct FActiveGameplayEffectHandle            LaunchGrantedEffectHandle;
	struct FGameplayTagContainer                  T_Quest;
	class UClass*                                 SpawnedWaterBody;
	struct FGameplayTag                           GC_ScreenFX;
	bool                                          isOnTestMap;
	uint8                                         Pad_15E5[0x3];
	class USoundBase*                             Launch_Sound;
	struct FVector                                AdjustedLocation;
	bool                                          skipAnimForLaunch;
	uint8                                         Pad_1609[0x7];
	class AFortPlayerPawnAthena*                  ExitingPawn;
	class UMovementComponent*                     OverlappedMovementComponent;
	double                                        ProjectileSpeedMult;
	double                                        PickupSpeedMult;
	bool                                          bSetSilentDie;
	bool                                          bSetSpawnedWaterBody;

public:
	void BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Complete_Setup();
	void ExecuteUbergraph_B_HidingProp_WilliePete(int32 EntryPoint);
	void HelperLocationLogger(const class FString& InString);
	void Non_Pawn_Actor_Destroyed(class AActor* DestroyedActor);
	void Non_Pawn_Teleport(class AActor* TeleportingActor);
	void OnReady_74044DD44988556292500EB8F289359F(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnRep_AdjustedLocation();
	void OnRep_bSetSilentDie();
	void OnRep_bSetSpawnedWaterBody();
	void ReceiveBeginPlay();
	void Remove_GE();
	void ResetGravity(const struct FHitResult& Hit);
	void StopHiding(const class AFortPawn* Pawn_0);
	void TeleportExitSpeed(const struct FVector& ExitFVector, double EnterSpeed, double OverrideSpeed, double MinimumSpeed, bool ForceSpeedOverride, struct FVector* TeleportExitVelocity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_HidingProp_WilliePete_C">();
	}
	static class AB_HidingProp_WilliePete_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_HidingProp_WilliePete_C>();
	}
};
static_assert(alignof(AB_HidingProp_WilliePete_C) == 0x000008, "Wrong alignment on AB_HidingProp_WilliePete_C");
static_assert(sizeof(AB_HidingProp_WilliePete_C) == 0x001638, "Wrong size on AB_HidingProp_WilliePete_C");
static_assert(offsetof(AB_HidingProp_WilliePete_C, UberGraphFrame_B_HidingProp_WilliePete_C) == 0x001400, "Member 'AB_HidingProp_WilliePete_C::UberGraphFrame_B_HidingProp_WilliePete_C' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, overlapCylinder) == 0x001408, "Member 'AB_HidingProp_WilliePete_C::overlapCylinder' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, WilliePete_Ambient_Loop) == 0x001410, "Member 'AB_HidingProp_WilliePete_C::WilliePete_Ambient_Loop' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, Geyser) == 0x001418, "Member 'AB_HidingProp_WilliePete_C::Geyser' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, S_Whirlpool_01) == 0x001420, "Member 'AB_HidingProp_WilliePete_C::S_Whirlpool_01' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, P_WilliePete_SurfaceVerticalSplash) == 0x001428, "Member 'AB_HidingProp_WilliePete_C::P_WilliePete_SurfaceVerticalSplash' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, OverlappedFortProjectileMovementComponent) == 0x001430, "Member 'AB_HidingProp_WilliePete_C::OverlappedFortProjectileMovementComponent' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, OverlappedStandardProjectileMovementComponent) == 0x001438, "Member 'AB_HidingProp_WilliePete_C::OverlappedStandardProjectileMovementComponent' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, TeleportingNonPawn) == 0x001440, "Member 'AB_HidingProp_WilliePete_C::TeleportingNonPawn' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, SphereOverlapResult) == 0x001448, "Member 'AB_HidingProp_WilliePete_C::SphereOverlapResult' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, ProjectileSpeedCeiling) == 0x001528, "Member 'AB_HidingProp_WilliePete_C::ProjectileSpeedCeiling' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, ProjectileExitFVectorRotation) == 0x001530, "Member 'AB_HidingProp_WilliePete_C::ProjectileExitFVectorRotation' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, WaterLevel) == 0x001548, "Member 'AB_HidingProp_WilliePete_C::WaterLevel' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, GC_Exit) == 0x00154C, "Member 'AB_HidingProp_WilliePete_C::GC_Exit' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, GC_Enter) == 0x001550, "Member 'AB_HidingProp_WilliePete_C::GC_Enter' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, EnabledValue) == 0x001558, "Member 'AB_HidingProp_WilliePete_C::EnabledValue' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, LaunchHeightValue) == 0x001580, "Member 'AB_HidingProp_WilliePete_C::LaunchHeightValue' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, LaunchPawn) == 0x0015A8, "Member 'AB_HidingProp_WilliePete_C::LaunchPawn' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, LaunchGrantedEffectHandle) == 0x0015B0, "Member 'AB_HidingProp_WilliePete_C::LaunchGrantedEffectHandle' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, T_Quest) == 0x0015B8, "Member 'AB_HidingProp_WilliePete_C::T_Quest' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, SpawnedWaterBody) == 0x0015D8, "Member 'AB_HidingProp_WilliePete_C::SpawnedWaterBody' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, GC_ScreenFX) == 0x0015E0, "Member 'AB_HidingProp_WilliePete_C::GC_ScreenFX' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, isOnTestMap) == 0x0015E4, "Member 'AB_HidingProp_WilliePete_C::isOnTestMap' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, Launch_Sound) == 0x0015E8, "Member 'AB_HidingProp_WilliePete_C::Launch_Sound' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, AdjustedLocation) == 0x0015F0, "Member 'AB_HidingProp_WilliePete_C::AdjustedLocation' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, skipAnimForLaunch) == 0x001608, "Member 'AB_HidingProp_WilliePete_C::skipAnimForLaunch' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, ExitingPawn) == 0x001610, "Member 'AB_HidingProp_WilliePete_C::ExitingPawn' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, OverlappedMovementComponent) == 0x001618, "Member 'AB_HidingProp_WilliePete_C::OverlappedMovementComponent' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, ProjectileSpeedMult) == 0x001620, "Member 'AB_HidingProp_WilliePete_C::ProjectileSpeedMult' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, PickupSpeedMult) == 0x001628, "Member 'AB_HidingProp_WilliePete_C::PickupSpeedMult' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, bSetSilentDie) == 0x001630, "Member 'AB_HidingProp_WilliePete_C::bSetSilentDie' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_WilliePete_C, bSetSpawnedWaterBody) == 0x001631, "Member 'AB_HidingProp_WilliePete_C::bSetSpawnedWaterBody' has a wrong offset!");

}
