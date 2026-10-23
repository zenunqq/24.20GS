#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_6[0x2];
	float                                         Temp_real_Variable;
	float                                         Temp_real_Variable_1;
	struct FBundleGoalCardDisplayData             K2Node_Event_GoalCardDisplayData;
	EAthenaChallengeTimerState                    K2Node_Event_TimerState;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_92[0x6];
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	bool                                          CallFunc_GetIsSelectable_ReturnValue;
	bool                                          CallFunc_GetIsSelectable_ReturnValue_1;
	bool                                          K2Node_Event_bCardIsSelectable;
	bool                                          K2Node_Event_bEnabled;
	uint8                                         Pad_20C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          K2Node_Event_bBattlePassRequired;
	uint8                                         Pad_221[0x3];
	float                                         K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              K2Node_Select_Default_1;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              K2Node_Select_Default_2;
};
static_assert(alignof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard) == 0x000008, "Wrong alignment on GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard");
static_assert(sizeof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard) == 0x000230, "Wrong size on GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, EntryPoint) == 0x000000, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::EntryPoint' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, Temp_bool_Variable) == 0x000004, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, Temp_bool_Variable_1) == 0x000005, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, Temp_real_Variable) == 0x000008, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, Temp_real_Variable_1) == 0x00000C, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, K2Node_Event_GoalCardDisplayData) == 0x000010, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::K2Node_Event_GoalCardDisplayData' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, K2Node_Event_TimerState) == 0x000090, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::K2Node_Event_TimerState' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, Temp_byte_Variable) == 0x000091, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, K2Node_Event_MyGeometry) == 0x000098, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, K2Node_Event_MouseEvent_1) == 0x0000D8, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, K2Node_Event_MouseEvent) == 0x000170, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, CallFunc_GetIsSelectable_ReturnValue) == 0x000208, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::CallFunc_GetIsSelectable_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, CallFunc_GetIsSelectable_ReturnValue_1) == 0x000209, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::CallFunc_GetIsSelectable_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, K2Node_Event_bCardIsSelectable) == 0x00020A, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::K2Node_Event_bCardIsSelectable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, K2Node_Event_bEnabled) == 0x00020B, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::K2Node_Event_bEnabled' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000210, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, CallFunc_PlayAnimationForward_ReturnValue) == 0x000218, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, K2Node_Event_bBattlePassRequired) == 0x000220, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::K2Node_Event_bBattlePassRequired' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, K2Node_Select_Default) == 0x000224, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, Temp_byte_Variable_1) == 0x000228, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, Temp_bool_Variable_2) == 0x000229, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, Temp_byte_Variable_2) == 0x00022A, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, K2Node_Select_Default_1) == 0x00022B, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, Temp_byte_Variable_3) == 0x00022C, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard, K2Node_Select_Default_2) == 0x00022D, "Member 'GoalsPageQuestCard_C_ExecuteUbergraph_GoalsPageQuestCard::K2Node_Select_Default_2' has a wrong offset!");

