#pragma once

#include "Basic.hpp"

#include "CrewUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct UI_BigGoldButton_C_BP_OnActionProgressDecreased final
{
public:
	float                                         HoldPercentage;
};
static_assert(alignof(UI_BigGoldButton_C_BP_OnActionProgressDecreased) == 0x000004, "Wrong alignment on UI_BigGoldButton_C_BP_OnActionProgressDecreased");
static_assert(sizeof(UI_BigGoldButton_C_BP_OnActionProgressDecreased) == 0x000004, "Wrong size on UI_BigGoldButton_C_BP_OnActionProgressDecreased");
static_assert(offsetof(UI_BigGoldButton_C_BP_OnActionProgressDecreased, HoldPercentage) == 0x000000, "Member 'UI_BigGoldButton_C_BP_OnActionProgressDecreased::HoldPercentage' has a wrong offset!");

struct UI_BigGoldButton_C_BP_OnActionProgressIncreased final
{
public:
	float                                         HoldPercentage;
};
static_assert(alignof(UI_BigGoldButton_C_BP_OnActionProgressIncreased) == 0x000004, "Wrong alignment on UI_BigGoldButton_C_BP_OnActionProgressIncreased");
static_assert(sizeof(UI_BigGoldButton_C_BP_OnActionProgressIncreased) == 0x000004, "Wrong size on UI_BigGoldButton_C_BP_OnActionProgressIncreased");
static_assert(offsetof(UI_BigGoldButton_C_BP_OnActionProgressIncreased, HoldPercentage) == 0x000000, "Member 'UI_BigGoldButton_C_BP_OnActionProgressIncreased::HoldPercentage' has a wrong offset!");

