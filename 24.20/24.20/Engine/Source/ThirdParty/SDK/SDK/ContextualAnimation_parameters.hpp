#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ContextualAnimation_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct ContextualAnimActorInterface_GetMesh final
{
public:
	class USkeletalMeshComponent*                 ReturnValue;
};
static_assert(alignof(ContextualAnimActorInterface_GetMesh) == 0x000008, "Wrong alignment on ContextualAnimActorInterface_GetMesh");
static_assert(sizeof(ContextualAnimActorInterface_GetMesh) == 0x000008, "Wrong size on ContextualAnimActorInterface_GetMesh");
static_assert(offsetof(ContextualAnimActorInterface_GetMesh, ReturnValue) == 0x000000, "Member 'ContextualAnimActorInterface_GetMesh::ReturnValue' has a wrong offset!");

struct ContextualAnimManager_GetContextualAnimManager final
{
public:
	class UObject*                                WorldContextObject;
	class UContextualAnimManager*                 ReturnValue;
};
static_assert(alignof(ContextualAnimManager_GetContextualAnimManager) == 0x000008, "Wrong alignment on ContextualAnimManager_GetContextualAnimManager");
static_assert(sizeof(ContextualAnimManager_GetContextualAnimManager) == 0x000010, "Wrong size on ContextualAnimManager_GetContextualAnimManager");
static_assert(offsetof(ContextualAnimManager_GetContextualAnimManager, WorldContextObject) == 0x000000, "Member 'ContextualAnimManager_GetContextualAnimManager::WorldContextObject' has a wrong offset!");
static_assert(offsetof(ContextualAnimManager_GetContextualAnimManager, ReturnValue) == 0x000008, "Member 'ContextualAnimManager_GetContextualAnimManager::ReturnValue' has a wrong offset!");

struct ContextualAnimManager_BP_TryStartScene final
{
public:
	const class UContextualAnimSceneAsset*        SceneAsset;
	struct FContextualAnimStartSceneParams        Params_0;
	class UContextualAnimSceneInstance*           ReturnValue;
};
static_assert(alignof(ContextualAnimManager_BP_TryStartScene) == 0x000008, "Wrong alignment on ContextualAnimManager_BP_TryStartScene");
static_assert(sizeof(ContextualAnimManager_BP_TryStartScene) == 0x000078, "Wrong size on ContextualAnimManager_BP_TryStartScene");
static_assert(offsetof(ContextualAnimManager_BP_TryStartScene, SceneAsset) == 0x000000, "Member 'ContextualAnimManager_BP_TryStartScene::SceneAsset' has a wrong offset!");
static_assert(offsetof(ContextualAnimManager_BP_TryStartScene, Params_0) == 0x000008, "Member 'ContextualAnimManager_BP_TryStartScene::Params_0' has a wrong offset!");
static_assert(offsetof(ContextualAnimManager_BP_TryStartScene, ReturnValue) == 0x000070, "Member 'ContextualAnimManager_BP_TryStartScene::ReturnValue' has a wrong offset!");

struct ContextualAnimManager_GetSceneWithActor final
{
public:
	class AActor*                                 Actor;
	class UContextualAnimSceneInstance*           ReturnValue;
};
static_assert(alignof(ContextualAnimManager_GetSceneWithActor) == 0x000008, "Wrong alignment on ContextualAnimManager_GetSceneWithActor");
static_assert(sizeof(ContextualAnimManager_GetSceneWithActor) == 0x000010, "Wrong size on ContextualAnimManager_GetSceneWithActor");
static_assert(offsetof(ContextualAnimManager_GetSceneWithActor, Actor) == 0x000000, "Member 'ContextualAnimManager_GetSceneWithActor::Actor' has a wrong offset!");
static_assert(offsetof(ContextualAnimManager_GetSceneWithActor, ReturnValue) == 0x000008, "Member 'ContextualAnimManager_GetSceneWithActor::ReturnValue' has a wrong offset!");

struct ContextualAnimManager_OnSceneInstanceEnded final
{
public:
	class UContextualAnimSceneInstance*           SceneInstance;
};
static_assert(alignof(ContextualAnimManager_OnSceneInstanceEnded) == 0x000008, "Wrong alignment on ContextualAnimManager_OnSceneInstanceEnded");
static_assert(sizeof(ContextualAnimManager_OnSceneInstanceEnded) == 0x000008, "Wrong size on ContextualAnimManager_OnSceneInstanceEnded");
static_assert(offsetof(ContextualAnimManager_OnSceneInstanceEnded, SceneInstance) == 0x000000, "Member 'ContextualAnimManager_OnSceneInstanceEnded::SceneInstance' has a wrong offset!");

struct ContextualAnimManager_TryStopSceneWithActor final
{
public:
	class AActor*                                 Actor;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(ContextualAnimManager_TryStopSceneWithActor) == 0x000008, "Wrong alignment on ContextualAnimManager_TryStopSceneWithActor");
static_assert(sizeof(ContextualAnimManager_TryStopSceneWithActor) == 0x000010, "Wrong size on ContextualAnimManager_TryStopSceneWithActor");
static_assert(offsetof(ContextualAnimManager_TryStopSceneWithActor, Actor) == 0x000000, "Member 'ContextualAnimManager_TryStopSceneWithActor::Actor' has a wrong offset!");
static_assert(offsetof(ContextualAnimManager_TryStopSceneWithActor, ReturnValue) == 0x000008, "Member 'ContextualAnimManager_TryStopSceneWithActor::ReturnValue' has a wrong offset!");

struct ContextualAnimManager_IsActorInAnyScene final
{
public:
	class AActor*                                 Actor;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(ContextualAnimManager_IsActorInAnyScene) == 0x000008, "Wrong alignment on ContextualAnimManager_IsActorInAnyScene");
static_assert(sizeof(ContextualAnimManager_IsActorInAnyScene) == 0x000010, "Wrong size on ContextualAnimManager_IsActorInAnyScene");
static_assert(offsetof(ContextualAnimManager_IsActorInAnyScene, Actor) == 0x000000, "Member 'ContextualAnimManager_IsActorInAnyScene::Actor' has a wrong offset!");
static_assert(offsetof(ContextualAnimManager_IsActorInAnyScene, ReturnValue) == 0x000008, "Member 'ContextualAnimManager_IsActorInAnyScene::ReturnValue' has a wrong offset!");

