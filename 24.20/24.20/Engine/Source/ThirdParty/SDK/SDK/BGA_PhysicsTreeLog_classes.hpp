#pragma once

#include "Basic.hpp"

#include "FluidForceDynamic_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class ABGA_PhysicsTreeLog_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UNiagaraComponent*                      NS_Physics_Tree_InWater_Ripples;
	class UFortSoundIndicatorComponent*           FortSoundIndicator;
	class UCapsuleComponent*                      WaterInteractMiddle;
	class UCapsuleComponent*                      WaterInteractBottom;
	class UCapsuleComponent*                      WaterInteractTop;
	class UNiagaraComponent*                      NS_Physics_Tree_Environment_Impact;
	TArray<struct FScalableFloat>                 PlayerImpactTiers;
	TArray<struct FScalableFloat>                 PlayerImpulseTiers;
	struct FVector                                LastImpactNormal;
	struct FScalableFloat                         VerticalImpulseRatio;
	class UBuoyancyComponent*                     BuoyancyComponent;
	double                                        NextImminentCollisionTime;
	double                                        TimeBetweenImminentCollisions;
	class UMaterialInstanceDynamic*               MatReference;
	double                                        BreakTreeDamage;
	double                                        NextPotentialLaunchTime;
	double                                        LaunchDelay;
	struct FGameplayTag                           TreeDestructionBurstCue;
	uint8                                         Pad_FCC[0x4];
	struct FTransform                             TreeDestructionTransform;
	int32                                         CachedDamageValue;
	uint8                                         Pad_1034[0x4];
	double                                        SnowTimerValue;
	struct FTimerHandle                           SnowRemovalTimerHandle;
	class UFXSystemComponent*                     WaterFxPhysicsTreeMiddle;
	TArray<class UFXSystemComponent*>             FxSystemArray;
	double                                        WaterFxPlaneDepth;
	struct FVector                                WaterFxPlaneLocation;
	int32                                         WaterFxIndex;
	uint8                                         Pad_1084[0x4];
	class UFXSystemComponent*                     WaterFxPhysicsTreeTop;
	class UFXSystemComponent*                     WaterFxPhysicsTreeBottom;
	struct FTimerHandle                           WaterSurfaceInfoTimer;
	struct FVector                                WaterFxPlaneNormal;
	class ABP_FluidSim_FN_C*                      FluidSim;
	TMap<class FName, class FName>                Sockets_And_Endpoints;
	struct FFluidForceDynamic                     Fluid_Force_Dynamic;
	double                                        LogLength;
	bool                                          CanPlayDeathEffects;
	uint8                                         Pad_1189[0x7];
	struct FScalableFloat                         bSplitWhenCutBySaber;

