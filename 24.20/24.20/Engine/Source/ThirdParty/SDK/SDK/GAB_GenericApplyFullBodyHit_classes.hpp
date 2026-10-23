#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UGAB_GenericApplyFullBodyHit_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UClass*                                 GE_FullBodyHitActiveEffect;
	struct FVector                                HitImpulse;
	class UClass*                                 GE_RestoreControlResistance;
	struct FActiveGameplayEffectHandle            ActiveImpactImmunity;
	class UClass*                                 GE_ImpactImmunity;
	struct FActiveGameplayEffectHandle            ActiveFullBodyHit;
	struct FGameplayTag                           Event_Triggered_FullBodyHit;
	struct FGameplayTag                           Event_Control_Ended;
	class UClass*                                 GE_TransferFullBodyHit;
	class UAnimMontage*                           FullBodyHitMontage;
	class FName                                   FullBodyHitMontageSection;
	bool                                          EndAbilityOnBlendOut;
	uint8                                         Pad_B8D[0x3];
	double                                        Duration_NoAnim;

public:
	void ExecuteUbergraph_GAB_GenericApplyFullBodyHit(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnBlendOut_25E5E66442E815EB40A6DB8205FE0D98();
	void OnCancelled_25E5E66442E815EB40A6DB8205FE0D98();
	void OnCompleted_25E5E66442E815EB40A6DB8205FE0D98();
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98();
	void PickFullBodyHitMontageSection();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_GenericApplyFullBodyHit_C">();
	}
	static class UGAB_GenericApplyFullBodyHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_GenericApplyFullBodyHit_C>();
	}
};
static_assert(alignof(UGAB_GenericApplyFullBodyHit_C) == 0x000008, "Wrong alignment on UGAB_GenericApplyFullBodyHit_C");
static_assert(sizeof(UGAB_GenericApplyFullBodyHit_C) == 0x000B98, "Wrong size on UGAB_GenericApplyFullBodyHit_C");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, UberGraphFrame) == 0x000B28, "Member 'UGAB_GenericApplyFullBodyHit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, GE_FullBodyHitActiveEffect) == 0x000B30, "Member 'UGAB_GenericApplyFullBodyHit_C::GE_FullBodyHitActiveEffect' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, HitImpulse) == 0x000B38, "Member 'UGAB_GenericApplyFullBodyHit_C::HitImpulse' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, GE_RestoreControlResistance) == 0x000B50, "Member 'UGAB_GenericApplyFullBodyHit_C::GE_RestoreControlResistance' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, ActiveImpactImmunity) == 0x000B58, "Member 'UGAB_GenericApplyFullBodyHit_C::ActiveImpactImmunity' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, GE_ImpactImmunity) == 0x000B60, "Member 'UGAB_GenericApplyFullBodyHit_C::GE_ImpactImmunity' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, ActiveFullBodyHit) == 0x000B68, "Member 'UGAB_GenericApplyFullBodyHit_C::ActiveFullBodyHit' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, Event_Triggered_FullBodyHit) == 0x000B70, "Member 'UGAB_GenericApplyFullBodyHit_C::Event_Triggered_FullBodyHit' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, Event_Control_Ended) == 0x000B74, "Member 'UGAB_GenericApplyFullBodyHit_C::Event_Control_Ended' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, GE_TransferFullBodyHit) == 0x000B78, "Member 'UGAB_GenericApplyFullBodyHit_C::GE_TransferFullBodyHit' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, FullBodyHitMontage) == 0x000B80, "Member 'UGAB_GenericApplyFullBodyHit_C::FullBodyHitMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, FullBodyHitMontageSection) == 0x000B88, "Member 'UGAB_GenericApplyFullBodyHit_C::FullBodyHitMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, EndAbilityOnBlendOut) == 0x000B8C, "Member 'UGAB_GenericApplyFullBodyHit_C::EndAbilityOnBlendOut' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, Duration_NoAnim) == 0x000B90, "Member 'UGAB_GenericApplyFullBodyHit_C::Duration_NoAnim' has a wrong offset!");

}
