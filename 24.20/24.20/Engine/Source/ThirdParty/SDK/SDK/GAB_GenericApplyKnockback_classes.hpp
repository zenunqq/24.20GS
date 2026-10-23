#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UGAB_GenericApplyKnockback_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UClass*                                 GE_TransferKnockback;
	class UClass*                                 GE_KnockbackActive;
	double                                        KnockbackPropagationThreshold;
	class UAnimMontage*                           KnockbackUpMontage;
	class FName                                   KnockbackUpMontageSection;
	uint8                                         Pad_B54[0x4];
	class UAnimMontage*                           KnockbackDownMontage;
	class FName                                   KnockbackDownMontageSection;
	uint8                                         Pad_B64[0x4];
	class UAnimMontage*                           KnockbackLandMontage;
	class FName                                   KnockbackLandMontageSection;
	uint8                                         Pad_B74[0x4];
	class UAnimMontage*                           KnockbackLandToIdleMontage;
	class FName                                   KnockbackLandToIdleMontageSection;
	uint8                                         Pad_B84[0x4];
	class UAnimMontage*                           KnockbackLandToStunMontage;
	class FName                                   KnockbackLandToStunMontageSection;
	bool                                          DebugDraw;
	bool                                          DebugNumbers;
	bool                                          DebugForceKnockbackValues;
	bool                                          bOrientToImpulse;
	struct FActiveGameplayEffectHandle            ActiveKnockback;
	struct FVector                                OrientDirection;
	struct FVector                                HitDirection;
	struct FVector                                ImpulseDirectionVelocityOrRotation;
	struct FVector                                DebugLastLocation;
	struct FGameplayTag                           TC_NPCStatusLockedInPlace;
	uint8                                         Pad_C04[0x4];
	double                                        LockedInPlaceKnockbackAngle;
	double                                        LockedInPlaceKnockbackMagnitude;
	class UClass*                                 GE_RestoreControlResistance;
	class UClass*                                 GE_ImpactImmunity;
	struct FActiveGameplayEffectHandle            ActiveImpactImmunity;
	bool                                          bHasImpactImmunity;
	uint8                                         Pad_C31[0x7];
	double                                        F_OneFrameDelay;
	struct FGameplayTag                           Event_Triggered_Knockback;
	bool                                          KnockbackFromFloorTrap;
	bool                                          KnockbackFromFloorTrap_PlayUpMontage;
	bool                                          KnockbackFromFloorTrap_PlayDownMontage;
	bool                                          KnockbackFromFloorTrap_PlayLandMontage;
	struct FGameplayTag                           Event_Control_Ended;
	struct FGameplayTag                           GC_TrapKnockback_Tag;

