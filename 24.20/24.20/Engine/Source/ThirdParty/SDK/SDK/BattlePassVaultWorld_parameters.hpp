#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct BattlePassVaultWorld_C_UserConstructionScript final
{
public:
	class AFortStaticMeshActor*                   K2Node_DynamicCast_AsFort_Static_Mesh_Actor;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(BattlePassVaultWorld_C_UserConstructionScript) == 0x000008, "Wrong alignment on BattlePassVaultWorld_C_UserConstructionScript");
static_assert(sizeof(BattlePassVaultWorld_C_UserConstructionScript) == 0x000010, "Wrong size on BattlePassVaultWorld_C_UserConstructionScript");
static_assert(offsetof(BattlePassVaultWorld_C_UserConstructionScript, K2Node_DynamicCast_AsFort_Static_Mesh_Actor) == 0x000000, "Member 'BattlePassVaultWorld_C_UserConstructionScript::K2Node_DynamicCast_AsFort_Static_Mesh_Actor' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_UserConstructionScript, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'BattlePassVaultWorld_C_UserConstructionScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct BattlePassVaultWorld_C_TransitionBackgroundForward final
{
public:
	double                                        Forward;
	double                                        fade;
	double                                        FXTransitionFade;
	class UMaterialInstanceDynamic*               Mid;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Lerp_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue_1;
	double                                        CallFunc_Lerp_ReturnValue_2;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Lerp_ReturnValue_3;
	double                                        CallFunc_Lerp_ReturnValue_4;
	double                                        CallFunc_Lerp_ReturnValue_5;
	double                                        CallFunc_Lerp_A_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Lerp_A_ImplicitCast_1;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	uint8                                         Pad_AC[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Lerp_B_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Lerp_B_ImplicitCast_1;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;
};
static_assert(alignof(BattlePassVaultWorld_C_TransitionBackgroundForward) == 0x000008, "Wrong alignment on BattlePassVaultWorld_C_TransitionBackgroundForward");
static_assert(sizeof(BattlePassVaultWorld_C_TransitionBackgroundForward) == 0x0000F8, "Wrong size on BattlePassVaultWorld_C_TransitionBackgroundForward");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, Forward) == 0x000000, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::Forward' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, fade) == 0x000008, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::fade' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, FXTransitionFade) == 0x000010, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::FXTransitionFade' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, Mid) == 0x000018, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::Mid' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000020, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000028, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_ReturnValue) == 0x000030, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000038, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_ReturnValue_1) == 0x000040, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_ReturnValue_2) == 0x000048, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_ReturnValue_3) == 0x000058, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_ReturnValue_4) == 0x000060, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_ReturnValue_5) == 0x000068, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_A_ImplicitCast) == 0x000070, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000078, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000080, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_A_ImplicitCast_1) == 0x000088, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Add_DoubleDouble_A_ImplicitCast_1) == 0x000090, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Add_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Add_DoubleDouble_B_ImplicitCast_1) == 0x000098, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Add_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0000A0, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x0000A4, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x0000A8, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0000B0, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_B_ImplicitCast) == 0x0000B8, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x0000C0, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_B_ImplicitCast_1) == 0x0000C8, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1) == 0x0000D0, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_3) == 0x0000D8, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_4) == 0x0000DC, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1) == 0x0000E0, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_5) == 0x0000E8, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_6) == 0x0000EC, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_6' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_7) == 0x0000F0, "Member 'BattlePassVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_7' has a wrong offset!");

