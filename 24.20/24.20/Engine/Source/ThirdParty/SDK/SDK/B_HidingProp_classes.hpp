#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class AB_HidingProp_C : public AFortHidingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        ProjectileLocation_ForwardVector;
	class UStaticMeshComponent*                   LandedOnCollisionMesh;
	class USphereComponent*                       Sphere;
	class USceneComponent*                        HideLocation_ForwardVector;
	float                                         Loot_MovementTimeline_Forward_0FC694AE4A45D691CB6BD5A8CD00E521;
	float                                         Loot_MovementTimeline_Z_0FC694AE4A45D691CB6BD5A8CD00E521;
	ETimelineDirection                            Loot_MovementTimeline__Direction_0FC694AE4A45D691CB6BD5A8CD00E521;
	uint8                                         Pad_F81[0x7];
	class UTimelineComponent*                     Loot_MovementTimeline;
	struct FScalableFloat                         Enabled;
	struct FScalableFloat                         HidingEnabled;
	struct FScalableFloat                         PlayerLimit;
	struct FScalableFloat                         TeleportEnabled;
	struct FScalableFloat                         CanTeleport;
	TArray<class AFortPawn*>                      HidingPlayers;
	struct FGameplayTag                           EnterGameplayCue;
	struct FGameplayTag                           ExitGameplayCue;
	struct FGameplayTag                           LandedOnGameplayCue;
	uint8                                         Pad_1074[0x4];
	class UMaterialInstanceDynamic*               Mid;
	struct FGameplayTag                           RustleGameplayCue;
	struct FGameplayTag                           ExitGameplayCue_Player;
	struct FGameplayTag                           WhileEnteringGameplayCue;
	uint8                                         Pad_108C[0x4];
	double                                        ObstructionTraceLength;
	TArray<EObjectTypeQuery>                      DestroyObjectTypes;
	TArray<class AFortPawn*>                      Array;
	int32                                         Int;
	uint8                                         Pad_10BC[0x4];
	struct FVector                                DeimosPropSpawnerOffset;
	bool                                          FixedEntranceDirection;
	uint8                                         Pad_10D9[0x7];
	double                                        MaxInteractAngle;
	struct FVector                                WobbleLocationOffset;
	double                                        InteractBelowPropDistance;
	TMap<class AFortPawn*, double>                HiddenPlayersAndEnterTimes;
	class AFortPawn*                              LastPawnToInteract;
	class AB_HidingProp_C*                        TargetTeleporter;
	struct FGameplayTag                           TeleporterEnterGameplayCue;
	struct FGameplayTag                           TeleporterExitGameplayCue;
	struct FGameplayTag                           LoopingTeleportingCue;
	struct FGameplayTag                           GC_Wobble;
	struct FTimerHandle                           WobbleTimerHandle;
	TArray<struct FGameplayTag>                   BlockEntranceTags;
	TArray<struct FGameplayTag>                   BlockExitTags;
	class UAnimMontage*                           EnterAnimMontage;
	class UAnimMontage*                           ExitAnimMontage;
	class AFortPawn*                              LastPawnToHide;
	struct FGameplayTag                           TeleportingStateGC;
	bool                                          RandomWobbleNormal;
	bool                                          SingleOccupant;
	bool                                          Teleporting;
	bool                                          JumpOut;
	class UClass*                                 GE_OnExitingPropNoJump_BlockActions;
	bool                                          DestroyInNonSpyLTM;
	bool                                          ActiveInSpyLTM;
	uint8                                         Pad_11CA[0x6];
	TArray<struct FGameplayTag>                   ForceAllowInteractTags;
	struct FGameplayTag                           IsTeleporter;
	struct FGameplayTag                           ContainsPlayerRepNof;
	struct FVector                                ObstructionTraceExtents;
	struct FVector                                ObstructionTraceStartOffSet;
	double                                        ExitLaunchVelocity;
	struct FVector                                AdditionalLaunchVelocity;
	struct FVector                                FixedEntraceObstructionTraceEndOffset;
	bool                                          isActiveTeleportExit;
	uint8                                         Pad_1251[0x7];
	class UClass*                                 GE_TeleportAbilityGranted;
	bool                                          DisableWhenSubmergedInWater;
	uint8                                         Pad_1261[0x7];
	struct FGameplayTagContainer                  DisableWhenSubmergedExceptionTags;
	TArray<class AFortPawn*>                      NonCosmeticPawns;
	class UClass*                                 CameraModifier;
	struct FVector                                NewVar_0;
	class AActor*                                 Pawn;
	struct FVector                                Loot_CachedActorForward;
	TArray<struct FVector>                        Loot_VectorOffsets;
	bool                                          SpawnedLoot;
	uint8                                         Pad_12E9[0x7];
	double                                        Loot_MoveForwardDistance;
	double                                        Loot_MoveUpDistance;
	double                                        Loot_SpawnRadius;
	struct FVector                                Loot_SpawnOffset;
	bool                                          ShouldSpawnLoot;
	uint8                                         Pad_1321[0x7];
	class FString                                 Loot_Tier_Group;
	bool                                          SetEntranceRotation;
	uint8                                         Pad_1339[0x7];
	TSubclassOf<class UGameplayEffect>            PropSpecificEffectToApplyToHiders;
	struct FScalableFloat                         RustlesPerWobble;
	struct FScalableFloat                         RustleWobbleRadius;
	struct FScalableFloat                         EnterWobbleRadius;
	double                                        NonJumpExitDistance;
	TSubclassOf<class UFortCameraMode>            Camera_Mode;
	bool                                          MoveToActorOnEnter;
	bool                                          IgnorePhysicsBodyCollisionOnEnter;
	bool                                          bCanRustleAndWobble;
	bool                                          SkipRestoreCameraViewTargetOnStopHiding;
	bool                                          SkipRootMotionMovementOnStopHiding;
	uint8                                         Pad_13D5[0x3];
	struct FRotator                               AddedSetEntranceRotation;
	double                                        MoveToActorDelayOnEnter;
	double                                        MoveToActorDurationOverride;

