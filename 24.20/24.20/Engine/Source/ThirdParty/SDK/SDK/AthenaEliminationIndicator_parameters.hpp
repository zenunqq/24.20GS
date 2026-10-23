#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	float                                         CallFunc_GetEliminationMarkerTTL_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_RetriggerableDelay_Duration_ImplicitCast;
};
static_assert(alignof(AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator) == 0x000008, "Wrong alignment on AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator");
static_assert(sizeof(AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator) == 0x000050, "Wrong size on AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator");
static_assert(offsetof(AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator, EntryPoint) == 0x000000, "Member 'AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000008, "Member 'AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator, CallFunc_GetEliminationMarkerTTL_ReturnValue) == 0x000018, "Member 'AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator::CallFunc_GetEliminationMarkerTTL_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator, CallFunc_GetEndTime_ReturnValue) == 0x00001C, "Member 'AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000030, "Member 'AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator, CallFunc_RetriggerableDelay_Duration_ImplicitCast) == 0x000048, "Member 'AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator::CallFunc_RetriggerableDelay_Duration_ImplicitCast' has a wrong offset!");

}
