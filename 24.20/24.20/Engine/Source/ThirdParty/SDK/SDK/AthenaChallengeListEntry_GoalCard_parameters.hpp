#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct AthenaChallengeListEntry_GoalCard_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(AthenaChallengeListEntry_GoalCard_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_GoalCard_C_BP_OnItemSelectionChanged");
static_assert(sizeof(AthenaChallengeListEntry_GoalCard_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on AthenaChallengeListEntry_GoalCard_C_BP_OnItemSelectionChanged");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'AthenaChallengeListEntry_GoalCard_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

struct AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	class UGoalsPageQuestCard_C*                  K2Node_DynamicCast_AsGoals_Page_Quest_Card;
	bool                                          K2Node_DynamicCast_bSuccess;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          K2Node_Event_bDisabled;
	bool                                          K2Node_Event_bIsSelected;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_16[0x2];
	class UGoalsPageQuestCard_C*                  K2Node_DynamicCast_AsGoals_Page_Quest_Card_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
};
static_assert(alignof(AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard");
static_assert(sizeof(AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard) == 0x000028, "Wrong size on AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard, EntryPoint) == 0x000000, "Member 'AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard, Temp_bool_Variable) == 0x000004, "Member 'AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard, K2Node_DynamicCast_AsGoals_Page_Quest_Card) == 0x000008, "Member 'AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard::K2Node_DynamicCast_AsGoals_Page_Quest_Card' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard, Temp_byte_Variable) == 0x000011, "Member 'AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard, Temp_byte_Variable_1) == 0x000012, "Member 'AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard, K2Node_Event_bDisabled) == 0x000013, "Member 'AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard::K2Node_Event_bDisabled' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard, K2Node_Event_bIsSelected) == 0x000014, "Member 'AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard, K2Node_Select_Default) == 0x000015, "Member 'AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard, K2Node_DynamicCast_AsGoals_Page_Quest_Card_1) == 0x000018, "Member 'AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard::K2Node_DynamicCast_AsGoals_Page_Quest_Card_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'AthenaChallengeListEntry_GoalCard_C_ExecuteUbergraph_AthenaChallengeListEntry_GoalCard::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

struct AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad final
{
public:
	bool                                          Return_Value;
	uint8                                         Pad_1[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad");
static_assert(sizeof(AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad) == 0x000018, "Wrong size on AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad, Return_Value) == 0x000000, "Member 'AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad::Return_Value' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'AthenaChallengeListEntry_GoalCard_C_IsUsingGamepad::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct AthenaChallengeListEntry_GoalCard_C_OnChallengeDataSet final
{
public:
	bool                                          bDisabled;
};
static_assert(alignof(AthenaChallengeListEntry_GoalCard_C_OnChallengeDataSet) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_GoalCard_C_OnChallengeDataSet");
static_assert(sizeof(AthenaChallengeListEntry_GoalCard_C_OnChallengeDataSet) == 0x000001, "Wrong size on AthenaChallengeListEntry_GoalCard_C_OnChallengeDataSet");
static_assert(offsetof(AthenaChallengeListEntry_GoalCard_C_OnChallengeDataSet, bDisabled) == 0x000000, "Member 'AthenaChallengeListEntry_GoalCard_C_OnChallengeDataSet::bDisabled' has a wrong offset!");

}
