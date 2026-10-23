#pragma once

#include "Basic.hpp"

#include "GA_Athena_ZipLine_SmashParent_classes.hpp"
#include "GA_Athena_ZipLine_SmashParent_parameters.hpp"

namespace SDK
{

void UGA_Athena_ZipLine_SmashParent_C::Added_5A9C02A9480D39B213A8AC81767C7A76()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Added_5A9C02A9480D39B213A8AC81767C7A76");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::BindEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "BindEvent");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::BreakNearbyStructures(class AFortPlayerPawn* PlayerPawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "BreakNearbyStructures");

	Params::GA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures Parms{};

	Parms.PlayerPawn_0 = PlayerPawn_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_ZipLine_SmashParent_C::CheckForQuestProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "CheckForQuestProgress");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::CheckMotor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "CheckMotor");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::DelaySpawnMotor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "DelaySpawnMotor");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::EndAsyncBreakNearbyStructuresOverlap(const TArray<class AActor*>& OverlapActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "EndAsyncBreakNearbyStructuresOverlap");

	Params::GA_Athena_ZipLine_SmashParent_C_EndAsyncBreakNearbyStructuresOverlap Parms{};

	Parms.OverlapActors = std::move(OverlapActors);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_ZipLine_SmashParent_C::EnterWaterExit(class AFortPlayerPawn* FortPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "EnterWaterExit");

	Params::GA_Athena_ZipLine_SmashParent_C_EnterWaterExit Parms{};

	Parms.FortPlayerPawn = FortPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_ZipLine_SmashParent_C::ExecuteUbergraph_GA_Athena_ZipLine_SmashParent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "ExecuteUbergraph_GA_Athena_ZipLine_SmashParent");

	Params::GA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_ZipLine_SmashParent_C::FallingTagRemoved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "FallingTagRemoved");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::GameplayEvent_ZiplineEnter_BeginZiplining()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "GameplayEvent_ZiplineEnter_BeginZiplining");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::GameplayTagEvent_ZiplineEnter(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "GameplayTagEvent_ZiplineEnter");

	Params::GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineEnter Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_ZipLine_SmashParent_C::GameplayTagEvent_ZiplineExit(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "GameplayTagEvent_ZiplineExit");

	Params::GA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineExit Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_ZipLine_SmashParent_C::Get_Zipline_Motor_Offset(struct FVector* Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Get Zipline Motor Offset");

	Params::GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Motor_Offset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);
}

void UGA_Athena_ZipLine_SmashParent_C::Get_Zipline_Pole_A_Socket_Loc(struct FVector* PoleBSocketLoc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Get Zipline Pole A Socket Loc");

	Params::GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PoleBSocketLoc != nullptr)
		*PoleBSocketLoc = std::move(Parms.PoleBSocketLoc);
}

void UGA_Athena_ZipLine_SmashParent_C::Get_Zipline_Pole_B_Socket_Loc(struct FVector* PoleBSocketLoc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Get Zipline Pole B Socket Loc");

	Params::GA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PoleBSocketLoc != nullptr)
		*PoleBSocketLoc = std::move(Parms.PoleBSocketLoc);
}

void UGA_Athena_ZipLine_SmashParent_C::GetZiplineRotationForMotor(struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "GetZiplineRotationForMotor");

	Params::GA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);
}

void UGA_Athena_ZipLine_SmashParent_C::HandleClientSplineZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "HandleClientSplineZiplineStateChanged");

	Params::GA_Athena_ZipLine_SmashParent_C_HandleClientSplineZiplineStateChanged Parms{};

	Parms.bIsZiplining = bIsZiplining;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_ZipLine_SmashParent_C::HandleGameplayEventTag(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "HandleGameplayEventTag");

	Params::GA_Athena_ZipLine_SmashParent_C_HandleGameplayEventTag Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_ZipLine_SmashParent_C::HandleZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "HandleZiplineStateChanged");

	Params::GA_Athena_ZipLine_SmashParent_C_HandleZiplineStateChanged Parms{};

	Parms.bIsZiplining = bIsZiplining;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_ZipLine_SmashParent_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Athena_ZipLine_SmashParent_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_ZipLine_SmashParent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "K2_OnEndAbility");

	Params::GA_Athena_ZipLine_SmashParent_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_ZipLine_SmashParent_C::OnBeginSkydiving_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "OnBeginSkydiving_Bind");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::OnEnteredAircraft_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "OnEnteredAircraft_Bind");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::OnEnterVehicle_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "OnEnterVehicle_Bind");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::OnPawnDied(const class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "OnPawnDied");

	Params::GA_Athena_ZipLine_SmashParent_C_OnPawnDied Parms{};

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

void UGA_Athena_ZipLine_SmashParent_C::OnPawnLanded_Bind(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "OnPawnLanded_Bind");

	Params::GA_Athena_ZipLine_SmashParent_C_OnPawnLanded_Bind Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_ZipLine_SmashParent_C::Pre_BeginZiplinging()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Pre_BeginZiplinging");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::Remove_Fall_Damage_Immunity_Delayed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Remove Fall Damage Immunity Delayed");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::Removed_A0F18316443E5C5267615C9692274B36()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Removed_A0F18316443E5C5267615C9692274B36");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::RemoveFallDamageImmunity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "RemoveFallDamageImmunity");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::Spawn_Motor(class AActor* PlayerPawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Spawn Motor");

	Params::GA_Athena_ZipLine_SmashParent_C_Spawn_Motor Parms{};

	Parms.PlayerPawn_0 = PlayerPawn_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_ZipLine_SmashParent_C::SplineZiplineMovementModeDelayOver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "SplineZiplineMovementModeDelayOver");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::StartSurroundingsCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "StartSurroundingsCheck");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::SurroundingsCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "SurroundingsCheck");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::SurroundingsCheck_MotorCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "SurroundingsCheck_MotorCheck");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::SurroundingsCheck_SmashObjects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "SurroundingsCheck_SmashObjects");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::SurruondingsCheck_VehicleCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "SurruondingsCheck_VehicleCheck");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::SwimmingStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "SwimmingStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::ZiplinePostBegin_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "ZiplinePostBegin_Event");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_SmashParent_C::ZipliningComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "ZipliningComplete");

	UObject::ProcessEvent(Func, nullptr);
}

}
