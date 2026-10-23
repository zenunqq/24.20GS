#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "RidingCodeRuntime_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class UControllableRidableComponent*          K2Node_DynamicCast_AsControllable_Ridable_Component;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          K2Node_Event_bWasCancelled;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	uint8                                         Pad_42[0x6];
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_A1[0x7];
	class UControllingRiderComponent*             CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_B2[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_C9[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	class UControllingRiderComponent*             CallFunc_GetComponentByClass_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_E1[0x7];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_105[0x3];
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	uint8                                         Pad_111[0x7];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_131[0x7];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_141[0x3];
	struct FGameplayTag                           CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_14C[0x4];
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_15A[0x6];
	class UAnimMontage*                           CallFunc_GetRiderPettingMontage_RiderPettingMontage;
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_7;
};
static_assert(alignof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting) == 0x000008, "Wrong alignment on GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting");
static_assert(sizeof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting) == 0x000178, "Wrong size on GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, EntryPoint) == 0x000000, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_DynamicCast_AsControllable_Ridable_Component) == 0x000010, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_DynamicCast_AsControllable_Ridable_Component' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_Event_bWasCancelled) == 0x000040, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_K2_CommitAbility_ReturnValue) == 0x000041, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_Event_ActorInfo) == 0x000048, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_Event_ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000090, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000098, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_GetComponentByClass_ReturnValue) == 0x0000A8, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_IsValid_ReturnValue_1) == 0x0000B1, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000B4, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x0000C0, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_IsValid_ReturnValue_2) == 0x0000C8, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000CC, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0000D8, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_IsValid_ReturnValue_3) == 0x0000E0, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2) == 0x0000E8, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_GetOwner_ReturnValue_1) == 0x0000F0, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000F8, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_IsValid_ReturnValue_4) == 0x000104, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x000108, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_IsValid_ReturnValue_5) == 0x000110, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3) == 0x000118, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4) == 0x000120, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_DynamicCast_AsFort_Pawn) == 0x000128, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_DynamicCast_bSuccess_2) == 0x000130, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_DynamicCast_AsFort_Pawn_1) == 0x000138, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_DynamicCast_AsFort_Pawn_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, K2Node_DynamicCast_bSuccess_3) == 0x000140, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_Array_Get_Item) == 0x000144, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_Array_Length_ReturnValue) == 0x000148, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000150, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_Less_IntInt_ReturnValue) == 0x000158, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_IsValid_ReturnValue_6) == 0x000159, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_GetRiderPettingMontage_RiderPettingMontage) == 0x000160, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_GetRiderPettingMontage_RiderPettingMontage' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000168, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting, CallFunc_IsValid_ReturnValue_7) == 0x000170, "Member 'GA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");

struct GA_Riding_Player_Petting_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
};
static_assert(alignof(GA_Riding_Player_Petting_C_FailedToActivatePassiveAbility) == 0x000008, "Wrong alignment on GA_Riding_Player_Petting_C_FailedToActivatePassiveAbility");
static_assert(sizeof(GA_Riding_Player_Petting_C_FailedToActivatePassiveAbility) == 0x000048, "Wrong size on GA_Riding_Player_Petting_C_FailedToActivatePassiveAbility");
static_assert(offsetof(GA_Riding_Player_Petting_C_FailedToActivatePassiveAbility, ActorInfo) == 0x000000, "Member 'GA_Riding_Player_Petting_C_FailedToActivatePassiveAbility::ActorInfo' has a wrong offset!");

