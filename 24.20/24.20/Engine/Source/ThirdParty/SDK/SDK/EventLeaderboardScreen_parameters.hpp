#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct EventLeaderboardScreen_C_EventColorize final
{
public:
	struct FFortTournamentDisplayInfo             TournamentDisplayInfo;
};
static_assert(alignof(EventLeaderboardScreen_C_EventColorize) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_EventColorize");
static_assert(sizeof(EventLeaderboardScreen_C_EventColorize) == 0x0001D0, "Wrong size on EventLeaderboardScreen_C_EventColorize");
static_assert(offsetof(EventLeaderboardScreen_C_EventColorize, TournamentDisplayInfo) == 0x000000, "Member 'EventLeaderboardScreen_C_EventColorize::TournamentDisplayInfo' has a wrong offset!");

struct EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_9[0x7];
	const class UFortEventLeaderboardEntryData*   K2Node_Event_EntryData;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_19[0x7];
	class UCommonButtonLegacy*                    K2Node_CustomEvent_Button;
	class UFortEventLeaderboardEntryData*         CallFunc_GetMyLeaderboardEntry_ReturnValue;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_2;
	class UListView*                              CallFunc_GetListView_ReturnValue;
	class ULeaderboardListViewWrapper_C*          K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_49[0x7];
	class UObject*                                K2Node_CustomEvent_Item;
	class UFortEventLeaderboardEntryData*         K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_61[0x7];
	class ULeaderboardTab_C*                      K2Node_DynamicCast_AsLeaderboard_Tab;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          K2Node_Event_bIsVisible;
	uint8                                         Pad_72[0x6];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_81[0x7];
	class UEventsSimpleButton_C*                  K2Node_DynamicCast_AsEvents_Simple_Button;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_91[0x3];
	TDelegate<void(class UObject* Item)>          K2Node_CreateDelegate_OutputDelegate;
	class UCommonButtonLegacy*                    K2Node_Event_TabButton;
	class FText                                   K2Node_Event_TabText;
	class UEventsSimpleTab_C*                     K2Node_DynamicCast_AsEvents_Simple_Tab;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_C9[0x3];
	TDelegate<void(class UCommonButtonLegacy* Button)> K2Node_CreateDelegate_OutputDelegate_1;
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_TournamentDisplayInfo;
	bool                                          K2Node_Event_bShowDetailsPanel;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_2AA[0x6];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	ELeaderboardDisplayType                       K2Node_Event_NewDisplayType;
};
static_assert(alignof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen");
static_assert(sizeof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen) == 0x0002C0, "Wrong size on EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, EntryPoint) == 0x000000, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, Temp_byte_Variable) == 0x000004, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, Temp_byte_Variable_1) == 0x000005, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, Temp_bool_Variable) == 0x000006, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, Temp_byte_Variable_2) == 0x000007, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, Temp_byte_Variable_3) == 0x000008, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_Event_EntryData) == 0x000010, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_Event_EntryData' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, Temp_bool_Variable_1) == 0x000018, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_CustomEvent_Button) == 0x000020, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, CallFunc_GetMyLeaderboardEntry_ReturnValue) == 0x000028, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::CallFunc_GetMyLeaderboardEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_ComponentBoundEvent_Button_2) == 0x000030, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, CallFunc_GetListView_ReturnValue) == 0x000038, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::CallFunc_GetListView_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper) == 0x000040, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_CustomEvent_Item) == 0x000050, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data) == 0x000058, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_AsLeaderboard_Tab) == 0x000068, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_AsLeaderboard_Tab' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_bSuccess_2) == 0x000070, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_Event_bIsVisible) == 0x000071, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_Event_bIsVisible' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_ComponentBoundEvent_Button_1) == 0x000078, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_Select_Default) == 0x000080, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_AsEvents_Simple_Button) == 0x000088, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_AsEvents_Simple_Button' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_bSuccess_3) == 0x000090, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000094, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_Event_TabButton) == 0x0000A0, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_Event_TabButton' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_Event_TabText) == 0x0000A8, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_Event_TabText' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_AsEvents_Simple_Tab) == 0x0000C0, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_AsEvents_Simple_Tab' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_bSuccess_4) == 0x0000C8, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000CC, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_CustomEvent_TournamentDisplayInfo) == 0x0000D8, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_CustomEvent_TournamentDisplayInfo' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_Event_bShowDetailsPanel) == 0x0002A8, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_Event_bShowDetailsPanel' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_Select_Default_1) == 0x0002A9, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_ComponentBoundEvent_Button) == 0x0002B0, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_Event_NewDisplayType) == 0x0002B8, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_Event_NewDisplayType' has a wrong offset!");