struct ContextualAnimSceneActorComponent_LateJoinContextualAnimScene final
{
public:
	class AActor*                                 Actor;
	class FName                                   Role;
	bool                                          ReturnValue;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(ContextualAnimSceneActorComponent_LateJoinContextualAnimScene) == 0x000008, "Wrong alignment on ContextualAnimSceneActorComponent_LateJoinContextualAnimScene");
static_assert(sizeof(ContextualAnimSceneActorComponent_LateJoinContextualAnimScene) == 0x000010, "Wrong size on ContextualAnimSceneActorComponent_LateJoinContextualAnimScene");
static_assert(offsetof(ContextualAnimSceneActorComponent_LateJoinContextualAnimScene, Actor) == 0x000000, "Member 'ContextualAnimSceneActorComponent_LateJoinContextualAnimScene::Actor' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneActorComponent_LateJoinContextualAnimScene, Role) == 0x000008, "Member 'ContextualAnimSceneActorComponent_LateJoinContextualAnimScene::Role' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneActorComponent_LateJoinContextualAnimScene, ReturnValue) == 0x00000C, "Member 'ContextualAnimSceneActorComponent_LateJoinContextualAnimScene::ReturnValue' has a wrong offset!");

struct ContextualAnimSceneActorComponent_OnJoinedScene final
{
public:
	struct FContextualAnimSceneBindings           InBindings;
};
static_assert(alignof(ContextualAnimSceneActorComponent_OnJoinedScene) == 0x000008, "Wrong alignment on ContextualAnimSceneActorComponent_OnJoinedScene");
static_assert(sizeof(ContextualAnimSceneActorComponent_OnJoinedScene) == 0x000028, "Wrong size on ContextualAnimSceneActorComponent_OnJoinedScene");
static_assert(offsetof(ContextualAnimSceneActorComponent_OnJoinedScene, InBindings) == 0x000000, "Member 'ContextualAnimSceneActorComponent_OnJoinedScene::InBindings' has a wrong offset!");

struct ContextualAnimSceneActorComponent_OnMontageBlendingOut final
{
public:
	class UAnimMontage*                           Montage;
	bool                                          bInterrupted;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(ContextualAnimSceneActorComponent_OnMontageBlendingOut) == 0x000008, "Wrong alignment on ContextualAnimSceneActorComponent_OnMontageBlendingOut");
static_assert(sizeof(ContextualAnimSceneActorComponent_OnMontageBlendingOut) == 0x000010, "Wrong size on ContextualAnimSceneActorComponent_OnMontageBlendingOut");
static_assert(offsetof(ContextualAnimSceneActorComponent_OnMontageBlendingOut, Montage) == 0x000000, "Member 'ContextualAnimSceneActorComponent_OnMontageBlendingOut::Montage' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneActorComponent_OnMontageBlendingOut, bInterrupted) == 0x000008, "Member 'ContextualAnimSceneActorComponent_OnMontageBlendingOut::bInterrupted' has a wrong offset!");

struct ContextualAnimSceneActorComponent_OnTickPose final
{
public:
	class USkinnedMeshComponent*                  SkinnedMeshComponent;
	float                                         DeltaTime;
	bool                                          bNeedsValidRootMotion;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(ContextualAnimSceneActorComponent_OnTickPose) == 0x000008, "Wrong alignment on ContextualAnimSceneActorComponent_OnTickPose");
static_assert(sizeof(ContextualAnimSceneActorComponent_OnTickPose) == 0x000010, "Wrong size on ContextualAnimSceneActorComponent_OnTickPose");
static_assert(offsetof(ContextualAnimSceneActorComponent_OnTickPose, SkinnedMeshComponent) == 0x000000, "Member 'ContextualAnimSceneActorComponent_OnTickPose::SkinnedMeshComponent' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneActorComponent_OnTickPose, DeltaTime) == 0x000008, "Member 'ContextualAnimSceneActorComponent_OnTickPose::DeltaTime' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneActorComponent_OnTickPose, bNeedsValidRootMotion) == 0x00000C, "Member 'ContextualAnimSceneActorComponent_OnTickPose::bNeedsValidRootMotion' has a wrong offset!");

struct ContextualAnimSceneActorComponent_ServerStartContextualAnimScene final
{
public:
	struct FContextualAnimSceneBindings           InBindings;
};
static_assert(alignof(ContextualAnimSceneActorComponent_ServerStartContextualAnimScene) == 0x000008, "Wrong alignment on ContextualAnimSceneActorComponent_ServerStartContextualAnimScene");
static_assert(sizeof(ContextualAnimSceneActorComponent_ServerStartContextualAnimScene) == 0x000028, "Wrong size on ContextualAnimSceneActorComponent_ServerStartContextualAnimScene");
static_assert(offsetof(ContextualAnimSceneActorComponent_ServerStartContextualAnimScene, InBindings) == 0x000000, "Member 'ContextualAnimSceneActorComponent_ServerStartContextualAnimScene::InBindings' has a wrong offset!");

struct ContextualAnimSceneActorComponent_StartContextualAnimScene final
{
public:
	struct FContextualAnimSceneBindings           InBindings;
	bool                                          ReturnValue;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(ContextualAnimSceneActorComponent_StartContextualAnimScene) == 0x000008, "Wrong alignment on ContextualAnimSceneActorComponent_StartContextualAnimScene");
