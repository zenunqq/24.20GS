#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_31[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1;
};
static_assert(alignof(WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader) == 0x000008, "Wrong alignment on WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader");
static_assert(sizeof(WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader) == 0x000050, "Wrong size on WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader, EntryPoint) == 0x000000, "Member 'WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000010, "Member 'WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000020, "Member 'WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000028, "Member 'WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'WBP_RebootRallySelectionHeader_C_ExecuteUbergraph_WBP_RebootRallySelectionHeader::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

struct WBP_RebootRallySelectionHeader_C_InputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;
	ECommonInputType                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(WBP_RebootRallySelectionHeader_C_InputMethodChanged) == 0x000001, "Wrong alignment on WBP_RebootRallySelectionHeader_C_InputMethodChanged");
static_assert(sizeof(WBP_RebootRallySelectionHeader_C_InputMethodChanged) == 0x000007, "Wrong size on WBP_RebootRallySelectionHeader_C_InputMethodChanged");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_InputMethodChanged, bNewInputType) == 0x000000, "Member 'WBP_RebootRallySelectionHeader_C_InputMethodChanged::bNewInputType' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_InputMethodChanged, Temp_byte_Variable) == 0x000001, "Member 'WBP_RebootRallySelectionHeader_C_InputMethodChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_InputMethodChanged, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_RebootRallySelectionHeader_C_InputMethodChanged::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_InputMethodChanged, Temp_byte_Variable_2) == 0x000003, "Member 'WBP_RebootRallySelectionHeader_C_InputMethodChanged::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_InputMethodChanged, Temp_byte_Variable_3) == 0x000004, "Member 'WBP_RebootRallySelectionHeader_C_InputMethodChanged::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_InputMethodChanged, Temp_byte_Variable_4) == 0x000005, "Member 'WBP_RebootRallySelectionHeader_C_InputMethodChanged::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallySelectionHeader_C_InputMethodChanged, K2Node_Select_Default) == 0x000006, "Member 'WBP_RebootRallySelectionHeader_C_InputMethodChanged::K2Node_Select_Default' has a wrong offset!");

}
