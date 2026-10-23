#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct QuestMapCategoryButton_C_BP_OnTimerSet final
{
public:
	EAthenaChallengeTimerState                    TimerState;
};
static_assert(alignof(QuestMapCategoryButton_C_BP_OnTimerSet) == 0x000001, "Wrong alignment on QuestMapCategoryButton_C_BP_OnTimerSet");
static_assert(sizeof(QuestMapCategoryButton_C_BP_OnTimerSet) == 0x000001, "Wrong size on QuestMapCategoryButton_C_BP_OnTimerSet");
static_assert(offsetof(QuestMapCategoryButton_C_BP_OnTimerSet, TimerState) == 0x000000, "Member 'QuestMapCategoryButton_C_BP_OnTimerSet::TimerState' has a wrong offset!");

struct QuestMapCategoryButton_C_BP_Populate final
{
public:
	class FText                                   Title;
	class FText                                   SubText;
	int32                                         CompletedQuests;
	int32                                         TotalQuest;
	struct FQuestCategoryButtonOverrides          ButtonOverrides;
	bool                                          bQuestListContentDisabled;
};
static_assert(alignof(QuestMapCategoryButton_C_BP_Populate) == 0x000008, "Wrong alignment on QuestMapCategoryButton_C_BP_Populate");
static_assert(sizeof(QuestMapCategoryButton_C_BP_Populate) == 0x0000B8, "Wrong size on QuestMapCategoryButton_C_BP_Populate");
static_assert(offsetof(QuestMapCategoryButton_C_BP_Populate, Title) == 0x000000, "Member 'QuestMapCategoryButton_C_BP_Populate::Title' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_BP_Populate, SubText) == 0x000018, "Member 'QuestMapCategoryButton_C_BP_Populate::SubText' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_BP_Populate, CompletedQuests) == 0x000030, "Member 'QuestMapCategoryButton_C_BP_Populate::CompletedQuests' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_BP_Populate, TotalQuest) == 0x000034, "Member 'QuestMapCategoryButton_C_BP_Populate::TotalQuest' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_BP_Populate, ButtonOverrides) == 0x000038, "Member 'QuestMapCategoryButton_C_BP_Populate::ButtonOverrides' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_BP_Populate, bQuestListContentDisabled) == 0x0000B0, "Member 'QuestMapCategoryButton_C_BP_Populate::bQuestListContentDisabled' has a wrong offset!");

struct QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_A[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_3;
	class FText                                   K2Node_Event_Title;
	class FText                                   K2Node_Event_SubText;
	int32                                         K2Node_Event_CompletedQuests;
	int32                                         K2Node_Event_TotalQuest;
	struct FQuestCategoryButtonOverrides          K2Node_Event_ButtonOverrides;
	bool                                          K2Node_Event_bQuestListContentDisabled;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	EAthenaChallengeTimerState                    K2Node_Event_TimerState_2;
	uint8                                         Pad_F4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_4;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_2;
	EAthenaChallengeTimerState                    K2Node_Event_TimerState_1;
	EQuestCategoryButtonTimerState                K2Node_Event_TimerType;
	uint8                                         Pad_10A[0x6];
	class FText                                   K2Node_Event_TimerText;
	struct FTimespan                              K2Node_Event_TimeRemaining_1;
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	EAthenaChallengeTimerState                    K2Node_Event_TimerState;
	uint8                                         Pad_151[0x7];
	struct FTimespan                              K2Node_Event_TimeRemaining;
	bool                                          K2Node_Event_bEnabled;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_162[0x6];
	struct FQuestCategoryButtonOverrides          K2Node_MakeStruct_QuestCategoryButtonOverrides;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton) == 0x000008, "Wrong alignment on QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton");
