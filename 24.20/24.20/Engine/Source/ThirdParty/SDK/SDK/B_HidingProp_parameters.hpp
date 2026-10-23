#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct B_HidingProp_C_AddGameplayCue final
{
public:
	struct FGameplayTag                           GameplayCueTag;
	uint8                                         Pad_4[0x4];
	struct FGameplayCueParameters                 CueParameters;
};
static_assert(alignof(B_HidingProp_C_AddGameplayCue) == 0x000008, "Wrong alignment on B_HidingProp_C_AddGameplayCue");
static_assert(sizeof(B_HidingProp_C_AddGameplayCue) == 0x0000D8, "Wrong size on B_HidingProp_C_AddGameplayCue");
static_assert(offsetof(B_HidingProp_C_AddGameplayCue, GameplayCueTag) == 0x000000, "Member 'B_HidingProp_C_AddGameplayCue::GameplayCueTag' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_AddGameplayCue, CueParameters) == 0x000008, "Member 'B_HidingProp_C_AddGameplayCue::CueParameters' has a wrong offset!");

struct B_HidingProp_C_AddHiddenPlayer final
{
public:
	class AFortPawn*                              FortPawn;
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_19[0x7];
	double                                        CallFunc_GetRealTimeSeconds_ReturnValue;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	uint8                                         Pad_29[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue;
	int32                                         CallFunc_Array_AddUnique_ReturnValue;
};
static_assert(alignof(B_HidingProp_C_AddHiddenPlayer) == 0x000008, "Wrong alignment on B_HidingProp_C_AddHiddenPlayer");
static_assert(sizeof(B_HidingProp_C_AddHiddenPlayer) == 0x000038, "Wrong size on B_HidingProp_C_AddHiddenPlayer");
static_assert(offsetof(B_HidingProp_C_AddHiddenPlayer, FortPawn) == 0x000000, "Member 'B_HidingProp_C_AddHiddenPlayer::FortPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_AddHiddenPlayer, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x000008, "Member 'B_HidingProp_C_AddHiddenPlayer::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_AddHiddenPlayer, CallFunc_GetFortAbilitySystemComponent_ReturnValue_1) == 0x000010, "Member 'B_HidingProp_C_AddHiddenPlayer::CallFunc_GetFortAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_AddHiddenPlayer, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'B_HidingProp_C_AddHiddenPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_AddHiddenPlayer, CallFunc_GetRealTimeSeconds_ReturnValue) == 0x000020, "Member 'B_HidingProp_C_AddHiddenPlayer::CallFunc_GetRealTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_AddHiddenPlayer, CallFunc_IsValidClass_ReturnValue) == 0x000028, "Member 'B_HidingProp_C_AddHiddenPlayer::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_AddHiddenPlayer, CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue) == 0x00002C, "Member 'B_HidingProp_C_AddHiddenPlayer::CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_AddHiddenPlayer, CallFunc_Array_AddUnique_ReturnValue) == 0x000034, "Member 'B_HidingProp_C_AddHiddenPlayer::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

struct B_HidingProp_C_Allow_Cosmetics_For_Pawn final
{
public:
	const class AFortPawn*                        Pawn_0;
	bool                                          allow;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_Array_Contains_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(B_HidingProp_C_Allow_Cosmetics_For_Pawn) == 0x000008, "Wrong alignment on B_HidingProp_C_Allow_Cosmetics_For_Pawn");
static_assert(sizeof(B_HidingProp_C_Allow_Cosmetics_For_Pawn) == 0x000010, "Wrong size on B_HidingProp_C_Allow_Cosmetics_For_Pawn");
static_assert(offsetof(B_HidingProp_C_Allow_Cosmetics_For_Pawn, Pawn_0) == 0x000000, "Member 'B_HidingProp_C_Allow_Cosmetics_For_Pawn::Pawn_0' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Allow_Cosmetics_For_Pawn, allow) == 0x000008, "Member 'B_HidingProp_C_Allow_Cosmetics_For_Pawn::allow' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Allow_Cosmetics_For_Pawn, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'B_HidingProp_C_Allow_Cosmetics_For_Pawn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Allow_Cosmetics_For_Pawn, CallFunc_Array_Contains_ReturnValue) == 0x00000A, "Member 'B_HidingProp_C_Allow_Cosmetics_For_Pawn::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Allow_Cosmetics_For_Pawn, CallFunc_Not_PreBool_ReturnValue) == 0x00000B, "Member 'B_HidingProp_C_Allow_Cosmetics_For_Pawn::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Allow_Cosmetics_For_Pawn, CallFunc_Not_PreBool_ReturnValue_1) == 0x00000C, "Member 'B_HidingProp_C_Allow_Cosmetics_For_Pawn::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Allow_Cosmetics_For_Pawn, CallFunc_BooleanOR_ReturnValue) == 0x00000D, "Member 'B_HidingProp_C_Allow_Cosmetics_For_Pawn::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct B_HidingProp_C_BlueprintOnInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
};
static_assert(alignof(B_HidingProp_C_BlueprintOnInteract) == 0x000008, "Wrong alignment on B_HidingProp_C_BlueprintOnInteract");
static_assert(sizeof(B_HidingProp_C_BlueprintOnInteract) == 0x000010, "Wrong size on B_HidingProp_C_BlueprintOnInteract");
static_assert(offsetof(B_HidingProp_C_BlueprintOnInteract, InteractingPawn) == 0x000000, "Member 'B_HidingProp_C_BlueprintOnInteract::InteractingPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintOnInteract, InteractionBeingAttempted) == 0x000008, "Member 'B_HidingProp_C_BlueprintOnInteract::InteractionBeingAttempted' has a wrong offset!");

struct B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	bool                                          bFromSweep;
	uint8                                         Pad_1D[0x3];
	struct FHitResult                             SweepResult;
};
static_assert(alignof(B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature) == 0x000100, "Wrong size on B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

struct B_HidingProp_C_BP_HandleExitPressed final
{
public:
	class AFortPlayerPawn*                        TargetPlayerPawn;
};
static_assert(alignof(B_HidingProp_C_BP_HandleExitPressed) == 0x000008, "Wrong alignment on B_HidingProp_C_BP_HandleExitPressed");
static_assert(sizeof(B_HidingProp_C_BP_HandleExitPressed) == 0x000008, "Wrong size on B_HidingProp_C_BP_HandleExitPressed");
static_assert(offsetof(B_HidingProp_C_BP_HandleExitPressed, TargetPlayerPawn) == 0x000000, "Member 'B_HidingProp_C_BP_HandleExitPressed::TargetPlayerPawn' has a wrong offset!");

struct B_HidingProp_C_Can_Hide_by_Falling final
{
public:
	class AActor*                                 OtherActor;
	bool                                          CanHide;
	uint8                                         Pad_9[0x7];
	class AFortPlayerPawn*                        aFortPlayerPawn;
	class AFortPlayerPawn*                        local_FortPlayerPawn;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	uint8                                         Pad_31[0x3];
	int32                                         CallFunc_GetPlayerLimit_PlayerLimit;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_3D[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_45[0x3];
	int32                                         CallFunc_Array_Find_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_IsPassengerInVehicle_ReturnValue;
	bool                                          CallFunc_IsInVehicle_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_79[0x7];
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_99[0x3];
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;
	bool                                          CallFunc_CanPerformNativeAction_ReturnValue;
	uint8                                         Pad_A1[0x7];
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_C9[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
};
static_assert(alignof(B_HidingProp_C_Can_Hide_by_Falling) == 0x000008, "Wrong alignment on B_HidingProp_C_Can_Hide_by_Falling");
static_assert(sizeof(B_HidingProp_C_Can_Hide_by_Falling) == 0x0000E8, "Wrong size on B_HidingProp_C_Can_Hide_by_Falling");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, OtherActor) == 0x000000, "Member 'B_HidingProp_C_Can_Hide_by_Falling::OtherActor' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CanHide) == 0x000008, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CanHide' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, aFortPlayerPawn) == 0x000010, "Member 'B_HidingProp_C_Can_Hide_by_Falling::aFortPlayerPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, local_FortPlayerPawn) == 0x000018, "Member 'B_HidingProp_C_Can_Hide_by_Falling::local_FortPlayerPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000020, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000030, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_GetPlayerLimit_PlayerLimit) == 0x000034, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_GetPlayerLimit_PlayerLimit' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_Greater_IntInt_ReturnValue) == 0x00003C, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_Array_Length_ReturnValue_1) == 0x000040, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_Array_Find_ReturnValue) == 0x000048, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00004C, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_IsPassengerInVehicle_ReturnValue) == 0x00004D, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_IsPassengerInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_IsInVehicle_ReturnValue) == 0x00004E, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_BooleanOR_ReturnValue) == 0x00004F, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x000050, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_GetVelocity_ReturnValue) == 0x000058, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000070, "Member 'B_HidingProp_C_Can_Hide_by_Falling::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'B_HidingProp_C_Can_Hide_by_Falling::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_BreakVector_X) == 0x000080, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_BreakVector_Y) == 0x000088, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_BreakVector_Z) == 0x000090, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000098, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x00009C, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_CanPerformNativeAction_ReturnValue) == 0x0000A0, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_CanPerformNativeAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_MakeGameplayTagContainerFromArray_ReturnValue) == 0x0000A8, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_MakeGameplayTagContainerFromArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_IsServer_ReturnValue) == 0x0000C8, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x0000D0, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Can_Hide_by_Falling, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x0000E0, "Member 'B_HidingProp_C_Can_Hide_by_Falling::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");

struct B_HidingProp_C_CheckCanUsePassage final
{
public:
	class UObject*                                Object;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsInInfiltrationLTM_ReturnValue;
	uint8                                         Pad_1A[0x6];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
};
static_assert(alignof(B_HidingProp_C_CheckCanUsePassage) == 0x000008, "Wrong alignment on B_HidingProp_C_CheckCanUsePassage");
static_assert(sizeof(B_HidingProp_C_CheckCanUsePassage) == 0x000038, "Wrong size on B_HidingProp_C_CheckCanUsePassage");
static_assert(offsetof(B_HidingProp_C_CheckCanUsePassage, Object) == 0x000000, "Member 'B_HidingProp_C_CheckCanUsePassage::Object' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_CheckCanUsePassage, ReturnValue) == 0x000008, "Member 'B_HidingProp_C_CheckCanUsePassage::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_CheckCanUsePassage, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000010, "Member 'B_HidingProp_C_CheckCanUsePassage::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_CheckCanUsePassage, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'B_HidingProp_C_CheckCanUsePassage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_CheckCanUsePassage, CallFunc_IsInInfiltrationLTM_ReturnValue) == 0x000019, "Member 'B_HidingProp_C_CheckCanUsePassage::CallFunc_IsInInfiltrationLTM_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_CheckCanUsePassage, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000020, "Member 'B_HidingProp_C_CheckCanUsePassage::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_CheckCanUsePassage, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000030, "Member 'B_HidingProp_C_CheckCanUsePassage::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");

struct B_HidingProp_C_EndHidingAnalyticSession final
{
public:
	class AFortPawn*                              FortPawn;
	EEnvironmentalItemEndReason                   EndReason;
};
static_assert(alignof(B_HidingProp_C_EndHidingAnalyticSession) == 0x000008, "Wrong alignment on B_HidingProp_C_EndHidingAnalyticSession");
static_assert(sizeof(B_HidingProp_C_EndHidingAnalyticSession) == 0x000010, "Wrong size on B_HidingProp_C_EndHidingAnalyticSession");
static_assert(offsetof(B_HidingProp_C_EndHidingAnalyticSession, FortPawn) == 0x000000, "Member 'B_HidingProp_C_EndHidingAnalyticSession::FortPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_EndHidingAnalyticSession, EndReason) == 0x000008, "Member 'B_HidingProp_C_EndHidingAnalyticSession::EndReason' has a wrong offset!");

struct B_HidingProp_C_EntranceBlockedByUndamageable final
{
public:
	class AFortPlayerPawn*                        PlayerPawn;
};
static_assert(alignof(B_HidingProp_C_EntranceBlockedByUndamageable) == 0x000008, "Wrong alignment on B_HidingProp_C_EntranceBlockedByUndamageable");
static_assert(sizeof(B_HidingProp_C_EntranceBlockedByUndamageable) == 0x000008, "Wrong size on B_HidingProp_C_EntranceBlockedByUndamageable");
static_assert(offsetof(B_HidingProp_C_EntranceBlockedByUndamageable, PlayerPawn) == 0x000000, "Member 'B_HidingProp_C_EntranceBlockedByUndamageable::PlayerPawn' has a wrong offset!");

struct B_HidingProp_C_ExecuteGameplayCue final
{
public:
	struct FGameplayTag                           GameplayCueTag;
	uint8                                         Pad_4[0x4];
	struct FGameplayCueParameters                 CueParameters;
};
static_assert(alignof(B_HidingProp_C_ExecuteGameplayCue) == 0x000008, "Wrong alignment on B_HidingProp_C_ExecuteGameplayCue");
static_assert(sizeof(B_HidingProp_C_ExecuteGameplayCue) == 0x0000D8, "Wrong size on B_HidingProp_C_ExecuteGameplayCue");
static_assert(offsetof(B_HidingProp_C_ExecuteGameplayCue, GameplayCueTag) == 0x000000, "Member 'B_HidingProp_C_ExecuteGameplayCue::GameplayCueTag' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteGameplayCue, CueParameters) == 0x000008, "Member 'B_HidingProp_C_ExecuteGameplayCue::CueParameters' has a wrong offset!");

struct B_HidingProp_C_ExecuteUbergraph_B_HidingProp final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_Damage;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;
	struct FVector                                K2Node_Event_Momentum;
	struct FHitResult                             K2Node_Event_HitInfo;
	class AController*                            K2Node_Event_InstigatedBy;
	class AActor*                                 K2Node_Event_DamageCauser;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_154[0x4];
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;
	uint8                                         Pad_175[0x3];
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;
	bool                                          CallFunc_Can_Hide_by_Falling_CanHide;
	uint8                                         Pad_309[0x7];
	class AFortPlayerPawn*                        CallFunc_Can_Hide_by_Falling_aFortPlayerPawn;
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	class AFortPlayerPawn*                        K2Node_CustomEvent_PlayerPawn_2;
	double                                        K2Node_CustomEvent_Z_Velocity_Mag;
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_1;
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_2;
	class AFortPlayerPawn*                        K2Node_CustomEvent_PlayerPawn_1;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	TArray<class AActor*>                         K2Node_MakeArray_Array;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_3;
	class AActor*                                 K2Node_Event_OtherActor;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_6B1[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	uint8                                         Pad_6C9[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_6D1[0x7];
	class AFortPawn*                              CallFunc_Array_Get_Item;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         Temp_int_Array_Index_Variable;
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array_1;
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	const class AFortPawn*                        K2Node_Event_InteractingPawn;
	EInteractionBeingAttempted                    K2Node_Event_InteractionBeingAttempted;
	bool                                          CallFunc_BlueprintCanInteract_ReturnValue;
	uint8                                         Pad_722[0x6];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	uint8                                         Pad_739[0x7];
	class AFortPawn*                              K2Node_CustomEvent_FortPawn_1;
	EEnvironmentalItemEndReason                   K2Node_CustomEvent_EndReason;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_74A[0x6];
	class AController*                            CallFunc_GetController_ReturnValue;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_762[0x6];
	double                                        CallFunc_GetRealTimeSeconds_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	class AFortPawn*                              K2Node_CustomEvent_FortPawn;
	double                                        CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	uint8                                         Pad_789[0x7];
	class AActor*                                 K2Node_CustomEvent_DamagedActor;
	float                                         K2Node_CustomEvent_Damage;
	uint8                                         Pad_79C[0x4];
	class AController*                            K2Node_CustomEvent_InstigatedBy;
	class AActor*                                 K2Node_CustomEvent_DamageCauser;
	struct FVector                                K2Node_CustomEvent_HitLocation;
	class UPrimitiveComponent*                    K2Node_CustomEvent_FHitComponent;
	class FName                                   K2Node_CustomEvent_BoneName;
	uint8                                         Pad_7D4[0x4];
	struct FVector                                K2Node_CustomEvent_Momentum;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_7F9[0x7];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Map_Find_Value_1;
	bool                                          CallFunc_Map_Find_ReturnValue_1;
	bool                                          CallFunc_Map_Remove_ReturnValue;
	uint8                                         Pad_812[0x6];
	const class AFortPawn*                        K2Node_CustomEvent_Pawn_2;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_821[0x7];
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_841[0x7];
	class AActor*                                 K2Node_CustomEvent_Pawn_1;
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_861[0x7];
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_2;
	uint8                                         Pad_871[0x7];
	class AFortPawn*                              K2Node_CustomEvent_Target_1;
	double                                        K2Node_CustomEvent_InIgnoreDuration;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_891[0x7];
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	bool                                          CallFunc_IsServer_ReturnValue_1;
	uint8                                         Pad_8A9[0x7];
	class AFortPlayerController*                  CallFunc_Array_Get_Item_1;
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	uint8                                         Pad_8C4[0x4];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_8D1[0x3];
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate_1;
	int32                                         CallFunc_Array_Find_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_8E6[0x2];
	class AFortPawn*                              K2Node_CustomEvent_InteractingPawn;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	uint8                                         Pad_8F4[0x4];
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_4;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_9A9[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_5;
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_A69[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_2;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	uint8                                         Pad_A79[0x3];
	struct FGameplayTag                           K2Node_CustomEvent_GameplayCueTag_2;
	struct FGameplayCueParameters                 K2Node_CustomEvent_CueParameters_2;
	bool                                          CallFunc_IsServer_ReturnValue_2;
	bool                                          CallFunc_IsServer_ReturnValue_3;
	uint8                                         Pad_B52[0x2];
	struct FGameplayTag                           K2Node_CustomEvent_GameplayCueTag_1;
	struct FGameplayCueParameters                 K2Node_CustomEvent_CueParameters_1;
	bool                                          CallFunc_IsServer_ReturnValue_4;
	uint8                                         Pad_C29[0x3];
	struct FGameplayTag                           K2Node_CustomEvent_GameplayCueTag;
	struct FGameplayCueParameters                 K2Node_CustomEvent_CueParameters;
	int32                                         Temp_int_Array_Index_Variable_1;
	int32                                         Temp_int_Loop_Counter_Variable_2;
	int32                                         Temp_int_Array_Index_Variable_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_D1C[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          CallFunc_RowToBool_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_D2A[0x2];
	int32                                         Temp_int_Array_Index_Variable_3;
	bool                                          CallFunc_RowToBool_ReturnValue_1;
	bool                                          CallFunc_RowToBool_ReturnValue_2;
	bool                                          CallFunc_IsServer_ReturnValue_5;
	bool                                          CallFunc_IsServer_ReturnValue_6;
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_D39[0x7];
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array_2;
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1;
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;
	class AController*                            CallFunc_GetOwningController_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;
	struct FVector                                CallFunc_SelectVector_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_E69[0x7];
	TArray<struct FHitResult>                     CallFunc_BoxTraceMulti_OutHits;
	bool                                          CallFunc_BoxTraceMulti_ReturnValue;
	uint8                                         Pad_E81[0x7];
	struct FHitResult                             CallFunc_Array_Get_Item_2;
	int32                                         CallFunc_Array_Length_ReturnValue_3;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_F6E[0x2];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	struct FVector                                CallFunc_BreakHitResult_Location;
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;
	struct FVector                                CallFunc_BreakHitResult_Normal;
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;
	class AActor*                                 CallFunc_BreakHitResult_HitActor;
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;
	class FName                                   CallFunc_BreakHitResult_HitBoneName;
	class FName                                   CallFunc_BreakHitResult_BoneName;
	int32                                         CallFunc_BreakHitResult_HitItem;
	int32                                         CallFunc_BreakHitResult_ElementIndex;
	int32                                         CallFunc_BreakHitResult_FaceIndex;
	uint8                                         Pad_1004[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_1039[0x7];
	class ABuildingActor*                         K2Node_DynamicCast_AsBuilding_Actor;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	uint8                                         Pad_1049[0x7];
	class ABuildingTrap*                          K2Node_DynamicCast_AsBuilding_Trap;
	bool                                          K2Node_DynamicCast_bSuccess_8;
	uint8                                         Pad_1059[0x7];
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_3;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_107A[0x6];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_3;
	bool                                          K2Node_DynamicCast_bSuccess_9;
	uint8                                         Pad_1089[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue;
	uint8                                         Pad_1094[0x4];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_4;
	bool                                          K2Node_DynamicCast_bSuccess_10;
	uint8                                         Pad_10A1[0x7];
	TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_11;
	uint8                                         Pad_10B9[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	uint8                                         Pad_10D1[0x7];
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue_2;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1;
	uint8                                         Pad_10F1[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue;
	bool                                          CallFunc_IsActorSubmergedInOcean_ReturnValue;
	uint8                                         Pad_10FD[0x3];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	class AFortGameStateAthena*                   K2Node_DynamicCast_AsFort_Game_State_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_12;
	uint8                                         Pad_1129[0x3];
	int32                                         Temp_int_Loop_Counter_Variable_3;
	struct FGameplayTagContainer                  CallFunc_GetPoiGridTagsForLocation_ReturnValue;
	bool                                          CallFunc_HasAnyTags_ReturnValue;
	uint8                                         Pad_1151[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_IsServer_ReturnValue_7;
	uint8                                         Pad_115A[0x6];
	class UFortAsyncAction_OnCurieActivated*      CallFunc_OnCurieActivated_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_1169[0x7];
	TArray<class AFortPickup*>                    K2Node_CustomEvent_Array;
	class AActor*                                 K2Node_CustomEvent_Pawn;
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;
	class AFortPickup*                            CallFunc_Array_Get_Item_3;
	int32                                         CallFunc_Array_Length_ReturnValue_4;
	int32                                         CallFunc_Array_Length_ReturnValue_5;
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;
	uint8                                         Pad_11B2[0x6];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_11DC[0x4];
	struct FVector                                CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue;
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Array_Add_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_1201[0x7];
	struct FVector                                CallFunc_Array_Get_Item_4;
	TArray<struct FVector>                        K2Node_MakeArray_Array_3;
	struct FVector                                K2Node_Select_Default;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_4;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_1261[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;
	class UFortAsyncAction_CurrentPlaylistReady*  CallFunc_PlaylistDataReadyAsync_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_3;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_5;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	uint8                                         Pad_12D9[0x7];
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_6;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	class AFortGameStateAthena*                   Temp_object_Variable;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_4;
	struct FGameplayTagContainer                  CallFunc_GetAthenaPlaylistContextTags_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_7;
	bool                                          CallFunc_HasTag_ReturnValue;
	uint8                                         Pad_1359[0x7];
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;
	uint8                                         Pad_1441[0x7];
	class UFortPlaylist*                          Temp_object_Variable_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_1451[0x3];
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;
	struct FGameplayTagContainer                  Temp_struct_Variable;
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;
	struct FVector                                CallFunc_SelectVector_ReturnValue_1;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_8;
	TArray<class AFortPickup*>                    CallFunc_SpawnLootFromTable_ItemPickupsSpawned;
	class AFortPlayerPawn*                        K2Node_CustomEvent_PlayerPawn;
	class UFortPhysicsObjectComponent*            CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	uint8                                         Pad_14FA[0x6];
	class AFortGameStateAthena*                   K2Node_CustomEvent_GameState;
	const class UFortPlaylist*                    K2Node_CustomEvent_Playlist;
	struct FGameplayTagContainer                  K2Node_CustomEvent_PlaylistContextTags;
	class AFortPawn*                              K2Node_CustomEvent_Target;
	double                                        K2Node_CustomEvent_Ignore_Duration;
	class UFortPhysicsObjectComponent*            CallFunc_GetPhysicsObjectComponent_ReturnValue;
	TDelegate<void(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)> K2Node_CreateDelegate_OutputDelegate_4;
	bool                                          CallFunc_IsValid_ReturnValue_10;
	uint8                                         Pad_1555[0x3];
	class AFortPlayerPawn*                        K2Node_Event_TargetPlayerPawn;
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_6;
	double                                        CallFunc_GetTurnClientCameraCollisionOnDelayTime_Delay;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	float                                         K2Node_MakeStruct_EventMagnitude_ImplicitCast;
	float                                         CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;
	float                                         CallFunc_FireAnalyticEventEnvironmentalItemUsed_SessionLength_ImplicitCast;
	float                                         CallFunc_AddIgnoredActor_InIgnoreDuration_ImplicitCast;
	double                                        CallFunc_Multiply_VectorFloat_B_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp) == 0x000008, "Wrong alignment on B_HidingProp_C_ExecuteUbergraph_B_HidingProp");
static_assert(sizeof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp) == 0x001650, "Wrong size on B_HidingProp_C_ExecuteUbergraph_B_HidingProp");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, EntryPoint) == 0x000000, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_Event_Damage) == 0x000004, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_Event_DamageTags) == 0x000008, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_Event_Momentum) == 0x000028, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_Event_HitInfo) == 0x000040, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_Event_InstigatedBy) == 0x000120, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_Event_DamageCauser) == 0x000128, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_Event_EffectContext) == 0x000130, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CreateDelegate_OutputDelegate) == 0x000148, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000158, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_ComponentBoundEvent_OtherActor) == 0x000160, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_ComponentBoundEvent_OtherComp) == 0x000168, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000170, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_ComponentBoundEvent_bFromSweep) == 0x000174, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_ComponentBoundEvent_SweepResult) == 0x000178, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_MakeStruct_GameplayEventData) == 0x000258, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Can_Hide_by_Falling_CanHide) == 0x000308, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Can_Hide_by_Falling_CanHide' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Can_Hide_by_Falling_aFortPlayerPawn) == 0x000310, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Can_Hide_by_Falling_aFortPlayerPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetVelocity_ReturnValue) == 0x000318, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakVector_X) == 0x000330, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakVector_Y) == 0x000338, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakVector_Z) == 0x000340, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_PlayerPawn_2) == 0x000348, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_PlayerPawn_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_Z_Velocity_Mag) == 0x000350, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_Z_Velocity_Mag' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_MakeStruct_GameplayEventData_1) == 0x000358, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_MakeStruct_GameplayEventData_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_MakeStruct_GameplayEventData_2) == 0x000408, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_MakeStruct_GameplayEventData_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_PlayerPawn_1) == 0x0004B8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_PlayerPawn_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_RandomFloatInRange_ReturnValue) == 0x0004C0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_MakeArray_Array) == 0x0004C8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_MakeVector_ReturnValue) == 0x0004D8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_RotateAngleAxis_ReturnValue) == 0x0004F0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000508, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000520, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_MakeStruct_GameplayEventData_3) == 0x0005F0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_MakeStruct_GameplayEventData_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_Event_OtherActor) == 0x0006A0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0006A8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_bSuccess) == 0x0006B0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_IntInt_ReturnValue) == 0x0006B4, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x0006B8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0006C8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Array_Length_ReturnValue) == 0x0006CC, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0006D0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Array_Get_Item) == 0x0006D8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_IntInt_ReturnValue_1) == 0x0006E0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, Temp_int_Array_Index_Variable) == 0x0006E4, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_MakeArray_Array_1) == 0x0006E8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_MakeGameplayTagContainerFromArray_ReturnValue) == 0x0006F8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_MakeGameplayTagContainerFromArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_Event_InteractingPawn) == 0x000718, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_Event_InteractingPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_Event_InteractionBeingAttempted) == 0x000720, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_Event_InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BlueprintCanInteract_ReturnValue) == 0x000721, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BlueprintCanInteract_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_HasMatchingGameplayTag_self_CastInput_1) == 0x000728, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_HasMatchingGameplayTag_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x000738, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_FortPawn_1) == 0x000740, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_FortPawn_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_EndReason) == 0x000748, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_EndReason' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsValid_ReturnValue) == 0x000749, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetController_ReturnValue) == 0x000750, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000758, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_bSuccess_1) == 0x000760, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsValid_ReturnValue_1) == 0x000761, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetRealTimeSeconds_ReturnValue) == 0x000768, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetRealTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, Temp_int_Loop_Counter_Variable) == 0x000770, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_IntInt_ReturnValue_2) == 0x000774, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_FortPawn) == 0x000778, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_FortPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Map_Find_Value) == 0x000780, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Map_Find_ReturnValue) == 0x000788, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_DamagedActor) == 0x000790, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_DamagedActor' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_Damage) == 0x000798, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_InstigatedBy) == 0x0007A0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_DamageCauser) == 0x0007A8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_HitLocation) == 0x0007B0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_FHitComponent) == 0x0007C8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_FHitComponent' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_BoneName) == 0x0007D0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_BoneName' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_Momentum) == 0x0007D8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_Momentum' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x0007F0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_bSuccess_2) == 0x0007F8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000800, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Map_Find_Value_1) == 0x000808, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Map_Find_ReturnValue_1) == 0x000810, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Map_Remove_ReturnValue) == 0x000811, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_Pawn_2) == 0x000818, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_Pawn_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsValid_ReturnValue_2) == 0x000820, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_MakeVector_ReturnValue_1) == 0x000828, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsServer_ReturnValue) == 0x000840, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_Pawn_1) == 0x000848, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_Pawn_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000850, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_bSuccess_3) == 0x000860, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x000868, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_HasMatchingGameplayTag_ReturnValue_2) == 0x000870, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_HasMatchingGameplayTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_Target_1) == 0x000878, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_Target_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_InIgnoreDuration) == 0x000880, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_InIgnoreDuration' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000888, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_bSuccess_4) == 0x000890, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000898, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsServer_ReturnValue_1) == 0x0008A8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Array_Get_Item_1) == 0x0008B0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetViewTarget_ReturnValue) == 0x0008B8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Array_Length_ReturnValue_1) == 0x0008C0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_AsFort_Pawn) == 0x0008C8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_bSuccess_5) == 0x0008D0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CreateDelegate_OutputDelegate_1) == 0x0008D4, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Array_Find_ReturnValue) == 0x0008E0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0008E4, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Not_PreBool_ReturnValue) == 0x0008E5, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_InteractingPawn) == 0x0008E8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_InteractingPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, Temp_int_Loop_Counter_Variable_1) == 0x0008F0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_MakeStruct_GameplayEventData_4) == 0x0008F8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_MakeStruct_GameplayEventData_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Less_IntInt_ReturnValue) == 0x0009A8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_IntInt_ReturnValue_3) == 0x0009AC, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_MakeStruct_GameplayEventData_5) == 0x0009B0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_MakeStruct_GameplayEventData_5' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetFortAbilitySystemComponent_ReturnValue_1) == 0x000A60, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetFortAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, Temp_bool_Variable) == 0x000A68, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_AsFort_Player_Pawn_2) == 0x000A70, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_AsFort_Player_Pawn_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_bSuccess_6) == 0x000A78, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_GameplayCueTag_2) == 0x000A7C, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_GameplayCueTag_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_CueParameters_2) == 0x000A80, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_CueParameters_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsServer_ReturnValue_2) == 0x000B50, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsServer_ReturnValue_3) == 0x000B51, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsServer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_GameplayCueTag_1) == 0x000B54, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_GameplayCueTag_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_CueParameters_1) == 0x000B58, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_CueParameters_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsServer_ReturnValue_4) == 0x000C28, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsServer_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_GameplayCueTag) == 0x000C2C, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_GameplayCueTag' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_CueParameters) == 0x000C30, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_CueParameters' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, Temp_int_Array_Index_Variable_1) == 0x000D00, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, Temp_int_Loop_Counter_Variable_2) == 0x000D04, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, Temp_int_Array_Index_Variable_2) == 0x000D08, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_IntInt_ReturnValue_4) == 0x000D0C, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CreateDelegate_OutputDelegate_2) == 0x000D10, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000D20, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_RowToBool_ReturnValue) == 0x000D28, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_RowToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsValid_ReturnValue_3) == 0x000D29, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, Temp_int_Array_Index_Variable_3) == 0x000D2C, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_RowToBool_ReturnValue_1) == 0x000D30, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_RowToBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_RowToBool_ReturnValue_2) == 0x000D31, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_RowToBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsServer_ReturnValue_5) == 0x000D32, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsServer_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsServer_ReturnValue_6) == 0x000D33, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsServer_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Array_Length_ReturnValue_2) == 0x000D34, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Greater_IntInt_ReturnValue) == 0x000D38, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetForwardVector_ReturnValue) == 0x000D40, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000D58, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_VectorVector_ReturnValue) == 0x000D70, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_MakeArray_Array_2) == 0x000D88, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1) == 0x000D98, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetForwardVector_ReturnValue_1) == 0x000DB8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetOwningController_ReturnValue) == 0x000DD0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetOwningController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000DD8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000DF0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000E08, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_SelectVector_ReturnValue) == 0x000E20, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000E38, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_VectorVector_ReturnValue_3) == 0x000E50, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsValid_ReturnValue_4) == 0x000E68, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BoxTraceMulti_OutHits) == 0x000E70, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BoxTraceMulti_OutHits' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BoxTraceMulti_ReturnValue) == 0x000E80, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BoxTraceMulti_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Array_Get_Item_2) == 0x000E88, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Array_Length_ReturnValue_3) == 0x000F68, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_bBlockingHit) == 0x000F6C, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_bInitialOverlap) == 0x000F6D, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_Time) == 0x000F70, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_Distance) == 0x000F74, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_Location) == 0x000F78, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_ImpactPoint) == 0x000F90, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_Normal) == 0x000FA8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_ImpactNormal) == 0x000FC0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_PhysMat) == 0x000FD8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_HitActor) == 0x000FE0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_HitComponent) == 0x000FE8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_HitBoneName) == 0x000FF0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_BoneName) == 0x000FF4, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_HitItem) == 0x000FF8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_ElementIndex) == 0x000FFC, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_FaceIndex) == 0x001000, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_TraceStart) == 0x001008, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BreakHitResult_TraceEnd) == 0x001020, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Less_IntInt_ReturnValue_1) == 0x001038, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_AsBuilding_Actor) == 0x001040, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_AsBuilding_Actor' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_bSuccess_7) == 0x001048, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_AsBuilding_Trap) == 0x001050, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_AsBuilding_Trap' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_bSuccess_8) == 0x001058, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetAttachParentActor_ReturnValue) == 0x001060, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_HasMatchingGameplayTag_self_CastInput_2) == 0x001068, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_HasMatchingGameplayTag_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_HasMatchingGameplayTag_ReturnValue_3) == 0x001078, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_HasMatchingGameplayTag_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x001079, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_AsFort_Player_Pawn_3) == 0x001080, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_AsFort_Player_Pawn_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_bSuccess_9) == 0x001088, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue) == 0x00108C, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_AsFort_Player_Pawn_4) == 0x001098, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_AsFort_Player_Pawn_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_bSuccess_10) == 0x0010A0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_AsFort_Vehicle_Interface) == 0x0010A8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_AsFort_Vehicle_Interface' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_bSuccess_11) == 0x0010B8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x0010C0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x0010D0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetFortAbilitySystemComponent_ReturnValue_2) == 0x0010D8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetFortAbilitySystemComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1) == 0x0010E0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1) == 0x0010F0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue) == 0x0010F4, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsActorSubmergedInOcean_ReturnValue) == 0x0010FC, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsActorSubmergedInOcean_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_K2_GetActorLocation_ReturnValue) == 0x001100, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetGameState_ReturnValue) == 0x001118, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_AsFort_Game_State_Athena) == 0x001120, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_AsFort_Game_State_Athena' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_DynamicCast_bSuccess_12) == 0x001128, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, Temp_int_Loop_Counter_Variable_3) == 0x00112C, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetPoiGridTagsForLocation_ReturnValue) == 0x001130, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetPoiGridTagsForLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_HasAnyTags_ReturnValue) == 0x001150, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_HasAnyTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_IntInt_ReturnValue_5) == 0x001154, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsValid_ReturnValue_5) == 0x001158, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsServer_ReturnValue_7) == 0x001159, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsServer_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_OnCurieActivated_ReturnValue) == 0x001160, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_OnCurieActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsValid_ReturnValue_6) == 0x001168, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_Array) == 0x001170, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_Array' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_Pawn) == 0x001180, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_Pawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetActorForwardVector_ReturnValue) == 0x001188, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Array_Get_Item_3) == 0x0011A0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Array_Length_ReturnValue_4) == 0x0011A8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Array_Length_ReturnValue_5) == 0x0011AC, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Less_IntInt_ReturnValue_2) == 0x0011B0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Less_IntInt_ReturnValue_3) == 0x0011B1, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0011B8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CreateDelegate_OutputDelegate_3) == 0x0011D0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue) == 0x0011E0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, Temp_int_Variable) == 0x0011F8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Array_Add_ReturnValue) == 0x0011FC, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, Temp_bool_Variable_1) == 0x001200, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Array_Get_Item_4) == 0x001208, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_MakeArray_Array_3) == 0x001220, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_Select_Default) == 0x001230, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_VectorVector_ReturnValue_4) == 0x001248, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_VectorVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Not_PreBool_ReturnValue_1) == 0x001260, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x001268, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x001270, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_MakeVector_ReturnValue_2) == 0x001288, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_PlaylistDataReadyAsync_ReturnValue) == 0x0012A0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_PlaylistDataReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Multiply_VectorFloat_ReturnValue_3) == 0x0012A8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Multiply_VectorFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_VectorVector_ReturnValue_5) == 0x0012C0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_VectorVector_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsValid_ReturnValue_7) == 0x0012D8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_VectorVector_ReturnValue_6) == 0x0012E0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_VectorVector_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0012F8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, Temp_object_Variable) == 0x001300, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Multiply_VectorFloat_ReturnValue_4) == 0x001308, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Multiply_VectorFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetAthenaPlaylistContextTags_ReturnValue) == 0x001320, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetAthenaPlaylistContextTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_VectorVector_ReturnValue_7) == 0x001340, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_VectorVector_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_HasTag_ReturnValue) == 0x001358, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x001360, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_K2_SetActorLocation_ReturnValue) == 0x001440, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, Temp_object_Variable_1) == 0x001448, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_BooleanAND_ReturnValue) == 0x001450, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Conv_StringToName_ReturnValue) == 0x001454, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, Temp_struct_Variable) == 0x001458, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetActorRightVector_ReturnValue) == 0x001478, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x001490, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_SelectVector_ReturnValue_1) == 0x0014A8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_SelectVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Add_VectorVector_ReturnValue_8) == 0x0014C0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Add_VectorVector_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_SpawnLootFromTable_ItemPickupsSpawned) == 0x0014D8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_SpawnLootFromTable_ItemPickupsSpawned' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_PlayerPawn) == 0x0014E8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_PlayerPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetComponentByClass_ReturnValue) == 0x0014F0, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsValid_ReturnValue_8) == 0x0014F8, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsValid_ReturnValue_9) == 0x0014F9, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_GameState) == 0x001500, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_GameState' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_Playlist) == 0x001508, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_Playlist' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_PlaylistContextTags) == 0x001510, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_PlaylistContextTags' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_Target) == 0x001530, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CustomEvent_Ignore_Duration) == 0x001538, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CustomEvent_Ignore_Duration' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetPhysicsObjectComponent_ReturnValue) == 0x001540, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetPhysicsObjectComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_CreateDelegate_OutputDelegate_4) == 0x001548, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_IsValid_ReturnValue_10) == 0x001554, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_Event_TargetPlayerPawn) == 0x001558, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_Event_TargetPlayerPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_MakeStruct_GameplayEventData_6) == 0x001560, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_MakeStruct_GameplayEventData_6' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_GetTurnClientCameraCollisionOnDelayTime_Delay) == 0x001610, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_GetTurnClientCameraCollisionOnDelayTime_Delay' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x001618, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, K2Node_MakeStruct_EventMagnitude_ImplicitCast) == 0x001620, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::K2Node_MakeStruct_EventMagnitude_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast) == 0x001624, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_FireAnalyticEventEnvironmentalItemUsed_SessionLength_ImplicitCast) == 0x001628, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_FireAnalyticEventEnvironmentalItemUsed_SessionLength_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_AddIgnoredActor_InIgnoreDuration_ImplicitCast) == 0x00162C, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_AddIgnoredActor_InIgnoreDuration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Multiply_VectorFloat_B_ImplicitCast) == 0x001630, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Multiply_VectorFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x001638, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x001640, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_Delay_Duration_ImplicitCast) == 0x001648, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_ExecuteUbergraph_B_HidingProp, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x00164C, "Member 'B_HidingProp_C_ExecuteUbergraph_B_HidingProp::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct B_HidingProp_C_GetTurnClientCameraCollisionOnDelayTime final
{
public:
	double                                        Delay;
	float                                         CallFunc_GetPlayLength_ReturnValue;
	uint8                                         Pad_C[0x4];
	double                                        K2Node_FunctionResult_Delay_ImplicitCast;
};
static_assert(alignof(B_HidingProp_C_GetTurnClientCameraCollisionOnDelayTime) == 0x000008, "Wrong alignment on B_HidingProp_C_GetTurnClientCameraCollisionOnDelayTime");
static_assert(sizeof(B_HidingProp_C_GetTurnClientCameraCollisionOnDelayTime) == 0x000018, "Wrong size on B_HidingProp_C_GetTurnClientCameraCollisionOnDelayTime");
static_assert(offsetof(B_HidingProp_C_GetTurnClientCameraCollisionOnDelayTime, Delay) == 0x000000, "Member 'B_HidingProp_C_GetTurnClientCameraCollisionOnDelayTime::Delay' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_GetTurnClientCameraCollisionOnDelayTime, CallFunc_GetPlayLength_ReturnValue) == 0x000008, "Member 'B_HidingProp_C_GetTurnClientCameraCollisionOnDelayTime::CallFunc_GetPlayLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_GetTurnClientCameraCollisionOnDelayTime, K2Node_FunctionResult_Delay_ImplicitCast) == 0x000010, "Member 'B_HidingProp_C_GetTurnClientCameraCollisionOnDelayTime::K2Node_FunctionResult_Delay_ImplicitCast' has a wrong offset!");

struct B_HidingProp_C_IgnorePawnCollision final
{
public:
	class AFortPawn*                              Target;
	double                                        InIgnoreDuration;
};
static_assert(alignof(B_HidingProp_C_IgnorePawnCollision) == 0x000008, "Wrong alignment on B_HidingProp_C_IgnorePawnCollision");
static_assert(sizeof(B_HidingProp_C_IgnorePawnCollision) == 0x000010, "Wrong size on B_HidingProp_C_IgnorePawnCollision");
static_assert(offsetof(B_HidingProp_C_IgnorePawnCollision, Target) == 0x000000, "Member 'B_HidingProp_C_IgnorePawnCollision::Target' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_IgnorePawnCollision, InIgnoreDuration) == 0x000008, "Member 'B_HidingProp_C_IgnorePawnCollision::InIgnoreDuration' has a wrong offset!");

struct B_HidingProp_C_IgnorePhysicsCollisionDamage final
{
public:
	class AFortPawn*                              Target;
	double                                        Ignore_Duration;
};
static_assert(alignof(B_HidingProp_C_IgnorePhysicsCollisionDamage) == 0x000008, "Wrong alignment on B_HidingProp_C_IgnorePhysicsCollisionDamage");
static_assert(sizeof(B_HidingProp_C_IgnorePhysicsCollisionDamage) == 0x000010, "Wrong size on B_HidingProp_C_IgnorePhysicsCollisionDamage");
static_assert(offsetof(B_HidingProp_C_IgnorePhysicsCollisionDamage, Target) == 0x000000, "Member 'B_HidingProp_C_IgnorePhysicsCollisionDamage::Target' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_IgnorePhysicsCollisionDamage, Ignore_Duration) == 0x000008, "Member 'B_HidingProp_C_IgnorePhysicsCollisionDamage::Ignore_Duration' has a wrong offset!");

struct B_HidingProp_C_IsInInfiltrationLTM final
{
public:
	bool                                          ReturnValue;
	uint8                                         Pad_1[0x7];
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	class AFortGameStateAthena*                   K2Node_DynamicCast_AsFort_Game_State_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	struct FGameplayTagContainer                  CallFunc_GetAthenaPlaylistContextTags_ReturnValue;
	bool                                          CallFunc_HasTag_ReturnValue;
};
static_assert(alignof(B_HidingProp_C_IsInInfiltrationLTM) == 0x000008, "Wrong alignment on B_HidingProp_C_IsInInfiltrationLTM");
static_assert(sizeof(B_HidingProp_C_IsInInfiltrationLTM) == 0x000048, "Wrong size on B_HidingProp_C_IsInInfiltrationLTM");
static_assert(offsetof(B_HidingProp_C_IsInInfiltrationLTM, ReturnValue) == 0x000000, "Member 'B_HidingProp_C_IsInInfiltrationLTM::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_IsInInfiltrationLTM, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'B_HidingProp_C_IsInInfiltrationLTM::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_IsInInfiltrationLTM, K2Node_DynamicCast_AsFort_Game_State_Athena) == 0x000010, "Member 'B_HidingProp_C_IsInInfiltrationLTM::K2Node_DynamicCast_AsFort_Game_State_Athena' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_IsInInfiltrationLTM, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'B_HidingProp_C_IsInInfiltrationLTM::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_IsInInfiltrationLTM, CallFunc_GetAthenaPlaylistContextTags_ReturnValue) == 0x000020, "Member 'B_HidingProp_C_IsInInfiltrationLTM::CallFunc_GetAthenaPlaylistContextTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_IsInInfiltrationLTM, CallFunc_HasTag_ReturnValue) == 0x000040, "Member 'B_HidingProp_C_IsInInfiltrationLTM::CallFunc_HasTag_ReturnValue' has a wrong offset!");

struct B_HidingProp_C_LandedOnHayStack final
{
public:
	class AFortPlayerPawn*                        PlayerPawn;
	double                                        Z_Velocity_Mag;
};
static_assert(alignof(B_HidingProp_C_LandedOnHayStack) == 0x000008, "Wrong alignment on B_HidingProp_C_LandedOnHayStack");
static_assert(sizeof(B_HidingProp_C_LandedOnHayStack) == 0x000010, "Wrong size on B_HidingProp_C_LandedOnHayStack");
static_assert(offsetof(B_HidingProp_C_LandedOnHayStack, PlayerPawn) == 0x000000, "Member 'B_HidingProp_C_LandedOnHayStack::PlayerPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_LandedOnHayStack, Z_Velocity_Mag) == 0x000008, "Member 'B_HidingProp_C_LandedOnHayStack::Z_Velocity_Mag' has a wrong offset!");

struct B_HidingProp_C_Launch_Pickups final
{
public:
	TArray<class AFortPickup*>                    Array_0;
	class AActor*                                 Pawn_0;
};
static_assert(alignof(B_HidingProp_C_Launch_Pickups) == 0x000008, "Wrong alignment on B_HidingProp_C_Launch_Pickups");
static_assert(sizeof(B_HidingProp_C_Launch_Pickups) == 0x000018, "Wrong size on B_HidingProp_C_Launch_Pickups");
static_assert(offsetof(B_HidingProp_C_Launch_Pickups, Array_0) == 0x000000, "Member 'B_HidingProp_C_Launch_Pickups::Array_0' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Launch_Pickups, Pawn_0) == 0x000010, "Member 'B_HidingProp_C_Launch_Pickups::Pawn_0' has a wrong offset!");

struct B_HidingProp_C_LaunchPlayersOffTop final
{
public:
	class AFortPlayerPawn*                        PlayerPawn;
};
static_assert(alignof(B_HidingProp_C_LaunchPlayersOffTop) == 0x000008, "Wrong alignment on B_HidingProp_C_LaunchPlayersOffTop");
static_assert(sizeof(B_HidingProp_C_LaunchPlayersOffTop) == 0x000008, "Wrong size on B_HidingProp_C_LaunchPlayersOffTop");
static_assert(offsetof(B_HidingProp_C_LaunchPlayersOffTop, PlayerPawn) == 0x000000, "Member 'B_HidingProp_C_LaunchPlayersOffTop::PlayerPawn' has a wrong offset!");

struct B_HidingProp_C_OnDeathServer final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  DamageTags;
	struct FVector                                Momentum;
	struct FHitResult                             HitInfo;
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FGameplayEffectContextHandle           EffectContext;
};
static_assert(alignof(B_HidingProp_C_OnDeathServer) == 0x000008, "Wrong alignment on B_HidingProp_C_OnDeathServer");
static_assert(sizeof(B_HidingProp_C_OnDeathServer) == 0x000148, "Wrong size on B_HidingProp_C_OnDeathServer");
static_assert(offsetof(B_HidingProp_C_OnDeathServer, Damage) == 0x000000, "Member 'B_HidingProp_C_OnDeathServer::Damage' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_OnDeathServer, DamageTags) == 0x000008, "Member 'B_HidingProp_C_OnDeathServer::DamageTags' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_OnDeathServer, Momentum) == 0x000028, "Member 'B_HidingProp_C_OnDeathServer::Momentum' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_OnDeathServer, HitInfo) == 0x000040, "Member 'B_HidingProp_C_OnDeathServer::HitInfo' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_OnDeathServer, InstigatedBy) == 0x000120, "Member 'B_HidingProp_C_OnDeathServer::InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_OnDeathServer, DamageCauser) == 0x000128, "Member 'B_HidingProp_C_OnDeathServer::DamageCauser' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_OnDeathServer, EffectContext) == 0x000130, "Member 'B_HidingProp_C_OnDeathServer::EffectContext' has a wrong offset!");

