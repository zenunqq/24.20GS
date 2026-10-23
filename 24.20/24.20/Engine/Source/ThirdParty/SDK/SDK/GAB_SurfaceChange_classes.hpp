#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UGAB_SurfaceChange_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	bool                                          Debug;
	uint8                                         Pad_B31[0x7];
	struct FScalableFloat                         RemovalDelay;
	struct FScalableFloat                         IcySurfacesEnabled;
	struct FGameplayTagContainer                  HasIce;
	class UClass*                                 GE_SurfaceChange_Ice;
	class UClass*                                 GE_SurfaceChange_Snow;
	class UClass*                                 GE_SurfaceChange_Lava;
	class AFortPawn*                              AvatarPawn;
	struct FGameplayTagContainer                  IceTags;
	struct FGameplayTagContainer                  LavaTags;
	struct FGameplayTagContainer                  SnowTags;
	struct FGameplayTagContainer                  SandTags;
	struct FGameplayTagContainer                  ChromeTags;
	double                                        LavaBounceMultiplier;
	double                                        RandomAngleOffset;
	struct FScalableFloat                         RandomConeAngle;
	struct FScalableFloat                         FacingAngleVelocityComponent;
	struct FScalableFloat                         BaseVerticalBounceVelocity;
	struct FScalableFloat                         BaseLateralBounceVelocity;
	struct FScalableFloat                         MaxBounceMultiplier;
	struct FScalableFloat                         BounceMultiplierStepAmount;
	struct FRandomStream                          RandomAngleStream;
	struct FGameplayTag                           LavaBounceCue;
	struct FGameplayTag                           EventTag_SandUnburrow;
	struct FScalableFloat                         IceLingerDuration;
	struct FGameplayTagContainer                  PreviousSurfaceTagContainer;

public:
	void ExecuteUbergraph_GAB_SurfaceChange(int32 EntryPoint);
	void GamePhaseChanged(EAthenaGamePhase GamePhase);
	void HotfixableGEApplication(const struct FScalableFloat& Input, class UClass* GameplayEffectAppliedOnTrue, class UClass* GameplayEffectAppliedOnFalse, struct FActiveGameplayEffectHandle* GE_Handle);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void LavaBounce();
	void MovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnRep_ReplicatedRandomAngle();
	void SurfaceCleanup(bool AddLingeringEffects, EPhysicalSurface SurfaceType);
	void SurfaceCleanupSpecial();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_SurfaceChange_C">();
	}
	static class UGAB_SurfaceChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_SurfaceChange_C>();
	}
};
static_assert(alignof(UGAB_SurfaceChange_C) == 0x000008, "Wrong alignment on UGAB_SurfaceChange_C");
static_assert(sizeof(UGAB_SurfaceChange_C) == 0x000DC0, "Wrong size on UGAB_SurfaceChange_C");
static_assert(offsetof(UGAB_SurfaceChange_C, UberGraphFrame) == 0x000B28, "Member 'UGAB_SurfaceChange_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, Debug) == 0x000B30, "Member 'UGAB_SurfaceChange_C::Debug' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, RemovalDelay) == 0x000B38, "Member 'UGAB_SurfaceChange_C::RemovalDelay' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, IcySurfacesEnabled) == 0x000B60, "Member 'UGAB_SurfaceChange_C::IcySurfacesEnabled' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, HasIce) == 0x000B88, "Member 'UGAB_SurfaceChange_C::HasIce' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, GE_SurfaceChange_Ice) == 0x000BA8, "Member 'UGAB_SurfaceChange_C::GE_SurfaceChange_Ice' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, GE_SurfaceChange_Snow) == 0x000BB0, "Member 'UGAB_SurfaceChange_C::GE_SurfaceChange_Snow' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, GE_SurfaceChange_Lava) == 0x000BB8, "Member 'UGAB_SurfaceChange_C::GE_SurfaceChange_Lava' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, AvatarPawn) == 0x000BC0, "Member 'UGAB_SurfaceChange_C::AvatarPawn' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, IceTags) == 0x000BC8, "Member 'UGAB_SurfaceChange_C::IceTags' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, LavaTags) == 0x000BE8, "Member 'UGAB_SurfaceChange_C::LavaTags' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, SnowTags) == 0x000C08, "Member 'UGAB_SurfaceChange_C::SnowTags' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, SandTags) == 0x000C28, "Member 'UGAB_SurfaceChange_C::SandTags' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, ChromeTags) == 0x000C48, "Member 'UGAB_SurfaceChange_C::ChromeTags' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, LavaBounceMultiplier) == 0x000C68, "Member 'UGAB_SurfaceChange_C::LavaBounceMultiplier' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, RandomAngleOffset) == 0x000C70, "Member 'UGAB_SurfaceChange_C::RandomAngleOffset' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, RandomConeAngle) == 0x000C78, "Member 'UGAB_SurfaceChange_C::RandomConeAngle' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, FacingAngleVelocityComponent) == 0x000CA0, "Member 'UGAB_SurfaceChange_C::FacingAngleVelocityComponent' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, BaseVerticalBounceVelocity) == 0x000CC8, "Member 'UGAB_SurfaceChange_C::BaseVerticalBounceVelocity' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, BaseLateralBounceVelocity) == 0x000CF0, "Member 'UGAB_SurfaceChange_C::BaseLateralBounceVelocity' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, MaxBounceMultiplier) == 0x000D18, "Member 'UGAB_SurfaceChange_C::MaxBounceMultiplier' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, BounceMultiplierStepAmount) == 0x000D40, "Member 'UGAB_SurfaceChange_C::BounceMultiplierStepAmount' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, RandomAngleStream) == 0x000D68, "Member 'UGAB_SurfaceChange_C::RandomAngleStream' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, LavaBounceCue) == 0x000D70, "Member 'UGAB_SurfaceChange_C::LavaBounceCue' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, EventTag_SandUnburrow) == 0x000D74, "Member 'UGAB_SurfaceChange_C::EventTag_SandUnburrow' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, IceLingerDuration) == 0x000D78, "Member 'UGAB_SurfaceChange_C::IceLingerDuration' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, PreviousSurfaceTagContainer) == 0x000DA0, "Member 'UGAB_SurfaceChange_C::PreviousSurfaceTagContainer' has a wrong offset!");

}