struct BattlePassVaultWorld_C_TransitionBackgroundBackward final
{
public:
	double                                        Backward;
	double                                        fade;
	double                                        FXTransitionFade;
	class UMaterialInstanceDynamic*               Mid;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Lerp_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue_1;
	double                                        CallFunc_Lerp_ReturnValue_2;
	double                                        CallFunc_Lerp_ReturnValue_3;
	double                                        CallFunc_Lerp_ReturnValue_4;
	double                                        CallFunc_Lerp_ReturnValue_5;
	double                                        CallFunc_Lerp_A_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Lerp_B_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Lerp_B_ImplicitCast_1;
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast_1;
	double                                        CallFunc_Lerp_A_ImplicitCast_1;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;
};
static_assert(alignof(BattlePassVaultWorld_C_TransitionBackgroundBackward) == 0x000008, "Wrong alignment on BattlePassVaultWorld_C_TransitionBackgroundBackward");
static_assert(sizeof(BattlePassVaultWorld_C_TransitionBackgroundBackward) == 0x0000F0, "Wrong size on BattlePassVaultWorld_C_TransitionBackgroundBackward");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, Backward) == 0x000000, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::Backward' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, fade) == 0x000008, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::fade' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, FXTransitionFade) == 0x000010, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::FXTransitionFade' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, Mid) == 0x000018, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::Mid' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000020, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000028, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000030, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000038, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_ReturnValue) == 0x000040, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_ReturnValue_1) == 0x000048, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_ReturnValue_2) == 0x000050, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_ReturnValue_3) == 0x000058, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_ReturnValue_4) == 0x000060, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_ReturnValue_5) == 0x000068, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_A_ImplicitCast) == 0x000070, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000078, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_B_ImplicitCast) == 0x000080, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000088, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000090, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Add_DoubleDouble_A_ImplicitCast_1) == 0x000098, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Add_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0000A0, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_B_ImplicitCast_1) == 0x0000A8, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Add_DoubleDouble_B_ImplicitCast_1) == 0x0000B0, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Add_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_A_ImplicitCast_1) == 0x0000B8, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1) == 0x0000C0, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0000C8, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x0000CC, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1) == 0x0000D0, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x0000D8, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_3) == 0x0000DC, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_4) == 0x0000E0, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_5) == 0x0000E4, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_6) == 0x0000E8, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_6' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_7) == 0x0000EC, "Member 'BattlePassVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_7' has a wrong offset!");

struct BattlePassVaultWorld_C_OnTransitionItemDetails final
{
public:
	bool                                          bShowItemDetails;
};
static_assert(alignof(BattlePassVaultWorld_C_OnTransitionItemDetails) == 0x000001, "Wrong alignment on BattlePassVaultWorld_C_OnTransitionItemDetails");
static_assert(sizeof(BattlePassVaultWorld_C_OnTransitionItemDetails) == 0x000001, "Wrong size on BattlePassVaultWorld_C_OnTransitionItemDetails");
static_assert(offsetof(BattlePassVaultWorld_C_OnTransitionItemDetails, bShowItemDetails) == 0x000000, "Member 'BattlePassVaultWorld_C_OnTransitionItemDetails::bShowItemDetails' has a wrong offset!");

struct BattlePassVaultWorld_C_SetupBackgroundMaterial final
{
public:
	class UTexture2D*                             TextureBackground;
	struct FVaultWorldBackgroundData              BackgroundInfo;
	class UMaterialInstanceDynamic*               Mid;
	class FName                                   Temp_name_Variable;
	float                                         CallFunc_BreakVector3f_X;
	float                                         CallFunc_BreakVector3f_Y;
	float                                         CallFunc_BreakVector3f_Z;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_82[0x2];
	class FName                                   Temp_name_Variable_1;
	class FName                                   Temp_name_Variable_2;
	class FName                                   Temp_name_Variable_3;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_91[0x3];
	class FName                                   Temp_name_Variable_4;
	class FName                                   Temp_name_Variable_5;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_9D[0x3];
	class FName                                   Temp_name_Variable_6;
	class FName                                   Temp_name_Variable_7;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_A9[0x3];
	class FName                                   K2Node_Select_Default;
	class FName                                   K2Node_Select_Default_1;
	class FName                                   K2Node_Select_Default_2;
	class FName                                   K2Node_Select_Default_3;
	class FName                                   Temp_name_Variable_8;
	class FName                                   Temp_name_Variable_9;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_C5[0x3];
	class FName                                   K2Node_Select_Default_4;
	struct FVector3f                              CallFunc_BreakVector3f_InVec_ImplicitCast;
};
static_assert(alignof(BattlePassVaultWorld_C_SetupBackgroundMaterial) == 0x000008, "Wrong alignment on BattlePassVaultWorld_C_SetupBackgroundMaterial");
static_assert(sizeof(BattlePassVaultWorld_C_SetupBackgroundMaterial) == 0x0000D8, "Wrong size on BattlePassVaultWorld_C_SetupBackgroundMaterial");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, TextureBackground) == 0x000000, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::TextureBackground' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, BackgroundInfo) == 0x000008, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::BackgroundInfo' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Mid) == 0x000068, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Mid' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable) == 0x000070, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, CallFunc_BreakVector3f_X) == 0x000074, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::CallFunc_BreakVector3f_X' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, CallFunc_BreakVector3f_Y) == 0x000078, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::CallFunc_BreakVector3f_Y' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, CallFunc_BreakVector3f_Z) == 0x00007C, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::CallFunc_BreakVector3f_Z' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_bool_Variable) == 0x000081, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable_1) == 0x000084, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable_2) == 0x000088, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable_3) == 0x00008C, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_bool_Variable_1) == 0x000090, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable_4) == 0x000094, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable_5) == 0x000098, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_bool_Variable_2) == 0x00009C, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable_6) == 0x0000A0, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable_6' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable_7) == 0x0000A4, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable_7' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_bool_Variable_3) == 0x0000A8, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, K2Node_Select_Default) == 0x0000AC, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, K2Node_Select_Default_1) == 0x0000B0, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, K2Node_Select_Default_2) == 0x0000B4, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, K2Node_Select_Default_3) == 0x0000B8, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable_8) == 0x0000BC, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable_8' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable_9) == 0x0000C0, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable_9' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, Temp_bool_Variable_4) == 0x0000C4, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, K2Node_Select_Default_4) == 0x0000C8, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_SetupBackgroundMaterial, CallFunc_BreakVector3f_InVec_ImplicitCast) == 0x0000CC, "Member 'BattlePassVaultWorld_C_SetupBackgroundMaterial::CallFunc_BreakVector3f_InVec_ImplicitCast' has a wrong offset!");

