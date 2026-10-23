#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct MultiInteractActorComponent_C_AddGCNL final
{
public:
	class AActor*                                 Owner;
	int32                                         CallFunc_GetInteractingActorCount_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_29[0x7];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
};
static_assert(alignof(MultiInteractActorComponent_C_AddGCNL) == 0x000008, "Wrong alignment on MultiInteractActorComponent_C_AddGCNL");
static_assert(sizeof(MultiInteractActorComponent_C_AddGCNL) == 0x000108, "Wrong size on MultiInteractActorComponent_C_AddGCNL");
static_assert(offsetof(MultiInteractActorComponent_C_AddGCNL, Owner) == 0x000000, "Member 'MultiInteractActorComponent_C_AddGCNL::Owner' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_AddGCNL, CallFunc_GetInteractingActorCount_ReturnValue) == 0x000008, "Member 'MultiInteractActorComponent_C_AddGCNL::CallFunc_GetInteractingActorCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_AddGCNL, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00000C, "Member 'MultiInteractActorComponent_C_AddGCNL::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_AddGCNL, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'MultiInteractActorComponent_C_AddGCNL::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_AddGCNL, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'MultiInteractActorComponent_C_AddGCNL::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_AddGCNL, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000030, "Member 'MultiInteractActorComponent_C_AddGCNL::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_AddGCNL, CallFunc_GetOwner_ReturnValue) == 0x000100, "Member 'MultiInteractActorComponent_C_AddGCNL::CallFunc_GetOwner_ReturnValue' has a wrong offset!");

struct MultiInteractActorComponent_C_ExecuteGCNFromTag final
{
public:
	class AFortPlayerPawn*                        PlayerPawn;
	struct FGameplayTag                           InteractTag;
	int32                                         PreviousInteractPlayerCount;
	int32                                         CallFunc_GetInteractingActorCount_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_15[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	uint8                                         Pad_1C[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	float                                         CallFunc_GetInteractionDuration_ReturnValue;
	uint8                                         Pad_44[0x4];
	double                                        CallFunc_SafeDivide_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	double                                        CallFunc_SafeDivide_A_ImplicitCast;
	float                                         CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast;
};
static_assert(alignof(MultiInteractActorComponent_C_ExecuteGCNFromTag) == 0x000008, "Wrong alignment on MultiInteractActorComponent_C_ExecuteGCNFromTag");
static_assert(sizeof(MultiInteractActorComponent_C_ExecuteGCNFromTag) == 0x000130, "Wrong size on MultiInteractActorComponent_C_ExecuteGCNFromTag");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteGCNFromTag, PlayerPawn) == 0x000000, "Member 'MultiInteractActorComponent_C_ExecuteGCNFromTag::PlayerPawn' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteGCNFromTag, InteractTag) == 0x000008, "Member 'MultiInteractActorComponent_C_ExecuteGCNFromTag::InteractTag' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteGCNFromTag, PreviousInteractPlayerCount) == 0x00000C, "Member 'MultiInteractActorComponent_C_ExecuteGCNFromTag::PreviousInteractPlayerCount' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteGCNFromTag, CallFunc_GetInteractingActorCount_ReturnValue) == 0x000010, "Member 'MultiInteractActorComponent_C_ExecuteGCNFromTag::CallFunc_GetInteractingActorCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteGCNFromTag, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'MultiInteractActorComponent_C_ExecuteGCNFromTag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteGCNFromTag, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000018, "Member 'MultiInteractActorComponent_C_ExecuteGCNFromTag::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteGCNFromTag, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'MultiInteractActorComponent_C_ExecuteGCNFromTag::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteGCNFromTag, CallFunc_GetOwner_ReturnValue) == 0x000038, "Member 'MultiInteractActorComponent_C_ExecuteGCNFromTag::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteGCNFromTag, CallFunc_GetInteractionDuration_ReturnValue) == 0x000040, "Member 'MultiInteractActorComponent_C_ExecuteGCNFromTag::CallFunc_GetInteractionDuration_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteGCNFromTag, CallFunc_SafeDivide_ReturnValue) == 0x000048, "Member 'MultiInteractActorComponent_C_ExecuteGCNFromTag::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteGCNFromTag, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000050, "Member 'MultiInteractActorComponent_C_ExecuteGCNFromTag::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteGCNFromTag, CallFunc_SafeDivide_A_ImplicitCast) == 0x000120, "Member 'MultiInteractActorComponent_C_ExecuteGCNFromTag::CallFunc_SafeDivide_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteGCNFromTag, CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast) == 0x000128, "Member 'MultiInteractActorComponent_C_ExecuteGCNFromTag::CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast' has a wrong offset!");

