#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_11[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker) == 0x000008, "Wrong alignment on WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker");
static_assert(sizeof(WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker) == 0x000020, "Wrong size on WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker, EntryPoint) == 0x000000, "Member 'WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker, CallFunc_MakeTimespan_ReturnValue) == 0x000008, "Member 'WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker, K2Node_Event_IsDesignTime) == 0x000010, "Member 'WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker, CallFunc_GetEndTime_ReturnValue) == 0x000014, "Member 'WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_QuestCategoryCompletedTracker_C_ExecuteUbergraph_WBP_QuestCategoryCompletedTracker::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct WBP_QuestCategoryCompletedTracker_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_QuestCategoryCompletedTracker_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_QuestCategoryCompletedTracker_C_PreConstruct");
static_assert(sizeof(WBP_QuestCategoryCompletedTracker_C_PreConstruct) == 0x000001, "Wrong size on WBP_QuestCategoryCompletedTracker_C_PreConstruct");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_QuestCategoryCompletedTracker_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct WBP_QuestCategoryCompletedTracker_C_SetIsSelected final
{
public:
	bool                                          IsSelected;
	bool                                          Temp_bool_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable_1;
	EUMGSequencePlayMode                          K2Node_Select_Default;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(WBP_QuestCategoryCompletedTracker_C_SetIsSelected) == 0x000008, "Wrong alignment on WBP_QuestCategoryCompletedTracker_C_SetIsSelected");
static_assert(sizeof(WBP_QuestCategoryCompletedTracker_C_SetIsSelected) == 0x000010, "Wrong size on WBP_QuestCategoryCompletedTracker_C_SetIsSelected");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetIsSelected, IsSelected) == 0x000000, "Member 'WBP_QuestCategoryCompletedTracker_C_SetIsSelected::IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetIsSelected, Temp_bool_Variable) == 0x000001, "Member 'WBP_QuestCategoryCompletedTracker_C_SetIsSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetIsSelected, Temp_byte_Variable) == 0x000002, "Member 'WBP_QuestCategoryCompletedTracker_C_SetIsSelected::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetIsSelected, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_QuestCategoryCompletedTracker_C_SetIsSelected::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetIsSelected, K2Node_Select_Default) == 0x000004, "Member 'WBP_QuestCategoryCompletedTracker_C_SetIsSelected::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetIsSelected, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_QuestCategoryCompletedTracker_C_SetIsSelected::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct WBP_QuestCategoryCompletedTracker_C_SetMoreLaterTimer final
{
public:
	EAthenaChallengeTimerState                    TimerState;
	uint8                                         Pad_1[0x7];
	struct FTimespan                              TimeRemaining;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UGridSlot*                              CallFunc_SlotAsGridSlot_ReturnValue;
};
static_assert(alignof(WBP_QuestCategoryCompletedTracker_C_SetMoreLaterTimer) == 0x000008, "Wrong alignment on WBP_QuestCategoryCompletedTracker_C_SetMoreLaterTimer");
static_assert(sizeof(WBP_QuestCategoryCompletedTracker_C_SetMoreLaterTimer) == 0x000020, "Wrong size on WBP_QuestCategoryCompletedTracker_C_SetMoreLaterTimer");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetMoreLaterTimer, TimerState) == 0x000000, "Member 'WBP_QuestCategoryCompletedTracker_C_SetMoreLaterTimer::TimerState' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetMoreLaterTimer, TimeRemaining) == 0x000008, "Member 'WBP_QuestCategoryCompletedTracker_C_SetMoreLaterTimer::TimeRemaining' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetMoreLaterTimer, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'WBP_QuestCategoryCompletedTracker_C_SetMoreLaterTimer::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetMoreLaterTimer, CallFunc_SlotAsGridSlot_ReturnValue) == 0x000018, "Member 'WBP_QuestCategoryCompletedTracker_C_SetMoreLaterTimer::CallFunc_SlotAsGridSlot_ReturnValue' has a wrong offset!");

struct WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen final
{
public:
	bool                                          IsOutOfScreen;
	bool                                          Temp_bool_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable_1;
	EUMGSequencePlayMode                          K2Node_Select_Default;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen) == 0x000008, "Wrong alignment on WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen");
static_assert(sizeof(WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen) == 0x000010, "Wrong size on WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen, IsOutOfScreen) == 0x000000, "Member 'WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen::IsOutOfScreen' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen, Temp_bool_Variable) == 0x000001, "Member 'WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen, Temp_byte_Variable) == 0x000002, "Member 'WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen, K2Node_Select_Default) == 0x000004, "Member 'WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_QuestCategoryCompletedTracker_C_SetOutOfScreen::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct WBP_QuestCategoryCompletedTracker_C_SetProgress final
{
public:
	int32                                         CompletedQuests_0;
	int32                                         TotalQuests_0;
	class UGridSlot*                              CallFunc_SlotAsGridSlot_ReturnValue;
	class UGridSlot*                              CallFunc_SlotAsGridSlot_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_19[0x7];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;
	class FText                                   CallFunc_Format_ReturnValue;
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	double                                        CallFunc_SafeDivide_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(WBP_QuestCategoryCompletedTracker_C_SetProgress) == 0x000008, "Wrong alignment on WBP_QuestCategoryCompletedTracker_C_SetProgress");
static_assert(sizeof(WBP_QuestCategoryCompletedTracker_C_SetProgress) == 0x000120, "Wrong size on WBP_QuestCategoryCompletedTracker_C_SetProgress");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, CompletedQuests_0) == 0x000000, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::CompletedQuests_0' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, TotalQuests_0) == 0x000004, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::TotalQuests_0' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, CallFunc_SlotAsGridSlot_ReturnValue) == 0x000008, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::CallFunc_SlotAsGridSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, CallFunc_SlotAsGridSlot_ReturnValue_1) == 0x000010, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::CallFunc_SlotAsGridSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000020, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000028, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, K2Node_MakeStruct_FormatArgumentData_1) == 0x000080, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, K2Node_MakeArray_Array) == 0x0000D0, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, CallFunc_Conv_IntToDouble_ReturnValue) == 0x0000E0, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, CallFunc_Format_ReturnValue) == 0x0000E8, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000100, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000108, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, CallFunc_SafeDivide_ReturnValue) == 0x000110, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetProgress, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000118, "Member 'WBP_QuestCategoryCompletedTracker_C_SetProgress::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue final
{
public:
	double                                        Value;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_A[0x2];
	struct FLinearColor                           K2Node_Select_Default;
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast;
};
static_assert(alignof(WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue) == 0x000008, "Wrong alignment on WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue");
static_assert(sizeof(WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue) == 0x000048, "Wrong size on WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue, Value) == 0x000000, "Member 'WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue::Value' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue, Temp_bool_Variable) == 0x000008, "Member 'WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue, CallFunc_Greater_IntInt_ReturnValue) == 0x000009, "Member 'WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue, K2Node_Select_Default) == 0x00000C, "Member 'WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue, CallFunc_LinearColorLerp_ReturnValue) == 0x00001C, "Member 'WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue, K2Node_MakeStruct_SlateColor) == 0x00002C, "Member 'WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue, CallFunc_LinearColorLerp_Alpha_ImplicitCast) == 0x000040, "Member 'WBP_QuestCategoryCompletedTracker_C_SetTextColorAnimValue::CallFunc_LinearColorLerp_Alpha_ImplicitCast' has a wrong offset!");

}
