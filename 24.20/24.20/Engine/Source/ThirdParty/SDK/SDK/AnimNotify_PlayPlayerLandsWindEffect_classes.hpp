#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UAnimNotify_PlayPlayerLandsWindEffect_C final : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_PlayPlayerLandsWindEffect_C">();
	}
	static class UAnimNotify_PlayPlayerLandsWindEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlayPlayerLandsWindEffect_C>();
	}
};
static_assert(alignof(UAnimNotify_PlayPlayerLandsWindEffect_C) == 0x000008, "Wrong alignment on UAnimNotify_PlayPlayerLandsWindEffect_C");
static_assert(sizeof(UAnimNotify_PlayPlayerLandsWindEffect_C) == 0x000038, "Wrong size on UAnimNotify_PlayPlayerLandsWindEffect_C");

}
