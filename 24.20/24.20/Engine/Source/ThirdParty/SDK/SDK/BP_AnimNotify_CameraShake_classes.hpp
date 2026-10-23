#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UBP_AnimNotify_CameraShake_C final : public UAnimNotify
{
public:
	class UClass*                                 Shake_BP;
	double                                        Shake_Scale;
	ECameraShakePlaySpace                         Shake_Space;

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimNotify_CameraShake_C">();
	}
	static class UBP_AnimNotify_CameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AnimNotify_CameraShake_C>();
	}
};
static_assert(alignof(UBP_AnimNotify_CameraShake_C) == 0x000008, "Wrong alignment on UBP_AnimNotify_CameraShake_C");
static_assert(sizeof(UBP_AnimNotify_CameraShake_C) == 0x000050, "Wrong size on UBP_AnimNotify_CameraShake_C");
static_assert(offsetof(UBP_AnimNotify_CameraShake_C, Shake_BP) == 0x000038, "Member 'UBP_AnimNotify_CameraShake_C::Shake_BP' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_CameraShake_C, Shake_Scale) == 0x000040, "Member 'UBP_AnimNotify_CameraShake_C::Shake_Scale' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_CameraShake_C, Shake_Space) == 0x000048, "Member 'UBP_AnimNotify_CameraShake_C::Shake_Space' has a wrong offset!");

}
