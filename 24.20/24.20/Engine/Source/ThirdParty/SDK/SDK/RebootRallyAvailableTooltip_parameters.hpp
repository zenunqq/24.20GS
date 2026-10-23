#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct RebootRallyAvailableTooltip_C_UpdateText final
{
public:
	ECommonInputType                              Temp_byte_Variable;
	uint8                                         Pad_1[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	uint8                                         Pad_29[0x7];
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_2;
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(RebootRallyAvailableTooltip_C_UpdateText) == 0x000008, "Wrong alignment on RebootRallyAvailableTooltip_C_UpdateText");
static_assert(sizeof(RebootRallyAvailableTooltip_C_UpdateText) == 0x000078, "Wrong size on RebootRallyAvailableTooltip_C_UpdateText");
static_assert(offsetof(RebootRallyAvailableTooltip_C_UpdateText, Temp_byte_Variable) == 0x000000, "Member 'RebootRallyAvailableTooltip_C_UpdateText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(RebootRallyAvailableTooltip_C_UpdateText, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'RebootRallyAvailableTooltip_C_UpdateText::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootRallyAvailableTooltip_C_UpdateText, CallFunc_MakeLiteralText_ReturnValue) == 0x000010, "Member 'RebootRallyAvailableTooltip_C_UpdateText::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootRallyAvailableTooltip_C_UpdateText, CallFunc_GetCurrentInputType_ReturnValue) == 0x000028, "Member 'RebootRallyAvailableTooltip_C_UpdateText::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootRallyAvailableTooltip_C_UpdateText, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000030, "Member 'RebootRallyAvailableTooltip_C_UpdateText::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RebootRallyAvailableTooltip_C_UpdateText, CallFunc_MakeLiteralText_ReturnValue_2) == 0x000048, "Member 'RebootRallyAvailableTooltip_C_UpdateText::CallFunc_MakeLiteralText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RebootRallyAvailableTooltip_C_UpdateText, K2Node_Select_Default) == 0x000060, "Member 'RebootRallyAvailableTooltip_C_UpdateText::K2Node_Select_Default' has a wrong offset!");

struct RebootRallyAvailableTooltip_C_HandleInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(RebootRallyAvailableTooltip_C_HandleInputMethodChanged) == 0x000001, "Wrong alignment on RebootRallyAvailableTooltip_C_HandleInputMethodChanged");
static_assert(sizeof(RebootRallyAvailableTooltip_C_HandleInputMethodChanged) == 0x000001, "Wrong size on RebootRallyAvailableTooltip_C_HandleInputMethodChanged");
static_assert(offsetof(RebootRallyAvailableTooltip_C_HandleInputMethodChanged, bNewInputType) == 0x000000, "Member 'RebootRallyAvailableTooltip_C_HandleInputMethodChanged::bNewInputType' has a wrong offset!");

struct RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;
	uint8                                         Pad_1D[0x3];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
};
static_assert(alignof(RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip) == 0x000008, "Wrong alignment on RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip");
static_assert(sizeof(RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip) == 0x000028, "Wrong size on RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip");
static_assert(offsetof(RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip, EntryPoint) == 0x000000, "Member 'RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip, K2Node_CustomEvent_bNewInputType) == 0x00001C, "Member 'RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000020, "Member 'RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");

}
