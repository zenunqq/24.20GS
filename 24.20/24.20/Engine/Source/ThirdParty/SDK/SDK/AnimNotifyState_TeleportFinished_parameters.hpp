#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AnimNotifyState_TeleportFinished_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	float                                         TotalDuration;
	uint8                                         Pad_14[0x4];
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	uint8                                         Pad_41[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class ABP_VictoryDrone_C*                     K2Node_DynamicCast_AsBP_Victory_Drone;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(AnimNotifyState_TeleportFinished_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on AnimNotifyState_TeleportFinished_C_Received_NotifyBegin");
static_assert(sizeof(AnimNotifyState_TeleportFinished_C_Received_NotifyBegin) == 0x000060, "Wrong size on AnimNotifyState_TeleportFinished_C_Received_NotifyBegin");
static_assert(offsetof(AnimNotifyState_TeleportFinished_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'AnimNotifyState_TeleportFinished_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_TeleportFinished_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'AnimNotifyState_TeleportFinished_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_TeleportFinished_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'AnimNotifyState_TeleportFinished_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_TeleportFinished_C_Received_NotifyBegin, EventReference) == 0x000018, "Member 'AnimNotifyState_TeleportFinished_C_Received_NotifyBegin::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_TeleportFinished_C_Received_NotifyBegin, ReturnValue) == 0x000040, "Member 'AnimNotifyState_TeleportFinished_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_TeleportFinished_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'AnimNotifyState_TeleportFinished_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_TeleportFinished_C_Received_NotifyBegin, K2Node_DynamicCast_AsBP_Victory_Drone) == 0x000050, "Member 'AnimNotifyState_TeleportFinished_C_Received_NotifyBegin::K2Node_DynamicCast_AsBP_Victory_Drone' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_TeleportFinished_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'AnimNotifyState_TeleportFinished_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct AnimNotifyState_TeleportFinished_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
};
static_assert(alignof(AnimNotifyState_TeleportFinished_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on AnimNotifyState_TeleportFinished_C_Received_NotifyEnd");
static_assert(sizeof(AnimNotifyState_TeleportFinished_C_Received_NotifyEnd) == 0x000040, "Wrong size on AnimNotifyState_TeleportFinished_C_Received_NotifyEnd");
static_assert(offsetof(AnimNotifyState_TeleportFinished_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'AnimNotifyState_TeleportFinished_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_TeleportFinished_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'AnimNotifyState_TeleportFinished_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_TeleportFinished_C_Received_NotifyEnd, EventReference) == 0x000010, "Member 'AnimNotifyState_TeleportFinished_C_Received_NotifyEnd::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_TeleportFinished_C_Received_NotifyEnd, ReturnValue) == 0x000038, "Member 'AnimNotifyState_TeleportFinished_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");

}