struct B_HidingProp_C_OnReady_64CBF02E419FF250B433D5B2A6E5D744 final
{
public:
	class AFortGameStateAthena*                   GameState;
	const class UFortPlaylist*                    Playlist;
	struct FGameplayTagContainer                  PlaylistContextTags;
};
static_assert(alignof(B_HidingProp_C_OnReady_64CBF02E419FF250B433D5B2A6E5D744) == 0x000008, "Wrong alignment on B_HidingProp_C_OnReady_64CBF02E419FF250B433D5B2A6E5D744");
static_assert(sizeof(B_HidingProp_C_OnReady_64CBF02E419FF250B433D5B2A6E5D744) == 0x000030, "Wrong size on B_HidingProp_C_OnReady_64CBF02E419FF250B433D5B2A6E5D744");
static_assert(offsetof(B_HidingProp_C_OnReady_64CBF02E419FF250B433D5B2A6E5D744, GameState) == 0x000000, "Member 'B_HidingProp_C_OnReady_64CBF02E419FF250B433D5B2A6E5D744::GameState' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_OnReady_64CBF02E419FF250B433D5B2A6E5D744, Playlist) == 0x000008, "Member 'B_HidingProp_C_OnReady_64CBF02E419FF250B433D5B2A6E5D744::Playlist' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_OnReady_64CBF02E419FF250B433D5B2A6E5D744, PlaylistContextTags) == 0x000010, "Member 'B_HidingProp_C_OnReady_64CBF02E419FF250B433D5B2A6E5D744::PlaylistContextTags' has a wrong offset!");

