#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SocialBanModal_C_ExecuteUbergraph_SocialBanModal final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	bool                                          K2Node_Event_bIsBanned;
	uint8                                         Pad_1D[0x3];
	int32                                         K2Node_Select_Default;
	uint8                                         Pad_24[0x4];
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
};
static_assert(alignof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal) == 0x000008, "Wrong alignment on SocialBanModal_C_ExecuteUbergraph_SocialBanModal");
static_assert(sizeof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal) == 0x000038, "Wrong size on SocialBanModal_C_ExecuteUbergraph_SocialBanModal");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, EntryPoint) == 0x000000, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, Temp_bool_Variable) == 0x000004, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000008, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, Temp_int_Variable) == 0x000014, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, Temp_int_Variable_1) == 0x000018, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, K2Node_Event_bIsBanned) == 0x00001C, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::K2Node_Event_bIsBanned' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, K2Node_Select_Default) == 0x000020, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, K2Node_DynamicCast_AsIcon_Text_Button_1) == 0x000028, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::K2Node_DynamicCast_AsIcon_Text_Button_1' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

struct SocialBanModal_C_OnDisplayModeSet final
{
public:
	bool                                          bIsBanned;
};
static_assert(alignof(SocialBanModal_C_OnDisplayModeSet) == 0x000001, "Wrong alignment on SocialBanModal_C_OnDisplayModeSet");
static_assert(sizeof(SocialBanModal_C_OnDisplayModeSet) == 0x000001, "Wrong size on SocialBanModal_C_OnDisplayModeSet");
static_assert(offsetof(SocialBanModal_C_OnDisplayModeSet, bIsBanned) == 0x000000, "Member 'SocialBanModal_C_OnDisplayModeSet::bIsBanned' has a wrong offset!");

}
