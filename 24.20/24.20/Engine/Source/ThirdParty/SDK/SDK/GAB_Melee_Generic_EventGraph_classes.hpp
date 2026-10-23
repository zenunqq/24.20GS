#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UGAB_Melee_Generic_EventGraph_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	bool                                          Stamina_Lockout;
	bool                                          Debug;
	uint8                                         Pad_B32[0x2];
	int32                                         DebugSpecificHitNumber;
	int32                                         Counter;
	uint8                                         Pad_B3C[0x4];
	class UClass*                                 GE_KnockBackImmunity;
	struct FActiveGameplayEffectHandle            GEH_KnockBackImmunity;
	class FName                                   N_SavedCollisionChannel;
	struct FGameplayTag                           TC_Triggered;
	bool                                          ParentHandlesMontage_Targeting_Commit;

public:
	void Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_8C20D6D3411A3D7E54D6049F69DF10BE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void ExecuteUbergraph_GAB_Melee_Generic_EventGraph(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnTriggeredFromAnimNotify(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void SetKnockbackImmunity(bool ImmunityOn);
	void SetPawnCollision(class AFortPawn* FortPawn, bool CollisionOn);
	void Triggered_8C20D6D3411A3D7E54D6049F69DF10BE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

	void Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing(class AActor* Actor_A, class AActor* Actor_B, double Half_Angle_Of_Actor_A_Facing, bool* IsWithinHalfAngle) const;
	void Get_X_Y_Distance_Between_Vectors(const struct FVector& vector1, const struct FVector& vector2, double* X_Y_Distance) const;
	void GetLocationAtDistanceFromActorFacing(class AActor* Actor, double Distance, double Rotation_Pitch_, double Rotation_Yaw_, struct FVector* Location) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_Melee_Generic_EventGraph_C">();
	}
	static class UGAB_Melee_Generic_EventGraph_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_Melee_Generic_EventGraph_C>();
	}
};
static_assert(alignof(UGAB_Melee_Generic_EventGraph_C) == 0x000008, "Wrong alignment on UGAB_Melee_Generic_EventGraph_C");
static_assert(sizeof(UGAB_Melee_Generic_EventGraph_C) == 0x000B60, "Wrong size on UGAB_Melee_Generic_EventGraph_C");
static_assert(offsetof(UGAB_Melee_Generic_EventGraph_C, UberGraphFrame) == 0x000B28, "Member 'UGAB_Melee_Generic_EventGraph_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_Melee_Generic_EventGraph_C, Stamina_Lockout) == 0x000B30, "Member 'UGAB_Melee_Generic_EventGraph_C::Stamina_Lockout' has a wrong offset!");
static_assert(offsetof(UGAB_Melee_Generic_EventGraph_C, Debug) == 0x000B31, "Member 'UGAB_Melee_Generic_EventGraph_C::Debug' has a wrong offset!");
static_assert(offsetof(UGAB_Melee_Generic_EventGraph_C, DebugSpecificHitNumber) == 0x000B34, "Member 'UGAB_Melee_Generic_EventGraph_C::DebugSpecificHitNumber' has a wrong offset!");
static_assert(offsetof(UGAB_Melee_Generic_EventGraph_C, Counter) == 0x000B38, "Member 'UGAB_Melee_Generic_EventGraph_C::Counter' has a wrong offset!");
static_assert(offsetof(UGAB_Melee_Generic_EventGraph_C, GE_KnockBackImmunity) == 0x000B40, "Member 'UGAB_Melee_Generic_EventGraph_C::GE_KnockBackImmunity' has a wrong offset!");
static_assert(offsetof(UGAB_Melee_Generic_EventGraph_C, GEH_KnockBackImmunity) == 0x000B48, "Member 'UGAB_Melee_Generic_EventGraph_C::GEH_KnockBackImmunity' has a wrong offset!");
static_assert(offsetof(UGAB_Melee_Generic_EventGraph_C, N_SavedCollisionChannel) == 0x000B50, "Member 'UGAB_Melee_Generic_EventGraph_C::N_SavedCollisionChannel' has a wrong offset!");
static_assert(offsetof(UGAB_Melee_Generic_EventGraph_C, TC_Triggered) == 0x000B54, "Member 'UGAB_Melee_Generic_EventGraph_C::TC_Triggered' has a wrong offset!");
static_assert(offsetof(UGAB_Melee_Generic_EventGraph_C, ParentHandlesMontage_Targeting_Commit) == 0x000B58, "Member 'UGAB_Melee_Generic_EventGraph_C::ParentHandlesMontage_Targeting_Commit' has a wrong offset!");

}