static_assert(sizeof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton) == 0x0001E8, "Wrong size on QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, EntryPoint) == 0x000000, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, Temp_bool_Variable) == 0x000004, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, Temp_byte_Variable) == 0x000005, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, Temp_byte_Variable_1) == 0x000006, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, Temp_bool_Variable_1) == 0x000007, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, Temp_byte_Variable_2) == 0x000008, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, Temp_byte_Variable_3) == 0x000009, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000018, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000020, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x000028, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000030, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, CallFunc_PlayAnimationForward_ReturnValue_3) == 0x000038, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::CallFunc_PlayAnimationForward_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_Title) == 0x000040, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_Title' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_SubText) == 0x000058, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_SubText' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_CompletedQuests) == 0x000070, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_CompletedQuests' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_TotalQuest) == 0x000074, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_TotalQuest' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_ButtonOverrides) == 0x000078, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_ButtonOverrides' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_bQuestListContentDisabled) == 0x0000F0, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_bQuestListContentDisabled' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_IsDesignTime) == 0x0000F1, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000F2, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_TimerState_2) == 0x0000F3, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_TimerState_2' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, CallFunc_PlayAnimationForward_ReturnValue_4) == 0x0000F8, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::CallFunc_PlayAnimationForward_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, CallFunc_PlayAnimationReverse_ReturnValue_2) == 0x000100, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::CallFunc_PlayAnimationReverse_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_TimerState_1) == 0x000108, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_TimerState_1' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_TimerType) == 0x000109, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_TimerType' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_TimerText) == 0x000110, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_TimerText' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_TimeRemaining_1) == 0x000128, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_TimeRemaining_1' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, CallFunc_MakeTimespan_ReturnValue) == 0x000130, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, CallFunc_MakeLiteralText_ReturnValue) == 0x000138, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_TimerState) == 0x000150, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_TimerState' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_TimeRemaining) == 0x000158, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_TimeRemaining' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Event_bEnabled) == 0x000160, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Event_bEnabled' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Select_Default) == 0x000161, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_MakeStruct_QuestCategoryButtonOverrides) == 0x000168, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_MakeStruct_QuestCategoryButtonOverrides' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001E0, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, CallFunc_BooleanAND_ReturnValue) == 0x0001E1, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton, K2Node_Select_Default_1) == 0x0001E2, "Member 'QuestMapCategoryButton_C_ExecuteUbergraph_QuestMapCategoryButton::K2Node_Select_Default_1' has a wrong offset!");

