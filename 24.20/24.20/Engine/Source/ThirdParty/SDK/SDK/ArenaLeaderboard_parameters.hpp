#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_7[0x1];
	const class UFortEventLeaderboardEntryData*   K2Node_Event_EntryData;
	TDelegate<void(class UObject* Item)>          K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_1C[0x4];
	class UCommonButtonLegacy*                    K2Node_CustomEvent_Button;
	class UFortEventLeaderboardEntryData*         CallFunc_GetMyLeaderboardEntry_ReturnValue;
	class FString                                 K2Node_Event_EventId;
	class FString                                 K2Node_Event_EventWindowId;
	struct FFortTournamentDisplayInfo             K2Node_Event_ColorInfo;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	TDelegate<void(class UCommonButtonLegacy* Button)> K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_23C[0x4];
	class ULeaderboardTab_C*                      K2Node_DynamicCast_AsLeaderboard_Tab;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_249[0x7];
	class ULeaderboardListViewWrapper_C*          K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_259[0x7];
	class UListView*                              CallFunc_GetListView_ReturnValue;
	class UObject*                                K2Node_CustomEvent_Item;
	class UFortEventLeaderboardEntryData*         K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_279[0x7];
	class UArenaViewMeTab_C*                      K2Node_DynamicCast_AsArena_View_Me_Tab;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          K2Node_Event_bNoLeaderboardTabs;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard) == 0x000008, "Wrong alignment on ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard");
static_assert(sizeof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard) == 0x000290, "Wrong size on ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, EntryPoint) == 0x000000, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::EntryPoint' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, Temp_bool_Variable) == 0x000004, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, Temp_byte_Variable) == 0x000005, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, Temp_byte_Variable_1) == 0x000006, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_Event_EntryData) == 0x000008, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_Event_EntryData' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_CustomEvent_Button) == 0x000020, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, CallFunc_GetMyLeaderboardEntry_ReturnValue) == 0x000028, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::CallFunc_GetMyLeaderboardEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_Event_EventId) == 0x000030, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_Event_EventId' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_Event_EventWindowId) == 0x000040, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_Event_EventWindowId' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_Event_ColorInfo) == 0x000050, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_Event_ColorInfo' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000220, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000228, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_CreateDelegate_OutputDelegate_1) == 0x000230, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_AsLeaderboard_Tab) == 0x000240, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_AsLeaderboard_Tab' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_bSuccess) == 0x000248, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper) == 0x000250, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_bSuccess_1) == 0x000258, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, CallFunc_GetListView_ReturnValue) == 0x000260, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::CallFunc_GetListView_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_CustomEvent_Item) == 0x000268, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data) == 0x000270, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_bSuccess_2) == 0x000278, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_AsArena_View_Me_Tab) == 0x000280, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_AsArena_View_Me_Tab' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_bSuccess_3) == 0x000288, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_Event_bNoLeaderboardTabs) == 0x000289, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_Event_bNoLeaderboardTabs' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_Select_Default) == 0x00028A, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_Select_Default' has a wrong offset!");

struct ArenaLeaderboard_C_Initialize_Children_For_Event final
{
public:
	class FString                                 Event_Id;
	class FString                                 Event_Window_Id;
	class FString                                 Tournament_Id;
	class ULeaderboardTab_C*                      K2Node_DynamicCast_AsLeaderboard_Tab;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(ArenaLeaderboard_C_Initialize_Children_For_Event) == 0x000008, "Wrong alignment on ArenaLeaderboard_C_Initialize_Children_For_Event");
static_assert(sizeof(ArenaLeaderboard_C_Initialize_Children_For_Event) == 0x000040, "Wrong size on ArenaLeaderboard_C_Initialize_Children_For_Event");
static_assert(offsetof(ArenaLeaderboard_C_Initialize_Children_For_Event, Event_Id) == 0x000000, "Member 'ArenaLeaderboard_C_Initialize_Children_For_Event::Event_Id' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_Initialize_Children_For_Event, Event_Window_Id) == 0x000010, "Member 'ArenaLeaderboard_C_Initialize_Children_For_Event::Event_Window_Id' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_Initialize_Children_For_Event, Tournament_Id) == 0x000020, "Member 'ArenaLeaderboard_C_Initialize_Children_For_Event::Tournament_Id' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_Initialize_Children_For_Event, K2Node_DynamicCast_AsLeaderboard_Tab) == 0x000030, "Member 'ArenaLeaderboard_C_Initialize_Children_For_Event::K2Node_DynamicCast_AsLeaderboard_Tab' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_Initialize_Children_For_Event, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'ArenaLeaderboard_C_Initialize_Children_For_Event::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct ArenaLeaderboard_C_Item_Double_Clicked final
{
public:
	class UObject*                                Item;
};
static_assert(alignof(ArenaLeaderboard_C_Item_Double_Clicked) == 0x000008, "Wrong alignment on ArenaLeaderboard_C_Item_Double_Clicked");
static_assert(sizeof(ArenaLeaderboard_C_Item_Double_Clicked) == 0x000008, "Wrong size on ArenaLeaderboard_C_Item_Double_Clicked");
static_assert(offsetof(ArenaLeaderboard_C_Item_Double_Clicked, Item) == 0x000000, "Member 'ArenaLeaderboard_C_Item_Double_Clicked::Item' has a wrong offset!");

