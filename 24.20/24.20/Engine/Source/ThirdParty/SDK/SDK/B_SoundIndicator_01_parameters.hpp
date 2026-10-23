#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct B_SoundIndicator_01_C_ExecuteUbergraph_B_SoundIndicator_01 final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(B_SoundIndicator_01_C_ExecuteUbergraph_B_SoundIndicator_01) == 0x000004, "Wrong alignment on B_SoundIndicator_01_C_ExecuteUbergraph_B_SoundIndicator_01");
static_assert(sizeof(B_SoundIndicator_01_C_ExecuteUbergraph_B_SoundIndicator_01) == 0x000004, "Wrong size on B_SoundIndicator_01_C_ExecuteUbergraph_B_SoundIndicator_01");
static_assert(offsetof(B_SoundIndicator_01_C_ExecuteUbergraph_B_SoundIndicator_01, EntryPoint) == 0x000000, "Member 'B_SoundIndicator_01_C_ExecuteUbergraph_B_SoundIndicator_01::EntryPoint' has a wrong offset!");

struct B_SoundIndicator_01_C_GetDefaultIcon final
{
public:
	class UTexture*                               ReturnValue;
	EFortSoundIndicatorTypes                      Temp_byte_Variable;
	uint8                                         Pad_9[0x7];
	class UTexture*                               Temp_object_Variable;
	class UTexture*                               Temp_object_Variable_1;
	class UTexture*                               Temp_object_Variable_2;
	class UTexture*                               Temp_object_Variable_3;
	class UTexture*                               Temp_object_Variable_4;
	class UTexture*                               Temp_object_Variable_5;
	class UTexture*                               Temp_object_Variable_6;
	class UTexture*                               Temp_object_Variable_7;
	class UTexture*                               Temp_object_Variable_8;
	class UTexture*                               K2Node_Select_Default;
};
static_assert(alignof(B_SoundIndicator_01_C_GetDefaultIcon) == 0x000008, "Wrong alignment on B_SoundIndicator_01_C_GetDefaultIcon");
static_assert(sizeof(B_SoundIndicator_01_C_GetDefaultIcon) == 0x000060, "Wrong size on B_SoundIndicator_01_C_GetDefaultIcon");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultIcon, ReturnValue) == 0x000000, "Member 'B_SoundIndicator_01_C_GetDefaultIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultIcon, Temp_byte_Variable) == 0x000008, "Member 'B_SoundIndicator_01_C_GetDefaultIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultIcon, Temp_object_Variable) == 0x000010, "Member 'B_SoundIndicator_01_C_GetDefaultIcon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultIcon, Temp_object_Variable_1) == 0x000018, "Member 'B_SoundIndicator_01_C_GetDefaultIcon::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultIcon, Temp_object_Variable_2) == 0x000020, "Member 'B_SoundIndicator_01_C_GetDefaultIcon::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultIcon, Temp_object_Variable_3) == 0x000028, "Member 'B_SoundIndicator_01_C_GetDefaultIcon::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultIcon, Temp_object_Variable_4) == 0x000030, "Member 'B_SoundIndicator_01_C_GetDefaultIcon::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultIcon, Temp_object_Variable_5) == 0x000038, "Member 'B_SoundIndicator_01_C_GetDefaultIcon::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultIcon, Temp_object_Variable_6) == 0x000040, "Member 'B_SoundIndicator_01_C_GetDefaultIcon::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultIcon, Temp_object_Variable_7) == 0x000048, "Member 'B_SoundIndicator_01_C_GetDefaultIcon::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultIcon, Temp_object_Variable_8) == 0x000050, "Member 'B_SoundIndicator_01_C_GetDefaultIcon::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultIcon, K2Node_Select_Default) == 0x000058, "Member 'B_SoundIndicator_01_C_GetDefaultIcon::K2Node_Select_Default' has a wrong offset!");

struct B_SoundIndicator_01_C_GetDefaultTint final
{
public:
	struct FLinearColor                           ReturnValue;
	EFortSoundIndicatorTypes                      Temp_byte_Variable;
	uint8                                         Pad_11[0x3];
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	struct FLinearColor                           Temp_struct_Variable_2;
	struct FLinearColor                           Temp_struct_Variable_3;
	struct FLinearColor                           Temp_struct_Variable_4;
	struct FLinearColor                           Temp_struct_Variable_5;
	struct FLinearColor                           Temp_struct_Variable_6;
	struct FLinearColor                           Temp_struct_Variable_7;
	struct FLinearColor                           Temp_struct_Variable_8;
	struct FLinearColor                           K2Node_Select_Default;
};
static_assert(alignof(B_SoundIndicator_01_C_GetDefaultTint) == 0x000004, "Wrong alignment on B_SoundIndicator_01_C_GetDefaultTint");
static_assert(sizeof(B_SoundIndicator_01_C_GetDefaultTint) == 0x0000B4, "Wrong size on B_SoundIndicator_01_C_GetDefaultTint");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultTint, ReturnValue) == 0x000000, "Member 'B_SoundIndicator_01_C_GetDefaultTint::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultTint, Temp_byte_Variable) == 0x000010, "Member 'B_SoundIndicator_01_C_GetDefaultTint::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultTint, Temp_struct_Variable) == 0x000014, "Member 'B_SoundIndicator_01_C_GetDefaultTint::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultTint, Temp_struct_Variable_1) == 0x000024, "Member 'B_SoundIndicator_01_C_GetDefaultTint::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultTint, Temp_struct_Variable_2) == 0x000034, "Member 'B_SoundIndicator_01_C_GetDefaultTint::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultTint, Temp_struct_Variable_3) == 0x000044, "Member 'B_SoundIndicator_01_C_GetDefaultTint::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultTint, Temp_struct_Variable_4) == 0x000054, "Member 'B_SoundIndicator_01_C_GetDefaultTint::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultTint, Temp_struct_Variable_5) == 0x000064, "Member 'B_SoundIndicator_01_C_GetDefaultTint::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultTint, Temp_struct_Variable_6) == 0x000074, "Member 'B_SoundIndicator_01_C_GetDefaultTint::Temp_struct_Variable_6' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultTint, Temp_struct_Variable_7) == 0x000084, "Member 'B_SoundIndicator_01_C_GetDefaultTint::Temp_struct_Variable_7' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultTint, Temp_struct_Variable_8) == 0x000094, "Member 'B_SoundIndicator_01_C_GetDefaultTint::Temp_struct_Variable_8' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetDefaultTint, K2Node_Select_Default) == 0x0000A4, "Member 'B_SoundIndicator_01_C_GetDefaultTint::K2Node_Select_Default' has a wrong offset!");