struct UI_BigGoldButton_C_BP_OnHoldEnded final
{
public:
	float                                         HoldPercentage;
	bool                                          bInUseSecondaryHoldAnimation;
};
static_assert(alignof(UI_BigGoldButton_C_BP_OnHoldEnded) == 0x000004, "Wrong alignment on UI_BigGoldButton_C_BP_OnHoldEnded");
static_assert(sizeof(UI_BigGoldButton_C_BP_OnHoldEnded) == 0x000008, "Wrong size on UI_BigGoldButton_C_BP_OnHoldEnded");
static_assert(offsetof(UI_BigGoldButton_C_BP_OnHoldEnded, HoldPercentage) == 0x000000, "Member 'UI_BigGoldButton_C_BP_OnHoldEnded::HoldPercentage' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_BP_OnHoldEnded, bInUseSecondaryHoldAnimation) == 0x000004, "Member 'UI_BigGoldButton_C_BP_OnHoldEnded::bInUseSecondaryHoldAnimation' has a wrong offset!");

struct UI_BigGoldButton_C_BP_OnHoldStarted final
{
public:
	float                                         HoldPercentage;
	bool                                          bInUseSecondaryHoldAnimation;
};
static_assert(alignof(UI_BigGoldButton_C_BP_OnHoldStarted) == 0x000004, "Wrong alignment on UI_BigGoldButton_C_BP_OnHoldStarted");
static_assert(sizeof(UI_BigGoldButton_C_BP_OnHoldStarted) == 0x000008, "Wrong size on UI_BigGoldButton_C_BP_OnHoldStarted");
static_assert(offsetof(UI_BigGoldButton_C_BP_OnHoldStarted, HoldPercentage) == 0x000000, "Member 'UI_BigGoldButton_C_BP_OnHoldStarted::HoldPercentage' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_BP_OnHoldStarted, bInUseSecondaryHoldAnimation) == 0x000004, "Member 'UI_BigGoldButton_C_BP_OnHoldStarted::bInUseSecondaryHoldAnimation' has a wrong offset!");

struct UI_BigGoldButton_C_EventHover final
{
public:
	bool                                          In;
};
static_assert(alignof(UI_BigGoldButton_C_EventHover) == 0x000001, "Wrong alignment on UI_BigGoldButton_C_EventHover");
static_assert(sizeof(UI_BigGoldButton_C_EventHover) == 0x000001, "Wrong size on UI_BigGoldButton_C_EventHover");
static_assert(offsetof(UI_BigGoldButton_C_EventHover, In) == 0x000000, "Member 'UI_BigGoldButton_C_EventHover::In' has a wrong offset!");

struct UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_6[0x2];
	class UMaterialInterface*                     Temp_object_Variable;
	class UMaterialInterface*                     Temp_object_Variable_1;
	EBattlePassPurchaseButtonCurrencyType         Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_5;
	ESlateVisibility                              Temp_byte_Variable_6;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_7;
	ESlateVisibility                              Temp_byte_Variable_8;
	bool                                          Temp_bool_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_9;
	ESlateVisibility                              Temp_byte_Variable_10;
	uint8                                         Pad_25[0x3];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_1;
	bool                                          Temp_bool_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_11;
	ESlateVisibility                              Temp_byte_Variable_12;
	bool                                          Temp_bool_Variable_5;
	ESlateVisibility                              Temp_byte_Variable_13;
	ESlateVisibility                              Temp_byte_Variable_14;
	uint8                                         Pad_3E[0x2];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	bool                                          K2Node_CustomEvent_In;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_4B[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_59[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UMaterialInterface*                     K2Node_Select_Default_1;
	ESlateVisibility                              K2Node_Select_Default_2;
	ESlateVisibility                              K2Node_Select_Default_3;
	uint8                                         Pad_72[0x6];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_1;
	float                                         K2Node_Event_HoldPercentage_3;
	bool                                          K2Node_Event_bInUseSecondaryHoldAnimation_1;
	uint8                                         Pad_8D[0x3];
	float                                         K2Node_Event_HoldPercentage_2;
	bool                                          K2Node_Event_bInUseSecondaryHoldAnimation;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_97[0x1];
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_9C[0x4];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	bool                                          K2Node_Event_bHoldRequired;
	bool                                          CallFunc_GetIsHoldRequired_ReturnValue;
	uint8                                         Pad_B2[0x6];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_2;
	ESlateVisibility                              K2Node_Select_Default_4;
	uint8                                         Pad_C1[0x7];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_3;
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_4;
	ESlateVisibility                              Temp_byte_Variable_15;
	bool                                          CallFunc_IsHovered_ReturnValue;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	uint8                                         Pad_DC[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;
	bool                                          CallFunc_IsEmpty_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          Temp_bool_Variable_6;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_5;
	ESlateVisibility                              K2Node_Select_Default_6;
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_GetIsHoldRequired_ReturnValue_1;
	EBattlePassPurchaseButtonCurrencyType         Temp_byte_Variable_16;
	uint8                                         Pad_10E[0x2];
	class UWidget*                                K2Node_Select_Default_7;
	EBattlePassPurchaseButtonCurrencyType         Temp_byte_Variable_17;
	uint8                                         Pad_119[0x7];
	class UWidget*                                K2Node_Select_Default_8;
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsEmpty_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default_9;
	uint8                                         Pad_13D[0x3];
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsEmpty_ReturnValue_2;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	bool                                          CallFunc_IsHovered_ReturnValue_1;
	bool                                          CallFunc_IsHovered_ReturnValue_2;
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;
	float                                         K2Node_Event_HoldPercentage_1;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_15D[0x3];
	float                                         K2Node_Event_HoldPercentage;
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;
	uint8                                         Pad_165[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue_1;
	uint8                                         Pad_16C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_PlayHoldProgressAnimation_HoldPercent_ImplicitCast;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast;
	uint8                                         Pad_19C[0x4];
	double                                        CallFunc_PlayHoldProgressAnimation_HoldPercent_ImplicitCast_1;
};
static_assert(alignof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton) == 0x000008, "Wrong alignment on UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton");
static_assert(sizeof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton) == 0x0001A8, "Wrong size on UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, EntryPoint) == 0x000000, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable) == 0x000004, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_bool_Variable) == 0x000005, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_object_Variable) == 0x000008, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_object_Variable_1) == 0x000010, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_1) == 0x000018, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_2) == 0x000019, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_3) == 0x00001A, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_4) == 0x00001B, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_bool_Variable_1) == 0x00001C, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_5) == 0x00001D, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_6) == 0x00001E, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_bool_Variable_2) == 0x00001F, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_7) == 0x000020, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_8) == 0x000021, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_bool_Variable_3) == 0x000022, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_9) == 0x000023, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_10) == 0x000024, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_GetContext_ReturnValue) == 0x000028, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_GetContext_ReturnValue_1) == 0x000030, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_bool_Variable_4) == 0x000038, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_11) == 0x000039, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_12) == 0x00003A, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_bool_Variable_5) == 0x00003B, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_13) == 0x00003C, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_14) == 0x00003D, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000040, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_CustomEvent_In) == 0x000048, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_CustomEvent_In' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_GetCurrentInputType_ReturnValue) == 0x000049, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00004A, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000050, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Select_Default) == 0x000058, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000060, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Select_Default_1) == 0x000068, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Select_Default_2) == 0x000070, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Select_Default_3) == 0x000071, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_SpawnSound2D_ReturnValue) == 0x000078, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_SpawnSound2D_ReturnValue_1) == 0x000080, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_SpawnSound2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Event_HoldPercentage_3) == 0x000088, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Event_HoldPercentage_3' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Event_bInUseSecondaryHoldAnimation_1) == 0x00008C, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Event_bInUseSecondaryHoldAnimation_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Event_HoldPercentage_2) == 0x000090, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Event_HoldPercentage_2' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Event_bInUseSecondaryHoldAnimation) == 0x000094, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Event_bInUseSecondaryHoldAnimation' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000095, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Event_IsDesignTime) == 0x000096, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_GetEndTime_ReturnValue) == 0x000098, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x0000A8, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Event_bHoldRequired) == 0x0000B0, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Event_bHoldRequired' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_GetIsHoldRequired_ReturnValue) == 0x0000B1, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_GetIsHoldRequired_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_SpawnSound2D_ReturnValue_2) == 0x0000B8, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_SpawnSound2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Select_Default_4) == 0x0000C0, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_SpawnSound2D_ReturnValue_3) == 0x0000C8, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_SpawnSound2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_SpawnSound2D_ReturnValue_4) == 0x0000D0, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_SpawnSound2D_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_15) == 0x0000D8, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_IsHovered_ReturnValue) == 0x0000D9, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_CustomEvent_bNewInputType) == 0x0000DA, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000DB, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000E0, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_Conv_NameToString_ReturnValue) == 0x0000E8, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_IsEmpty_ReturnValue) == 0x0000F8, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_IsValid_ReturnValue) == 0x0000F9, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_Not_PreBool_ReturnValue) == 0x0000FA, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_bool_Variable_6) == 0x0000FB, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_BooleanAND_ReturnValue) == 0x0000FC, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_BooleanOR_ReturnValue) == 0x0000FD, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Select_Default_5) == 0x0000FE, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Select_Default_6) == 0x0000FF, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_CreateDelegate_OutputDelegate) == 0x000100, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_GetIsHoldRequired_ReturnValue_1) == 0x00010C, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_GetIsHoldRequired_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_16) == 0x00010D, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Select_Default_7) == 0x000110, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, Temp_byte_Variable_17) == 0x000118, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Select_Default_8) == 0x000120, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_Conv_NameToString_ReturnValue_1) == 0x000128, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_IsValid_ReturnValue_1) == 0x000138, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_IsEmpty_ReturnValue_1) == 0x000139, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_Not_PreBool_ReturnValue_1) == 0x00013A, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_BooleanAND_ReturnValue_1) == 0x00013B, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Select_Default_9) == 0x00013C, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_Conv_NameToString_ReturnValue_2) == 0x000140, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_Conv_NameToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_IsValid_ReturnValue_2) == 0x000150, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_IsEmpty_ReturnValue_2) == 0x000151, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_Not_PreBool_ReturnValue_2) == 0x000152, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_BooleanAND_ReturnValue_2) == 0x000153, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_IsHovered_ReturnValue_1) == 0x000154, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_IsHovered_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_IsHovered_ReturnValue_2) == 0x000155, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_IsHovered_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_Not_PreBool_ReturnValue_3) == 0x000156, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_Not_PreBool_ReturnValue_4) == 0x000157, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Event_HoldPercentage_1) == 0x000158, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Event_HoldPercentage_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_IsAnimationPlaying_ReturnValue) == 0x00015C, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, K2Node_Event_HoldPercentage) == 0x000160, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::K2Node_Event_HoldPercentage' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_Not_PreBool_ReturnValue_5) == 0x000164, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_GetEndTime_ReturnValue_1) == 0x000168, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_PlayAnimation_ReturnValue) == 0x000170, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000178, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_PlayHoldProgressAnimation_HoldPercent_ImplicitCast) == 0x000180, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_PlayHoldProgressAnimation_HoldPercent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000188, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000190, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast) == 0x000198, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton, CallFunc_PlayHoldProgressAnimation_HoldPercent_ImplicitCast_1) == 0x0001A0, "Member 'UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton::CallFunc_PlayHoldProgressAnimation_HoldPercent_ImplicitCast_1' has a wrong offset!");

struct UI_BigGoldButton_C_InputChanged final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(UI_BigGoldButton_C_InputChanged) == 0x000001, "Wrong alignment on UI_BigGoldButton_C_InputChanged");
static_assert(sizeof(UI_BigGoldButton_C_InputChanged) == 0x000001, "Wrong size on UI_BigGoldButton_C_InputChanged");
static_assert(offsetof(UI_BigGoldButton_C_InputChanged, bNewInputType) == 0x000000, "Member 'UI_BigGoldButton_C_InputChanged::bNewInputType' has a wrong offset!");

struct UI_BigGoldButton_C_OnHoldRequiredChanged final
{
public:
	bool                                          bHoldRequired;
};
static_assert(alignof(UI_BigGoldButton_C_OnHoldRequiredChanged) == 0x000001, "Wrong alignment on UI_BigGoldButton_C_OnHoldRequiredChanged");
static_assert(sizeof(UI_BigGoldButton_C_OnHoldRequiredChanged) == 0x000001, "Wrong size on UI_BigGoldButton_C_OnHoldRequiredChanged");
static_assert(offsetof(UI_BigGoldButton_C_OnHoldRequiredChanged, bHoldRequired) == 0x000000, "Member 'UI_BigGoldButton_C_OnHoldRequiredChanged::bHoldRequired' has a wrong offset!");

struct UI_BigGoldButton_C_PlayHoldProgressAnimation final
{
public:
	double                                        HoldPercent;
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_C[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
	float                                         CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast;
};
static_assert(alignof(UI_BigGoldButton_C_PlayHoldProgressAnimation) == 0x000008, "Wrong alignment on UI_BigGoldButton_C_PlayHoldProgressAnimation");
static_assert(sizeof(UI_BigGoldButton_C_PlayHoldProgressAnimation) == 0x000048, "Wrong size on UI_BigGoldButton_C_PlayHoldProgressAnimation");
static_assert(offsetof(UI_BigGoldButton_C_PlayHoldProgressAnimation, HoldPercent) == 0x000000, "Member 'UI_BigGoldButton_C_PlayHoldProgressAnimation::HoldPercent' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_PlayHoldProgressAnimation, CallFunc_GetEndTime_ReturnValue) == 0x000008, "Member 'UI_BigGoldButton_C_PlayHoldProgressAnimation::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_PlayHoldProgressAnimation, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'UI_BigGoldButton_C_PlayHoldProgressAnimation::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_PlayHoldProgressAnimation, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'UI_BigGoldButton_C_PlayHoldProgressAnimation::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_PlayHoldProgressAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'UI_BigGoldButton_C_PlayHoldProgressAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_PlayHoldProgressAnimation, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000028, "Member 'UI_BigGoldButton_C_PlayHoldProgressAnimation::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_PlayHoldProgressAnimation, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'UI_BigGoldButton_C_PlayHoldProgressAnimation::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_PlayHoldProgressAnimation, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'UI_BigGoldButton_C_PlayHoldProgressAnimation::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_PlayHoldProgressAnimation, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x000040, "Member 'UI_BigGoldButton_C_PlayHoldProgressAnimation::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_PlayHoldProgressAnimation, CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast) == 0x000044, "Member 'UI_BigGoldButton_C_PlayHoldProgressAnimation::CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast' has a wrong offset!");

struct UI_BigGoldButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(UI_BigGoldButton_C_PreConstruct) == 0x000001, "Wrong alignment on UI_BigGoldButton_C_PreConstruct");
static_assert(sizeof(UI_BigGoldButton_C_PreConstruct) == 0x000001, "Wrong size on UI_BigGoldButton_C_PreConstruct");
static_assert(offsetof(UI_BigGoldButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_BigGoldButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct UI_BigGoldButton_C_UpdateAnimationBindings final
{
public:
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_A[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_24[0x4];
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsEmpty_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
};
static_assert(alignof(UI_BigGoldButton_C_UpdateAnimationBindings) == 0x000008, "Wrong alignment on UI_BigGoldButton_C_UpdateAnimationBindings");
static_assert(sizeof(UI_BigGoldButton_C_UpdateAnimationBindings) == 0x000040, "Wrong size on UI_BigGoldButton_C_UpdateAnimationBindings");
static_assert(offsetof(UI_BigGoldButton_C_UpdateAnimationBindings, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000000, "Member 'UI_BigGoldButton_C_UpdateAnimationBindings::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_UpdateAnimationBindings, CallFunc_GetCurrentInputType_ReturnValue) == 0x000008, "Member 'UI_BigGoldButton_C_UpdateAnimationBindings::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_UpdateAnimationBindings, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'UI_BigGoldButton_C_UpdateAnimationBindings::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_UpdateAnimationBindings, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'UI_BigGoldButton_C_UpdateAnimationBindings::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_UpdateAnimationBindings, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'UI_BigGoldButton_C_UpdateAnimationBindings::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_UpdateAnimationBindings, CallFunc_Conv_NameToString_ReturnValue) == 0x000028, "Member 'UI_BigGoldButton_C_UpdateAnimationBindings::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_UpdateAnimationBindings, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'UI_BigGoldButton_C_UpdateAnimationBindings::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_UpdateAnimationBindings, CallFunc_IsEmpty_ReturnValue) == 0x000039, "Member 'UI_BigGoldButton_C_UpdateAnimationBindings::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_UpdateAnimationBindings, CallFunc_Not_PreBool_ReturnValue) == 0x00003A, "Member 'UI_BigGoldButton_C_UpdateAnimationBindings::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_UpdateAnimationBindings, CallFunc_BooleanAND_ReturnValue) == 0x00003B, "Member 'UI_BigGoldButton_C_UpdateAnimationBindings::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BigGoldButton_C_UpdateAnimationBindings, CallFunc_BooleanAND_ReturnValue_1) == 0x00003C, "Member 'UI_BigGoldButton_C_UpdateAnimationBindings::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}