struct QuestMapCategoryButton_C_OnMoreInTimerSet final
{
public:
	EAthenaChallengeTimerState                    TimerState;
	uint8                                         Pad_1[0x7];
	struct FTimespan                              TimeRemaining;
};
static_assert(alignof(QuestMapCategoryButton_C_OnMoreInTimerSet) == 0x000008, "Wrong alignment on QuestMapCategoryButton_C_OnMoreInTimerSet");
static_assert(sizeof(QuestMapCategoryButton_C_OnMoreInTimerSet) == 0x000010, "Wrong size on QuestMapCategoryButton_C_OnMoreInTimerSet");
static_assert(offsetof(QuestMapCategoryButton_C_OnMoreInTimerSet, TimerState) == 0x000000, "Member 'QuestMapCategoryButton_C_OnMoreInTimerSet::TimerState' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_OnMoreInTimerSet, TimeRemaining) == 0x000008, "Member 'QuestMapCategoryButton_C_OnMoreInTimerSet::TimeRemaining' has a wrong offset!");

struct QuestMapCategoryButton_C_OnTimeRemainingTimerSet final
{
public:
	EAthenaChallengeTimerState                    TimerState;
	EQuestCategoryButtonTimerState                TimerType;
	uint8                                         Pad_2[0x6];
	class FText                                   TimerText;
	struct FTimespan                              TimeRemaining;
};
static_assert(alignof(QuestMapCategoryButton_C_OnTimeRemainingTimerSet) == 0x000008, "Wrong alignment on QuestMapCategoryButton_C_OnTimeRemainingTimerSet");
static_assert(sizeof(QuestMapCategoryButton_C_OnTimeRemainingTimerSet) == 0x000028, "Wrong size on QuestMapCategoryButton_C_OnTimeRemainingTimerSet");
static_assert(offsetof(QuestMapCategoryButton_C_OnTimeRemainingTimerSet, TimerState) == 0x000000, "Member 'QuestMapCategoryButton_C_OnTimeRemainingTimerSet::TimerState' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_OnTimeRemainingTimerSet, TimerType) == 0x000001, "Member 'QuestMapCategoryButton_C_OnTimeRemainingTimerSet::TimerType' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_OnTimeRemainingTimerSet, TimerText) == 0x000008, "Member 'QuestMapCategoryButton_C_OnTimeRemainingTimerSet::TimerText' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_OnTimeRemainingTimerSet, TimeRemaining) == 0x000020, "Member 'QuestMapCategoryButton_C_OnTimeRemainingTimerSet::TimeRemaining' has a wrong offset!");

struct QuestMapCategoryButton_C_Populate final
{
public:
	class FText                                   Title;
	class FText                                   SubText;
	int32                                         CompletedQuests;
	int32                                         TotalQuests;
	struct FQuestCategoryButtonOverrides          Overrides;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
};
static_assert(alignof(QuestMapCategoryButton_C_Populate) == 0x000008, "Wrong alignment on QuestMapCategoryButton_C_Populate");
static_assert(sizeof(QuestMapCategoryButton_C_Populate) == 0x0000B8, "Wrong size on QuestMapCategoryButton_C_Populate");
static_assert(offsetof(QuestMapCategoryButton_C_Populate, Title) == 0x000000, "Member 'QuestMapCategoryButton_C_Populate::Title' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_Populate, SubText) == 0x000018, "Member 'QuestMapCategoryButton_C_Populate::SubText' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_Populate, CompletedQuests) == 0x000030, "Member 'QuestMapCategoryButton_C_Populate::CompletedQuests' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_Populate, TotalQuests) == 0x000034, "Member 'QuestMapCategoryButton_C_Populate::TotalQuests' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_Populate, Overrides) == 0x000038, "Member 'QuestMapCategoryButton_C_Populate::Overrides' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_Populate, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B0, "Member 'QuestMapCategoryButton_C_Populate::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

