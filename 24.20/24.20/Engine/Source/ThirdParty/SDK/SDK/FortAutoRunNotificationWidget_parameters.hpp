#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FortAutoRunNotificationWidget_C_ExecuteUbergraph_FortAutoRunNotificationWidget final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bAutoRunEnabled;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(FortAutoRunNotificationWidget_C_ExecuteUbergraph_FortAutoRunNotificationWidget) == 0x000008, "Wrong alignment on FortAutoRunNotificationWidget_C_ExecuteUbergraph_FortAutoRunNotificationWidget");
static_assert(sizeof(FortAutoRunNotificationWidget_C_ExecuteUbergraph_FortAutoRunNotificationWidget) == 0x000018, "Wrong size on FortAutoRunNotificationWidget_C_ExecuteUbergraph_FortAutoRunNotificationWidget");
static_assert(offsetof(FortAutoRunNotificationWidget_C_ExecuteUbergraph_FortAutoRunNotificationWidget, EntryPoint) == 0x000000, "Member 'FortAutoRunNotificationWidget_C_ExecuteUbergraph_FortAutoRunNotificationWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(FortAutoRunNotificationWidget_C_ExecuteUbergraph_FortAutoRunNotificationWidget, K2Node_Event_bAutoRunEnabled) == 0x000004, "Member 'FortAutoRunNotificationWidget_C_ExecuteUbergraph_FortAutoRunNotificationWidget::K2Node_Event_bAutoRunEnabled' has a wrong offset!");
static_assert(offsetof(FortAutoRunNotificationWidget_C_ExecuteUbergraph_FortAutoRunNotificationWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'FortAutoRunNotificationWidget_C_ExecuteUbergraph_FortAutoRunNotificationWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortAutoRunNotificationWidget_C_ExecuteUbergraph_FortAutoRunNotificationWidget, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'FortAutoRunNotificationWidget_C_ExecuteUbergraph_FortAutoRunNotificationWidget::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct FortAutoRunNotificationWidget_C_OnAutoRunEnabled final
{
public:
	bool                                          bAutoRunEnabled;
};
static_assert(alignof(FortAutoRunNotificationWidget_C_OnAutoRunEnabled) == 0x000001, "Wrong alignment on FortAutoRunNotificationWidget_C_OnAutoRunEnabled");
static_assert(sizeof(FortAutoRunNotificationWidget_C_OnAutoRunEnabled) == 0x000001, "Wrong size on FortAutoRunNotificationWidget_C_OnAutoRunEnabled");
static_assert(offsetof(FortAutoRunNotificationWidget_C_OnAutoRunEnabled, bAutoRunEnabled) == 0x000000, "Member 'FortAutoRunNotificationWidget_C_OnAutoRunEnabled::bAutoRunEnabled' has a wrong offset!");

}
