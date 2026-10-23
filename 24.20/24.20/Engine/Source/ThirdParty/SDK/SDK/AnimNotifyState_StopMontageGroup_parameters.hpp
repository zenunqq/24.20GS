#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	float                                         TotalDuration;
	uint8                                         Pad_14[0x4];
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	uint8                                         Pad_41[0x7];
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;
	float                                         CallFunc_Montage_StopGroupByName_InBlendOutTime_ImplicitCast;
};
static_assert(alignof(AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin");
static_assert(sizeof(AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin) == 0x000058, "Wrong size on AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin");
static_assert(offsetof(AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin, EventReference) == 0x000018, "Member 'AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin, ReturnValue) == 0x000040, "Member 'AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin, CallFunc_GetAnimInstance_ReturnValue) == 0x000048, "Member 'AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin, CallFunc_Montage_StopGroupByName_InBlendOutTime_ImplicitCast) == 0x000050, "Member 'AnimNotifyState_StopMontageGroup_C_Received_NotifyBegin::CallFunc_Montage_StopGroupByName_InBlendOutTime_ImplicitCast' has a wrong offset!");

}
