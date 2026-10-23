#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct QualityLevelSelectTimer_C_UpdateTextScale final
{
public:
	double                                        TimeRemaining;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_A[0x6];
	double                                        K2Node_Select_Default;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;
};
static_assert(alignof(QualityLevelSelectTimer_C_UpdateTextScale) == 0x000008, "Wrong alignment on QualityLevelSelectTimer_C_UpdateTextScale");
static_assert(sizeof(QualityLevelSelectTimer_C_UpdateTextScale) == 0x000040, "Wrong size on QualityLevelSelectTimer_C_UpdateTextScale");
static_assert(offsetof(QualityLevelSelectTimer_C_UpdateTextScale, TimeRemaining) == 0x000000, "Member 'QualityLevelSelectTimer_C_UpdateTextScale::TimeRemaining' has a wrong offset!");
static_assert(offsetof(QualityLevelSelectTimer_C_UpdateTextScale, Temp_bool_Variable) == 0x000008, "Member 'QualityLevelSelectTimer_C_UpdateTextScale::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QualityLevelSelectTimer_C_UpdateTextScale, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000009, "Member 'QualityLevelSelectTimer_C_UpdateTextScale::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(QualityLevelSelectTimer_C_UpdateTextScale, K2Node_Select_Default) == 0x000010, "Member 'QualityLevelSelectTimer_C_UpdateTextScale::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QualityLevelSelectTimer_C_UpdateTextScale, CallFunc_MakeVector2D_ReturnValue) == 0x000018, "Member 'QualityLevelSelectTimer_C_UpdateTextScale::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(QualityLevelSelectTimer_C_UpdateTextScale, CallFunc_BreakVector2D_X) == 0x000028, "Member 'QualityLevelSelectTimer_C_UpdateTextScale::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(QualityLevelSelectTimer_C_UpdateTextScale, CallFunc_BreakVector2D_Y) == 0x000030, "Member 'QualityLevelSelectTimer_C_UpdateTextScale::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(QualityLevelSelectTimer_C_UpdateTextScale, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000038, "Member 'QualityLevelSelectTimer_C_UpdateTextScale::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");

struct QualityLevelSelectTimer_C_OnTimeRemainingChanged final
{
public:
	float                                         TimeRemaining;
};
static_assert(alignof(QualityLevelSelectTimer_C_OnTimeRemainingChanged) == 0x000004, "Wrong alignment on QualityLevelSelectTimer_C_OnTimeRemainingChanged");
static_assert(sizeof(QualityLevelSelectTimer_C_OnTimeRemainingChanged) == 0x000004, "Wrong size on QualityLevelSelectTimer_C_OnTimeRemainingChanged");
static_assert(offsetof(QualityLevelSelectTimer_C_OnTimeRemainingChanged, TimeRemaining) == 0x000000, "Member 'QualityLevelSelectTimer_C_OnTimeRemainingChanged::TimeRemaining' has a wrong offset!");

struct QualityLevelSelectTimer_C_OnProgressStarted final
{
public:
	float                                         Duration;
};
static_assert(alignof(QualityLevelSelectTimer_C_OnProgressStarted) == 0x000004, "Wrong alignment on QualityLevelSelectTimer_C_OnProgressStarted");
static_assert(sizeof(QualityLevelSelectTimer_C_OnProgressStarted) == 0x000004, "Wrong size on QualityLevelSelectTimer_C_OnProgressStarted");
static_assert(offsetof(QualityLevelSelectTimer_C_OnProgressStarted, Duration) == 0x000000, "Member 'QualityLevelSelectTimer_C_OnProgressStarted::Duration' has a wrong offset!");

struct QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_Duration;
	float                                         K2Node_Event_TimeRemaining;
	uint8                                         Pad_C[0x4];
	double                                        CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast;
	double                                        CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast_1;
};
static_assert(alignof(QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer) == 0x000008, "Wrong alignment on QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer");
static_assert(sizeof(QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer) == 0x000020, "Wrong size on QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer");
static_assert(offsetof(QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer, EntryPoint) == 0x000000, "Member 'QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer::EntryPoint' has a wrong offset!");
static_assert(offsetof(QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer, K2Node_Event_Duration) == 0x000004, "Member 'QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer::K2Node_Event_Duration' has a wrong offset!");
static_assert(offsetof(QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer, K2Node_Event_TimeRemaining) == 0x000008, "Member 'QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer::K2Node_Event_TimeRemaining' has a wrong offset!");
static_assert(offsetof(QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer, CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast) == 0x000010, "Member 'QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer::CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast' has a wrong offset!");
static_assert(offsetof(QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer, CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast_1) == 0x000018, "Member 'QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer::CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast_1' has a wrong offset!");

}
