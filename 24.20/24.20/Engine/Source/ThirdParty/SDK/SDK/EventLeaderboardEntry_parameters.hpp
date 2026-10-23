#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	struct FLinearColor                           Temp_struct_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_19[0x3];
	struct FLinearColor                           Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_2D[0x3];
	struct FLinearColor                           Temp_struct_Variable_2;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_41[0x3];
	struct FLinearColor                           Temp_struct_Variable_3;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_56[0x2];
	class UObject*                                K2Node_Event_ListItemObject;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_61[0x7];
	class UFortEventLeaderboardEntryData*         K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_71[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UFortShowdownDetailView*                CallFunc_FindParentWidgetOfType_ReturnValue;
	class UFortShowdownDetailView*                K2Node_DynamicCast_AsFort_Showdown_Detail_View;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_99[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FLinearColor                           K2Node_Select_Default;
	float                                         CallFunc_BreakColor_R;
	float                                         CallFunc_BreakColor_G;
	float                                         CallFunc_BreakColor_B;
	float                                         CallFunc_BreakColor_A;
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;
	struct FLinearColor                           K2Node_Select_Default_1;
	struct FLinearColor                           K2Node_Select_Default_2;
	class UUserWidget*                            K2Node_Event_TeamEntryWidget;
	class FText                                   K2Node_Event_Usernames;
	class UTeamEntry_C*                           K2Node_DynamicCast_AsTeam_Entry;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_139[0x3];
	struct FLinearColor                           K2Node_Select_Default_3;
};
static_assert(alignof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry) == 0x000008, "Wrong alignment on EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry");
static_assert(sizeof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry) == 0x000150, "Wrong size on EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, EntryPoint) == 0x000000, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, Temp_bool_Variable) == 0x000004, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, Temp_struct_Variable) == 0x000008, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, Temp_bool_Variable_1) == 0x000018, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, Temp_struct_Variable_1) == 0x00001C, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, Temp_bool_Variable_2) == 0x00002C, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, Temp_struct_Variable_2) == 0x000030, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, Temp_bool_Variable_3) == 0x000040, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, Temp_struct_Variable_3) == 0x000044, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_Event_IsDesignTime) == 0x000054, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, CallFunc_Not_PreBool_ReturnValue) == 0x000055, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_Event_ListItemObject) == 0x000058, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, CallFunc_BooleanAND_ReturnValue) == 0x000060, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data) == 0x000068, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000078, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, CallFunc_PlayAnimationForward_ReturnValue) == 0x000080, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, CallFunc_FindParentWidgetOfType_ReturnValue) == 0x000088, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::CallFunc_FindParentWidgetOfType_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_DynamicCast_AsFort_Showdown_Detail_View) == 0x000090, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_DynamicCast_AsFort_Showdown_Detail_View' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_MakeStruct_SlateColor) == 0x00009C, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_Select_Default) == 0x0000B0, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, CallFunc_BreakColor_R) == 0x0000C0, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, CallFunc_BreakColor_G) == 0x0000C4, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, CallFunc_BreakColor_B) == 0x0000C8, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, CallFunc_BreakColor_A) == 0x0000CC, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, CallFunc_MakeColor_ReturnValue) == 0x0000D0, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_MakeStruct_LinearColor) == 0x0000E0, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_Select_Default_1) == 0x0000F0, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_Select_Default_2) == 0x000100, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_Event_TeamEntryWidget) == 0x000110, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_Event_TeamEntryWidget' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_Event_Usernames) == 0x000118, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_Event_Usernames' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_DynamicCast_AsTeam_Entry) == 0x000130, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_DynamicCast_AsTeam_Entry' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_DynamicCast_bSuccess_2) == 0x000138, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry, K2Node_Select_Default_3) == 0x00013C, "Member 'EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry::K2Node_Select_Default_3' has a wrong offset!");

