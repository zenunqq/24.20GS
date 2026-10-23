#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GravityOverrideSettingStruct_structs.hpp"

namespace SDK::Params
{

struct F_MED_Blue_Jay_Summer_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(F_MED_Blue_Jay_Summer_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on F_MED_Blue_Jay_Summer_AnimBP_C_AnimGraph");
static_assert(sizeof(F_MED_Blue_Jay_Summer_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on F_MED_Blue_Jay_Summer_AnimBP_C_AnimGraph");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct F_MED_Blue_Jay_Summer_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;
};
static_assert(alignof(F_MED_Blue_Jay_Summer_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on F_MED_Blue_Jay_Summer_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(F_MED_Blue_Jay_Summer_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on F_MED_Blue_Jay_Summer_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

struct F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_DeltaTimeX;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	struct FVector                                CallFunc_Gravity_Override_State_Function_GravityOverride;
	class FString                                 CallFunc_Gravity_Override_State_Function_CurrentStateOut;
	struct FGravityOverrideSettingStruct          CallFunc_Gravity_Override_State_Function_GravityOverrideSettingsOut;
	class USkeletalMeshComponent*                 CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_Montage_IsPlaying_ReturnValue;
	uint8                                         Pad_AA[0x2];
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_B1[0x7];
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array;
	bool                                          CallFunc_BackpackItemDefinitionHasAnyMetaTag_ReturnValue;
	uint8                                         Pad_D1[0x7];
	double                                        K2Node_VariableSet_idlePlaying_ImplicitCast;
};
static_assert(alignof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP) == 0x000008, "Wrong alignment on F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP");
static_assert(sizeof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP) == 0x0000E0, "Wrong size on F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, EntryPoint) == 0x000000, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000008, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, CallFunc_Gravity_Override_State_Function_GravityOverride) == 0x000010, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::CallFunc_Gravity_Override_State_Function_GravityOverride' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, CallFunc_Gravity_Override_State_Function_CurrentStateOut) == 0x000028, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::CallFunc_Gravity_Override_State_Function_CurrentStateOut' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, CallFunc_Gravity_Override_State_Function_GravityOverrideSettingsOut) == 0x000038, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::CallFunc_Gravity_Override_State_Function_GravityOverrideSettingsOut' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue) == 0x0000A0, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, CallFunc_Montage_IsPlaying_ReturnValue) == 0x0000A9, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::CallFunc_Montage_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x0000AC, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, CallFunc_IsValid_ReturnValue_1) == 0x0000B0, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, CallFunc_GetAnimInstance_ReturnValue) == 0x0000B8, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, K2Node_MakeArray_Array) == 0x0000C0, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, CallFunc_BackpackItemDefinitionHasAnyMetaTag_ReturnValue) == 0x0000D0, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::CallFunc_BackpackItemDefinitionHasAnyMetaTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP, K2Node_VariableSet_idlePlaying_ImplicitCast) == 0x0000D8, "Member 'F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP::K2Node_VariableSet_idlePlaying_ImplicitCast' has a wrong offset!");

}
