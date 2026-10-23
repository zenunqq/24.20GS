#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper final
{
public:
	int32                                         EntryPoint;
	ELeaderboardDisplayType                       Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_6[0x2];
	float                                         CallFunc_RGBToHSV_H;
	float                                         CallFunc_RGBToHSV_S;
	float                                         CallFunc_RGBToHSV_V;
	float                                         CallFunc_RGBToHSV_A;
	double                                        CallFunc_FClamp_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_2;
	uint8                                         Pad_21[0x3];
	struct FLinearColor                           CallFunc_HSVToRGB_ReturnValue;
	uint8                                         Pad_34[0x4];
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_DisplayInfo;
	class FString                                 K2Node_CustomEvent_EventId;
	class FString                                 K2Node_CustomEvent_EventWindowId;
	ELeaderboardDisplayType                       K2Node_Event_NewDisplayType;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_22A[0x6];
	double                                        CallFunc_FClamp_Value_ImplicitCast;
	float                                         CallFunc_HSVToRGB_V_ImplicitCast;
};
static_assert(alignof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper) == 0x000008, "Wrong alignment on LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper");
static_assert(sizeof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper) == 0x000240, "Wrong size on LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, EntryPoint) == 0x000000, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::EntryPoint' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, Temp_byte_Variable) == 0x000004, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, Temp_byte_Variable_1) == 0x000005, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, CallFunc_RGBToHSV_H) == 0x000008, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::CallFunc_RGBToHSV_H' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, CallFunc_RGBToHSV_S) == 0x00000C, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::CallFunc_RGBToHSV_S' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, CallFunc_RGBToHSV_V) == 0x000010, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::CallFunc_RGBToHSV_V' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, CallFunc_RGBToHSV_A) == 0x000014, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::CallFunc_RGBToHSV_A' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, CallFunc_FClamp_ReturnValue) == 0x000018, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, Temp_byte_Variable_2) == 0x000020, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, CallFunc_HSVToRGB_ReturnValue) == 0x000024, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::CallFunc_HSVToRGB_ReturnValue' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, K2Node_CustomEvent_DisplayInfo) == 0x000038, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::K2Node_CustomEvent_DisplayInfo' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, K2Node_CustomEvent_EventId) == 0x000208, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::K2Node_CustomEvent_EventId' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, K2Node_CustomEvent_EventWindowId) == 0x000218, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::K2Node_CustomEvent_EventWindowId' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, K2Node_Event_NewDisplayType) == 0x000228, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::K2Node_Event_NewDisplayType' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, K2Node_Select_Default) == 0x000229, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, CallFunc_FClamp_Value_ImplicitCast) == 0x000230, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::CallFunc_FClamp_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper, CallFunc_HSVToRGB_V_ImplicitCast) == 0x000238, "Member 'LeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper::CallFunc_HSVToRGB_V_ImplicitCast' has a wrong offset!");

struct LeaderboardListViewWrapper_C_OnLeaderboardDisplayTypeChanged final
{
public:
	ELeaderboardDisplayType                       NewDisplayType;
};
static_assert(alignof(LeaderboardListViewWrapper_C_OnLeaderboardDisplayTypeChanged) == 0x000001, "Wrong alignment on LeaderboardListViewWrapper_C_OnLeaderboardDisplayTypeChanged");
static_assert(sizeof(LeaderboardListViewWrapper_C_OnLeaderboardDisplayTypeChanged) == 0x000001, "Wrong size on LeaderboardListViewWrapper_C_OnLeaderboardDisplayTypeChanged");
static_assert(offsetof(LeaderboardListViewWrapper_C_OnLeaderboardDisplayTypeChanged, NewDisplayType) == 0x000000, "Member 'LeaderboardListViewWrapper_C_OnLeaderboardDisplayTypeChanged::NewDisplayType' has a wrong offset!");

struct LeaderboardListViewWrapper_C_Set_Display_Info final
{
public:
	struct FFortTournamentDisplayInfo             DisplayInfo_0;
};
static_assert(alignof(LeaderboardListViewWrapper_C_Set_Display_Info) == 0x000008, "Wrong alignment on LeaderboardListViewWrapper_C_Set_Display_Info");
static_assert(sizeof(LeaderboardListViewWrapper_C_Set_Display_Info) == 0x0001D0, "Wrong size on LeaderboardListViewWrapper_C_Set_Display_Info");
static_assert(offsetof(LeaderboardListViewWrapper_C_Set_Display_Info, DisplayInfo_0) == 0x000000, "Member 'LeaderboardListViewWrapper_C_Set_Display_Info::DisplayInfo_0' has a wrong offset!");

struct LeaderboardListViewWrapper_C_Set_Event final
{
public:
	class FString                                 EventId;
	class FString                                 EventWindowId;
};
static_assert(alignof(LeaderboardListViewWrapper_C_Set_Event) == 0x000008, "Wrong alignment on LeaderboardListViewWrapper_C_Set_Event");
static_assert(sizeof(LeaderboardListViewWrapper_C_Set_Event) == 0x000020, "Wrong size on LeaderboardListViewWrapper_C_Set_Event");
static_assert(offsetof(LeaderboardListViewWrapper_C_Set_Event, EventId) == 0x000000, "Member 'LeaderboardListViewWrapper_C_Set_Event::EventId' has a wrong offset!");
static_assert(offsetof(LeaderboardListViewWrapper_C_Set_Event, EventWindowId) == 0x000010, "Member 'LeaderboardListViewWrapper_C_Set_Event::EventWindowId' has a wrong offset!");

}