struct B_HidingProp_C_OnRep_ContainsPlayer final
{
public:
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	bool                                          CallFunc_RemoveLooseGameplayTags_ReturnValue;
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;
	bool                                          CallFunc_AddLooseGameplayTags_ReturnValue;
};
static_assert(alignof(B_HidingProp_C_OnRep_ContainsPlayer) == 0x000008, "Wrong alignment on B_HidingProp_C_OnRep_ContainsPlayer");
static_assert(sizeof(B_HidingProp_C_OnRep_ContainsPlayer) == 0x000028, "Wrong size on B_HidingProp_C_OnRep_ContainsPlayer");
static_assert(offsetof(B_HidingProp_C_OnRep_ContainsPlayer, CallFunc_MakeGameplayTagContainerFromTag_ReturnValue) == 0x000000, "Member 'B_HidingProp_C_OnRep_ContainsPlayer::CallFunc_MakeGameplayTagContainerFromTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_OnRep_ContainsPlayer, CallFunc_RemoveLooseGameplayTags_ReturnValue) == 0x000020, "Member 'B_HidingProp_C_OnRep_ContainsPlayer::CallFunc_RemoveLooseGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_OnRep_ContainsPlayer, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000021, "Member 'B_HidingProp_C_OnRep_ContainsPlayer::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_OnRep_ContainsPlayer, CallFunc_AddLooseGameplayTags_ReturnValue) == 0x000022, "Member 'B_HidingProp_C_OnRep_ContainsPlayer::CallFunc_AddLooseGameplayTags_ReturnValue' has a wrong offset!");

