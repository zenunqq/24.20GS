#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AccountPinLinkingWindow_C_BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature final
{
public:
	class UWidget*                                ActiveWidget;
	int32                                         ActiveWidgetIndex;
};
static_assert(alignof(AccountPinLinkingWindow_C_BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature) == 0x000008, "Wrong alignment on AccountPinLinkingWindow_C_BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature");
static_assert(sizeof(AccountPinLinkingWindow_C_BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature) == 0x000010, "Wrong size on AccountPinLinkingWindow_C_BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature");
static_assert(offsetof(AccountPinLinkingWindow_C_BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature, ActiveWidget) == 0x000000, "Member 'AccountPinLinkingWindow_C_BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature::ActiveWidget' has a wrong offset!");
static_assert(offsetof(AccountPinLinkingWindow_C_BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature, ActiveWidgetIndex) == 0x000008, "Member 'AccountPinLinkingWindow_C_BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature::ActiveWidgetIndex' has a wrong offset!");

struct AccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UWidget*                                K2Node_ComponentBoundEvent_ActiveWidget;
	int32                                         K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	bool                                          K2Node_SwitchInteger_CmpSuccess;
};
static_assert(alignof(AccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow) == 0x000008, "Wrong alignment on AccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow");
static_assert(sizeof(AccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow) == 0x000018, "Wrong size on AccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow");
static_assert(offsetof(AccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow, EntryPoint) == 0x000000, "Member 'AccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(AccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow, K2Node_ComponentBoundEvent_ActiveWidget) == 0x000008, "Member 'AccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow::K2Node_ComponentBoundEvent_ActiveWidget' has a wrong offset!");
static_assert(offsetof(AccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow, K2Node_ComponentBoundEvent_ActiveWidgetIndex) == 0x000010, "Member 'AccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow::K2Node_ComponentBoundEvent_ActiveWidgetIndex' has a wrong offset!");
static_assert(offsetof(AccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow, K2Node_SwitchInteger_CmpSuccess) == 0x000014, "Member 'AccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

}
