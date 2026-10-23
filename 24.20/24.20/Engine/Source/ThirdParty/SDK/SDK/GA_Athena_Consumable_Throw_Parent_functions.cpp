#pragma once

#include "Basic.hpp"

#include "GA_Athena_Consumable_Throw_Parent_classes.hpp"
#include "GA_Athena_Consumable_Throw_Parent_parameters.hpp"

namespace SDK
{

void UGA_Athena_Consumable_Throw_Parent_C::AddCookGC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "AddCookGC");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::AddValidCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "AddValidCamera");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::AttemptSpawnThrownProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "AttemptSpawnThrownProjectile");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27");

	Params::GA_Athena_Consumable_Throw_Parent_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Consumable_Throw_Parent_C::CleanupTrajectory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "CleanupTrajectory");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::CleanupTrajectoryIndicatorOnUnequip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "CleanupTrajectoryIndicatorOnUnequip");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::Completed_01C5B37D48E3DC6F82DDC58640CE2A27(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "Completed_01C5B37D48E3DC6F82DDC58640CE2A27");

	Params::GA_Athena_Consumable_Throw_Parent_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Consumable_Throw_Parent_C::EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6");

	Params::GA_Athena_Consumable_Throw_Parent_C_EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Consumable_Throw_Parent_C::EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F");

	Params::GA_Athena_Consumable_Throw_Parent_C_EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Consumable_Throw_Parent_C::ExecuteThrowGC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "ExecuteThrowGC");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent");

	Params::GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Consumable_Throw_Parent_C::GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetProjectileTrajectoryPoints");

	Params::GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSplinePoints != nullptr)
		*OutSplinePoints = std::move(Parms.OutSplinePoints);

	if (OutSplineTangents != nullptr)
		*OutSplineTangents = std::move(Parms.OutSplineTangents);

	if (OutHitResult != nullptr)
		*OutHitResult = std::move(Parms.OutHitResult);
}

void UGA_Athena_Consumable_Throw_Parent_C::InitTrajectoryVariables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "InitTrajectoryVariables");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "K2_OnEndAbility");

	Params::GA_Athena_Consumable_Throw_Parent_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Consumable_Throw_Parent_C::K2_OverrideFailedReason(const struct FGameplayTagContainer& FailedReason, struct FGameplayTagContainer* OverridenFailedReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "K2_OverrideFailedReason");

	Params::GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason Parms{};

	Parms.FailedReason = std::move(FailedReason);

	UObject::ProcessEvent(Func, &Parms);

	if (OverridenFailedReason != nullptr)
		*OverridenFailedReason = std::move(Parms.OverridenFailedReason);
}

void UGA_Athena_Consumable_Throw_Parent_C::OnAbilityInputReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnAbilityInputReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::OnFinish_96367E244486362FDDE5ED87D909C17B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnFinish_96367E244486362FDDE5ED87D909C17B");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::OnProjectileSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnProjectileSetup");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::OnProjectileSpawned(class AFortProjectileBase* SpawnedProjectile_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnProjectileSpawned");

	Params::GA_Athena_Consumable_Throw_Parent_C_OnProjectileSpawned Parms{};

	Parms.SpawnedProjectile_0 = SpawnedProjectile_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Consumable_Throw_Parent_C::OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0(float TimeHeld)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0");

	Params::GA_Athena_Consumable_Throw_Parent_C_OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0 Parms{};

	Parms.TimeHeld = TimeHeld;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Consumable_Throw_Parent_C::OnSync_9C8FDC8044B1444580A9809C231F294D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnSync_9C8FDC8044B1444580A9809C231F294D");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::OnUpdateTrajectory(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents, const struct FHitResult& TrajectoryHitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnUpdateTrajectory");

	Params::GA_Athena_Consumable_Throw_Parent_C_OnUpdateTrajectory Parms{};

	Parms.SplinePoints = std::move(SplinePoints);
	Parms.SplineTangents = std::move(SplineTangents);
	Parms.TrajectoryHitResult = std::move(TrajectoryHitResult);

	UObject::ProcessEvent(Func, &Parms);

	SplinePoints = std::move(Parms.SplinePoints);
	SplineTangents = std::move(Parms.SplineTangents);
}

void UGA_Athena_Consumable_Throw_Parent_C::PostThrowCleanup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "PostThrowCleanup");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::PrethrowSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "PrethrowSetup");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::RemoveCookGC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "RemoveCookGC");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::SetupDummyProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "SetupDummyProjectile");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::SpawnThrownProjectile(class UClass* ProjectileClass_0, const struct FVector& ProjectileSpawnLocation, const struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& HitEffectContainerSpec, const struct FFortGameplayEffectContainerSpec& ExplosionEffectContainerSpec, double ProjectileInitialSpeed, double ProjectileGravityScale_0, class AFortProjectileBase** SpawnedProjectile_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "SpawnThrownProjectile");

	Params::GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile Parms{};

	Parms.ProjectileClass_0 = ProjectileClass_0;
	Parms.ProjectileSpawnLocation = std::move(ProjectileSpawnLocation);
	Parms.ProjectileSpawnDirection = std::move(ProjectileSpawnDirection);
	Parms.HitEffectContainerSpec = std::move(HitEffectContainerSpec);
	Parms.ExplosionEffectContainerSpec = std::move(ExplosionEffectContainerSpec);
	Parms.ProjectileInitialSpeed = ProjectileInitialSpeed;
	Parms.ProjectileGravityScale_0 = ProjectileGravityScale_0;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedProjectile_0 != nullptr)
		*SpawnedProjectile_0 = Parms.SpawnedProjectile_0;
}

