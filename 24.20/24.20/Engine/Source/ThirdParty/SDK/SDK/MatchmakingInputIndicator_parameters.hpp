#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct MatchmakingInputIndicator_C_OnInputSourceTypeChanged final
{
public:
	ECommonInputType                              InputType;
};
static_assert(alignof(MatchmakingInputIndicator_C_OnInputSourceTypeChanged) == 0x000001, "Wrong alignment on MatchmakingInputIndicator_C_OnInputSourceTypeChanged");
static_assert(sizeof(MatchmakingInputIndicator_C_OnInputSourceTypeChanged) == 0x000001, "Wrong size on MatchmakingInputIndicator_C_OnInputSourceTypeChanged");
static_assert(offsetof(MatchmakingInputIndicator_C_OnInputSourceTypeChanged, InputType) == 0x000000, "Member 'MatchmakingInputIndicator_C_OnInputSourceTypeChanged::InputType' has a wrong offset!");

struct MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	ECommonInputType                              K2Node_Event_InputType;
	uint8                                         Pad_11[0x7];
	class UTexture2D*                             CallFunc_GetInputTypeIcon_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator) == 0x000008, "Wrong alignment on MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator");
static_assert(sizeof(MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator) == 0x000028, "Wrong size on MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator");
static_assert(offsetof(MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator, EntryPoint) == 0x000000, "Member 'MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator, K2Node_Event_InputType) == 0x000010, "Member 'MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator::K2Node_Event_InputType' has a wrong offset!");
static_assert(offsetof(MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator, CallFunc_GetInputTypeIcon_ReturnValue) == 0x000018, "Member 'MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator::CallFunc_GetInputTypeIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
