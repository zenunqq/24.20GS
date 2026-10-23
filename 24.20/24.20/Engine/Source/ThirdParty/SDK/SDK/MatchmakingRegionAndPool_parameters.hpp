#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool final
{
public:
	int32                                         EntryPoint;
	int32                                         Temp_int_Variable;
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue_1;
	class FText                                   CallFunc_GetLegacyNonInputBasedPlayAgainstText_ReturnValue;
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_2;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	class FText                                   CallFunc_GetMCPRegionText_ReturnValue;
	bool                                          CallFunc_ShouldShowInputKeys_ReturnValue;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_65[0x3];
	struct FGeometry                              K2Node_Event_MyGeometry;
	float                                         K2Node_Event_InDeltaTime;
	int32                                         Temp_int_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_B1[0x7];
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue_3;
	bool                                          CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue_1;
	uint8                                         Pad_C1[0x3];
	int32                                         K2Node_Select_Default_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
};
static_assert(alignof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool) == 0x000008, "Wrong alignment on MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool");
static_assert(sizeof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool) == 0x0000D0, "Wrong size on MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, EntryPoint) == 0x000000, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::EntryPoint' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, Temp_int_Variable) == 0x000004, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue) == 0x000010, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_GetContext_ReturnValue_1) == 0x000018, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_GetLegacyNonInputBasedPlayAgainstText_ReturnValue) == 0x000020, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_GetLegacyNonInputBasedPlayAgainstText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_GetContext_ReturnValue_2) == 0x000038, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000040, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_GetMCPRegionText_ReturnValue) == 0x000048, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_GetMCPRegionText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_ShouldShowInputKeys_ReturnValue) == 0x000060, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_ShouldShowInputKeys_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, Temp_bool_Variable) == 0x000061, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, Temp_byte_Variable) == 0x000062, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, Temp_byte_Variable_1) == 0x000063, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, K2Node_Select_Default) == 0x000064, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, K2Node_Event_MyGeometry) == 0x000068, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, K2Node_Event_InDeltaTime) == 0x0000A8, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, Temp_int_Variable_1) == 0x0000AC, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, Temp_bool_Variable_1) == 0x0000B0, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_GetContext_ReturnValue_3) == 0x0000B8, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue_1) == 0x0000C0, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, K2Node_Select_Default_1) == 0x0000C4, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool, CallFunc_IsMobileGame_ReturnValue) == 0x0000C8, "Member 'MatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");

struct MatchmakingRegionAndPool_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;
	float                                         InDeltaTime;
};
static_assert(alignof(MatchmakingRegionAndPool_C_Tick) == 0x000008, "Wrong alignment on MatchmakingRegionAndPool_C_Tick");
static_assert(sizeof(MatchmakingRegionAndPool_C_Tick) == 0x000048, "Wrong size on MatchmakingRegionAndPool_C_Tick");
static_assert(offsetof(MatchmakingRegionAndPool_C_Tick, MyGeometry) == 0x000000, "Member 'MatchmakingRegionAndPool_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(MatchmakingRegionAndPool_C_Tick, InDeltaTime) == 0x000040, "Member 'MatchmakingRegionAndPool_C_Tick::InDeltaTime' has a wrong offset!");

}
