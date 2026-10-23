#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct BPS24_HoldableCloseButton_C_BP_OnHoldDecreased final
{
public:
	float                                         HoldPercentage;
};
static_assert(alignof(BPS24_HoldableCloseButton_C_BP_OnHoldDecreased) == 0x000004, "Wrong alignment on BPS24_HoldableCloseButton_C_BP_OnHoldDecreased");
static_assert(sizeof(BPS24_HoldableCloseButton_C_BP_OnHoldDecreased) == 0x000004, "Wrong size on BPS24_HoldableCloseButton_C_BP_OnHoldDecreased");
static_assert(offsetof(BPS24_HoldableCloseButton_C_BP_OnHoldDecreased, HoldPercentage) == 0x000000, "Member 'BPS24_HoldableCloseButton_C_BP_OnHoldDecreased::HoldPercentage' has a wrong offset!");

struct BPS24_HoldableCloseButton_C_BP_OnHoldEnded final
{
public:
	float                                         HoldPercentage;
	bool                                          bInUseSecondaryHoldAnimation;
};
static_assert(alignof(BPS24_HoldableCloseButton_C_BP_OnHoldEnded) == 0x000004, "Wrong alignment on BPS24_HoldableCloseButton_C_BP_OnHoldEnded");
static_assert(sizeof(BPS24_HoldableCloseButton_C_BP_OnHoldEnded) == 0x000008, "Wrong size on BPS24_HoldableCloseButton_C_BP_OnHoldEnded");
static_assert(offsetof(BPS24_HoldableCloseButton_C_BP_OnHoldEnded, HoldPercentage) == 0x000000, "Member 'BPS24_HoldableCloseButton_C_BP_OnHoldEnded::HoldPercentage' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_BP_OnHoldEnded, bInUseSecondaryHoldAnimation) == 0x000004, "Member 'BPS24_HoldableCloseButton_C_BP_OnHoldEnded::bInUseSecondaryHoldAnimation' has a wrong offset!");

struct BPS24_HoldableCloseButton_C_BP_OnHoldIncreased final
{
public:
	float                                         HoldPercentage;
};
static_assert(alignof(BPS24_HoldableCloseButton_C_BP_OnHoldIncreased) == 0x000004, "Wrong alignment on BPS24_HoldableCloseButton_C_BP_OnHoldIncreased");
static_assert(sizeof(BPS24_HoldableCloseButton_C_BP_OnHoldIncreased) == 0x000004, "Wrong size on BPS24_HoldableCloseButton_C_BP_OnHoldIncreased");
static_assert(offsetof(BPS24_HoldableCloseButton_C_BP_OnHoldIncreased, HoldPercentage) == 0x000000, "Member 'BPS24_HoldableCloseButton_C_BP_OnHoldIncreased::HoldPercentage' has a wrong offset!");

struct BPS24_HoldableCloseButton_C_BP_OnHoldStarted final
{
public:
	float                                         HoldPercentage;
	bool                                          bInUseSecondaryHoldAnimation;
};
static_assert(alignof(BPS24_HoldableCloseButton_C_BP_OnHoldStarted) == 0x000004, "Wrong alignment on BPS24_HoldableCloseButton_C_BP_OnHoldStarted");
static_assert(sizeof(BPS24_HoldableCloseButton_C_BP_OnHoldStarted) == 0x000008, "Wrong size on BPS24_HoldableCloseButton_C_BP_OnHoldStarted");
static_assert(offsetof(BPS24_HoldableCloseButton_C_BP_OnHoldStarted, HoldPercentage) == 0x000000, "Member 'BPS24_HoldableCloseButton_C_BP_OnHoldStarted::HoldPercentage' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_BP_OnHoldStarted, bInUseSecondaryHoldAnimation) == 0x000004, "Member 'BPS24_HoldableCloseButton_C_BP_OnHoldStarted::bInUseSecondaryHoldAnimation' has a wrong offset!");

struct BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_HoldPercentage_3;
	bool                                          K2Node_Event_bInUseSecondaryHoldAnimation_1;
	uint8                                         Pad_9[0x3];
	float                                         K2Node_Event_HoldPercentage_2;
	bool                                          K2Node_Event_bInUseSecondaryHoldAnimation;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_12[0x2];
	float                                         K2Node_Event_HoldPercentage_1;
	float                                         K2Node_Event_HoldPercentage;
	float                                         CallFunc_GetEndTime_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue_1;
	uint8                                         Pad_24[0x4];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_51[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_1;
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_8C[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;
	float                                         CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast;
	float                                         CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
	float                                         CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast;
	float                                         CallFunc_SetMinDesiredHeight_InMinDesiredHeight_ImplicitCast;
};
static_assert(alignof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton) == 0x000008, "Wrong alignment on BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton");
static_assert(sizeof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton) == 0x0000E0, "Wrong size on BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, EntryPoint) == 0x000000, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, K2Node_Event_HoldPercentage_3) == 0x000004, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::K2Node_Event_HoldPercentage_3' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, K2Node_Event_bInUseSecondaryHoldAnimation_1) == 0x000008, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::K2Node_Event_bInUseSecondaryHoldAnimation_1' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, K2Node_Event_HoldPercentage_2) == 0x00000C, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::K2Node_Event_HoldPercentage_2' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, K2Node_Event_bInUseSecondaryHoldAnimation) == 0x000010, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::K2Node_Event_bInUseSecondaryHoldAnimation' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000011, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, K2Node_Event_HoldPercentage_1) == 0x000014, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::K2Node_Event_HoldPercentage_1' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, K2Node_Event_HoldPercentage) == 0x000018, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::K2Node_Event_HoldPercentage' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_GetEndTime_ReturnValue) == 0x00001C, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_GetEndTime_ReturnValue_1) == 0x000020, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000028, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000030, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000040, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, K2Node_Event_IsDesignTime) == 0x000050, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000058, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000060, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000068, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_GetContext_ReturnValue) == 0x000070, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_GetContext_ReturnValue_1) == 0x000078, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, K2Node_CreateDelegate_OutputDelegate) == 0x000080, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000090, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000098, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0000A0, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_Divide_DoubleDouble_B_ImplicitCast_1) == 0x0000A8, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_Divide_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000B0, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000B8, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_Divide_DoubleDouble_A_ImplicitCast_1) == 0x0000C0, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_Divide_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast) == 0x0000C8, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast) == 0x0000CC, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x0000D0, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast) == 0x0000D4, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton, CallFunc_SetMinDesiredHeight_InMinDesiredHeight_ImplicitCast) == 0x0000D8, "Member 'BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton::CallFunc_SetMinDesiredHeight_InMinDesiredHeight_ImplicitCast' has a wrong offset!");

struct BPS24_HoldableCloseButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(BPS24_HoldableCloseButton_C_PreConstruct) == 0x000001, "Wrong alignment on BPS24_HoldableCloseButton_C_PreConstruct");
static_assert(sizeof(BPS24_HoldableCloseButton_C_PreConstruct) == 0x000001, "Wrong size on BPS24_HoldableCloseButton_C_PreConstruct");
static_assert(offsetof(BPS24_HoldableCloseButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BPS24_HoldableCloseButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct BPS24_HoldableCloseButton_C_Update_style final
{
public:
	bool                                          Using_Gamepad;
};
static_assert(alignof(BPS24_HoldableCloseButton_C_Update_style) == 0x000001, "Wrong alignment on BPS24_HoldableCloseButton_C_Update_style");
static_assert(sizeof(BPS24_HoldableCloseButton_C_Update_style) == 0x000001, "Wrong size on BPS24_HoldableCloseButton_C_Update_style");
static_assert(offsetof(BPS24_HoldableCloseButton_C_Update_style, Using_Gamepad) == 0x000000, "Member 'BPS24_HoldableCloseButton_C_Update_style::Using_Gamepad' has a wrong offset!");

struct BPS24_HoldableCloseButton_C_UpdateTextAndStyle final
{
public:
	ECommonInputType                              Input_Type;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(BPS24_HoldableCloseButton_C_UpdateTextAndStyle) == 0x000001, "Wrong alignment on BPS24_HoldableCloseButton_C_UpdateTextAndStyle");
static_assert(sizeof(BPS24_HoldableCloseButton_C_UpdateTextAndStyle) == 0x000002, "Wrong size on BPS24_HoldableCloseButton_C_UpdateTextAndStyle");
static_assert(offsetof(BPS24_HoldableCloseButton_C_UpdateTextAndStyle, Input_Type) == 0x000000, "Member 'BPS24_HoldableCloseButton_C_UpdateTextAndStyle::Input_Type' has a wrong offset!");
static_assert(offsetof(BPS24_HoldableCloseButton_C_UpdateTextAndStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'BPS24_HoldableCloseButton_C_UpdateTextAndStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}