struct MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent final
{
public:
	int32                                         EntryPoint;
	int32                                         CallFunc_GetInteractingActorCount_ReturnValue;
	const class AFortPlayerStateAthena*           K2Node_Event_JoinedPlayer;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	uint8                                         Pad_14[0x4];
	class AFortPlayerPawn*                        CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue;
	const class AFortPlayerStateAthena*           K2Node_Event_LeftPlayer;
	class AFortPlayerPawn*                        CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue_1;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_33[0x1];
	int32                                         CallFunc_GetInteractingActorCount_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_39[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
};
static_assert(alignof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent) == 0x000008, "Wrong alignment on MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent");
static_assert(sizeof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent) == 0x000048, "Wrong size on MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, EntryPoint) == 0x000000, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, CallFunc_GetInteractingActorCount_ReturnValue) == 0x000004, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::CallFunc_GetInteractingActorCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, K2Node_Event_JoinedPlayer) == 0x000008, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::K2Node_Event_JoinedPlayer' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue) == 0x000018, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, K2Node_Event_LeftPlayer) == 0x000020, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::K2Node_Event_LeftPlayer' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue_1) == 0x000028, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, CallFunc_IsLocallyControlled_ReturnValue) == 0x000030, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, CallFunc_BooleanAND_ReturnValue) == 0x000032, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, CallFunc_GetInteractingActorCount_ReturnValue_1) == 0x000034, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::CallFunc_GetInteractingActorCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000038, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, CallFunc_BooleanAND_ReturnValue_1) == 0x000040, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, CallFunc_BooleanOR_ReturnValue) == 0x000041, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent, CallFunc_BooleanAND_ReturnValue_2) == 0x000042, "Member 'MultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

struct MultiInteractActorComponent_C_RemoveGCNL final
{
public:
	class AActor*                                 Owner;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_D9[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
};
static_assert(alignof(MultiInteractActorComponent_C_RemoveGCNL) == 0x000008, "Wrong alignment on MultiInteractActorComponent_C_RemoveGCNL");
static_assert(sizeof(MultiInteractActorComponent_C_RemoveGCNL) == 0x0000E8, "Wrong size on MultiInteractActorComponent_C_RemoveGCNL");
static_assert(offsetof(MultiInteractActorComponent_C_RemoveGCNL, Owner) == 0x000000, "Member 'MultiInteractActorComponent_C_RemoveGCNL::Owner' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_RemoveGCNL, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000008, "Member 'MultiInteractActorComponent_C_RemoveGCNL::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_RemoveGCNL, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'MultiInteractActorComponent_C_RemoveGCNL::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiInteractActorComponent_C_RemoveGCNL, CallFunc_GetOwner_ReturnValue) == 0x0000E0, "Member 'MultiInteractActorComponent_C_RemoveGCNL::CallFunc_GetOwner_ReturnValue' has a wrong offset!");

struct MultiInteractActorComponent_C_SetRequiredDuration final
{
public:
	double                                        NewRequiredDuration;
};
static_assert(alignof(MultiInteractActorComponent_C_SetRequiredDuration) == 0x000008, "Wrong alignment on MultiInteractActorComponent_C_SetRequiredDuration");
static_assert(sizeof(MultiInteractActorComponent_C_SetRequiredDuration) == 0x000008, "Wrong size on MultiInteractActorComponent_C_SetRequiredDuration");
static_assert(offsetof(MultiInteractActorComponent_C_SetRequiredDuration, NewRequiredDuration) == 0x000000, "Member 'MultiInteractActorComponent_C_SetRequiredDuration::NewRequiredDuration' has a wrong offset!");

struct MultiInteractActorComponent_C_UpdateForPlayerJustJoinedInteraction final
{
public:
	const class AFortPlayerStateAthena*           JoinedPlayer;
};
static_assert(alignof(MultiInteractActorComponent_C_UpdateForPlayerJustJoinedInteraction) == 0x000008, "Wrong alignment on MultiInteractActorComponent_C_UpdateForPlayerJustJoinedInteraction");
static_assert(sizeof(MultiInteractActorComponent_C_UpdateForPlayerJustJoinedInteraction) == 0x000008, "Wrong size on MultiInteractActorComponent_C_UpdateForPlayerJustJoinedInteraction");
static_assert(offsetof(MultiInteractActorComponent_C_UpdateForPlayerJustJoinedInteraction, JoinedPlayer) == 0x000000, "Member 'MultiInteractActorComponent_C_UpdateForPlayerJustJoinedInteraction::JoinedPlayer' has a wrong offset!");

struct MultiInteractActorComponent_C_UpdateForPlayerJustLeftInteraction final
{
public:
	const class AFortPlayerStateAthena*           LeftPlayer;
};
static_assert(alignof(MultiInteractActorComponent_C_UpdateForPlayerJustLeftInteraction) == 0x000008, "Wrong alignment on MultiInteractActorComponent_C_UpdateForPlayerJustLeftInteraction");
static_assert(sizeof(MultiInteractActorComponent_C_UpdateForPlayerJustLeftInteraction) == 0x000008, "Wrong size on MultiInteractActorComponent_C_UpdateForPlayerJustLeftInteraction");
static_assert(offsetof(MultiInteractActorComponent_C_UpdateForPlayerJustLeftInteraction, LeftPlayer) == 0x000000, "Member 'MultiInteractActorComponent_C_UpdateForPlayerJustLeftInteraction::LeftPlayer' has a wrong offset!");

}
