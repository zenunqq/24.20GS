#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

struct FAnimNode_RemapCurvesFromMesh final : public FAnimNode_Base
{
public:
	struct FPoseLink                              SourcePose;
	TWeakObjectPtr<class USkeletalMeshComponent>  SourceMeshComponent;
	bool                                          bUseAttachedParent;
	uint8                                         Pad_29[0x7];
	TMap<class FName, class FString>              CurveExpressions;
	bool                                          bExpressionsImmutable;
	uint8                                         Pad_81[0x11F];
};
static_assert(alignof(FAnimNode_RemapCurvesFromMesh) == 0x000008, "Wrong alignment on FAnimNode_RemapCurvesFromMesh");
static_assert(sizeof(FAnimNode_RemapCurvesFromMesh) == 0x0001A0, "Wrong size on FAnimNode_RemapCurvesFromMesh");
static_assert(offsetof(FAnimNode_RemapCurvesFromMesh, SourcePose) == 0x000010, "Member 'FAnimNode_RemapCurvesFromMesh::SourcePose' has a wrong offset!");
static_assert(offsetof(FAnimNode_RemapCurvesFromMesh, SourceMeshComponent) == 0x000020, "Member 'FAnimNode_RemapCurvesFromMesh::SourceMeshComponent' has a wrong offset!");
static_assert(offsetof(FAnimNode_RemapCurvesFromMesh, bUseAttachedParent) == 0x000028, "Member 'FAnimNode_RemapCurvesFromMesh::bUseAttachedParent' has a wrong offset!");
static_assert(offsetof(FAnimNode_RemapCurvesFromMesh, CurveExpressions) == 0x000030, "Member 'FAnimNode_RemapCurvesFromMesh::CurveExpressions' has a wrong offset!");
static_assert(offsetof(FAnimNode_RemapCurvesFromMesh, bExpressionsImmutable) == 0x000080, "Member 'FAnimNode_RemapCurvesFromMesh::bExpressionsImmutable' has a wrong offset!");

}