struct GoalsPageQuestCard_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(GoalsPageQuestCard_C_OnMouseEnter) == 0x000008, "Wrong alignment on GoalsPageQuestCard_C_OnMouseEnter");
static_assert(sizeof(GoalsPageQuestCard_C_OnMouseEnter) == 0x0000D8, "Wrong size on GoalsPageQuestCard_C_OnMouseEnter");
static_assert(offsetof(GoalsPageQuestCard_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'GoalsPageQuestCard_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'GoalsPageQuestCard_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct GoalsPageQuestCard_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(GoalsPageQuestCard_C_OnMouseLeave) == 0x000008, "Wrong alignment on GoalsPageQuestCard_C_OnMouseLeave");
static_assert(sizeof(GoalsPageQuestCard_C_OnMouseLeave) == 0x000098, "Wrong size on GoalsPageQuestCard_C_OnMouseLeave");
static_assert(offsetof(GoalsPageQuestCard_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'GoalsPageQuestCard_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct GoalsPageQuestCard_C_OnTimerSet final
{
public:
	EAthenaChallengeTimerState                    TimerState;
};
static_assert(alignof(GoalsPageQuestCard_C_OnTimerSet) == 0x000001, "Wrong alignment on GoalsPageQuestCard_C_OnTimerSet");
static_assert(sizeof(GoalsPageQuestCard_C_OnTimerSet) == 0x000001, "Wrong size on GoalsPageQuestCard_C_OnTimerSet");
static_assert(offsetof(GoalsPageQuestCard_C_OnTimerSet, TimerState) == 0x000000, "Member 'GoalsPageQuestCard_C_OnTimerSet::TimerState' has a wrong offset!");

struct GoalsPageQuestCard_C_PopulateBattlePassRequirement final
{
public:
	bool                                          bBattlePassRequired;
};
static_assert(alignof(GoalsPageQuestCard_C_PopulateBattlePassRequirement) == 0x000001, "Wrong alignment on GoalsPageQuestCard_C_PopulateBattlePassRequirement");
static_assert(sizeof(GoalsPageQuestCard_C_PopulateBattlePassRequirement) == 0x000001, "Wrong size on GoalsPageQuestCard_C_PopulateBattlePassRequirement");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateBattlePassRequirement, bBattlePassRequired) == 0x000000, "Member 'GoalsPageQuestCard_C_PopulateBattlePassRequirement::bBattlePassRequired' has a wrong offset!");

struct GoalsPageQuestCard_C_PopulateHeader final
{
public:
	struct FBundleGoalCardDisplayData             GoalCardDisplayData;
};
static_assert(alignof(GoalsPageQuestCard_C_PopulateHeader) == 0x000008, "Wrong alignment on GoalsPageQuestCard_C_PopulateHeader");
static_assert(sizeof(GoalsPageQuestCard_C_PopulateHeader) == 0x000080, "Wrong size on GoalsPageQuestCard_C_PopulateHeader");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateHeader, GoalCardDisplayData) == 0x000000, "Member 'GoalsPageQuestCard_C_PopulateHeader::GoalCardDisplayData' has a wrong offset!");

struct GoalsPageQuestCard_C_PopulateHeaderText final
{
public:
	class FText                                   Text;
	struct FLinearColor                           Color;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
};
static_assert(alignof(GoalsPageQuestCard_C_PopulateHeaderText) == 0x000008, "Wrong alignment on GoalsPageQuestCard_C_PopulateHeaderText");
static_assert(sizeof(GoalsPageQuestCard_C_PopulateHeaderText) == 0x000040, "Wrong size on GoalsPageQuestCard_C_PopulateHeaderText");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateHeaderText, Text) == 0x000000, "Member 'GoalsPageQuestCard_C_PopulateHeaderText::Text' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateHeaderText, Color) == 0x000018, "Member 'GoalsPageQuestCard_C_PopulateHeaderText::Color' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateHeaderText, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'GoalsPageQuestCard_C_PopulateHeaderText::K2Node_MakeStruct_SlateColor' has a wrong offset!");

struct GoalsPageQuestCard_C_PopulateIcon final
{
public:
	TSoftObjectPtr<class UObject>                 Icon;
	int32                                         MilestoneTier;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_2D[0x3];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;
	uint8                                         Pad_4C[0x4];
	struct FFontOutlineSettings                   K2Node_MakeStruct_FontOutlineSettings;
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
};
static_assert(alignof(GoalsPageQuestCard_C_PopulateIcon) == 0x000008, "Wrong alignment on GoalsPageQuestCard_C_PopulateIcon");
static_assert(sizeof(GoalsPageQuestCard_C_PopulateIcon) == 0x0000C8, "Wrong size on GoalsPageQuestCard_C_PopulateIcon");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateIcon, Icon) == 0x000000, "Member 'GoalsPageQuestCard_C_PopulateIcon::Icon' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateIcon, MilestoneTier) == 0x000028, "Member 'GoalsPageQuestCard_C_PopulateIcon::MilestoneTier' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateIcon, CallFunc_Greater_IntInt_ReturnValue) == 0x00002C, "Member 'GoalsPageQuestCard_C_PopulateIcon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateIcon, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'GoalsPageQuestCard_C_PopulateIcon::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000048, "Member 'GoalsPageQuestCard_C_PopulateIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateIcon, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000049, "Member 'GoalsPageQuestCard_C_PopulateIcon::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateIcon, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x00004A, "Member 'GoalsPageQuestCard_C_PopulateIcon::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateIcon, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x00004B, "Member 'GoalsPageQuestCard_C_PopulateIcon::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateIcon, K2Node_MakeStruct_FontOutlineSettings) == 0x000050, "Member 'GoalsPageQuestCard_C_PopulateIcon::K2Node_MakeStruct_FontOutlineSettings' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateIcon, K2Node_MakeStruct_SlateFontInfo) == 0x000070, "Member 'GoalsPageQuestCard_C_PopulateIcon::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

