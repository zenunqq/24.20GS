#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "RidingCodeRuntime_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UCreatureBaseRidableComponent_C : public UControllableRidableComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTagContainer                  T_CreatureIsBeingRidden;
	class UClass*                                 GE_CreatureIsBeingRidden;
	class UClass*                                 GE_CreatureIsBeingRidden_Passive;
	bool                                          bDebugDisplay;
	uint8                                         Pad_601[0x7];
	double                                        DebugTickRate;
	struct FVector                                DebugServerRiderLocation;
	double                                        CapsuleRadiusOffset;
	double                                        CapsuleHalfHeightOffset;
	struct FGameplayTagContainer                  T_RidingSpecialAbility;
	class UAnimSequence*                          IdleAnim_Add;
	class UAnimSequence*                          RunAnim_Add;
	class UBlendSpace*                            TurnBS;
	double                                        MinSpeedToRun;
	double                                        Run_RampIntoSpeed;
	double                                        Run_RampIntoSpeed_ADS;
	double                                        Run_PlayRate;
	double                                        Run_PlayRate_ADS;
	double                                        SpringAlpha;
	double                                        SpringAlpha_ADS;
	double                                        Idle_Alpha;
	double                                        Idle_Alpha_ADS;
	double                                        Run_Alpha;
	double                                        Run_Alpha_ADS;
	double                                        Turn_Alpha;
	double                                        Turn_Alpha_ADS;
	class UAnimSequence*                          Clamp_AnimPose_LastResort;
	struct FRotator                               Clamp_Foot_R_Adjust;
	struct FRotator                               Clamp_Foot_L_Adjust;
	double                                        CapsuleRadiusOffset_Emote;
	double                                        CapsuleHalfHeightOffset_Emote;
	struct FVector                                Clamp_Location_Offset;
	struct FRotator                               Clamp_Rotation_Offset;
	struct FVector                                Clamp_ScaleAdjust;
	class FName                                   RidableSocketName;
	uint8                                         Pad_76C[0x4];
	double                                        RidableSocket_Alpha;
	TSubclassOf<class UGameplayEffect>            GE_CooldownOverride;
	struct FGameplayTagContainer                  T_CreatureOverrideCooldown;
	TMap<ECollisionChannel, ECollisionResponse>   OriginalCollisionResponseMap;
	struct FSoundIndicatorIconPicker              RidingSoundIndicatorIconOverride;
	TMulticastInlineDelegate<void(double JumpPitchInterpSpeed)> AudioOnJump;
	TMulticastInlineDelegate<void()>              AudioOnJumpApex;
	uint8                                         MovementMode;
	bool                                          bFalling;
	uint8                                         Pad_83A[0x6];
	struct FScalableFloat                         RidingAbilityEnable_HF;
	double                                        JumpAttach_GroundHeightMin;
	double                                        JumpAttach_GroundHeightBuffer;
	bool                                          UseAltRidingMessage;
	uint8                                         Pad_879[0x7];
	class FText                                   Riding_Interaction_Text;
	double                                        currentEnergyValue;
	class UPlayerRiderComponent_C*                PlayerRiderComponentRef;
	class ANPC_Pawn_Wildlife_Parent_C*            NPCPawnWildlifeRef;
	double                                        previousTimeTracked;
	double                                        energyTrackingDeltaTime;
	bool                                          ShouldHaveEnergy;
	uint8                                         Pad_8C1[0x7];
	double                                        EnergyRateOfDecayStopped;
	bool                                          allowUpdateEnergyTrackingTick;
	bool                                          lastBeingRiddenState;
	uint8                                         Pad_8D2[0x6];
	struct FCurveTableRowHandle                   EnergyRateOfDecayMoving;
	struct FCurveTableRowHandle                   EnergyRateOfDecaySprinting;
	double                                        CurrentEnergyRateOfRecharge;
	struct FCurveTableRowHandle                   ExhaustedEnergyRateOfRecharge;
	double                                        EnergyWarningThreshold;
	double                                        EnergyCriticalThreshold;
	bool                                          energyWarningActive;
	bool                                          energyCriticalActive;
	uint8                                         Pad_922[0x6];
	double                                        minMovementSpeedTreshold;
	bool                                          IsJumping;
	uint8                                         Pad_931[0x7];
	double                                        EnergyRegenThreshold;
	bool                                          AlwaysRegenWhenNotRidden;
	uint8                                         Pad_941[0x7];
	TSubclassOf<class UGameplayEffect>            GE_EnergyWarning;
	TSubclassOf<class UGameplayEffect>            GE_EnergyCritical;
	TSubclassOf<class UGameplayEffect>            GE_EnergyDepleted;
	struct FGameplayTagContainer                  T_EnergyWarning;
	struct FGameplayTagContainer                  T_EnergyCritical;
	struct FGameplayTagContainer                  T_EnergyDepleted;
	struct FGameplayTagContainer                  T_CannotRideBucket;
	class UClass*                                 Gameplay_Effect;
	struct FGameplayTag                           SprintingAbilityTag;
	uint8                                         Pad_9EC[0x4];
	class UClass*                                 GE_EatToRefuel;
	uint8                                         Pad_9F8[0x8];
	struct FSlateBrush                            IconBrush;
	class UClass*                                 GE_Creature_Sprint;
	class USoundLibrary*                          RidingFoleySoundLibrary;
	struct FGameplayTagContainer                  TagsPreventSprinting;
	TMulticastInlineDelegate<void(class FText Name, const struct FSlateBrush& Icon)> RidableUIStart;
	TMulticastInlineDelegate<void(double Energy, bool bIsResting)> RidableUIUpdateEnergy;
	struct FGameplayTag                           OutOfEnergySoundLibTag;
	struct FGameplayTag                           SprintStartSoundLibTag;
	ETInteractionType                             Riding_Interaction_Type;
	uint8                                         Pad_B19[0x7];
	double                                        StartInAirTimestamp;
	struct FTimerHandle                           RetryJumpExitTimerHandle;
	struct FGameplayTag                           MountLandedCueTag;
	uint8                                         Pad_B34[0x4];
	TSubclassOf<class UGameplayEffect>            GE_BlockCreatureAttackOnDismount;
	bool                                          EnergyRegenActive;
	uint8                                         Pad_B41[0x7];
	struct FGameplayTagContainer                  BlockPetting_TagContainer;
	bool                                          infiniteStaminaBuffEnabled;
	uint8                                         Pad_B69[0x3];
	struct FGameplayTag                           InfiniteStaminaEffect_GameplayCueTag;

