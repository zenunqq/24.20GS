#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct SubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5 final
{
public:
	class FString                                 EventName;
	struct FTimespan                              TimeUntilEnd;
	struct FTimespan                              TimeSinceBegin;
	float                                         TimespanRatio;
};
static_assert(alignof(SubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5) == 0x000008, "Wrong alignment on SubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5");
static_assert(sizeof(SubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5) == 0x000028, "Wrong size on SubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5");
static_assert(offsetof(SubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5, EventName) == 0x000000, "Member 'SubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5::EventName' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5, TimeUntilEnd) == 0x000010, "Member 'SubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5::TimeUntilEnd' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5, TimeSinceBegin) == 0x000018, "Member 'SubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5::TimeSinceBegin' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5, TimespanRatio) == 0x000020, "Member 'SubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5::TimespanRatio' has a wrong offset!");

struct SubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5 final
{
public:
	class FString                                 EventName;
	struct FTimespan                              TimeUntilEnd;
	struct FTimespan                              TimeSinceBegin;
	float                                         TimespanRatio;
};
static_assert(alignof(SubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5) == 0x000008, "Wrong alignment on SubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5");
static_assert(sizeof(SubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5) == 0x000028, "Wrong size on SubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5");
static_assert(offsetof(SubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5, EventName) == 0x000000, "Member 'SubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5::EventName' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5, TimeUntilEnd) == 0x000010, "Member 'SubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5::TimeUntilEnd' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5, TimeSinceBegin) == 0x000018, "Member 'SubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5::TimeSinceBegin' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5, TimespanRatio) == 0x000020, "Member 'SubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5::TimespanRatio' has a wrong offset!");

struct SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FString                                 K2Node_CustomEvent_EventName_2;
	struct FTimespan                              K2Node_CustomEvent_TimeUntilEnd_2;
	struct FTimespan                              K2Node_CustomEvent_TimeSinceBegin_2;
	float                                         K2Node_CustomEvent_TimeSpanRatio_2;
	TDelegate<void(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)> K2Node_CreateDelegate_OutputDelegate;
	class FString                                 K2Node_CustomEvent_EventName_1;
	struct FTimespan                              K2Node_CustomEvent_TimeUntilEnd_1;
	struct FTimespan                              K2Node_CustomEvent_TimeSinceBegin_1;
	float                                         K2Node_CustomEvent_TimeSpanRatio_1;
	TDelegate<void(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)> K2Node_CreateDelegate_OutputDelegate_1;
	class FString                                 K2Node_CustomEvent_EventName;
	struct FTimespan                              K2Node_CustomEvent_TimeUntilEnd;
	struct FTimespan                              K2Node_CustomEvent_TimeSinceBegin;
	float                                         K2Node_CustomEvent_TimeSpanRatio;
	TDelegate<void(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)> K2Node_CreateDelegate_OutputDelegate_2;
	float                                         Temp_real_Variable;
	uint8                                         Pad_9C[0x4];
	struct FTimespan                              Temp_struct_Variable;
	struct FTimespan                              Temp_struct_Variable_1;
	class FString                                 Temp_string_Variable;
	class UFortAsyncAction_CalendarEventWatcher*  CallFunc_WatchCalendarEvent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen) == 0x000008, "Wrong alignment on SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen");
