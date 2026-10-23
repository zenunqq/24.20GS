#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct TeamMemberPedestal_XPBoostInfo_C_OnCameraChanged final
{
public:
	EFrontEndCamera                               NewCamera;
	EFrontEndCamera                               OldCamera;
};
static_assert(alignof(TeamMemberPedestal_XPBoostInfo_C_OnCameraChanged) == 0x000001, "Wrong alignment on TeamMemberPedestal_XPBoostInfo_C_OnCameraChanged");
static_assert(sizeof(TeamMemberPedestal_XPBoostInfo_C_OnCameraChanged) == 0x000002, "Wrong size on TeamMemberPedestal_XPBoostInfo_C_OnCameraChanged");
static_assert(offsetof(TeamMemberPedestal_XPBoostInfo_C_OnCameraChanged, NewCamera) == 0x000000, "Member 'TeamMemberPedestal_XPBoostInfo_C_OnCameraChanged::NewCamera' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_XPBoostInfo_C_OnCameraChanged, OldCamera) == 0x000001, "Member 'TeamMemberPedestal_XPBoostInfo_C_OnCameraChanged::OldCamera' has a wrong offset!");

struct TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	TDelegate<void(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)> K2Node_CreateDelegate_OutputDelegate;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	EFrontEndCamera                               K2Node_CustomEvent_NewCamera;
	EFrontEndCamera                               K2Node_CustomEvent_OldCamera;
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo) == 0x000008, "Wrong alignment on TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo");
static_assert(sizeof(TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo) == 0x000028, "Wrong size on TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo");
static_assert(offsetof(TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo, EntryPoint) == 0x000000, "Member 'TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo, Temp_bool_Variable) == 0x000004, "Member 'TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo, Temp_byte_Variable) == 0x000014, "Member 'TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo, Temp_byte_Variable_1) == 0x000015, "Member 'TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo, K2Node_CustomEvent_NewCamera) == 0x000016, "Member 'TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo::K2Node_CustomEvent_NewCamera' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo, K2Node_CustomEvent_OldCamera) == 0x000017, "Member 'TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo::K2Node_CustomEvent_OldCamera' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000020, "Member 'TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo, K2Node_Select_Default) == 0x000021, "Member 'TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo::K2Node_Select_Default' has a wrong offset!");

}
