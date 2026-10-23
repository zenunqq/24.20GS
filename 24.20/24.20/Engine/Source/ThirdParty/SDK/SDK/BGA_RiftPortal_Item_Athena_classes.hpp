#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class ABGA_RiftPortal_Item_Athena_C : public AFortAthenaRiftPortal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UFortSoundIndicatorComponent*           SoundIndicator;
	class UPostProcessComponent*                  RiftPostProcess;
	class USphereComponent*                       PostProcessRadius;
	class UParticleSystemComponent*               P_RiftClosingUp;
	class UParticleSystemComponent*               P_Rift_Idle_Loop;
	class UCapsuleComponent*                      OverlapCapsule;
	class UCapsuleComponent*                      Capsule;
	class UStaticMeshComponent*                   SM_Rift;
	class UAudioComponent*                        Audio_Looping;
	float                                         FragmentMovement_Glow_9A68D88241DDB9CCA0BC82888C4EC266;
	float                                         FragmentMovement_Open_9A68D88241DDB9CCA0BC82888C4EC266;
	ETimelineDirection                            FragmentMovement__Direction_9A68D88241DDB9CCA0BC82888C4EC266;
	uint8                                         Pad_B19[0x7];
	class UTimelineComponent*                     FragmentMovement;
	float                                         Audio_RiftDestroyed_PitchCurve_00EF53CD47287903FB5B01AC2A7BE7C6;
	ETimelineDirection                            Audio_RiftDestroyed__Direction_00EF53CD47287903FB5B01AC2A7BE7C6;
	uint8                                         Pad_B2D[0x3];
	class UTimelineComponent*                     Audio_RiftDestroyed;
	float                                         VectorScale_Open_1424CF6C4426FFF7BA2A64817506E111;
	ETimelineDirection                            VectorScale__Direction_1424CF6C4426FFF7BA2A64817506E111;
	uint8                                         Pad_B3D[0x3];
	class UTimelineComponent*                     VectorScale;
	class UParticleSystem*                        DeathEffects;
	class USoundBase*                             EnteredRift;
	class USoundBase*                             RiftDestroyed;
	class AFortPlayerPawn*                        PlayerPawn;
	struct FVector                                TeleportLocation;
	class UParticleSystem*                        EnterRift;
	bool                                          PortalOpen;
	uint8                                         Pad_B89[0x7];
	class UAnimMontage*                           FallingAnimation;
	struct FScalableFloat                         TeleportHeight;
	struct FScalableFloat                         ActiveDuration;
	struct FScalableFloat                         HangTime;
	double                                        TeleportDelay;
	TArray<class AFortPlayerPawn*>                PassengerArray;
	class UParticleSystem*                        CrackExitRift;
	class USoundBase*                             PlayerExitSkyCrack;
	struct FVector                                ActorOriginalLocation;
	int32                                         MaxSpawnHeightMultiplier;
	uint8                                         Pad_C54[0x4];
	class UFortQuestItemDefinition*               QuestItem;
	class FName                                   ObjectiveBackendName;
	uint8                                         Pad_C64[0x4];
	class UFortQuestItemDefinition*               RiftPortalLocationsQuest;
	bool                                          CreativeMode;
	uint8                                         Pad_C71[0x7];
	class AActor*                                 OverlapActor;
	int32                                         RiftLocationNum;
	uint8                                         Pad_C84[0x4];
	struct FRotator                               ActorRotation;
	TScriptInterface<class IFortVehicleInterface> VehicleInterface;
	struct FVector                                Player_Location;
	struct FVector                                TeleportLocationOffset;
	TSet<class AActor*>                           BeganOverlapList;

