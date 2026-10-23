#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Enum_BoostJumpStates_structs.hpp"

namespace SDK
{

class UGA_BoostJumpPack_C : public UFortGameplayAbility_JumpBoostPack
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	double                                        Jump_Multiple;
	struct FVector                                Basic_Jump_Z_Adjust;
	struct FVector                                FinalJumpHeight;
	struct FGameplayEventData                     EventTriggerData;
	bool                                          bJumpButtonHeld;
	bool                                          bHoverButtonHeld;
	bool                                          bAtApex;
	uint8                                         Pad_C3B[0x1];
	struct FActiveGameplayEffectHandle            JetpackEffectHandle;
	uint8                                         Pad_C44[0x4];
	class AFortPlayerPawn*                        FortPlayerPawn;
	double                                        FuelFudge;
	struct FActiveGameplayEffectHandle            RegenEffectHandle;
	bool                                          bRegenEffectActive;
	uint8                                         Pad_C61[0x7];
	struct FGameplayTagContainer                  BoostExecuteTags;
	int32                                         HoverButtonHeldCount;
	uint8                                         Pad_C8C[0x4];
	struct FGameplayTagContainer                  HoverExecuteTags;
	int32                                         JumpButtonHeldCount;
	uint8                                         Pad_CB4[0x4];
	struct FGameplayTagContainer                  HoverReleaseTags;
	double                                        TimeStartedHovering;
	double                                        TimeStartedFalling;
	double                                        EndHoverDelay;
	double                                        EndFallingDelay;
	struct FGameplayTagContainer                  BoostReleaseTags;
	bool                                          bHasDied;
	uint8                                         Pad_D19[0x3];
	struct FGameplayTag                           BoostCue;
	struct FGameplayTag                           BoostJumpPackCue;
	uint8                                         Pad_D24[0x4];
	class UClass*                                 JetpackInUseEffect;
	bool                                          TriggeredByJump;
	uint8                                         Pad_D31[0x7];
	struct FGameplayTagContainer                  BlockExecuteTags;
	class UClass*                                 JetpackInUseEffect_Alt;
	struct FGameplayTag                           HidingPropTag;
	struct FGameplayTag                           ZiplineTag;
	struct FGameplayTag                           GliderRedeployTag;
	struct FGameplayTag                           InitialBoostCue;
	bool                                          bFirstBoost;
	uint8                                         Pad_D71[0x3];
	struct FGameplayTag                           BoostEndCue;
	struct FGameplayTag                           BoostOutOfFuelEndCue;

public:
	void Added_A54C58044C5CE8F3DABC60A214FC45E0();
	void Added_B611282348ECFDA3CD120D87734E357C();
	void Added_D3A68EA84FC920CD9E2949BE05D3A5AC();
	void Added_F6D39ED5491065B2594D37A44C404CA7();
	void Consider_Starting_Regen_Effect();
	void Consider_Stopping_Regen_Effect();
	void Delay_ProcessAbilityStateMachine();
	void DetermineStateToTransitionTo(Enum_BoostJumpStates* BoostState);
	void ExecuteUbergraph_GA_BoostJumpPack(int32 EntryPoint);
	void Handle_Jetpack_Equipped();
	void HandleBoostEnded();
	void HandleBoostJump();
	void HandleCurrentBoostStateChanged(EJumpBoostPackState PreviousState, EJumpBoostPackState CurrentState_0);
	void HandleFalling();
	void HandleHovering();
	void HandleIdle(bool bForceEndHovering);
	void HandleJetpackInitialBoost();
	bool IsUsingJetpackEffectActive();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void On_Reached_Jump_Apex();
	void OnAbilityCanceled();
	void OnCurrentStateChanged(EJumpBoostPackState InPreviousState, EJumpBoostPackState InCurrentState);
	void OnEnterVehicle();
	void OnFuelIsEmpty();
	void OnFuelIsFull();
	void OnPawnLanded(const struct FHitResult& Hit);
	void OnSavedPawnChanged_(class AFortPlayerPawn* PreviousPawn, class AFortPlayerPawn* NewPawn);
	void PotentiallyEndHovering(bool bForceEndHovering);
	void ProcessAbilityStateMachine();
	void ProcessTriggerData(const struct FGameplayTag& TagOne);
	void Reengage_Falling_Movement();
	void Reengage_Hovering_Movement();
	void Reset_Toggle_Input_State();
	void ResetTransitionVariables(bool bForceEndHovering);
	void SavePlayerPawn();
	void SetCurrentBoostState(EJumpBoostPackState NewState);
	void SetJumpHeight(class AFortPlayerPawn* Pawn, class AFortPlayerPawn** Pawn_Out, struct FVector* Jump_Height);
	void Setup_Notify_at_Apex(bool bNotifyApex);
	void Setup_PlayerPawn();
	void SetupTransitionVariables(const struct FGameplayTag& InTag);
	void Start_Regen_Effect();
	void Stop_Regen_Effect();
	void TransitionFromBoost(Enum_BoostJumpStates* TargetBoostState);
	void TransitionFromFalling(Enum_BoostJumpStates* TargetBoostState);
	void TransitionFromHovering(Enum_BoostJumpStates* TargetBoostState);

