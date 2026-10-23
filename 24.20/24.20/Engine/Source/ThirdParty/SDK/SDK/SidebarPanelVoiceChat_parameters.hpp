#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUserWidget*                            K2Node_CustomEvent_UserWidget;
	TDelegate<void(class UUserWidget* UserWidget)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_1C[0x4];
	class UUserWidget*                            Temp_object_Variable;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class UFortAsyncAction_CreateWidgetAsync*     CallFunc_CreateWidgetAsync_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat) == 0x000008, "Wrong alignment on SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat");
static_assert(sizeof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat) == 0x000040, "Wrong size on SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat");
static_assert(offsetof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat, EntryPoint) == 0x000000, "Member 'SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat, K2Node_CustomEvent_UserWidget) == 0x000008, "Member 'SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat::K2Node_CustomEvent_UserWidget' has a wrong offset!");
static_assert(offsetof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat, Temp_object_Variable) == 0x000020, "Member 'SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat, CallFunc_CreateWidgetAsync_ReturnValue) == 0x000030, "Member 'SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat::CallFunc_CreateWidgetAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4 final
{
public:
	class UUserWidget*                            UserWidget;
};
static_assert(alignof(SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4) == 0x000008, "Wrong alignment on SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4");
static_assert(sizeof(SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4) == 0x000008, "Wrong size on SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4");
static_assert(offsetof(SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4, UserWidget) == 0x000000, "Member 'SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4::UserWidget' has a wrong offset!");

}
