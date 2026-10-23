#pragma once

#include "Basic.hpp"

#include "BGA_Athena_WithGravity_Parent_classes.hpp"
#include "BGA_Athena_WithGravity_Parent_parameters.hpp"

namespace SDK
{

void ABGA_Athena_WithGravity_Parent_C::AttachedWasDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "AttachedWasDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_Athena_WithGravity_Parent_C::AttachToBindedActor(class UPrimitiveComponent* AttachComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "AttachToBindedActor");

	Params::BGA_Athena_WithGravity_Parent_C_AttachToBindedActor Parms{};

	Parms.AttachComp = AttachComp;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_Athena_WithGravity_Parent_C::BaseDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "BaseDestroyed");

	Params::BGA_Athena_WithGravity_Parent_C_BaseDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_Athena_WithGravity_Parent_C::BaseDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "BaseDied");

	Params::BGA_Athena_WithGravity_Parent_C_BaseDied Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_Athena_WithGravity_Parent_C::BounceBGA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "BounceBGA");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_Athena_WithGravity_Parent_C::BounceBGAAwayFromLocation(const struct FVector& LocationToBounceAwayFrom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "BounceBGAAwayFromLocation");

	Params::BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation Parms{};

	Parms.LocationToBounceAwayFrom = std::move(LocationToBounceAwayFrom);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_Athena_WithGravity_Parent_C::CheckForSameClassToBounce(class AActor* Hit, bool* HitSameClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "CheckForSameClassToBounce");

	Params::BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

	if (HitSameClass != nullptr)
		*HitSameClass = Parms.HitSameClass;
}

void ABGA_Athena_WithGravity_Parent_C::ExecuteUbergraph_BGA_Athena_WithGravity_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "ExecuteUbergraph_BGA_Athena_WithGravity_Parent");

	Params::BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_Athena_WithGravity_Parent_C::ForceBounceBGA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "ForceBounceBGA");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_Athena_WithGravity_Parent_C::HandleBinding(class AActor* Actor, class UPrimitiveComponent* HitComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "HandleBinding");

	Params::BGA_Athena_WithGravity_Parent_C_HandleBinding Parms{};

	Parms.Actor = Actor;
	Parms.HitComp = HitComp;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_Athena_WithGravity_Parent_C::Impulse(double DelayBeforeImpulse, double DelayBeforeCollision, const struct FVector& ImpulseOrigin, const struct FVector& ImpulseAmount, bool SetCollisionAfterImpulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "Impulse");

	Params::BGA_Athena_WithGravity_Parent_C_Impulse Parms{};

	Parms.DelayBeforeImpulse = DelayBeforeImpulse;
	Parms.DelayBeforeCollision = DelayBeforeCollision;
	Parms.ImpulseOrigin = std::move(ImpulseOrigin);
	Parms.ImpulseAmount = std::move(ImpulseAmount);
	Parms.SetCollisionAfterImpulse = SetCollisionAfterImpulse;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_Athena_WithGravity_Parent_C::Init(const struct FVector& GravHitNormal_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "Init");

	Params::BGA_Athena_WithGravity_Parent_C_Init Parms{};

	Parms.GravHitNormal_0 = std::move(GravHitNormal_0);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_Athena_WithGravity_Parent_C::OnAttach(class AActor* AttachedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "OnAttach");

	Params::BGA_Athena_WithGravity_Parent_C_OnAttach Parms{};

	Parms.AttachedActor = AttachedActor;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_Athena_WithGravity_Parent_C::OnRep_bResumeSimulation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "OnRep_bResumeSimulation");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_Athena_WithGravity_Parent_C::OnRep_RepCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "OnRep_RepCollision");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_Athena_WithGravity_Parent_C::OnRep_StopLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "OnRep_StopLocation");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_Athena_WithGravity_Parent_C::OnRep_StopSimServerLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "OnRep_StopSimServerLocation");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_Athena_WithGravity_Parent_C::OnUnderneathPhysicsObjectAwakeChanged(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "OnUnderneathPhysicsObjectAwakeChanged");

	Params::BGA_Athena_WithGravity_Parent_C_OnUnderneathPhysicsObjectAwakeChanged Parms{};

	Parms.SimulatingComponent = SimulatingComponent;
	Parms.bIsAwake = bIsAwake;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_Athena_WithGravity_Parent_C::PlayHitFX(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "PlayHitFX");

	Params::BGA_Athena_WithGravity_Parent_C_PlayHitFX Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_Athena_WithGravity_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_Athena_WithGravity_Parent_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "ReceiveHit");

	Params::BGA_Athena_WithGravity_Parent_C_ReceiveHit Parms{};

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

void ABGA_Athena_WithGravity_Parent_C::RestartSimulation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "RestartSimulation");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_Athena_WithGravity_Parent_C::SlidingDoorOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "SlidingDoorOpened");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_Athena_WithGravity_Parent_C::SpawnFXSounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "SpawnFXSounds");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_Athena_WithGravity_Parent_C::StopSim(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "StopSim");

	Params::BGA_Athena_WithGravity_Parent_C_StopSim Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

}