static_assert(sizeof(ContextualAnimSceneActorComponent_StartContextualAnimScene) == 0x000030, "Wrong size on ContextualAnimSceneActorComponent_StartContextualAnimScene");
static_assert(offsetof(ContextualAnimSceneActorComponent_StartContextualAnimScene, InBindings) == 0x000000, "Member 'ContextualAnimSceneActorComponent_StartContextualAnimScene::InBindings' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneActorComponent_StartContextualAnimScene, ReturnValue) == 0x000028, "Member 'ContextualAnimSceneActorComponent_StartContextualAnimScene::ReturnValue' has a wrong offset!");

struct ContextualAnimSceneActorComponent_TransitionContextualAnimScene final
{
public:
	class FName                                   SectionName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(ContextualAnimSceneActorComponent_TransitionContextualAnimScene) == 0x000004, "Wrong alignment on ContextualAnimSceneActorComponent_TransitionContextualAnimScene");
static_assert(sizeof(ContextualAnimSceneActorComponent_TransitionContextualAnimScene) == 0x000008, "Wrong size on ContextualAnimSceneActorComponent_TransitionContextualAnimScene");
static_assert(offsetof(ContextualAnimSceneActorComponent_TransitionContextualAnimScene, SectionName) == 0x000000, "Member 'ContextualAnimSceneActorComponent_TransitionContextualAnimScene::SectionName' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneActorComponent_TransitionContextualAnimScene, ReturnValue) == 0x000004, "Member 'ContextualAnimSceneActorComponent_TransitionContextualAnimScene::ReturnValue' has a wrong offset!");

struct ContextualAnimSceneActorComponent_TransitionSingleActor final
{
public:
	int32                                         SectionIdx;
	int32                                         AnimSetIdx;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(ContextualAnimSceneActorComponent_TransitionSingleActor) == 0x000004, "Wrong alignment on ContextualAnimSceneActorComponent_TransitionSingleActor");
static_assert(sizeof(ContextualAnimSceneActorComponent_TransitionSingleActor) == 0x00000C, "Wrong size on ContextualAnimSceneActorComponent_TransitionSingleActor");
static_assert(offsetof(ContextualAnimSceneActorComponent_TransitionSingleActor, SectionIdx) == 0x000000, "Member 'ContextualAnimSceneActorComponent_TransitionSingleActor::SectionIdx' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneActorComponent_TransitionSingleActor, AnimSetIdx) == 0x000004, "Member 'ContextualAnimSceneActorComponent_TransitionSingleActor::AnimSetIdx' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneActorComponent_TransitionSingleActor, ReturnValue) == 0x000008, "Member 'ContextualAnimSceneActorComponent_TransitionSingleActor::ReturnValue' has a wrong offset!");

struct ContextualAnimSceneActorComponent_GetIKTargetByGoalName final
{
public:
	class FName                                   GoalName;
	uint8                                         Pad_4[0xC];
	struct FContextualAnimIKTarget                ReturnValue;
};
static_assert(alignof(ContextualAnimSceneActorComponent_GetIKTargetByGoalName) == 0x000010, "Wrong alignment on ContextualAnimSceneActorComponent_GetIKTargetByGoalName");
static_assert(sizeof(ContextualAnimSceneActorComponent_GetIKTargetByGoalName) == 0x000080, "Wrong size on ContextualAnimSceneActorComponent_GetIKTargetByGoalName");
static_assert(offsetof(ContextualAnimSceneActorComponent_GetIKTargetByGoalName, GoalName) == 0x000000, "Member 'ContextualAnimSceneActorComponent_GetIKTargetByGoalName::GoalName' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneActorComponent_GetIKTargetByGoalName, ReturnValue) == 0x000010, "Member 'ContextualAnimSceneActorComponent_GetIKTargetByGoalName::ReturnValue' has a wrong offset!");

struct ContextualAnimSceneActorComponent_GetIKTargets final
{
public:
	TArray<struct FContextualAnimIKTarget>        ReturnValue;
};
static_assert(alignof(ContextualAnimSceneActorComponent_GetIKTargets) == 0x000008, "Wrong alignment on ContextualAnimSceneActorComponent_GetIKTargets");
static_assert(sizeof(ContextualAnimSceneActorComponent_GetIKTargets) == 0x000010, "Wrong size on ContextualAnimSceneActorComponent_GetIKTargets");
static_assert(offsetof(ContextualAnimSceneActorComponent_GetIKTargets, ReturnValue) == 0x000000, "Member 'ContextualAnimSceneActorComponent_GetIKTargets::ReturnValue' has a wrong offset!");

struct ContextualAnimSceneAsset_BP_FindAnimationForRole final
{
public:
	int32                                         SectionIdx;
	int32                                         AnimSetIdx;
	class FName                                   Role;
	uint8                                         Pad_C[0x4];
	class UAnimSequenceBase*                      ReturnValue;
};
static_assert(alignof(ContextualAnimSceneAsset_BP_FindAnimationForRole) == 0x000008, "Wrong alignment on ContextualAnimSceneAsset_BP_FindAnimationForRole");
static_assert(sizeof(ContextualAnimSceneAsset_BP_FindAnimationForRole) == 0x000018, "Wrong size on ContextualAnimSceneAsset_BP_FindAnimationForRole");
static_assert(offsetof(ContextualAnimSceneAsset_BP_FindAnimationForRole, SectionIdx) == 0x000000, "Member 'ContextualAnimSceneAsset_BP_FindAnimationForRole::SectionIdx' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_FindAnimationForRole, AnimSetIdx) == 0x000004, "Member 'ContextualAnimSceneAsset_BP_FindAnimationForRole::AnimSetIdx' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_FindAnimationForRole, Role) == 0x000008, "Member 'ContextualAnimSceneAsset_BP_FindAnimationForRole::Role' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_FindAnimationForRole, ReturnValue) == 0x000010, "Member 'ContextualAnimSceneAsset_BP_FindAnimationForRole::ReturnValue' has a wrong offset!");

struct ContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation final
{
public:
	int32                                         SectionIdx;
	uint8                                         Pad_4[0x4];
	const class UAnimSequenceBase*                Animation;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(ContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation) == 0x000008, "Wrong alignment on ContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation");
static_assert(sizeof(ContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation) == 0x000018, "Wrong size on ContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation");
static_assert(offsetof(ContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation, SectionIdx) == 0x000000, "Member 'ContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation::SectionIdx' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation, Animation) == 0x000008, "Member 'ContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation::Animation' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation, ReturnValue) == 0x000010, "Member 'ContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation::ReturnValue' has a wrong offset!");

struct ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint final
{
public:
	int32                                         SectionIdx;
	int32                                         AnimSetIdx;
	class FName                                   Role;
	float                                         Time;
	struct FTransform                             ReturnValue;
};
static_assert(alignof(ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint) == 0x000010, "Wrong alignment on ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint");
static_assert(sizeof(ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint) == 0x000070, "Wrong size on ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint, SectionIdx) == 0x000000, "Member 'ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint::SectionIdx' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint, AnimSetIdx) == 0x000004, "Member 'ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint::AnimSetIdx' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint, Role) == 0x000008, "Member 'ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint::Role' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint, Time) == 0x00000C, "Member 'ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint::Time' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint, ReturnValue) == 0x000010, "Member 'ContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint::ReturnValue' has a wrong offset!");

