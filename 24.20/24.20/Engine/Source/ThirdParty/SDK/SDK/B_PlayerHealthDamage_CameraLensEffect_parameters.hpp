#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        K2Node_CustomEvent_NewParam;
	bool                                          K2Node_CustomEvent_First_Hit;
	uint8                                         Pad_11[0x7];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;
};
static_assert(alignof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect) == 0x000008, "Wrong alignment on B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect");
static_assert(sizeof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect) == 0x000038, "Wrong size on B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect, EntryPoint) == 0x000000, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect, K2Node_CustomEvent_NewParam) == 0x000008, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect, K2Node_CustomEvent_First_Hit) == 0x000010, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect::K2Node_CustomEvent_First_Hit' has a wrong offset!");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000018, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000028, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x000030, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");

struct B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter final
{
public:
	double                                        NewParam;
	bool                                          First_Hit;
};
static_assert(alignof(B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter) == 0x000008, "Wrong alignment on B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter");
static_assert(sizeof(B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter) == 0x000010, "Wrong size on B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter, NewParam) == 0x000000, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter::NewParam' has a wrong offset!");
static_assert(offsetof(B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter, First_Hit) == 0x000008, "Member 'B_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter::First_Hit' has a wrong offset!");

}
