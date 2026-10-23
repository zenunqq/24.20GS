#pragma once

#include "Basic.hpp"

#include "MusterCoreWeaponsRuntime_classes.hpp"
#include "MusterCoreWeaponsRuntime_parameters.hpp"

namespace SDK
{

void AFortMusterExplosiveARProjectile::OnRep_HitLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMusterExplosiveARProjectile", "OnRep_HitLocation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortMusterExplosiveARProjectile::SetHitLocation(const struct FVector& NewHitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMusterExplosiveARProjectile", "SetHitLocation");

	Params::FortMusterExplosiveARProjectile_SetHitLocation Parms{};

	Parms.NewHitLocation = std::move(NewHitLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortMusterExplosiveARProjectile::SetHitPlayer(bool bWasHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMusterExplosiveARProjectile", "SetHitPlayer");

	Params::FortMusterExplosiveARProjectile_SetHitPlayer Parms{};

	Parms.bWasHit = bWasHit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortMusterExplosiveARProjectile::SetHitRotation(const struct FRotator& NewHitRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMusterExplosiveARProjectile", "SetHitRotation");

	Params::FortMusterExplosiveARProjectile_SetHitRotation Parms{};

	Parms.NewHitRotation = std::move(NewHitRotation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortExCaliberProjectile::BP_OnProjectileStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExCaliberProjectile", "BP_OnProjectileStopped");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortExCaliberProjectile::OnAttachedActorDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExCaliberProjectile", "OnAttachedActorDestroyed");

	Params::FortExCaliberProjectile_OnAttachedActorDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortExCaliberProjectile::OnAttachedBuildingDestroyed(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExCaliberProjectile", "OnAttachedBuildingDestroyed");

	Params::FortExCaliberProjectile_OnAttachedBuildingDestroyed Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortExCaliberProjectile::OnRep_bSimulationRunning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExCaliberProjectile", "OnRep_bSimulationRunning");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortExCaliberProjectile::PlayPreExplosionEfffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExCaliberProjectile", "PlayPreExplosionEfffects");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortExCaliberProjectile::RestartSimulating()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExCaliberProjectile", "RestartSimulating");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortExCaliberProjectile::SetFuseColorBasedOnTeam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExCaliberProjectile", "SetFuseColorBasedOnTeam");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortExCaliberProjectile::SetupProjectileHitAudio(const struct FVector& ProjectileImpactLocation, const class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExCaliberProjectile", "SetupProjectileHitAudio");

	Params::FortExCaliberProjectile_SetupProjectileHitAudio Parms{};

	Parms.ProjectileImpactLocation = std::move(ProjectileImpactLocation);
	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortExCaliberProjectile::SetupSwordRevealEffects(class UStaticMeshComponent* ProjectileMesh, float SwordRevealAlpha, float ColorChangeAlpha, float HDRMultiplierAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExCaliberProjectile", "SetupSwordRevealEffects");

	Params::FortExCaliberProjectile_SetupSwordRevealEffects Parms{};

	Parms.ProjectileMesh = ProjectileMesh;
	Parms.SwordRevealAlpha = SwordRevealAlpha;
	Parms.ColorChangeAlpha = ColorChangeAlpha;
	Parms.HDRMultiplierAlpha = HDRMultiplierAlpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortExCaliberProjectile::TriggerExplosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExCaliberProjectile", "TriggerExplosion");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortExCaliberProjectile::UnblockPawnCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExCaliberProjectile", "UnblockPawnCollision");

	UObject::ProcessEvent(Func, nullptr);
}

}
