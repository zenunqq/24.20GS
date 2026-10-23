#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct ErrorLlama_C_ExecuteUbergraph_ErrorLlama final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	double                                        Temp_real_Variable_2;
	double                                        Temp_real_Variable_3;
	double                                        Temp_real_Variable_4;
	double                                        Temp_real_Variable_5;
	double                                        Temp_real_Variable_6;
	double                                        Temp_real_Variable_7;
	double                                        Temp_real_Variable_8;
	double                                        Temp_real_Variable_9;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_59[0x7];
	double                                        Temp_real_Variable_10;
	double                                        Temp_real_Variable_11;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	uint8                                         Pad_89[0x3];
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;
	uint8                                         Pad_9C[0x4];
	struct FGeometry                              K2Node_Event_MyGeometry;
	float                                         K2Node_Event_InDeltaTime;
	uint8                                         Pad_E4[0x4];
	struct FVector2D                              CallFunc_GetMousePositionOnPlatform_ReturnValue;
	struct FVector2D                              CallFunc_GetLocalSize_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;
	struct FVector2D                              CallFunc_LocalToAbsolute_ReturnValue;
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	struct FVector2D                              CallFunc_Normal2D_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_151[0x3];
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;
	double                                        K2Node_Select_Default;
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;
	int32                                         Temp_int_Variable;
	float                                         CallFunc_GetInputAnalogStickState_StickX;
	float                                         CallFunc_GetInputAnalogStickState_StickY;
	uint8                                         Pad_17C[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        K2Node_Select_Default_1;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_1BC[0x4];
	struct FVector2D                              K2Node_CustomEvent_2DInputVec;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_1D1[0x7];
	double                                        CallFunc_BreakVector2D_X_1;
	double                                        CallFunc_BreakVector2D_Y_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue_1;
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;
	struct FVector2D                              CallFunc_Vector2DInterpTo_ReturnValue;
	float                                         K2Node_MakeStruct_R_ImplicitCast;
	float                                         K2Node_MakeStruct_G_ImplicitCast;
	float                                         CallFunc_Vector2DInterpTo_DeltaTime_ImplicitCast;
	uint8                                         Pad_274[0x4];
	double                                        CallFunc_MakeVector2D_X_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_Vector2DInterpTo_InterpSpeed_ImplicitCast;
};
static_assert(alignof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama) == 0x000008, "Wrong alignment on ErrorLlama_C_ExecuteUbergraph_ErrorLlama");
static_assert(sizeof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama) == 0x000290, "Wrong size on ErrorLlama_C_ExecuteUbergraph_ErrorLlama");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, EntryPoint) == 0x000000, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::EntryPoint' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, Temp_real_Variable) == 0x000008, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, Temp_real_Variable_1) == 0x000010, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, Temp_real_Variable_2) == 0x000018, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, Temp_real_Variable_3) == 0x000020, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, Temp_real_Variable_4) == 0x000028, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::Temp_real_Variable_4' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, Temp_real_Variable_5) == 0x000030, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::Temp_real_Variable_5' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, Temp_real_Variable_6) == 0x000038, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::Temp_real_Variable_6' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, Temp_real_Variable_7) == 0x000040, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::Temp_real_Variable_7' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, Temp_real_Variable_8) == 0x000048, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::Temp_real_Variable_8' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, Temp_real_Variable_9) == 0x000050, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::Temp_real_Variable_9' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, Temp_bool_Variable) == 0x000058, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, Temp_real_Variable_10) == 0x000060, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::Temp_real_Variable_10' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, Temp_real_Variable_11) == 0x000068, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::Temp_real_Variable_11' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_GetContext_ReturnValue) == 0x000070, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_BreakVector2D_X) == 0x000078, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_BreakVector2D_Y) == 0x000080, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_GetCurrentInputType_ReturnValue) == 0x000088, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, K2Node_MakeStruct_LinearColor) == 0x00008C, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, K2Node_Event_MyGeometry) == 0x0000A0, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, K2Node_Event_InDeltaTime) == 0x0000E0, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_GetMousePositionOnPlatform_ReturnValue) == 0x0000E8, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_GetMousePositionOnPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_GetLocalSize_ReturnValue) == 0x0000F8, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_GetLocalSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000108, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000110, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_LocalToAbsolute_ReturnValue) == 0x000120, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_LocalToAbsolute_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000130, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_Normal2D_ReturnValue) == 0x000140, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_IsValid_ReturnValue) == 0x000150, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000154, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, K2Node_Select_Default) == 0x000158, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000160, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_GetPlayerController_ReturnValue) == 0x000168, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, Temp_int_Variable) == 0x000170, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_GetInputAnalogStickState_StickX) == 0x000174, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_GetInputAnalogStickState_StickX' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_GetInputAnalogStickState_StickY) == 0x000178, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_GetInputAnalogStickState_StickY' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000180, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, K2Node_Select_Default_1) == 0x000188, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_MakeVector2D_ReturnValue) == 0x000190, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x0001A0, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, K2Node_CreateDelegate_OutputDelegate) == 0x0001B0, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, K2Node_CustomEvent_2DInputVec) == 0x0001C0, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::K2Node_CustomEvent_2DInputVec' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, K2Node_SwitchEnum_CmpSuccess) == 0x0001D0, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_BreakVector2D_X_1) == 0x0001D8, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_BreakVector2D_Y_1) == 0x0001E0, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0001E8, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_MakeVector_ReturnValue) == 0x0001F0, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_Multiply_Vector2DFloat_ReturnValue_1) == 0x000208, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_Multiply_Vector2DFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_RotateAngleAxis_ReturnValue) == 0x000218, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_BreakVector_X) == 0x000230, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_BreakVector_Y) == 0x000238, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_BreakVector_Z) == 0x000240, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_MakeVector2D_ReturnValue_1) == 0x000248, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_Vector2DInterpTo_ReturnValue) == 0x000258, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_Vector2DInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, K2Node_MakeStruct_R_ImplicitCast) == 0x000268, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::K2Node_MakeStruct_R_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, K2Node_MakeStruct_G_ImplicitCast) == 0x00026C, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::K2Node_MakeStruct_G_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_Vector2DInterpTo_DeltaTime_ImplicitCast) == 0x000270, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_Vector2DInterpTo_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_MakeVector2D_X_ImplicitCast) == 0x000278, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_MakeVector2D_X_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000280, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000288, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_ExecuteUbergraph_ErrorLlama, CallFunc_Vector2DInterpTo_InterpSpeed_ImplicitCast) == 0x00028C, "Member 'ErrorLlama_C_ExecuteUbergraph_ErrorLlama::CallFunc_Vector2DInterpTo_InterpSpeed_ImplicitCast' has a wrong offset!");

