#pragma once

#include "Basic.hpp"

#include "FortniteAI_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "NPC_Pawn_Parent_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Enum_NPC_AlertLevel_structs.hpp"

namespace SDK
{

class ANPC_Pawn_Wildlife_Parent_C final : public ANPC_Pawn_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_NPC_Pawn_Wildlife_Parent_C;
	class UNiagaraComponent*                      Wildlife_FootDust;
	class UFortPawnComponent_Convert*             ConvertComponent;
	TSoftClassPtr<class UClass>                   Layer_Idle;
	TSoftClassPtr<class UClass>                   Layer_Locomotion;
	TSoftClassPtr<class UClass>                   Layer_Jump;
	uint8                                         LeaderTeam;
	uint8                                         Pad_3BD1[0x7];
	class USoundEffectSourcePresetChain*          VocalSourceEffectChainOverride;
	bool                                          bTamingEnabled;
	uint8                                         Pad_3BE1[0x7];
	TMulticastInlineDelegate<void(class ANPC_Pawn_Wildlife_Parent_C* WildlifePawn, class AActor* ActorGrabbed)> OnPickupGrabbed_Destroyed;
	bool                                          bCanBeInteractedWithWhileTamed;
	uint8                                         Pad_3BF9[0x3];
	struct FActiveGameplayEffectHandle            GE_Quest_Converted_Handle;
	uint8                                         Pad_3C04[0x4];
	TSubclassOf<class UGameplayEffect>            GE_Quest_Converted_Irwin;
	TMulticastInlineDelegate<void(bool Converted, class AFortPawn* InstigatorPawn)> ConvertedDispatcher;
	bool                                          bIsBeingRidden;
	bool                                          NPCStatusWidgetShouldDisplayDamage;
	uint8                                         Pad_3C22[0x6];
	TSubclassOf<class UGameplayEffect>            GE_GoalSelectionWhileTamed;
	struct FGameplayTagContainer                  T_GoalSelectionWhileTamed;
	double                                        CurrentEnergy;
	struct FGameplayTag                           IrwinSlidingGC;
	bool                                          bLeaderSetSuccess;
	uint8                                         Pad_3C5D[0x3];
	struct FGameplayTag                           JumpLandSoundLibTag;
	struct FGameplayTag                           TameSoundLibTag;
	class USoundBase*                             SoundIndicatorSound_Unridden;
	class USoundBase*                             SoundIndicatorSound_Ridden;
	bool                                          OverrideIncomingDmg;
	uint8                                         Pad_3C79[0x7];
	double                                        OverridenIncomingDmgAmount;
	TMulticastInlineDelegate<void()>              OnModifiedDamageReceived;
	double                                        ColorVariation;
	uint8                                         Default_Unconvert_Reason;

public:
	void AsyncLinkAnimationLayer(TSoftClassPtr<class UClass> AnimationLayer);
	void AttachAndApplyVocalFX(const struct FSoundLibraryPlaySoundResult& SoundLibraryResult);
	float BlueprintModifyIncomingDamage(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser);
	void BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);
	void BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature(class AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason);
	void BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature(const struct FSoundLibraryPlaySoundResult& Results, const class USoundLibraryContext* Context);
	void CanBeInteractedWithWhenTamed(bool* bCanInteract_0);
	void ExecuteUbergraph_NPC_Pawn_Wildlife_Parent(int32 EntryPoint);
	void HideStatus();
	void LinkAnimationLayers();
	void NPC_AlertLevelChangedServer(Enum_NPC_AlertLevel NPCAlertLevel);
	void NPC_CanBeInteractedWith(bool* CanInteract);
	void NPC_LeaderSet(bool Success_, class AActor* Leader, EUnconvertReason UnconvertReason);
	void NPC_PickupGrabbed_Destroyed(class AActor* ActorGrabbed);
	void NPC_UpdateHealthBarComponentVisibility();
	void NPCStatusWidget_UpdateKeepVisible(bool ShouldKeepVisible);
	void On_NPC_PawnInteractedWith(class AActor* AIPawn, class AFortPlayerPawn* InteractingPlayerPawn);
	void On_Pawn_Focused(class AFortPawn* FocusedPawn);
	void OnApplyEffectOptimization(const int32 NewBudgetValue);
	void OnBeingControlledChanged(bool bControlled);
	void OnCustomizationsLoaded_BP();
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnLanded(const struct FHitResult& Hit);
	void OnLandedMulticast();
	void OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06(TSubclassOf<class UObject> Loaded);
	void OnOutOfConvertResistanceServer(float ConvertDamageDone, const struct FGameplayTagContainer& SourceTags, const struct FGameplayEffectContextHandle& EffectContext, class AController* EffectInstigator, class AActor* EffectCauser);
	void OnPawnHealthChanged_Event_0();
	void OnRep_LeaderTeam();
	void OnSlidingStateChanged(bool bNewSlidingState);
	void OnTamedMulticast();
	void Play_Sound_Lib(const struct FGameplayTag& Event_Name);
	void Play_Water_Splash_at_Water_Surface(class AFortWaterBodyActor* Water_Body, bool Enter_Water_0);
	void PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage);
	void PlayStateChangeAudio(Enum_NPC_AlertLevel Index_0);
	void ReceiveBeginPlay();
	void RestoreConvertResistance();
	void SetTamingEnabled(bool EnableTaming);
	void TryShowHealthBar();
	void UpdateTamingIndicator();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool IsValidAutoFireTarget(const class AActor* Attacker) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_Pawn_Wildlife_Parent_C">();
	}
	static class ANPC_Pawn_Wildlife_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_Pawn_Wildlife_Parent_C>();
	}
};
static_assert(alignof(ANPC_Pawn_Wildlife_Parent_C) == 0x000010, "Wrong alignment on ANPC_Pawn_Wildlife_Parent_C");
static_assert(sizeof(ANPC_Pawn_Wildlife_Parent_C) == 0x003CB0, "Wrong size on ANPC_Pawn_Wildlife_Parent_C");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, UberGraphFrame_NPC_Pawn_Wildlife_Parent_C) == 0x003B40, "Member 'ANPC_Pawn_Wildlife_Parent_C::UberGraphFrame_NPC_Pawn_Wildlife_Parent_C' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, Wildlife_FootDust) == 0x003B48, "Member 'ANPC_Pawn_Wildlife_Parent_C::Wildlife_FootDust' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, ConvertComponent) == 0x003B50, "Member 'ANPC_Pawn_Wildlife_Parent_C::ConvertComponent' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, Layer_Idle) == 0x003B58, "Member 'ANPC_Pawn_Wildlife_Parent_C::Layer_Idle' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, Layer_Locomotion) == 0x003B80, "Member 'ANPC_Pawn_Wildlife_Parent_C::Layer_Locomotion' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, Layer_Jump) == 0x003BA8, "Member 'ANPC_Pawn_Wildlife_Parent_C::Layer_Jump' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, LeaderTeam) == 0x003BD0, "Member 'ANPC_Pawn_Wildlife_Parent_C::LeaderTeam' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, VocalSourceEffectChainOverride) == 0x003BD8, "Member 'ANPC_Pawn_Wildlife_Parent_C::VocalSourceEffectChainOverride' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, bTamingEnabled) == 0x003BE0, "Member 'ANPC_Pawn_Wildlife_Parent_C::bTamingEnabled' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, OnPickupGrabbed_Destroyed) == 0x003BE8, "Member 'ANPC_Pawn_Wildlife_Parent_C::OnPickupGrabbed_Destroyed' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, bCanBeInteractedWithWhileTamed) == 0x003BF8, "Member 'ANPC_Pawn_Wildlife_Parent_C::bCanBeInteractedWithWhileTamed' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, GE_Quest_Converted_Handle) == 0x003BFC, "Member 'ANPC_Pawn_Wildlife_Parent_C::GE_Quest_Converted_Handle' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, GE_Quest_Converted_Irwin) == 0x003C08, "Member 'ANPC_Pawn_Wildlife_Parent_C::GE_Quest_Converted_Irwin' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, ConvertedDispatcher) == 0x003C10, "Member 'ANPC_Pawn_Wildlife_Parent_C::ConvertedDispatcher' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, bIsBeingRidden) == 0x003C20, "Member 'ANPC_Pawn_Wildlife_Parent_C::bIsBeingRidden' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, NPCStatusWidgetShouldDisplayDamage) == 0x003C21, "Member 'ANPC_Pawn_Wildlife_Parent_C::NPCStatusWidgetShouldDisplayDamage' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, GE_GoalSelectionWhileTamed) == 0x003C28, "Member 'ANPC_Pawn_Wildlife_Parent_C::GE_GoalSelectionWhileTamed' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, T_GoalSelectionWhileTamed) == 0x003C30, "Member 'ANPC_Pawn_Wildlife_Parent_C::T_GoalSelectionWhileTamed' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, CurrentEnergy) == 0x003C50, "Member 'ANPC_Pawn_Wildlife_Parent_C::CurrentEnergy' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, IrwinSlidingGC) == 0x003C58, "Member 'ANPC_Pawn_Wildlife_Parent_C::IrwinSlidingGC' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, bLeaderSetSuccess) == 0x003C5C, "Member 'ANPC_Pawn_Wildlife_Parent_C::bLeaderSetSuccess' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, JumpLandSoundLibTag) == 0x003C60, "Member 'ANPC_Pawn_Wildlife_Parent_C::JumpLandSoundLibTag' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, TameSoundLibTag) == 0x003C64, "Member 'ANPC_Pawn_Wildlife_Parent_C::TameSoundLibTag' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, SoundIndicatorSound_Unridden) == 0x003C68, "Member 'ANPC_Pawn_Wildlife_Parent_C::SoundIndicatorSound_Unridden' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, SoundIndicatorSound_Ridden) == 0x003C70, "Member 'ANPC_Pawn_Wildlife_Parent_C::SoundIndicatorSound_Ridden' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, OverrideIncomingDmg) == 0x003C78, "Member 'ANPC_Pawn_Wildlife_Parent_C::OverrideIncomingDmg' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, OverridenIncomingDmgAmount) == 0x003C80, "Member 'ANPC_Pawn_Wildlife_Parent_C::OverridenIncomingDmgAmount' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, OnModifiedDamageReceived) == 0x003C88, "Member 'ANPC_Pawn_Wildlife_Parent_C::OnModifiedDamageReceived' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, ColorVariation) == 0x003C98, "Member 'ANPC_Pawn_Wildlife_Parent_C::ColorVariation' has a wrong offset!");
static_assert(offsetof(ANPC_Pawn_Wildlife_Parent_C, Default_Unconvert_Reason) == 0x003CA0, "Member 'ANPC_Pawn_Wildlife_Parent_C::Default_Unconvert_Reason' has a wrong offset!");

}
