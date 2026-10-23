#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UCommonUISubsystemLegacy*               CallFunc_GetGameInstanceSubsystem_ReturnValue;
	struct FSlateBrush                            CallFunc_NoResourceBrush_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_D5[0x3];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	class FName                                   CallFunc_GetCurrentGamepadName_ReturnValue;
	uint8                                         Pad_E4[0xC];
	struct FSlateBrush                            CallFunc_GetInputActionButtonIcon_ReturnValue;
	bool                                          CallFunc_EqualEqual_SlateBrush_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton) == 0x000010, "Wrong alignment on BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton");
static_assert(sizeof(BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton) == 0x0001C0, "Wrong size on BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton");
static_assert(offsetof(BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton, EntryPoint) == 0x000000, "Member 'BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton, CallFunc_NoResourceBrush_ReturnValue) == 0x000010, "Member 'BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton::CallFunc_NoResourceBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton, CallFunc_Array_Length_ReturnValue) == 0x0000D0, "Member 'BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton, CallFunc_Greater_IntInt_ReturnValue) == 0x0000D4, "Member 'BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x0000D8, "Member 'BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton, CallFunc_GetCurrentGamepadName_ReturnValue) == 0x0000E0, "Member 'BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton::CallFunc_GetCurrentGamepadName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton, CallFunc_GetInputActionButtonIcon_ReturnValue) == 0x0000F0, "Member 'BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton::CallFunc_GetInputActionButtonIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton, CallFunc_EqualEqual_SlateBrush_ReturnValue) == 0x0001B0, "Member 'BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton::CallFunc_EqualEqual_SlateBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton, CallFunc_BooleanAND_ReturnValue) == 0x0001B1, "Member 'BacchusBoundActionButton_C_ExecuteUbergraph_BacchusBoundActionButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct BacchusBoundActionButton_C_UpdateInputActionIconSize final
{
public:
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_1B[0x5];
	double                                        K2Node_Select_Default;
	float                                         CallFunc_SetUserSpecifiedScale_InUserSpecifiedScale_ImplicitCast;
};
static_assert(alignof(BacchusBoundActionButton_C_UpdateInputActionIconSize) == 0x000008, "Wrong alignment on BacchusBoundActionButton_C_UpdateInputActionIconSize");
static_assert(sizeof(BacchusBoundActionButton_C_UpdateInputActionIconSize) == 0x000030, "Wrong size on BacchusBoundActionButton_C_UpdateInputActionIconSize");
static_assert(offsetof(BacchusBoundActionButton_C_UpdateInputActionIconSize, Temp_real_Variable) == 0x000000, "Member 'BacchusBoundActionButton_C_UpdateInputActionIconSize::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_UpdateInputActionIconSize, Temp_real_Variable_1) == 0x000008, "Member 'BacchusBoundActionButton_C_UpdateInputActionIconSize::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_UpdateInputActionIconSize, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'BacchusBoundActionButton_C_UpdateInputActionIconSize::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_UpdateInputActionIconSize, CallFunc_GetCurrentInputType_ReturnValue) == 0x000018, "Member 'BacchusBoundActionButton_C_UpdateInputActionIconSize::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_UpdateInputActionIconSize, Temp_bool_Variable) == 0x000019, "Member 'BacchusBoundActionButton_C_UpdateInputActionIconSize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_UpdateInputActionIconSize, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'BacchusBoundActionButton_C_UpdateInputActionIconSize::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_UpdateInputActionIconSize, K2Node_Select_Default) == 0x000020, "Member 'BacchusBoundActionButton_C_UpdateInputActionIconSize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BacchusBoundActionButton_C_UpdateInputActionIconSize, CallFunc_SetUserSpecifiedScale_InUserSpecifiedScale_ImplicitCast) == 0x000028, "Member 'BacchusBoundActionButton_C_UpdateInputActionIconSize::CallFunc_SetUserSpecifiedScale_InUserSpecifiedScale_ImplicitCast' has a wrong offset!");

}