struct EventLeaderboardEntry_C_InitializeTeamTextEntry final
{
public:
	class UUserWidget*                            TeamEntryWidget;
	class FText                                   Usernames;
};
static_assert(alignof(EventLeaderboardEntry_C_InitializeTeamTextEntry) == 0x000008, "Wrong alignment on EventLeaderboardEntry_C_InitializeTeamTextEntry");
static_assert(sizeof(EventLeaderboardEntry_C_InitializeTeamTextEntry) == 0x000020, "Wrong size on EventLeaderboardEntry_C_InitializeTeamTextEntry");
static_assert(offsetof(EventLeaderboardEntry_C_InitializeTeamTextEntry, TeamEntryWidget) == 0x000000, "Member 'EventLeaderboardEntry_C_InitializeTeamTextEntry::TeamEntryWidget' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_InitializeTeamTextEntry, Usernames) == 0x000008, "Member 'EventLeaderboardEntry_C_InitializeTeamTextEntry::Usernames' has a wrong offset!");

struct EventLeaderboardEntry_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;
};
static_assert(alignof(EventLeaderboardEntry_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on EventLeaderboardEntry_C_OnListItemObjectSet");
static_assert(sizeof(EventLeaderboardEntry_C_OnListItemObjectSet) == 0x000008, "Wrong size on EventLeaderboardEntry_C_OnListItemObjectSet");
static_assert(offsetof(EventLeaderboardEntry_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'EventLeaderboardEntry_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

struct EventLeaderboardEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(EventLeaderboardEntry_C_PreConstruct) == 0x000001, "Wrong alignment on EventLeaderboardEntry_C_PreConstruct");
static_assert(sizeof(EventLeaderboardEntry_C_PreConstruct) == 0x000001, "Wrong size on EventLeaderboardEntry_C_PreConstruct");
static_assert(offsetof(EventLeaderboardEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'EventLeaderboardEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct EventLeaderboardEntry_C_SetEntryDetails final
{
public:
	class UFortEventLeaderboardEntryData*         EntryData;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          CallFunc_ShouldShowQualifiedIcon_ReturnValue;
	bool                                          CallFunc_DoesLeaderboardHaveQualifiedIcons_ReturnValue;
	uint8                                         Pad_B[0x1];
	int32                                         CallFunc_GetScore_ReturnValue;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	class FString                                 CallFunc_GetLiveSessionId_ReturnValue;
	int32                                         CallFunc_GetPageIndex_ReturnValue;
	uint8                                         Pad_3C[0x4];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	int32                                         CallFunc_Percent_IntInt_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_5E[0x2];
	int32                                         CallFunc_GetRank_ReturnValue;
	bool                                          CallFunc_GetIsMatchPointWinner_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_66[0x2];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_81[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	double                                        Temp_real_Variable;
	class FText                                   CallFunc_Format_ReturnValue;
	double                                        Temp_real_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_111[0x7];
	double                                        K2Node_Select_Default;
	int32                                         Temp_int_Variable;
	struct FMargin                                K2Node_MakeStruct_Margin;
	int32                                         Temp_int_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_139[0x3];
	int32                                         K2Node_Select_Default_1;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              K2Node_Select_Default_2;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_3;
	ESlateVisibility                              K2Node_Select_Default_3;
	uint8                                         Pad_146[0x2];
	float                                         K2Node_MakeStruct_Top_ImplicitCast;
};
static_assert(alignof(EventLeaderboardEntry_C_SetEntryDetails) == 0x000008, "Wrong alignment on EventLeaderboardEntry_C_SetEntryDetails");
static_assert(sizeof(EventLeaderboardEntry_C_SetEntryDetails) == 0x000150, "Wrong size on EventLeaderboardEntry_C_SetEntryDetails");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, EntryData) == 0x000000, "Member 'EventLeaderboardEntry_C_SetEntryDetails::EntryData' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, Temp_byte_Variable) == 0x000008, "Member 'EventLeaderboardEntry_C_SetEntryDetails::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_ShouldShowQualifiedIcon_ReturnValue) == 0x000009, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_ShouldShowQualifiedIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_DoesLeaderboardHaveQualifiedIcons_ReturnValue) == 0x00000A, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_DoesLeaderboardHaveQualifiedIcons_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_GetScore_ReturnValue) == 0x00000C, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_GetScore_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_GetLiveSessionId_ReturnValue) == 0x000028, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_GetLiveSessionId_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_GetPageIndex_ReturnValue) == 0x000038, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_GetPageIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_Percent_IntInt_ReturnValue) == 0x000058, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_TextIsEmpty_ReturnValue) == 0x00005C, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00005D, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_GetRank_ReturnValue) == 0x000060, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_GetRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_GetIsMatchPointWinner_ReturnValue) == 0x000064, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_GetIsMatchPointWinner_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000065, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000068, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, Temp_bool_Variable) == 0x000080, "Member 'EventLeaderboardEntry_C_SetEntryDetails::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, K2Node_MakeStruct_FormatArgumentData) == 0x000088, "Member 'EventLeaderboardEntry_C_SetEntryDetails::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, K2Node_MakeArray_Array) == 0x0000D8, "Member 'EventLeaderboardEntry_C_SetEntryDetails::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, Temp_real_Variable) == 0x0000E8, "Member 'EventLeaderboardEntry_C_SetEntryDetails::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, CallFunc_Format_ReturnValue) == 0x0000F0, "Member 'EventLeaderboardEntry_C_SetEntryDetails::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, Temp_real_Variable_1) == 0x000108, "Member 'EventLeaderboardEntry_C_SetEntryDetails::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, Temp_bool_Variable_1) == 0x000110, "Member 'EventLeaderboardEntry_C_SetEntryDetails::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, K2Node_Select_Default) == 0x000118, "Member 'EventLeaderboardEntry_C_SetEntryDetails::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, Temp_int_Variable) == 0x000120, "Member 'EventLeaderboardEntry_C_SetEntryDetails::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, K2Node_MakeStruct_Margin) == 0x000124, "Member 'EventLeaderboardEntry_C_SetEntryDetails::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, Temp_int_Variable_1) == 0x000134, "Member 'EventLeaderboardEntry_C_SetEntryDetails::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, Temp_byte_Variable_1) == 0x000138, "Member 'EventLeaderboardEntry_C_SetEntryDetails::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, K2Node_Select_Default_1) == 0x00013C, "Member 'EventLeaderboardEntry_C_SetEntryDetails::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, Temp_bool_Variable_2) == 0x000140, "Member 'EventLeaderboardEntry_C_SetEntryDetails::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, K2Node_Select_Default_2) == 0x000141, "Member 'EventLeaderboardEntry_C_SetEntryDetails::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, Temp_byte_Variable_2) == 0x000142, "Member 'EventLeaderboardEntry_C_SetEntryDetails::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, Temp_byte_Variable_3) == 0x000143, "Member 'EventLeaderboardEntry_C_SetEntryDetails::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, Temp_bool_Variable_3) == 0x000144, "Member 'EventLeaderboardEntry_C_SetEntryDetails::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, K2Node_Select_Default_3) == 0x000145, "Member 'EventLeaderboardEntry_C_SetEntryDetails::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEntry_C_SetEntryDetails, K2Node_MakeStruct_Top_ImplicitCast) == 0x000148, "Member 'EventLeaderboardEntry_C_SetEntryDetails::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");

}
