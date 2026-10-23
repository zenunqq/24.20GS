#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000030, "Wrong size on GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6, ApplicationTag) == 0x000028, "Member 'GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6::ApplicationTag' has a wrong offset!");

struct GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609) == 0x000030, "Wrong size on GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609, ApplicationTag) == 0x000028, "Member 'GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609::ApplicationTag' has a wrong offset!");

struct GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000030, "Wrong size on GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6, ApplicationTag) == 0x000028, "Member 'GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6::ApplicationTag' has a wrong offset!");

struct GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_3;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_3;
	uint8                                         Pad_34[0x4];
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_2;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_2;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;
	struct FGameplayTag                           Temp_struct_Variable;
	uint8                                         Pad_74[0x4];
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable_1;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_1;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_1;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_1;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_2;
	struct FGameplayTag                           Temp_struct_Variable_2;
	uint8                                         Pad_114[0x4];
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable_3;
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_149[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	class UAbilityTask_WaitGameplayTagRemoved*    CallFunc_WaitGameplayTagRemove_ReturnValue;
	struct FGameplayEventData                     K2Node_Event_EventData;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_212[0x6];
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_269[0x7];
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;
	struct FVector_NetQuantize10                  CallFunc_MakeVector_NetQuantize10_ReturnValue;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	struct FVector_NetQuantizeNormal              CallFunc_MakeVector_NetQuantizeNormal_ReturnValue;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_319[0x3];
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_4;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_4;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_4;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_5;
	class UAnimMontage*                           CallFunc_Get_DBNO_Outro_Montage_DBNOMontageOutro;
	struct FFortGameplayAbilityMontageInfo        K2Node_MakeStruct_FortGameplayAbilityMontageInfo;
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
};
static_assert(alignof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive");
static_assert(sizeof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive) == 0x0004A0, "Wrong size on GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, EntryPoint) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData_3) == 0x000008, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData_3' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag_3) == 0x000030, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag_3' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData_2) == 0x000038, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData_2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag_2) == 0x000060, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag_2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate) == 0x000064, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, Temp_struct_Variable) == 0x000070, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, Temp_struct_Variable_1) == 0x000078, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData_1) == 0x0000A0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag_1) == 0x0000C8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000CC, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData) == 0x0000D8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag) == 0x000100, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate_2) == 0x000104, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, Temp_struct_Variable_2) == 0x000110, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, Temp_struct_Variable_3) == 0x000118, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_WaitTargetSelection_ReturnValue) == 0x000140, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_WaitTargetSelection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_IsValid_ReturnValue) == 0x000148, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate_3) == 0x00014C, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_WaitGameplayTagRemove_ReturnValue) == 0x000158, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_WaitGameplayTagRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_Event_EventData) == 0x000160, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_IsValid_ReturnValue_1) == 0x000210, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_IsServer_ReturnValue) == 0x000211, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_GetActorInfo_ReturnValue) == 0x000218, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000260, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_DynamicCast_bSuccess) == 0x000268, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_GetSocketLocation_ReturnValue) == 0x000270, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_GetSocketRotation_ReturnValue) == 0x000288, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_GetSocketRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_X) == 0x0002A0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_Y) == 0x0002A8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_Z) == 0x0002B0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x0002B8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_MakeVector_NetQuantize10_ReturnValue) == 0x0002D0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_MakeVector_NetQuantize10_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_X_1) == 0x0002E8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_Y_1) == 0x0002F0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_Z_1) == 0x0002F8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_MakeVector_NetQuantizeNormal_ReturnValue) == 0x000300, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_MakeVector_NetQuantizeNormal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_Event_bWasCancelled) == 0x000318, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate_4) == 0x00031C, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData_4) == 0x000328, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData_4' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag_4) == 0x000350, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag_4' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate_5) == 0x000354, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_Get_DBNO_Outro_Montage_DBNOMontageOutro) == 0x000360, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_Get_DBNO_Outro_Montage_DBNOMontageOutro' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_MakeStruct_FortGameplayAbilityMontageInfo) == 0x000368, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_MakeStruct_FortGameplayAbilityMontageInfo' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x0003C0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x0003C8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_IsValid_ReturnValue_2) == 0x000498, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

struct GAB_AthenaDBNORevive_C_Get_DBNO_Outro_Montage final
{
public:
	class UAnimMontage*                           DBNOMontageOutro_0;
	bool                                          CallFunc_IsSurfaceSwimming_ReturnValue;
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Get_DBNO_Outro_Montage) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Get_DBNO_Outro_Montage");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Get_DBNO_Outro_Montage) == 0x000010, "Wrong size on GAB_AthenaDBNORevive_C_Get_DBNO_Outro_Montage");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Get_DBNO_Outro_Montage, DBNOMontageOutro_0) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Get_DBNO_Outro_Montage::DBNOMontageOutro_0' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Get_DBNO_Outro_Montage, CallFunc_IsSurfaceSwimming_ReturnValue) == 0x000008, "Member 'GAB_AthenaDBNORevive_C_Get_DBNO_Outro_Montage::CallFunc_IsSurfaceSwimming_ReturnValue' has a wrong offset!");

struct GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GAB_AthenaDBNORevive_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GAB_AthenaDBNORevive_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_AthenaDBNORevive_C_K2_OnEndAbility");
static_assert(sizeof(GAB_AthenaDBNORevive_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_AthenaDBNORevive_C_K2_OnEndAbility");
static_assert(offsetof(GAB_AthenaDBNORevive_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609) == 0x000030, "Wrong size on GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609, ApplicationTag) == 0x000028, "Member 'GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609::ApplicationTag' has a wrong offset!");

struct GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000030, "Wrong size on GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6, ApplicationTag) == 0x000028, "Member 'GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6::ApplicationTag' has a wrong offset!");

}