public:
	void BindMovementModeChange();
	struct FVector CalculateImpulseDirection(class AFortPlayerPawn* InPawn);
	void CheckForPawnDeath(class AFortPawn* Pawn, bool* IsDead);
	void DebugLine();
	void DoesUseInstagorInsteadOfImpulseDirection(const struct FGameplayEffectContextHandle& EffectContext, class UObject* OptionalObject, bool* Value);
	void ExecuteUbergraph_GAB_GenericApplyKnockback(int32 EntryPoint);
	void GetPawnFromInstigator(class AActor* InActor, class AFortPlayerPawn** OutPawn);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void MovementModeChangedDelegate_Event(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnBlendOut_1F181048470CEB2EB6CC648039C5913C();
	void OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnBlendOut_BA9188C34C234A4C47306FA73AAF0583();
	void OnBlendOut_D744890E4C485F1C80B3E7864AE506FF();
	void OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnCancelled_1F181048470CEB2EB6CC648039C5913C();
	void OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnCancelled_BA9188C34C234A4C47306FA73AAF0583();
	void OnCancelled_D744890E4C485F1C80B3E7864AE506FF();
	void OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnCompleted_1F181048470CEB2EB6CC648039C5913C();
	void OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnCompleted_BA9188C34C234A4C47306FA73AAF0583();
	void OnCompleted_D744890E4C485F1C80B3E7864AE506FF();
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnInterrupted_1F181048470CEB2EB6CC648039C5913C();
	void OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnInterrupted_BA9188C34C234A4C47306FA73AAF0583();
	void OnInterrupted_D744890E4C485F1C80B3E7864AE506FF();
	void OnPawnLanded(const struct FHitResult& Hit);
	void OnReachedJumpApex();
	void SetupMontageSectionsAndOrientDirection();
	void UnbindMovementModeChange();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_GenericApplyKnockback_C">();
	}
	static class UGAB_GenericApplyKnockback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_GenericApplyKnockback_C>();
	}
};
static_assert(alignof(UGAB_GenericApplyKnockback_C) == 0x000008, "Wrong alignment on UGAB_GenericApplyKnockback_C");
static_assert(sizeof(UGAB_GenericApplyKnockback_C) == 0x000C50, "Wrong size on UGAB_GenericApplyKnockback_C");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, UberGraphFrame) == 0x000B28, "Member 'UGAB_GenericApplyKnockback_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, GE_TransferKnockback) == 0x000B30, "Member 'UGAB_GenericApplyKnockback_C::GE_TransferKnockback' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, GE_KnockbackActive) == 0x000B38, "Member 'UGAB_GenericApplyKnockback_C::GE_KnockbackActive' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackPropagationThreshold) == 0x000B40, "Member 'UGAB_GenericApplyKnockback_C::KnockbackPropagationThreshold' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackUpMontage) == 0x000B48, "Member 'UGAB_GenericApplyKnockback_C::KnockbackUpMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackUpMontageSection) == 0x000B50, "Member 'UGAB_GenericApplyKnockback_C::KnockbackUpMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackDownMontage) == 0x000B58, "Member 'UGAB_GenericApplyKnockback_C::KnockbackDownMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackDownMontageSection) == 0x000B60, "Member 'UGAB_GenericApplyKnockback_C::KnockbackDownMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackLandMontage) == 0x000B68, "Member 'UGAB_GenericApplyKnockback_C::KnockbackLandMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackLandMontageSection) == 0x000B70, "Member 'UGAB_GenericApplyKnockback_C::KnockbackLandMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackLandToIdleMontage) == 0x000B78, "Member 'UGAB_GenericApplyKnockback_C::KnockbackLandToIdleMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackLandToIdleMontageSection) == 0x000B80, "Member 'UGAB_GenericApplyKnockback_C::KnockbackLandToIdleMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackLandToStunMontage) == 0x000B88, "Member 'UGAB_GenericApplyKnockback_C::KnockbackLandToStunMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackLandToStunMontageSection) == 0x000B90, "Member 'UGAB_GenericApplyKnockback_C::KnockbackLandToStunMontageSection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, DebugDraw) == 0x000B94, "Member 'UGAB_GenericApplyKnockback_C::DebugDraw' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, DebugNumbers) == 0x000B95, "Member 'UGAB_GenericApplyKnockback_C::DebugNumbers' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, DebugForceKnockbackValues) == 0x000B96, "Member 'UGAB_GenericApplyKnockback_C::DebugForceKnockbackValues' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, bOrientToImpulse) == 0x000B97, "Member 'UGAB_GenericApplyKnockback_C::bOrientToImpulse' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, ActiveKnockback) == 0x000B98, "Member 'UGAB_GenericApplyKnockback_C::ActiveKnockback' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, OrientDirection) == 0x000BA0, "Member 'UGAB_GenericApplyKnockback_C::OrientDirection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, HitDirection) == 0x000BB8, "Member 'UGAB_GenericApplyKnockback_C::HitDirection' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, ImpulseDirectionVelocityOrRotation) == 0x000BD0, "Member 'UGAB_GenericApplyKnockback_C::ImpulseDirectionVelocityOrRotation' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, DebugLastLocation) == 0x000BE8, "Member 'UGAB_GenericApplyKnockback_C::DebugLastLocation' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, TC_NPCStatusLockedInPlace) == 0x000C00, "Member 'UGAB_GenericApplyKnockback_C::TC_NPCStatusLockedInPlace' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, LockedInPlaceKnockbackAngle) == 0x000C08, "Member 'UGAB_GenericApplyKnockback_C::LockedInPlaceKnockbackAngle' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, LockedInPlaceKnockbackMagnitude) == 0x000C10, "Member 'UGAB_GenericApplyKnockback_C::LockedInPlaceKnockbackMagnitude' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, GE_RestoreControlResistance) == 0x000C18, "Member 'UGAB_GenericApplyKnockback_C::GE_RestoreControlResistance' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, GE_ImpactImmunity) == 0x000C20, "Member 'UGAB_GenericApplyKnockback_C::GE_ImpactImmunity' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, ActiveImpactImmunity) == 0x000C28, "Member 'UGAB_GenericApplyKnockback_C::ActiveImpactImmunity' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, bHasImpactImmunity) == 0x000C30, "Member 'UGAB_GenericApplyKnockback_C::bHasImpactImmunity' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, F_OneFrameDelay) == 0x000C38, "Member 'UGAB_GenericApplyKnockback_C::F_OneFrameDelay' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, Event_Triggered_Knockback) == 0x000C40, "Member 'UGAB_GenericApplyKnockback_C::Event_Triggered_Knockback' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackFromFloorTrap) == 0x000C44, "Member 'UGAB_GenericApplyKnockback_C::KnockbackFromFloorTrap' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackFromFloorTrap_PlayUpMontage) == 0x000C45, "Member 'UGAB_GenericApplyKnockback_C::KnockbackFromFloorTrap_PlayUpMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackFromFloorTrap_PlayDownMontage) == 0x000C46, "Member 'UGAB_GenericApplyKnockback_C::KnockbackFromFloorTrap_PlayDownMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, KnockbackFromFloorTrap_PlayLandMontage) == 0x000C47, "Member 'UGAB_GenericApplyKnockback_C::KnockbackFromFloorTrap_PlayLandMontage' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, Event_Control_Ended) == 0x000C48, "Member 'UGAB_GenericApplyKnockback_C::Event_Control_Ended' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyKnockback_C, GC_TrapKnockback_Tag) == 0x000C4C, "Member 'UGAB_GenericApplyKnockback_C::GC_TrapKnockback_Tag' has a wrong offset!");

}