struct GoalsPageQuestCard_C_PopulateIsSelectable final
{
public:
	bool                                          bCardIsSelectable;
};
static_assert(alignof(GoalsPageQuestCard_C_PopulateIsSelectable) == 0x000001, "Wrong alignment on GoalsPageQuestCard_C_PopulateIsSelectable");
static_assert(sizeof(GoalsPageQuestCard_C_PopulateIsSelectable) == 0x000001, "Wrong size on GoalsPageQuestCard_C_PopulateIsSelectable");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateIsSelectable, bCardIsSelectable) == 0x000000, "Member 'GoalsPageQuestCard_C_PopulateIsSelectable::bCardIsSelectable' has a wrong offset!");

struct GoalsPageQuestCard_C_PopulateSubHeaderText final
{
public:
	class FText                                   Text;
	int32                                         MilestoneTier;
	struct FLinearColor                           Color;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_42[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	uint8                                         Pad_49[0x7];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(GoalsPageQuestCard_C_PopulateSubHeaderText) == 0x000008, "Wrong alignment on GoalsPageQuestCard_C_PopulateSubHeaderText");
static_assert(sizeof(GoalsPageQuestCard_C_PopulateSubHeaderText) == 0x0000E8, "Wrong size on GoalsPageQuestCard_C_PopulateSubHeaderText");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, Text) == 0x000000, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::Text' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, MilestoneTier) == 0x000018, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::MilestoneTier' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, Color) == 0x00001C, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::Color' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, K2Node_MakeStruct_SlateColor) == 0x00002C, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000041, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, CallFunc_TextIsEmpty_ReturnValue) == 0x000048, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, CallFunc_Conv_IntToText_ReturnValue) == 0x000050, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, K2Node_MakeArray_Array) == 0x0000B8, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, Temp_byte_Variable) == 0x0000E0, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, Temp_byte_Variable_1) == 0x0000E1, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, Temp_bool_Variable) == 0x0000E2, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_PopulateSubHeaderText, K2Node_Select_Default) == 0x0000E3, "Member 'GoalsPageQuestCard_C_PopulateSubHeaderText::K2Node_Select_Default' has a wrong offset!");