struct QuestMapCategoryButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(QuestMapCategoryButton_C_PreConstruct) == 0x000001, "Wrong alignment on QuestMapCategoryButton_C_PreConstruct");
static_assert(sizeof(QuestMapCategoryButton_C_PreConstruct) == 0x000001, "Wrong size on QuestMapCategoryButton_C_PreConstruct");
static_assert(offsetof(QuestMapCategoryButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'QuestMapCategoryButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct QuestMapCategoryButton_C_SetCompletedState final
{
public:
	bool                                          AllCompleted;
};
static_assert(alignof(QuestMapCategoryButton_C_SetCompletedState) == 0x000001, "Wrong alignment on QuestMapCategoryButton_C_SetCompletedState");
static_assert(sizeof(QuestMapCategoryButton_C_SetCompletedState) == 0x000001, "Wrong size on QuestMapCategoryButton_C_SetCompletedState");
static_assert(offsetof(QuestMapCategoryButton_C_SetCompletedState, AllCompleted) == 0x000000, "Member 'QuestMapCategoryButton_C_SetCompletedState::AllCompleted' has a wrong offset!");

struct QuestMapCategoryButton_C_SetNudgeAnimValue final
{
public:
	double                                        Value;
	double                                        CallFunc_Lerp_ReturnValue;
	class UGridSlot*                              CallFunc_SlotAsGridSlot_ReturnValue;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
};
static_assert(alignof(QuestMapCategoryButton_C_SetNudgeAnimValue) == 0x000008, "Wrong alignment on QuestMapCategoryButton_C_SetNudgeAnimValue");
static_assert(sizeof(QuestMapCategoryButton_C_SetNudgeAnimValue) == 0x000028, "Wrong size on QuestMapCategoryButton_C_SetNudgeAnimValue");
static_assert(offsetof(QuestMapCategoryButton_C_SetNudgeAnimValue, Value) == 0x000000, "Member 'QuestMapCategoryButton_C_SetNudgeAnimValue::Value' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetNudgeAnimValue, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'QuestMapCategoryButton_C_SetNudgeAnimValue::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetNudgeAnimValue, CallFunc_SlotAsGridSlot_ReturnValue) == 0x000010, "Member 'QuestMapCategoryButton_C_SetNudgeAnimValue::CallFunc_SlotAsGridSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetNudgeAnimValue, CallFunc_MakeVector2D_ReturnValue) == 0x000018, "Member 'QuestMapCategoryButton_C_SetNudgeAnimValue::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

struct QuestMapCategoryButton_C_SetTimer final
{
public:
	EAthenaChallengeTimerState                    TimerState;
	EQuestCategoryButtonTimerState                TimerType;
	uint8                                         Pad_2[0x6];
	class FText                                   TimerText;
	struct FTimespan                              Timespan;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_5;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              K2Node_Select_Default_1;
	ESlateVisibility                              K2Node_Select_Default_2;
};
static_assert(alignof(QuestMapCategoryButton_C_SetTimer) == 0x000008, "Wrong alignment on QuestMapCategoryButton_C_SetTimer");
static_assert(sizeof(QuestMapCategoryButton_C_SetTimer) == 0x000038, "Wrong size on QuestMapCategoryButton_C_SetTimer");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, TimerState) == 0x000000, "Member 'QuestMapCategoryButton_C_SetTimer::TimerState' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, TimerType) == 0x000001, "Member 'QuestMapCategoryButton_C_SetTimer::TimerType' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, TimerText) == 0x000008, "Member 'QuestMapCategoryButton_C_SetTimer::TimerText' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, Timespan) == 0x000020, "Member 'QuestMapCategoryButton_C_SetTimer::Timespan' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, Temp_bool_Variable) == 0x000028, "Member 'QuestMapCategoryButton_C_SetTimer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, Temp_byte_Variable) == 0x000029, "Member 'QuestMapCategoryButton_C_SetTimer::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, Temp_byte_Variable_1) == 0x00002A, "Member 'QuestMapCategoryButton_C_SetTimer::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, Temp_bool_Variable_1) == 0x00002B, "Member 'QuestMapCategoryButton_C_SetTimer::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, Temp_byte_Variable_2) == 0x00002C, "Member 'QuestMapCategoryButton_C_SetTimer::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, Temp_byte_Variable_3) == 0x00002D, "Member 'QuestMapCategoryButton_C_SetTimer::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, Temp_byte_Variable_4) == 0x00002E, "Member 'QuestMapCategoryButton_C_SetTimer::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, Temp_byte_Variable_5) == 0x00002F, "Member 'QuestMapCategoryButton_C_SetTimer::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'QuestMapCategoryButton_C_SetTimer::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000031, "Member 'QuestMapCategoryButton_C_SetTimer::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000032, "Member 'QuestMapCategoryButton_C_SetTimer::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000033, "Member 'QuestMapCategoryButton_C_SetTimer::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, K2Node_Select_Default) == 0x000034, "Member 'QuestMapCategoryButton_C_SetTimer::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, Temp_bool_Variable_2) == 0x000035, "Member 'QuestMapCategoryButton_C_SetTimer::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, K2Node_Select_Default_1) == 0x000036, "Member 'QuestMapCategoryButton_C_SetTimer::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimer, K2Node_Select_Default_2) == 0x000037, "Member 'QuestMapCategoryButton_C_SetTimer::K2Node_Select_Default_2' has a wrong offset!");

struct QuestMapCategoryButton_C_SetTimerStyling final
{
public:
	EAthenaChallengeTimerState                    TimerState;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           HoverColor;
	struct FLinearColor                           DefaultColor;
	EAthenaChallengeTimerState                    Temp_byte_Variable;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	EAthenaChallengeTimerState                    Temp_byte_Variable_1;
	uint8                                         Pad_27[0x1];
	struct FLinearColor                           K2Node_Select_Default;
	struct FLinearColor                           K2Node_Select_Default_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(QuestMapCategoryButton_C_SetTimerStyling) == 0x000008, "Wrong alignment on QuestMapCategoryButton_C_SetTimerStyling");
