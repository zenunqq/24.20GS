#pragma once

#include "Basic.hpp"

#include "Prop_PhysicsBoulder_Desert_01_classes.hpp"
#include "Prop_PhysicsBoulder_Desert_01_parameters.hpp"

namespace SDK
{

void AProp_PhysicsBoulder_Desert_01_C::ExecuteUbergraph_Prop_PhysicsBoulder_Desert_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_PhysicsBoulder_Desert_01_C", "ExecuteUbergraph_Prop_PhysicsBoulder_Desert_01");

	Params::Prop_PhysicsBoulder_Desert_01_C_ExecuteUbergraph_Prop_PhysicsBoulder_Desert_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AProp_PhysicsBoulder_Desert_01_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_PhysicsBoulder_Desert_01_C", "OnDeathPlayEffects");

	Params::Prop_PhysicsBoulder_Desert_01_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void AProp_PhysicsBoulder_Desert_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_PhysicsBoulder_Desert_01_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AProp_PhysicsBoulder_Desert_01_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_PhysicsBoulder_Desert_01_C", "ReceiveHit");

	Params::Prop_PhysicsBoulder_Desert_01_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

}