struct ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime final
{
public:
	int32                                         SectionIdx;
	int32                                         AnimSetIdx;
	class FName                                   Role;
	class FName                                   trackName;
	float                                         Time;
	uint8                                         Pad_14[0xC];
	struct FTransform                             ReturnValue;
};
static_assert(alignof(ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime) == 0x000010, "Wrong alignment on ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime");
static_assert(sizeof(ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime) == 0x000080, "Wrong size on ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime, SectionIdx) == 0x000000, "Member 'ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime::SectionIdx' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime, AnimSetIdx) == 0x000004, "Member 'ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime::AnimSetIdx' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime, Role) == 0x000008, "Member 'ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime::Role' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime, trackName) == 0x00000C, "Member 'ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime::trackName' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime, Time) == 0x000010, "Member 'ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime::Time' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime, ReturnValue) == 0x000020, "Member 'ContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime::ReturnValue' has a wrong offset!");

struct ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection final
{
public:
	int32                                         SectionIdx;
	int32                                         AnimSetIdx;
	class FName                                   Role;
	class FName                                   WarpSectionName;
	float                                         OutStartTime;
	float                                         OutEndTime;
};
static_assert(alignof(ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection) == 0x000004, "Wrong alignment on ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection");
static_assert(sizeof(ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection) == 0x000018, "Wrong size on ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection, SectionIdx) == 0x000000, "Member 'ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection::SectionIdx' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection, AnimSetIdx) == 0x000004, "Member 'ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection::AnimSetIdx' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection, Role) == 0x000008, "Member 'ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection::Role' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection, WarpSectionName) == 0x00000C, "Member 'ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection::WarpSectionName' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection, OutStartTime) == 0x000010, "Member 'ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection::OutStartTime' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection, OutEndTime) == 0x000014, "Member 'ContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection::OutEndTime' has a wrong offset!");

struct ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole final
{
public:
	EContextualAnimPointType                      Type;
	uint8                                         Pad_1[0x3];
	int32                                         SectionIdx;
	uint8                                         Pad_8[0x8];
	struct FContextualAnimSceneBindingContext     Primary;
	TArray<struct FContextualAnimPoint>           outResult;
};
static_assert(alignof(ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole) == 0x000010, "Wrong alignment on ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole");
static_assert(sizeof(ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole) == 0x0000F0, "Wrong size on ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole");
static_assert(offsetof(ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole, Type) == 0x000000, "Member 'ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole::Type' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole, SectionIdx) == 0x000004, "Member 'ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole::SectionIdx' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole, Primary) == 0x000010, "Member 'ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole::Primary' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole, outResult) == 0x0000E0, "Member 'ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole::outResult' has a wrong offset!");

struct ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria final
{
public:
	EContextualAnimPointType                      Type;
	uint8                                         Pad_1[0x3];
	int32                                         SectionIdx;
	uint8                                         Pad_8[0x8];
	struct FContextualAnimSceneBindingContext     Primary;
	struct FContextualAnimSceneBindingContext     Querier;
	EContextualAnimCriterionToConsider            CriterionToConsider;
	uint8                                         Pad_1B1[0x7];
	TArray<struct FContextualAnimPoint>           outResult;
	uint8                                         Pad_1C8[0x8];
};
static_assert(alignof(ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria) == 0x000010, "Wrong alignment on ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria");
static_assert(sizeof(ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria) == 0x0001D0, "Wrong size on ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria");
static_assert(offsetof(ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria, Type) == 0x000000, "Member 'ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria::Type' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria, SectionIdx) == 0x000004, "Member 'ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria::SectionIdx' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria, Primary) == 0x000010, "Member 'ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria::Primary' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria, Querier) == 0x0000E0, "Member 'ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria::Querier' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria, CriterionToConsider) == 0x0001B0, "Member 'ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria::CriterionToConsider' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria, outResult) == 0x0001B8, "Member 'ContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria::outResult' has a wrong offset!");

struct ContextualAnimSceneAsset_GetRoles final
{
public:
	TArray<class FName>                           ReturnValue;
};
static_assert(alignof(ContextualAnimSceneAsset_GetRoles) == 0x000008, "Wrong alignment on ContextualAnimSceneAsset_GetRoles");
static_assert(sizeof(ContextualAnimSceneAsset_GetRoles) == 0x000010, "Wrong size on ContextualAnimSceneAsset_GetRoles");
static_assert(offsetof(ContextualAnimSceneAsset_GetRoles, ReturnValue) == 0x000000, "Member 'ContextualAnimSceneAsset_GetRoles::ReturnValue' has a wrong offset!");

struct ContextualAnimSceneAsset_Query final
{
public:
	class FName                                   Role;
	uint8                                         Pad_4[0xC];
	struct FContextualAnimQueryResult             outResult;
	struct FContextualAnimQueryParams             QueryParams;
	struct FTransform                             ToWorldTransform;
	bool                                          ReturnValue;
	uint8                                         Pad_1D1[0xF];
};
static_assert(alignof(ContextualAnimSceneAsset_Query) == 0x000010, "Wrong alignment on ContextualAnimSceneAsset_Query");
static_assert(sizeof(ContextualAnimSceneAsset_Query) == 0x0001E0, "Wrong size on ContextualAnimSceneAsset_Query");
static_assert(offsetof(ContextualAnimSceneAsset_Query, Role) == 0x000000, "Member 'ContextualAnimSceneAsset_Query::Role' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_Query, outResult) == 0x000010, "Member 'ContextualAnimSceneAsset_Query::outResult' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_Query, QueryParams) == 0x0000F0, "Member 'ContextualAnimSceneAsset_Query::QueryParams' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_Query, ToWorldTransform) == 0x000170, "Member 'ContextualAnimSceneAsset_Query::ToWorldTransform' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneAsset_Query, ReturnValue) == 0x0001D0, "Member 'ContextualAnimSceneAsset_Query::ReturnValue' has a wrong offset!");

