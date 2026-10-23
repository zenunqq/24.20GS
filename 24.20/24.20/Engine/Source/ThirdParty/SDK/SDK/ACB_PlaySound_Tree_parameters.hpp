#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct ACB_PlaySound_Tree_C_ClusterSizeToTreeSize final
{
public:
	int32                                         ClusterSize;
	uint8                                         Pad_4[0x4];
	double                                        TreeSize;
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_2;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	int32                                         CallFunc_Clamp_ReturnValue;
	uint8                                         Pad_34[0x4];
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_3;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
};
static_assert(alignof(ACB_PlaySound_Tree_C_ClusterSizeToTreeSize) == 0x000008, "Wrong alignment on ACB_PlaySound_Tree_C_ClusterSizeToTreeSize");
static_assert(sizeof(ACB_PlaySound_Tree_C_ClusterSizeToTreeSize) == 0x000050, "Wrong size on ACB_PlaySound_Tree_C_ClusterSizeToTreeSize");
static_assert(offsetof(ACB_PlaySound_Tree_C_ClusterSizeToTreeSize, ClusterSize) == 0x000000, "Member 'ACB_PlaySound_Tree_C_ClusterSizeToTreeSize::ClusterSize' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ClusterSizeToTreeSize, TreeSize) == 0x000008, "Member 'ACB_PlaySound_Tree_C_ClusterSizeToTreeSize::TreeSize' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ClusterSizeToTreeSize, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000010, "Member 'ACB_PlaySound_Tree_C_ClusterSizeToTreeSize::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ClusterSizeToTreeSize, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000018, "Member 'ACB_PlaySound_Tree_C_ClusterSizeToTreeSize::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ClusterSizeToTreeSize, CallFunc_Conv_IntToDouble_ReturnValue_2) == 0x000020, "Member 'ACB_PlaySound_Tree_C_ClusterSizeToTreeSize::CallFunc_Conv_IntToDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ClusterSizeToTreeSize, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000028, "Member 'ACB_PlaySound_Tree_C_ClusterSizeToTreeSize::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ClusterSizeToTreeSize, CallFunc_Clamp_ReturnValue) == 0x000030, "Member 'ACB_PlaySound_Tree_C_ClusterSizeToTreeSize::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ClusterSizeToTreeSize, CallFunc_Conv_IntToDouble_ReturnValue_3) == 0x000038, "Member 'ACB_PlaySound_Tree_C_ClusterSizeToTreeSize::CallFunc_Conv_IntToDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ClusterSizeToTreeSize, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000040, "Member 'ACB_PlaySound_Tree_C_ClusterSizeToTreeSize::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ClusterSizeToTreeSize, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000048, "Member 'ACB_PlaySound_Tree_C_ClusterSizeToTreeSize::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");

struct ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UObject*                                K2Node_CustomEvent_Loaded;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UObject*                                Temp_object_Variable;
	class USoundBase*                             K2Node_DynamicCast_AsSound_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;
	uint8                                         Pad_2B[0x5];
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;
	struct FVector                                K2Node_Event_Position;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_5C[0x4];
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;
	float                                         CallFunc_AdjustVolume_AdjustVolumeDuration_ImplicitCast;
	float                                         CallFunc_FadeOut_FadeOutDuration_ImplicitCast;
};
static_assert(alignof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree) == 0x000008, "Wrong alignment on ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree");
static_assert(sizeof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree) == 0x000148, "Wrong size on ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree");
static_assert(offsetof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree, EntryPoint) == 0x000000, "Member 'ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree::EntryPoint' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree, Temp_object_Variable) == 0x000018, "Member 'ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree, K2Node_DynamicCast_AsSound_Base) == 0x000020, "Member 'ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree::K2Node_DynamicCast_AsSound_Base' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x00002A, "Member 'ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000030, "Member 'ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree, K2Node_Event_Position) == 0x000038, "Member 'ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree::K2Node_Event_Position' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000060, "Member 'ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree, CallFunc_AdjustVolume_AdjustVolumeDuration_ImplicitCast) == 0x000140, "Member 'ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree::CallFunc_AdjustVolume_AdjustVolumeDuration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree, CallFunc_FadeOut_FadeOutDuration_ImplicitCast) == 0x000144, "Member 'ACB_PlaySound_Tree_C_ExecuteUbergraph_ACB_PlaySound_Tree::CallFunc_FadeOut_FadeOutDuration_ImplicitCast' has a wrong offset!");

