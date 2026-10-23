#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_2;
	class UWaveScalar*                            CallFunc_SetWaveScalar_ReturnValue;
	class UWaveScalar*                            CallFunc_SetWaveScalar_ReturnValue_1;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_3;
	class URadialFalloff*                         CallFunc_SetRadialFalloff_ReturnValue;
	class UOperatorField*                         CallFunc_SetOperatorField_ReturnValue;
	class URadialVector*                          CallFunc_SetRadialVector_ReturnValue;
	class UOperatorField*                         CallFunc_SetOperatorField_ReturnValue_1;
	double                                        CallFunc_FMax_ReturnValue;
	class UOperatorField*                         CallFunc_SetOperatorField_ReturnValue_2;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_MultiplyByPi_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;
	float                                         CallFunc_SetWaveScalar_Period_ImplicitCast;
	float                                         CallFunc_SetWaveScalar_Time_ImplicitCast;
	float                                         CallFunc_SetWaveScalar_Time_ImplicitCast_1;
	float                                         CallFunc_SetWaveScalar_Period_ImplicitCast_1;
	float                                         CallFunc_SetWaveScalar_Wavelength_ImplicitCast;
	float                                         CallFunc_SetRadialFalloff_Radius_ImplicitCast;
	float                                         CallFunc_SetRadialVector_Magnitude_ImplicitCast;
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;
};
static_assert(alignof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce) == 0x000008, "Wrong alignment on FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce");
static_assert(sizeof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce) == 0x0000E8, "Wrong size on FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, EntryPoint) == 0x000000, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::EntryPoint' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000020, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000038, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_K2_GetComponentLocation_ReturnValue_2) == 0x000040, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_K2_GetComponentLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetWaveScalar_ReturnValue) == 0x000058, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetWaveScalar_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetWaveScalar_ReturnValue_1) == 0x000060, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetWaveScalar_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_K2_GetComponentLocation_ReturnValue_3) == 0x000068, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_K2_GetComponentLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetRadialFalloff_ReturnValue) == 0x000080, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetRadialFalloff_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetOperatorField_ReturnValue) == 0x000088, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetOperatorField_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetRadialVector_ReturnValue) == 0x000090, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetRadialVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetOperatorField_ReturnValue_1) == 0x000098, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetOperatorField_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_FMax_ReturnValue) == 0x0000A0, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetOperatorField_ReturnValue_2) == 0x0000A8, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetOperatorField_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_MultiplyByPi_ReturnValue) == 0x0000B8, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_MultiplyByPi_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x0000C0, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetWaveScalar_Period_ImplicitCast) == 0x0000C8, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetWaveScalar_Period_ImplicitCast' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetWaveScalar_Time_ImplicitCast) == 0x0000CC, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetWaveScalar_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetWaveScalar_Time_ImplicitCast_1) == 0x0000D0, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetWaveScalar_Time_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetWaveScalar_Period_ImplicitCast_1) == 0x0000D4, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetWaveScalar_Period_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetWaveScalar_Wavelength_ImplicitCast) == 0x0000D8, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetWaveScalar_Wavelength_ImplicitCast' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetRadialFalloff_Radius_ImplicitCast) == 0x0000DC, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetRadialFalloff_Radius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetRadialVector_Magnitude_ImplicitCast) == 0x0000E0, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetRadialVector_Magnitude_ImplicitCast' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x0000E4, "Member 'FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");

struct FN_RadialForce_C_NewFunction_0 final
{
public:
	double                                        Roll;
	double                                        Scale_0;
	struct FTransform                             ReturnValue;
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	float                                         CallFunc_Conv_FloatToVector_InFloat_ImplicitCast;
};
static_assert(alignof(FN_RadialForce_C_NewFunction_0) == 0x000010, "Wrong alignment on FN_RadialForce_C_NewFunction_0");
static_assert(sizeof(FN_RadialForce_C_NewFunction_0) == 0x000110, "Wrong size on FN_RadialForce_C_NewFunction_0");
static_assert(offsetof(FN_RadialForce_C_NewFunction_0, Roll) == 0x000000, "Member 'FN_RadialForce_C_NewFunction_0::Roll' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_NewFunction_0, Scale_0) == 0x000008, "Member 'FN_RadialForce_C_NewFunction_0::Scale_0' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_NewFunction_0, ReturnValue) == 0x000010, "Member 'FN_RadialForce_C_NewFunction_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_NewFunction_0, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000070, "Member 'FN_RadialForce_C_NewFunction_0::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_NewFunction_0, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000088, "Member 'FN_RadialForce_C_NewFunction_0::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_NewFunction_0, CallFunc_MakeTransform_ReturnValue) == 0x0000A0, "Member 'FN_RadialForce_C_NewFunction_0::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(FN_RadialForce_C_NewFunction_0, CallFunc_Conv_FloatToVector_InFloat_ImplicitCast) == 0x000100, "Member 'FN_RadialForce_C_NewFunction_0::CallFunc_Conv_FloatToVector_InFloat_ImplicitCast' has a wrong offset!");

}