public:
	void Activate_Regen();
	void Added_FBD936634BCC61A726DA279226E2F4BE();
	void ApplyCollisionResponse(TArray<ECollisionChannel>& Channels, ECollisionResponse Response);
	void ApplyGEToSelf(TSubclassOf<class UGameplayEffect> GameplayEffectClass, bool* IsValidClass);
	void CanJumpExit(bool* CanJumpExit_0);
	void CheatSetStaminaPercent(const float StaminaPercent);
	void Check_Regen_on_Started_Riding();
	void Check_Regen_on_Stopped_Riding();
	void CommitEnergyCosts(bool RequireAllEnergy, double EnergyCost, bool* Success);
	void ConvertedDispatcher_Event_0(bool Converted, class AFortPawn* InstigatorPawn);
	void Deactivate_Regen();
	void DetermineRateOfChange(double* rateOfChange);
	void EnergyTrackingStart();
	void EnergyTrackingStop();
	void ExecuteUbergraph_CreatureBaseRidableComponent(int32 EntryPoint);
	void GetRiderLocation(struct FVector* Location);
	void GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage);
	void HandleAbilityHeld();
	void HandleAbilityStarted();
	void HandleAbilityStopped();
	void HandleCancelSprint(const bool bAbilityInputHeld, const bool bForceCancel);
	void HandleEnemyFoleySoundLibrary(class UActorComponent* Rider, bool bIsRiding);
	void HandleJumpStarted();
	void HandleJumpStopped();
	void HandleRiderStartedRiding(class URiderComponent* Rider);
	void HandleRiderStoppedRiding(class URiderComponent* Rider);
	void KickRiderOffSelf();
	void ManualEnergyDepleted();
	void NPCPawnInteractWithDispatcher_Event_0(class AActor* AIPawn, class AFortPlayerPawn* InteractingPlayerPawn);
	void OnEatToRefuel(double EnergyCost);
	void OnEnergyDepletedClient();
	void OnEnergyUpdate(double Energy, bool bWarningActive);
	void OnJumping(double JumpPitchInterpSpeed);
	void OnJumpingApex();
	void OnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnPawnHealthChanged_Event_0();
	void OnRep_currentEnergyValue();
	void OnRep_IdleAnim_Add();
	void OnSprintStarted();
	void Propagate_Immunity_Fall_Damage();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Removed_AD51144144164FD235EE5BA4F6E87456();
	void Removed_C4C6E29B4217C014B9DE0E80B7134D6E();
	void RemoveGEByTag(const struct FGameplayTagContainer& Tags);
	void RestoreCollisionResponses();
	void ReTryJumpExit();
	void SetInfiniteStaminaBuff(bool Enabled);
	void SetWildlifeHealth();
	void StopSprinting();
	void TestThreshold(bool isDecaying, double CurrentValue, double testTreshold, bool PreviousState, bool* crossedThreshold);
	void ToggleRiding(class AActor* PlayerPawn, class AActor* Target, bool ShouldRide, bool* bChangedRiding);
	void ToggleRidingAlternative();
	void UpdateAnimInputBool(class AFortPawn* FortPawn, bool IsBeingRidden_0);
	void UpdateDebug();
	void UpdateEnergy();
	void UpdateLootAnimalGlow(double Scale);
	void UpdateValue(double TargetValue, double rateOfChange, double DeltaTime, double* updatedValue, bool* EnergyDepleted);
	void UseEnergyAmountServer(double EnergyCost);

	bool CanBePet(class URiderComponent* Rider) const;
	bool CanRiderPlayEmote(const class URiderComponent* Rider) const;
	void GetRiderCapsuleSize(class URiderComponent* Rider, double* RiderCapsuleRadius, double* RiderCapsuleHH) const;
	void GetRidingCapsuleSize(const class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float* OutRadius, float* OutHalfHeight) const;
	void GetRidingEmoteCapsuleSize(const class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float* OutRadius, float* OutHalfHeight) const;
	void IsSwimming(bool* IsSwimming_0) const;
	bool ShouldCameraFocusOnRidable(const class URiderComponent* Rider) const;
	bool ShouldSetAsViewTarget(const class URiderComponent* Rider) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CreatureBaseRidableComponent_C">();
	}
	static class UCreatureBaseRidableComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreatureBaseRidableComponent_C>();
	}
};
static_assert(alignof(UCreatureBaseRidableComponent_C) == 0x000010, "Wrong alignment on UCreatureBaseRidableComponent_C");
static_assert(sizeof(UCreatureBaseRidableComponent_C) == 0x000B70, "Wrong size on UCreatureBaseRidableComponent_C");
static_assert(offsetof(UCreatureBaseRidableComponent_C, UberGraphFrame) == 0x0005C8, "Member 'UCreatureBaseRidableComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, T_CreatureIsBeingRidden) == 0x0005D0, "Member 'UCreatureBaseRidableComponent_C::T_CreatureIsBeingRidden' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, GE_CreatureIsBeingRidden) == 0x0005F0, "Member 'UCreatureBaseRidableComponent_C::GE_CreatureIsBeingRidden' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, GE_CreatureIsBeingRidden_Passive) == 0x0005F8, "Member 'UCreatureBaseRidableComponent_C::GE_CreatureIsBeingRidden_Passive' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, bDebugDisplay) == 0x000600, "Member 'UCreatureBaseRidableComponent_C::bDebugDisplay' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, DebugTickRate) == 0x000608, "Member 'UCreatureBaseRidableComponent_C::DebugTickRate' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, DebugServerRiderLocation) == 0x000610, "Member 'UCreatureBaseRidableComponent_C::DebugServerRiderLocation' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, CapsuleRadiusOffset) == 0x000628, "Member 'UCreatureBaseRidableComponent_C::CapsuleRadiusOffset' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, CapsuleHalfHeightOffset) == 0x000630, "Member 'UCreatureBaseRidableComponent_C::CapsuleHalfHeightOffset' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, T_RidingSpecialAbility) == 0x000638, "Member 'UCreatureBaseRidableComponent_C::T_RidingSpecialAbility' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, IdleAnim_Add) == 0x000658, "Member 'UCreatureBaseRidableComponent_C::IdleAnim_Add' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, RunAnim_Add) == 0x000660, "Member 'UCreatureBaseRidableComponent_C::RunAnim_Add' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, TurnBS) == 0x000668, "Member 'UCreatureBaseRidableComponent_C::TurnBS' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, MinSpeedToRun) == 0x000670, "Member 'UCreatureBaseRidableComponent_C::MinSpeedToRun' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Run_RampIntoSpeed) == 0x000678, "Member 'UCreatureBaseRidableComponent_C::Run_RampIntoSpeed' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Run_RampIntoSpeed_ADS) == 0x000680, "Member 'UCreatureBaseRidableComponent_C::Run_RampIntoSpeed_ADS' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Run_PlayRate) == 0x000688, "Member 'UCreatureBaseRidableComponent_C::Run_PlayRate' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Run_PlayRate_ADS) == 0x000690, "Member 'UCreatureBaseRidableComponent_C::Run_PlayRate_ADS' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, SpringAlpha) == 0x000698, "Member 'UCreatureBaseRidableComponent_C::SpringAlpha' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, SpringAlpha_ADS) == 0x0006A0, "Member 'UCreatureBaseRidableComponent_C::SpringAlpha_ADS' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Idle_Alpha) == 0x0006A8, "Member 'UCreatureBaseRidableComponent_C::Idle_Alpha' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Idle_Alpha_ADS) == 0x0006B0, "Member 'UCreatureBaseRidableComponent_C::Idle_Alpha_ADS' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Run_Alpha) == 0x0006B8, "Member 'UCreatureBaseRidableComponent_C::Run_Alpha' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Run_Alpha_ADS) == 0x0006C0, "Member 'UCreatureBaseRidableComponent_C::Run_Alpha_ADS' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Turn_Alpha) == 0x0006C8, "Member 'UCreatureBaseRidableComponent_C::Turn_Alpha' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Turn_Alpha_ADS) == 0x0006D0, "Member 'UCreatureBaseRidableComponent_C::Turn_Alpha_ADS' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Clamp_AnimPose_LastResort) == 0x0006D8, "Member 'UCreatureBaseRidableComponent_C::Clamp_AnimPose_LastResort' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Clamp_Foot_R_Adjust) == 0x0006E0, "Member 'UCreatureBaseRidableComponent_C::Clamp_Foot_R_Adjust' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Clamp_Foot_L_Adjust) == 0x0006F8, "Member 'UCreatureBaseRidableComponent_C::Clamp_Foot_L_Adjust' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, CapsuleRadiusOffset_Emote) == 0x000710, "Member 'UCreatureBaseRidableComponent_C::CapsuleRadiusOffset_Emote' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, CapsuleHalfHeightOffset_Emote) == 0x000718, "Member 'UCreatureBaseRidableComponent_C::CapsuleHalfHeightOffset_Emote' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Clamp_Location_Offset) == 0x000720, "Member 'UCreatureBaseRidableComponent_C::Clamp_Location_Offset' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Clamp_Rotation_Offset) == 0x000738, "Member 'UCreatureBaseRidableComponent_C::Clamp_Rotation_Offset' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Clamp_ScaleAdjust) == 0x000750, "Member 'UCreatureBaseRidableComponent_C::Clamp_ScaleAdjust' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, RidableSocketName) == 0x000768, "Member 'UCreatureBaseRidableComponent_C::RidableSocketName' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, RidableSocket_Alpha) == 0x000770, "Member 'UCreatureBaseRidableComponent_C::RidableSocket_Alpha' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, GE_CooldownOverride) == 0x000778, "Member 'UCreatureBaseRidableComponent_C::GE_CooldownOverride' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, T_CreatureOverrideCooldown) == 0x000780, "Member 'UCreatureBaseRidableComponent_C::T_CreatureOverrideCooldown' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, OriginalCollisionResponseMap) == 0x0007A0, "Member 'UCreatureBaseRidableComponent_C::OriginalCollisionResponseMap' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, RidingSoundIndicatorIconOverride) == 0x0007F0, "Member 'UCreatureBaseRidableComponent_C::RidingSoundIndicatorIconOverride' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, AudioOnJump) == 0x000818, "Member 'UCreatureBaseRidableComponent_C::AudioOnJump' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, AudioOnJumpApex) == 0x000828, "Member 'UCreatureBaseRidableComponent_C::AudioOnJumpApex' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, MovementMode) == 0x000838, "Member 'UCreatureBaseRidableComponent_C::MovementMode' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, bFalling) == 0x000839, "Member 'UCreatureBaseRidableComponent_C::bFalling' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, RidingAbilityEnable_HF) == 0x000840, "Member 'UCreatureBaseRidableComponent_C::RidingAbilityEnable_HF' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, JumpAttach_GroundHeightMin) == 0x000868, "Member 'UCreatureBaseRidableComponent_C::JumpAttach_GroundHeightMin' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, JumpAttach_GroundHeightBuffer) == 0x000870, "Member 'UCreatureBaseRidableComponent_C::JumpAttach_GroundHeightBuffer' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, UseAltRidingMessage) == 0x000878, "Member 'UCreatureBaseRidableComponent_C::UseAltRidingMessage' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Riding_Interaction_Text) == 0x000880, "Member 'UCreatureBaseRidableComponent_C::Riding_Interaction_Text' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, currentEnergyValue) == 0x000898, "Member 'UCreatureBaseRidableComponent_C::currentEnergyValue' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, PlayerRiderComponentRef) == 0x0008A0, "Member 'UCreatureBaseRidableComponent_C::PlayerRiderComponentRef' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, NPCPawnWildlifeRef) == 0x0008A8, "Member 'UCreatureBaseRidableComponent_C::NPCPawnWildlifeRef' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, previousTimeTracked) == 0x0008B0, "Member 'UCreatureBaseRidableComponent_C::previousTimeTracked' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, energyTrackingDeltaTime) == 0x0008B8, "Member 'UCreatureBaseRidableComponent_C::energyTrackingDeltaTime' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, ShouldHaveEnergy) == 0x0008C0, "Member 'UCreatureBaseRidableComponent_C::ShouldHaveEnergy' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, EnergyRateOfDecayStopped) == 0x0008C8, "Member 'UCreatureBaseRidableComponent_C::EnergyRateOfDecayStopped' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, allowUpdateEnergyTrackingTick) == 0x0008D0, "Member 'UCreatureBaseRidableComponent_C::allowUpdateEnergyTrackingTick' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, lastBeingRiddenState) == 0x0008D1, "Member 'UCreatureBaseRidableComponent_C::lastBeingRiddenState' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, EnergyRateOfDecayMoving) == 0x0008D8, "Member 'UCreatureBaseRidableComponent_C::EnergyRateOfDecayMoving' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, EnergyRateOfDecaySprinting) == 0x0008E8, "Member 'UCreatureBaseRidableComponent_C::EnergyRateOfDecaySprinting' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, CurrentEnergyRateOfRecharge) == 0x0008F8, "Member 'UCreatureBaseRidableComponent_C::CurrentEnergyRateOfRecharge' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, ExhaustedEnergyRateOfRecharge) == 0x000900, "Member 'UCreatureBaseRidableComponent_C::ExhaustedEnergyRateOfRecharge' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, EnergyWarningThreshold) == 0x000910, "Member 'UCreatureBaseRidableComponent_C::EnergyWarningThreshold' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, EnergyCriticalThreshold) == 0x000918, "Member 'UCreatureBaseRidableComponent_C::EnergyCriticalThreshold' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, energyWarningActive) == 0x000920, "Member 'UCreatureBaseRidableComponent_C::energyWarningActive' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, energyCriticalActive) == 0x000921, "Member 'UCreatureBaseRidableComponent_C::energyCriticalActive' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, minMovementSpeedTreshold) == 0x000928, "Member 'UCreatureBaseRidableComponent_C::minMovementSpeedTreshold' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, IsJumping) == 0x000930, "Member 'UCreatureBaseRidableComponent_C::IsJumping' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, EnergyRegenThreshold) == 0x000938, "Member 'UCreatureBaseRidableComponent_C::EnergyRegenThreshold' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, AlwaysRegenWhenNotRidden) == 0x000940, "Member 'UCreatureBaseRidableComponent_C::AlwaysRegenWhenNotRidden' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, GE_EnergyWarning) == 0x000948, "Member 'UCreatureBaseRidableComponent_C::GE_EnergyWarning' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, GE_EnergyCritical) == 0x000950, "Member 'UCreatureBaseRidableComponent_C::GE_EnergyCritical' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, GE_EnergyDepleted) == 0x000958, "Member 'UCreatureBaseRidableComponent_C::GE_EnergyDepleted' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, T_EnergyWarning) == 0x000960, "Member 'UCreatureBaseRidableComponent_C::T_EnergyWarning' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, T_EnergyCritical) == 0x000980, "Member 'UCreatureBaseRidableComponent_C::T_EnergyCritical' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, T_EnergyDepleted) == 0x0009A0, "Member 'UCreatureBaseRidableComponent_C::T_EnergyDepleted' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, T_CannotRideBucket) == 0x0009C0, "Member 'UCreatureBaseRidableComponent_C::T_CannotRideBucket' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Gameplay_Effect) == 0x0009E0, "Member 'UCreatureBaseRidableComponent_C::Gameplay_Effect' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, SprintingAbilityTag) == 0x0009E8, "Member 'UCreatureBaseRidableComponent_C::SprintingAbilityTag' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, GE_EatToRefuel) == 0x0009F0, "Member 'UCreatureBaseRidableComponent_C::GE_EatToRefuel' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, IconBrush) == 0x000A00, "Member 'UCreatureBaseRidableComponent_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, GE_Creature_Sprint) == 0x000AC0, "Member 'UCreatureBaseRidableComponent_C::GE_Creature_Sprint' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, RidingFoleySoundLibrary) == 0x000AC8, "Member 'UCreatureBaseRidableComponent_C::RidingFoleySoundLibrary' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, TagsPreventSprinting) == 0x000AD0, "Member 'UCreatureBaseRidableComponent_C::TagsPreventSprinting' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, RidableUIStart) == 0x000AF0, "Member 'UCreatureBaseRidableComponent_C::RidableUIStart' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, RidableUIUpdateEnergy) == 0x000B00, "Member 'UCreatureBaseRidableComponent_C::RidableUIUpdateEnergy' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, OutOfEnergySoundLibTag) == 0x000B10, "Member 'UCreatureBaseRidableComponent_C::OutOfEnergySoundLibTag' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, SprintStartSoundLibTag) == 0x000B14, "Member 'UCreatureBaseRidableComponent_C::SprintStartSoundLibTag' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, Riding_Interaction_Type) == 0x000B18, "Member 'UCreatureBaseRidableComponent_C::Riding_Interaction_Type' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, StartInAirTimestamp) == 0x000B20, "Member 'UCreatureBaseRidableComponent_C::StartInAirTimestamp' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, RetryJumpExitTimerHandle) == 0x000B28, "Member 'UCreatureBaseRidableComponent_C::RetryJumpExitTimerHandle' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, MountLandedCueTag) == 0x000B30, "Member 'UCreatureBaseRidableComponent_C::MountLandedCueTag' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, GE_BlockCreatureAttackOnDismount) == 0x000B38, "Member 'UCreatureBaseRidableComponent_C::GE_BlockCreatureAttackOnDismount' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, EnergyRegenActive) == 0x000B40, "Member 'UCreatureBaseRidableComponent_C::EnergyRegenActive' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, BlockPetting_TagContainer) == 0x000B48, "Member 'UCreatureBaseRidableComponent_C::BlockPetting_TagContainer' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, infiniteStaminaBuffEnabled) == 0x000B68, "Member 'UCreatureBaseRidableComponent_C::infiniteStaminaBuffEnabled' has a wrong offset!");
static_assert(offsetof(UCreatureBaseRidableComponent_C, InfiniteStaminaEffect_GameplayCueTag) == 0x000B6C, "Member 'UCreatureBaseRidableComponent_C::InfiniteStaminaEffect_GameplayCueTag' has a wrong offset!");

}
