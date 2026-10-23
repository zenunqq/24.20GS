#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthenaFromContext_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_ShouldPlayDeathSoundEffects_ReturnValue;
};
static_assert(alignof(AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify) == 0x000008, "Wrong alignment on AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify");
static_assert(sizeof(AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify) == 0x000030, "Wrong size on AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify");
static_assert(offsetof(AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify, MeshComp) == 0x000000, "Member 'AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify, Animation) == 0x000008, "Member 'AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify, ReturnValue) == 0x000010, "Member 'AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify, CallFunc_GetGameStateAthenaFromContext_ReturnValue) == 0x000020, "Member 'AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify::CallFunc_GetGameStateAthenaFromContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify, CallFunc_ShouldPlayDeathSoundEffects_ReturnValue) == 0x00002A, "Member 'AnimNotify_PlaySoundWithCondition_C_ShouldTriggerAnimNotify::CallFunc_ShouldPlayDeathSoundEffects_ReturnValue' has a wrong offset!");

}
