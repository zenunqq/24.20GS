#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UAnimNotify_PlayForceFeedback_C final : public UAnimNotify
{
public:
	class UForceFeedbackEffect*                   ForceFeedbackTemplate;
	class UForceFeedbackEffect*                   ForceFeedbackFarTemplate;
	bool                                          bPlayAtWorldLocation;
	uint8                                         Pad_49[0x7];
	double                                        InnerRadius;
	double                                        OuterRadius;

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_PlayForceFeedback_C">();
	}
	static class UAnimNotify_PlayForceFeedback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlayForceFeedback_C>();
	}
};
static_assert(alignof(UAnimNotify_PlayForceFeedback_C) == 0x000008, "Wrong alignment on UAnimNotify_PlayForceFeedback_C");
static_assert(sizeof(UAnimNotify_PlayForceFeedback_C) == 0x000060, "Wrong size on UAnimNotify_PlayForceFeedback_C");
static_assert(offsetof(UAnimNotify_PlayForceFeedback_C, ForceFeedbackTemplate) == 0x000038, "Member 'UAnimNotify_PlayForceFeedback_C::ForceFeedbackTemplate' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayForceFeedback_C, ForceFeedbackFarTemplate) == 0x000040, "Member 'UAnimNotify_PlayForceFeedback_C::ForceFeedbackFarTemplate' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayForceFeedback_C, bPlayAtWorldLocation) == 0x000048, "Member 'UAnimNotify_PlayForceFeedback_C::bPlayAtWorldLocation' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayForceFeedback_C, InnerRadius) == 0x000050, "Member 'UAnimNotify_PlayForceFeedback_C::InnerRadius' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayForceFeedback_C, OuterRadius) == 0x000058, "Member 'UAnimNotify_PlayForceFeedback_C::OuterRadius' has a wrong offset!");

}