struct B_SoundIndicator_01_C_GetStrengthCurveForActiveType final
{
public:
	struct FRuntimeFloatCurve                     ReturnValue;
	EFortSoundIndicatorTypes                      Temp_byte_Variable;
	uint8                                         Pad_89[0x7];
	struct FRuntimeFloatCurve                     Temp_struct_Variable;
	struct FRuntimeFloatCurve                     CallFunc_GetWeaponCurve_ReturnValue;
	struct FRuntimeFloatCurve                     K2Node_Select_Default;
};
static_assert(alignof(B_SoundIndicator_01_C_GetStrengthCurveForActiveType) == 0x000008, "Wrong alignment on B_SoundIndicator_01_C_GetStrengthCurveForActiveType");
static_assert(sizeof(B_SoundIndicator_01_C_GetStrengthCurveForActiveType) == 0x000228, "Wrong size on B_SoundIndicator_01_C_GetStrengthCurveForActiveType");
static_assert(offsetof(B_SoundIndicator_01_C_GetStrengthCurveForActiveType, ReturnValue) == 0x000000, "Member 'B_SoundIndicator_01_C_GetStrengthCurveForActiveType::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetStrengthCurveForActiveType, Temp_byte_Variable) == 0x000088, "Member 'B_SoundIndicator_01_C_GetStrengthCurveForActiveType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetStrengthCurveForActiveType, Temp_struct_Variable) == 0x000090, "Member 'B_SoundIndicator_01_C_GetStrengthCurveForActiveType::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetStrengthCurveForActiveType, CallFunc_GetWeaponCurve_ReturnValue) == 0x000118, "Member 'B_SoundIndicator_01_C_GetStrengthCurveForActiveType::CallFunc_GetWeaponCurve_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetStrengthCurveForActiveType, K2Node_Select_Default) == 0x0001A0, "Member 'B_SoundIndicator_01_C_GetStrengthCurveForActiveType::K2Node_Select_Default' has a wrong offset!");

struct B_SoundIndicator_01_C_GetWeaponCurve final
{
public:
	struct FRuntimeFloatCurve                     ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_8C[0x4];
	struct FRuntimeFloatCurve                     K2Node_Select_Default;
	struct FRuntimeFloatCurve                     K2Node_Select_Default_1;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(B_SoundIndicator_01_C_GetWeaponCurve) == 0x000008, "Wrong alignment on B_SoundIndicator_01_C_GetWeaponCurve");
static_assert(sizeof(B_SoundIndicator_01_C_GetWeaponCurve) == 0x0001B0, "Wrong size on B_SoundIndicator_01_C_GetWeaponCurve");
static_assert(offsetof(B_SoundIndicator_01_C_GetWeaponCurve, ReturnValue) == 0x000000, "Member 'B_SoundIndicator_01_C_GetWeaponCurve::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetWeaponCurve, Temp_bool_Variable) == 0x000088, "Member 'B_SoundIndicator_01_C_GetWeaponCurve::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetWeaponCurve, Temp_bool_Variable_1) == 0x000089, "Member 'B_SoundIndicator_01_C_GetWeaponCurve::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetWeaponCurve, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00008A, "Member 'B_SoundIndicator_01_C_GetWeaponCurve::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetWeaponCurve, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x00008B, "Member 'B_SoundIndicator_01_C_GetWeaponCurve::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetWeaponCurve, K2Node_Select_Default) == 0x000090, "Member 'B_SoundIndicator_01_C_GetWeaponCurve::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetWeaponCurve, K2Node_Select_Default_1) == 0x000118, "Member 'B_SoundIndicator_01_C_GetWeaponCurve::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetWeaponCurve, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0001A0, "Member 'B_SoundIndicator_01_C_GetWeaponCurve::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_SoundIndicator_01_C_GetWeaponCurve, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x0001A8, "Member 'B_SoundIndicator_01_C_GetWeaponCurve::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}
