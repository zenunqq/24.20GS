#pragma once

#include "Basic.hpp"

#include "Prop_PhysicsBoulder_Parent_classes.hpp"
#include "Prop_PhysicsBoulder_Parent_parameters.hpp"

namespace SDK
{

void AProp_PhysicsBoulder_Parent_C::ComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_PhysicsBoulder_Parent_C", "ComponentHit");

	Params::Prop_PhysicsBoulder_Parent_C_ComponentHit Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void AProp_PhysicsBoulder_Parent_C::ExecuteUbergraph_Prop_PhysicsBoulder_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_PhysicsBoulder_Parent_C", "ExecuteUbergraph_Prop_PhysicsBoulder_Parent");

	Params::Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AProp_PhysicsBoulder_Parent_C::GetPlayerImpulseVelocityFromImpactVelocity(double Impact, bool* Minimum_Met, double* Impulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_PhysicsBoulder_Parent_C", "GetPlayerImpulseVelocityFromImpactVelocity");

	Params::Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity Parms{};

	Parms.Impact = Impact;

	UObject::ProcessEvent(Func, &Parms);

	if (Minimum_Met != nullptr)
		*Minimum_Met = Parms.Minimum_Met;

	if (Impulse != nullptr)
		*Impulse = Parms.Impulse;
}

void AProp_PhysicsBoulder_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prop_PhysicsBoulder_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