struct EventLeaderboardScreen_C_Init final
{
public:
	class FString                                 EventWindowId;
	class FString                                 TournamentSeriesId;
	class FString                                 CallFunc_GetSeriesPointLeaderboardIds_OutEventId;
	class FString                                 CallFunc_GetSeriesPointLeaderboardIds_OutEventWindowId;
	bool                                          CallFunc_IsEmpty_ReturnValue;
	bool                                          CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_45[0x3];
	class ULeaderboardTab_C*                      K2Node_DynamicCast_AsLeaderboard_Tab;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(EventLeaderboardScreen_C_Init) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_Init");
static_assert(sizeof(EventLeaderboardScreen_C_Init) == 0x000058, "Wrong size on EventLeaderboardScreen_C_Init");
static_assert(offsetof(EventLeaderboardScreen_C_Init, EventWindowId) == 0x000000, "Member 'EventLeaderboardScreen_C_Init::EventWindowId' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_Init, TournamentSeriesId) == 0x000010, "Member 'EventLeaderboardScreen_C_Init::TournamentSeriesId' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_Init, CallFunc_GetSeriesPointLeaderboardIds_OutEventId) == 0x000020, "Member 'EventLeaderboardScreen_C_Init::CallFunc_GetSeriesPointLeaderboardIds_OutEventId' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_Init, CallFunc_GetSeriesPointLeaderboardIds_OutEventWindowId) == 0x000030, "Member 'EventLeaderboardScreen_C_Init::CallFunc_GetSeriesPointLeaderboardIds_OutEventWindowId' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_Init, CallFunc_IsEmpty_ReturnValue) == 0x000040, "Member 'EventLeaderboardScreen_C_Init::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_Init, CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue) == 0x000041, "Member 'EventLeaderboardScreen_C_Init::CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_Init, CallFunc_BooleanAND_ReturnValue) == 0x000042, "Member 'EventLeaderboardScreen_C_Init::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_Init, CallFunc_GetVisibility_ReturnValue) == 0x000043, "Member 'EventLeaderboardScreen_C_Init::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_Init, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000044, "Member 'EventLeaderboardScreen_C_Init::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_Init, K2Node_DynamicCast_AsLeaderboard_Tab) == 0x000048, "Member 'EventLeaderboardScreen_C_Init::K2Node_DynamicCast_AsLeaderboard_Tab' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_Init, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'EventLeaderboardScreen_C_Init::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct EventLeaderboardScreen_C_InitializeTabButton final
{
public:
	class UCommonButtonLegacy*                    TabButton;
	class FText                                   TabText;
};
static_assert(alignof(EventLeaderboardScreen_C_InitializeTabButton) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_InitializeTabButton");
static_assert(sizeof(EventLeaderboardScreen_C_InitializeTabButton) == 0x000020, "Wrong size on EventLeaderboardScreen_C_InitializeTabButton");
static_assert(offsetof(EventLeaderboardScreen_C_InitializeTabButton, TabButton) == 0x000000, "Member 'EventLeaderboardScreen_C_InitializeTabButton::TabButton' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_InitializeTabButton, TabText) == 0x000008, "Member 'EventLeaderboardScreen_C_InitializeTabButton::TabText' has a wrong offset!");

struct EventLeaderboardScreen_C_Item_Double_Clicked final
{
public:
	class UObject*                                Item;
};
static_assert(alignof(EventLeaderboardScreen_C_Item_Double_Clicked) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_Item_Double_Clicked");
static_assert(sizeof(EventLeaderboardScreen_C_Item_Double_Clicked) == 0x000008, "Wrong size on EventLeaderboardScreen_C_Item_Double_Clicked");
static_assert(offsetof(EventLeaderboardScreen_C_Item_Double_Clicked, Item) == 0x000000, "Member 'EventLeaderboardScreen_C_Item_Double_Clicked::Item' has a wrong offset!");

struct EventLeaderboardScreen_C_OnDetailsPanelUpdate final
{
public:
	bool                                          bShowDetailsPanel;
};
static_assert(alignof(EventLeaderboardScreen_C_OnDetailsPanelUpdate) == 0x000001, "Wrong alignment on EventLeaderboardScreen_C_OnDetailsPanelUpdate");
static_assert(sizeof(EventLeaderboardScreen_C_OnDetailsPanelUpdate) == 0x000001, "Wrong size on EventLeaderboardScreen_C_OnDetailsPanelUpdate");
static_assert(offsetof(EventLeaderboardScreen_C_OnDetailsPanelUpdate, bShowDetailsPanel) == 0x000000, "Member 'EventLeaderboardScreen_C_OnDetailsPanelUpdate::bShowDetailsPanel' has a wrong offset!");

struct EventLeaderboardScreen_C_OnLeaderboardDisplayTypeChanged final
{
public:
	ELeaderboardDisplayType                       NewDisplayType;
};
static_assert(alignof(EventLeaderboardScreen_C_OnLeaderboardDisplayTypeChanged) == 0x000001, "Wrong alignment on EventLeaderboardScreen_C_OnLeaderboardDisplayTypeChanged");
static_assert(sizeof(EventLeaderboardScreen_C_OnLeaderboardDisplayTypeChanged) == 0x000001, "Wrong size on EventLeaderboardScreen_C_OnLeaderboardDisplayTypeChanged");
static_assert(offsetof(EventLeaderboardScreen_C_OnLeaderboardDisplayTypeChanged, NewDisplayType) == 0x000000, "Member 'EventLeaderboardScreen_C_OnLeaderboardDisplayTypeChanged::NewDisplayType' has a wrong offset!");

struct EventLeaderboardScreen_C_OnLeaderboardEntrySelected final
{
public:
	const class UFortEventLeaderboardEntryData*   EntryData;
};
static_assert(alignof(EventLeaderboardScreen_C_OnLeaderboardEntrySelected) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_OnLeaderboardEntrySelected");
static_assert(sizeof(EventLeaderboardScreen_C_OnLeaderboardEntrySelected) == 0x000008, "Wrong size on EventLeaderboardScreen_C_OnLeaderboardEntrySelected");
static_assert(offsetof(EventLeaderboardScreen_C_OnLeaderboardEntrySelected, EntryData) == 0x000000, "Member 'EventLeaderboardScreen_C_OnLeaderboardEntrySelected::EntryData' has a wrong offset!");

struct EventLeaderboardScreen_C_OnTabVisibilityChange final
{
public:
	bool                                          bIsVisible;
};
static_assert(alignof(EventLeaderboardScreen_C_OnTabVisibilityChange) == 0x000001, "Wrong alignment on EventLeaderboardScreen_C_OnTabVisibilityChange");
static_assert(sizeof(EventLeaderboardScreen_C_OnTabVisibilityChange) == 0x000001, "Wrong size on EventLeaderboardScreen_C_OnTabVisibilityChange");
static_assert(offsetof(EventLeaderboardScreen_C_OnTabVisibilityChange, bIsVisible) == 0x000000, "Member 'EventLeaderboardScreen_C_OnTabVisibilityChange::bIsVisible' has a wrong offset!");

struct EventLeaderboardScreen_C_ShowMyStats final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(EventLeaderboardScreen_C_ShowMyStats) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_ShowMyStats");
static_assert(sizeof(EventLeaderboardScreen_C_ShowMyStats) == 0x000008, "Wrong size on EventLeaderboardScreen_C_ShowMyStats");
static_assert(offsetof(EventLeaderboardScreen_C_ShowMyStats, Button) == 0x000000, "Member 'EventLeaderboardScreen_C_ShowMyStats::Button' has a wrong offset!");

}
