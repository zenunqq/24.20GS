#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct WeakSpot_C_ExecuteUbergraph_WeakSpot final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_24[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_42[0x6];
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_B4[0x4];
	double                                        CallFunc_VSize_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_C2[0x6];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_D1[0x3];
	int32                                         CallFunc_FFloor_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_D9[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	double                                        CallFunc_FMax_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_FClamp_ReturnValue;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	class USoundBase*                             CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Array_LastIndex_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;
	int32                                         CallFunc_Clamp_ReturnValue;
	uint8                                         Pad_2A4[0x4];
	class USoundBase*                             CallFunc_Array_Get_Item_1;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_2B5[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	double                                        CallFunc_FMax_A_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(WeakSpot_C_ExecuteUbergraph_WeakSpot) == 0x000010, "Wrong alignment on WeakSpot_C_ExecuteUbergraph_WeakSpot");
static_assert(sizeof(WeakSpot_C_ExecuteUbergraph_WeakSpot) == 0x0002E0, "Wrong size on WeakSpot_C_ExecuteUbergraph_WeakSpot");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, EntryPoint) == 0x000000, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000008, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000041, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BreakVector_X) == 0x000048, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BreakVector_Y) == 0x000050, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BreakVector_Z) == 0x000058, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_MakeVector_ReturnValue) == 0x000060, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000078, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000090, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, K2Node_CreateDelegate_OutputDelegate) == 0x0000A8, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_VSize_ReturnValue) == 0x0000B8, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0000C0, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0000C1, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000C8, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BooleanAND_ReturnValue) == 0x0000D0, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_FFloor_ReturnValue) == 0x0000D4, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_BooleanAND_ReturnValue_1) == 0x0000D8, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000DC, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_FMax_ReturnValue) == 0x0000E0, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000E8, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_FClamp_ReturnValue) == 0x0000F0, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x0000F8, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000100, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_MakeVector_ReturnValue_1) == 0x000108, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_MakeTransform_ReturnValue) == 0x000120, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000180, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000260, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Array_Get_Item) == 0x000278, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Array_Length_ReturnValue) == 0x000280, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Array_LastIndex_ReturnValue) == 0x000284, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000288, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Clamp_ReturnValue) == 0x0002A0, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Array_Get_Item_1) == 0x0002A8, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, Temp_int_Loop_Counter_Variable) == 0x0002B0, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Less_IntInt_ReturnValue) == 0x0002B4, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_Add_IntInt_ReturnValue) == 0x0002B8, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0002BC, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_FMax_A_ImplicitCast) == 0x0002C0, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_FMax_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x0002C8, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x0002CC, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_SetScalarParameterValue_Value_ImplicitCast_3) == 0x0002D0, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_SetScalarParameterValue_Value_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(WeakSpot_C_ExecuteUbergraph_WeakSpot, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x0002D4, "Member 'WeakSpot_C_ExecuteUbergraph_WeakSpot::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct WeakSpot_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
};
static_assert(alignof(WeakSpot_C_UserConstructionScript) == 0x000008, "Wrong alignment on WeakSpot_C_UserConstructionScript");
static_assert(sizeof(WeakSpot_C_UserConstructionScript) == 0x000008, "Wrong size on WeakSpot_C_UserConstructionScript");
static_assert(offsetof(WeakSpot_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'WeakSpot_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}
