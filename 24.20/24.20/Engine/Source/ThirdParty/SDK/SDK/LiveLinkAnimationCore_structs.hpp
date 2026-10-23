#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LiveLinkInterface_structs.hpp"

namespace SDK
{

struct FAnimNode_LiveLinkPose final : public FAnimNode_Base
{
public:
	struct FPoseLink                              InputPose;
	struct FLiveLinkSubjectName                   LiveLinkSubjectName;
	uint8                                         Pad_24[0x4];
	TSubclassOf<class ULiveLinkRetargetAsset>     RetargetAsset;
	class ULiveLinkRetargetAsset*                 CurrentRetargetAsset;
	uint8                                         Pad_38[0x10];
};
static_assert(alignof(FAnimNode_LiveLinkPose) == 0x000008, "Wrong alignment on FAnimNode_LiveLinkPose");
static_assert(sizeof(FAnimNode_LiveLinkPose) == 0x000048, "Wrong size on FAnimNode_LiveLinkPose");
static_assert(offsetof(FAnimNode_LiveLinkPose, InputPose) == 0x000010, "Member 'FAnimNode_LiveLinkPose::InputPose' has a wrong offset!");
static_assert(offsetof(FAnimNode_LiveLinkPose, LiveLinkSubjectName) == 0x000020, "Member 'FAnimNode_LiveLinkPose::LiveLinkSubjectName' has a wrong offset!");
static_assert(offsetof(FAnimNode_LiveLinkPose, RetargetAsset) == 0x000028, "Member 'FAnimNode_LiveLinkPose::RetargetAsset' has a wrong offset!");
static_assert(offsetof(FAnimNode_LiveLinkPose, CurrentRetargetAsset) == 0x000030, "Member 'FAnimNode_LiveLinkPose::CurrentRetargetAsset' has a wrong offset!");

struct FLiveLinkInstanceProxy final : public FAnimInstanceProxy
{
public:
	struct FAnimNode_LiveLinkPose                 PoseNode;
};
static_assert(alignof(FLiveLinkInstanceProxy) == 0x000010, "Wrong alignment on FLiveLinkInstanceProxy");
static_assert(sizeof(FLiveLinkInstanceProxy) == 0x0008C0, "Wrong size on FLiveLinkInstanceProxy");
static_assert(offsetof(FLiveLinkInstanceProxy, PoseNode) == 0x000878, "Member 'FLiveLinkInstanceProxy::PoseNode' has a wrong offset!");

}