struct ErrorLlama_C_HandleInputTypeChanged final
{
public:
	ECommonInputType                              NewInputType;
};
static_assert(alignof(ErrorLlama_C_HandleInputTypeChanged) == 0x000001, "Wrong alignment on ErrorLlama_C_HandleInputTypeChanged");
static_assert(sizeof(ErrorLlama_C_HandleInputTypeChanged) == 0x000001, "Wrong size on ErrorLlama_C_HandleInputTypeChanged");
static_assert(offsetof(ErrorLlama_C_HandleInputTypeChanged, NewInputType) == 0x000000, "Member 'ErrorLlama_C_HandleInputTypeChanged::NewInputType' has a wrong offset!");

struct ErrorLlama_C_HandleNormalizedInputDirection final
{
public:
	struct FVector2D                              TwoDInputVec;
};
static_assert(alignof(ErrorLlama_C_HandleNormalizedInputDirection) == 0x000008, "Wrong alignment on ErrorLlama_C_HandleNormalizedInputDirection");
static_assert(sizeof(ErrorLlama_C_HandleNormalizedInputDirection) == 0x000010, "Wrong size on ErrorLlama_C_HandleNormalizedInputDirection");
static_assert(offsetof(ErrorLlama_C_HandleNormalizedInputDirection, TwoDInputVec) == 0x000000, "Member 'ErrorLlama_C_HandleNormalizedInputDirection::TwoDInputVec' has a wrong offset!");

struct ErrorLlama_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;
	float                                         InDeltaTime;
};
static_assert(alignof(ErrorLlama_C_Tick) == 0x000008, "Wrong alignment on ErrorLlama_C_Tick");
static_assert(sizeof(ErrorLlama_C_Tick) == 0x000048, "Wrong size on ErrorLlama_C_Tick");
static_assert(offsetof(ErrorLlama_C_Tick, MyGeometry) == 0x000000, "Member 'ErrorLlama_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(ErrorLlama_C_Tick, InDeltaTime) == 0x000040, "Member 'ErrorLlama_C_Tick::InDeltaTime' has a wrong offset!");

}