	class AFortPlayerPawn* Get_Player_Pawn(class UObject* Object) const;
	void GetFuel(double* Fuel) const;
	void GetMaxFuel(double* MaxFuel) const;
	double GetReserveFuel() const;
	bool IsBoostAllowed() const;
	bool IsCurrentlyDead(const struct FGameplayTag& TagOne) const;
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const;
	bool NotInHidingSpot() const;
	bool Reasons_To_Reset_on_Transition(const struct FGameplayTag& tag) const;
	void TransitionFromIdle(Enum_BoostJumpStates* TargetBoostState) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_BoostJumpPack_C">();
	}
	static class UGA_BoostJumpPack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_BoostJumpPack_C>();
	}
};
static_assert(alignof(UGA_BoostJumpPack_C) == 0x000008, "Wrong alignment on UGA_BoostJumpPack_C");
static_assert(sizeof(UGA_BoostJumpPack_C) == 0x000D80, "Wrong size on UGA_BoostJumpPack_C");
static_assert(offsetof(UGA_BoostJumpPack_C, UberGraphFrame) == 0x000B48, "Member 'UGA_BoostJumpPack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, Jump_Multiple) == 0x000B50, "Member 'UGA_BoostJumpPack_C::Jump_Multiple' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, Basic_Jump_Z_Adjust) == 0x000B58, "Member 'UGA_BoostJumpPack_C::Basic_Jump_Z_Adjust' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, FinalJumpHeight) == 0x000B70, "Member 'UGA_BoostJumpPack_C::FinalJumpHeight' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, EventTriggerData) == 0x000B88, "Member 'UGA_BoostJumpPack_C::EventTriggerData' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, bJumpButtonHeld) == 0x000C38, "Member 'UGA_BoostJumpPack_C::bJumpButtonHeld' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, bHoverButtonHeld) == 0x000C39, "Member 'UGA_BoostJumpPack_C::bHoverButtonHeld' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, bAtApex) == 0x000C3A, "Member 'UGA_BoostJumpPack_C::bAtApex' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, JetpackEffectHandle) == 0x000C3C, "Member 'UGA_BoostJumpPack_C::JetpackEffectHandle' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, FortPlayerPawn) == 0x000C48, "Member 'UGA_BoostJumpPack_C::FortPlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, FuelFudge) == 0x000C50, "Member 'UGA_BoostJumpPack_C::FuelFudge' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, RegenEffectHandle) == 0x000C58, "Member 'UGA_BoostJumpPack_C::RegenEffectHandle' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, bRegenEffectActive) == 0x000C60, "Member 'UGA_BoostJumpPack_C::bRegenEffectActive' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, BoostExecuteTags) == 0x000C68, "Member 'UGA_BoostJumpPack_C::BoostExecuteTags' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, HoverButtonHeldCount) == 0x000C88, "Member 'UGA_BoostJumpPack_C::HoverButtonHeldCount' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, HoverExecuteTags) == 0x000C90, "Member 'UGA_BoostJumpPack_C::HoverExecuteTags' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, JumpButtonHeldCount) == 0x000CB0, "Member 'UGA_BoostJumpPack_C::JumpButtonHeldCount' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, HoverReleaseTags) == 0x000CB8, "Member 'UGA_BoostJumpPack_C::HoverReleaseTags' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, TimeStartedHovering) == 0x000CD8, "Member 'UGA_BoostJumpPack_C::TimeStartedHovering' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, TimeStartedFalling) == 0x000CE0, "Member 'UGA_BoostJumpPack_C::TimeStartedFalling' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, EndHoverDelay) == 0x000CE8, "Member 'UGA_BoostJumpPack_C::EndHoverDelay' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, EndFallingDelay) == 0x000CF0, "Member 'UGA_BoostJumpPack_C::EndFallingDelay' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, BoostReleaseTags) == 0x000CF8, "Member 'UGA_BoostJumpPack_C::BoostReleaseTags' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, bHasDied) == 0x000D18, "Member 'UGA_BoostJumpPack_C::bHasDied' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, BoostCue) == 0x000D1C, "Member 'UGA_BoostJumpPack_C::BoostCue' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, BoostJumpPackCue) == 0x000D20, "Member 'UGA_BoostJumpPack_C::BoostJumpPackCue' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, JetpackInUseEffect) == 0x000D28, "Member 'UGA_BoostJumpPack_C::JetpackInUseEffect' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, TriggeredByJump) == 0x000D30, "Member 'UGA_BoostJumpPack_C::TriggeredByJump' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, BlockExecuteTags) == 0x000D38, "Member 'UGA_BoostJumpPack_C::BlockExecuteTags' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, JetpackInUseEffect_Alt) == 0x000D58, "Member 'UGA_BoostJumpPack_C::JetpackInUseEffect_Alt' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, HidingPropTag) == 0x000D60, "Member 'UGA_BoostJumpPack_C::HidingPropTag' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, ZiplineTag) == 0x000D64, "Member 'UGA_BoostJumpPack_C::ZiplineTag' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, GliderRedeployTag) == 0x000D68, "Member 'UGA_BoostJumpPack_C::GliderRedeployTag' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, InitialBoostCue) == 0x000D6C, "Member 'UGA_BoostJumpPack_C::InitialBoostCue' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, bFirstBoost) == 0x000D70, "Member 'UGA_BoostJumpPack_C::bFirstBoost' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, BoostEndCue) == 0x000D74, "Member 'UGA_BoostJumpPack_C::BoostEndCue' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, BoostOutOfFuelEndCue) == 0x000D78, "Member 'UGA_BoostJumpPack_C::BoostOutOfFuelEndCue' has a wrong offset!");

}
