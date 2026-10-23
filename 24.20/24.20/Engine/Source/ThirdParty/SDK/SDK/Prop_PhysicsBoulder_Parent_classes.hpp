#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class AProp_PhysicsBoulder_Parent_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UFortSoundIndicatorComponent*           Sound_Indicator;
	struct FVector                                LastImpactNormal;
	struct FScalableFloat                         VerticalImpulseRatio;
	double                                        NextPotentialLaunchTime;
	double                                        LaunchDelay;
	TArray<struct FScalableFloat>                 PlayerImpactTiers;
	TArray<struct FScalableFloat>                 PlayerImpulseTiers;

public:
	void ComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_Prop_PhysicsBoulder_Parent(int32 EntryPoint);
	void GetPlayerImpulseVelocityFromImpactVelocity(double Impact, bool* Minimum_Met, double* Impulse);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Prop_PhysicsBoulder_Parent_C">();
	}
	static class AProp_PhysicsBoulder_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_PhysicsBoulder_Parent_C>();
	}
};
static_assert(alignof(AProp_PhysicsBoulder_Parent_C) == 0x000008, "Wrong alignment on AProp_PhysicsBoulder_Parent_C");
static_assert(sizeof(AProp_PhysicsBoulder_Parent_C) == 0x000F78, "Wrong size on AProp_PhysicsBoulder_Parent_C");
static_assert(offsetof(AProp_PhysicsBoulder_Parent_C, UberGraphFrame) == 0x000EF8, "Member 'AProp_PhysicsBoulder_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AProp_PhysicsBoulder_Parent_C, Sound_Indicator) == 0x000F00, "Member 'AProp_PhysicsBoulder_Parent_C::Sound_Indicator' has a wrong offset!");
static_assert(offsetof(AProp_PhysicsBoulder_Parent_C, LastImpactNormal) == 0x000F08, "Member 'AProp_PhysicsBoulder_Parent_C::LastImpactNormal' has a wrong offset!");
static_assert(offsetof(AProp_PhysicsBoulder_Parent_C, VerticalImpulseRatio) == 0x000F20, "Member 'AProp_PhysicsBoulder_Parent_C::VerticalImpulseRatio' has a wrong offset!");
static_assert(offsetof(AProp_PhysicsBoulder_Parent_C, NextPotentialLaunchTime) == 0x000F48, "Member 'AProp_PhysicsBoulder_Parent_C::NextPotentialLaunchTime' has a wrong offset!");
static_assert(offsetof(AProp_PhysicsBoulder_Parent_C, LaunchDelay) == 0x000F50, "Member 'AProp_PhysicsBoulder_Parent_C::LaunchDelay' has a wrong offset!");
static_assert(offsetof(AProp_PhysicsBoulder_Parent_C, PlayerImpactTiers) == 0x000F58, "Member 'AProp_PhysicsBoulder_Parent_C::PlayerImpactTiers' has a wrong offset!");
static_assert(offsetof(AProp_PhysicsBoulder_Parent_C, PlayerImpulseTiers) == 0x000F68, "Member 'AProp_PhysicsBoulder_Parent_C::PlayerImpulseTiers' has a wrong offset!");

}