struct B_HidingProp_C_OnRep_IsTeleporter final
{
public:
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	bool                                          CallFunc_AddLooseGameplayTags_ReturnValue;
};
static_assert(alignof(B_HidingProp_C_OnRep_IsTeleporter) == 0x000008, "Wrong alignment on B_HidingProp_C_OnRep_IsTeleporter");
static_assert(sizeof(B_HidingProp_C_OnRep_IsTeleporter) == 0x000028, "Wrong size on B_HidingProp_C_OnRep_IsTeleporter");
static_assert(offsetof(B_HidingProp_C_OnRep_IsTeleporter, CallFunc_MakeGameplayTagContainerFromTag_ReturnValue) == 0x000000, "Member 'B_HidingProp_C_OnRep_IsTeleporter::CallFunc_MakeGameplayTagContainerFromTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_OnRep_IsTeleporter, CallFunc_AddLooseGameplayTags_ReturnValue) == 0x000020, "Member 'B_HidingProp_C_OnRep_IsTeleporter::CallFunc_AddLooseGameplayTags_ReturnValue' has a wrong offset!");

struct B_HidingProp_C_Pawn_Died final
{
public:
	class AActor*                                 DamagedActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    FHitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(B_HidingProp_C_Pawn_Died) == 0x000008, "Wrong alignment on B_HidingProp_C_Pawn_Died");
static_assert(sizeof(B_HidingProp_C_Pawn_Died) == 0x000060, "Wrong size on B_HidingProp_C_Pawn_Died");
static_assert(offsetof(B_HidingProp_C_Pawn_Died, DamagedActor) == 0x000000, "Member 'B_HidingProp_C_Pawn_Died::DamagedActor' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Pawn_Died, Damage) == 0x000008, "Member 'B_HidingProp_C_Pawn_Died::Damage' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Pawn_Died, InstigatedBy) == 0x000010, "Member 'B_HidingProp_C_Pawn_Died::InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Pawn_Died, DamageCauser) == 0x000018, "Member 'B_HidingProp_C_Pawn_Died::DamageCauser' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Pawn_Died, HitLocation) == 0x000020, "Member 'B_HidingProp_C_Pawn_Died::HitLocation' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Pawn_Died, FHitComponent) == 0x000038, "Member 'B_HidingProp_C_Pawn_Died::FHitComponent' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Pawn_Died, BoneName) == 0x000040, "Member 'B_HidingProp_C_Pawn_Died::BoneName' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Pawn_Died, Momentum) == 0x000048, "Member 'B_HidingProp_C_Pawn_Died::Momentum' has a wrong offset!");

