#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   K2Node_Event_EventName;
	class FText                                   K2Node_Event_Date;
	class FText                                   K2Node_Event_AdditionalEvents;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;
};
static_assert(alignof(FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget) == 0x000008, "Wrong alignment on FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget");
static_assert(sizeof(FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget) == 0x000058, "Wrong size on FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget");
static_assert(offsetof(FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget, EntryPoint) == 0x000000, "Member 'FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget, K2Node_Event_EventName) == 0x000008, "Member 'FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget::K2Node_Event_EventName' has a wrong offset!");
static_assert(offsetof(FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget, K2Node_Event_Date) == 0x000020, "Member 'FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget::K2Node_Event_Date' has a wrong offset!");
static_assert(offsetof(FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget, K2Node_Event_AdditionalEvents) == 0x000038, "Member 'FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget::K2Node_Event_AdditionalEvents' has a wrong offset!");
static_assert(offsetof(FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget, CallFunc_TextIsEmpty_ReturnValue) == 0x000050, "Member 'FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget, CallFunc_TextIsEmpty_ReturnValue_1) == 0x000051, "Member 'FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");

struct FortSocialEventRSVPWidget_C_OnRefreshDisplay final
{
public:
	class FText                                   EventName;
	class FText                                   Date;
	class FText                                   AdditionalEvents;
};
static_assert(alignof(FortSocialEventRSVPWidget_C_OnRefreshDisplay) == 0x000008, "Wrong alignment on FortSocialEventRSVPWidget_C_OnRefreshDisplay");
static_assert(sizeof(FortSocialEventRSVPWidget_C_OnRefreshDisplay) == 0x000048, "Wrong size on FortSocialEventRSVPWidget_C_OnRefreshDisplay");
static_assert(offsetof(FortSocialEventRSVPWidget_C_OnRefreshDisplay, EventName) == 0x000000, "Member 'FortSocialEventRSVPWidget_C_OnRefreshDisplay::EventName' has a wrong offset!");
static_assert(offsetof(FortSocialEventRSVPWidget_C_OnRefreshDisplay, Date) == 0x000018, "Member 'FortSocialEventRSVPWidget_C_OnRefreshDisplay::Date' has a wrong offset!");
static_assert(offsetof(FortSocialEventRSVPWidget_C_OnRefreshDisplay, AdditionalEvents) == 0x000030, "Member 'FortSocialEventRSVPWidget_C_OnRefreshDisplay::AdditionalEvents' has a wrong offset!");

}
