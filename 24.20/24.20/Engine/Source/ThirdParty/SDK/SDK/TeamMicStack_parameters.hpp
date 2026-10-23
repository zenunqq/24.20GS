#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct TeamMicStack_C_AppendTeamMember final
{
public:
	struct FFortTeamMemberInfo                    TeamMemberInfo;
	int32                                         CurrentIndex;
	struct FMargin                                K2Node_MakeStruct_Margin;
	uint8                                         Pad_264[0x4];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class UCinematic_TeamMics_C*                  CallFunc_Create_ReturnValue;
	int32                                         CallFunc_Array_Add_ReturnValue;
	uint8                                         Pad_27C[0x4];
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;
};
static_assert(alignof(TeamMicStack_C_AppendTeamMember) == 0x000010, "Wrong alignment on TeamMicStack_C_AppendTeamMember");
static_assert(sizeof(TeamMicStack_C_AppendTeamMember) == 0x000290, "Wrong size on TeamMicStack_C_AppendTeamMember");
static_assert(offsetof(TeamMicStack_C_AppendTeamMember, TeamMemberInfo) == 0x000000, "Member 'TeamMicStack_C_AppendTeamMember::TeamMemberInfo' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_AppendTeamMember, CurrentIndex) == 0x000250, "Member 'TeamMicStack_C_AppendTeamMember::CurrentIndex' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_AppendTeamMember, K2Node_MakeStruct_Margin) == 0x000254, "Member 'TeamMicStack_C_AppendTeamMember::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_AppendTeamMember, CallFunc_GetOwningPlayer_ReturnValue) == 0x000268, "Member 'TeamMicStack_C_AppendTeamMember::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_AppendTeamMember, CallFunc_Create_ReturnValue) == 0x000270, "Member 'TeamMicStack_C_AppendTeamMember::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_AppendTeamMember, CallFunc_Array_Add_ReturnValue) == 0x000278, "Member 'TeamMicStack_C_AppendTeamMember::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_AppendTeamMember, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000280, "Member 'TeamMicStack_C_AppendTeamMember::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

struct TeamMicStack_C_ExecuteUbergraph_TeamMicStack final
{
public:
	int32                                         EntryPoint;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_9[0x3];
	TDelegate<void(const struct FFortTeamMemberInfo& NewTeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void(int32 PlayerIndex)>            K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void(const struct FFortTeamMemberInfo& TeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate_2;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_34[0x4];
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;
	class UFortUITeamInfo*                        CallFunc_GetLocalPlayerTeam_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_4C[0x4];
	TArray<struct FFortTeamMemberInfo>            CallFunc_GetTeamMembers_TeamMembers;
	struct FFortTeamMemberInfo                    CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_2B5[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
};
static_assert(alignof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack) == 0x000010, "Wrong alignment on TeamMicStack_C_ExecuteUbergraph_TeamMicStack");
static_assert(sizeof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack) == 0x0002D0, "Wrong size on TeamMicStack_C_ExecuteUbergraph_TeamMicStack");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, EntryPoint) == 0x000000, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::EntryPoint' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, Temp_int_Array_Index_Variable) == 0x000004, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_GetContext_ReturnValue) == 0x000038, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_GetLocalPlayerTeam_ReturnValue) == 0x000040, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_GetLocalPlayerTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_GetTeamMembers_TeamMembers) == 0x000050, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_GetTeamMembers_TeamMembers' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_Array_Get_Item) == 0x000060, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_Array_Length_ReturnValue) == 0x0002B0, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, CallFunc_Less_IntInt_ReturnValue) == 0x0002B4, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_ExecuteUbergraph_TeamMicStack, K2Node_CreateDelegate_OutputDelegate_3) == 0x0002B8, "Member 'TeamMicStack_C_ExecuteUbergraph_TeamMicStack::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

struct TeamMicStack_C_HandleTeamMemberChanged final
{
public:
	struct FFortTeamMemberInfo                    Member_Info;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_254[0x4];
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_IsLocalPlayersUniqueID_ReturnValue;
	uint8                                         Pad_265[0x3];
	class UCinematic_TeamMics_C*                  CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(TeamMicStack_C_HandleTeamMemberChanged) == 0x000010, "Wrong alignment on TeamMicStack_C_HandleTeamMemberChanged");
static_assert(sizeof(TeamMicStack_C_HandleTeamMemberChanged) == 0x000280, "Wrong size on TeamMicStack_C_HandleTeamMemberChanged");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberChanged, Member_Info) == 0x000000, "Member 'TeamMicStack_C_HandleTeamMemberChanged::Member_Info' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberChanged, CallFunc_Array_Length_ReturnValue) == 0x000250, "Member 'TeamMicStack_C_HandleTeamMemberChanged::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberChanged, CallFunc_GetContext_ReturnValue) == 0x000258, "Member 'TeamMicStack_C_HandleTeamMemberChanged::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberChanged, CallFunc_Subtract_IntInt_ReturnValue) == 0x000260, "Member 'TeamMicStack_C_HandleTeamMemberChanged::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberChanged, CallFunc_IsLocalPlayersUniqueID_ReturnValue) == 0x000264, "Member 'TeamMicStack_C_HandleTeamMemberChanged::CallFunc_IsLocalPlayersUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberChanged, CallFunc_Array_Get_Item) == 0x000268, "Member 'TeamMicStack_C_HandleTeamMemberChanged::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberChanged, CallFunc_Less_IntInt_ReturnValue) == 0x000270, "Member 'TeamMicStack_C_HandleTeamMemberChanged::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct TeamMicStack_C_HandleTeamMemberRemoved final
{
public:
	int32                                         Member_Index;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         CallFunc_GetChildrenCount_ReturnValue;
	bool                                          CallFunc_RemoveChildAt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
};
static_assert(alignof(TeamMicStack_C_HandleTeamMemberRemoved) == 0x000004, "Wrong alignment on TeamMicStack_C_HandleTeamMemberRemoved");
static_assert(sizeof(TeamMicStack_C_HandleTeamMemberRemoved) == 0x000010, "Wrong size on TeamMicStack_C_HandleTeamMemberRemoved");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberRemoved, Member_Index) == 0x000000, "Member 'TeamMicStack_C_HandleTeamMemberRemoved::Member_Index' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberRemoved, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'TeamMicStack_C_HandleTeamMemberRemoved::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberRemoved, CallFunc_GetChildrenCount_ReturnValue) == 0x000008, "Member 'TeamMicStack_C_HandleTeamMemberRemoved::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberRemoved, CallFunc_RemoveChildAt_ReturnValue) == 0x00000C, "Member 'TeamMicStack_C_HandleTeamMemberRemoved::CallFunc_RemoveChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMicStack_C_HandleTeamMemberRemoved, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000D, "Member 'TeamMicStack_C_HandleTeamMemberRemoved::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}