static_assert(sizeof(QuestMapCategoryButton_C_SetTimerStyling) == 0x000058, "Wrong size on QuestMapCategoryButton_C_SetTimerStyling");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimerStyling, TimerState) == 0x000000, "Member 'QuestMapCategoryButton_C_SetTimerStyling::TimerState' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimerStyling, HoverColor) == 0x000004, "Member 'QuestMapCategoryButton_C_SetTimerStyling::HoverColor' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimerStyling, DefaultColor) == 0x000014, "Member 'QuestMapCategoryButton_C_SetTimerStyling::DefaultColor' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimerStyling, Temp_byte_Variable) == 0x000024, "Member 'QuestMapCategoryButton_C_SetTimerStyling::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimerStyling, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000025, "Member 'QuestMapCategoryButton_C_SetTimerStyling::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimerStyling, Temp_byte_Variable_1) == 0x000026, "Member 'QuestMapCategoryButton_C_SetTimerStyling::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimerStyling, K2Node_Select_Default) == 0x000028, "Member 'QuestMapCategoryButton_C_SetTimerStyling::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimerStyling, K2Node_Select_Default_1) == 0x000038, "Member 'QuestMapCategoryButton_C_SetTimerStyling::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimerStyling, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x000048, "Member 'QuestMapCategoryButton_C_SetTimerStyling::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTimerStyling, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000050, "Member 'QuestMapCategoryButton_C_SetTimerStyling::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct QuestMapCategoryButton_C_SetTitle final
{
public:
	class FText                                   Title;
	class FText                                   SubText;
};
static_assert(alignof(QuestMapCategoryButton_C_SetTitle) == 0x000008, "Wrong alignment on QuestMapCategoryButton_C_SetTitle");
static_assert(sizeof(QuestMapCategoryButton_C_SetTitle) == 0x000030, "Wrong size on QuestMapCategoryButton_C_SetTitle");
static_assert(offsetof(QuestMapCategoryButton_C_SetTitle, Title) == 0x000000, "Member 'QuestMapCategoryButton_C_SetTitle::Title' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetTitle, SubText) == 0x000018, "Member 'QuestMapCategoryButton_C_SetTitle::SubText' has a wrong offset!");

struct QuestMapCategoryButton_C_SetVisuals final
{
public:
	struct FQuestCategoryButtonOverrides          Overrides;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;
	uint8                                         Pad_8D[0x3];
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1;
};
static_assert(alignof(QuestMapCategoryButton_C_SetVisuals) == 0x000008, "Wrong alignment on QuestMapCategoryButton_C_SetVisuals");
static_assert(sizeof(QuestMapCategoryButton_C_SetVisuals) == 0x0000A0, "Wrong size on QuestMapCategoryButton_C_SetVisuals");
static_assert(offsetof(QuestMapCategoryButton_C_SetVisuals, Overrides) == 0x000000, "Member 'QuestMapCategoryButton_C_SetVisuals::Overrides' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetVisuals, K2Node_MakeStruct_SlateColor) == 0x000078, "Member 'QuestMapCategoryButton_C_SetVisuals::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetVisuals, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x00008C, "Member 'QuestMapCategoryButton_C_SetVisuals::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetVisuals, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000090, "Member 'QuestMapCategoryButton_C_SetVisuals::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMapCategoryButton_C_SetVisuals, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x000098, "Member 'QuestMapCategoryButton_C_SetVisuals::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");

struct QuestMapCategoryButton_C_ShowNewBang final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(QuestMapCategoryButton_C_ShowNewBang) == 0x000001, "Wrong alignment on QuestMapCategoryButton_C_ShowNewBang");
static_assert(sizeof(QuestMapCategoryButton_C_ShowNewBang) == 0x000001, "Wrong size on QuestMapCategoryButton_C_ShowNewBang");
static_assert(offsetof(QuestMapCategoryButton_C_ShowNewBang, bEnabled) == 0x000000, "Member 'QuestMapCategoryButton_C_ShowNewBang::bEnabled' has a wrong offset!");

}
