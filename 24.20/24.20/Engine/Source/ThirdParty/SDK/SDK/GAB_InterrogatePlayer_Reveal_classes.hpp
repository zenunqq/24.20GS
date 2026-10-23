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

class UGAB_InterrogatePlayer_Reveal_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;
	class AFortPlayerControllerAthena*            PlayerController;
	class AFortPlayerPawn*                        InterrogatedPlayer;
	class UAnimMontage*                           Anim_Reveal;
	class UAnimMontage*                           Anim_End;
	class FName                                   RevealHolster;
	struct FGameplayTag                           GC_Reveal;
	struct FScalableFloat                         MarkDurationPlayer;
	struct FScalableFloat                         MarkDurationNPC;
	struct FScalableFloat                         MarkRadius;
	TArray<class AActor*>                         SquadmatesToMark;
	struct FTimerHandle                           Timer_Reveal;
	struct FGameplayTag                           T_NPC;
	uint8                                         Pad_BF4[0x4];
	double                                        RevealDuration;
	double                                        EndAbilityDelay;
	double                                        SweepDelay;
	bool                                          Cancelled;
	bool                                          Ending;
	uint8                                         Pad_C12[0x6];
	class FString                                 IndicatorGroup;
	class UClass*                                 CameraMode;
	TArray<class AActor*>                         ActorsToMark;
	struct FGameplayTagContainer                  T_ReticleHUD;
	struct FGameplayTagContainer                  NPCTagsToMark;
	struct FGameplayTagContainer                  ChestTagsToMark;
	struct FGameplayTagContainer                  GameplayItemTagsToMark;
	class FName                                   ParticleSystemParamName;
	uint8                                         Pad_CC4[0x4];
	class UParticleSystem*                        IndicatedPS;
	class USoundBase*                             IndicatedSound;
	struct FVector                                PSOffset;
	class FName                                   PSVectorParamName;
	uint8                                         Pad_CF4[0x4];
	struct FVector                                PSDBNOOffset;
	class FName                                   EnemyStencilName;
	class FName                                   TreasureChestStencilName;
	double                                        StepTime;
	bool                                          testbool;
	uint8                                         Pad_D21[0x7];
	struct FScalableFloat                         EnemyStencilID;
	struct FScalableFloat                         StencilStepTime;
	struct FScalableFloat                         bUseDefaultStencil;
	struct FScalableFloat                         IndicatorStepTime;
	struct FGameplayTagQuery                      NPCGameplayTagQuery;
	struct FIndicatedActorData                    IndicatedActorDataPlayers;
	struct FStenciledActorData                    StenciledActorDataPlayers;

