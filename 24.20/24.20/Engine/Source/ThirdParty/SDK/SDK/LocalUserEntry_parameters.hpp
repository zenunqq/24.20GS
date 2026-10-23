#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	ELocalUserOnlineStatus                        K2Node_Event_OnlineStatus;
};
static_assert(alignof(LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry) == 0x000008, "Wrong alignment on LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry");
static_assert(sizeof(LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry) == 0x000020, "Wrong size on LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry");
static_assert(offsetof(LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry, EntryPoint) == 0x000000, "Member 'LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry, K2Node_Event_OnlineStatus) == 0x000018, "Member 'LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry::K2Node_Event_OnlineStatus' has a wrong offset!");

struct LocalUserEntry_C_HandleOnlineIndicatorView final
{
public:
	ELocalUserOnlineStatus                        InLocalUserOnlineStatus;
	ELocalUserOnlineStatus                        Temp_byte_Variable;
	uint8                                         Pad_2[0x2];
	struct FLinearColor                           K2Node_Select_Default;
};
static_assert(alignof(LocalUserEntry_C_HandleOnlineIndicatorView) == 0x000004, "Wrong alignment on LocalUserEntry_C_HandleOnlineIndicatorView");
static_assert(sizeof(LocalUserEntry_C_HandleOnlineIndicatorView) == 0x000014, "Wrong size on LocalUserEntry_C_HandleOnlineIndicatorView");
static_assert(offsetof(LocalUserEntry_C_HandleOnlineIndicatorView, InLocalUserOnlineStatus) == 0x000000, "Member 'LocalUserEntry_C_HandleOnlineIndicatorView::InLocalUserOnlineStatus' has a wrong offset!");
static_assert(offsetof(LocalUserEntry_C_HandleOnlineIndicatorView, Temp_byte_Variable) == 0x000001, "Member 'LocalUserEntry_C_HandleOnlineIndicatorView::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LocalUserEntry_C_HandleOnlineIndicatorView, K2Node_Select_Default) == 0x000004, "Member 'LocalUserEntry_C_HandleOnlineIndicatorView::K2Node_Select_Default' has a wrong offset!");

struct LocalUserEntry_C_OnOnlineStatusChanged final
{
public:
	ELocalUserOnlineStatus                        OnlineStatus;
};
static_assert(alignof(LocalUserEntry_C_OnOnlineStatusChanged) == 0x000001, "Wrong alignment on LocalUserEntry_C_OnOnlineStatusChanged");
static_assert(sizeof(LocalUserEntry_C_OnOnlineStatusChanged) == 0x000001, "Wrong size on LocalUserEntry_C_OnOnlineStatusChanged");
static_assert(offsetof(LocalUserEntry_C_OnOnlineStatusChanged, OnlineStatus) == 0x000000, "Member 'LocalUserEntry_C_OnOnlineStatusChanged::OnlineStatus' has a wrong offset!");

}
