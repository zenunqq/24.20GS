#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         CallFunc_Array_Length_ReturnValue;
	class UUserWidget*                            CallFunc_Array_Get_Item;
	class UBP_SkewedTabButton_C*                  K2Node_DynamicCast_AsBP_Skewed_Tab_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_39[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         K2Node_Event_TabIndex;
};
static_assert(alignof(CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer) == 0x000008, "Wrong alignment on CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer");
static_assert(sizeof(CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer) == 0x000048, "Wrong size on CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer");
static_assert(offsetof(CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer, EntryPoint) == 0x000000, "Member 'CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer, CallFunc_GetAllEntries_ReturnValue) == 0x000008, "Member 'CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer::CallFunc_GetAllEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer, Temp_int_Array_Index_Variable) == 0x000018, "Member 'CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer, CallFunc_Array_Get_Item) == 0x000020, "Member 'CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer, K2Node_DynamicCast_AsBP_Skewed_Tab_Button) == 0x000028, "Member 'CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer::K2Node_DynamicCast_AsBP_Skewed_Tab_Button' has a wrong offset!");
static_assert(offsetof(CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer, K2Node_Event_TabIndex) == 0x000040, "Member 'CrewContentContainer_C_ExecuteUbergraph_CrewContentContainer::K2Node_Event_TabIndex' has a wrong offset!");

struct CrewContentContainer_C_OnTabSelected final
{
public:
	int32                                         TabIndex;
};
static_assert(alignof(CrewContentContainer_C_OnTabSelected) == 0x000004, "Wrong alignment on CrewContentContainer_C_OnTabSelected");
static_assert(sizeof(CrewContentContainer_C_OnTabSelected) == 0x000004, "Wrong size on CrewContentContainer_C_OnTabSelected");
static_assert(offsetof(CrewContentContainer_C_OnTabSelected, TabIndex) == 0x000000, "Member 'CrewContentContainer_C_OnTabSelected::TabIndex' has a wrong offset!");

}
