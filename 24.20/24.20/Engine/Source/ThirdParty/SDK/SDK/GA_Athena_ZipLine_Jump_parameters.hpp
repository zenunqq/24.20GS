#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump final
{
public:
	int32                                         EntryPoint;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_9[0x7];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x3];
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue;
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	double                                        CallFunc_BreakVector_X_2;
	double                                        CallFunc_BreakVector_Y_2;
	double                                        CallFunc_BreakVector_Z_2;
	struct FVector                                CallFunc_GetVelocity_ReturnValue_1;
	double                                        CallFunc_VSizeSquared_ReturnValue;
	double                                        CallFunc_BreakVector_X_3;
	double                                        CallFunc_BreakVector_Y_3;
	double                                        CallFunc_BreakVector_Z_3;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_12A[0x2];
	float                                         CallFunc_GetValueAtLevel_ReturnValue_2;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;
	double                                        CallFunc_Multiply_VectorFloat_B_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Multiply_VectorFloat_B_ImplicitCast_1;
	double                                        CallFunc_MakeVector_Z_ImplicitCast;
	double                                        CallFunc_MakeVector_Z_ImplicitCast_1;
};
static_assert(alignof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump) == 0x000008, "Wrong alignment on GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump");
static_assert(sizeof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump) == 0x000190, "Wrong size on GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, EntryPoint) == 0x000000, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_GetValueAtLevel_ReturnValue) == 0x000004, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, K2Node_Event_bWasCancelled) == 0x000008, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000010, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000018, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x000024, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_BreakVector_X) == 0x000028, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_BreakVector_Y) == 0x000030, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_BreakVector_Z) == 0x000038, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_MakeVector_ReturnValue) == 0x000048, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_Normal_ReturnValue) == 0x000060, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_GetVelocity_ReturnValue) == 0x000078, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000090, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0000A8, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_BreakVector_X_1) == 0x0000C0, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_BreakVector_Y_1) == 0x0000C8, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_BreakVector_Z_1) == 0x0000D0, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_BreakVector_X_2) == 0x0000D8, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_BreakVector_Y_2) == 0x0000E0, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_BreakVector_Z_2) == 0x0000E8, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_GetVelocity_ReturnValue_1) == 0x0000F0, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_GetVelocity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_VSizeSquared_ReturnValue) == 0x000108, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_VSizeSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_BreakVector_X_3) == 0x000110, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_BreakVector_Y_3) == 0x000118, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_BreakVector_Z_3) == 0x000120, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000128, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000129, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_GetValueAtLevel_ReturnValue_2) == 0x00012C, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_GetValueAtLevel_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_MakeVector_ReturnValue_1) == 0x000130, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_MakeVector_ReturnValue_2) == 0x000148, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_Multiply_VectorFloat_B_ImplicitCast) == 0x000160, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_Multiply_VectorFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000168, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000170, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_Multiply_VectorFloat_B_ImplicitCast_1) == 0x000178, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_Multiply_VectorFloat_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_MakeVector_Z_ImplicitCast) == 0x000180, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_MakeVector_Z_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump, CallFunc_MakeVector_Z_ImplicitCast_1) == 0x000188, "Member 'GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump::CallFunc_MakeVector_Z_ImplicitCast_1' has a wrong offset!");

struct GA_Athena_ZipLine_Jump_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Athena_ZipLine_Jump_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_ZipLine_Jump_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_ZipLine_Jump_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_ZipLine_Jump_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_ZipLine_Jump_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_ZipLine_Jump_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
