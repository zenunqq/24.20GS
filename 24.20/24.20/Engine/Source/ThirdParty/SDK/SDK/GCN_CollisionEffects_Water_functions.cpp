#pragma once

#include "Basic.hpp"

#include "GCN_CollisionEffects_Water_classes.hpp"
#include "GCN_CollisionEffects_Water_parameters.hpp"

namespace SDK
{

void UGCN_CollisionEffects_Water_C::GetObjectSizeParam(class AActor* PhysicsObject, int32* Size) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_CollisionEffects_Water_C", "GetObjectSizeParam");

	Params::GCN_CollisionEffects_Water_C_GetObjectSizeParam Parms{};

	Parms.PhysicsObject = PhysicsObject;

	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = Parms.Size;
}

void UGCN_CollisionEffects_Water_C::OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_CollisionEffects_Water_C", "OnBurst");

	Params::GCN_CollisionEffects_Water_C_OnBurst Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}
