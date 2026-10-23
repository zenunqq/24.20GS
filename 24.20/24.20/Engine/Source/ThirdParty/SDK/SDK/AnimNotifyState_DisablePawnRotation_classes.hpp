#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UAnimNotifyState_DisablePawnRotation_C final : public UAnimNotifyState
{
public:
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotifyState_DisablePawnRotation_C">();
	}
	static class UAnimNotifyState_DisablePawnRotation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_DisablePawnRotation_C>();
	}
};
static_assert(alignof(UAnimNotifyState_DisablePawnRotation_C) == 0x000008, "Wrong alignment on UAnimNotifyState_DisablePawnRotation_C");
static_assert(sizeof(UAnimNotifyState_DisablePawnRotation_C) == 0x000030, "Wrong size on UAnimNotifyState_DisablePawnRotation_C");

}
