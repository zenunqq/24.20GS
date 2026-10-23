#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UAnimNotify_FootStep_C : public UAnimNotify
{
public:
	int32                                         FootIndex;

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_FootStep_C">();
	}
	static class UAnimNotify_FootStep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_FootStep_C>();
	}
};
static_assert(alignof(UAnimNotify_FootStep_C) == 0x000008, "Wrong alignment on UAnimNotify_FootStep_C");
static_assert(sizeof(UAnimNotify_FootStep_C) == 0x000040, "Wrong size on UAnimNotify_FootStep_C");
static_assert(offsetof(UAnimNotify_FootStep_C, FootIndex) == 0x000038, "Member 'UAnimNotify_FootStep_C::FootIndex' has a wrong offset!");

}