public:
	void Audio_RiftDestroyed__FinishedFunc();
	void Audio_RiftDestroyed__UpdateFunc();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CheckForRiftLocUpdate(class AController* InController);
	void DestroyRift();
	void EjectFromTurret(class AFortPlayerPawn* PlayerPawn_0);
	void ExecuteUbergraph_BGA_RiftPortal_Item_Athena(int32 EntryPoint);
	void ForceRiftTeleport(class AActor* Target_Actor);
	void FragmentMovement__FinishedFunc();
	void FragmentMovement__UpdateFunc();
	void IncrementTeleportLocationOffset(const struct FVector& IncrementValue);
	void Is_Flying(bool* NewParam);
	void IsPlayerAttachedToAIPawn(class AFortAIPawn* AIPawn, bool* Result, class AFortPlayerPawn** AttachedPlayerPawn);
	void NotifyTeleportedVehicle(class AActor* VehicleActor);
	void OnRep_PlayerPawn();
	void OnRep_TeleportLocation();
	void OnRep_Vehicle();
	void OverlappingOnBeginPlay(class AActor* Actor);
	void PlayCosmeticFX();
	void PlayExpandOrCollapseAudio(bool Expand);
	void PlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void PlayTeleportFX(const struct FVector& PlayerLocation, class APlayerState* RequestingPlayerState);
	void ReceiveBeginPlay();
	void ResetTeleportLocationOffset();
	void TeleportPlayerAndSendEvent(class AFortPlayerPawn* PlayerPawn_0);
	void TryRiftTeleport(class AActor* TargetActor);
	void UseRiftQuestUpdate(class AController* InController);
	void VectorScale__FinishedFunc();
	void VectorScale__UpdateFunc();
	void VehicleInteractionFailed(class AFortPlayerPawnAthena* FortPlayerPawnAthena);
	void VehicleTeleportEvent();

	TArray<EFortTeamAffiliation> GetAffiliationsToShowFor() const;
	bool ShouldShowSoundIndicator(class AFortPlayerController* PlayerController) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_RiftPortal_Item_Athena_C">();
	}
	static class ABGA_RiftPortal_Item_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_RiftPortal_Item_Athena_C>();
	}
};
static_assert(alignof(ABGA_RiftPortal_Item_Athena_C) == 0x000008, "Wrong alignment on ABGA_RiftPortal_Item_Athena_C");
static_assert(sizeof(ABGA_RiftPortal_Item_Athena_C) == 0x000D30, "Wrong size on ABGA_RiftPortal_Item_Athena_C");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, UberGraphFrame) == 0x000AC0, "Member 'ABGA_RiftPortal_Item_Athena_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, SoundIndicator) == 0x000AC8, "Member 'ABGA_RiftPortal_Item_Athena_C::SoundIndicator' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, RiftPostProcess) == 0x000AD0, "Member 'ABGA_RiftPortal_Item_Athena_C::RiftPostProcess' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, PostProcessRadius) == 0x000AD8, "Member 'ABGA_RiftPortal_Item_Athena_C::PostProcessRadius' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, P_RiftClosingUp) == 0x000AE0, "Member 'ABGA_RiftPortal_Item_Athena_C::P_RiftClosingUp' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, P_Rift_Idle_Loop) == 0x000AE8, "Member 'ABGA_RiftPortal_Item_Athena_C::P_Rift_Idle_Loop' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, OverlapCapsule) == 0x000AF0, "Member 'ABGA_RiftPortal_Item_Athena_C::OverlapCapsule' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, Capsule) == 0x000AF8, "Member 'ABGA_RiftPortal_Item_Athena_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, SM_Rift) == 0x000B00, "Member 'ABGA_RiftPortal_Item_Athena_C::SM_Rift' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, Audio_Looping) == 0x000B08, "Member 'ABGA_RiftPortal_Item_Athena_C::Audio_Looping' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, FragmentMovement_Glow_9A68D88241DDB9CCA0BC82888C4EC266) == 0x000B10, "Member 'ABGA_RiftPortal_Item_Athena_C::FragmentMovement_Glow_9A68D88241DDB9CCA0BC82888C4EC266' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, FragmentMovement_Open_9A68D88241DDB9CCA0BC82888C4EC266) == 0x000B14, "Member 'ABGA_RiftPortal_Item_Athena_C::FragmentMovement_Open_9A68D88241DDB9CCA0BC82888C4EC266' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, FragmentMovement__Direction_9A68D88241DDB9CCA0BC82888C4EC266) == 0x000B18, "Member 'ABGA_RiftPortal_Item_Athena_C::FragmentMovement__Direction_9A68D88241DDB9CCA0BC82888C4EC266' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, FragmentMovement) == 0x000B20, "Member 'ABGA_RiftPortal_Item_Athena_C::FragmentMovement' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, Audio_RiftDestroyed_PitchCurve_00EF53CD47287903FB5B01AC2A7BE7C6) == 0x000B28, "Member 'ABGA_RiftPortal_Item_Athena_C::Audio_RiftDestroyed_PitchCurve_00EF53CD47287903FB5B01AC2A7BE7C6' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, Audio_RiftDestroyed__Direction_00EF53CD47287903FB5B01AC2A7BE7C6) == 0x000B2C, "Member 'ABGA_RiftPortal_Item_Athena_C::Audio_RiftDestroyed__Direction_00EF53CD47287903FB5B01AC2A7BE7C6' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, Audio_RiftDestroyed) == 0x000B30, "Member 'ABGA_RiftPortal_Item_Athena_C::Audio_RiftDestroyed' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, VectorScale_Open_1424CF6C4426FFF7BA2A64817506E111) == 0x000B38, "Member 'ABGA_RiftPortal_Item_Athena_C::VectorScale_Open_1424CF6C4426FFF7BA2A64817506E111' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, VectorScale__Direction_1424CF6C4426FFF7BA2A64817506E111) == 0x000B3C, "Member 'ABGA_RiftPortal_Item_Athena_C::VectorScale__Direction_1424CF6C4426FFF7BA2A64817506E111' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, VectorScale) == 0x000B40, "Member 'ABGA_RiftPortal_Item_Athena_C::VectorScale' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, DeathEffects) == 0x000B48, "Member 'ABGA_RiftPortal_Item_Athena_C::DeathEffects' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, EnteredRift) == 0x000B50, "Member 'ABGA_RiftPortal_Item_Athena_C::EnteredRift' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, RiftDestroyed) == 0x000B58, "Member 'ABGA_RiftPortal_Item_Athena_C::RiftDestroyed' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, PlayerPawn) == 0x000B60, "Member 'ABGA_RiftPortal_Item_Athena_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, TeleportLocation) == 0x000B68, "Member 'ABGA_RiftPortal_Item_Athena_C::TeleportLocation' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, EnterRift) == 0x000B80, "Member 'ABGA_RiftPortal_Item_Athena_C::EnterRift' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, PortalOpen) == 0x000B88, "Member 'ABGA_RiftPortal_Item_Athena_C::PortalOpen' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, FallingAnimation) == 0x000B90, "Member 'ABGA_RiftPortal_Item_Athena_C::FallingAnimation' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, TeleportHeight) == 0x000B98, "Member 'ABGA_RiftPortal_Item_Athena_C::TeleportHeight' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ActiveDuration) == 0x000BC0, "Member 'ABGA_RiftPortal_Item_Athena_C::ActiveDuration' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, HangTime) == 0x000BE8, "Member 'ABGA_RiftPortal_Item_Athena_C::HangTime' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, TeleportDelay) == 0x000C10, "Member 'ABGA_RiftPortal_Item_Athena_C::TeleportDelay' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, PassengerArray) == 0x000C18, "Member 'ABGA_RiftPortal_Item_Athena_C::PassengerArray' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, CrackExitRift) == 0x000C28, "Member 'ABGA_RiftPortal_Item_Athena_C::CrackExitRift' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, PlayerExitSkyCrack) == 0x000C30, "Member 'ABGA_RiftPortal_Item_Athena_C::PlayerExitSkyCrack' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ActorOriginalLocation) == 0x000C38, "Member 'ABGA_RiftPortal_Item_Athena_C::ActorOriginalLocation' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, MaxSpawnHeightMultiplier) == 0x000C50, "Member 'ABGA_RiftPortal_Item_Athena_C::MaxSpawnHeightMultiplier' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, QuestItem) == 0x000C58, "Member 'ABGA_RiftPortal_Item_Athena_C::QuestItem' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjectiveBackendName) == 0x000C60, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjectiveBackendName' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, RiftPortalLocationsQuest) == 0x000C68, "Member 'ABGA_RiftPortal_Item_Athena_C::RiftPortalLocationsQuest' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, CreativeMode) == 0x000C70, "Member 'ABGA_RiftPortal_Item_Athena_C::CreativeMode' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, OverlapActor) == 0x000C78, "Member 'ABGA_RiftPortal_Item_Athena_C::OverlapActor' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, RiftLocationNum) == 0x000C80, "Member 'ABGA_RiftPortal_Item_Athena_C::RiftLocationNum' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ActorRotation) == 0x000C88, "Member 'ABGA_RiftPortal_Item_Athena_C::ActorRotation' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, VehicleInterface) == 0x000CA0, "Member 'ABGA_RiftPortal_Item_Athena_C::VehicleInterface' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, Player_Location) == 0x000CB0, "Member 'ABGA_RiftPortal_Item_Athena_C::Player_Location' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, TeleportLocationOffset) == 0x000CC8, "Member 'ABGA_RiftPortal_Item_Athena_C::TeleportLocationOffset' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, BeganOverlapList) == 0x000CE0, "Member 'ABGA_RiftPortal_Item_Athena_C::BeganOverlapList' has a wrong offset!");

}