struct ContextualAnimSceneInstance_OnMontageBlendingOut final
{
public:
	class UAnimMontage*                           Montage;
	bool                                          bInterrupted;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(ContextualAnimSceneInstance_OnMontageBlendingOut) == 0x000008, "Wrong alignment on ContextualAnimSceneInstance_OnMontageBlendingOut");
static_assert(sizeof(ContextualAnimSceneInstance_OnMontageBlendingOut) == 0x000010, "Wrong size on ContextualAnimSceneInstance_OnMontageBlendingOut");
static_assert(offsetof(ContextualAnimSceneInstance_OnMontageBlendingOut, Montage) == 0x000000, "Member 'ContextualAnimSceneInstance_OnMontageBlendingOut::Montage' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneInstance_OnMontageBlendingOut, bInterrupted) == 0x000008, "Member 'ContextualAnimSceneInstance_OnMontageBlendingOut::bInterrupted' has a wrong offset!");

struct ContextualAnimSceneInstance_OnNotifyBeginReceived final
{
public:
	class FName                                   NotifyName;
	uint8                                         Pad_4[0x4];
	struct FBranchingPointNotifyPayload           BranchingPointNotifyPayload;
};
static_assert(alignof(ContextualAnimSceneInstance_OnNotifyBeginReceived) == 0x000008, "Wrong alignment on ContextualAnimSceneInstance_OnNotifyBeginReceived");
static_assert(sizeof(ContextualAnimSceneInstance_OnNotifyBeginReceived) == 0x000028, "Wrong size on ContextualAnimSceneInstance_OnNotifyBeginReceived");
static_assert(offsetof(ContextualAnimSceneInstance_OnNotifyBeginReceived, NotifyName) == 0x000000, "Member 'ContextualAnimSceneInstance_OnNotifyBeginReceived::NotifyName' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneInstance_OnNotifyBeginReceived, BranchingPointNotifyPayload) == 0x000008, "Member 'ContextualAnimSceneInstance_OnNotifyBeginReceived::BranchingPointNotifyPayload' has a wrong offset!");

struct ContextualAnimSceneInstance_OnNotifyEndReceived final
{
public:
	class FName                                   NotifyName;
	uint8                                         Pad_4[0x4];
	struct FBranchingPointNotifyPayload           BranchingPointNotifyPayload;
};
static_assert(alignof(ContextualAnimSceneInstance_OnNotifyEndReceived) == 0x000008, "Wrong alignment on ContextualAnimSceneInstance_OnNotifyEndReceived");
static_assert(sizeof(ContextualAnimSceneInstance_OnNotifyEndReceived) == 0x000028, "Wrong size on ContextualAnimSceneInstance_OnNotifyEndReceived");
static_assert(offsetof(ContextualAnimSceneInstance_OnNotifyEndReceived, NotifyName) == 0x000000, "Member 'ContextualAnimSceneInstance_OnNotifyEndReceived::NotifyName' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneInstance_OnNotifyEndReceived, BranchingPointNotifyPayload) == 0x000008, "Member 'ContextualAnimSceneInstance_OnNotifyEndReceived::BranchingPointNotifyPayload' has a wrong offset!");

struct ContextualAnimSceneInstance_GetActorByRole final
{
public:
	class FName                                   Role;
	uint8                                         Pad_4[0x4];
	class AActor*                                 ReturnValue;
};
static_assert(alignof(ContextualAnimSceneInstance_GetActorByRole) == 0x000008, "Wrong alignment on ContextualAnimSceneInstance_GetActorByRole");
static_assert(sizeof(ContextualAnimSceneInstance_GetActorByRole) == 0x000010, "Wrong size on ContextualAnimSceneInstance_GetActorByRole");
static_assert(offsetof(ContextualAnimSceneInstance_GetActorByRole, Role) == 0x000000, "Member 'ContextualAnimSceneInstance_GetActorByRole::Role' has a wrong offset!");
static_assert(offsetof(ContextualAnimSceneInstance_GetActorByRole, ReturnValue) == 0x000008, "Member 'ContextualAnimSceneInstance_GetActorByRole::ReturnValue' has a wrong offset!");

struct ContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition final
{
public:
	struct FContextualAnimSceneBindingContext     Primary;
	struct FContextualAnimSceneBindingContext     Querier;
	bool                                          ReturnValue;
	uint8                                         Pad_1A1[0xF];
};
static_assert(alignof(ContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition) == 0x000010, "Wrong alignment on ContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition");
static_assert(sizeof(ContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition) == 0x0001B0, "Wrong size on ContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition");
static_assert(offsetof(ContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition, Primary) == 0x000000, "Member 'ContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition::Primary' has a wrong offset!");
static_assert(offsetof(ContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition, Querier) == 0x0000D0, "Member 'ContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition::Querier' has a wrong offset!");
static_assert(offsetof(ContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition, ReturnValue) == 0x0001A0, "Member 'ContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition::ReturnValue' has a wrong offset!");

struct ContextualAnimSelectionCriterion_Blueprint_GetSceneAsset final
{
public:
	const class UContextualAnimSceneAsset*        ReturnValue;
};
static_assert(alignof(ContextualAnimSelectionCriterion_Blueprint_GetSceneAsset) == 0x000008, "Wrong alignment on ContextualAnimSelectionCriterion_Blueprint_GetSceneAsset");
static_assert(sizeof(ContextualAnimSelectionCriterion_Blueprint_GetSceneAsset) == 0x000008, "Wrong size on ContextualAnimSelectionCriterion_Blueprint_GetSceneAsset");
static_assert(offsetof(ContextualAnimSelectionCriterion_Blueprint_GetSceneAsset, ReturnValue) == 0x000000, "Member 'ContextualAnimSelectionCriterion_Blueprint_GetSceneAsset::ReturnValue' has a wrong offset!");

struct ContextualAnimTransition_CanEnterTransition final
{
public:
	const class UContextualAnimSceneInstance*     SceneInstance;
	class FName                                   FromSection;
	class FName                                   ToSection;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(ContextualAnimTransition_CanEnterTransition) == 0x000008, "Wrong alignment on ContextualAnimTransition_CanEnterTransition");
static_assert(sizeof(ContextualAnimTransition_CanEnterTransition) == 0x000018, "Wrong size on ContextualAnimTransition_CanEnterTransition");
static_assert(offsetof(ContextualAnimTransition_CanEnterTransition, SceneInstance) == 0x000000, "Member 'ContextualAnimTransition_CanEnterTransition::SceneInstance' has a wrong offset!");
static_assert(offsetof(ContextualAnimTransition_CanEnterTransition, FromSection) == 0x000008, "Member 'ContextualAnimTransition_CanEnterTransition::FromSection' has a wrong offset!");
static_assert(offsetof(ContextualAnimTransition_CanEnterTransition, ToSection) == 0x00000C, "Member 'ContextualAnimTransition_CanEnterTransition::ToSection' has a wrong offset!");
static_assert(offsetof(ContextualAnimTransition_CanEnterTransition, ReturnValue) == 0x000010, "Member 'ContextualAnimTransition_CanEnterTransition::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_CreateContextualAnimSceneBindings final
{
public:
	const class UContextualAnimSceneAsset*        SceneAsset;
	TMap<class FName, struct FContextualAnimSceneBindingContext> Params_0;
	struct FContextualAnimSceneBindings           OutBindings;
	bool                                          ReturnValue;
	uint8                                         Pad_81[0x7];
};
static_assert(alignof(ContextualAnimUtilities_BP_CreateContextualAnimSceneBindings) == 0x000008, "Wrong alignment on ContextualAnimUtilities_BP_CreateContextualAnimSceneBindings");
static_assert(sizeof(ContextualAnimUtilities_BP_CreateContextualAnimSceneBindings) == 0x000088, "Wrong size on ContextualAnimUtilities_BP_CreateContextualAnimSceneBindings");
static_assert(offsetof(ContextualAnimUtilities_BP_CreateContextualAnimSceneBindings, SceneAsset) == 0x000000, "Member 'ContextualAnimUtilities_BP_CreateContextualAnimSceneBindings::SceneAsset' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_CreateContextualAnimSceneBindings, Params_0) == 0x000008, "Member 'ContextualAnimUtilities_BP_CreateContextualAnimSceneBindings::Params_0' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_CreateContextualAnimSceneBindings, OutBindings) == 0x000058, "Member 'ContextualAnimUtilities_BP_CreateContextualAnimSceneBindings::OutBindings' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_CreateContextualAnimSceneBindings, ReturnValue) == 0x000080, "Member 'ContextualAnimUtilities_BP_CreateContextualAnimSceneBindings::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors final
{
public:
	const class UContextualAnimSceneAsset*        SceneAsset;
	uint8                                         Pad_8[0x8];
	struct FContextualAnimSceneBindingContext     Primary;
	struct FContextualAnimSceneBindingContext     Secondary;
	struct FContextualAnimSceneBindings           OutBindings;
	bool                                          ReturnValue;
	uint8                                         Pad_1D9[0x7];
};
static_assert(alignof(ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors");
static_assert(sizeof(ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors) == 0x0001E0, "Wrong size on ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors");
static_assert(offsetof(ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors, SceneAsset) == 0x000000, "Member 'ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors::SceneAsset' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors, Primary) == 0x000010, "Member 'ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors::Primary' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors, Secondary) == 0x0000E0, "Member 'ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors::Secondary' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors, OutBindings) == 0x0001B0, "Member 'ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors::OutBindings' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors, ReturnValue) == 0x0001D8, "Member 'ContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_DrawDebugPose final
{
public:
	const class UObject*                          WorldContextObject;
	const class UAnimSequenceBase*                Animation;
	float                                         Time;
	uint8                                         Pad_14[0xC];
	struct FTransform                             LocalToWorldTransform;
	struct FLinearColor                           Color;
	float                                         LifeTime;
	float                                         Thickness;
	uint8                                         Pad_98[0x8];
};
static_assert(alignof(ContextualAnimUtilities_BP_DrawDebugPose) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_DrawDebugPose");
static_assert(sizeof(ContextualAnimUtilities_BP_DrawDebugPose) == 0x0000A0, "Wrong size on ContextualAnimUtilities_BP_DrawDebugPose");
static_assert(offsetof(ContextualAnimUtilities_BP_DrawDebugPose, WorldContextObject) == 0x000000, "Member 'ContextualAnimUtilities_BP_DrawDebugPose::WorldContextObject' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_DrawDebugPose, Animation) == 0x000008, "Member 'ContextualAnimUtilities_BP_DrawDebugPose::Animation' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_DrawDebugPose, Time) == 0x000010, "Member 'ContextualAnimUtilities_BP_DrawDebugPose::Time' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_DrawDebugPose, LocalToWorldTransform) == 0x000020, "Member 'ContextualAnimUtilities_BP_DrawDebugPose::LocalToWorldTransform' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_DrawDebugPose, Color) == 0x000080, "Member 'ContextualAnimUtilities_BP_DrawDebugPose::Color' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_DrawDebugPose, LifeTime) == 0x000090, "Member 'ContextualAnimUtilities_BP_DrawDebugPose::LifeTime' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_DrawDebugPose, Thickness) == 0x000094, "Member 'ContextualAnimUtilities_BP_DrawDebugPose::Thickness' has a wrong offset!");

struct ContextualAnimUtilities_BP_Montage_GetSectionLength final
{
public:
	const class UAnimMontage*                     Montage;
	int32                                         SectionIndex;
	float                                         ReturnValue;
};
static_assert(alignof(ContextualAnimUtilities_BP_Montage_GetSectionLength) == 0x000008, "Wrong alignment on ContextualAnimUtilities_BP_Montage_GetSectionLength");
static_assert(sizeof(ContextualAnimUtilities_BP_Montage_GetSectionLength) == 0x000010, "Wrong size on ContextualAnimUtilities_BP_Montage_GetSectionLength");
static_assert(offsetof(ContextualAnimUtilities_BP_Montage_GetSectionLength, Montage) == 0x000000, "Member 'ContextualAnimUtilities_BP_Montage_GetSectionLength::Montage' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_Montage_GetSectionLength, SectionIndex) == 0x000008, "Member 'ContextualAnimUtilities_BP_Montage_GetSectionLength::SectionIndex' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_Montage_GetSectionLength, ReturnValue) == 0x00000C, "Member 'ContextualAnimUtilities_BP_Montage_GetSectionLength::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime final
{
public:
	const class UAnimMontage*                     Montage;
	int32                                         SectionIndex;
	float                                         OutStartTime;
	float                                         OutEndTime;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(ContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime) == 0x000008, "Wrong alignment on ContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime");
static_assert(sizeof(ContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime) == 0x000018, "Wrong size on ContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime");
static_assert(offsetof(ContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime, Montage) == 0x000000, "Member 'ContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime::Montage' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime, SectionIndex) == 0x000008, "Member 'ContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime::SectionIndex' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime, OutStartTime) == 0x00000C, "Member 'ContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime::OutStartTime' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime, OutEndTime) == 0x000010, "Member 'ContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime::OutEndTime' has a wrong offset!");

struct ContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos final
{
public:
	const class UAnimMontage*                     Montage;
	float                                         Position;
	float                                         ReturnValue;
};
static_assert(alignof(ContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos) == 0x000008, "Wrong alignment on ContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos");
static_assert(sizeof(ContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos) == 0x000010, "Wrong size on ContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos");
static_assert(offsetof(ContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos, Montage) == 0x000000, "Member 'ContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos::Montage' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos, Position) == 0x000008, "Member 'ContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos::Position' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos, ReturnValue) == 0x00000C, "Member 'ContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBinding_GetActor final
{
public:
	struct FContextualAnimSceneBinding            Binding;
	class AActor*                                 ReturnValue;
	uint8                                         Pad_E8[0x8];
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBinding_GetActor) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_SceneBinding_GetActor");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBinding_GetActor) == 0x0000F0, "Wrong size on ContextualAnimUtilities_BP_SceneBinding_GetActor");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBinding_GetActor, Binding) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBinding_GetActor::Binding' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBinding_GetActor, ReturnValue) == 0x0000E0, "Member 'ContextualAnimUtilities_BP_SceneBinding_GetActor::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding final
{
public:
	struct FContextualAnimSceneBindings           Bindings;
	uint8                                         Pad_28[0x8];
	struct FContextualAnimSceneBinding            Binding;
	const class UAnimSequenceBase*                ReturnValue;
	uint8                                         Pad_118[0x8];
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding) == 0x000120, "Wrong size on ContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding, Bindings) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding::Bindings' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding, Binding) == 0x000030, "Member 'ContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding::Binding' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding, ReturnValue) == 0x000110, "Member 'ContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding final
{
public:
	struct FContextualAnimSceneBindings           Bindings;
	uint8                                         Pad_28[0x8];
	struct FContextualAnimSceneBinding            Binding;
	class FName                                   ReturnValue;
	uint8                                         Pad_114[0xC];
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding) == 0x000120, "Wrong size on ContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding, Bindings) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding::Bindings' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding, Binding) == 0x000030, "Member 'ContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding::Binding' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding, ReturnValue) == 0x000110, "Member 'ContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh final
{
public:
	struct FContextualAnimSceneBinding            Binding;
	class USkeletalMeshComponent*                 ReturnValue;
	uint8                                         Pad_E8[0x8];
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh) == 0x0000F0, "Wrong size on ContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh, Binding) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh::Binding' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh, ReturnValue) == 0x0000E0, "Member 'ContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindingContext_GetActor final
{
public:
	struct FContextualAnimSceneBindingContext     BindingContext;
	class AActor*                                 ReturnValue;
	uint8                                         Pad_D8[0x8];
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindingContext_GetActor) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindingContext_GetActor");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindingContext_GetActor) == 0x0000E0, "Wrong size on ContextualAnimUtilities_BP_SceneBindingContext_GetActor");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindingContext_GetActor, BindingContext) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindingContext_GetActor::BindingContext' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindingContext_GetActor, ReturnValue) == 0x0000D0, "Member 'ContextualAnimUtilities_BP_SceneBindingContext_GetActor::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindingContext_GetTransform final
{
public:
	struct FContextualAnimSceneBindingContext     BindingContext;
	struct FTransform                             ReturnValue;
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindingContext_GetTransform) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindingContext_GetTransform");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindingContext_GetTransform) == 0x000130, "Wrong size on ContextualAnimUtilities_BP_SceneBindingContext_GetTransform");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindingContext_GetTransform, BindingContext) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindingContext_GetTransform::BindingContext' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindingContext_GetTransform, ReturnValue) == 0x0000D0, "Member 'ContextualAnimUtilities_BP_SceneBindingContext_GetTransform::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindingContext_GetVelocity final
{
public:
	struct FContextualAnimSceneBindingContext     BindingContext;
	struct FVector                                ReturnValue;
	uint8                                         Pad_E8[0x8];
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindingContext_GetVelocity) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindingContext_GetVelocity");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindingContext_GetVelocity) == 0x0000F0, "Wrong size on ContextualAnimUtilities_BP_SceneBindingContext_GetVelocity");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindingContext_GetVelocity, BindingContext) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindingContext_GetVelocity::BindingContext' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindingContext_GetVelocity, ReturnValue) == 0x0000D0, "Member 'ContextualAnimUtilities_BP_SceneBindingContext_GetVelocity::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor final
{
public:
	class AActor*                                 Actor;
	uint8                                         Pad_8[0x8];
	struct FContextualAnimSceneBindingContext     ReturnValue;
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor) == 0x0000E0, "Wrong size on ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor, Actor) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor::Actor' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor, ReturnValue) == 0x000010, "Member 'ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform final
{
public:
	class AActor*                                 Actor;
	uint8                                         Pad_8[0x8];
	struct FTransform                             ExternalTransform;
	struct FContextualAnimSceneBindingContext     ReturnValue;
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform) == 0x000140, "Wrong size on ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform, Actor) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform::Actor' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform, ExternalTransform) == 0x000010, "Member 'ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform::ExternalTransform' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform, ReturnValue) == 0x000070, "Member 'ContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings final
{
public:
	struct FContextualAnimSceneBindings           Bindings;
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings) == 0x000008, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings) == 0x000028, "Wrong size on ContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings, Bindings) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings::Bindings' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindings_CalculateWarpPoints final
{
public:
	struct FContextualAnimSceneBindings           Bindings;
	TArray<struct FContextualAnimWarpPoint>       OutWarpPoints;
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindings_CalculateWarpPoints) == 0x000008, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindings_CalculateWarpPoints");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindings_CalculateWarpPoints) == 0x000038, "Wrong size on ContextualAnimUtilities_BP_SceneBindings_CalculateWarpPoints");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_CalculateWarpPoints, Bindings) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindings_CalculateWarpPoints::Bindings' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_CalculateWarpPoints, OutWarpPoints) == 0x000028, "Member 'ContextualAnimUtilities_BP_SceneBindings_CalculateWarpPoints::OutWarpPoints' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole final
{
public:
	struct FContextualAnimSceneBindings           Bindings;
	class FName                                   Role;
	class FName                                   RelativeToRole;
	float                                         Time;
	uint8                                         Pad_34[0xC];
	struct FTransform                             ReturnValue;
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole) == 0x0000A0, "Wrong size on ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole, Bindings) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole::Bindings' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole, Role) == 0x000028, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole::Role' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole, RelativeToRole) == 0x00002C, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole::RelativeToRole' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole, Time) == 0x000030, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole::Time' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole, ReturnValue) == 0x000040, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint final
{
public:
	struct FContextualAnimSceneBindings           Bindings;
	class FName                                   Role;
	uint8                                         Pad_2C[0x4];
	struct FContextualAnimWarpPoint               WarpPoint;
	float                                         Time;
	uint8                                         Pad_A4[0xC];
	struct FTransform                             ReturnValue;
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint) == 0x000110, "Wrong size on ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint, Bindings) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint::Bindings' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint, Role) == 0x000028, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint::Role' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint, WarpPoint) == 0x000030, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint::WarpPoint' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint, Time) == 0x0000A0, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint::Time' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint, ReturnValue) == 0x0000B0, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding final
{
public:
	struct FContextualAnimSceneBindings           Bindings;
	uint8                                         Pad_28[0x8];
	struct FContextualAnimSceneBinding            Binding;
	struct FContextualAnimWarpPoint               WarpPoint;
	struct FTransform                             ReturnValue;
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding) == 0x0001E0, "Wrong size on ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding, Bindings) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding::Bindings' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding, Binding) == 0x000030, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding::Binding' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding, WarpPoint) == 0x000110, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding::WarpPoint' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding, ReturnValue) == 0x000180, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindings_GetBindingByActor final
{
public:
	struct FContextualAnimSceneBindings           Bindings;
	const class AActor*                           Actor;
	struct FContextualAnimSceneBinding            ReturnValue;
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindings_GetBindingByActor) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindings_GetBindingByActor");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindings_GetBindingByActor) == 0x000110, "Wrong size on ContextualAnimUtilities_BP_SceneBindings_GetBindingByActor");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetBindingByActor, Bindings) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetBindingByActor::Bindings' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetBindingByActor, Actor) == 0x000028, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetBindingByActor::Actor' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetBindingByActor, ReturnValue) == 0x000030, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetBindingByActor::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindings_GetBindingByRole final
{
public:
	struct FContextualAnimSceneBindings           Bindings;
	class FName                                   Role;
	uint8                                         Pad_2C[0x4];
	struct FContextualAnimSceneBinding            ReturnValue;
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindings_GetBindingByRole) == 0x000010, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindings_GetBindingByRole");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindings_GetBindingByRole) == 0x000110, "Wrong size on ContextualAnimUtilities_BP_SceneBindings_GetBindingByRole");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetBindingByRole, Bindings) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetBindingByRole::Bindings' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetBindingByRole, Role) == 0x000028, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetBindingByRole::Role' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetBindingByRole, ReturnValue) == 0x000030, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetBindingByRole::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindings_GetBindings final
{
public:
	struct FContextualAnimSceneBindings           Bindings;
	TArray<struct FContextualAnimSceneBinding>    ReturnValue;
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindings_GetBindings) == 0x000008, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindings_GetBindings");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindings_GetBindings) == 0x000038, "Wrong size on ContextualAnimUtilities_BP_SceneBindings_GetBindings");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetBindings, Bindings) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetBindings::Bindings' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetBindings, ReturnValue) == 0x000028, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetBindings::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindings_GetSceneAsset final
{
public:
	struct FContextualAnimSceneBindings           Bindings;
	const class UContextualAnimSceneAsset*        ReturnValue;
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindings_GetSceneAsset) == 0x000008, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindings_GetSceneAsset");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindings_GetSceneAsset) == 0x000030, "Wrong size on ContextualAnimUtilities_BP_SceneBindings_GetSceneAsset");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetSceneAsset, Bindings) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetSceneAsset::Bindings' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetSceneAsset, ReturnValue) == 0x000028, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetSceneAsset::ReturnValue' has a wrong offset!");

struct ContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices final
{
public:
	struct FContextualAnimSceneBindings           Bindings;
	int32                                         SectionIdx;
	int32                                         AnimSetIdx;
};
static_assert(alignof(ContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices) == 0x000008, "Wrong alignment on ContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices");
static_assert(sizeof(ContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices) == 0x000030, "Wrong size on ContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices, Bindings) == 0x000000, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices::Bindings' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices, SectionIdx) == 0x000028, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices::SectionIdx' has a wrong offset!");
static_assert(offsetof(ContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices, AnimSetIdx) == 0x00002C, "Member 'ContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices::AnimSetIdx' has a wrong offset!");

}
