#pragma once

#include "Basic.hpp"

#include "AthenaFunctionLibrary_classes.hpp"
#include "AthenaFunctionLibrary_parameters.hpp"

namespace SDK
{

void UAthenaFunctionLibrary_C::AllOnSameTeam(const class AActor* Actor, const TArray<class AActor*>& ActorArray, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaFunctionLibrary_C", "AllOnSameTeam");

	Params::AthenaFunctionLibrary_C_AllOnSameTeam Parms{};

	Parms.Actor = Actor;
	Parms.ActorArray = std::move(ActorArray);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

void UAthenaFunctionLibrary_C::CreateEnvironmentalKnockbackExplosion(const struct FVector& ExplosionSourcePoint, double ExplosionRadius, double Intensity, double MinKnockbackAngle, bool Reverse, class AActor* SpecificActor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaFunctionLibrary_C", "CreateEnvironmentalKnockbackExplosion");

	Params::AthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion Parms{};

	Parms.ExplosionSourcePoint = std::move(ExplosionSourcePoint);
	Parms.ExplosionRadius = ExplosionRadius;
	Parms.Intensity = Intensity;
	Parms.MinKnockbackAngle = MinKnockbackAngle;
	Parms.Reverse = Reverse;
	Parms.SpecificActor = SpecificActor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAthenaFunctionLibrary_C::GetActorMeshExtents(class AActor* Actor, class UObject* __WorldContext, struct FVector* BoundingBoxExtents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaFunctionLibrary_C", "GetActorMeshExtents");

	Params::AthenaFunctionLibrary_C_GetActorMeshExtents Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (BoundingBoxExtents != nullptr)
		*BoundingBoxExtents = std::move(Parms.BoundingBoxExtents);
}

void UAthenaFunctionLibrary_C::GetPlayerGroundedZ(class AFortPlayerPawn* PlayerPawn, class UObject* __WorldContext, double* Ground_Z)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaFunctionLibrary_C", "GetPlayerGroundedZ");

	Params::AthenaFunctionLibrary_C_GetPlayerGroundedZ Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Ground_Z != nullptr)
		*Ground_Z = Parms.Ground_Z;
}

struct FGameplayEffectContextHandle UAthenaFunctionLibrary_C::MakeSimpleFortEffectContext(class AActor* Instigator, class AActor* Damage_Source, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaFunctionLibrary_C", "MakeSimpleFortEffectContext");

	Params::AthenaFunctionLibrary_C_MakeSimpleFortEffectContext Parms{};

	Parms.Instigator = Instigator;
	Parms.Damage_Source = Damage_Source;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UAthenaFunctionLibrary_C::RowToBool(const struct FScalableFloat& Input, double Level, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaFunctionLibrary_C", "RowToBool");

	Params::AthenaFunctionLibrary_C_RowToBool Parms{};

	Parms.Input = std::move(Input);
	Parms.Level = Level;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UAthenaFunctionLibrary_C::SetPOITextWithContextTag(const struct FGameplayTag& POI_Tag, const struct FGameplayTagContainer& Context_Tags, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaFunctionLibrary_C", "SetPOITextWithContextTag");

	Params::AthenaFunctionLibrary_C_SetPOITextWithContextTag Parms{};

	Parms.POI_Tag = std::move(POI_Tag);
	Parms.Context_Tags = std::move(Context_Tags);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UAthenaFunctionLibrary_C::ShouldAllowDeathEffects(const struct FGameplayTagContainer& Damage_Or_Death_Tags, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaFunctionLibrary_C", "ShouldAllowDeathEffects");

	Params::AthenaFunctionLibrary_C_ShouldAllowDeathEffects Parms{};

	Parms.Damage_Or_Death_Tags = std::move(Damage_Or_Death_Tags);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UAthenaFunctionLibrary_C::SpawnLootFromArray(TArray<struct FFortItemEntry>& Array, const struct FVector& Position, const struct FVector& Direction, int32 OverrideMaxStackCount, bool bToss, bool bRandomRotation, bool bBlockedFromAutoPickup, int32 PickupInstigatorHandle, EFortPickupSourceTypeFlag SourceType, EFortPickupSpawnSource Source, class AFortPlayerController* OptionalOwnerPC, bool bPickupOnlyRelevantToOwner, class UObject* __WorldContext, TArray<class AFortPickup*>* ItemPickupsSpawned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaFunctionLibrary_C", "SpawnLootFromArray");

	Params::AthenaFunctionLibrary_C_SpawnLootFromArray Parms{};

	Parms.Array = std::move(Array);
	Parms.Position = std::move(Position);
	Parms.Direction = std::move(Direction);
	Parms.OverrideMaxStackCount = OverrideMaxStackCount;
	Parms.bToss = bToss;
	Parms.bRandomRotation = bRandomRotation;
	Parms.bBlockedFromAutoPickup = bBlockedFromAutoPickup;
	Parms.PickupInstigatorHandle = PickupInstigatorHandle;
	Parms.SourceType = SourceType;
	Parms.Source = Source;
	Parms.OptionalOwnerPC = OptionalOwnerPC;
	Parms.bPickupOnlyRelevantToOwner = bPickupOnlyRelevantToOwner;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (ItemPickupsSpawned != nullptr)
		*ItemPickupsSpawned = std::move(Parms.ItemPickupsSpawned);
}

void UAthenaFunctionLibrary_C::SpawnLootFromTable(const class FName TierGroupName, const int32 WorldLevel, const int32 ForcedLootTier, const struct FVector& Position, const struct FVector& Direction, int32 OverrideMaxStackCount, bool bToss, bool bRandomRotation, bool bBlockedFromAutoPickup, int32 PickupInstigatorHandle, EFortPickupSourceTypeFlag SourceType, EFortPickupSpawnSource Source, class AFortPlayerController* OptionalOwnerPC, bool bPickupOnlyRelevantToOwner, class UObject* __WorldContext, TArray<class AFortPickup*>* ItemPickupsSpawned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaFunctionLibrary_C", "SpawnLootFromTable");

	Params::AthenaFunctionLibrary_C_SpawnLootFromTable Parms{};

	Parms.TierGroupName = TierGroupName;
	Parms.WorldLevel = WorldLevel;
	Parms.ForcedLootTier = ForcedLootTier;
	Parms.Position = std::move(Position);
	Parms.Direction = std::move(Direction);
	Parms.OverrideMaxStackCount = OverrideMaxStackCount;
	Parms.bToss = bToss;
	Parms.bRandomRotation = bRandomRotation;
	Parms.bBlockedFromAutoPickup = bBlockedFromAutoPickup;
	Parms.PickupInstigatorHandle = PickupInstigatorHandle;
	Parms.SourceType = SourceType;
	Parms.Source = Source;
	Parms.OptionalOwnerPC = OptionalOwnerPC;
	Parms.bPickupOnlyRelevantToOwner = bPickupOnlyRelevantToOwner;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ItemPickupsSpawned != nullptr)
		*ItemPickupsSpawned = std::move(Parms.ItemPickupsSpawned);
}

void UAthenaFunctionLibrary_C::UnclampedLerp(double A, double B, double Alpha, class UObject* __WorldContext, double* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaFunctionLibrary_C", "UnclampedLerp");

	Params::AthenaFunctionLibrary_C_UnclampedLerp Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.Alpha = Alpha;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}

}
