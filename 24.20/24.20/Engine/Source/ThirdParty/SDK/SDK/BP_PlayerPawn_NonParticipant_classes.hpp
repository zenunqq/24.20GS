#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteAI_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "BP_PlayerPawn_Athena_Phoebe_classes.hpp"

namespace SDK
{

class ABP_PlayerPawn_NonParticipant_C : public ABP_PlayerPawn_Athena_Phoebe_C
{
public:
	uint8                                         Pad_6064[0x4];
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PlayerPawn_NonParticipant_C;
	class UFortAthenaAlertStateComponent*         FortAthenaAlertState;
	class UAudioComponent*                        VOAudioComponent;
	bool                                          UseAlertness;
	bool                                          UseVO;
	bool                                          UseIdleVO;
	bool                                          UseDropExtraLootOnDeath;
	bool                                          UseFullBodyHitReact;
	EAlertLevel                                   AlertLevel;
	EAlertLevel                                   OldAlertLevel;
	uint8                                         Pad_6087[0x1];
	struct FGameplayTag                           GameplayCueAlertState;
	uint8                                         Pad_608C[0x4];
	class UClass*                                 GE_NPC_Status_Stressed_Infinite;
	class UClass*                                 GE_NPC_Status_Stressed_Cooldown;
	double                                        MinDistanceToTargetToPlayCombatAlertAnimation;
	struct FScalableFloat                         MinIdleVODelay;
	struct FScalableFloat                         MaxIdleVODelay;
	class FName                                   LootTierNameToSpawnWhenDead;
	class FName                                   LootTier_Medium;
	class FName                                   LootTier_Shell;
	class FName                                   LootTier_Heavy;
	class FName                                   LootTier_Light;
	class FName                                   LootTier_Rockets;
	class UFortGameplayDataTrackerComponentManager* DataTrackerComponentManager;
	struct FGameplayTag                           AlertLevelUnawareTag;
	struct FGameplayTag                           AlertLevelAlertedTag;
	struct FGameplayTag                           AlertLevelAggressiveTag;
	struct FGameplayTag                           TC_DisguiseTag;
	class UClass*                                 GE_RemoveDisguise;
	class UFortAbilitySet*                        HitReactAbilitySet;
	class UAnimMontage*                           DefaultFullbodyHitReactionMontage;
	class UFortPatrolAnimAsset*                   CurrentPatrolAnimAsset;
	class UClass*                                 PatrolLayerAnimBP;
	TArray<struct FFortPatrolAnimSetWeaponPair>   PatrolAnimSetPairs;
	bool                                          bShouldDoFullAnimationUpdate;
	uint8                                         Pad_6161[0x3];
	struct FActiveGameplayEffectHandle            GEDuelHandle;
	uint8                                         Pad_616C[0x4];
	class UClass*                                 GE_DuelTag;
	class AFortPlayerPawn*                        Challenger;
	class UClass*                                 OverrideLayerAnimBP;
	class UFortPatrolAnimAsset*                   FallbackPatrolAnimAsset;
	bool                                          Quantize_VO_To_Music;
	uint8                                         Pad_6191[0x7];
	struct FQuartzQuantizationBoundary            QuantizationBoundary;
	class FName                                   VO_QuantizationClockName;
	bool                                          bIsInVehicleThatSupportsNoAlertState;
	uint8                                         Pad_61BD[0x3];
	struct FActiveGameplayEffectHandle            GE_Quest_Converted_Handle;
	TSubclassOf<class UGameplayEffect>            GE_Quest_Converted_HireNPC;
	class USoundBase*                             DeathFX_Sound;
	class AFortPawn*                              PawnConverter;
	struct FGameplayTagContainer                  TagsToApplyOnConvertedPawn;
	struct FGameplayTagContainer                  TagsToApplyOnConvertingPawn;
	class USoundLibrary*                          PawnSoundLibrary;
	class UFortAbilitySet*                        GASToApplyOnConvertedPawn;
	bool                                          RemoveGASOnUnconverted;
	uint8                                         Pad_6231[0x7];
	struct FFortAbilitySetHandle                  HNDL_EquippedAbilitySet;

public:
	void ActivateAlertDBNOCleanUp();
	void AlertLevelChanged(EAlertLevel OldAlertLevel_0, EAlertLevel InputPin);
	void BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature(class AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason);
	void ChallengerDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ClientOnAlertLevelChanged(EAlertLevel OldAlertLevel_0, EAlertLevel NewAlertLevel);
	void DataTrackerSetup(bool Is_Registering);
	void ExecuteUbergraph_BP_PlayerPawn_NonParticipant(int32 EntryPoint);
	void GameplayCue_Player_Interrogation_Voice_PickedUp(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GetCurrentFullbodyHitReactionMontage(class UAnimMontage** CurrentMontage);
	void HandleAlertStateUpdates();
	void HandlePawnConverted(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);
	void HandlePawnUnconverted(class AFortPawn* UnconvertedPawn);
	void InitializeAnimInstanceSettings();
	void LinkOverrideAnimLayer();
	void LinkPatrolAnimLayer();
	void OnAlertLEvelCHangedEvent(class AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel_0, EAlertLevel NewAlertLevel);
	void OnAnimInputEvent(const class UFortAnimInputEvent* AnimInputEvent);
	void OnCharacterCustomizationCompleted(class AFortPlayerPawn* Pawn);
	void OnDBNOStateChanged_Event(class AFortPawn* FortPawn, bool bInIsDBNO);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDied_Event(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnEnteredVehicleEvent();
	void OnExitedVehicle();
	void OnExitedVehicleEvent();
	void OnRep_AlertLevel();
	void OnRep_bIsInVehicleThatSupportsNoAlertState();
	void OnWeaponAttachmentChangedDelegate_Event_0(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void PlayAlertLevelVO(EAlertLevel OldAlertLevel_0, EAlertLevel NewAlertLevel);
	void PlayVoiceComponentSoundByTag(const struct FGameplayTag& SoundBankTag, class UAudioComponent** AudioComponent);
	void PlayVoiceSoundByTag(const struct FGameplayTag& SoundBankTag);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReLinkAnimLayer();
	void SetAlertedStateGameplayCue(bool Alerted, bool Combat);
	void SetChallenger(class AFortPlayerPawn* Challenger_0);
	void SetDataTrackerActorStateFromAlertLevel(EAlertLevel AlertLevel_0);
	void SetupLootTierNameWithWeapon();
	void SoundLibrarySetup(bool IsAdding);
	void TriggerIdleVO();
	void UpdateAlertStateVehicleCheck();
	void UpdatePatrolAnimSet(class AFortWeapon* NewWeapon);
	void UserConstructionScript();

	void GetIconPlacement(const class AActor* SelfActor, const class AActor* ViewingActor, struct FVector* OutLocation, struct FVector* OutExtents) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerPawn_NonParticipant_C">();
	}
	static class ABP_PlayerPawn_NonParticipant_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerPawn_NonParticipant_C>();
	}
};
static_assert(alignof(ABP_PlayerPawn_NonParticipant_C) == 0x000010, "Wrong alignment on ABP_PlayerPawn_NonParticipant_C");
static_assert(sizeof(ABP_PlayerPawn_NonParticipant_C) == 0x006270, "Wrong size on ABP_PlayerPawn_NonParticipant_C");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, UberGraphFrame_BP_PlayerPawn_NonParticipant_C) == 0x006068, "Member 'ABP_PlayerPawn_NonParticipant_C::UberGraphFrame_BP_PlayerPawn_NonParticipant_C' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, FortAthenaAlertState) == 0x006070, "Member 'ABP_PlayerPawn_NonParticipant_C::FortAthenaAlertState' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, VOAudioComponent) == 0x006078, "Member 'ABP_PlayerPawn_NonParticipant_C::VOAudioComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, UseAlertness) == 0x006080, "Member 'ABP_PlayerPawn_NonParticipant_C::UseAlertness' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, UseVO) == 0x006081, "Member 'ABP_PlayerPawn_NonParticipant_C::UseVO' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, UseIdleVO) == 0x006082, "Member 'ABP_PlayerPawn_NonParticipant_C::UseIdleVO' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, UseDropExtraLootOnDeath) == 0x006083, "Member 'ABP_PlayerPawn_NonParticipant_C::UseDropExtraLootOnDeath' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, UseFullBodyHitReact) == 0x006084, "Member 'ABP_PlayerPawn_NonParticipant_C::UseFullBodyHitReact' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, AlertLevel) == 0x006085, "Member 'ABP_PlayerPawn_NonParticipant_C::AlertLevel' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, OldAlertLevel) == 0x006086, "Member 'ABP_PlayerPawn_NonParticipant_C::OldAlertLevel' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, GameplayCueAlertState) == 0x006088, "Member 'ABP_PlayerPawn_NonParticipant_C::GameplayCueAlertState' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, GE_NPC_Status_Stressed_Infinite) == 0x006090, "Member 'ABP_PlayerPawn_NonParticipant_C::GE_NPC_Status_Stressed_Infinite' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, GE_NPC_Status_Stressed_Cooldown) == 0x006098, "Member 'ABP_PlayerPawn_NonParticipant_C::GE_NPC_Status_Stressed_Cooldown' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, MinDistanceToTargetToPlayCombatAlertAnimation) == 0x0060A0, "Member 'ABP_PlayerPawn_NonParticipant_C::MinDistanceToTargetToPlayCombatAlertAnimation' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, MinIdleVODelay) == 0x0060A8, "Member 'ABP_PlayerPawn_NonParticipant_C::MinIdleVODelay' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, MaxIdleVODelay) == 0x0060D0, "Member 'ABP_PlayerPawn_NonParticipant_C::MaxIdleVODelay' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, LootTierNameToSpawnWhenDead) == 0x0060F8, "Member 'ABP_PlayerPawn_NonParticipant_C::LootTierNameToSpawnWhenDead' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, LootTier_Medium) == 0x0060FC, "Member 'ABP_PlayerPawn_NonParticipant_C::LootTier_Medium' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, LootTier_Shell) == 0x006100, "Member 'ABP_PlayerPawn_NonParticipant_C::LootTier_Shell' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, LootTier_Heavy) == 0x006104, "Member 'ABP_PlayerPawn_NonParticipant_C::LootTier_Heavy' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, LootTier_Light) == 0x006108, "Member 'ABP_PlayerPawn_NonParticipant_C::LootTier_Light' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, LootTier_Rockets) == 0x00610C, "Member 'ABP_PlayerPawn_NonParticipant_C::LootTier_Rockets' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, DataTrackerComponentManager) == 0x006110, "Member 'ABP_PlayerPawn_NonParticipant_C::DataTrackerComponentManager' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, AlertLevelUnawareTag) == 0x006118, "Member 'ABP_PlayerPawn_NonParticipant_C::AlertLevelUnawareTag' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, AlertLevelAlertedTag) == 0x00611C, "Member 'ABP_PlayerPawn_NonParticipant_C::AlertLevelAlertedTag' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, AlertLevelAggressiveTag) == 0x006120, "Member 'ABP_PlayerPawn_NonParticipant_C::AlertLevelAggressiveTag' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, TC_DisguiseTag) == 0x006124, "Member 'ABP_PlayerPawn_NonParticipant_C::TC_DisguiseTag' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, GE_RemoveDisguise) == 0x006128, "Member 'ABP_PlayerPawn_NonParticipant_C::GE_RemoveDisguise' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, HitReactAbilitySet) == 0x006130, "Member 'ABP_PlayerPawn_NonParticipant_C::HitReactAbilitySet' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, DefaultFullbodyHitReactionMontage) == 0x006138, "Member 'ABP_PlayerPawn_NonParticipant_C::DefaultFullbodyHitReactionMontage' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, CurrentPatrolAnimAsset) == 0x006140, "Member 'ABP_PlayerPawn_NonParticipant_C::CurrentPatrolAnimAsset' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, PatrolLayerAnimBP) == 0x006148, "Member 'ABP_PlayerPawn_NonParticipant_C::PatrolLayerAnimBP' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, PatrolAnimSetPairs) == 0x006150, "Member 'ABP_PlayerPawn_NonParticipant_C::PatrolAnimSetPairs' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, bShouldDoFullAnimationUpdate) == 0x006160, "Member 'ABP_PlayerPawn_NonParticipant_C::bShouldDoFullAnimationUpdate' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, GEDuelHandle) == 0x006164, "Member 'ABP_PlayerPawn_NonParticipant_C::GEDuelHandle' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, GE_DuelTag) == 0x006170, "Member 'ABP_PlayerPawn_NonParticipant_C::GE_DuelTag' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, Challenger) == 0x006178, "Member 'ABP_PlayerPawn_NonParticipant_C::Challenger' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, OverrideLayerAnimBP) == 0x006180, "Member 'ABP_PlayerPawn_NonParticipant_C::OverrideLayerAnimBP' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, FallbackPatrolAnimAsset) == 0x006188, "Member 'ABP_PlayerPawn_NonParticipant_C::FallbackPatrolAnimAsset' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, Quantize_VO_To_Music) == 0x006190, "Member 'ABP_PlayerPawn_NonParticipant_C::Quantize_VO_To_Music' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, QuantizationBoundary) == 0x006198, "Member 'ABP_PlayerPawn_NonParticipant_C::QuantizationBoundary' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, VO_QuantizationClockName) == 0x0061B8, "Member 'ABP_PlayerPawn_NonParticipant_C::VO_QuantizationClockName' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, bIsInVehicleThatSupportsNoAlertState) == 0x0061BC, "Member 'ABP_PlayerPawn_NonParticipant_C::bIsInVehicleThatSupportsNoAlertState' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, GE_Quest_Converted_Handle) == 0x0061C0, "Member 'ABP_PlayerPawn_NonParticipant_C::GE_Quest_Converted_Handle' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, GE_Quest_Converted_HireNPC) == 0x0061C8, "Member 'ABP_PlayerPawn_NonParticipant_C::GE_Quest_Converted_HireNPC' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, DeathFX_Sound) == 0x0061D0, "Member 'ABP_PlayerPawn_NonParticipant_C::DeathFX_Sound' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, PawnConverter) == 0x0061D8, "Member 'ABP_PlayerPawn_NonParticipant_C::PawnConverter' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, TagsToApplyOnConvertedPawn) == 0x0061E0, "Member 'ABP_PlayerPawn_NonParticipant_C::TagsToApplyOnConvertedPawn' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, TagsToApplyOnConvertingPawn) == 0x006200, "Member 'ABP_PlayerPawn_NonParticipant_C::TagsToApplyOnConvertingPawn' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, PawnSoundLibrary) == 0x006220, "Member 'ABP_PlayerPawn_NonParticipant_C::PawnSoundLibrary' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, GASToApplyOnConvertedPawn) == 0x006228, "Member 'ABP_PlayerPawn_NonParticipant_C::GASToApplyOnConvertedPawn' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, RemoveGASOnUnconverted) == 0x006230, "Member 'ABP_PlayerPawn_NonParticipant_C::RemoveGASOnUnconverted' has a wrong offset!");
static_assert(offsetof(ABP_PlayerPawn_NonParticipant_C, HNDL_EquippedAbilitySet) == 0x006238, "Member 'ABP_PlayerPawn_NonParticipant_C::HNDL_EquippedAbilitySet' has a wrong offset!");

}
