#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct CameraAnimationTransition_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_5[0xB];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	uint8                                         Pad_72[0xE];
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;
	double                                        K2Node_VariableSet_FOVPostion2_ImplicitCast;
	double                                        K2Node_VariableSet_FOVPostion1_ImplicitCast;
};
static_assert(alignof(CameraAnimationTransition_C_UserConstructionScript) == 0x000010, "Wrong alignment on CameraAnimationTransition_C_UserConstructionScript");
static_assert(sizeof(CameraAnimationTransition_C_UserConstructionScript) == 0x0000F0, "Wrong size on CameraAnimationTransition_C_UserConstructionScript");
static_assert(offsetof(CameraAnimationTransition_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'CameraAnimationTransition_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'CameraAnimationTransition_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_2) == 0x000002, "Member 'CameraAnimationTransition_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_3) == 0x000003, "Member 'CameraAnimationTransition_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_UserConstructionScript, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'CameraAnimationTransition_C_UserConstructionScript::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_UserConstructionScript, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'CameraAnimationTransition_C_UserConstructionScript::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_UserConstructionScript, CallFunc_BooleanAND_ReturnValue_1) == 0x000070, "Member 'CameraAnimationTransition_C_UserConstructionScript::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_UserConstructionScript, CallFunc_BooleanAND_ReturnValue_2) == 0x000071, "Member 'CameraAnimationTransition_C_UserConstructionScript::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_UserConstructionScript, CallFunc_GetTransform_ReturnValue_1) == 0x000080, "Member 'CameraAnimationTransition_C_UserConstructionScript::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_UserConstructionScript, K2Node_VariableSet_FOVPostion2_ImplicitCast) == 0x0000E0, "Member 'CameraAnimationTransition_C_UserConstructionScript::K2Node_VariableSet_FOVPostion2_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_UserConstructionScript, K2Node_VariableSet_FOVPostion1_ImplicitCast) == 0x0000E8, "Member 'CameraAnimationTransition_C_UserConstructionScript::K2Node_VariableSet_FOVPostion1_ImplicitCast' has a wrong offset!");

struct CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0xC];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	struct FTransform                             CallFunc_TLerp_ReturnValue;
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;
	uint8                                         Pad_211[0xF];
	struct FTransform                             CallFunc_TLerp_ReturnValue_1;
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult_1;
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	double                                        CallFunc_Lerp_ReturnValue;
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;
	float                                         CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast;
};
static_assert(alignof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition) == 0x000010, "Wrong alignment on CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition");
static_assert(sizeof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition) == 0x000380, "Wrong size on CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, EntryPoint) == 0x000000, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::EntryPoint' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_TLerp_ReturnValue) == 0x000070, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_TLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_GetTransform_ReturnValue_1) == 0x0000D0, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000130, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000210, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_TLerp_ReturnValue_1) == 0x000220, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_TLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_K2_SetActorTransform_SweepHitResult_1) == 0x000280, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_K2_SetActorTransform_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_K2_SetActorTransform_ReturnValue_1) == 0x000360, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_K2_SetActorTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_IsValid_ReturnValue) == 0x000361, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_IsValid_ReturnValue_1) == 0x000362, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_BooleanAND_ReturnValue) == 0x000363, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_IsValid_ReturnValue_2) == 0x000364, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_BooleanAND_ReturnValue_1) == 0x000365, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_IsValid_ReturnValue_3) == 0x000366, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_BooleanAND_ReturnValue_2) == 0x000367, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_Lerp_ReturnValue) == 0x000368, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000370, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition, CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast) == 0x000378, "Member 'CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition::CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast' has a wrong offset!");

}