public:
	void AdjustWaterSettings();
	void AwakeStateChanged(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake);
	void CalculateSplitOffset(bool bSmallSide, double SplitPercentage, double* LocalZOffset);
	void CalculateSplitScale(bool bSmallSide, double SplitPercentage, double* SplitScale);
	void CE_SplashInWater(const struct FVector& SplashLocation);
	void Control2dSimForces();
	void ExecuteUbergraph_BGA_PhysicsTreeLog(int32 EntryPoint);
	class AB_PhysicsTree_Reporter_C* GetAnalyticsReporterActor(bool* Success);
	void GetPlayerImpulseVelocityFromImpactVelocity(double Impact, bool* Minimum_Met, double* Impulse);
	void LogDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnComponentHit_Event_0(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon);
	void OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon);
	void OnRep_BreakTreeDamage();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void RemoveSnow();
	void ReportTreeFellingToAnalytics(class AActor* FelledBy);
	void Update_Water_FX();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_PhysicsTreeLog_C">();
	}
	static class ABGA_PhysicsTreeLog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_PhysicsTreeLog_C>();
	}
};
static_assert(alignof(ABGA_PhysicsTreeLog_C) == 0x000010, "Wrong alignment on ABGA_PhysicsTreeLog_C");
static_assert(sizeof(ABGA_PhysicsTreeLog_C) == 0x0011C0, "Wrong size on ABGA_PhysicsTreeLog_C");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, UberGraphFrame) == 0x000EF8, "Member 'ABGA_PhysicsTreeLog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, NS_Physics_Tree_InWater_Ripples) == 0x000F00, "Member 'ABGA_PhysicsTreeLog_C::NS_Physics_Tree_InWater_Ripples' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, FortSoundIndicator) == 0x000F08, "Member 'ABGA_PhysicsTreeLog_C::FortSoundIndicator' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, WaterInteractMiddle) == 0x000F10, "Member 'ABGA_PhysicsTreeLog_C::WaterInteractMiddle' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, WaterInteractBottom) == 0x000F18, "Member 'ABGA_PhysicsTreeLog_C::WaterInteractBottom' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, WaterInteractTop) == 0x000F20, "Member 'ABGA_PhysicsTreeLog_C::WaterInteractTop' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, NS_Physics_Tree_Environment_Impact) == 0x000F28, "Member 'ABGA_PhysicsTreeLog_C::NS_Physics_Tree_Environment_Impact' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, PlayerImpactTiers) == 0x000F30, "Member 'ABGA_PhysicsTreeLog_C::PlayerImpactTiers' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, PlayerImpulseTiers) == 0x000F40, "Member 'ABGA_PhysicsTreeLog_C::PlayerImpulseTiers' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, LastImpactNormal) == 0x000F50, "Member 'ABGA_PhysicsTreeLog_C::LastImpactNormal' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, VerticalImpulseRatio) == 0x000F68, "Member 'ABGA_PhysicsTreeLog_C::VerticalImpulseRatio' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, BuoyancyComponent) == 0x000F90, "Member 'ABGA_PhysicsTreeLog_C::BuoyancyComponent' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, NextImminentCollisionTime) == 0x000F98, "Member 'ABGA_PhysicsTreeLog_C::NextImminentCollisionTime' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, TimeBetweenImminentCollisions) == 0x000FA0, "Member 'ABGA_PhysicsTreeLog_C::TimeBetweenImminentCollisions' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, MatReference) == 0x000FA8, "Member 'ABGA_PhysicsTreeLog_C::MatReference' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, BreakTreeDamage) == 0x000FB0, "Member 'ABGA_PhysicsTreeLog_C::BreakTreeDamage' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, NextPotentialLaunchTime) == 0x000FB8, "Member 'ABGA_PhysicsTreeLog_C::NextPotentialLaunchTime' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, LaunchDelay) == 0x000FC0, "Member 'ABGA_PhysicsTreeLog_C::LaunchDelay' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, TreeDestructionBurstCue) == 0x000FC8, "Member 'ABGA_PhysicsTreeLog_C::TreeDestructionBurstCue' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, TreeDestructionTransform) == 0x000FD0, "Member 'ABGA_PhysicsTreeLog_C::TreeDestructionTransform' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, CachedDamageValue) == 0x001030, "Member 'ABGA_PhysicsTreeLog_C::CachedDamageValue' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, SnowTimerValue) == 0x001038, "Member 'ABGA_PhysicsTreeLog_C::SnowTimerValue' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, SnowRemovalTimerHandle) == 0x001040, "Member 'ABGA_PhysicsTreeLog_C::SnowRemovalTimerHandle' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, WaterFxPhysicsTreeMiddle) == 0x001048, "Member 'ABGA_PhysicsTreeLog_C::WaterFxPhysicsTreeMiddle' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, FxSystemArray) == 0x001050, "Member 'ABGA_PhysicsTreeLog_C::FxSystemArray' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, WaterFxPlaneDepth) == 0x001060, "Member 'ABGA_PhysicsTreeLog_C::WaterFxPlaneDepth' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, WaterFxPlaneLocation) == 0x001068, "Member 'ABGA_PhysicsTreeLog_C::WaterFxPlaneLocation' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, WaterFxIndex) == 0x001080, "Member 'ABGA_PhysicsTreeLog_C::WaterFxIndex' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, WaterFxPhysicsTreeTop) == 0x001088, "Member 'ABGA_PhysicsTreeLog_C::WaterFxPhysicsTreeTop' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, WaterFxPhysicsTreeBottom) == 0x001090, "Member 'ABGA_PhysicsTreeLog_C::WaterFxPhysicsTreeBottom' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, WaterSurfaceInfoTimer) == 0x001098, "Member 'ABGA_PhysicsTreeLog_C::WaterSurfaceInfoTimer' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, WaterFxPlaneNormal) == 0x0010A0, "Member 'ABGA_PhysicsTreeLog_C::WaterFxPlaneNormal' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, FluidSim) == 0x0010B8, "Member 'ABGA_PhysicsTreeLog_C::FluidSim' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, Sockets_And_Endpoints) == 0x0010C0, "Member 'ABGA_PhysicsTreeLog_C::Sockets_And_Endpoints' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, Fluid_Force_Dynamic) == 0x001110, "Member 'ABGA_PhysicsTreeLog_C::Fluid_Force_Dynamic' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, LogLength) == 0x001180, "Member 'ABGA_PhysicsTreeLog_C::LogLength' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, CanPlayDeathEffects) == 0x001188, "Member 'ABGA_PhysicsTreeLog_C::CanPlayDeathEffects' has a wrong offset!");
static_assert(offsetof(ABGA_PhysicsTreeLog_C, bSplitWhenCutBySaber) == 0x001190, "Member 'ABGA_PhysicsTreeLog_C::bSplitWhenCutBySaber' has a wrong offset!");

}