static_assert(sizeof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen) == 0x0000D0, "Wrong size on SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, EntryPoint) == 0x000000, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CustomEvent_EventName_2) == 0x000008, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CustomEvent_EventName_2' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CustomEvent_TimeUntilEnd_2) == 0x000018, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CustomEvent_TimeUntilEnd_2' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CustomEvent_TimeSinceBegin_2) == 0x000020, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CustomEvent_TimeSinceBegin_2' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CustomEvent_TimeSpanRatio_2) == 0x000028, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CustomEvent_TimeSpanRatio_2' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CustomEvent_EventName_1) == 0x000038, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CustomEvent_EventName_1' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CustomEvent_TimeUntilEnd_1) == 0x000048, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CustomEvent_TimeUntilEnd_1' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CustomEvent_TimeSinceBegin_1) == 0x000050, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CustomEvent_TimeSinceBegin_1' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CustomEvent_TimeSpanRatio_1) == 0x000058, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CustomEvent_TimeSpanRatio_1' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CreateDelegate_OutputDelegate_1) == 0x00005C, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CustomEvent_EventName) == 0x000068, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CustomEvent_EventName' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CustomEvent_TimeUntilEnd) == 0x000078, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CustomEvent_TimeUntilEnd' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CustomEvent_TimeSinceBegin) == 0x000080, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CustomEvent_TimeSinceBegin' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CustomEvent_TimeSpanRatio) == 0x000088, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CustomEvent_TimeSpanRatio' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, K2Node_CreateDelegate_OutputDelegate_2) == 0x00008C, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, Temp_real_Variable) == 0x000098, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, Temp_struct_Variable) == 0x0000A0, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, Temp_struct_Variable_1) == 0x0000A8, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, Temp_string_Variable) == 0x0000B0, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, CallFunc_WatchCalendarEvent_ReturnValue) == 0x0000C0, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::CallFunc_WatchCalendarEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'SubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct SubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5 final
{
public:
	class FString                                 EventName;
	struct FTimespan                              TimeUntilEnd;
	struct FTimespan                              TimeSinceBegin;
	float                                         TimespanRatio;
};
static_assert(alignof(SubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5) == 0x000008, "Wrong alignment on SubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5");
static_assert(sizeof(SubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5) == 0x000028, "Wrong size on SubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5");
static_assert(offsetof(SubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5, EventName) == 0x000000, "Member 'SubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5::EventName' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5, TimeUntilEnd) == 0x000010, "Member 'SubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5::TimeUntilEnd' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5, TimeSinceBegin) == 0x000018, "Member 'SubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5::TimeSinceBegin' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5, TimespanRatio) == 0x000020, "Member 'SubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5::TimespanRatio' has a wrong offset!");

struct SubgameSelectScreen_C_IsMinorShutdownWarningEnabled final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x7];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	EFortUIFeatureState                           CallFunc_GetFeatureState_OutFeatureState;
	EFortUIFeatureStateReason                     CallFunc_GetFeatureState_OutReason;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(SubgameSelectScreen_C_IsMinorShutdownWarningEnabled) == 0x000008, "Wrong alignment on SubgameSelectScreen_C_IsMinorShutdownWarningEnabled");