struct B_HidingProp_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;
};
static_assert(alignof(B_HidingProp_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on B_HidingProp_C_ReceiveActorBeginOverlap");
static_assert(sizeof(B_HidingProp_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on B_HidingProp_C_ReceiveActorBeginOverlap");
static_assert(offsetof(B_HidingProp_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'B_HidingProp_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

struct B_HidingProp_C_RemoveGameplayCue final
{
public:
	struct FGameplayTag                           GameplayCueTag;
	uint8                                         Pad_4[0x4];
	struct FGameplayCueParameters                 CueParameters;
};
static_assert(alignof(B_HidingProp_C_RemoveGameplayCue) == 0x000008, "Wrong alignment on B_HidingProp_C_RemoveGameplayCue");
static_assert(sizeof(B_HidingProp_C_RemoveGameplayCue) == 0x0000D8, "Wrong size on B_HidingProp_C_RemoveGameplayCue");
static_assert(offsetof(B_HidingProp_C_RemoveGameplayCue, GameplayCueTag) == 0x000000, "Member 'B_HidingProp_C_RemoveGameplayCue::GameplayCueTag' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_RemoveGameplayCue, CueParameters) == 0x000008, "Member 'B_HidingProp_C_RemoveGameplayCue::CueParameters' has a wrong offset!");

struct B_HidingProp_C_RemoveHiddenPlayer final
{
public:
	class AFortPawn*                              FortPawn;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;
	bool                                          CallFunc_Map_Remove_ReturnValue;
};
static_assert(alignof(B_HidingProp_C_RemoveHiddenPlayer) == 0x000008, "Wrong alignment on B_HidingProp_C_RemoveHiddenPlayer");
static_assert(sizeof(B_HidingProp_C_RemoveHiddenPlayer) == 0x000018, "Wrong size on B_HidingProp_C_RemoveHiddenPlayer");
static_assert(offsetof(B_HidingProp_C_RemoveHiddenPlayer, FortPawn) == 0x000000, "Member 'B_HidingProp_C_RemoveHiddenPlayer::FortPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_RemoveHiddenPlayer, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000008, "Member 'B_HidingProp_C_RemoveHiddenPlayer::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_RemoveHiddenPlayer, CallFunc_IsValidClass_ReturnValue) == 0x000010, "Member 'B_HidingProp_C_RemoveHiddenPlayer::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_RemoveHiddenPlayer, CallFunc_Array_RemoveItem_ReturnValue) == 0x000011, "Member 'B_HidingProp_C_RemoveHiddenPlayer::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_RemoveHiddenPlayer, CallFunc_Map_Remove_ReturnValue) == 0x000012, "Member 'B_HidingProp_C_RemoveHiddenPlayer::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");

struct B_HidingProp_C_StartHiding final
{
public:
	class AFortPawn*                              InteractingPawn;
};
static_assert(alignof(B_HidingProp_C_StartHiding) == 0x000008, "Wrong alignment on B_HidingProp_C_StartHiding");
static_assert(sizeof(B_HidingProp_C_StartHiding) == 0x000008, "Wrong size on B_HidingProp_C_StartHiding");
static_assert(offsetof(B_HidingProp_C_StartHiding, InteractingPawn) == 0x000000, "Member 'B_HidingProp_C_StartHiding::InteractingPawn' has a wrong offset!");

struct B_HidingProp_C_StopHiding final
{
public:
	const class AFortPawn*                        Pawn_0;
};
static_assert(alignof(B_HidingProp_C_StopHiding) == 0x000008, "Wrong alignment on B_HidingProp_C_StopHiding");
static_assert(sizeof(B_HidingProp_C_StopHiding) == 0x000008, "Wrong size on B_HidingProp_C_StopHiding");
static_assert(offsetof(B_HidingProp_C_StopHiding, Pawn_0) == 0x000000, "Member 'B_HidingProp_C_StopHiding::Pawn_0' has a wrong offset!");

struct B_HidingProp_C_Teleport final
{
public:
	class AActor*                                 Pawn_0;
};
static_assert(alignof(B_HidingProp_C_Teleport) == 0x000008, "Wrong alignment on B_HidingProp_C_Teleport");
static_assert(sizeof(B_HidingProp_C_Teleport) == 0x000008, "Wrong size on B_HidingProp_C_Teleport");
static_assert(offsetof(B_HidingProp_C_Teleport, Pawn_0) == 0x000000, "Member 'B_HidingProp_C_Teleport::Pawn_0' has a wrong offset!");

struct B_HidingProp_C_WatchForPlayerDeath final
{
public:
	class AFortPawn*                              FortPawn;
};
static_assert(alignof(B_HidingProp_C_WatchForPlayerDeath) == 0x000008, "Wrong alignment on B_HidingProp_C_WatchForPlayerDeath");
static_assert(sizeof(B_HidingProp_C_WatchForPlayerDeath) == 0x000008, "Wrong size on B_HidingProp_C_WatchForPlayerDeath");
static_assert(offsetof(B_HidingProp_C_WatchForPlayerDeath, FortPawn) == 0x000000, "Member 'B_HidingProp_C_WatchForPlayerDeath::FortPawn' has a wrong offset!");

struct B_HidingProp_C_BlueprintCanInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
	ETInteractionType                             InteractionType;
	bool                                          ReturnValue;
	uint8                                         Pad_B[0x5];
	TArray<class AActor*>                         LOSCheck_IgnoreActors;
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	TArray<class AActor*>                         K2Node_MakeArray_Array;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsFalling_ReturnValue;
	bool                                          CallFunc_IsInVehicle_ReturnValue;
	bool                                          CallFunc_IsPassengerInVehicle_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_Player_Getting_in_Prop_Is_Getting_In;
	bool                                          CallFunc_Player_Hidden_in_Prop_IsHidden;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_ShouldUseInteractionForExit_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_A3[0x1];
	int32                                         CallFunc_GetPlayerLimit_PlayerLimit;
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	uint8                                         Pad_C5[0x3];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	uint8                                         Pad_104[0x4];
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	double                                        CallFunc_Dot_VectorVector_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	uint8                                         Pad_171[0x7];
	double                                        CallFunc_DegAcos_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_185[0x3];
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_1AC[0x4];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1;
	uint8                                         Pad_1C1[0x7];
	class AFortPawn*                              CallFunc_Array_Get_Item;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	uint8                                         Pad_1D1[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	uint8                                         Pad_1D9[0x7];
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors_1;
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	bool                                          CallFunc_CheckBasicVectorToActorLineOfSight_In_Line_Of_Sight;
	uint8                                         Pad_219[0x7];
	double                                        CallFunc_CheckBasicVectorToActorLineOfSight_Distance;
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_232[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_239[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_279[0x3];
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_281[0x7];
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(B_HidingProp_C_BlueprintCanInteract) == 0x000008, "Wrong alignment on B_HidingProp_C_BlueprintCanInteract");
static_assert(sizeof(B_HidingProp_C_BlueprintCanInteract) == 0x000290, "Wrong size on B_HidingProp_C_BlueprintCanInteract");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, InteractingPawn) == 0x000000, "Member 'B_HidingProp_C_BlueprintCanInteract::InteractingPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, InteractionBeingAttempted) == 0x000008, "Member 'B_HidingProp_C_BlueprintCanInteract::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, InteractionType) == 0x000009, "Member 'B_HidingProp_C_BlueprintCanInteract::InteractionType' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, ReturnValue) == 0x00000A, "Member 'B_HidingProp_C_BlueprintCanInteract::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, LOSCheck_IgnoreActors) == 0x000010, "Member 'B_HidingProp_C_BlueprintCanInteract::LOSCheck_IgnoreActors' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_GetAttachParentActor_ReturnValue) == 0x000020, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, K2Node_MakeArray_Array) == 0x000040, "Member 'B_HidingProp_C_BlueprintCanInteract::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000050, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_GetAttachedActors_OutActors) == 0x000068, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_BreakVector_X) == 0x000078, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_BreakVector_Y) == 0x000080, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_BreakVector_Z) == 0x000088, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000090, "Member 'B_HidingProp_C_BlueprintCanInteract::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'B_HidingProp_C_BlueprintCanInteract::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_IsValid_ReturnValue) == 0x000099, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_IsFalling_ReturnValue) == 0x00009A, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_IsInVehicle_ReturnValue) == 0x00009B, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_IsPassengerInVehicle_ReturnValue) == 0x00009C, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_IsPassengerInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_BooleanOR_ReturnValue) == 0x00009D, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_Player_Getting_in_Prop_Is_Getting_In) == 0x00009E, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_Player_Getting_in_Prop_Is_Getting_In' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_Player_Hidden_in_Prop_IsHidden) == 0x00009F, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_Player_Hidden_in_Prop_IsHidden' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_Not_PreBool_ReturnValue) == 0x0000A0, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_ShouldUseInteractionForExit_ReturnValue) == 0x0000A1, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_ShouldUseInteractionForExit_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_BooleanAND_ReturnValue) == 0x0000A2, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_GetPlayerLimit_PlayerLimit) == 0x0000A4, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_GetPlayerLimit_PlayerLimit' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_GetForwardVector_ReturnValue) == 0x0000A8, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0000C4, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0000C8, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_FindLookAtRotation_ReturnValue) == 0x0000E0, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_BreakRotator_Roll) == 0x0000F8, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_BreakRotator_Pitch) == 0x0000FC, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_BreakRotator_Yaw) == 0x000100, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_MakeRotator_ReturnValue) == 0x000108, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_GetForwardVector_ReturnValue_1) == 0x000120, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_MakeGameplayTagContainerFromArray_ReturnValue) == 0x000138, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_MakeGameplayTagContainerFromArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_Dot_VectorVector_ReturnValue) == 0x000158, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000160, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000170, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_DegAcos_ReturnValue) == 0x000178, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_DegAcos_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_Array_Length_ReturnValue_1) == 0x000180, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000184, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1) == 0x000188, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, Temp_int_Array_Index_Variable) == 0x0001A8, "Member 'B_HidingProp_C_BlueprintCanInteract::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1) == 0x0001B0, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1) == 0x0001C0, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_Array_Get_Item) == 0x0001C8, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_BooleanOR_ReturnValue_1) == 0x0001D0, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_Array_Add_ReturnValue) == 0x0001D4, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_BooleanOR_ReturnValue_2) == 0x0001D8, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_GetAttachedActors_OutActors_1) == 0x0001E0, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_GetAttachedActors_OutActors_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, K2Node_MakeArray_Array_1) == 0x0001F0, "Member 'B_HidingProp_C_BlueprintCanInteract::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000200, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_CheckBasicVectorToActorLineOfSight_In_Line_Of_Sight) == 0x000218, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_CheckBasicVectorToActorLineOfSight_In_Line_Of_Sight' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_CheckBasicVectorToActorLineOfSight_Distance) == 0x000220, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_CheckBasicVectorToActorLineOfSight_Distance' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_Array_Length_ReturnValue_2) == 0x000228, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, Temp_int_Loop_Counter_Variable) == 0x00022C, "Member 'B_HidingProp_C_BlueprintCanInteract::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_Less_IntInt_ReturnValue) == 0x000230, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_Less_IntInt_ReturnValue_1) == 0x000231, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_Add_IntInt_ReturnValue) == 0x000234, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000238, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000240, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_BreakVector_X_1) == 0x000258, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_BreakVector_Y_1) == 0x000260, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_BreakVector_Z_1) == 0x000268, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000270, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000278, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_GetValueAtLevel_ReturnValue) == 0x00027C, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000280, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintCanInteract, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000288, "Member 'B_HidingProp_C_BlueprintCanInteract::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct B_HidingProp_C_BlueprintGetFailedInteractionString final
{
public:
	const class AFortPawn*                        InteractingPawn;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
	uint8                                         Pad_9[0x7];
	class FText                                   ReturnValue;
};
static_assert(alignof(B_HidingProp_C_BlueprintGetFailedInteractionString) == 0x000008, "Wrong alignment on B_HidingProp_C_BlueprintGetFailedInteractionString");
static_assert(sizeof(B_HidingProp_C_BlueprintGetFailedInteractionString) == 0x000028, "Wrong size on B_HidingProp_C_BlueprintGetFailedInteractionString");
static_assert(offsetof(B_HidingProp_C_BlueprintGetFailedInteractionString, InteractingPawn) == 0x000000, "Member 'B_HidingProp_C_BlueprintGetFailedInteractionString::InteractingPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintGetFailedInteractionString, InteractionBeingAttempted) == 0x000008, "Member 'B_HidingProp_C_BlueprintGetFailedInteractionString::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintGetFailedInteractionString, ReturnValue) == 0x000010, "Member 'B_HidingProp_C_BlueprintGetFailedInteractionString::ReturnValue' has a wrong offset!");

struct B_HidingProp_C_BlueprintGetInteractionString final
{
public:
	const class AFortPawn*                        InteractingPawn;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
	uint8                                         Pad_9[0x7];
	class FText                                   ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_29[0x3];
	int32                                         CallFunc_Array_Find_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
};
static_assert(alignof(B_HidingProp_C_BlueprintGetInteractionString) == 0x000008, "Wrong alignment on B_HidingProp_C_BlueprintGetInteractionString");
static_assert(sizeof(B_HidingProp_C_BlueprintGetInteractionString) == 0x000038, "Wrong size on B_HidingProp_C_BlueprintGetInteractionString");
static_assert(offsetof(B_HidingProp_C_BlueprintGetInteractionString, InteractingPawn) == 0x000000, "Member 'B_HidingProp_C_BlueprintGetInteractionString::InteractingPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintGetInteractionString, InteractionBeingAttempted) == 0x000008, "Member 'B_HidingProp_C_BlueprintGetInteractionString::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintGetInteractionString, ReturnValue) == 0x000010, "Member 'B_HidingProp_C_BlueprintGetInteractionString::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintGetInteractionString, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'B_HidingProp_C_BlueprintGetInteractionString::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintGetInteractionString, CallFunc_Array_Find_ReturnValue) == 0x00002C, "Member 'B_HidingProp_C_BlueprintGetInteractionString::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintGetInteractionString, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000030, "Member 'B_HidingProp_C_BlueprintGetInteractionString::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

struct B_HidingProp_C_BlueprintGetInteractionTime final
{
public:
	const class AFortPawn*                        InteractingPawn;
	float                                         OutInteractionTime;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
	bool                                          ReturnValue;
};
static_assert(alignof(B_HidingProp_C_BlueprintGetInteractionTime) == 0x000008, "Wrong alignment on B_HidingProp_C_BlueprintGetInteractionTime");
static_assert(sizeof(B_HidingProp_C_BlueprintGetInteractionTime) == 0x000010, "Wrong size on B_HidingProp_C_BlueprintGetInteractionTime");
static_assert(offsetof(B_HidingProp_C_BlueprintGetInteractionTime, InteractingPawn) == 0x000000, "Member 'B_HidingProp_C_BlueprintGetInteractionTime::InteractingPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintGetInteractionTime, OutInteractionTime) == 0x000008, "Member 'B_HidingProp_C_BlueprintGetInteractionTime::OutInteractionTime' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintGetInteractionTime, InteractionBeingAttempted) == 0x00000C, "Member 'B_HidingProp_C_BlueprintGetInteractionTime::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_BlueprintGetInteractionTime, ReturnValue) == 0x00000D, "Member 'B_HidingProp_C_BlueprintGetInteractionTime::ReturnValue' has a wrong offset!");

struct B_HidingProp_C_GetMinDistanceFromInteraction final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(B_HidingProp_C_GetMinDistanceFromInteraction) == 0x000004, "Wrong alignment on B_HidingProp_C_GetMinDistanceFromInteraction");
static_assert(sizeof(B_HidingProp_C_GetMinDistanceFromInteraction) == 0x000004, "Wrong size on B_HidingProp_C_GetMinDistanceFromInteraction");
static_assert(offsetof(B_HidingProp_C_GetMinDistanceFromInteraction, ReturnValue) == 0x000000, "Member 'B_HidingProp_C_GetMinDistanceFromInteraction::ReturnValue' has a wrong offset!");

struct B_HidingProp_C_GetPlayerLimit final
{
public:
	int32                                         PlayerLimit_0;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	int32                                         CallFunc_FTrunc_ReturnValue;
	uint8                                         Pad_C[0x4];
	double                                        CallFunc_FTrunc_A_ImplicitCast;
};
static_assert(alignof(B_HidingProp_C_GetPlayerLimit) == 0x000008, "Wrong alignment on B_HidingProp_C_GetPlayerLimit");
static_assert(sizeof(B_HidingProp_C_GetPlayerLimit) == 0x000018, "Wrong size on B_HidingProp_C_GetPlayerLimit");
static_assert(offsetof(B_HidingProp_C_GetPlayerLimit, PlayerLimit_0) == 0x000000, "Member 'B_HidingProp_C_GetPlayerLimit::PlayerLimit_0' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_GetPlayerLimit, CallFunc_GetValueAtLevel_ReturnValue) == 0x000004, "Member 'B_HidingProp_C_GetPlayerLimit::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_GetPlayerLimit, CallFunc_FTrunc_ReturnValue) == 0x000008, "Member 'B_HidingProp_C_GetPlayerLimit::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_GetPlayerLimit, CallFunc_FTrunc_A_ImplicitCast) == 0x000010, "Member 'B_HidingProp_C_GetPlayerLimit::CallFunc_FTrunc_A_ImplicitCast' has a wrong offset!");

