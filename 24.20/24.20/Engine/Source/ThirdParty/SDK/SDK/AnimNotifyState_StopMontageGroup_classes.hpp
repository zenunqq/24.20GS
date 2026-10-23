#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UAnimNotifyState_StopMontageGroup_C final : public UAnimNotifyState
{
public:
	class FName                                   GroupNameToStop;
	uint8                                         Pad_34[0x4];
	double                                        BlendOutTime;

public:
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotifyState_StopMontageGroup_C">();
	}
	static class UAnimNotifyState_StopMontageGroup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_StopMontageGroup_C>();
	}
};
static_assert(alignof(UAnimNotifyState_StopMontageGroup_C) == 0x000008, "Wrong alignment on UAnimNotifyState_StopMontageGroup_C");
static_assert(sizeof(UAnimNotifyState_StopMontageGroup_C) == 0x000040, "Wrong size on UAnimNotifyState_StopMontageGroup_C");
static_assert(offsetof(UAnimNotifyState_StopMontageGroup_C, GroupNameToStop) == 0x000030, "Member 'UAnimNotifyState_StopMontageGroup_C::GroupNameToStop' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_StopMontageGroup_C, BlendOutTime) == 0x000038, "Member 'UAnimNotifyState_StopMontageGroup_C::BlendOutTime' has a wrong offset!");

}
