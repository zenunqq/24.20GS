#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        K2Node_CustomEvent_NewParam;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;
};
static_assert(alignof(B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect) == 0x000008, "Wrong alignment on B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect");
static_assert(sizeof(B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect) == 0x000030, "Wrong size on B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect");
static_assert(offsetof(B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect, EntryPoint) == 0x000000, "Member 'B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect, K2Node_CustomEvent_NewParam) == 0x000008, "Member 'B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000020, "Member 'B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x000028, "Member 'B_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");

struct B_PlayerShieldDamage_CameraLensEffect_C_PassParticle_Parameter_Shield final
{
public:
	double                                        NewParam;
};
static_assert(alignof(B_PlayerShieldDamage_CameraLensEffect_C_PassParticle_Parameter_Shield) == 0x000008, "Wrong alignment on B_PlayerShieldDamage_CameraLensEffect_C_PassParticle_Parameter_Shield");
static_assert(sizeof(B_PlayerShieldDamage_CameraLensEffect_C_PassParticle_Parameter_Shield) == 0x000008, "Wrong size on B_PlayerShieldDamage_CameraLensEffect_C_PassParticle_Parameter_Shield");
static_assert(offsetof(B_PlayerShieldDamage_CameraLensEffect_C_PassParticle_Parameter_Shield, NewParam) == 0x000000, "Member 'B_PlayerShieldDamage_CameraLensEffect_C_PassParticle_Parameter_Shield::NewParam' has a wrong offset!");

}
