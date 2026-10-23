#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	struct FDateTime                              CallFunc_IsPendingAccountTransfer_EstimatedCompletionMax;
	bool                                          CallFunc_IsPendingAccountTransfer_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_2;
	ECommonInputType                              Temp_byte_Variable;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	uint8                                         Pad_4A[0x6];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	class FText                                   Temp_text_Variable_2;
	class FText                                   Temp_text_Variable_3;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	bool                                          Temp_bool_Variable_1;
	ETextJustify                                  Temp_byte_Variable_3;
	ETextJustify                                  Temp_byte_Variable_4;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_B7[0x1];
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	struct FDateTime                              CallFunc_Now_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_5;
	uint8                                         Pad_E1[0x7];
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;
	class FText                                   CallFunc_GetTimespanAsText_ReturnValue;
	bool                                          K2Node_CustomEvent_IsHovered;
	uint8                                         Pad_109[0x3];
	struct FLinearColor                           K2Node_Select_Default;
	uint8                                         Pad_11C[0x4];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_6;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;
	uint8                                         Pad_12A[0x2];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	class FText                                   K2Node_Select_Default_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_151[0x3];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1;
	ESlateVisibility                              K2Node_Select_Default_2;
	ETextJustify                                  K2Node_Select_Default_3;
	bool                                          Temp_bool_Variable_3;
	ESlateVisibility                              K2Node_Select_Default_4;
};
static_assert(alignof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy) == 0x000008, "Wrong alignment on PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy");
static_assert(sizeof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy) == 0x000168, "Wrong size on PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, EntryPoint) == 0x000000, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::EntryPoint' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, CallFunc_IsPendingAccountTransfer_EstimatedCompletionMax) == 0x000018, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::CallFunc_IsPendingAccountTransfer_EstimatedCompletionMax' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, CallFunc_IsPendingAccountTransfer_ReturnValue) == 0x000020, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::CallFunc_IsPendingAccountTransfer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000030, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000038, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, CallFunc_GetLocalPlayerSubsystem_ReturnValue_2) == 0x000040, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::CallFunc_GetLocalPlayerSubsystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_byte_Variable) == 0x000048, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, CallFunc_GetCurrentInputType_ReturnValue) == 0x000049, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_text_Variable) == 0x000050, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_text_Variable_1) == 0x000068, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_text_Variable_2) == 0x000080, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_text_Variable_3) == 0x000098, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_bool_Variable) == 0x0000B0, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_byte_Variable_1) == 0x0000B1, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_byte_Variable_2) == 0x0000B2, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_bool_Variable_1) == 0x0000B3, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_byte_Variable_3) == 0x0000B4, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_byte_Variable_4) == 0x0000B5, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_bool_Variable_2) == 0x0000B6, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_struct_Variable) == 0x0000B8, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_struct_Variable_1) == 0x0000C8, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, CallFunc_Now_ReturnValue) == 0x0000D8, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::CallFunc_Now_ReturnValue' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_byte_Variable_5) == 0x0000E0, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x0000E8, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, CallFunc_GetTimespanAsText_ReturnValue) == 0x0000F0, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::CallFunc_GetTimespanAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, K2Node_CustomEvent_IsHovered) == 0x000108, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::K2Node_CustomEvent_IsHovered' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, K2Node_Select_Default) == 0x00010C, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000120, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_byte_Variable_6) == 0x000128, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, K2Node_CustomEvent_bNewInputType) == 0x000129, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, K2Node_CreateDelegate_OutputDelegate) == 0x00012C, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, K2Node_Select_Default_1) == 0x000138, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000150, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, K2Node_CreateDelegate_OutputDelegate_1) == 0x000154, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, K2Node_Select_Default_2) == 0x000160, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, K2Node_Select_Default_3) == 0x000161, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, Temp_bool_Variable_3) == 0x000162, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy, K2Node_Select_Default_4) == 0x000163, "Member 'PendingAccountMergeNotification_Legacy_C_ExecuteUbergraph_PendingAccountMergeNotification_Legacy::K2Node_Select_Default_4' has a wrong offset!");

struct PendingAccountMergeNotification_Legacy_C_Hovered final
{
public:
	bool                                          IsHovered_0;
};
static_assert(alignof(PendingAccountMergeNotification_Legacy_C_Hovered) == 0x000001, "Wrong alignment on PendingAccountMergeNotification_Legacy_C_Hovered");
static_assert(sizeof(PendingAccountMergeNotification_Legacy_C_Hovered) == 0x000001, "Wrong size on PendingAccountMergeNotification_Legacy_C_Hovered");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_Hovered, IsHovered_0) == 0x000000, "Member 'PendingAccountMergeNotification_Legacy_C_Hovered::IsHovered_0' has a wrong offset!");

struct PendingAccountMergeNotification_Legacy_C_OnInputChanged final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(PendingAccountMergeNotification_Legacy_C_OnInputChanged) == 0x000001, "Wrong alignment on PendingAccountMergeNotification_Legacy_C_OnInputChanged");
static_assert(sizeof(PendingAccountMergeNotification_Legacy_C_OnInputChanged) == 0x000001, "Wrong size on PendingAccountMergeNotification_Legacy_C_OnInputChanged");
static_assert(offsetof(PendingAccountMergeNotification_Legacy_C_OnInputChanged, bNewInputType) == 0x000000, "Member 'PendingAccountMergeNotification_Legacy_C_OnInputChanged::bNewInputType' has a wrong offset!");

}
