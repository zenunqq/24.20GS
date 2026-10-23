#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BP_AthenaCollectionPlayerProgressTrack_C_BP_OnPlayerProgressEntriesCreated final
{
public:
	TArray<class UAthenaCollectionPlayerProgress*> PlayerProgressEntries;
	int32                                         NumToCollect;
};
static_assert(alignof(BP_AthenaCollectionPlayerProgressTrack_C_BP_OnPlayerProgressEntriesCreated) == 0x000008, "Wrong alignment on BP_AthenaCollectionPlayerProgressTrack_C_BP_OnPlayerProgressEntriesCreated");
static_assert(sizeof(BP_AthenaCollectionPlayerProgressTrack_C_BP_OnPlayerProgressEntriesCreated) == 0x000018, "Wrong size on BP_AthenaCollectionPlayerProgressTrack_C_BP_OnPlayerProgressEntriesCreated");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_BP_OnPlayerProgressEntriesCreated, PlayerProgressEntries) == 0x000000, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_BP_OnPlayerProgressEntriesCreated::PlayerProgressEntries' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_BP_OnPlayerProgressEntriesCreated, NumToCollect) == 0x000010, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_BP_OnPlayerProgressEntriesCreated::NumToCollect' has a wrong offset!");

struct BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	TArray<class UAthenaCollectionPlayerProgress*> K2Node_Event_PlayerProgressEntries;
	int32                                         K2Node_Event_NumToCollect;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_1D[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_2D[0x3];
	class UUniformGridSlot*                       CallFunc_SlotAsUniformGridSlot_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_39[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_44[0x4];
	class UAthenaCollectionPlayerProgress*        CallFunc_Array_Get_Item;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	int32                                         CallFunc_GetNumCollected_ReturnValue;
	bool                                          CallFunc_IsLocalPlayer_ReturnValue;
	uint8                                         Pad_5D[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	int32                                         CallFunc_GetNumCollected_ReturnValue_1;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	uint8                                         Pad_6C[0x4];
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	int32                                         Temp_int_Variable;
	uint8                                         Pad_84[0x4];
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue_1;
	int32                                         K2Node_Select_Default;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_99[0x7];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack) == 0x000008, "Wrong alignment on BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack");
static_assert(sizeof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack) == 0x0000C8, "Wrong size on BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, EntryPoint) == 0x000000, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, Temp_bool_Variable) == 0x000004, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, K2Node_Event_PlayerProgressEntries) == 0x000008, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::K2Node_Event_PlayerProgressEntries' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, K2Node_Event_NumToCollect) == 0x000018, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::K2Node_Event_NumToCollect' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_SlotAsUniformGridSlot_ReturnValue) == 0x000030, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_SlotAsUniformGridSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, Temp_int_Array_Index_Variable) == 0x000040, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000050, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_GetNumCollected_ReturnValue) == 0x000058, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_GetNumCollected_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_IsLocalPlayer_ReturnValue) == 0x00005C, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_IsLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000060, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_GetNumCollected_ReturnValue_1) == 0x000064, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_GetNumCollected_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000068, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_AddChildToUniformGrid_ReturnValue) == 0x000070, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_AddChildToUniformGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000078, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, Temp_int_Variable) == 0x000080, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_AddChildToUniformGrid_ReturnValue_1) == 0x000088, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_AddChildToUniformGrid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, K2Node_Select_Default) == 0x000090, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000094, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, K2Node_Event_IsDesignTime) == 0x000098, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000A8, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000B0, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0000B8, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0000C0, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct BP_AthenaCollectionPlayerProgressTrack_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(BP_AthenaCollectionPlayerProgressTrack_C_PreConstruct) == 0x000001, "Wrong alignment on BP_AthenaCollectionPlayerProgressTrack_C_PreConstruct");
static_assert(sizeof(BP_AthenaCollectionPlayerProgressTrack_C_PreConstruct) == 0x000001, "Wrong size on BP_AthenaCollectionPlayerProgressTrack_C_PreConstruct");
static_assert(offsetof(BP_AthenaCollectionPlayerProgressTrack_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_AthenaCollectionPlayerProgressTrack_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
