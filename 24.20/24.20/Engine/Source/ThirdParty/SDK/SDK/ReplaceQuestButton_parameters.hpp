#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct ReplaceQuestButton_C_BP_OnHoldDecreased final
{
public:
	float                                         HoldPercentage;
};
static_assert(alignof(ReplaceQuestButton_C_BP_OnHoldDecreased) == 0x000004, "Wrong alignment on ReplaceQuestButton_C_BP_OnHoldDecreased");
static_assert(sizeof(ReplaceQuestButton_C_BP_OnHoldDecreased) == 0x000004, "Wrong size on ReplaceQuestButton_C_BP_OnHoldDecreased");
static_assert(offsetof(ReplaceQuestButton_C_BP_OnHoldDecreased, HoldPercentage) == 0x000000, "Member 'ReplaceQuestButton_C_BP_OnHoldDecreased::HoldPercentage' has a wrong offset!");

struct ReplaceQuestButton_C_BP_OnHoldEnded final
{
public:
	float                                         HoldPercentage;
	bool                                          bInUseSecondaryHoldAnimation;
};
static_assert(alignof(ReplaceQuestButton_C_BP_OnHoldEnded) == 0x000004, "Wrong alignment on ReplaceQuestButton_C_BP_OnHoldEnded");
static_assert(sizeof(ReplaceQuestButton_C_BP_OnHoldEnded) == 0x000008, "Wrong size on ReplaceQuestButton_C_BP_OnHoldEnded");
static_assert(offsetof(ReplaceQuestButton_C_BP_OnHoldEnded, HoldPercentage) == 0x000000, "Member 'ReplaceQuestButton_C_BP_OnHoldEnded::HoldPercentage' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_BP_OnHoldEnded, bInUseSecondaryHoldAnimation) == 0x000004, "Member 'ReplaceQuestButton_C_BP_OnHoldEnded::bInUseSecondaryHoldAnimation' has a wrong offset!");

struct ReplaceQuestButton_C_BP_OnHoldIncreased final
{
public:
	float                                         HoldPercentage;
};
static_assert(alignof(ReplaceQuestButton_C_BP_OnHoldIncreased) == 0x000004, "Wrong alignment on ReplaceQuestButton_C_BP_OnHoldIncreased");
static_assert(sizeof(ReplaceQuestButton_C_BP_OnHoldIncreased) == 0x000004, "Wrong size on ReplaceQuestButton_C_BP_OnHoldIncreased");
static_assert(offsetof(ReplaceQuestButton_C_BP_OnHoldIncreased, HoldPercentage) == 0x000000, "Member 'ReplaceQuestButton_C_BP_OnHoldIncreased::HoldPercentage' has a wrong offset!");

struct ReplaceQuestButton_C_BP_OnHoldStarted final
{
public:
	float                                         HoldPercentage;
	bool                                          bInUseSecondaryHoldAnimation;
};
static_assert(alignof(ReplaceQuestButton_C_BP_OnHoldStarted) == 0x000004, "Wrong alignment on ReplaceQuestButton_C_BP_OnHoldStarted");
static_assert(sizeof(ReplaceQuestButton_C_BP_OnHoldStarted) == 0x000008, "Wrong size on ReplaceQuestButton_C_BP_OnHoldStarted");
static_assert(offsetof(ReplaceQuestButton_C_BP_OnHoldStarted, HoldPercentage) == 0x000000, "Member 'ReplaceQuestButton_C_BP_OnHoldStarted::HoldPercentage' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_BP_OnHoldStarted, bInUseSecondaryHoldAnimation) == 0x000004, "Member 'ReplaceQuestButton_C_BP_OnHoldStarted::bInUseSecondaryHoldAnimation' has a wrong offset!");

struct ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_7[0x1];
	float                                         K2Node_Event_HoldPercentage_3;
	bool                                          K2Node_Event_bInUseSecondaryHoldAnimation_1;
	uint8                                         Pad_D[0x3];
	float                                         K2Node_Event_HoldPercentage_2;
	bool                                          K2Node_Event_bInUseSecondaryHoldAnimation;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_16[0x2];
	float                                         K2Node_Event_HoldPercentage_1;
	float                                         K2Node_Event_HoldPercentage;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_31[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue_1;
	uint8                                         Pad_3C[0x4];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_71[0x7];
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_A5[0x3];
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput_1;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	uint8                                         Pad_B9[0x7];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;
	float                                         CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast;
	float                                         CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
	float                                         CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast;
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
};
static_assert(alignof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton) == 0x000008, "Wrong alignment on ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton");
static_assert(sizeof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton) == 0x000120, "Wrong size on ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, EntryPoint) == 0x000000, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_IsValid_ReturnValue_2) == 0x000006, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, K2Node_Event_HoldPercentage_3) == 0x000008, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::K2Node_Event_HoldPercentage_3' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, K2Node_Event_bInUseSecondaryHoldAnimation_1) == 0x00000C, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::K2Node_Event_bInUseSecondaryHoldAnimation_1' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, K2Node_Event_HoldPercentage_2) == 0x000010, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::K2Node_Event_HoldPercentage_2' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, K2Node_Event_bInUseSecondaryHoldAnimation) == 0x000014, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::K2Node_Event_bInUseSecondaryHoldAnimation' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000015, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, K2Node_Event_HoldPercentage_1) == 0x000018, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::K2Node_Event_HoldPercentage_1' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, K2Node_Event_HoldPercentage) == 0x00001C, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::K2Node_Event_HoldPercentage' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000020, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, K2Node_Event_IsDesignTime) == 0x000030, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_GetEndTime_ReturnValue) == 0x000034, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_GetEndTime_ReturnValue_1) == 0x000038, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000040, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000050, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000058, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_PlayAnimation_ReturnValue) == 0x000060, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000068, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_IsValid_ReturnValue_3) == 0x000070, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_SetFloatParameter_self_CastInput) == 0x000078, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_SetFloatParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_MakeVector2D_ReturnValue) == 0x000088, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, K2Node_CreateDelegate_OutputDelegate) == 0x000098, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_IsValid_ReturnValue_4) == 0x0000A4, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_SetFloatParameter_self_CastInput_1) == 0x0000A8, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_SetFloatParameter_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_IsValid_ReturnValue_5) == 0x0000B8, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_SpawnSound2D_ReturnValue) == 0x0000C0, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_PlayAnimation_ReturnValue_2) == 0x0000C8, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0000D0, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_Divide_DoubleDouble_B_ImplicitCast_1) == 0x0000D8, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_Divide_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x0000E0, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0000E8, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000F0, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000F8, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_Divide_DoubleDouble_A_ImplicitCast_1) == 0x000100, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_Divide_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast) == 0x000108, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast) == 0x00010C, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x000110, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast) == 0x000114, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x000118, "Member 'ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");

struct ReplaceQuestButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ReplaceQuestButton_C_PreConstruct) == 0x000001, "Wrong alignment on ReplaceQuestButton_C_PreConstruct");
static_assert(sizeof(ReplaceQuestButton_C_PreConstruct) == 0x000001, "Wrong size on ReplaceQuestButton_C_PreConstruct");
static_assert(offsetof(ReplaceQuestButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ReplaceQuestButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
