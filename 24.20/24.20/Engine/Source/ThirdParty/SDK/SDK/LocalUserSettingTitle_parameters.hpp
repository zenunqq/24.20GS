#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_19[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	uint8                                         Pad_24[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_39[0x7];
	double                                        K2Node_Select_Default;
	int32                                         K2Node_Select_Default_1;
	uint8                                         Pad_4C[0x4];
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
	bool                                          K2Node_Event_bIsExpanded;
	EUMGSequencePlayMode                          K2Node_Select_Default_2;
	uint8                                         Pad_AA[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
};
static_assert(alignof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle) == 0x000008, "Wrong alignment on LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle");
static_assert(sizeof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle) == 0x0000C0, "Wrong size on LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, EntryPoint) == 0x000000, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::EntryPoint' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, Temp_bool_Variable) == 0x000004, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, Temp_byte_Variable) == 0x000005, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, Temp_byte_Variable_1) == 0x000006, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, Temp_bool_Variable_1) == 0x000007, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, Temp_real_Variable) == 0x000008, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, Temp_real_Variable_1) == 0x000010, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, Temp_bool_Variable_2) == 0x000018, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, Temp_int_Variable) == 0x00001C, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, Temp_int_Variable_1) == 0x000020, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, CallFunc_IsMobileGame_ReturnValue) == 0x000038, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, K2Node_Select_Default) == 0x000040, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, K2Node_Select_Default_1) == 0x000048, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, K2Node_MakeStruct_SlateFontInfo) == 0x000050, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, K2Node_Event_bIsExpanded) == 0x0000A8, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, K2Node_Select_Default_2) == 0x0000A9, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, CallFunc_PlayAnimation_ReturnValue_2) == 0x0000B0, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x0000B8, "Member 'LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");

struct LocalUserSettingTitle_C_OnExpansionChanged final
{
public:
	bool                                          bIsExpanded;
};
static_assert(alignof(LocalUserSettingTitle_C_OnExpansionChanged) == 0x000001, "Wrong alignment on LocalUserSettingTitle_C_OnExpansionChanged");
static_assert(sizeof(LocalUserSettingTitle_C_OnExpansionChanged) == 0x000001, "Wrong size on LocalUserSettingTitle_C_OnExpansionChanged");
static_assert(offsetof(LocalUserSettingTitle_C_OnExpansionChanged, bIsExpanded) == 0x000000, "Member 'LocalUserSettingTitle_C_OnExpansionChanged::bIsExpanded' has a wrong offset!");

}
