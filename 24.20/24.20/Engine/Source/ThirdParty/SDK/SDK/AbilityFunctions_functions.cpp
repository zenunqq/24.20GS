#pragma once

#include "Basic.hpp"

#include "AbilityFunctions_classes.hpp"
#include "AbilityFunctions_parameters.hpp"

namespace SDK
{

void UAbilityFunctions_C::ApplySlowFall(double SlowFallDuration, class UFortGameplayAbility* SelfGameplayAbilityReference, class UClass* GameplayEffect, class UObject* __WorldContext, struct FActiveGameplayEffectHandle* EffectSpecHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "ApplySlowFall");

	Params::AbilityFunctions_C_ApplySlowFall Parms{};

	Parms.SlowFallDuration = SlowFallDuration;
	Parms.SelfGameplayAbilityReference = SelfGameplayAbilityReference;
	Parms.GameplayEffect = GameplayEffect;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (EffectSpecHandle != nullptr)
		*EffectSpecHandle = std::move(Parms.EffectSpecHandle);
}

void UAbilityFunctions_C::ConvertRangeToTiles(double InRange, class UObject* __WorldContext, double* OutTile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "ConvertRangeToTiles");

	Params::AbilityFunctions_C_ConvertRangeToTiles Parms{};

	Parms.InRange = InRange;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTile != nullptr)
		*OutTile = Parms.OutTile;
}

void UAbilityFunctions_C::DoNOTUse_BuildArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, class UObject* __WorldContext, TArray<class AActor*>* HitActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "DoNOTUse-BuildArrayOfHitActors");

	Params::AbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HitActors != nullptr)
		*HitActors = std::move(Parms.HitActors);
}

void UAbilityFunctions_C::EvaluatePerkTierBalanceValue(const struct FScalableFloat& T01_Balance_Value, const struct FScalableFloat& T02_Balance_Value, bool Owns_T02, bool Should_Override_T01, class UObject* __WorldContext, struct FScalableFloat* Balance_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "EvaluatePerkTierBalanceValue");

	Params::AbilityFunctions_C_EvaluatePerkTierBalanceValue Parms{};

	Parms.T01_Balance_Value = std::move(T01_Balance_Value);
	Parms.T02_Balance_Value = std::move(T02_Balance_Value);
	Parms.Owns_T02 = Owns_T02;
	Parms.Should_Override_T01 = Should_Override_T01;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Balance_Value != nullptr)
		*Balance_Value = std::move(Parms.Balance_Value);
}

void UAbilityFunctions_C::GetAngleBetweenTwoVectors(const struct FVector& VectorA, const struct FVector& VectorB, class UObject* __WorldContext, double* Angle__Degrees_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "GetAngleBetweenTwoVectors");

	Params::AbilityFunctions_C_GetAngleBetweenTwoVectors Parms{};

	Parms.VectorA = std::move(VectorA);
	Parms.VectorB = std::move(VectorB);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Angle__Degrees_ != nullptr)
		*Angle__Degrees_ = Parms.Angle__Degrees_;
}

void UAbilityFunctions_C::GetDistanceBetweenActors(class AActor* Actor1, class AActor* Actor2, class UObject* __WorldContext, double* Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "GetDistanceBetweenActors");

	Params::AbilityFunctions_C_GetDistanceBetweenActors Parms{};

	Parms.Actor1 = Actor1;
	Parms.Actor2 = Actor2;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Distance != nullptr)
		*Distance = Parms.Distance;
}

void UAbilityFunctions_C::GetDistanceSquaredBetweenActors(class AActor* Actor_1, class AActor* Actor_2, class UObject* __WorldContext, double* Distance_Squared)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "GetDistanceSquaredBetweenActors");

	Params::AbilityFunctions_C_GetDistanceSquaredBetweenActors Parms{};

	Parms.Actor_1 = Actor_1;
	Parms.Actor_2 = Actor_2;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Distance_Squared != nullptr)
		*Distance_Squared = Parms.Distance_Squared;
}

void UAbilityFunctions_C::GetPawnFromPlayerStateZone(class AActor* InActor, class UObject* __WorldContext, class AFortPlayerPawn** OutPawn, bool* PawnReturned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "GetPawnFromPlayerStateZone");

	Params::AbilityFunctions_C_GetPawnFromPlayerStateZone Parms{};

	Parms.InActor = InActor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutPawn != nullptr)
		*OutPawn = Parms.OutPawn;

	if (PawnReturned != nullptr)
		*PawnReturned = Parms.PawnReturned;
}

void UAbilityFunctions_C::GetProjectedTeleportLocation(class AActor* Actor, double MovementDistance, class UObject* __WorldContext, struct FVector* TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "GetProjectedTeleportLocation");

	Params::AbilityFunctions_C_GetProjectedTeleportLocation Parms{};

	Parms.Actor = Actor;
	Parms.MovementDistance = MovementDistance;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (TargetLocation != nullptr)
		*TargetLocation = std::move(Parms.TargetLocation);
}

void UAbilityFunctions_C::GetRangeFromGameplayEffectContainer(const struct FFortGameplayEffectContainer& GE_Container, int32 Target_Selection_List_Index, double At_Level, class UObject* __WorldContext, double* Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "GetRangeFromGameplayEffectContainer");

	Params::AbilityFunctions_C_GetRangeFromGameplayEffectContainer Parms{};

	Parms.GE_Container = std::move(GE_Container);
	Parms.Target_Selection_List_Index = Target_Selection_List_Index;
	Parms.At_Level = At_Level;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;
}

void UAbilityFunctions_C::GetRangeFromGameplayEffectContainerSpec(const struct FFortGameplayEffectContainerSpec& GE_Container_Spec, int32 Target_Selection_List_Index, double At_Level, class UObject* __WorldContext, double* Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "GetRangeFromGameplayEffectContainerSpec");

	Params::AbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec Parms{};

	Parms.GE_Container_Spec = std::move(GE_Container_Spec);
	Parms.Target_Selection_List_Index = Target_Selection_List_Index;
	Parms.At_Level = At_Level;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;
}

void UAbilityFunctions_C::GetTotalGameplayEffectCount(TArray<class UClass*>& EffectsToCount, class UAbilitySystemComponent* AbilitySystemComponent, class UObject* __WorldContext, int32* FinalEffectCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "GetTotalGameplayEffectCount");

	Params::AbilityFunctions_C_GetTotalGameplayEffectCount Parms{};

	Parms.EffectsToCount = std::move(EffectsToCount);
	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	EffectsToCount = std::move(Parms.EffectsToCount);

	if (FinalEffectCount != nullptr)
		*FinalEffectCount = Parms.FinalEffectCount;
}

void UAbilityFunctions_C::SetArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, TArray<class AActor*>& ArrayToSet, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityFunctions_C", "SetArrayOfHitActors");

	Params::AbilityFunctions_C_SetArrayOfHitActors Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ArrayToSet = std::move(ArrayToSet);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	ArrayToSet = std::move(Parms.ArrayToSet);
}

}
