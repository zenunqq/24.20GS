#pragma once

#include "Basic.hpp"

#include "AnimNotify_FootStep_classes.hpp"

namespace SDK
{

class UAnimNotify_FootStep_Right_C final : public UAnimNotify_FootStep_C
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_FootStep_Right_C">();
	}
	static class UAnimNotify_FootStep_Right_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_FootStep_Right_C>();
	}
};
static_assert(alignof(UAnimNotify_FootStep_Right_C) == 0x000008, "Wrong alignment on UAnimNotify_FootStep_Right_C");
static_assert(sizeof(UAnimNotify_FootStep_Right_C) == 0x000040, "Wrong size on UAnimNotify_FootStep_Right_C");

}
