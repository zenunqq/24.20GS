#pragma once

#include "Basic.hpp"

#include "NiagaraAnimNotifies_classes.hpp"
#include "NiagaraAnimNotifies_parameters.hpp"

namespace SDK
{

class UFXSystemComponent* UAnimNotifyState_TimedNiagaraEffect::GetSpawnedEffect(class UMeshComponent* MeshComp) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_TimedNiagaraEffect", "GetSpawnedEffect");

	Params::AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect Parms{};

	Parms.MeshComp = MeshComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAnimNotifyState_TimedNiagaraEffectAdvanced::GetNotifyProgress(class UMeshComponent* MeshComp) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_TimedNiagaraEffectAdvanced", "GetNotifyProgress");

	Params::AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress Parms{};

	Parms.MeshComp = MeshComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFXSystemComponent* UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_PlayNiagaraEffect", "GetSpawnedEffect");

	Params::AnimNotify_PlayNiagaraEffect_GetSpawnedEffect Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
