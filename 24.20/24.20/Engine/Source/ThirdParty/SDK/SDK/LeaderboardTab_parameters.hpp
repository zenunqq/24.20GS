#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct LeaderboardTab_C_Colorize final
{
public:
	struct FFortTournamentDisplayInfo             Color_Info;
};
static_assert(alignof(LeaderboardTab_C_Colorize) == 0x000008, "Wrong alignment on LeaderboardTab_C_Colorize");
static_assert(sizeof(LeaderboardTab_C_Colorize) == 0x0001D0, "Wrong size on LeaderboardTab_C_Colorize");
static_assert(offsetof(LeaderboardTab_C_Colorize, Color_Info) == 0x000000, "Member 'LeaderboardTab_C_Colorize::Color_Info' has a wrong offset!");

struct LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_Color_Info;
	class FString                                 K2Node_CustomEvent_EventId;
	class FString                                 K2Node_CustomEvent_EventWindowId;
	bool                                          CallFunc_IsEmpty_ReturnValue;
	uint8                                         Pad_1F9[0x3];
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	class ULeaderboardListViewWrapper_C*          K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper;
	bool                                          K2Node_DynamicCast_bSuccess;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_21A[0x6];
	class ULeaderboardListViewWrapper_C*          K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
};
static_assert(alignof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab) == 0x000008, "Wrong alignment on LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab");
static_assert(sizeof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab) == 0x000230, "Wrong size on LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, EntryPoint) == 0x000000, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, Temp_byte_Variable) == 0x000004, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, K2Node_CustomEvent_Color_Info) == 0x000008, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::K2Node_CustomEvent_Color_Info' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, K2Node_CustomEvent_EventId) == 0x0001D8, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::K2Node_CustomEvent_EventId' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, K2Node_CustomEvent_EventWindowId) == 0x0001E8, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::K2Node_CustomEvent_EventWindowId' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, CallFunc_IsEmpty_ReturnValue) == 0x0001F8, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, K2Node_MakeStruct_LinearColor) == 0x0001FC, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, CallFunc_Not_PreBool_ReturnValue) == 0x00020C, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, CallFunc_BooleanAND_ReturnValue) == 0x00020D, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, Temp_byte_Variable_1) == 0x00020E, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, Temp_bool_Variable) == 0x00020F, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper) == 0x000210, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, K2Node_DynamicCast_bSuccess) == 0x000218, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, K2Node_Select_Default) == 0x000219, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper_1) == 0x000220, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper_1' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab, K2Node_DynamicCast_bSuccess_1) == 0x000228, "Member 'LeaderboardTab_C_ExecuteUbergraph_LeaderboardTab::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

struct LeaderboardTab_C_Set_Event final
{
public:
	class FString                                 EventId;
	class FString                                 EventWindowId;
};
static_assert(alignof(LeaderboardTab_C_Set_Event) == 0x000008, "Wrong alignment on LeaderboardTab_C_Set_Event");
static_assert(sizeof(LeaderboardTab_C_Set_Event) == 0x000020, "Wrong size on LeaderboardTab_C_Set_Event");
static_assert(offsetof(LeaderboardTab_C_Set_Event, EventId) == 0x000000, "Member 'LeaderboardTab_C_Set_Event::EventId' has a wrong offset!");
static_assert(offsetof(LeaderboardTab_C_Set_Event, EventWindowId) == 0x000010, "Member 'LeaderboardTab_C_Set_Event::EventWindowId' has a wrong offset!");

}
