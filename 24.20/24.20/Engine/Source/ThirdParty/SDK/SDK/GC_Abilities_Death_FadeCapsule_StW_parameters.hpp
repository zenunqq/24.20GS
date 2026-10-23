#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_5[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_14[0x4];
	class AActor*                                 K2Node_Event_MyTarget;
	EGameplayCueEvent                             K2Node_Event_EventType;
	uint8                                         Pad_21[0x7];
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_F9[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_109[0x7];
	double                                        CallFunc_Lerp_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_11C[0x4];
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_129[0x7];
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;
	double                                        K2Node_VariableSet_Starting_Min_Capsule_Shadow_Vis_ImplicitCast;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast;
};
static_assert(alignof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW) == 0x000008, "Wrong alignment on GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW");
static_assert(sizeof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW) == 0x000148, "Wrong size on GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, EntryPoint) == 0x000000, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::EntryPoint' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, Temp_int_Array_Index_Variable) == 0x000010, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, K2Node_Event_MyTarget) == 0x000018, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, K2Node_Event_EventType) == 0x000020, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::K2Node_Event_EventType' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, K2Node_Event_Parameters) == 0x000028, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, K2Node_SwitchEnum_CmpSuccess) == 0x0000F8, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000100, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, K2Node_DynamicCast_bSuccess) == 0x000108, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, CallFunc_Lerp_ReturnValue) == 0x000110, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, CallFunc_Array_Length_ReturnValue) == 0x000118, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, CallFunc_Array_Get_Item) == 0x000120, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, CallFunc_Less_IntInt_ReturnValue) == 0x000128, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000130, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, K2Node_VariableSet_Starting_Min_Capsule_Shadow_Vis_ImplicitCast) == 0x000138, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::K2Node_VariableSet_Starting_Min_Capsule_Shadow_Vis_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast) == 0x000140, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast' has a wrong offset!");

struct GC_Abilities_Death_FadeCapsule_StW_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_9[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(GC_Abilities_Death_FadeCapsule_StW_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GC_Abilities_Death_FadeCapsule_StW_C_K2_HandleGameplayCue");
static_assert(sizeof(GC_Abilities_Death_FadeCapsule_StW_C_K2_HandleGameplayCue) == 0x0000E0, "Wrong size on GC_Abilities_Death_FadeCapsule_StW_C_K2_HandleGameplayCue");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");

struct GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup final
{
public:
	class AFortPlayerPawn*                        FortPawn;
	const class USkeletalMeshComponent*           Temp_object_Variable;
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;
	uint8                                         Pad_1D[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         CallFunc_GetValidValue_ReturnValue;
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;
	uint8                                         Pad_2C[0x4];
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;
	uint8                                         Pad_39[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue;
};
static_assert(alignof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup) == 0x000008, "Wrong alignment on GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup");
static_assert(sizeof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup) == 0x000040, "Wrong size on GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, FortPawn) == 0x000000, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::FortPawn' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, Temp_object_Variable) == 0x000008, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, CallFunc_MakeLiteralInt_ReturnValue) == 0x000010, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, Temp_int_Variable) == 0x000014, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, Temp_int_Variable_1) == 0x000018, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, CallFunc_Conv_IntToByte_ReturnValue) == 0x00001C, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, CallFunc_GetValidValue_ReturnValue) == 0x000024, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000025, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, CallFunc_Less_IntInt_ReturnValue) == 0x000026, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000027, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000028, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x000030, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, CallFunc_Array_RemoveItem_ReturnValue) == 0x000038, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup, CallFunc_Array_Add_ReturnValue) == 0x00003C, "Member 'GC_Abilities_Death_FadeCapsule_StW_C_SkeletalMeshSetup::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}
