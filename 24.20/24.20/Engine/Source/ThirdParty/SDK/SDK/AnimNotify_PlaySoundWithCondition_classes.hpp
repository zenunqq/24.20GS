#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UAnimNotify_PlaySoundWithCondition_C final : public UFortAnimNotify_PlaySoundConditional
{
public:
	bool ShouldTriggerAnimNotify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_PlaySoundWithCondition_C">();
	}
	static class UAnimNotify_PlaySoundWithCondition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlaySoundWithCondition_C>();
	}
};
static_assert(alignof(UAnimNotify_PlaySoundWithCondition_C) == 0x000008, "Wrong alignment on UAnimNotify_PlaySoundWithCondition_C");
static_assert(sizeof(UAnimNotify_PlaySoundWithCondition_C) == 0x000050, "Wrong size on UAnimNotify_PlaySoundWithCondition_C");

}
