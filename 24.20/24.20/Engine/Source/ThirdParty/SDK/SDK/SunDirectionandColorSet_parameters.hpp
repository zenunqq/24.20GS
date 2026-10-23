#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct SunDirectionandColorSet_C_UserConstructionScript final
{
public:
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	uint8                                         Pad_3C[0x4];
	struct FVector                                CallFunc_Normal_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue_1;
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	double                                        CallFunc_MakeVector_X_ImplicitCast;
	double                                        CallFunc_MakeVector_Y_ImplicitCast;
	double                                        CallFunc_MakeVector_Z_ImplicitCast;
};
static_assert(alignof(SunDirectionandColorSet_C_UserConstructionScript) == 0x000008, "Wrong alignment on SunDirectionandColorSet_C_UserConstructionScript");
static_assert(sizeof(SunDirectionandColorSet_C_UserConstructionScript) == 0x0000C0, "Wrong size on SunDirectionandColorSet_C_UserConstructionScript");
static_assert(offsetof(SunDirectionandColorSet_C_UserConstructionScript, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000000, "Member 'SunDirectionandColorSet_C_UserConstructionScript::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_UserConstructionScript, CallFunc_GetForwardVector_ReturnValue) == 0x000018, "Member 'SunDirectionandColorSet_C_UserConstructionScript::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_UserConstructionScript, CallFunc_BreakRotator_Roll) == 0x000030, "Member 'SunDirectionandColorSet_C_UserConstructionScript::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_UserConstructionScript, CallFunc_BreakRotator_Pitch) == 0x000034, "Member 'SunDirectionandColorSet_C_UserConstructionScript::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_UserConstructionScript, CallFunc_BreakRotator_Yaw) == 0x000038, "Member 'SunDirectionandColorSet_C_UserConstructionScript::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_UserConstructionScript, CallFunc_Normal_ReturnValue) == 0x000040, "Member 'SunDirectionandColorSet_C_UserConstructionScript::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x000058, "Member 'SunDirectionandColorSet_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_UserConstructionScript, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000070, "Member 'SunDirectionandColorSet_C_UserConstructionScript::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_UserConstructionScript, CallFunc_Normal_ReturnValue_1) == 0x000080, "Member 'SunDirectionandColorSet_C_UserConstructionScript::CallFunc_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_UserConstructionScript, CallFunc_Conv_VectorToLinearColor_ReturnValue_1) == 0x000098, "Member 'SunDirectionandColorSet_C_UserConstructionScript::CallFunc_Conv_VectorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_UserConstructionScript, CallFunc_MakeVector_X_ImplicitCast) == 0x0000A8, "Member 'SunDirectionandColorSet_C_UserConstructionScript::CallFunc_MakeVector_X_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_UserConstructionScript, CallFunc_MakeVector_Y_ImplicitCast) == 0x0000B0, "Member 'SunDirectionandColorSet_C_UserConstructionScript::CallFunc_MakeVector_Y_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_UserConstructionScript, CallFunc_MakeVector_Z_ImplicitCast) == 0x0000B8, "Member 'SunDirectionandColorSet_C_UserConstructionScript::CallFunc_MakeVector_Z_ImplicitCast' has a wrong offset!");

struct SunDirectionandColorSet_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(SunDirectionandColorSet_C_ReceiveTick) == 0x000004, "Wrong alignment on SunDirectionandColorSet_C_ReceiveTick");
static_assert(sizeof(SunDirectionandColorSet_C_ReceiveTick) == 0x000004, "Wrong size on SunDirectionandColorSet_C_ReceiveTick");
static_assert(offsetof(SunDirectionandColorSet_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'SunDirectionandColorSet_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

struct SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_DeltaSeconds;
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;
	uint8                                         Pad_6C[0x4];
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue_1;
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	double                                        CallFunc_MakeVector_X_ImplicitCast;
	double                                        CallFunc_MakeVector_Y_ImplicitCast;
	double                                        CallFunc_MakeVector_Z_ImplicitCast;
};
static_assert(alignof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet) == 0x000008, "Wrong alignment on SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet");
static_assert(sizeof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet) == 0x0000C8, "Wrong size on SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, EntryPoint) == 0x000000, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, CallFunc_GetForwardVector_ReturnValue) == 0x000008, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000020, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, CallFunc_Normal_ReturnValue) == 0x000038, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, CallFunc_BreakRotator_Roll) == 0x000050, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, CallFunc_BreakRotator_Pitch) == 0x000054, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, CallFunc_BreakRotator_Yaw) == 0x000058, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x00005C, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, CallFunc_MakeVector_ReturnValue) == 0x000070, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, CallFunc_Normal_ReturnValue_1) == 0x000088, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::CallFunc_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, CallFunc_Conv_VectorToLinearColor_ReturnValue_1) == 0x0000A0, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::CallFunc_Conv_VectorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, CallFunc_MakeVector_X_ImplicitCast) == 0x0000B0, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::CallFunc_MakeVector_X_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, CallFunc_MakeVector_Y_ImplicitCast) == 0x0000B8, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::CallFunc_MakeVector_Y_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet, CallFunc_MakeVector_Z_ImplicitCast) == 0x0000C0, "Member 'SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet::CallFunc_MakeVector_Z_ImplicitCast' has a wrong offset!");

}