class AFortProjectileTrajectory* UGA_Athena_Consumable_Throw_Parent_C::SpawnTrajectoryIndicator(bool bSpawnOnEquip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "SpawnTrajectoryIndicator");

	Params::GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator Parms{};

	Parms.bSpawnOnEquip = bSpawnOnEquip;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UGA_Athena_Consumable_Throw_Parent_C::ThrowMontageStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "ThrowMontageStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::ThrowProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "ThrowProjectile");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::Triggered_01C5B37D48E3DC6F82DDC58640CE2A27(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "Triggered_01C5B37D48E3DC6F82DDC58640CE2A27");

	Params::GA_Athena_Consumable_Throw_Parent_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Consumable_Throw_Parent_C::UpdateTrajectory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "UpdateTrajectory");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::UpdateTrajectorySpline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "UpdateTrajectorySpline");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Consumable_Throw_Parent_C::CalculateProjectileTrajectory(class AFortPawn* Instigator, const struct FVector& InitialLocation, const struct FVector& InitialVelocity, struct FHitResult* OutHitResult, TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "CalculateProjectileTrajectory");

	Params::GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory Parms{};

	Parms.Instigator = Instigator;
	Parms.InitialLocation = std::move(InitialLocation);
	Parms.InitialVelocity = std::move(InitialVelocity);

	UObject::ProcessEvent(Func, &Parms);

	if (OutHitResult != nullptr)
		*OutHitResult = std::move(Parms.OutHitResult);

	if (OutSplinePoints != nullptr)
		*OutSplinePoints = std::move(Parms.OutSplinePoints);

	if (OutSplineTangents != nullptr)
		*OutSplineTangents = std::move(Parms.OutSplineTangents);
}

void UGA_Athena_Consumable_Throw_Parent_C::GetOwningPlayer(class AFortPlayerPawn** Player_Pawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetOwningPlayer");

	Params::GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Player_Pawn != nullptr)
		*Player_Pawn = Parms.Player_Pawn;
}

void UGA_Athena_Consumable_Throw_Parent_C::GetProjectileAdditionalThrowAngleToUse(double* AdditionalThrowAngleToUse) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetProjectileAdditionalThrowAngleToUse");

	Params::GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AdditionalThrowAngleToUse != nullptr)
		*AdditionalThrowAngleToUse = Parms.AdditionalThrowAngleToUse;
}

void UGA_Athena_Consumable_Throw_Parent_C::GetProjectileInitialGravityScaleToUse(double* GravityScaleToUse) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetProjectileInitialGravityScaleToUse");

	Params::GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GravityScaleToUse != nullptr)
		*GravityScaleToUse = Parms.GravityScaleToUse;
}

void UGA_Athena_Consumable_Throw_Parent_C::GetProjectileInitialSpeedToUse(double* ProjectileSpeedToUse) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetProjectileInitialSpeedToUse");

	Params::GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ProjectileSpeedToUse != nullptr)
		*ProjectileSpeedToUse = Parms.ProjectileSpeedToUse;
}

TSubclassOf<class AFortProjectileTrajectory> UGA_Athena_Consumable_Throw_Parent_C::GetProjectileTrajectoryActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetProjectileTrajectoryActor");

	Params::GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UGA_Athena_Consumable_Throw_Parent_C::GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetSpawnLocationAndRotation");

	Params::GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);
}

void UGA_Athena_Consumable_Throw_Parent_C::IsTrajectoryLocationValid(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents, const struct FHitResult& TrajectoryHitResult, bool* bIsLocationValid) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "IsTrajectoryLocationValid");

	Params::GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid Parms{};

	Parms.SplinePoints = std::move(SplinePoints);
	Parms.SplineTangents = std::move(SplineTangents);
	Parms.TrajectoryHitResult = std::move(TrajectoryHitResult);

	UObject::ProcessEvent(Func, &Parms);

	SplinePoints = std::move(Parms.SplinePoints);
	SplineTangents = std::move(Parms.SplineTangents);

	if (bIsLocationValid != nullptr)
		*bIsLocationValid = Parms.bIsLocationValid;
}

bool UGA_Athena_Consumable_Throw_Parent_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "K2_CanActivateAbility");

	Params::GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

bool UGA_Athena_Consumable_Throw_Parent_C::ShouldOnlyShowTrajectoryOnUse() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "ShouldOnlyShowTrajectoryOnUse");

	Params::GA_Athena_Consumable_Throw_Parent_C_ShouldOnlyShowTrajectoryOnUse Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
