#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct WebLogin_C_ExecuteUbergraph_WebLogin final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UWidget*                                K2Node_Event_WebWidget;
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;
};
static_assert(alignof(WebLogin_C_ExecuteUbergraph_WebLogin) == 0x000008, "Wrong alignment on WebLogin_C_ExecuteUbergraph_WebLogin");
static_assert(sizeof(WebLogin_C_ExecuteUbergraph_WebLogin) == 0x000018, "Wrong size on WebLogin_C_ExecuteUbergraph_WebLogin");
static_assert(offsetof(WebLogin_C_ExecuteUbergraph_WebLogin, EntryPoint) == 0x000000, "Member 'WebLogin_C_ExecuteUbergraph_WebLogin::EntryPoint' has a wrong offset!");
static_assert(offsetof(WebLogin_C_ExecuteUbergraph_WebLogin, K2Node_Event_WebWidget) == 0x000008, "Member 'WebLogin_C_ExecuteUbergraph_WebLogin::K2Node_Event_WebWidget' has a wrong offset!");
static_assert(offsetof(WebLogin_C_ExecuteUbergraph_WebLogin, CallFunc_AddChild_ReturnValue) == 0x000010, "Member 'WebLogin_C_ExecuteUbergraph_WebLogin::CallFunc_AddChild_ReturnValue' has a wrong offset!");

struct WebLogin_C_DisplayWidget final
{
public:
	class UWidget*                                WebWidget;
};
static_assert(alignof(WebLogin_C_DisplayWidget) == 0x000008, "Wrong alignment on WebLogin_C_DisplayWidget");
static_assert(sizeof(WebLogin_C_DisplayWidget) == 0x000008, "Wrong size on WebLogin_C_DisplayWidget");
static_assert(offsetof(WebLogin_C_DisplayWidget, WebWidget) == 0x000000, "Member 'WebLogin_C_DisplayWidget::WebWidget' has a wrong offset!");

}