struct GoalsPageQuestCard_C_Reset final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_9[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue;
	class UUserWidget*                            CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_2C[0x4];
	class UGoalsPageQuestCardLine_C*              K2Node_DynamicCast_AsGoals_Page_Quest_Card_Line;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_3A[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue_1;
	float                                         K2Node_Select_Default;
	uint8                                         Pad_4C[0x4];
	class UWidgetAnimation*                       K2Node_Select_Default_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(GoalsPageQuestCard_C_Reset) == 0x000008, "Wrong alignment on GoalsPageQuestCard_C_Reset");
static_assert(sizeof(GoalsPageQuestCard_C_Reset) == 0x000060, "Wrong size on GoalsPageQuestCard_C_Reset");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, Temp_bool_Variable) == 0x000000, "Member 'GoalsPageQuestCard_C_Reset::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, Temp_int_Array_Index_Variable) == 0x000004, "Member 'GoalsPageQuestCard_C_Reset::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, Temp_bool_Variable_1) == 0x000008, "Member 'GoalsPageQuestCard_C_Reset::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'GoalsPageQuestCard_C_Reset::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, CallFunc_GetAllEntries_ReturnValue) == 0x000010, "Member 'GoalsPageQuestCard_C_Reset::CallFunc_GetAllEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, CallFunc_Array_Get_Item) == 0x000020, "Member 'GoalsPageQuestCard_C_Reset::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'GoalsPageQuestCard_C_Reset::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, K2Node_DynamicCast_AsGoals_Page_Quest_Card_Line) == 0x000030, "Member 'GoalsPageQuestCard_C_Reset::K2Node_DynamicCast_AsGoals_Page_Quest_Card_Line' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'GoalsPageQuestCard_C_Reset::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'GoalsPageQuestCard_C_Reset::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'GoalsPageQuestCard_C_Reset::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, CallFunc_GetEndTime_ReturnValue) == 0x000040, "Member 'GoalsPageQuestCard_C_Reset::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, CallFunc_GetEndTime_ReturnValue_1) == 0x000044, "Member 'GoalsPageQuestCard_C_Reset::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, K2Node_Select_Default) == 0x000048, "Member 'GoalsPageQuestCard_C_Reset::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, K2Node_Select_Default_1) == 0x000050, "Member 'GoalsPageQuestCard_C_Reset::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_Reset, CallFunc_PlayAnimation_ReturnValue) == 0x000058, "Member 'GoalsPageQuestCard_C_Reset::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct GoalsPageQuestCard_C_SetIsSelected final
{
public:
	bool                                          IsSelected;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable_1;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_1C[0x4];
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue;
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue_1;
	class UUserWidget*                            CallFunc_Array_Get_Item;
	class UUserWidget*                            CallFunc_Array_Get_Item_1;
	class UGoalsPageQuestCardLine_C*              K2Node_DynamicCast_AsGoals_Page_Quest_Card_Line;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_59[0x7];
	class UGoalsPageQuestCardLine_C*              K2Node_DynamicCast_AsGoals_Page_Quest_Card_Line_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_69[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_76[0x2];
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_7C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(GoalsPageQuestCard_C_SetIsSelected) == 0x000008, "Wrong alignment on GoalsPageQuestCard_C_SetIsSelected");
static_assert(sizeof(GoalsPageQuestCard_C_SetIsSelected) == 0x000098, "Wrong size on GoalsPageQuestCard_C_SetIsSelected");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, IsSelected) == 0x000000, "Member 'GoalsPageQuestCard_C_SetIsSelected::IsSelected' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, Temp_int_Array_Index_Variable) == 0x000004, "Member 'GoalsPageQuestCard_C_SetIsSelected::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'GoalsPageQuestCard_C_SetIsSelected::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'GoalsPageQuestCard_C_SetIsSelected::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'GoalsPageQuestCard_C_SetIsSelected::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'GoalsPageQuestCard_C_SetIsSelected::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'GoalsPageQuestCard_C_SetIsSelected::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, CallFunc_GetAllEntries_ReturnValue) == 0x000020, "Member 'GoalsPageQuestCard_C_SetIsSelected::CallFunc_GetAllEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, CallFunc_GetAllEntries_ReturnValue_1) == 0x000030, "Member 'GoalsPageQuestCard_C_SetIsSelected::CallFunc_GetAllEntries_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, CallFunc_Array_Get_Item) == 0x000040, "Member 'GoalsPageQuestCard_C_SetIsSelected::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'GoalsPageQuestCard_C_SetIsSelected::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, K2Node_DynamicCast_AsGoals_Page_Quest_Card_Line) == 0x000050, "Member 'GoalsPageQuestCard_C_SetIsSelected::K2Node_DynamicCast_AsGoals_Page_Quest_Card_Line' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'GoalsPageQuestCard_C_SetIsSelected::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, K2Node_DynamicCast_AsGoals_Page_Quest_Card_Line_1) == 0x000060, "Member 'GoalsPageQuestCard_C_SetIsSelected::K2Node_DynamicCast_AsGoals_Page_Quest_Card_Line_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'GoalsPageQuestCard_C_SetIsSelected::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'GoalsPageQuestCard_C_SetIsSelected::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, CallFunc_Array_Length_ReturnValue_1) == 0x000070, "Member 'GoalsPageQuestCard_C_SetIsSelected::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'GoalsPageQuestCard_C_SetIsSelected::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, CallFunc_Less_IntInt_ReturnValue_1) == 0x000075, "Member 'GoalsPageQuestCard_C_SetIsSelected::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, CallFunc_GetEndTime_ReturnValue) == 0x000078, "Member 'GoalsPageQuestCard_C_SetIsSelected::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, CallFunc_PlayAnimation_ReturnValue) == 0x000080, "Member 'GoalsPageQuestCard_C_SetIsSelected::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000088, "Member 'GoalsPageQuestCard_C_SetIsSelected::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetIsSelected, CallFunc_PlayAnimationForward_ReturnValue) == 0x000090, "Member 'GoalsPageQuestCard_C_SetIsSelected::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