public:
	void Cancelled_23F3C2DB411862D627ACFCA8233F7B33(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_23F3C2DB411862D627ACFCA8233F7B33(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_3C2C8C224B62B00BDEEAF5AF38A401C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void EndAbilityCleanup();
	void EndInterrogation();
	void ExecuteUbergraph_GAB_InterrogatePlayer_Reveal(int32 EntryPoint);
	void GAB_InterrogatePlayer_Reveal_AutoGenFunc(class AActor* IndicatedActor);
	TArray<class AFortPlayerStateAthena*> GetTeamMembers(class APawn* Target, bool bIncludeSelf);
	void InitAbility();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnDied_Event_1(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnFinish_68B3C6D14B44CCD3170ABDA038C1203E();
	void Reveal();
	void ToggleReticleVisibility(bool Hide);
	void Triggered_23F3C2DB411862D627ACFCA8233F7B33(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_InterrogatePlayer_Reveal_C">();
	}
	static class UGAB_InterrogatePlayer_Reveal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_InterrogatePlayer_Reveal_C>();
	}
};
static_assert(alignof(UGAB_InterrogatePlayer_Reveal_C) == 0x000008, "Wrong alignment on UGAB_InterrogatePlayer_Reveal_C");
static_assert(sizeof(UGAB_InterrogatePlayer_Reveal_C) == 0x000F68, "Wrong size on UGAB_InterrogatePlayer_Reveal_C");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, UberGraphFrame) == 0x000B28, "Member 'UGAB_InterrogatePlayer_Reveal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, PlayerPawn) == 0x000B30, "Member 'UGAB_InterrogatePlayer_Reveal_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, PlayerController) == 0x000B38, "Member 'UGAB_InterrogatePlayer_Reveal_C::PlayerController' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, InterrogatedPlayer) == 0x000B40, "Member 'UGAB_InterrogatePlayer_Reveal_C::InterrogatedPlayer' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, Anim_Reveal) == 0x000B48, "Member 'UGAB_InterrogatePlayer_Reveal_C::Anim_Reveal' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, Anim_End) == 0x000B50, "Member 'UGAB_InterrogatePlayer_Reveal_C::Anim_End' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, RevealHolster) == 0x000B58, "Member 'UGAB_InterrogatePlayer_Reveal_C::RevealHolster' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, GC_Reveal) == 0x000B5C, "Member 'UGAB_InterrogatePlayer_Reveal_C::GC_Reveal' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, MarkDurationPlayer) == 0x000B60, "Member 'UGAB_InterrogatePlayer_Reveal_C::MarkDurationPlayer' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, MarkDurationNPC) == 0x000B88, "Member 'UGAB_InterrogatePlayer_Reveal_C::MarkDurationNPC' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, MarkRadius) == 0x000BB0, "Member 'UGAB_InterrogatePlayer_Reveal_C::MarkRadius' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, SquadmatesToMark) == 0x000BD8, "Member 'UGAB_InterrogatePlayer_Reveal_C::SquadmatesToMark' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, Timer_Reveal) == 0x000BE8, "Member 'UGAB_InterrogatePlayer_Reveal_C::Timer_Reveal' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, T_NPC) == 0x000BF0, "Member 'UGAB_InterrogatePlayer_Reveal_C::T_NPC' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, RevealDuration) == 0x000BF8, "Member 'UGAB_InterrogatePlayer_Reveal_C::RevealDuration' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, EndAbilityDelay) == 0x000C00, "Member 'UGAB_InterrogatePlayer_Reveal_C::EndAbilityDelay' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, SweepDelay) == 0x000C08, "Member 'UGAB_InterrogatePlayer_Reveal_C::SweepDelay' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, Cancelled) == 0x000C10, "Member 'UGAB_InterrogatePlayer_Reveal_C::Cancelled' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, Ending) == 0x000C11, "Member 'UGAB_InterrogatePlayer_Reveal_C::Ending' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, IndicatorGroup) == 0x000C18, "Member 'UGAB_InterrogatePlayer_Reveal_C::IndicatorGroup' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, CameraMode) == 0x000C28, "Member 'UGAB_InterrogatePlayer_Reveal_C::CameraMode' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, ActorsToMark) == 0x000C30, "Member 'UGAB_InterrogatePlayer_Reveal_C::ActorsToMark' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, T_ReticleHUD) == 0x000C40, "Member 'UGAB_InterrogatePlayer_Reveal_C::T_ReticleHUD' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, NPCTagsToMark) == 0x000C60, "Member 'UGAB_InterrogatePlayer_Reveal_C::NPCTagsToMark' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, ChestTagsToMark) == 0x000C80, "Member 'UGAB_InterrogatePlayer_Reveal_C::ChestTagsToMark' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, GameplayItemTagsToMark) == 0x000CA0, "Member 'UGAB_InterrogatePlayer_Reveal_C::GameplayItemTagsToMark' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, ParticleSystemParamName) == 0x000CC0, "Member 'UGAB_InterrogatePlayer_Reveal_C::ParticleSystemParamName' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, IndicatedPS) == 0x000CC8, "Member 'UGAB_InterrogatePlayer_Reveal_C::IndicatedPS' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, IndicatedSound) == 0x000CD0, "Member 'UGAB_InterrogatePlayer_Reveal_C::IndicatedSound' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, PSOffset) == 0x000CD8, "Member 'UGAB_InterrogatePlayer_Reveal_C::PSOffset' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, PSVectorParamName) == 0x000CF0, "Member 'UGAB_InterrogatePlayer_Reveal_C::PSVectorParamName' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, PSDBNOOffset) == 0x000CF8, "Member 'UGAB_InterrogatePlayer_Reveal_C::PSDBNOOffset' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, EnemyStencilName) == 0x000D10, "Member 'UGAB_InterrogatePlayer_Reveal_C::EnemyStencilName' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, TreasureChestStencilName) == 0x000D14, "Member 'UGAB_InterrogatePlayer_Reveal_C::TreasureChestStencilName' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, StepTime) == 0x000D18, "Member 'UGAB_InterrogatePlayer_Reveal_C::StepTime' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, testbool) == 0x000D20, "Member 'UGAB_InterrogatePlayer_Reveal_C::testbool' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, EnemyStencilID) == 0x000D28, "Member 'UGAB_InterrogatePlayer_Reveal_C::EnemyStencilID' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, StencilStepTime) == 0x000D50, "Member 'UGAB_InterrogatePlayer_Reveal_C::StencilStepTime' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, bUseDefaultStencil) == 0x000D78, "Member 'UGAB_InterrogatePlayer_Reveal_C::bUseDefaultStencil' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, IndicatorStepTime) == 0x000DA0, "Member 'UGAB_InterrogatePlayer_Reveal_C::IndicatorStepTime' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, NPCGameplayTagQuery) == 0x000DC8, "Member 'UGAB_InterrogatePlayer_Reveal_C::NPCGameplayTagQuery' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, IndicatedActorDataPlayers) == 0x000E10, "Member 'UGAB_InterrogatePlayer_Reveal_C::IndicatedActorDataPlayers' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, StenciledActorDataPlayers) == 0x000EE8, "Member 'UGAB_InterrogatePlayer_Reveal_C::StenciledActorDataPlayers' has a wrong offset!");

}