struct ACB_PlaySound_Tree_C_GetRandomOneshotTime final
{
public:
	double                                        ReturnValue;
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
};
static_assert(alignof(ACB_PlaySound_Tree_C_GetRandomOneshotTime) == 0x000008, "Wrong alignment on ACB_PlaySound_Tree_C_GetRandomOneshotTime");
static_assert(sizeof(ACB_PlaySound_Tree_C_GetRandomOneshotTime) == 0x000020, "Wrong size on ACB_PlaySound_Tree_C_GetRandomOneshotTime");
static_assert(offsetof(ACB_PlaySound_Tree_C_GetRandomOneshotTime, ReturnValue) == 0x000000, "Member 'ACB_PlaySound_Tree_C_GetRandomOneshotTime::ReturnValue' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_GetRandomOneshotTime, CallFunc_BreakVector2D_X) == 0x000008, "Member 'ACB_PlaySound_Tree_C_GetRandomOneshotTime::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_GetRandomOneshotTime, CallFunc_BreakVector2D_Y) == 0x000010, "Member 'ACB_PlaySound_Tree_C_GetRandomOneshotTime::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_GetRandomOneshotTime, CallFunc_RandomFloatInRange_ReturnValue) == 0x000018, "Member 'ACB_PlaySound_Tree_C_GetRandomOneshotTime::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");

struct ACB_PlaySound_Tree_C_OnLoaded_C8B80DC04C1A324F6D4AB5A27450C3D3 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(ACB_PlaySound_Tree_C_OnLoaded_C8B80DC04C1A324F6D4AB5A27450C3D3) == 0x000008, "Wrong alignment on ACB_PlaySound_Tree_C_OnLoaded_C8B80DC04C1A324F6D4AB5A27450C3D3");
static_assert(sizeof(ACB_PlaySound_Tree_C_OnLoaded_C8B80DC04C1A324F6D4AB5A27450C3D3) == 0x000008, "Wrong size on ACB_PlaySound_Tree_C_OnLoaded_C8B80DC04C1A324F6D4AB5A27450C3D3");
static_assert(offsetof(ACB_PlaySound_Tree_C_OnLoaded_C8B80DC04C1A324F6D4AB5A27450C3D3, Loaded) == 0x000000, "Member 'ACB_PlaySound_Tree_C_OnLoaded_C8B80DC04C1A324F6D4AB5A27450C3D3::Loaded' has a wrong offset!");

struct ACB_PlaySound_Tree_C_OnPositionUpdated final
{
public:
	struct FVector                                Position_0;
};
static_assert(alignof(ACB_PlaySound_Tree_C_OnPositionUpdated) == 0x000008, "Wrong alignment on ACB_PlaySound_Tree_C_OnPositionUpdated");
static_assert(sizeof(ACB_PlaySound_Tree_C_OnPositionUpdated) == 0x000018, "Wrong size on ACB_PlaySound_Tree_C_OnPositionUpdated");
static_assert(offsetof(ACB_PlaySound_Tree_C_OnPositionUpdated, Position_0) == 0x000000, "Member 'ACB_PlaySound_Tree_C_OnPositionUpdated::Position_0' has a wrong offset!");

struct ACB_PlaySound_Tree_C_QueueRandomOneshot final
{
public:
	double                                        CallFunc_GetRandomOneshotTime_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_9[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(ACB_PlaySound_Tree_C_QueueRandomOneshot) == 0x000008, "Wrong alignment on ACB_PlaySound_Tree_C_QueueRandomOneshot");
static_assert(sizeof(ACB_PlaySound_Tree_C_QueueRandomOneshot) == 0x000028, "Wrong size on ACB_PlaySound_Tree_C_QueueRandomOneshot");
static_assert(offsetof(ACB_PlaySound_Tree_C_QueueRandomOneshot, CallFunc_GetRandomOneshotTime_ReturnValue) == 0x000000, "Member 'ACB_PlaySound_Tree_C_QueueRandomOneshot::CallFunc_GetRandomOneshotTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_QueueRandomOneshot, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ACB_PlaySound_Tree_C_QueueRandomOneshot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_QueueRandomOneshot, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'ACB_PlaySound_Tree_C_QueueRandomOneshot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_QueueRandomOneshot, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'ACB_PlaySound_Tree_C_QueueRandomOneshot::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ACB_PlaySound_Tree_C_QueueRandomOneshot, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000020, "Member 'ACB_PlaySound_Tree_C_QueueRandomOneshot::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

}