struct BattlePassVaultWorld_C_OnTransitionBackground final
{
public:
	bool                                          bPlayForward;
	EBackgroundIntensityLevel                     IntensityTransition;
};
static_assert(alignof(BattlePassVaultWorld_C_OnTransitionBackground) == 0x000001, "Wrong alignment on BattlePassVaultWorld_C_OnTransitionBackground");
static_assert(sizeof(BattlePassVaultWorld_C_OnTransitionBackground) == 0x000002, "Wrong size on BattlePassVaultWorld_C_OnTransitionBackground");
static_assert(offsetof(BattlePassVaultWorld_C_OnTransitionBackground, bPlayForward) == 0x000000, "Member 'BattlePassVaultWorld_C_OnTransitionBackground::bPlayForward' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_OnTransitionBackground, IntensityTransition) == 0x000001, "Member 'BattlePassVaultWorld_C_OnTransitionBackground::IntensityTransition' has a wrong offset!");

struct BattlePassVaultWorld_C_OnSetupBackground final
{
public:
	const class UTexture2D*                       LoadedBackgroundTexture;
	struct FVaultWorldBackgroundData              BackgroundInfo;
};
static_assert(alignof(BattlePassVaultWorld_C_OnSetupBackground) == 0x000008, "Wrong alignment on BattlePassVaultWorld_C_OnSetupBackground");
static_assert(sizeof(BattlePassVaultWorld_C_OnSetupBackground) == 0x000068, "Wrong size on BattlePassVaultWorld_C_OnSetupBackground");
static_assert(offsetof(BattlePassVaultWorld_C_OnSetupBackground, LoadedBackgroundTexture) == 0x000000, "Member 'BattlePassVaultWorld_C_OnSetupBackground::LoadedBackgroundTexture' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_OnSetupBackground, BackgroundInfo) == 0x000008, "Member 'BattlePassVaultWorld_C_OnSetupBackground::BackgroundInfo' has a wrong offset!");

struct BattlePassVaultWorld_C_PageTransitionIntensityUpdate final
{
public:
	class UMaterialInstanceDynamic*               MID_Background;
	class UMaterialInstanceDynamic*               MID_Floor;
	EBackgroundIntensityLevel                     Temp_byte_Variable;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	EBackgroundIntensityLevel                     Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_15[0x3];
	float                                         K2Node_Select_Default;
	bool                                          K2Node_Select_Default_1;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_1E[0x2];
	float                                         K2Node_Select_Default_2;
	float                                         K2Node_Select_Default_3;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;
	uint8                                         Pad_2A[0x2];
	float                                         K2Node_Select_Option_0_ImplicitCast;
	float                                         K2Node_Select_Option_1_ImplicitCast;
	float                                         K2Node_Select_Option_0_ImplicitCast_1;
	float                                         K2Node_Select_Option_1_ImplicitCast_1;
	float                                         K2Node_Select_LowIntensity_ImplicitCast;
	float                                         K2Node_Select_HighIntensity_ImplicitCast;
};
static_assert(alignof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate) == 0x000008, "Wrong alignment on BattlePassVaultWorld_C_PageTransitionIntensityUpdate");
static_assert(sizeof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate) == 0x000048, "Wrong size on BattlePassVaultWorld_C_PageTransitionIntensityUpdate");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, MID_Background) == 0x000000, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::MID_Background' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, MID_Floor) == 0x000008, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::MID_Floor' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, Temp_byte_Variable) == 0x000010, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, Temp_bool_Variable) == 0x000011, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, Temp_bool_Variable_1) == 0x000012, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, Temp_byte_Variable_1) == 0x000013, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, Temp_bool_Variable_2) == 0x000014, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, K2Node_Select_Default) == 0x000018, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, K2Node_Select_Default_1) == 0x00001C, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, Temp_bool_Variable_3) == 0x00001D, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, K2Node_Select_Default_2) == 0x000020, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, K2Node_Select_Default_3) == 0x000024, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000028, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000029, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, K2Node_Select_Option_0_ImplicitCast) == 0x00002C, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::K2Node_Select_Option_0_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, K2Node_Select_Option_1_ImplicitCast) == 0x000030, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::K2Node_Select_Option_1_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, K2Node_Select_Option_0_ImplicitCast_1) == 0x000034, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::K2Node_Select_Option_0_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, K2Node_Select_Option_1_ImplicitCast_1) == 0x000038, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::K2Node_Select_Option_1_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, K2Node_Select_LowIntensity_ImplicitCast) == 0x00003C, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::K2Node_Select_LowIntensity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_PageTransitionIntensityUpdate, K2Node_Select_HighIntensity_ImplicitCast) == 0x000040, "Member 'BattlePassVaultWorld_C_PageTransitionIntensityUpdate::K2Node_Select_HighIntensity_ImplicitCast' has a wrong offset!");

