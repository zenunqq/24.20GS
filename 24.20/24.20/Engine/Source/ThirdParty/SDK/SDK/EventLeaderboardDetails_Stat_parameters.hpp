#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct EventLeaderboardDetails_Stat_C_SetStatData final
{
public:
	class FText                                   Name_0;
	double                                        Value;
	int32                                         NumFractionalDigits;
	uint8                                         Pad_24[0x4];
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;
};
static_assert(alignof(EventLeaderboardDetails_Stat_C_SetStatData) == 0x000008, "Wrong alignment on EventLeaderboardDetails_Stat_C_SetStatData");
static_assert(sizeof(EventLeaderboardDetails_Stat_C_SetStatData) == 0x000040, "Wrong size on EventLeaderboardDetails_Stat_C_SetStatData");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_SetStatData, Name_0) == 0x000000, "Member 'EventLeaderboardDetails_Stat_C_SetStatData::Name_0' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_SetStatData, Value) == 0x000018, "Member 'EventLeaderboardDetails_Stat_C_SetStatData::Value' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_SetStatData, NumFractionalDigits) == 0x000020, "Member 'EventLeaderboardDetails_Stat_C_SetStatData::NumFractionalDigits' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_SetStatData, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000028, "Member 'EventLeaderboardDetails_Stat_C_SetStatData::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");

struct EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;
	uint8                                         Pad_11[0x7];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_3D[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue;
	double                                        K2Node_Select_Default;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	float                                         CallFunc_RetriggerableDelay_Duration_ImplicitCast;
};
static_assert(alignof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat) == 0x000008, "Wrong alignment on EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat");
static_assert(sizeof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat) == 0x000060, "Wrong size on EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, EntryPoint) == 0x000000, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_IsUsingGamepad_ReturnValue) == 0x000010, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, Temp_real_Variable) == 0x000018, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, Temp_real_Variable_1) == 0x000020, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000028, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_PlayAnimationForward_ReturnValue) == 0x000030, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_GetEndTime_ReturnValue) == 0x000038, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, Temp_bool_Variable) == 0x00003C, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_PlayAnimationTimeRange_ReturnValue) == 0x000040, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_PlayAnimationTimeRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, K2Node_Select_Default) == 0x000048, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000050, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat, CallFunc_RetriggerableDelay_Duration_ImplicitCast) == 0x000058, "Member 'EventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat::CallFunc_RetriggerableDelay_Duration_ImplicitCast' has a wrong offset!");

}