struct ArenaLeaderboard_C_OnColorize final
{
public:
	struct FFortTournamentDisplayInfo             ColorInfo;
};
static_assert(alignof(ArenaLeaderboard_C_OnColorize) == 0x000008, "Wrong alignment on ArenaLeaderboard_C_OnColorize");
static_assert(sizeof(ArenaLeaderboard_C_OnColorize) == 0x0001D0, "Wrong size on ArenaLeaderboard_C_OnColorize");
static_assert(offsetof(ArenaLeaderboard_C_OnColorize, ColorInfo) == 0x000000, "Member 'ArenaLeaderboard_C_OnColorize::ColorInfo' has a wrong offset!");

struct ArenaLeaderboard_C_OnLeaderboardEntrySelected final
{
public:
	const class UFortEventLeaderboardEntryData*   EntryData;
};
static_assert(alignof(ArenaLeaderboard_C_OnLeaderboardEntrySelected) == 0x000008, "Wrong alignment on ArenaLeaderboard_C_OnLeaderboardEntrySelected");
static_assert(sizeof(ArenaLeaderboard_C_OnLeaderboardEntrySelected) == 0x000008, "Wrong size on ArenaLeaderboard_C_OnLeaderboardEntrySelected");
static_assert(offsetof(ArenaLeaderboard_C_OnLeaderboardEntrySelected, EntryData) == 0x000000, "Member 'ArenaLeaderboard_C_OnLeaderboardEntrySelected::EntryData' has a wrong offset!");

struct ArenaLeaderboard_C_OnLeaderboardTabsLoaded final
{
public:
	bool                                          bNoLeaderboardTabs;
};
static_assert(alignof(ArenaLeaderboard_C_OnLeaderboardTabsLoaded) == 0x000001, "Wrong alignment on ArenaLeaderboard_C_OnLeaderboardTabsLoaded");
static_assert(sizeof(ArenaLeaderboard_C_OnLeaderboardTabsLoaded) == 0x000001, "Wrong size on ArenaLeaderboard_C_OnLeaderboardTabsLoaded");
static_assert(offsetof(ArenaLeaderboard_C_OnLeaderboardTabsLoaded, bNoLeaderboardTabs) == 0x000000, "Member 'ArenaLeaderboard_C_OnLeaderboardTabsLoaded::bNoLeaderboardTabs' has a wrong offset!");

struct ArenaLeaderboard_C_SetupForEvent final
{
public:
	class FString                                 EventId;
	class FString                                 EventWindowId;
};
static_assert(alignof(ArenaLeaderboard_C_SetupForEvent) == 0x000008, "Wrong alignment on ArenaLeaderboard_C_SetupForEvent");
static_assert(sizeof(ArenaLeaderboard_C_SetupForEvent) == 0x000020, "Wrong size on ArenaLeaderboard_C_SetupForEvent");
static_assert(offsetof(ArenaLeaderboard_C_SetupForEvent, EventId) == 0x000000, "Member 'ArenaLeaderboard_C_SetupForEvent::EventId' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_SetupForEvent, EventWindowId) == 0x000010, "Member 'ArenaLeaderboard_C_SetupForEvent::EventWindowId' has a wrong offset!");

struct ArenaLeaderboard_C_ShowMyStats final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(ArenaLeaderboard_C_ShowMyStats) == 0x000008, "Wrong alignment on ArenaLeaderboard_C_ShowMyStats");
static_assert(sizeof(ArenaLeaderboard_C_ShowMyStats) == 0x000008, "Wrong size on ArenaLeaderboard_C_ShowMyStats");
static_assert(offsetof(ArenaLeaderboard_C_ShowMyStats, Button) == 0x000000, "Member 'ArenaLeaderboard_C_ShowMyStats::Button' has a wrong offset!");

}