public:
	void AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CueParameters);
	void AddHiddenPlayer(class AFortPawn* FortPawn);
	void Allow_Cosmetics_For_Pawn(const class AFortPawn*& Pawn_0, bool* allow);
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BP_HandleExitPressed(class AFortPlayerPawn* TargetPlayerPawn);
	void Can_Hide_by_Falling(class AActor* OtherActor, bool* CanHide, class AFortPlayerPawn** aFortPlayerPawn);
	bool CheckCanUsePassage(class UObject* Object);
	void EndHidingAnalyticSession(class AFortPawn* FortPawn, EEnvironmentalItemEndReason EndReason);
	void EntranceBlockedByUndamageable(class AFortPlayerPawn* PlayerPawn);
	void ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CueParameters);
	void ExecuteUbergraph_B_HidingProp(int32 EntryPoint);
	void GetTurnClientCameraCollisionOnDelayTime(double* Delay);
	void HidingPlayerCountChanged();
	void IgnorePawnCollision(class AFortPawn* Target, const double InIgnoreDuration);
	void IgnorePhysicsCollisionDamage(class AFortPawn* Target, double Ignore_Duration);
	void InteractEnter();
	bool IsInInfiltrationLTM();
	void LandedOnHayStack(class AFortPlayerPawn* PlayerPawn, double Z_Velocity_Mag);
	void Launch_Pickups(TArray<class AFortPickup*>& Array_0, class AActor* Pawn_0);
	void LaunchPlayersOffTop(class AFortPlayerPawn* PlayerPawn);
	void Loot_MovementTimeline__FinishedFunc();
	void Loot_MovementTimeline__UpdateFunc();
	void OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnMatchStarted();
	void OnReady_64CBF02E419FF250B433D5B2A6E5D744(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnRep_ContainsPlayer();
	void OnRep_HidingPlayers();
	void OnRep_IsTeleporter();
	void OnRep_Teleporting();
	void Pawn_Died(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CueParameters);
	void RemoveHiddenPlayer(class AFortPawn* FortPawn);
	void StartHiding(class AFortPawn* InteractingPawn);
	void StopHiding(const class AFortPawn* Pawn_0);
	void StopHidingLoop();
	void Teleport(class AActor* Pawn_0);
	void ToggleCameraCollisionForClients();
	void TurnClientCameraCollisionOn();
	void WatchForPlayerDeath(class AFortPawn* FortPawn);

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	class FText BlueprintGetFailedInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	float GetMinDistanceFromInteraction() const;
	void GetPlayerLimit(int32* PlayerLimit_0) const;
	void LocalOnFailedInteract(const class AFortPlayerPawn* InteractingPawn) const;
	void Player_Getting_in_Prop(class AFortPawn* FortPawn, bool* Is_Getting_In) const;
	void Player_Hidden_in_Prop(class AFortPawn* Fort_Pawn, bool* IsHidden) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_HidingProp_C">();
	}
	static class AB_HidingProp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_HidingProp_C>();
	}
};
static_assert(alignof(AB_HidingProp_C) == 0x000008, "Wrong alignment on AB_HidingProp_C");
static_assert(sizeof(AB_HidingProp_C) == 0x001400, "Wrong size on AB_HidingProp_C");
static_assert(offsetof(AB_HidingProp_C, UberGraphFrame) == 0x000F50, "Member 'AB_HidingProp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, ProjectileLocation_ForwardVector) == 0x000F58, "Member 'AB_HidingProp_C::ProjectileLocation_ForwardVector' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, LandedOnCollisionMesh) == 0x000F60, "Member 'AB_HidingProp_C::LandedOnCollisionMesh' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Sphere) == 0x000F68, "Member 'AB_HidingProp_C::Sphere' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, HideLocation_ForwardVector) == 0x000F70, "Member 'AB_HidingProp_C::HideLocation_ForwardVector' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Loot_MovementTimeline_Forward_0FC694AE4A45D691CB6BD5A8CD00E521) == 0x000F78, "Member 'AB_HidingProp_C::Loot_MovementTimeline_Forward_0FC694AE4A45D691CB6BD5A8CD00E521' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Loot_MovementTimeline_Z_0FC694AE4A45D691CB6BD5A8CD00E521) == 0x000F7C, "Member 'AB_HidingProp_C::Loot_MovementTimeline_Z_0FC694AE4A45D691CB6BD5A8CD00E521' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Loot_MovementTimeline__Direction_0FC694AE4A45D691CB6BD5A8CD00E521) == 0x000F80, "Member 'AB_HidingProp_C::Loot_MovementTimeline__Direction_0FC694AE4A45D691CB6BD5A8CD00E521' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Loot_MovementTimeline) == 0x000F88, "Member 'AB_HidingProp_C::Loot_MovementTimeline' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Enabled) == 0x000F90, "Member 'AB_HidingProp_C::Enabled' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, HidingEnabled) == 0x000FB8, "Member 'AB_HidingProp_C::HidingEnabled' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, PlayerLimit) == 0x000FE0, "Member 'AB_HidingProp_C::PlayerLimit' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, TeleportEnabled) == 0x001008, "Member 'AB_HidingProp_C::TeleportEnabled' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, CanTeleport) == 0x001030, "Member 'AB_HidingProp_C::CanTeleport' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, HidingPlayers) == 0x001058, "Member 'AB_HidingProp_C::HidingPlayers' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, EnterGameplayCue) == 0x001068, "Member 'AB_HidingProp_C::EnterGameplayCue' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, ExitGameplayCue) == 0x00106C, "Member 'AB_HidingProp_C::ExitGameplayCue' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, LandedOnGameplayCue) == 0x001070, "Member 'AB_HidingProp_C::LandedOnGameplayCue' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Mid) == 0x001078, "Member 'AB_HidingProp_C::Mid' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, RustleGameplayCue) == 0x001080, "Member 'AB_HidingProp_C::RustleGameplayCue' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, ExitGameplayCue_Player) == 0x001084, "Member 'AB_HidingProp_C::ExitGameplayCue_Player' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, WhileEnteringGameplayCue) == 0x001088, "Member 'AB_HidingProp_C::WhileEnteringGameplayCue' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, ObstructionTraceLength) == 0x001090, "Member 'AB_HidingProp_C::ObstructionTraceLength' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, DestroyObjectTypes) == 0x001098, "Member 'AB_HidingProp_C::DestroyObjectTypes' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Array) == 0x0010A8, "Member 'AB_HidingProp_C::Array' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Int) == 0x0010B8, "Member 'AB_HidingProp_C::Int' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, DeimosPropSpawnerOffset) == 0x0010C0, "Member 'AB_HidingProp_C::DeimosPropSpawnerOffset' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, FixedEntranceDirection) == 0x0010D8, "Member 'AB_HidingProp_C::FixedEntranceDirection' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, MaxInteractAngle) == 0x0010E0, "Member 'AB_HidingProp_C::MaxInteractAngle' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, WobbleLocationOffset) == 0x0010E8, "Member 'AB_HidingProp_C::WobbleLocationOffset' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, InteractBelowPropDistance) == 0x001100, "Member 'AB_HidingProp_C::InteractBelowPropDistance' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, HiddenPlayersAndEnterTimes) == 0x001108, "Member 'AB_HidingProp_C::HiddenPlayersAndEnterTimes' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, LastPawnToInteract) == 0x001158, "Member 'AB_HidingProp_C::LastPawnToInteract' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, TargetTeleporter) == 0x001160, "Member 'AB_HidingProp_C::TargetTeleporter' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, TeleporterEnterGameplayCue) == 0x001168, "Member 'AB_HidingProp_C::TeleporterEnterGameplayCue' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, TeleporterExitGameplayCue) == 0x00116C, "Member 'AB_HidingProp_C::TeleporterExitGameplayCue' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, LoopingTeleportingCue) == 0x001170, "Member 'AB_HidingProp_C::LoopingTeleportingCue' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, GC_Wobble) == 0x001174, "Member 'AB_HidingProp_C::GC_Wobble' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, WobbleTimerHandle) == 0x001178, "Member 'AB_HidingProp_C::WobbleTimerHandle' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, BlockEntranceTags) == 0x001180, "Member 'AB_HidingProp_C::BlockEntranceTags' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, BlockExitTags) == 0x001190, "Member 'AB_HidingProp_C::BlockExitTags' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, EnterAnimMontage) == 0x0011A0, "Member 'AB_HidingProp_C::EnterAnimMontage' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, ExitAnimMontage) == 0x0011A8, "Member 'AB_HidingProp_C::ExitAnimMontage' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, LastPawnToHide) == 0x0011B0, "Member 'AB_HidingProp_C::LastPawnToHide' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, TeleportingStateGC) == 0x0011B8, "Member 'AB_HidingProp_C::TeleportingStateGC' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, RandomWobbleNormal) == 0x0011BC, "Member 'AB_HidingProp_C::RandomWobbleNormal' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, SingleOccupant) == 0x0011BD, "Member 'AB_HidingProp_C::SingleOccupant' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Teleporting) == 0x0011BE, "Member 'AB_HidingProp_C::Teleporting' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, JumpOut) == 0x0011BF, "Member 'AB_HidingProp_C::JumpOut' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, GE_OnExitingPropNoJump_BlockActions) == 0x0011C0, "Member 'AB_HidingProp_C::GE_OnExitingPropNoJump_BlockActions' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, DestroyInNonSpyLTM) == 0x0011C8, "Member 'AB_HidingProp_C::DestroyInNonSpyLTM' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, ActiveInSpyLTM) == 0x0011C9, "Member 'AB_HidingProp_C::ActiveInSpyLTM' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, ForceAllowInteractTags) == 0x0011D0, "Member 'AB_HidingProp_C::ForceAllowInteractTags' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, IsTeleporter) == 0x0011E0, "Member 'AB_HidingProp_C::IsTeleporter' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, ContainsPlayerRepNof) == 0x0011E4, "Member 'AB_HidingProp_C::ContainsPlayerRepNof' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, ObstructionTraceExtents) == 0x0011E8, "Member 'AB_HidingProp_C::ObstructionTraceExtents' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, ObstructionTraceStartOffSet) == 0x001200, "Member 'AB_HidingProp_C::ObstructionTraceStartOffSet' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, ExitLaunchVelocity) == 0x001218, "Member 'AB_HidingProp_C::ExitLaunchVelocity' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, AdditionalLaunchVelocity) == 0x001220, "Member 'AB_HidingProp_C::AdditionalLaunchVelocity' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, FixedEntraceObstructionTraceEndOffset) == 0x001238, "Member 'AB_HidingProp_C::FixedEntraceObstructionTraceEndOffset' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, isActiveTeleportExit) == 0x001250, "Member 'AB_HidingProp_C::isActiveTeleportExit' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, GE_TeleportAbilityGranted) == 0x001258, "Member 'AB_HidingProp_C::GE_TeleportAbilityGranted' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, DisableWhenSubmergedInWater) == 0x001260, "Member 'AB_HidingProp_C::DisableWhenSubmergedInWater' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, DisableWhenSubmergedExceptionTags) == 0x001268, "Member 'AB_HidingProp_C::DisableWhenSubmergedExceptionTags' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, NonCosmeticPawns) == 0x001288, "Member 'AB_HidingProp_C::NonCosmeticPawns' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, CameraModifier) == 0x001298, "Member 'AB_HidingProp_C::CameraModifier' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, NewVar_0) == 0x0012A0, "Member 'AB_HidingProp_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Pawn) == 0x0012B8, "Member 'AB_HidingProp_C::Pawn' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Loot_CachedActorForward) == 0x0012C0, "Member 'AB_HidingProp_C::Loot_CachedActorForward' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Loot_VectorOffsets) == 0x0012D8, "Member 'AB_HidingProp_C::Loot_VectorOffsets' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, SpawnedLoot) == 0x0012E8, "Member 'AB_HidingProp_C::SpawnedLoot' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Loot_MoveForwardDistance) == 0x0012F0, "Member 'AB_HidingProp_C::Loot_MoveForwardDistance' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Loot_MoveUpDistance) == 0x0012F8, "Member 'AB_HidingProp_C::Loot_MoveUpDistance' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Loot_SpawnRadius) == 0x001300, "Member 'AB_HidingProp_C::Loot_SpawnRadius' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Loot_SpawnOffset) == 0x001308, "Member 'AB_HidingProp_C::Loot_SpawnOffset' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, ShouldSpawnLoot) == 0x001320, "Member 'AB_HidingProp_C::ShouldSpawnLoot' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Loot_Tier_Group) == 0x001328, "Member 'AB_HidingProp_C::Loot_Tier_Group' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, SetEntranceRotation) == 0x001338, "Member 'AB_HidingProp_C::SetEntranceRotation' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, PropSpecificEffectToApplyToHiders) == 0x001340, "Member 'AB_HidingProp_C::PropSpecificEffectToApplyToHiders' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, RustlesPerWobble) == 0x001348, "Member 'AB_HidingProp_C::RustlesPerWobble' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, RustleWobbleRadius) == 0x001370, "Member 'AB_HidingProp_C::RustleWobbleRadius' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, EnterWobbleRadius) == 0x001398, "Member 'AB_HidingProp_C::EnterWobbleRadius' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, NonJumpExitDistance) == 0x0013C0, "Member 'AB_HidingProp_C::NonJumpExitDistance' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, Camera_Mode) == 0x0013C8, "Member 'AB_HidingProp_C::Camera_Mode' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, MoveToActorOnEnter) == 0x0013D0, "Member 'AB_HidingProp_C::MoveToActorOnEnter' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, IgnorePhysicsBodyCollisionOnEnter) == 0x0013D1, "Member 'AB_HidingProp_C::IgnorePhysicsBodyCollisionOnEnter' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, bCanRustleAndWobble) == 0x0013D2, "Member 'AB_HidingProp_C::bCanRustleAndWobble' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, SkipRestoreCameraViewTargetOnStopHiding) == 0x0013D3, "Member 'AB_HidingProp_C::SkipRestoreCameraViewTargetOnStopHiding' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, SkipRootMotionMovementOnStopHiding) == 0x0013D4, "Member 'AB_HidingProp_C::SkipRootMotionMovementOnStopHiding' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, AddedSetEntranceRotation) == 0x0013D8, "Member 'AB_HidingProp_C::AddedSetEntranceRotation' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, MoveToActorDelayOnEnter) == 0x0013F0, "Member 'AB_HidingProp_C::MoveToActorDelayOnEnter' has a wrong offset!");
static_assert(offsetof(AB_HidingProp_C, MoveToActorDurationOverride) == 0x0013F8, "Member 'AB_HidingProp_C::MoveToActorDurationOverride' has a wrong offset!");

}
