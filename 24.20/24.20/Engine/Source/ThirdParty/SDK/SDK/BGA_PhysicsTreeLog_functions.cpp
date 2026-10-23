#pragma once

#include "Basic.hpp"

#include "BGA_PhysicsTreeLog_classes.hpp"
#include "BGA_PhysicsTreeLog_parameters.hpp"

namespace SDK
{

void ABGA_PhysicsTreeLog_C::AdjustWaterSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "AdjustWaterSettings");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_PhysicsTreeLog_C::AwakeStateChanged(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "AwakeStateChanged");

	Params::BGA_PhysicsTreeLog_C_AwakeStateChanged Parms{};

	Parms.SimulatingComponent = SimulatingComponent;
	Parms.bIsAwake = bIsAwake;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_PhysicsTreeLog_C::CalculateSplitOffset(bool bSmallSide, double SplitPercentage, double* LocalZOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "CalculateSplitOffset");

	Params::BGA_PhysicsTreeLog_C_CalculateSplitOffset Parms{};

	Parms.bSmallSide = bSmallSide;
	Parms.SplitPercentage = SplitPercentage;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalZOffset != nullptr)
		*LocalZOffset = Parms.LocalZOffset;
}

void ABGA_PhysicsTreeLog_C::CalculateSplitScale(bool bSmallSide, double SplitPercentage, double* SplitScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "CalculateSplitScale");

	Params::BGA_PhysicsTreeLog_C_CalculateSplitScale Parms{};

	Parms.bSmallSide = bSmallSide;
	Parms.SplitPercentage = SplitPercentage;

	UObject::ProcessEvent(Func, &Parms);

	if (SplitScale != nullptr)
		*SplitScale = Parms.SplitScale;
}

void ABGA_PhysicsTreeLog_C::CE_SplashInWater(const struct FVector& SplashLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "CE_SplashInWater");

	Params::BGA_PhysicsTreeLog_C_CE_SplashInWater Parms{};

	Parms.SplashLocation = std::move(SplashLocation);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_PhysicsTreeLog_C::Control2dSimForces()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "Control2dSimForces");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_PhysicsTreeLog_C::ExecuteUbergraph_BGA_PhysicsTreeLog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "ExecuteUbergraph_BGA_PhysicsTreeLog");

	Params::BGA_PhysicsTreeLog_C_ExecuteUbergraph_BGA_PhysicsTreeLog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class AB_PhysicsTree_Reporter_C* ABGA_PhysicsTreeLog_C::GetAnalyticsReporterActor(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "GetAnalyticsReporterActor");

	Params::BGA_PhysicsTreeLog_C_GetAnalyticsReporterActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;
}

void ABGA_PhysicsTreeLog_C::GetPlayerImpulseVelocityFromImpactVelocity(double Impact, bool* Minimum_Met, double* Impulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "GetPlayerImpulseVelocityFromImpactVelocity");

	Params::BGA_PhysicsTreeLog_C_GetPlayerImpulseVelocityFromImpactVelocity Parms{};

	Parms.Impact = Impact;

	UObject::ProcessEvent(Func, &Parms);

	if (Minimum_Met != nullptr)
		*Minimum_Met = Parms.Minimum_Met;

	if (Impulse != nullptr)
		*Impulse = Parms.Impulse;
}

void ABGA_PhysicsTreeLog_C::LogDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "LogDamaged");

	Params::BGA_PhysicsTreeLog_C_LogDamaged Parms{};

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

void ABGA_PhysicsTreeLog_C::OnComponentHit_Event_0(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "OnComponentHit_Event_0");

	Params::BGA_PhysicsTreeLog_C_OnComponentHit_Event_0 Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_PhysicsTreeLog_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "OnDeathPlayEffects");

	Params::BGA_PhysicsTreeLog_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_PhysicsTreeLog_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "OnDeathServer");

	Params::BGA_PhysicsTreeLog_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_PhysicsTreeLog_C::OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "OnPontoonEnteredWater");

	Params::BGA_PhysicsTreeLog_C_OnPontoonEnteredWater Parms{};

	Parms.Pontoon = std::move(Pontoon);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_PhysicsTreeLog_C::OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "OnPontoonExitedWater");

	Params::BGA_PhysicsTreeLog_C_OnPontoonExitedWater Parms{};

	Parms.Pontoon = std::move(Pontoon);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_PhysicsTreeLog_C::OnRep_BreakTreeDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "OnRep_BreakTreeDamage");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_PhysicsTreeLog_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_PhysicsTreeLog_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "ReceiveEndPlay");

	Params::BGA_PhysicsTreeLog_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_PhysicsTreeLog_C::RemoveSnow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "RemoveSnow");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_PhysicsTreeLog_C::ReportTreeFellingToAnalytics(class AActor* FelledBy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "ReportTreeFellingToAnalytics");

	Params::BGA_PhysicsTreeLog_C_ReportTreeFellingToAnalytics Parms{};

	Parms.FelledBy = FelledBy;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_PhysicsTreeLog_C::Update_Water_FX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "Update Water FX");

	UObject::ProcessEvent(Func, nullptr);
}

}
