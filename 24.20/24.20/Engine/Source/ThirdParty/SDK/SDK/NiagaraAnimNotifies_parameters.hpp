#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect final
{
public:
	class UMeshComponent*                         MeshComp;
	class UFXSystemComponent*                     ReturnValue;
};
static_assert(alignof(AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect) == 0x000008, "Wrong alignment on AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect");
static_assert(sizeof(AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect) == 0x000010, "Wrong size on AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect");
static_assert(offsetof(AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect, MeshComp) == 0x000000, "Member 'AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect, ReturnValue) == 0x000008, "Member 'AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect::ReturnValue' has a wrong offset!");

struct AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress final
{
public:
	class UMeshComponent*                         MeshComp;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress) == 0x000008, "Wrong alignment on AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress");
static_assert(sizeof(AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress) == 0x000010, "Wrong size on AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress");
static_assert(offsetof(AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress, MeshComp) == 0x000000, "Member 'AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress, ReturnValue) == 0x000008, "Member 'AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress::ReturnValue' has a wrong offset!");

struct AnimNotify_PlayNiagaraEffect_GetSpawnedEffect final
{
public:
	class UFXSystemComponent*                     ReturnValue;
};
static_assert(alignof(AnimNotify_PlayNiagaraEffect_GetSpawnedEffect) == 0x000008, "Wrong alignment on AnimNotify_PlayNiagaraEffect_GetSpawnedEffect");
static_assert(sizeof(AnimNotify_PlayNiagaraEffect_GetSpawnedEffect) == 0x000008, "Wrong size on AnimNotify_PlayNiagaraEffect_GetSpawnedEffect");
static_assert(offsetof(AnimNotify_PlayNiagaraEffect_GetSpawnedEffect, ReturnValue) == 0x000000, "Member 'AnimNotify_PlayNiagaraEffect_GetSpawnedEffect::ReturnValue' has a wrong offset!");

}
