#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct Fortnite_Base_Head_Export_Skeleton_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(Fortnite_Base_Head_Export_Skeleton_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Fortnite_Base_Head_Export_Skeleton_AnimBP_C_AnimGraph");
static_assert(sizeof(Fortnite_Base_Head_Export_Skeleton_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on Fortnite_Base_Head_Export_Skeleton_AnimBP_C_AnimGraph");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct Fortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TMap<class FName, class FString>              K2Node_MakeCurveExpressionMap_Map;
	bool                                          CallFunc_GetPlaylistUsesCustomCharacterParts_ReturnValue;
	uint8                                         Pad_59[0x7];
	class USkeletalMeshComponent*                 CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;
};
static_assert(alignof(Fortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP) == 0x000008, "Wrong alignment on Fortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP");
static_assert(sizeof(Fortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP) == 0x000068, "Wrong size on Fortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP, EntryPoint) == 0x000000, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP, K2Node_MakeCurveExpressionMap_Map) == 0x000008, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP::K2Node_MakeCurveExpressionMap_Map' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP, CallFunc_GetPlaylistUsesCustomCharacterParts_ReturnValue) == 0x000058, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP::CallFunc_GetPlaylistUsesCustomCharacterParts_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP, CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue) == 0x000060, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP::CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue' has a wrong offset!");

}