struct B_HidingProp_C_LocalOnFailedInteract final
{
public:
	const class AFortPlayerPawn*                  InteractingPawn;
};
static_assert(alignof(B_HidingProp_C_LocalOnFailedInteract) == 0x000008, "Wrong alignment on B_HidingProp_C_LocalOnFailedInteract");
static_assert(sizeof(B_HidingProp_C_LocalOnFailedInteract) == 0x000008, "Wrong size on B_HidingProp_C_LocalOnFailedInteract");
static_assert(offsetof(B_HidingProp_C_LocalOnFailedInteract, InteractingPawn) == 0x000000, "Member 'B_HidingProp_C_LocalOnFailedInteract::InteractingPawn' has a wrong offset!");

struct B_HidingProp_C_Player_Getting_in_Prop final
{
public:
	class AFortPawn*                              FortPawn;
	bool                                          Is_Getting_In;
	uint8                                         Pad_9[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
};
static_assert(alignof(B_HidingProp_C_Player_Getting_in_Prop) == 0x000008, "Wrong alignment on B_HidingProp_C_Player_Getting_in_Prop");
static_assert(sizeof(B_HidingProp_C_Player_Getting_in_Prop) == 0x000028, "Wrong size on B_HidingProp_C_Player_Getting_in_Prop");
static_assert(offsetof(B_HidingProp_C_Player_Getting_in_Prop, FortPawn) == 0x000000, "Member 'B_HidingProp_C_Player_Getting_in_Prop::FortPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Player_Getting_in_Prop, Is_Getting_In) == 0x000008, "Member 'B_HidingProp_C_Player_Getting_in_Prop::Is_Getting_In' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Player_Getting_in_Prop, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000010, "Member 'B_HidingProp_C_Player_Getting_in_Prop::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Player_Getting_in_Prop, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000020, "Member 'B_HidingProp_C_Player_Getting_in_Prop::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");

struct B_HidingProp_C_Player_Hidden_in_Prop final
{
public:
	class AFortPawn*                              Fort_Pawn;
	bool                                          IsHidden;
	uint8                                         Pad_9[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	bool                                          CallFunc_Array_Contains_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(B_HidingProp_C_Player_Hidden_in_Prop) == 0x000008, "Wrong alignment on B_HidingProp_C_Player_Hidden_in_Prop");
static_assert(sizeof(B_HidingProp_C_Player_Hidden_in_Prop) == 0x000028, "Wrong size on B_HidingProp_C_Player_Hidden_in_Prop");
static_assert(offsetof(B_HidingProp_C_Player_Hidden_in_Prop, Fort_Pawn) == 0x000000, "Member 'B_HidingProp_C_Player_Hidden_in_Prop::Fort_Pawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Player_Hidden_in_Prop, IsHidden) == 0x000008, "Member 'B_HidingProp_C_Player_Hidden_in_Prop::IsHidden' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Player_Hidden_in_Prop, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000010, "Member 'B_HidingProp_C_Player_Hidden_in_Prop::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Player_Hidden_in_Prop, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000020, "Member 'B_HidingProp_C_Player_Hidden_in_Prop::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Player_Hidden_in_Prop, CallFunc_Array_Contains_ReturnValue) == 0x000021, "Member 'B_HidingProp_C_Player_Hidden_in_Prop::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Player_Hidden_in_Prop, CallFunc_Not_PreBool_ReturnValue) == 0x000022, "Member 'B_HidingProp_C_Player_Hidden_in_Prop::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_C_Player_Hidden_in_Prop, CallFunc_BooleanAND_ReturnValue) == 0x000023, "Member 'B_HidingProp_C_Player_Hidden_in_Prop::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