static_assert(sizeof(SubgameSelectScreen_C_IsMinorShutdownWarningEnabled) == 0x000018, "Wrong size on SubgameSelectScreen_C_IsMinorShutdownWarningEnabled");
static_assert(offsetof(SubgameSelectScreen_C_IsMinorShutdownWarningEnabled, Enabled) == 0x000000, "Member 'SubgameSelectScreen_C_IsMinorShutdownWarningEnabled::Enabled' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_IsMinorShutdownWarningEnabled, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'SubgameSelectScreen_C_IsMinorShutdownWarningEnabled::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_IsMinorShutdownWarningEnabled, CallFunc_GetFeatureState_OutFeatureState) == 0x000010, "Member 'SubgameSelectScreen_C_IsMinorShutdownWarningEnabled::CallFunc_GetFeatureState_OutFeatureState' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_IsMinorShutdownWarningEnabled, CallFunc_GetFeatureState_OutReason) == 0x000011, "Member 'SubgameSelectScreen_C_IsMinorShutdownWarningEnabled::CallFunc_GetFeatureState_OutReason' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_IsMinorShutdownWarningEnabled, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000012, "Member 'SubgameSelectScreen_C_IsMinorShutdownWarningEnabled::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct SubgameSelectScreen_C_AdvanceTextureCycle final
{
public:
	int32                                         NextTextureIndex;
	int32                                         CurrentTextureIndex;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_C[0x4];
	class UTexture*                               CallFunc_Array_Get_Item;
	class UTexture*                               CallFunc_Array_Get_Item_1;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_21[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(SubgameSelectScreen_C_AdvanceTextureCycle) == 0x000008, "Wrong alignment on SubgameSelectScreen_C_AdvanceTextureCycle");
static_assert(sizeof(SubgameSelectScreen_C_AdvanceTextureCycle) == 0x000028, "Wrong size on SubgameSelectScreen_C_AdvanceTextureCycle");
static_assert(offsetof(SubgameSelectScreen_C_AdvanceTextureCycle, NextTextureIndex) == 0x000000, "Member 'SubgameSelectScreen_C_AdvanceTextureCycle::NextTextureIndex' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_AdvanceTextureCycle, CurrentTextureIndex) == 0x000004, "Member 'SubgameSelectScreen_C_AdvanceTextureCycle::CurrentTextureIndex' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_AdvanceTextureCycle, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'SubgameSelectScreen_C_AdvanceTextureCycle::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_AdvanceTextureCycle, CallFunc_Array_Get_Item) == 0x000010, "Member 'SubgameSelectScreen_C_AdvanceTextureCycle::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_AdvanceTextureCycle, CallFunc_Array_Get_Item_1) == 0x000018, "Member 'SubgameSelectScreen_C_AdvanceTextureCycle::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_AdvanceTextureCycle, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000020, "Member 'SubgameSelectScreen_C_AdvanceTextureCycle::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_AdvanceTextureCycle, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'SubgameSelectScreen_C_AdvanceTextureCycle::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct SubgameSelectScreen_C_IsBusyMatchmaking final
{
public:
	bool                                          ReturnValue;
	uint8                                         Pad_1[0x7];
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsMatchmakingLocal_ReturnValue;
};
static_assert(alignof(SubgameSelectScreen_C_IsBusyMatchmaking) == 0x000008, "Wrong alignment on SubgameSelectScreen_C_IsBusyMatchmaking");
static_assert(sizeof(SubgameSelectScreen_C_IsBusyMatchmaking) == 0x000018, "Wrong size on SubgameSelectScreen_C_IsBusyMatchmaking");
static_assert(offsetof(SubgameSelectScreen_C_IsBusyMatchmaking, ReturnValue) == 0x000000, "Member 'SubgameSelectScreen_C_IsBusyMatchmaking::ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_IsBusyMatchmaking, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'SubgameSelectScreen_C_IsBusyMatchmaking::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_IsBusyMatchmaking, CallFunc_IsMatchmakingLocal_ReturnValue) == 0x000010, "Member 'SubgameSelectScreen_C_IsBusyMatchmaking::CallFunc_IsMatchmakingLocal_ReturnValue' has a wrong offset!");

struct SubgameSelectScreen_C_InitializeTextureCycle final
{
public:
	class UTexture*                               CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_LastIndex_ReturnValue;
	uint8                                         Pad_C[0x4];
	class UTexture*                               CallFunc_Array_Get_Item_1;
};
static_assert(alignof(SubgameSelectScreen_C_InitializeTextureCycle) == 0x000008, "Wrong alignment on SubgameSelectScreen_C_InitializeTextureCycle");
static_assert(sizeof(SubgameSelectScreen_C_InitializeTextureCycle) == 0x000018, "Wrong size on SubgameSelectScreen_C_InitializeTextureCycle");
static_assert(offsetof(SubgameSelectScreen_C_InitializeTextureCycle, CallFunc_Array_Get_Item) == 0x000000, "Member 'SubgameSelectScreen_C_InitializeTextureCycle::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_InitializeTextureCycle, CallFunc_Array_LastIndex_ReturnValue) == 0x000008, "Member 'SubgameSelectScreen_C_InitializeTextureCycle::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameSelectScreen_C_InitializeTextureCycle, CallFunc_Array_Get_Item_1) == 0x000010, "Member 'SubgameSelectScreen_C_InitializeTextureCycle::CallFunc_Array_Get_Item_1' has a wrong offset!");

}