struct GoalsPageQuestCard_C_SetTimerStyling final
{
public:
	EAthenaChallengeTimerState                    TimerState;
	EAthenaChallengeTimerState                    Temp_byte_Variable;
	uint8                                         Pad_2[0x2];
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	struct FLinearColor                           Temp_struct_Variable_2;
	struct FLinearColor                           Temp_struct_Variable_3;
	struct FLinearColor                           Temp_struct_Variable_4;
	struct FLinearColor                           Temp_struct_Variable_5;
	uint8                                         Pad_64[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	struct FLinearColor                           K2Node_Select_Default;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;
};
static_assert(alignof(GoalsPageQuestCard_C_SetTimerStyling) == 0x000008, "Wrong alignment on GoalsPageQuestCard_C_SetTimerStyling");
static_assert(sizeof(GoalsPageQuestCard_C_SetTimerStyling) == 0x000088, "Wrong size on GoalsPageQuestCard_C_SetTimerStyling");
static_assert(offsetof(GoalsPageQuestCard_C_SetTimerStyling, TimerState) == 0x000000, "Member 'GoalsPageQuestCard_C_SetTimerStyling::TimerState' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetTimerStyling, Temp_byte_Variable) == 0x000001, "Member 'GoalsPageQuestCard_C_SetTimerStyling::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetTimerStyling, Temp_struct_Variable) == 0x000004, "Member 'GoalsPageQuestCard_C_SetTimerStyling::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetTimerStyling, Temp_struct_Variable_1) == 0x000014, "Member 'GoalsPageQuestCard_C_SetTimerStyling::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetTimerStyling, Temp_struct_Variable_2) == 0x000024, "Member 'GoalsPageQuestCard_C_SetTimerStyling::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetTimerStyling, Temp_struct_Variable_3) == 0x000034, "Member 'GoalsPageQuestCard_C_SetTimerStyling::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetTimerStyling, Temp_struct_Variable_4) == 0x000044, "Member 'GoalsPageQuestCard_C_SetTimerStyling::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetTimerStyling, Temp_struct_Variable_5) == 0x000054, "Member 'GoalsPageQuestCard_C_SetTimerStyling::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetTimerStyling, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000068, "Member 'GoalsPageQuestCard_C_SetTimerStyling::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetTimerStyling, K2Node_Select_Default) == 0x000070, "Member 'GoalsPageQuestCard_C_SetTimerStyling::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GoalsPageQuestCard_C_SetTimerStyling, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x000080, "Member 'GoalsPageQuestCard_C_SetTimerStyling::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");

struct GoalsPageQuestCard_C_ShowNewBang final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(GoalsPageQuestCard_C_ShowNewBang) == 0x000001, "Wrong alignment on GoalsPageQuestCard_C_ShowNewBang");
static_assert(sizeof(GoalsPageQuestCard_C_ShowNewBang) == 0x000001, "Wrong size on GoalsPageQuestCard_C_ShowNewBang");
static_assert(offsetof(GoalsPageQuestCard_C_ShowNewBang, bEnabled) == 0x000000, "Member 'GoalsPageQuestCard_C_ShowNewBang::bEnabled' has a wrong offset!");

}