struct BattlePassVaultWorld_C_OnIntensityChange final
{
public:
	bool                                          bToLowIntensity;
};
static_assert(alignof(BattlePassVaultWorld_C_OnIntensityChange) == 0x000001, "Wrong alignment on BattlePassVaultWorld_C_OnIntensityChange");
static_assert(sizeof(BattlePassVaultWorld_C_OnIntensityChange) == 0x000001, "Wrong size on BattlePassVaultWorld_C_OnIntensityChange");
static_assert(offsetof(BattlePassVaultWorld_C_OnIntensityChange, bToLowIntensity) == 0x000000, "Member 'BattlePassVaultWorld_C_OnIntensityChange::bToLowIntensity' has a wrong offset!");

struct BattlePassVaultWorld_C_OnUpdateDisplay final
{
public:
	bool                                          bShowFloor;
	bool                                          bShowEffects;
};
static_assert(alignof(BattlePassVaultWorld_C_OnUpdateDisplay) == 0x000001, "Wrong alignment on BattlePassVaultWorld_C_OnUpdateDisplay");
static_assert(sizeof(BattlePassVaultWorld_C_OnUpdateDisplay) == 0x000002, "Wrong size on BattlePassVaultWorld_C_OnUpdateDisplay");
static_assert(offsetof(BattlePassVaultWorld_C_OnUpdateDisplay, bShowFloor) == 0x000000, "Member 'BattlePassVaultWorld_C_OnUpdateDisplay::bShowFloor' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_OnUpdateDisplay, bShowEffects) == 0x000001, "Member 'BattlePassVaultWorld_C_OnUpdateDisplay::bShowEffects' has a wrong offset!");

struct BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_11[0x7];
	double                                        CallFunc_Lerp_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	uint8                                         Pad_21[0x7];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          K2Node_Event_bPlayForward;
	EBackgroundIntensityLevel                     K2Node_Event_IntensityTransition;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_34[0x4];
	const class UTexture2D*                       K2Node_Event_LoadedBackgroundTexture;
	struct FVaultWorldBackgroundData              K2Node_Event_BackgroundInfo;
	bool                                          K2Node_Event_bShowFloor;
	bool                                          K2Node_Event_bShowEffects;
	bool                                          K2Node_Event_bShowItemDetails;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_A5[0x3];
	double                                        CallFunc_Lerp_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;
	uint8                                         Pad_B1[0x3];
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;
	bool                                          K2Node_Event_bToLowIntensity;
	uint8                                         Pad_BA[0x6];
	double                                        CallFunc_Lerp_ReturnValue_2;
	bool                                          CallFunc_BooleanXOR_ReturnValue;
	uint8                                         Pad_C9[0x7];
	double                                        CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast;
	double                                        CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1;
	double                                        CallFunc_TransitionBackgroundForward_Fade_ImplicitCast;
	double                                        CallFunc_TransitionBackgroundForward_Fade_ImplicitCast_1;
	double                                        CallFunc_TransitionBackgroundForward_Forward_ImplicitCast;
	double                                        CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1;
	double                                        CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast;
	double                                        CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1;
	double                                        CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast;
	double                                        CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast_1;
	double                                        CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast;
	double                                        CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1;
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;
	uint8                                         Pad_134[0x4];
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;
	double                                        CallFunc_Lerp_Alpha_ImplicitCast_1;
	double                                        CallFunc_Lerp_Alpha_ImplicitCast_2;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
};
static_assert(alignof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld) == 0x000008, "Wrong alignment on BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld");
static_assert(sizeof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld) == 0x000168, "Wrong size on BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, EntryPoint) == 0x000000, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000008, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_Lerp_ReturnValue) == 0x000018, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, K2Node_SwitchEnum_CmpSuccess_1) == 0x000020, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000028, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, K2Node_Event_bPlayForward) == 0x000030, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::K2Node_Event_bPlayForward' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, K2Node_Event_IntensityTransition) == 0x000031, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::K2Node_Event_IntensityTransition' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_Not_PreBool_ReturnValue_1) == 0x000033, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, K2Node_Event_LoadedBackgroundTexture) == 0x000038, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::K2Node_Event_LoadedBackgroundTexture' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, K2Node_Event_BackgroundInfo) == 0x000040, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::K2Node_Event_BackgroundInfo' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, K2Node_Event_bShowFloor) == 0x0000A0, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::K2Node_Event_bShowFloor' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, K2Node_Event_bShowEffects) == 0x0000A1, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::K2Node_Event_bShowEffects' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, K2Node_Event_bShowItemDetails) == 0x0000A2, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::K2Node_Event_bShowItemDetails' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000A3, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, Temp_bool_Variable) == 0x0000A4, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_Lerp_ReturnValue_1) == 0x0000A8, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_Not_PreBool_ReturnValue_3) == 0x0000B0, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x0000B4, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_Not_PreBool_ReturnValue_4) == 0x0000B8, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, K2Node_Event_bToLowIntensity) == 0x0000B9, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::K2Node_Event_bToLowIntensity' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_Lerp_ReturnValue_2) == 0x0000C0, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_BooleanXOR_ReturnValue) == 0x0000C8, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_BooleanXOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast) == 0x0000D0, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1) == 0x0000D8, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_TransitionBackgroundForward_Fade_ImplicitCast) == 0x0000E0, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_TransitionBackgroundForward_Fade_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_TransitionBackgroundForward_Fade_ImplicitCast_1) == 0x0000E8, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_TransitionBackgroundForward_Fade_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_TransitionBackgroundForward_Forward_ImplicitCast) == 0x0000F0, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_TransitionBackgroundForward_Forward_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1) == 0x0000F8, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast) == 0x000100, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1) == 0x000108, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast) == 0x000110, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast_1) == 0x000118, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast) == 0x000120, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1) == 0x000128, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x000130, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000138, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_Lerp_Alpha_ImplicitCast_1) == 0x000140, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_Lerp_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_Lerp_Alpha_ImplicitCast_2) == 0x000148, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_Lerp_Alpha_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000150, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000154, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x000158, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_SetScalarParameterValue_Value_ImplicitCast_3) == 0x00015C, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_SetScalarParameterValue_Value_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_SetScalarParameterValue_Value_ImplicitCast_4) == 0x000160, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_SetScalarParameterValue_Value_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld, CallFunc_SetScalarParameterValue_Value_ImplicitCast_5) == 0x000164, "Member 'BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld::CallFunc_SetScalarParameterValue_Value_ImplicitCast_5' has a wrong offset!");

}