struct GA_Riding_Player_Petting_C_GetRiderPettingMontage final
{
public:
	class UAnimMontage*                           RiderPettingMontage;
	struct FRidingPettingData                     CallFunc_GetPettingData_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	EFortCustomGender                             CallFunc_GetCharacterGender_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_114[0x4];
	struct FRidingPettingData                     CallFunc_GetPettingData_ReturnValue_1;
};
static_assert(alignof(GA_Riding_Player_Petting_C_GetRiderPettingMontage) == 0x000008, "Wrong alignment on GA_Riding_Player_Petting_C_GetRiderPettingMontage");
static_assert(sizeof(GA_Riding_Player_Petting_C_GetRiderPettingMontage) == 0x000220, "Wrong size on GA_Riding_Player_Petting_C_GetRiderPettingMontage");
static_assert(offsetof(GA_Riding_Player_Petting_C_GetRiderPettingMontage, RiderPettingMontage) == 0x000000, "Member 'GA_Riding_Player_Petting_C_GetRiderPettingMontage::RiderPettingMontage' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_GetRiderPettingMontage, CallFunc_GetPettingData_ReturnValue) == 0x000008, "Member 'GA_Riding_Player_Petting_C_GetRiderPettingMontage::CallFunc_GetPettingData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_GetRiderPettingMontage, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'GA_Riding_Player_Petting_C_GetRiderPettingMontage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_GetRiderPettingMontage, CallFunc_IsValid_ReturnValue_1) == 0x000111, "Member 'GA_Riding_Player_Petting_C_GetRiderPettingMontage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_GetRiderPettingMontage, CallFunc_GetCharacterGender_ReturnValue) == 0x000112, "Member 'GA_Riding_Player_Petting_C_GetRiderPettingMontage::CallFunc_GetCharacterGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_GetRiderPettingMontage, K2Node_SwitchEnum_CmpSuccess) == 0x000113, "Member 'GA_Riding_Player_Petting_C_GetRiderPettingMontage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_GetRiderPettingMontage, CallFunc_GetPettingData_ReturnValue_1) == 0x000118, "Member 'GA_Riding_Player_Petting_C_GetRiderPettingMontage::CallFunc_GetPettingData_ReturnValue_1' has a wrong offset!");

struct GA_Riding_Player_Petting_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Riding_Player_Petting_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Riding_Player_Petting_C_K2_OnEndAbility");
static_assert(sizeof(GA_Riding_Player_Petting_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Riding_Player_Petting_C_K2_OnEndAbility");
static_assert(offsetof(GA_Riding_Player_Petting_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Riding_Player_Petting_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GA_Riding_Player_Petting_C_PettingTelemetry final
{
public:
	class AActor*                                 Owner;
	bool                                          CallFunc_K2_HasAuthority_ReturnValue;
	uint8                                         Pad_9[0x7];
	class UFortAthenaAITelemetryData*             CallFunc_GetOrCreateAITelemetryData_ReturnValue;
	class UFortAthenaPettingWildlifeTelemetryData* K2Node_DynamicCast_AsFort_Athena_Petting_Wildlife_Telemetry_Data;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GA_Riding_Player_Petting_C_PettingTelemetry) == 0x000008, "Wrong alignment on GA_Riding_Player_Petting_C_PettingTelemetry");
static_assert(sizeof(GA_Riding_Player_Petting_C_PettingTelemetry) == 0x000028, "Wrong size on GA_Riding_Player_Petting_C_PettingTelemetry");
static_assert(offsetof(GA_Riding_Player_Petting_C_PettingTelemetry, Owner) == 0x000000, "Member 'GA_Riding_Player_Petting_C_PettingTelemetry::Owner' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_PettingTelemetry, CallFunc_K2_HasAuthority_ReturnValue) == 0x000008, "Member 'GA_Riding_Player_Petting_C_PettingTelemetry::CallFunc_K2_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_PettingTelemetry, CallFunc_GetOrCreateAITelemetryData_ReturnValue) == 0x000010, "Member 'GA_Riding_Player_Petting_C_PettingTelemetry::CallFunc_GetOrCreateAITelemetryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_PettingTelemetry, K2Node_DynamicCast_AsFort_Athena_Petting_Wildlife_Telemetry_Data) == 0x000018, "Member 'GA_Riding_Player_Petting_C_PettingTelemetry::K2Node_DynamicCast_AsFort_Athena_Petting_Wildlife_Telemetry_Data' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_Petting_C_PettingTelemetry, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GA_Riding_Player_Petting_C_PettingTelemetry::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
