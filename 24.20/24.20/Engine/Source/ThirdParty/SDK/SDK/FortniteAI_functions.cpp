#pragma once
#include "pch.h"

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"
#include "FortniteAI_parameters.hpp"

namespace SDK
{

void UFortNavModifierComponent::SetComponentAffectingNavMesh(class UPrimitiveComponent* InComponentAffectingNavMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNavModifierComponent", "SetComponentAffectingNavMesh");

	Params::FortNavModifierComponent_SetComponentAffectingNavMesh Parms{};

	Parms.InComponentAffectingNavMesh = InComponentAffectingNavMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPhysicsObjectNavigationComponent::OnSleepStateChanged(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPhysicsObjectNavigationComponent", "OnSleepStateChanged");

	Params::FortPhysicsObjectNavigationComponent_OnSleepStateChanged Parms{};

	Parms.SimulatingComponent = SimulatingComponent;
	Parms.bIsAwake = bIsAwake;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float IFortAIEnvironmentalDangerSourceInterface::GetDangerAtLocation(const struct FVector& Location) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEnvironmentalDangerSourceInterface", "GetDangerAtLocation");

	Params::FortAIEnvironmentalDangerSourceInterface_GetDangerAtLocation Parms{};

	Parms.Location = std::move(Location);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool IFortAIEnvironmentalDangerSourceInterface::GetDangerSourceActive() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEnvironmentalDangerSourceInterface", "GetDangerSourceActive");

	Params::FortAIEnvironmentalDangerSourceInterface_GetDangerSourceActive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FBox IFortAIEnvironmentalDangerSourceInterface::GetDangerSourceBounds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEnvironmentalDangerSourceInterface", "GetDangerSourceBounds");

	Params::FortAIEnvironmentalDangerSourceInterface_GetDangerSourceBounds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortCreativeCreatureManagerComponent* UFortCreativeCreatureManagerInfoComponent::GetCreatureManagerComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetCreatureManagerComponent");

	Params::FortCreativeCreatureManagerInfoComponent_GetCreatureManagerComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortCreativeCreatureManagerInfoComponent::GetInvalidFloat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetInvalidFloat");

	Params::FortCreativeCreatureManagerInfoComponent_GetInvalidFloat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortCreativeCreatureManagerInfoComponent::GetInvalidInt32()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetInvalidInt32");

	Params::FortCreativeCreatureManagerInfoComponent_GetInvalidInt32 Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortCreativeCreatureManagerInfoComponent::ResetEnvironmentalDamageOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetEnvironmentalDamageOverride");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::ResetHearingAggroRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetHearingAggroRange");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::ResetMaxHealth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetMaxHealth");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::ResetMovementSpeedMultiplier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetMovementSpeedMultiplier");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::ResetOverrideDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetOverrideDamage");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::ResetScoreDistribution()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetScoreDistribution");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::ResetScorePoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetScorePoints");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::ResetWeaponKnockbackImmunity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetWeaponKnockbackImmunity");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetAffectedTargetsType(ECreatureManagerAffectedTargets InAffectedTargetsType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetAffectedTargetsType");

	Params::FortCreativeCreatureManagerInfoComponent_SetAffectedTargetsType Parms{};

	Parms.InAffectedTargetsType = InAffectedTargetsType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetCreatureBlueprintClass(TSoftClassPtr<class UClass> InCreatureBlueprintClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetCreatureBlueprintClass");

	Params::FortCreativeCreatureManagerInfoComponent_SetCreatureBlueprintClass Parms{};

	Parms.InCreatureBlueprintClass = InCreatureBlueprintClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetCreatureManagerComponent(class UFortCreativeCreatureManagerComponent* InCreatureManagerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetCreatureManagerComponent");

	Params::FortCreativeCreatureManagerInfoComponent_SetCreatureManagerComponent Parms{};

	Parms.InCreatureManagerComponent = InCreatureManagerComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetDamageOverrideEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetDamageOverrideEffect");

	Params::FortCreativeCreatureManagerInfoComponent_SetDamageOverrideEffect Parms{};

	Parms.Effect = Effect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetDamageOverrideTag(const struct FGameplayTag& tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetDamageOverrideTag");

	Params::FortCreativeCreatureManagerInfoComponent_SetDamageOverrideTag Parms{};

	Parms.tag = std::move(tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetEnvironmentalDamageOverride(float InOverrideDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetEnvironmentalDamageOverride");

	Params::FortCreativeCreatureManagerInfoComponent_SetEnvironmentalDamageOverride Parms{};

	Parms.InOverrideDamage = InOverrideDamage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetEnvironmentalDamageOverrideEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetEnvironmentalDamageOverrideEffect");

	Params::FortCreativeCreatureManagerInfoComponent_SetEnvironmentalDamageOverrideEffect Parms{};

	Parms.Effect = Effect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetHearingAggroRange(float InHearingAggroRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetHearingAggroRange");

	Params::FortCreativeCreatureManagerInfoComponent_SetHearingAggroRange Parms{};

	Parms.InHearingAggroRange = InHearingAggroRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetMaxHealth(int32 InMaxHealth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMaxHealth");

	Params::FortCreativeCreatureManagerInfoComponent_SetMaxHealth Parms{};

	Parms.InMaxHealth = InMaxHealth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetMaxHealthOverrideEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMaxHealthOverrideEffect");

	Params::FortCreativeCreatureManagerInfoComponent_SetMaxHealthOverrideEffect Parms{};

	Parms.Effect = Effect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetMaxHealthOverrideTag(const struct FGameplayTag& tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMaxHealthOverrideTag");

	Params::FortCreativeCreatureManagerInfoComponent_SetMaxHealthOverrideTag Parms{};

	Parms.tag = std::move(tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetMovementOverrideTag(const struct FGameplayTag& tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMovementOverrideTag");

	Params::FortCreativeCreatureManagerInfoComponent_SetMovementOverrideTag Parms{};

	Parms.tag = std::move(tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetMovementSpeedMultiplier(float InOverrideMovementSpeedMultiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMovementSpeedMultiplier");

	Params::FortCreativeCreatureManagerInfoComponent_SetMovementSpeedMultiplier Parms{};

	Parms.InOverrideMovementSpeedMultiplier = InOverrideMovementSpeedMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetMovementSpeedOverrideEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMovementSpeedOverrideEffect");

	Params::FortCreativeCreatureManagerInfoComponent_SetMovementSpeedOverrideEffect Parms{};

	Parms.Effect = Effect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetOverrideDamage(float InOverrideDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetOverrideDamage");

	Params::FortCreativeCreatureManagerInfoComponent_SetOverrideDamage Parms{};

	Parms.InOverrideDamage = InOverrideDamage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetScoreDistribution(const EScoreDistributionType InScoreDistribution)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetScoreDistribution");

	Params::FortCreativeCreatureManagerInfoComponent_SetScoreDistribution Parms{};

	Parms.InScoreDistribution = InScoreDistribution;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetScorePoints(int32 InScorePoints)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetScorePoints");

	Params::FortCreativeCreatureManagerInfoComponent_SetScorePoints Parms{};

	Parms.InScorePoints = InScorePoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetWeaponKnockbackImmunity(bool InImmuneToWeaponKnockback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetWeaponKnockbackImmunity");

	Params::FortCreativeCreatureManagerInfoComponent_SetWeaponKnockbackImmunity Parms{};

	Parms.InImmuneToWeaponKnockback = InImmuneToWeaponKnockback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerInfoComponent::SetWeaponKnockbackImmunityEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetWeaponKnockbackImmunityEffect");

	Params::FortCreativeCreatureManagerInfoComponent_SetWeaponKnockbackImmunityEffect Parms{};

	Parms.Effect = Effect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

ECreatureManagerAffectedTargets UFortCreativeCreatureManagerInfoComponent::GetAffectedTargetsType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetAffectedTargetsType");

	Params::FortCreativeCreatureManagerInfoComponent_GetAffectedTargetsType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TSoftClassPtr<class UClass> UFortCreativeCreatureManagerInfoComponent::GetCreatureBlueprintClass() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetCreatureBlueprintClass");

	Params::FortCreativeCreatureManagerInfoComponent_GetCreatureBlueprintClass Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortCreativeCreatureManagerInfoComponent::GetEnvironmentalDamageOverride() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetEnvironmentalDamageOverride");

	Params::FortCreativeCreatureManagerInfoComponent_GetEnvironmentalDamageOverride Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortCreativeCreatureManagerInfoComponent::GetHearingAggroRange() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetHearingAggroRange");

	Params::FortCreativeCreatureManagerInfoComponent_GetHearingAggroRange Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortCreativeCreatureManagerInfoComponent::GetMaxHealth() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetMaxHealth");

	Params::FortCreativeCreatureManagerInfoComponent_GetMaxHealth Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortCreativeCreatureManagerInfoComponent::GetMovementSpeedMultiplier() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetMovementSpeedMultiplier");

	Params::FortCreativeCreatureManagerInfoComponent_GetMovementSpeedMultiplier Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortCreativeCreatureManagerInfoComponent::GetOverrideDamage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetOverrideDamage");

	Params::FortCreativeCreatureManagerInfoComponent_GetOverrideDamage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EScoreDistributionType UFortCreativeCreatureManagerInfoComponent::GetScoreDistribution() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetScoreDistribution");

	Params::FortCreativeCreatureManagerInfoComponent_GetScoreDistribution Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortCreativeCreatureManagerInfoComponent::GetScorePoints() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetScorePoints");

	Params::FortCreativeCreatureManagerInfoComponent_GetScorePoints Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortCreativeCreatureManagerInfoComponent::GetWeaponKnockbackImmunity() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetWeaponKnockbackImmunity");

	Params::FortCreativeCreatureManagerInfoComponent_GetWeaponKnockbackImmunity Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaAISpawnerDataComponent_ConstructionBase::GetConstructionBuildingInfo(struct FConstructionBuildingList* OutConstructionInfoList) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_ConstructionBase", "GetConstructionBuildingInfo");

	Params::FortAthenaAISpawnerDataComponent_ConstructionBase_GetConstructionBuildingInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutConstructionInfoList != nullptr)
		*OutConstructionInfoList = std::move(Parms.OutConstructionInfoList);

	return Parms.ReturnValue;
}

class UBehaviorTree* UFortAthenaAISpawnerDataComponent_BehaviorBase::GetBehaviorTree()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_BehaviorBase", "GetBehaviorTree");

	Params::FortAthenaAISpawnerDataComponent_BehaviorBase_GetBehaviorTree Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAIGoalProvider::InitializeGoalProvider(class UWorld* ContextWorld, class UFortAIAssignment* Assignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIGoalProvider", "InitializeGoalProvider");

	Params::FortAIGoalProvider_InitializeGoalProvider Parms{};

	Parms.ContextWorld = ContextWorld;
	Parms.Assignment = Assignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAIGoalProvider::UpdateGoals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIGoalProvider", "UpdateGoals");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UFortAIEncounterInfo* UFortAIGoalProvider::GetEncounterInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIGoalProvider", "GetEncounterInfo");

	Params::FortAIGoalProvider_GetEncounterInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAILODSettingsContainer* UFortAthenaAISpawnerDataComponent_LODBase::GetAILODSettingsContainer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_LODBase", "GetAILODSettingsContainer");

	Params::FortAthenaAISpawnerDataComponent_LODBase_GetAILODSettingsContainer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FClientAILODSettings UFortAthenaAISpawnerDataComponent_LODBase::GetClientAILODSettings() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_LODBase", "GetClientAILODSettings");

	Params::FortAthenaAISpawnerDataComponent_LODBase_GetClientAILODSettings Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AAIHotSpot::AssignFromWaitingList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "AssignFromWaitingList");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int32 AAIHotSpot::AssignGroupToHotspot(const TArray<class AAIController*>& GroupOfAI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "AssignGroupToHotspot");

	Params::AIHotSpot_AssignGroupToHotspot Parms{};

	Parms.GroupOfAI = std::move(GroupOfAI);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AAIHotSpot::AssignToHotspot(class AAIController* AI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "AssignToHotspot");

	Params::AIHotSpot_AssignToHotspot Parms{};

	Parms.AI = AI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AAIHotSpot::AssignToSlotByIndex(class AAIController* AI, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "AssignToSlotByIndex");

	Params::AIHotSpot_AssignToSlotByIndex Parms{};

	Parms.AI = AI;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AAIHotSpot::OccupySlotByIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OccupySlotByIndex");

	Params::AIHotSpot_OccupySlotByIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AAIHotSpot::OnAssignedClaimedBehavior(class AAIController* AI, int32 Index_0, int32 UserId, bool bWasOnWaitingList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OnAssignedClaimedBehavior");

	Params::AIHotSpot_OnAssignedClaimedBehavior Parms{};

	Parms.AI = AI;
	Parms.Index_0 = Index_0;
	Parms.UserId = UserId;
	Parms.bWasOnWaitingList = bWasOnWaitingList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AAIHotSpot::OnAssignedOccupiedBehavior(class AAIController* AI, int32 Index_0, int32 UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OnAssignedOccupiedBehavior");

	Params::AIHotSpot_OnAssignedOccupiedBehavior Parms{};

	Parms.AI = AI;
	Parms.Index_0 = Index_0;
	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AAIHotSpot::OnAssignedSlotlessBehavior(class AAIController* AI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OnAssignedSlotlessBehavior");

	Params::AIHotSpot_OnAssignedSlotlessBehavior Parms{};

	Parms.AI = AI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AAIHotSpot::OnHotSpotDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OnHotSpotDisabled");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AAIHotSpot::OnHotSpotEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OnHotSpotEnabled");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AAIHotSpot::OnMoveToSlotFinished(class AAIController* AI, int32 Index_0, int32 UserId, bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OnMoveToSlotFinished");

	Params::AIHotSpot_OnMoveToSlotFinished Parms{};

	Parms.AI = AI;
	Parms.Index_0 = Index_0;
	Parms.UserId = UserId;
	Parms.bResult = bResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AAIHotSpot::OnRemovedBehavior(class AAIController* AI, int32 Index_0, int32 UserId, EAIHotSpotSlot PrevState, bool bWasOnWaitingList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OnRemovedBehavior");

	Params::AIHotSpot_OnRemovedBehavior Parms{};

	Parms.AI = AI;
	Parms.Index_0 = Index_0;
	Parms.UserId = UserId;
	Parms.PrevState = PrevState;
	Parms.bWasOnWaitingList = bWasOnWaitingList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AAIHotSpot::OnRemovedSlotlessBehavior(class AAIController* AI, bool bIsClamingSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OnRemovedSlotlessBehavior");

	Params::AIHotSpot_OnRemovedSlotlessBehavior Parms{};

	Parms.AI = AI;
	Parms.bIsClamingSlot = bIsClamingSlot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AAIHotSpot::OnSlotBlocked(class AAIController* AI, int32 Index_0, int32 UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OnSlotBlocked");

	Params::AIHotSpot_OnSlotBlocked Parms{};

	Parms.AI = AI;
	Parms.Index_0 = Index_0;
	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AAIHotSpot::OnSlotClaimed(class AAIController* AI, int32 Index_0, int32 UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OnSlotClaimed");

	Params::AIHotSpot_OnSlotClaimed Parms{};

	Parms.AI = AI;
	Parms.Index_0 = Index_0;
	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AAIHotSpot::OnSlotDisabled(int32 Index_0, int32 UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OnSlotDisabled");

	Params::AIHotSpot_OnSlotDisabled Parms{};

	Parms.Index_0 = Index_0;
	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AAIHotSpot::OnSlotEnabled(int32 Index_0, int32 UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OnSlotEnabled");

	Params::AIHotSpot_OnSlotEnabled Parms{};

	Parms.Index_0 = Index_0;
	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AAIHotSpot::OnSlotFreed(class AAIController* AI, int32 Index_0, int32 UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OnSlotFreed");

	Params::AIHotSpot_OnSlotFreed Parms{};

	Parms.AI = AI;
	Parms.Index_0 = Index_0;
	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AAIHotSpot::OnSlotOccupied(class AAIController* AI, int32 Index_0, int32 UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "OnSlotOccupied");

	Params::AIHotSpot_OnSlotOccupied Parms{};

	Parms.AI = AI;
	Parms.Index_0 = Index_0;
	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool AAIHotSpot::RemoveFromHotspot(class AAIController* AI, bool bAssignFromWaitingList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "RemoveFromHotspot");

	Params::AIHotSpot_RemoveFromHotspot Parms{};

	Parms.AI = AI;
	Parms.bAssignFromWaitingList = bAssignFromWaitingList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 AAIHotSpot::RemoveGroupFromHotspot(const TArray<class AAIController*>& GroupOfAI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "RemoveGroupFromHotspot");

	Params::AIHotSpot_RemoveGroupFromHotspot Parms{};

	Parms.GroupOfAI = std::move(GroupOfAI);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AAIHotSpot::SetEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "SetEnabled");

	Params::AIHotSpot_SetEnabled Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool AAIHotSpot::CanUseSlotByIndex(const class AAIController* AI, int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "CanUseSlotByIndex");

	Params::AIHotSpot_CanUseSlotByIndex Parms{};

	Parms.AI = AI;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 AAIHotSpot::FindBestSlotIndex(class AAIController* AI) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "FindBestSlotIndex");

	Params::AIHotSpot_FindBestSlotIndex Parms{};

	Parms.AI = AI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<int32> AAIHotSpot::FindBestSlotIndices(const TArray<class AAIController*>& AI) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "FindBestSlotIndices");

	Params::AIHotSpot_FindBestSlotIndices Parms{};

	Parms.AI = std::move(AI);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class AAIController*> AAIHotSpot::GetAssignedAI(EAIHotSpotAssignmentFilter Filter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "GetAssignedAI");

	Params::AIHotSpot_GetAssignedAI Parms{};

	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 AAIHotSpot::GetAssignedAICount(EAIHotSpotAssignmentFilter Filter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "GetAssignedAICount");

	Params::AIHotSpot_GetAssignedAICount Parms{};

	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAIHotSpotSlot* AAIHotSpot::GetSlotByIndex(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "GetSlotByIndex");

	Params::AIHotSpot_GetSlotByIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAIHotSpotSlot* AAIHotSpot::GetSlotByOwner(const class AAIController* AIOwner) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "GetSlotByOwner");

	Params::AIHotSpot_GetSlotByOwner Parms{};

	Parms.AIOwner = AIOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 AAIHotSpot::GetSlotCount(EAIHotSpotSlotFilter Filter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "GetSlotCount");

	Params::AIHotSpot_GetSlotCount Parms{};

	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 AAIHotSpot::GetSlotIndexByOwner(const class AAIController* AIOwner) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "GetSlotIndexByOwner");

	Params::AIHotSpot_GetSlotIndexByOwner Parms{};

	Parms.AIOwner = AIOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector AAIHotSpot::GetSlotLocationByIndex(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "GetSlotLocationByIndex");

	Params::AIHotSpot_GetSlotLocationByIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AAIController* AAIHotSpot::GetSlotOwnerByIndex(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "GetSlotOwnerByIndex");

	Params::AIHotSpot_GetSlotOwnerByIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRotator AAIHotSpot::GetSlotRotationByIndex(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "GetSlotRotationByIndex");

	Params::AIHotSpot_GetSlotRotationByIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EAIHotSpotSlot AAIHotSpot::GetSlotStateByIndex(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "GetSlotStateByIndex");

	Params::AIHotSpot_GetSlotStateByIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EAIHotSpotSlot AAIHotSpot::GetSlotStateByOwner(const class AAIController* AIOwner) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "GetSlotStateByOwner");

	Params::AIHotSpot_GetSlotStateByOwner Parms{};

	Parms.AIOwner = AIOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 AAIHotSpot::GetSlotUserIdByIndex(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "GetSlotUserIdByIndex");

	Params::AIHotSpot_GetSlotUserIdByIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AAIHotSpot::HasAssignedAI(const class AAIController* AI, EAIHotSpotAssignmentFilter Filter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "HasAssignedAI");

	Params::AIHotSpot_HasAssignedAI Parms{};

	Parms.AI = AI;
	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AAIHotSpot::HasEnabledSlots() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "HasEnabledSlots");

	Params::AIHotSpot_HasEnabledSlots Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AAIHotSpot::IsAIAllowed(const class AAIController* AI) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "IsAIAllowed");

	Params::AIHotSpot_IsAIAllowed Parms{};

	Parms.AI = AI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AAIHotSpot::IsEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "IsEnabled");

	Params::AIHotSpot_IsEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AAIHotSpot::IsSlotlessAssignmentAllowed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpot", "IsSlotlessAssignmentAllowed");

	Params::AIHotSpot_IsSlotlessAssignmentAllowed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerData::CreateComponentListFromClass(const TSubclassOf<class UFortAthenaAISpawnerData> AISpawnerDataClass, class UObject* OuterObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAthenaAISpawnerData", "CreateComponentListFromClass");

	Params::FortAthenaAISpawnerData_CreateComponentListFromClass Parms{};

	Parms.AISpawnerDataClass = AISpawnerDataClass;
	Parms.OuterObject = OuterObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerData::CreateComponentList(class UObject* OuterObject) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "CreateComponentList");

	Params::FortAthenaAISpawnerData_CreateComponentList Parms{};

	Parms.OuterObject = OuterObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_AffiliationBase* UFortAthenaAISpawnerData::GetAffiliationComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetAffiliationComponent");

	Params::FortAthenaAISpawnerData_GetAffiliationComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_LODBase* UFortAthenaAISpawnerData::GetAILODComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetAILODComponent");

	Params::FortAthenaAISpawnerData_GetAILODComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_AnalyticBase* UFortAthenaAISpawnerData::GetAnalyticComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetAnalyticComponent");

	Params::FortAthenaAISpawnerData_GetAnalyticComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_BehaviorBase* UFortAthenaAISpawnerData::GetBehaviorComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetBehaviorComponent");

	Params::FortAthenaAISpawnerData_GetBehaviorComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* UFortAthenaAISpawnerData::GetChanceEncounterComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetChanceEncounterComponent");

	Params::FortAthenaAISpawnerData_GetChanceEncounterComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_ConversationBase* UFortAthenaAISpawnerData::GetConversationComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetConversationComponent");

	Params::FortAthenaAISpawnerData_GetConversationComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_CosmeticBase* UFortAthenaAISpawnerData::GetCosmeticComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetCosmeticComponent");

	Params::FortAthenaAISpawnerData_GetCosmeticComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_DebugBase* UFortAthenaAISpawnerData::GetDebugComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetDebugComponent");

	Params::FortAthenaAISpawnerData_GetDebugComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* UFortAthenaAISpawnerData::GetGameplayAbilityComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetGameplayAbilityComponent");

	Params::FortAthenaAISpawnerData_GetGameplayAbilityComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_GameplayBase* UFortAthenaAISpawnerData::GetGameplayComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetGameplayComponent");

	Params::FortAthenaAISpawnerData_GetGameplayComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_GroupBase* UFortAthenaAISpawnerData::GetGroupComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetGroupComponent");

	Params::FortAthenaAISpawnerData_GetGroupComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_InventoryBase* UFortAthenaAISpawnerData::GetInventoryComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetInventoryComponent");

	Params::FortAthenaAISpawnerData_GetInventoryComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_OptimBase* UFortAthenaAISpawnerData::GetOptimizationComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetOptimizationComponent");

	Params::FortAthenaAISpawnerData_GetOptimizationComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_PerceptionBase* UFortAthenaAISpawnerData::GetPerceptionComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetPerceptionComponent");

	Params::FortAthenaAISpawnerData_GetPerceptionComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_ScriptBase* UFortAthenaAISpawnerData::GetScriptComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetScriptComponent");

	Params::FortAthenaAISpawnerData_GetScriptComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_SmartObjectBase* UFortAthenaAISpawnerData::GetSmartObjectComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetSmartObjectComponent");

	Params::FortAthenaAISpawnerData_GetSmartObjectComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_SpawnParamsBase* UFortAthenaAISpawnerData::GetSpawnParamsComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetSpawnParamsComponent");

	Params::FortAthenaAISpawnerData_GetSpawnParamsComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_VoiceBase* UFortAthenaAISpawnerData::GetVoiceComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetVoiceComponent");

	Params::FortAthenaAISpawnerData_GetVoiceComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_ConstructionBase* UFortAthenaAIBotSpawnerData::GetConstructionComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetConstructionComponent");

	Params::FortAthenaAIBotSpawnerData_GetConstructionComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_CoverBase* UFortAthenaAIBotSpawnerData::GetCoverComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetCoverComponent");

	Params::FortAthenaAIBotSpawnerData_GetCoverComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_PerksBase* UFortAthenaAIBotSpawnerData::GetPerksComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetPerksComponent");

	Params::FortAthenaAIBotSpawnerData_GetPerksComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_SkillsetBase* UFortAthenaAIBotSpawnerData::GetSkillSetComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetSkillSetComponent");

	Params::FortAthenaAIBotSpawnerData_GetSkillSetComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent_VehicleBase* UFortAthenaAIBotSpawnerData::GetVehicleComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetVehicleComponent");

	Params::FortAthenaAIBotSpawnerData_GetVehicleComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAIHotSpotSlot::ClearSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "ClearSlot");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAIHotSpotSlot::OnStateChanged(class AAIController* SlotOwner, EAIHotSpotSlot NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "OnStateChanged");

	Params::AIHotSpotSlot_OnStateChanged Parms{};

	Parms.SlotOwner = SlotOwner;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}

void UAIHotSpotSlot::SetSlotEnabled(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "SetSlotEnabled");

	Params::AIHotSpotSlot_SetSlotEnabled Parms{};

	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAIHotSpotSlot::SetSlotOwnerAndState(class AAIController* NewOwner, EAIHotSpotSlot NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "SetSlotOwnerAndState");

	Params::AIHotSpotSlot_SetSlotOwnerAndState Parms{};

	Parms.NewOwner = NewOwner;
	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAIHotSpotSlot::SetSlotState(EAIHotSpotSlot NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "SetSlotState");

	Params::AIHotSpotSlot_SetSlotState Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AAIHotSpot* UAIHotSpotSlot::GetHotSpot() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "GetHotSpot");

	Params::AIHotSpotSlot_GetHotSpot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FBox UAIHotSpotSlot::GetSlotBounds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotBounds");

	Params::AIHotSpotSlot_GetSlotBounds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAIHotSpotSlot::GetSlotHeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotHeight");

	Params::AIHotSpotSlot_GetSlotHeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAIHotSpotSlot::GetSlotIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotIndex");

	Params::AIHotSpotSlot_GetSlotIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UAIHotSpotSlot::GetSlotLocation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotLocation");

	Params::AIHotSpotSlot_GetSlotLocation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AAIController* UAIHotSpotSlot::GetSlotOwner() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotOwner");

	Params::AIHotSpotSlot_GetSlotOwner Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAIHotSpotSlot::GetSlotRadius() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotRadius");

	Params::AIHotSpotSlot_GetSlotRadius Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRotator UAIHotSpotSlot::GetSlotRotation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotRotation");

	Params::AIHotSpotSlot_GetSlotRotation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EAIHotSpotSlot UAIHotSpotSlot::GetSlotState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotState");

	Params::AIHotSpotSlot_GetSlotState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAIHotSpotSlot::GetSlotUserId() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotUserId");

	Params::AIHotSpotSlot_GetSlotUserId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAIHotSpotSlot::HasUserId() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "HasUserId");

	Params::AIHotSpotSlot_HasUserId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAIHotSpotSlot::IsAIAllowed(const class AAIController* AI) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "IsAIAllowed");

	Params::AIHotSpotSlot_IsAIAllowed Parms{};

	Parms.AI = AI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAIHotSpotSlot::IsEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlot", "IsEnabled");

	Params::AIHotSpotSlot_IsEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAIHotSpotSlotGenerator::GenerateSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlotGenerator", "GenerateSlots");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UAIHotSpotSlot* UAIHotSpotSlotGenerator::AddSlot(const struct FVector& RelativeLocation, const struct FRotator& RelativeRotation, TSubclassOf<class UAIHotSpotSlot> CustomSlotClass, bool bEnabled) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlotGenerator", "AddSlot");

	Params::AIHotSpotSlotGenerator_AddSlot Parms{};

	Parms.RelativeLocation = std::move(RelativeLocation);
	Parms.RelativeRotation = std::move(RelativeRotation);
	Parms.CustomSlotClass = CustomSlotClass;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AAIHotSpot* UAIHotSpotSlotGenerator::GetHotSpot() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIHotSpotSlotGenerator", "GetHotSpot");

	Params::AIHotSpotSlotGenerator_GetHotSpot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaLeashComponent::SetLeashRadius(float NewRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLeashComponent", "SetLeashRadius");

	Params::FortAthenaLeashComponent_SetLeashRadius Parms{};

	Parms.NewRadius = NewRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const struct FVector UFortAthenaLeashComponent::GetLeashCenter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLeashComponent", "GetLeashCenter");

	Params::FortAthenaLeashComponent_GetLeashCenter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAthenaLeashComponent::GetLeashRadius() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLeashComponent", "GetLeashRadius");

	Params::FortAthenaLeashComponent_GetLeashRadius Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaLeashComponent::IsInsideLeash(const struct FVector& Location) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLeashComponent", "IsInsideLeash");

	Params::FortAthenaLeashComponent_IsInsideLeash Parms{};

	Parms.Location = std::move(Location);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortAIController::IsIgnoringProximity(class AFortAIController* FortAIController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIController", "IsIgnoringProximity");

	Params::FortAIController_IsIgnoringProximity Parms{};

	Parms.FortAIController = FortAIController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortAIController::ClearAllFocalPoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "ClearAllFocalPoints");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool AFortAIController::CreateBuildingActor(TSubclassOf<class ABuildingSMActor> BuildingClass, const struct FVector& BuildLoc, const struct FRotator& BuildRot, bool bMirrored)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "CreateBuildingActor");

	Params::FortAIController_CreateBuildingActor Parms{};

	Parms.BuildingClass = BuildingClass;
	Parms.BuildLoc = std::move(BuildLoc);
	Parms.BuildRot = std::move(BuildRot);
	Parms.bMirrored = bMirrored;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortAIController::IgnoreProximityForDuration(float DurationToIgnore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "IgnoreProximityForDuration");

	Params::FortAIController_IgnoreProximityForDuration Parms{};

	Parms.DurationToIgnore = DurationToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool AFortAIController::IsAllowedToSleep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "IsAllowedToSleep");

	Params::FortAIController_IsAllowedToSleep Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortAIController::LockBehaviorResource()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "LockBehaviorResource");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAIController::LockMovementResource()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "LockMovementResource");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAIController::OnActorGoalDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "OnActorGoalDestroyed");

	Params::FortAIController_OnActorGoalDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIController::OnBuildingActorGoalDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "OnBuildingActorGoalDestroyed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAIController::SetAlwaysGameplayRelevant(bool bInAlwaysGameplayRelevant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "SetAlwaysGameplayRelevant");

	Params::FortAIController_SetAlwaysGameplayRelevant Parms{};

	Parms.bInAlwaysGameplayRelevant = bInAlwaysGameplayRelevant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIController::SetFullPeripheralVision(bool bNewFullPeripheralVision)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "SetFullPeripheralVision");

	Params::FortAIController_SetFullPeripheralVision Parms{};

	Parms.bNewFullPeripheralVision = bNewFullPeripheralVision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIController::SetGoalActor(class AActor* InActor, bool bLocationAlwaysKnown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "SetGoalActor");

	Params::FortAIController_SetGoalActor Parms{};

	Parms.InActor = InActor;
	Parms.bLocationAlwaysKnown = bLocationAlwaysKnown;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIController::SetIsSleeping(bool bNewSleepStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "SetIsSleeping");

	Params::FortAIController_SetIsSleeping Parms{};

	Parms.bNewSleepStatus = bNewSleepStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIController::SetPawnAIType(EFortressAIType NewAIType, class AActor* SpawnSpot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "SetPawnAIType");

	Params::FortAIController_SetPawnAIType Parms{};

	Parms.NewAIType = NewAIType;
	Parms.SpawnSpot = SpawnSpot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIController::SetTeam(EFortTeam InTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "SetTeam");

	Params::FortAIController_SetTeam Parms{};

	Parms.InTeam = InTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIController::SetTeamInt(uint8 InTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "SetTeamInt");

	Params::FortAIController_SetTeamInt Parms{};

	Parms.InTeam = InTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIController::SetupCustomVIM(class UClass* VIM)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "SetupCustomVIM");

	Params::FortAIController_SetupCustomVIM Parms{};

	Parms.VIM = VIM;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIController::UnlockBehaviorResource()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "UnlockBehaviorResource");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAIController::UnlockMovementResource()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "UnlockMovementResource");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAIController::WakeUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "WakeUp");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UFortAIEncounterInfo* AFortAIController::GetEncounterInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "GetEncounterInfo");

	Params::FortAIController_GetEncounterInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* AFortAIController::GetGoalActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIController", "GetGoalActor");

	Params::FortAIController_GetGoalActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortAthenaLocalGameplayBehavior::FinishExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLocalGameplayBehavior", "FinishExecute");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLocalGameplayBehavior::OnAbort()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLocalGameplayBehavior", "OnAbort");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortAthenaLocalGameplayBehavior::OnExecute(class AActor* Activator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLocalGameplayBehavior", "OnExecute");

	Params::FortAthenaLocalGameplayBehavior_OnExecute Parms{};

	Parms.Activator = Activator;

	UObject::ProcessEvent(Func, &Parms);
}

TArray<EFortEncounterDirection> AFortAIDirector::ConvertInvalidDirectionsToValidDirections(const TArray<EFortEncounterDirection>& InvalidDirections)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIDirector", "ConvertInvalidDirectionsToValidDirections");

	Params::FortAIDirector_ConvertInvalidDirectionsToValidDirections Parms{};

	Parms.InvalidDirections = std::move(InvalidDirections);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFortEncounterDirection AFortAIDirector::GetEncounterDirectionFromVector(const struct FVector& DirectionVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIDirector", "GetEncounterDirectionFromVector");

	Params::FortAIDirector_GetEncounterDirectionFromVector Parms{};

	Parms.DirectionVector = std::move(DirectionVector);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector AFortAIDirector::GetVectorFromEncounterDirection(EFortEncounterDirection Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIDirector", "GetVectorFromEncounterDirection");

	Params::FortAIDirector_GetVectorFromEncounterDirection Parms{};

	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortAIDirector::Activate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "Activate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAIDirector::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "Deactivate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int32 AFortAIDirector::GetNumActiveEncounters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "GetNumActiveEncounters");

	Params::FortAIDirector_GetNumActiveEncounters Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortAIDirector::OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "OnDayPhaseChanged");

	Params::FortAIDirector_OnDayPhaseChanged Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIDirector::OnDirectorDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "OnDirectorDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortAIDirector::OnFadeStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "OnFadeStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortAIDirector::OnPawnDied(class AFortAIPawn* KilledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "OnPawnDied");

	Params::FortAIDirector_OnPawnDied Parms{};

	Parms.KilledPawn = KilledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortAIDirector::OnPeakStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "OnPeakStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortAIDirector::OnPlayerDied(class AFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "OnPlayerDied");

	Params::FortAIDirector_OnPlayerDied Parms{};

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortAIDirector::OnPlayerSpawn(class AFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "OnPlayerSpawn");

	Params::FortAIDirector_OnPlayerSpawn Parms{};

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortAIDirector::OnRampStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "OnRampStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortAIDirector::OnRestStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "OnRestStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortAIDirector::PostDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "PostDayPhaseChanged");

	Params::FortAIDirector_PostDayPhaseChanged Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortAIDirector::ReceivePawnSpawned(class AFortPawn* SpawnedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "ReceivePawnSpawned");

	Params::FortAIDirector_ReceivePawnSpawned Parms{};

	Parms.SpawnedPawn = SpawnedPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortAIDirector::RegisterPatrolWard(TScriptInterface<class IFortPatrolWardInterface> PatrolWard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "RegisterPatrolWard");

	Params::FortAIDirector_RegisterPatrolWard Parms{};

	Parms.PatrolWard = PatrolWard;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UFortAIEncounterInfo* AFortAIDirector::StartEncounter(class FString& EncounterInstigator, class UFortDifficultyEncounterSettings* DifficultyEncounterSettings, const struct FFortAIEncounterQueryData& OptionalQueryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "StartEncounter");

	Params::FortAIDirector_StartEncounter Parms{};

	Parms.EncounterInstigator = std::move(EncounterInstigator);
	Parms.DifficultyEncounterSettings = DifficultyEncounterSettings;
	Parms.OptionalQueryData = std::move(OptionalQueryData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	EncounterInstigator = std::move(Parms.EncounterInstigator);

	return Parms.ReturnValue;
}

void AFortAIDirector::UnregisterPatrolWard(TScriptInterface<class IFortPatrolWardInterface> PatrolWard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "UnregisterPatrolWard");

	Params::FortAIDirector_UnregisterPatrolWard Parms{};

	Parms.PatrolWard = PatrolWard;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIDirector::GetAmbientThreatEncounterSpawnLocations(TArray<struct FVector>* AmbientThreatEncounterSpawnLocations) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "GetAmbientThreatEncounterSpawnLocations");

	Params::FortAIDirector_GetAmbientThreatEncounterSpawnLocations Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (AmbientThreatEncounterSpawnLocations != nullptr)
		*AmbientThreatEncounterSpawnLocations = std::move(Parms.AmbientThreatEncounterSpawnLocations);
}

int32 AFortAIDirector::GetNumPlayers() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "GetNumPlayers");

	Params::FortAIDirector_GetNumPlayers Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class ABuildingRift*> AFortAIDirector::GetRiftsFromClosestActiveEncounterTo(class AActor* Target) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "GetRiftsFromClosestActiveEncounterTo");

	Params::FortAIDirector_GetRiftsFromClosestActiveEncounterTo Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortAIDirector::IsAnyActiveEncounterRelevantToDefender(class AFortAIPawn* Defender) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "IsAnyActiveEncounterRelevantToDefender");

	Params::FortAIDirector_IsAnyActiveEncounterRelevantToDefender Parms{};

	Parms.Defender = Defender;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortAIDirector::IsAnyActiveEncounterRelevantToPlayer(const class AFortPlayerPawn* Player) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "IsAnyActiveEncounterRelevantToPlayer");

	Params::FortAIDirector_IsAnyActiveEncounterRelevantToPlayer Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortAIDirector::IsAnyAIRelevantToPlayer(class AFortPlayerPawn* Player) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "IsAnyAIRelevantToPlayer");

	Params::FortAIDirector_IsAnyAIRelevantToPlayer Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortAIDirector::IsAnyEncounterGoalWithinDistanceOfPoint(const struct FVector& Point, float Distance, bool bOnlyActiveEncounters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "IsAnyEncounterGoalWithinDistanceOfPoint");

	Params::FortAIDirector_IsAnyEncounterGoalWithinDistanceOfPoint Parms{};

	Parms.Point = std::move(Point);
	Parms.Distance = Distance;
	Parms.bOnlyActiveEncounters = bOnlyActiveEncounters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortAIDirector::IsLineTooCloseToPatrolWards(const struct FVector& LineStart, const struct FVector& LineEnd) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "IsLineTooCloseToPatrolWards");

	Params::FortAIDirector_IsLineTooCloseToPatrolWards Parms{};

	Parms.LineStart = std::move(LineStart);
	Parms.LineEnd = std::move(LineEnd);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortAIDirector::IsPointTooCloseToPatrolWards(const struct FVector& Point, const EWardAffectType WardEffectTypeFilter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirector", "IsPointTooCloseToPatrolWards");

	Params::FortAIDirector_IsPointTooCloseToPatrolWards Parms{};

	Parms.Point = std::move(Point);
	Parms.WardEffectTypeFilter = WardEffectTypeFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AAthenaAIDirector::AggroOnActor(const class AAthenaAIController* AIController, class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaAIDirector", "AggroOnActor");

	Params::AthenaAIDirector_AggroOnActor Parms{};

	Parms.AIController = AIController;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UFortAsyncAction_MakeTieredWaveEncounterSettings* UFortAsyncAction_MakeTieredWaveEncounterSettings::CreateAsyncAction_MakeTieredWaveEncounterSettings(const struct FTieredWaveSetData& WaveData_0, const struct FFortEncounterSettings& InEncounterSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAsyncAction_MakeTieredWaveEncounterSettings", "CreateAsyncAction_MakeTieredWaveEncounterSettings");

	Params::FortAsyncAction_MakeTieredWaveEncounterSettings_CreateAsyncAction_MakeTieredWaveEncounterSettings Parms{};

	Parms.WaveData_0 = std::move(WaveData_0);
	Parms.InEncounterSettings = std::move(InEncounterSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAISystem::IsInCone2D(const struct FVector& ConeOrigin, const struct FVector& ConeDirection, float HalfAngle, const struct FVector& LocationToCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAISystem", "IsInCone2D");

	Params::FortAISystem_IsInCone2D Parms{};

	Parms.ConeOrigin = std::move(ConeOrigin);
	Parms.ConeDirection = std::move(ConeDirection);
	Parms.HalfAngle = HalfAngle;
	Parms.LocationToCheck = std::move(LocationToCheck);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAthenaAISystem::AIProfiling_OnGamePhaseChanged(EAthenaGamePhase GamePhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAISystem", "AIProfiling_OnGamePhaseChanged");

	Params::AthenaAISystem_AIProfiling_OnGamePhaseChanged Parms{};

	Parms.GamePhase = GamePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAISystem::AIProfiling_OnSafeZoneUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAISystem", "AIProfiling_OnSafeZoneUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAthenaAISystem::HandleGamePhaseStepChanged(const TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAISystem", "HandleGamePhaseStepChanged");

	Params::AthenaAISystem_HandleGamePhaseStepChanged Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAISystem::HandlePlayerExitAircraft(class AController* ExitingController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAISystem", "HandlePlayerExitAircraft");

	Params::AthenaAISystem_HandlePlayerExitAircraft Parms{};

	Parms.ExitingController = ExitingController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAISystem::OnAIPawnDestroyed(class AFortPawn* DestroyedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAISystem", "OnAIPawnDestroyed");

	Params::AthenaAISystem_OnAIPawnDestroyed Parms{};

	Parms.DestroyedPawn = DestroyedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAISystem::OnAIPawnDied(class AController* KilledController, bool bIsABot, class AFortPawn* KilledAIPawn, class AFortPlayerPawn* KilledPlayerPawn, class AController* KillerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAISystem", "OnAIPawnDied");

	Params::AthenaAISystem_OnAIPawnDied Parms{};

	Parms.KilledController = KilledController;
	Parms.bIsABot = bIsABot;
	Parms.KilledAIPawn = KilledAIPawn;
	Parms.KilledPlayerPawn = KilledPlayerPawn;
	Parms.KillerController = KillerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAISystem::OnAIPawnSpawned(class AController* SpawnedController, bool bIsABot, class AFortPawn* FortAIPawn, class AFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAISystem", "OnAIPawnSpawned");

	Params::AthenaAISystem_OnAIPawnSpawned Parms{};

	Parms.SpawnedController = SpawnedController;
	Parms.bIsABot = bIsABot;
	Parms.FortAIPawn = FortAIPawn;
	Parms.PlayerPawn = PlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AAthenaCreativeRift::BlueprintShowRift()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCreativeRift", "BlueprintShowRift");

	UObject::ProcessEvent(Func, nullptr);
}

void AAthenaCreativeRift::NotifyActorDespawnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCreativeRift", "NotifyActorDespawnEndOverlap");

	Params::AthenaCreativeRift_NotifyActorDespawnEndOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UFortAthenaAITelemetryData* UFortAthenaAITelemetryFunctionLibrary::GetOrCreateAITelemetryData(const class AActor* Owner, const TSubclassOf<class UFortAthenaAITelemetryData> TelemetryDataClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAthenaAITelemetryFunctionLibrary", "GetOrCreateAITelemetryData");

	Params::FortAthenaAITelemetryFunctionLibrary_GetOrCreateAITelemetryData Parms{};

	Parms.Owner = Owner;
	Parms.TelemetryDataClass = TelemetryDataClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAITelemetryData* UFortAIComponent_Telemetry::GetOrCreateTelemetryData(const TSubclassOf<class UFortAthenaAITelemetryData> TelemetryDataClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIComponent_Telemetry", "GetOrCreateTelemetryData");

	Params::FortAIComponent_Telemetry_GetOrCreateTelemetryData Parms{};

	Parms.TelemetryDataClass = TelemetryDataClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAIComponent_Telemetry::OnDidDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIComponent_Telemetry", "OnDidDamage");

	Params::FortAIComponent_Telemetry_OnDidDamage Parms{};

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

void UFortAIComponent_Telemetry::OnPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIComponent_Telemetry", "OnPawnDied");

	Params::FortAIComponent_Telemetry_OnPawnDied Parms{};

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

void UFortAIComponent_Telemetry::OnTetheredFollowerChanged(class AFortPawn* NewFollower, class AFortPawn* OldFollower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIComponent_Telemetry", "OnTetheredFollowerChanged");

	Params::FortAIComponent_Telemetry_OnTetheredFollowerChanged Parms{};

	Parms.NewFollower = NewFollower;
	Parms.OldFollower = OldFollower;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAIComponent_Voice::SetVoiceSoundBank(class UFortTaggedSoundBank* InSoundBank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIComponent_Voice", "SetVoiceSoundBank");

	Params::FortAIComponent_Voice_SetVoiceSoundBank Parms{};

	Parms.InSoundBank = InSoundBank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UFortTaggedSoundBank* UFortAIComponent_Voice::GetVoiceSoundBank() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIComponent_Voice", "GetVoiceSoundBank");

	Params::FortAIComponent_Voice_GetVoiceSoundBank Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAIManagerMinigameComponent::HandleMinigameStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIManagerMinigameComponent", "HandleMinigameStarted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIManagerMinigameComponent::OnPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIManagerMinigameComponent", "OnPawnDied");

	Params::FortAIManagerMinigameComponent_OnPawnDied Parms{};

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

void UFortAIManagerMinigameComponent::OnPawnSpawned(class APawn* Pawn, const int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIManagerMinigameComponent", "OnPawnSpawned");

	Params::FortAIManagerMinigameComponent_OnPawnSpawned Parms{};

	Parms.Pawn = Pawn;
	Parms.RequestID = RequestID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAISpawnerUtilityComponent::HandleUnownedPawnSpawned(class AFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "HandleUnownedPawnSpawned");

	Params::FortAISpawnerUtilityComponent_HandleUnownedPawnSpawned Parms{};

	Parms.FortPawn = FortPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAISpawnerUtilityComponent::OnUnownedPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "OnUnownedPawnDied");

	Params::FortAISpawnerUtilityComponent_OnUnownedPawnDied Parms{};

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

int32 UFortAISpawnerUtilityComponent::RequestSpawn(class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, const struct FTransform& SpawnTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "RequestSpawn");

	Params::FortAISpawnerUtilityComponent_RequestSpawn Parms{};

	Parms.AISpawnerComponentList = AISpawnerComponentList;
	Parms.SpawnTransform = std::move(SpawnTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAISpawnerUtilityComponent::SetEQSQuery(TSoftObjectPtr<class UEnvQuery> SelectedEQSQuery)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "SetEQSQuery");

	Params::FortAISpawnerUtilityComponent_SetEQSQuery Parms{};

	Parms.SelectedEQSQuery = SelectedEQSQuery;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAISpawnerUtilityComponent::SetMinigame(const class AFortMinigame* Minigame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "SetMinigame");

	Params::FortAISpawnerUtilityComponent_SetMinigame Parms{};

	Parms.Minigame = Minigame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAISpawnerUtilityComponent::SetQueryRadius(float Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "SetQueryRadius");

	Params::FortAISpawnerUtilityComponent_SetQueryRadius Parms{};

	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAISpawnerUtilityComponent::StartEnvironmentQuery()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "StartEnvironmentQuery");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortAISpawnerUtilityComponent::IsSpawnCountCapped() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "IsSpawnCountCapped");

	Params::FortAISpawnerUtilityComponent_IsSpawnCountCapped Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortNavSystem::IsNavmeshInRadiusInitialized(class UObject* WorldContext, const struct FVector& TestLocation, float TestRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortNavSystem", "IsNavmeshInRadiusInitialized");

	Params::FortNavSystem_IsNavmeshInRadiusInitialized Parms{};

	Parms.WorldContext = WorldContext;
	Parms.TestLocation = std::move(TestLocation);
	Parms.TestRadius = TestRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortNavSystem::OnNavDataRegistered(class ANavigationData* NavData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNavSystem", "OnNavDataRegistered");

	Params::FortNavSystem_OnNavDataRegistered Parms{};

	Parms.NavData = NavData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UAthenaNavSystem::IsInitialNavigationLockActive(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaNavSystem", "IsInitialNavigationLockActive");

	Params::AthenaNavSystem_IsInitialNavigationLockActive Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAthenaNavSystem::RegisterNavGenerationObserver(class USceneComponent* Component, TDelegate<void(class USceneComponent* Component)> Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaNavSystem", "RegisterNavGenerationObserver");

	Params::AthenaNavSystem_RegisterNavGenerationObserver Parms{};

	Parms.Component = Component;
	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaNavSystem::UnregisterNavGenerationObserver(class USceneComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaNavSystem", "UnregisterNavGenerationObserver");

	Params::AthenaNavSystem_UnregisterNavGenerationObserver Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AAthenaNavMesh::ComputeOffsetForMoveTiles(const struct FVector& StartPosition, const struct FVector& DesiredPosition, struct FVector* OutEndPosition, struct FIntPoint* OutTileOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaNavMesh", "ComputeOffsetForMoveTiles");

	Params::AthenaNavMesh_ComputeOffsetForMoveTiles Parms{};

	Parms.StartPosition = std::move(StartPosition);
	Parms.DesiredPosition = std::move(DesiredPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutEndPosition != nullptr)
		*OutEndPosition = std::move(Parms.OutEndPosition);

	if (OutTileOffset != nullptr)
		*OutTileOffset = std::move(Parms.OutTileOffset);
}

void AAthenaNavMesh::MoveTiles(const struct FBox& SourceBox, const struct FIntPoint& TileOffset, const float RotationDeg, const struct FVector2D& FillerTilePosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaNavMesh", "MoveTiles");

	Params::AthenaNavMesh_MoveTiles Parms{};

	Parms.SourceBox = std::move(SourceBox);
	Parms.TileOffset = std::move(TileOffset);
	Parms.RotationDeg = RotationDeg;
	Parms.FillerTilePosition = std::move(FillerTilePosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaNavPresenceDetectorComponent::OnNavMeshTilesUpdated(const struct FUpdatedNavMeshTiles& UpdatedNavMeshTiles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaNavPresenceDetectorComponent", "OnNavMeshTilesUpdated");

	Params::AthenaNavPresenceDetectorComponent_OnNavMeshTilesUpdated Parms{};

	Parms.UpdatedNavMeshTiles = std::move(UpdatedNavMeshTiles);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UAthenaNavPresenceDetectorComponent::HasValidNavMeshLocation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaNavPresenceDetectorComponent", "HasValidNavMeshLocation");

	Params::AthenaNavPresenceDetectorComponent_HasValidNavMeshLocation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortAIBotDebugActor::OnRep_BotDebugMiniMapIndicator(class UAthenaAIBotDebugMiniMapIndicator* OldBotDebugMiniMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIBotDebugActor", "OnRep_BotDebugMiniMapIndicator");

	Params::FortAIBotDebugActor_OnRep_BotDebugMiniMapIndicator Parms{};

	Parms.OldBotDebugMiniMap = OldBotDebugMiniMap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIBotPOIDebugActor::OnRep_PlayerBotsDebugMiniMap(class UAthenaAIBotPOIDebugMiniMapIndicator* OldPlayerBotsDebugMiniMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIBotPOIDebugActor", "OnRep_PlayerBotsDebugMiniMap");

	Params::FortAIBotPOIDebugActor_OnRep_PlayerBotsDebugMiniMap Parms{};

	Parms.OldPlayerBotsDebugMiniMap = OldPlayerBotsDebugMiniMap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIDirectorDataManager::TriggerEvent(const struct FFortAIDirectorEvent& TriggeredEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirectorDataManager", "TriggerEvent");

	Params::FortAIDirectorDataManager_TriggerEvent Parms{};

	Parms.TriggeredEvent = std::move(TriggeredEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float AFortAIDirectorDataManager::GetAIDirectorFactorValue(EFortAIDirectorFactor AIDirectorFactor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIDirectorDataManager", "GetAIDirectorFactorValue");

	Params::FortAIDirectorDataManager_GetAIDirectorFactorValue Parms{};

	Parms.AIDirectorFactor = AIDirectorFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAIAssignment* UFortAIEncounterInfo::CreateEncounterAssignment(class UFortAIAssignmentSettings* AssignmentSettings, class AActor* GoalActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "CreateEncounterAssignment");

	Params::FortAIEncounterInfo_CreateEncounterAssignment Parms{};

	Parms.AssignmentSettings = AssignmentSettings;
	Parms.GoalActor = GoalActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAIEncounterInfo::DespawnPendingAndCurrentAI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "DespawnPendingAndCurrentAI");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class AFortAIDirectorDataManager* UFortAIEncounterInfo::GetEncounterDataManager()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterDataManager");

	Params::FortAIEncounterInfo_GetEncounterDataManager Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAIEncounterInfo::GetEncounterTimeSeconds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterTimeSeconds");

	Params::FortAIEncounterInfo_GetEncounterTimeSeconds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAIEncounterInfo::GroupHasAIRemainingToSpawn(const struct FFortAISpawnerData& FortAISpawnerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "GroupHasAIRemainingToSpawn");

	Params::FortAIEncounterInfo_GroupHasAIRemainingToSpawn Parms{};

	Parms.FortAISpawnerData = std::move(FortAISpawnerData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAIEncounterInfo::NotifyRiftDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "NotifyRiftDied");

	Params::FortAIEncounterInfo_NotifyRiftDied Parms{};

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

void UFortAIEncounterInfo::OnEncounterPawnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "OnEncounterPawnDamaged");

	Params::FortAIEncounterInfo_OnEncounterPawnDamaged Parms{};

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

void UFortAIEncounterInfo::OnFadeStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "OnFadeStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortAIEncounterInfo::OnGameDifficultyChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "OnGameDifficultyChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIEncounterInfo::OnGoalTakeDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "OnGoalTakeDamage");

	Params::FortAIEncounterInfo_OnGoalTakeDamage Parms{};

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

void UFortAIEncounterInfo::OnPeakStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "OnPeakStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortAIEncounterInfo::OnRampStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "OnRampStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortAIEncounterInfo::OnRestStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "OnRestStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortAIEncounterInfo::RegisterAISpawner(class AActor* InAISpawner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "RegisterAISpawner");

	Params::FortAIEncounterInfo_RegisterAISpawner Parms{};

	Parms.InAISpawner = InAISpawner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAIEncounterInfo::RequestActivation(int32 ActivationDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "RequestActivation");

	Params::FortAIEncounterInfo_RequestActivation Parms{};

	Parms.ActivationDelay = ActivationDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAIEncounterInfo::SetEncounterActivationState(bool bEncounterActivityState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "SetEncounterActivationState");

	Params::FortAIEncounterInfo_SetEncounterActivationState Parms{};

	Parms.bEncounterActivityState = bEncounterActivityState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAIEncounterInfo::SetNukeWavesAtEncounterEnd(bool bNuke)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "SetNukeWavesAtEncounterEnd");

	Params::FortAIEncounterInfo_SetNukeWavesAtEncounterEnd Parms{};

	Parms.bNuke = bNuke;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAIEncounterInfo::SetPawnNumberLimit(int32 InPawnNumberLimit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "SetPawnNumberLimit");

	Params::FortAIEncounterInfo_SetPawnNumberLimit Parms{};

	Parms.InPawnNumberLimit = InPawnNumberLimit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AFortAIPawn* UFortAIEncounterInfo::SpawnAIPawnReservedForEnemySpawner(class AActor* EnemySpawner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "SpawnAIPawnReservedForEnemySpawner");

	Params::FortAIEncounterInfo_SpawnAIPawnReservedForEnemySpawner Parms{};

	Parms.EnemySpawner = EnemySpawner;
	Parms.SpawnLocation = std::move(SpawnLocation);
	Parms.SpawnRotation = std::move(SpawnRotation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAIEncounterInfo::SpawnTestAIGroup(const class UFortAISpawnGroup* SpawnGroupToSpawn, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class AActor* SpawnSource, const TArray<class UFortAbilitySet*>& AbilitySetsToGrantOnSpawn, const struct FFortAISpawnGroupUpgradeData& UpgradeData, bool bAllowAssigningToExternalSpawners, float SecondsBetweenSpawns)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "SpawnTestAIGroup");

	Params::FortAIEncounterInfo_SpawnTestAIGroup Parms{};

	Parms.SpawnGroupToSpawn = SpawnGroupToSpawn;
	Parms.SpawnLocation = std::move(SpawnLocation);
	Parms.SpawnRotation = std::move(SpawnRotation);
	Parms.SpawnSource = SpawnSource;
	Parms.AbilitySetsToGrantOnSpawn = std::move(AbilitySetsToGrantOnSpawn);
	Parms.UpgradeData = std::move(UpgradeData);
	Parms.bAllowAssigningToExternalSpawners = bAllowAssigningToExternalSpawners;
	Parms.SecondsBetweenSpawns = SecondsBetweenSpawns;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAIEncounterInfo::UnRegisterAISpawner(class AActor* InAISpawner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "UnRegisterAISpawner");

	Params::FortAIEncounterInfo_UnRegisterAISpawner Parms{};

	Parms.InAISpawner = InAISpawner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortAIEncounterInfo::EncounterHasReservedSpawnRequestForEnemySpawner(class AActor* EnemySpawner) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "EncounterHasReservedSpawnRequestForEnemySpawner");

	Params::FortAIEncounterInfo_EncounterHasReservedSpawnRequestForEnemySpawner Parms{};

	Parms.EnemySpawner = EnemySpawner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAIEncounterInfo::GetCurrentSpawnAreaDirections(TArray<EFortEncounterDirection>* OutDirections) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetCurrentSpawnAreaDirections");

	Params::FortAIEncounterInfo_GetCurrentSpawnAreaDirections Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutDirections != nullptr)
		*OutDirections = std::move(Parms.OutDirections);

	return Parms.ReturnValue;
}

void UFortAIEncounterInfo::GetEncounterAssignmentGoalActors(TArray<class AActor*>* OutGoalActors) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterAssignmentGoalActors");

	Params::FortAIEncounterInfo_GetEncounterAssignmentGoalActors Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutGoalActors != nullptr)
		*OutGoalActors = std::move(Parms.OutGoalActors);
}

void UFortAIEncounterInfo::GetEncounterGameplayTags(struct FGameplayTagContainer* OutEncounterTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterGameplayTags");

	Params::FortAIEncounterInfo_GetEncounterGameplayTags Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutEncounterTags != nullptr)
		*OutEncounterTags = std::move(Parms.OutEncounterTags);
}

class AActor* UFortAIEncounterInfo::GetEncounterQueryActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterQueryActor");

	Params::FortAIEncounterInfo_GetEncounterQueryActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAIEncounterInfo::GetEncounterRifts(TArray<class ABuildingRift*>* OutRifts) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterRifts");

	Params::FortAIEncounterInfo_GetEncounterRifts Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutRifts != nullptr)
		*OutRifts = std::move(Parms.OutRifts);
}

int32 UFortAIEncounterInfo::GetPawnNumberLimit() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetPawnNumberLimit");

	Params::FortAIEncounterInfo_GetPawnNumberLimit Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAIEncounterInfo* IFortAIEncounterInfoOwnerInterface::GetEncounterInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterInfoOwnerInterface", "GetEncounterInfo");

	Params::FortAIEncounterInfoOwnerInterface_GetEncounterInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAIEncounterRiftManager::OnRiftDestroyed(class AActor* Rift)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterRiftManager", "OnRiftDestroyed");

	Params::FortAIEncounterRiftManager_OnRiftDestroyed Parms{};

	Parms.Rift = Rift;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AFortMission* UFortAIEncounterRiftManager::GetAssociatedMission() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterRiftManager", "GetAssociatedMission");

	Params::FortAIEncounterRiftManager_GetAssociatedMission Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFortEncounterSequenceResult UFortAIEncounterSequence::Last()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterSequence", "Last");

	Params::FortAIEncounterSequence_Last Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFortEncounterSequenceResult UFortAIEncounterSequence::Next()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterSequence", "Next");

	Params::FortAIEncounterSequence_Next Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFortEncounterSequenceResult UFortAIEncounterSequence::Previous()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterSequence", "Previous");

	Params::FortAIEncounterSequence_Previous Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAIEncounterSequence::SetEncounterStartingData(const TArray<class AActor*>& InTargetActors, class UFortAIAssignmentSettings* InAssignmentSettings, const struct FEncounterEnvironmentQueryInfo& InOverrideEnvironmentQueryInfo, class AActor* InOptionalQueryActor, const struct FGameplayTagContainer& InInjectedTags, const struct FFortEncounterSettings& InEncounterSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterSequence", "SetEncounterStartingData");

	Params::FortAIEncounterSequence_SetEncounterStartingData Parms{};

	Parms.InTargetActors = std::move(InTargetActors);
	Parms.InAssignmentSettings = InAssignmentSettings;
	Parms.InOverrideEnvironmentQueryInfo = std::move(InOverrideEnvironmentQueryInfo);
	Parms.InOptionalQueryActor = InOptionalQueryActor;
	Parms.InInjectedTags = std::move(InInjectedTags);
	Parms.InEncounterSettings = std::move(InEncounterSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UFortAIEncounterInfo* UFortAIEncounterSequence::StartCurrentEncounter(EFortEncounterSequenceResult* OutRequestResult, const TArray<class AActor*>& InTargetActors, class UFortAIAssignmentSettings* InAssignmentSettings, const struct FEncounterEnvironmentQueryInfo& InOverrideEnvironmentQueryInfo, class AActor* InOptionalQueryActor, const struct FGameplayTagContainer& InInjectedTags, const struct FFortEncounterSettings& InEncounterSettings, int32 ActivationDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterSequence", "StartCurrentEncounter");

	Params::FortAIEncounterSequence_StartCurrentEncounter Parms{};

	Parms.InTargetActors = std::move(InTargetActors);
	Parms.InAssignmentSettings = InAssignmentSettings;
	Parms.InOverrideEnvironmentQueryInfo = std::move(InOverrideEnvironmentQueryInfo);
	Parms.InOptionalQueryActor = InOptionalQueryActor;
	Parms.InInjectedTags = std::move(InInjectedTags);
	Parms.InEncounterSettings = std::move(InEncounterSettings);
	Parms.ActivationDelay = ActivationDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutRequestResult != nullptr)
		*OutRequestResult = Parms.OutRequestResult;

	return Parms.ReturnValue;
}

class UFortAIEncounterInfo* UFortAIEncounterSequence::StartCurrentEncounterWithSavedData(EFortEncounterSequenceResult* OutRequestResult, int32 ActivationDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterSequence", "StartCurrentEncounterWithSavedData");

	Params::FortAIEncounterSequence_StartCurrentEncounterWithSavedData Parms{};

	Parms.ActivationDelay = ActivationDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutRequestResult != nullptr)
		*OutRequestResult = Parms.OutRequestResult;

	return Parms.ReturnValue;
}

void UFortAIEncounterSequence::StopCurrentEncounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterSequence", "StopCurrentEncounter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortAIEncounterSequence::EncounterBelongsToSequence(class UFortAIEncounterInfo* InEncounter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterSequence", "EncounterBelongsToSequence");

	Params::FortAIEncounterSequence_EncounterBelongsToSequence Parms{};

	Parms.InEncounter = InEncounter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAIEncounterInfo* UFortAIEncounterSequence::GetCurrentEncounter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterSequence", "GetCurrentEncounter");

	Params::FortAIEncounterSequence_GetCurrentEncounter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortAIEncounterSequence::GetEncounterIndexInSequence() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterSequence", "GetEncounterIndexInSequence");

	Params::FortAIEncounterSequence_GetEncounterIndexInSequence Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortAIEncounterSequence::GetNumEncountersInSequence() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterSequence", "GetNumEncountersInSequence");

	Params::FortAIEncounterSequence_GetNumEncountersInSequence Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAIEncounterSequence::HasEncounter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterSequence", "HasEncounter");

	Params::FortAIEncounterSequence_HasEncounter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAIEncounterSequence::IsOnFinalIndexInSequence() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterSequence", "IsOnFinalIndexInSequence");

	Params::FortAIEncounterSequence_IsOnFinalIndexInSequence Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float IFortAIEncounterTargetInterface::GetObjectiveCompletionPercentage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterTargetInterface", "GetObjectiveCompletionPercentage");

	Params::FortAIEncounterTargetInterface_GetObjectiveCompletionPercentage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool IFortAIEncounterTargetInterface::IsFloatingTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIEncounterTargetInterface", "IsFloatingTarget");

	Params::FortAIEncounterTargetInterface_IsFloatingTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UAthenaAISpawner* UFortAIFunctionLibrary::GetAISpawner(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIFunctionLibrary", "GetAISpawner");

	Params::FortAIFunctionLibrary_GetAISpawner Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAIRuntimeParameters* UFortAIFunctionLibrary::GetOrCreateAIRuntimeParameters(const class AAIController* AIController, const TSubclassOf<class UFortAthenaAIRuntimeParameters> ParametersClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIFunctionLibrary", "GetOrCreateAIRuntimeParameters");

	Params::FortAIFunctionLibrary_GetOrCreateAIRuntimeParameters Parms{};

	Parms.AIController = AIController;
	Parms.ParametersClass = ParametersClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAIFunctionLibrary::IsConcealedByPerceptionModifiers(const class UObject* WorldContextObject, const struct FVector& ObserverLocation, const struct FVector& TargetLocation, float* OutConcealment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIFunctionLibrary", "IsConcealedByPerceptionModifiers");

	Params::FortAIFunctionLibrary_IsConcealedByPerceptionModifiers Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObserverLocation = std::move(ObserverLocation);
	Parms.TargetLocation = std::move(TargetLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutConcealment != nullptr)
		*OutConcealment = Parms.OutConcealment;

	return Parms.ReturnValue;
}

void UFortAIFunctionLibrary::MakeNoiseEvent(class AActor* NoiseMaker, const float MaxRange, const class FName NoiseTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIFunctionLibrary", "MakeNoiseEvent");

	Params::FortAIFunctionLibrary_MakeNoiseEvent Parms{};

	Parms.NoiseMaker = NoiseMaker;
	Parms.MaxRange = MaxRange;
	Parms.NoiseTag = NoiseTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAIFunctionLibrary::MakeNoiseEventAtLocation(class AActor* NoiseMaker, const float MaxRange, const struct FVector& NoiseLocation, const class FName NoiseTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIFunctionLibrary", "MakeNoiseEventAtLocation");

	Params::FortAIFunctionLibrary_MakeNoiseEventAtLocation Parms{};

	Parms.NoiseMaker = NoiseMaker;
	Parms.MaxRange = MaxRange;
	Parms.NoiseLocation = std::move(NoiseLocation);
	Parms.NoiseTag = NoiseTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAIFunctionLibrary::RequestNavUpdateForBuilding(class ABuildingActor* BuildingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIFunctionLibrary", "RequestNavUpdateForBuilding");

	Params::FortAIFunctionLibrary_RequestNavUpdateForBuilding Parms{};

	Parms.BuildingActor = BuildingActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAIFunctionLibrary::SetHearingRange(class AActor* AIAgent, float Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIFunctionLibrary", "SetHearingRange");

	Params::FortAIFunctionLibrary_SetHearingRange Parms{};

	Parms.AIAgent = AIAgent;
	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortAIFunctionLibrary::TeleportAIPawn(class AFortAIPawn* AIPawn, const struct FVector& DestLocation, const struct FRotator& DestRotation, bool bIgnoreCollision)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIFunctionLibrary", "TeleportAIPawn");

	Params::FortAIFunctionLibrary_TeleportAIPawn Parms{};

	Parms.AIPawn = AIPawn;
	Parms.DestLocation = std::move(DestLocation);
	Parms.DestRotation = std::move(DestRotation);
	Parms.bIgnoreCollision = bIgnoreCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortAIGoalManager::AddGoalsToWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& AssignmentIdentifier, const TArray<struct FFortAIGoalInfo>& GoalInfos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIGoalManager", "AddGoalsToWorldAssignment");

	Params::FortAIGoalManager_AddGoalsToWorldAssignment Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = std::move(AssignmentIdentifier);
	Parms.GoalInfos = std::move(GoalInfos);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIGoalManager::AddGoalToWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& AssignmentIdentifier, const struct FFortAIGoalInfo& GoalInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIGoalManager", "AddGoalToWorldAssignment");

	Params::FortAIGoalManager_AddGoalToWorldAssignment Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = std::move(AssignmentIdentifier);
	Parms.GoalInfo = std::move(GoalInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIGoalManager::CreateWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& WorldAssignmentIdentifier, class UFortAIAssignmentSettings* AssignmentSettings, TSubclassOf<class UFortAIGoalProvider> GoalProvider, struct FFortAIAssignmentIdentifier* AssignmentIdentifier, EAssignmentCreationResult* CreationResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIGoalManager", "CreateWorldAssignment");

	Params::FortAIGoalManager_CreateWorldAssignment Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WorldAssignmentIdentifier = std::move(WorldAssignmentIdentifier);
	Parms.AssignmentSettings = AssignmentSettings;
	Parms.GoalProvider = GoalProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (AssignmentIdentifier != nullptr)
		*AssignmentIdentifier = std::move(Parms.AssignmentIdentifier);

	if (CreationResult != nullptr)
		*CreationResult = Parms.CreationResult;
}

void AFortAIGoalManager::MakeGoalFromActor(struct FFortAIGoalInfo* Goal, const class UObject* WorldContextObject, class AActor* GoalActor, bool bActorAlwaysPerceived, bool bGoalActorAllowsUndermining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIGoalManager", "MakeGoalFromActor");

	Params::FortAIGoalManager_MakeGoalFromActor Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalActor = GoalActor;
	Parms.bActorAlwaysPerceived = bActorAlwaysPerceived;
	Parms.bGoalActorAllowsUndermining = bGoalActorAllowsUndermining;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Goal != nullptr)
		*Goal = std::move(Parms.Goal);
}

void AFortAIGoalManager::MakeGoalFromLocation(struct FFortAIGoalInfo* Goal, const class UObject* WorldContextObject, const struct FVector& GoalLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIGoalManager", "MakeGoalFromLocation");

	Params::FortAIGoalManager_MakeGoalFromLocation Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalLocation = std::move(GoalLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Goal != nullptr)
		*Goal = std::move(Parms.Goal);
}

void AFortAIGoalManager::MakeGoalsFromActors(TArray<struct FFortAIGoalInfo>* Goals, const class UObject* WorldContextObject, const TArray<class AActor*>& GoalActors, bool bActorsAlwaysPerceived, bool bGoalActorsAllowUndermining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIGoalManager", "MakeGoalsFromActors");

	Params::FortAIGoalManager_MakeGoalsFromActors Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalActors = std::move(GoalActors);
	Parms.bActorsAlwaysPerceived = bActorsAlwaysPerceived;
	Parms.bGoalActorsAllowUndermining = bGoalActorsAllowUndermining;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Goals != nullptr)
		*Goals = std::move(Parms.Goals);
}

void AFortAIGoalManager::MakeGoalsFromLocations(TArray<struct FFortAIGoalInfo>* Goals, const class UObject* WorldContextObject, const TArray<struct FVector>& GoalLocations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIGoalManager", "MakeGoalsFromLocations");

	Params::FortAIGoalManager_MakeGoalsFromLocations Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalLocations = std::move(GoalLocations);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Goals != nullptr)
		*Goals = std::move(Parms.Goals);
}

void AFortAIGoalManager::MakeGoalsFromLocationsAndActor(TArray<struct FFortAIGoalInfo>* Goals, const class UObject* WorldContextObject, const TArray<struct FVector>& GoalLocations, const class AActor* GoalActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIGoalManager", "MakeGoalsFromLocationsAndActor");

	Params::FortAIGoalManager_MakeGoalsFromLocationsAndActor Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalLocations = std::move(GoalLocations);
	Parms.GoalActor = GoalActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Goals != nullptr)
		*Goals = std::move(Parms.Goals);
}

void AFortAIGoalManager::RemoveGoalFromWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& AssignmentIdentifier, const struct FFortAIGoalInfo& GoalInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIGoalManager", "RemoveGoalFromWorldAssignment");

	Params::FortAIGoalManager_RemoveGoalFromWorldAssignment Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = std::move(AssignmentIdentifier);
	Parms.GoalInfo = std::move(GoalInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIGoalManager::RemoveGoalsFromWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& AssignmentIdentifier, const TArray<struct FFortAIGoalInfo>& GoalInfos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIGoalManager", "RemoveGoalsFromWorldAssignment");

	Params::FortAIGoalManager_RemoveGoalsFromWorldAssignment Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = std::move(AssignmentIdentifier);
	Parms.GoalInfos = std::move(GoalInfos);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIGoalManager::RemoveWorldAssignment(const class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& AssignmentIdentifier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIGoalManager", "RemoveWorldAssignment");

	Params::FortAIGoalManager_RemoveWorldAssignment Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = std::move(AssignmentIdentifier);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIGoalManager::SetCurrentGoalDiscouragement(class UObject* WorldContext, class AFortAIController* AI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAIGoalManager", "SetCurrentGoalDiscouragement");

	Params::FortAIGoalManager_SetCurrentGoalDiscouragement Parms{};

	Parms.WorldContext = WorldContext;
	Parms.AI = AI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIGoalManager::AddGoal(class AActor* GoalActor, class UFortAIAssignmentSettings* GoalSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIGoalManager", "AddGoal");

	Params::FortAIGoalManager_AddGoal Parms{};

	Parms.GoalActor = GoalActor;
	Parms.GoalSettings = GoalSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAIGoalManager::AddGoalActorToAssignment(class UFortAIAssignment* Assignment, class AActor* GoalActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIGoalManager", "AddGoalActorToAssignment");

	Params::FortAIGoalManager_AddGoalActorToAssignment Parms{};

	Parms.Assignment = Assignment;
	Parms.GoalActor = GoalActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UFortAIAssignment* AFortAIGoalManager::AddWorldAssignment(class UFortAIAssignmentSettings* AssignmentSettings, class AActor* GoalActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIGoalManager", "AddWorldAssignment");

	Params::FortAIGoalManager_AddWorldAssignment Parms{};

	Parms.AssignmentSettings = AssignmentSettings;
	Parms.GoalActor = GoalActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FFortAIAssignmentIdentifier IFortAIRootAssignmentProviderInterface::GetRootAssignmentIdentifier() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIRootAssignmentProviderInterface", "GetRootAssignmentIdentifier");

	Params::FortAIRootAssignmentProviderInterface_GetRootAssignmentIdentifier Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool IFortAISpawnerInterface::IsReadyToReceiveNewSpawnGroup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnerInterface", "IsReadyToReceiveNewSpawnGroup");

	Params::FortAISpawnerInterface_IsReadyToReceiveNewSpawnGroup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool IFortAISpawnerInterface::OnReceiveSpawnGroup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnerInterface", "OnReceiveSpawnGroup");

	Params::FortAISpawnerInterface_OnReceiveSpawnGroup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

TSubclassOf<class UFortAIPawnVariant> UFortAISpawnGroup::GetEnemy(int32 EnemyIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnGroup", "GetEnemy");

	Params::FortAISpawnGroup_GetEnemy Parms{};

	Parms.EnemyIndex = EnemyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortAISpawnGroup::GetNumberOfEnemies() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnGroup", "GetNumberOfEnemies");

	Params::FortAISpawnGroup_GetNumberOfEnemies Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAISpawnGroup::IsLargeSpawnGroup() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnGroup", "IsLargeSpawnGroup");

	Params::FortAISpawnGroup_IsLargeSpawnGroup Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAISpawnGroup::IsPrototype() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnGroup", "IsPrototype");

	Params::FortAISpawnGroup_IsPrototype Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAISpawnGroup::IsValidForEnemySpawners() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAISpawnGroup", "IsValidForEnemySpawners");

	Params::FortAISpawnGroup_IsValidForEnemySpawners Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector IFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsCenter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsCenter");

	Params::FortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsCenter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

float IFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsEQSGridSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsEQSGridSize");

	Params::FortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsEQSGridSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

float IFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsEQSSpaceBetween()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsEQSSpaceBetween");

	Params::FortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsEQSSpaceBetween Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

float IFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsHeight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsHeight");

	Params::FortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsHeight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

float IFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsWidth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsWidth");

	Params::FortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsWidth Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AFortAthenaAIBotController::AddTargetInfo(class AActor* Target, const bool bForceTarget, const EPerceptionState PerceptionState, const float ForgetTime, const float ForgetDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "AddTargetInfo");

	Params::FortAthenaAIBotController_AddTargetInfo Parms{};

	Parms.Target = Target;
	Parms.bForceTarget = bForceTarget;
	Parms.PerceptionState = PerceptionState;
	Parms.ForgetTime = ForgetTime;
	Parms.ForgetDistance = ForgetDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::AddTargetInfos(const TArray<class AActor*>& Targets, const EPerceptionState PerceptionState, const float ForgetTime, const float ForgetDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "AddTargetInfos");

	Params::FortAthenaAIBotController_AddTargetInfos Parms{};

	Parms.Targets = std::move(Targets);
	Parms.PerceptionState = PerceptionState;
	Parms.ForgetTime = ForgetTime;
	Parms.ForgetDistance = ForgetDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::BlueprintOnBehaviorTreeStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "BlueprintOnBehaviorTreeStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortAthenaAIBotController::ChangeActiveVariantForCosmeticItem(class FName ItemTemplateToChange, const struct FGameplayTag& VariantChannelToChange, const struct FGameplayTag& DesiredActiveVariant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "ChangeActiveVariantForCosmeticItem");

	Params::FortAthenaAIBotController_ChangeActiveVariantForCosmeticItem Parms{};

	Parms.ItemTemplateToChange = ItemTemplateToChange;
	Parms.VariantChannelToChange = std::move(VariantChannelToChange);
	Parms.DesiredActiveVariant = std::move(DesiredActiveVariant);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::Cheat_ClearForcedCosmeticItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "Cheat_ClearForcedCosmeticItems");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::Cheat_ForceAthenaCosmeticItemInSlot(const class UAthenaCosmeticItemDefinition* CosmeticItem, EAthenaCustomizationCategory Slot, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "Cheat_ForceAthenaCosmeticItemInSlot");

	Params::FortAthenaAIBotController_Cheat_ForceAthenaCosmeticItemInSlot Parms{};

	Parms.CosmeticItem = CosmeticItem;
	Parms.Slot = Slot;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AFortWeapon* AFortAthenaAIBotController::EquipBestWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "EquipBestWeapon");

	Params::FortAthenaAIBotController_EquipBestWeapon Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AFortWeapon* AFortAthenaAIBotController::EquipMeleeWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "EquipMeleeWeapon");

	Params::FortAthenaAIBotController_EquipMeleeWeapon Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AFortWeapon* AFortAthenaAIBotController::EquipWeapon(const class UFortWorldItem* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "EquipWeapon");

	Params::FortAthenaAIBotController_EquipWeapon Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AFortWeapon* AFortAthenaAIBotController::EquipWeaponByTag(const struct FGameplayTag& WeaponTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "EquipWeaponByTag");

	Params::FortAthenaAIBotController_EquipWeaponByTag Parms{};

	Parms.WeaponTag = std::move(WeaponTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortAthenaAIBotController::NotifyPickupsSpawnedOnDeath(const TArray<class AFortPickup*>& SpawnedPickups, const int32 SpawnRequestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "NotifyPickupsSpawnedOnDeath");

	Params::FortAthenaAIBotController_NotifyPickupsSpawnedOnDeath Parms{};

	Parms.SpawnedPickups = std::move(SpawnedPickups);
	Parms.SpawnRequestId = SpawnRequestId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnAgentDBNO(class AFortPawn* InPlayer, bool bInIsDBNO)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnAgentDBNO");

	Params::FortAthenaAIBotController_OnAgentDBNO Parms{};

	Parms.InPlayer = InPlayer;
	Parms.bInIsDBNO = bInIsDBNO;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnAlertLevelChanged(const EAlertLevel OldAlertLevel, const EAlertLevel NewAlertLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnAlertLevelChanged");

	Params::FortAthenaAIBotController_OnAlertLevelChanged Parms{};

	Parms.OldAlertLevel = OldAlertLevel;
	Parms.NewAlertLevel = NewAlertLevel;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortAthenaAIBotController::OnBeginSpectating(class AFortPlayerStateZone* Spectator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnBeginSpectating");

	Params::FortAthenaAIBotController_OnBeginSpectating Parms{};

	Parms.Spectator = Spectator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnCurrentHarvestableDestroyed(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnCurrentHarvestableDestroyed");

	Params::FortAthenaAIBotController_OnCurrentHarvestableDestroyed Parms{};

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

void AFortAthenaAIBotController::OnEndSpectating(class AFortPlayerStateZone* Spectator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnEndSpectating");

	Params::FortAthenaAIBotController_OnEndSpectating Parms{};

	Parms.Spectator = Spectator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnGamePhaseChanged(EAthenaGamePhase GamePhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnGamePhaseChanged");

	Params::FortAthenaAIBotController_OnGamePhaseChanged Parms{};

	Parms.GamePhase = GamePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnGamePhaseStepChanged(const TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnGamePhaseStepChanged");

	Params::FortAthenaAIBotController_OnGamePhaseStepChanged Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnKnockbacked(const struct FGameplayTag& KnockbackTypeTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnKnockbacked");

	Params::FortAthenaAIBotController_OnKnockbacked Parms{};

	Parms.KnockbackTypeTag = std::move(KnockbackTypeTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnLaunched(const struct FVector& LaunchVelocity, const bool bXYOverride, const bool bZOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnLaunched");

	Params::FortAthenaAIBotController_OnLaunched Parms{};

	Parms.LaunchVelocity = std::move(LaunchVelocity);
	Parms.bXYOverride = bXYOverride;
	Parms.bZOverride = bZOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnMovementModeChange(class ACharacter* InCharacter, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnMovementModeChange");

	Params::FortAthenaAIBotController_OnMovementModeChange Parms{};

	Parms.InCharacter = InCharacter;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnPawnDidDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnPawnDidDamage");

	Params::FortAthenaAIBotController_OnPawnDidDamage Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnPawnWeaponChanged(class AFortWeapon* NewWeapon, class AFortWeapon* OldWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnPawnWeaponChanged");

	Params::FortAthenaAIBotController_OnPawnWeaponChanged Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.OldWeapon = OldWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnPerceptionSensed(class AActor* SourceActor, const struct FAIStimulus& Stim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnPerceptionSensed");

	Params::FortAthenaAIBotController_OnPerceptionSensed Parms{};

	Parms.SourceActor = SourceActor;
	Parms.Stim = std::move(Stim);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnPossesedPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnPossesedPawnDied");

	Params::FortAthenaAIBotController_OnPossesedPawnDied Parms{};

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

void AFortAthenaAIBotController::OnPossessedPawnReceiveDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnPossessedPawnReceiveDamage");

	Params::FortAthenaAIBotController_OnPossessedPawnReceiveDamage Parms{};

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

void AFortAthenaAIBotController::OnSafeZoneStateChanged(const EFortSafeZoneState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnSafeZoneStateChanged");

	Params::FortAthenaAIBotController_OnSafeZoneStateChanged Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnSafeZoneUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnSafeZoneUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnServerMarkerAdded(const struct FFortWorldMarkerData& MarkerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnServerMarkerAdded");

	Params::FortAthenaAIBotController_OnServerMarkerAdded Parms{};

	Parms.MarkerData = std::move(MarkerData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnTargetActorDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetActorDestroyed");

	Params::FortAthenaAIBotController_OnTargetActorDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnTargetBuildingDestroyed(class ABuildingActor* Building, class AAthenaAIController* AIController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetBuildingDestroyed");

	Params::FortAthenaAIBotController_OnTargetBuildingDestroyed Parms{};

	Parms.Building = Building;
	Parms.AIController = AIController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnTargetPawnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetPawnDamaged");

	Params::FortAthenaAIBotController_OnTargetPawnDamaged Parms{};

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

void AFortAthenaAIBotController::OnTargetPawnDead(class AFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetPawnDead");

	Params::FortAthenaAIBotController_OnTargetPawnDead Parms{};

	Parms.FortPawn = FortPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OnTargetPawnDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetPawnDestroyed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OverrideAggressivenessPlayStyle(bool bInIsAggressive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OverrideAggressivenessPlayStyle");

	Params::FortAthenaAIBotController_OverrideAggressivenessPlayStyle Parms{};

	Parms.bInIsAggressive = bInIsAggressive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::OverrideSkill(const float NewSkill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "OverrideSkill");

	Params::FortAthenaAIBotController_OverrideSkill Parms{};

	Parms.NewSkill = NewSkill;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::PlayEmote(const struct FPrimaryAssetId& EmotePrimaryAssetId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "PlayEmote");

	Params::FortAthenaAIBotController_PlayEmote Parms{};

	Parms.EmotePrimaryAssetId = std::move(EmotePrimaryAssetId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::QueueStim(class AActor* SourceActor, const struct FVector& SourceLocation, const struct FVector& SourceDirection, const EStimType NewStimType, const float StimStrength, const class FName StimTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "QueueStim");

	Params::FortAthenaAIBotController_QueueStim Parms{};

	Parms.SourceActor = SourceActor;
	Parms.SourceLocation = std::move(SourceLocation);
	Parms.SourceDirection = std::move(SourceDirection);
	Parms.NewStimType = NewStimType;
	Parms.StimStrength = StimStrength;
	Parms.StimTag = StimTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::ReleaseBuildTool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "ReleaseBuildTool");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::RemoveEmoteRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "RemoveEmoteRequest");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::RemoveSkillSet(TSubclassOf<class UFortAthenaAIBotSkillSet> SkillSetClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "RemoveSkillSet");

	Params::FortAthenaAIBotController_RemoveSkillSet Parms{};

	Parms.SkillSetClass = SkillSetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::RequestEmote(const struct FPrimaryAssetId& EmotePrimaryAssetId, float InfiniteEmoteMaxDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "RequestEmote");

	Params::FortAthenaAIBotController_RequestEmote Parms{};

	Parms.EmotePrimaryAssetId = std::move(EmotePrimaryAssetId);
	Parms.InfiniteEmoteMaxDuration = InfiniteEmoteMaxDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::SetBotOwner(class AActor* InBotOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetBotOwner");

	Params::FortAthenaAIBotController_SetBotOwner Parms{};

	Parms.InBotOwner = InBotOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::SetLeashActorToFollow(const class AActor* ActorToFollow, const float LeashLocationUpdateRate, const struct FVector& LocalOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetLeashActorToFollow");

	Params::FortAthenaAIBotController_SetLeashActorToFollow Parms{};

	Parms.ActorToFollow = ActorToFollow;
	Parms.LeashLocationUpdateRate = LeashLocationUpdateRate;
	Parms.LocalOffset = std::move(LocalOffset);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::SetLeashGameplayVolume(const class AGameplayVolume* InLeashGameplayVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetLeashGameplayVolume");

	Params::FortAthenaAIBotController_SetLeashGameplayVolume Parms{};

	Parms.InLeashGameplayVolume = InLeashGameplayVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::SetLeashReturnLocationMode(ELeashReturnLocationMode ReturnMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetLeashReturnLocationMode");

	Params::FortAthenaAIBotController_SetLeashReturnLocationMode Parms{};

	Parms.ReturnMode = ReturnMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::SetLeashVolume(class AFortAthenaAILeashVolume* InLeashVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetLeashVolume");

	Params::FortAthenaAIBotController_SetLeashVolume Parms{};

	Parms.InLeashVolume = InLeashVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::SetPatrollingEnable(const bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetPatrollingEnable");

	Params::FortAthenaAIBotController_SetPatrollingEnable Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::SetRadialLeashInnerRadius(const float InnerRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetRadialLeashInnerRadius");

	Params::FortAthenaAIBotController_SetRadialLeashInnerRadius Parms{};

	Parms.InnerRadius = InnerRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::SetRadialLeashOuterRadius(const float OuterRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetRadialLeashOuterRadius");

	Params::FortAthenaAIBotController_SetRadialLeashOuterRadius Parms{};

	Parms.OuterRadius = OuterRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::SetSkillSet(TSubclassOf<class UFortAthenaAIBotSkillSet> SkillSetClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetSkillSet");

	Params::FortAthenaAIBotController_SetSkillSet Parms{};

	Parms.SkillSetClass = SkillSetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::StartFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "StartFire");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::StartSecondaryFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "StartSecondaryFire");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::StopEmote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "StopEmote");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::StopFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "StopFire");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::StopSecondaryFire(const bool bFireWhenStopping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "StopSecondaryFire");

	Params::FortAthenaAIBotController_StopSecondaryFire Parms{};

	Parms.bFireWhenStopping = bFireWhenStopping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::SwitchTeam(uint8 TeamIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "SwitchTeam");

	Params::FortAthenaAIBotController_SwitchTeam Parms{};

	Parms.TeamIndex = TeamIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::ThankBusDriver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "ThankBusDriver");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaAIBotController::UpdateLeashActorToFollowLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "UpdateLeashActorToFollowLocation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class AActor* AFortAthenaAIBotController::GetBotOwner() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "GetBotOwner");

	Params::FortAthenaAIBotController_GetBotOwner Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* AFortAthenaAIBotController::GetCurrentThreat() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "GetCurrentThreat");

	Params::FortAthenaAIBotController_GetCurrentThreat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAthenaMarkerComponent* AFortAthenaAIBotController::GetMarkerComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "GetMarkerComponent");

	Params::FortAthenaAIBotController_GetMarkerComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class UFortWorldItem* AFortAthenaAIBotController::GetSlotItemByItemDefinition(const class UFortItemDefinition* ItemDefinition) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "GetSlotItemByItemDefinition");

	Params::FortAthenaAIBotController_GetSlotItemByItemDefinition Parms{};

	Parms.ItemDefinition = ItemDefinition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortAthenaAIBotController::IsAnAthenaGameParticipant() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotController", "IsAnAthenaGameParticipant");

	Params::FortAthenaAIBotController_IsAnAthenaGameParticipant Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaTrackableAIObjectVehicleComponent::HandleSleepStateChanged(const bool bIsAwake)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaTrackableAIObjectVehicleComponent", "HandleSleepStateChanged");

	Params::FortAthenaTrackableAIObjectVehicleComponent_HandleSleepStateChanged Parms{};

	Parms.bIsAwake = bIsAwake;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerComponent::OnAIPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerComponent", "OnAIPawnDied");

	Params::FortCreativeCreatureManagerComponent_OnAIPawnDied Parms{};

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

void UFortCreativeCreatureManagerComponent::OnInfoComponentAdded(class UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerComponent", "OnInfoComponentAdded");

	Params::FortCreativeCreatureManagerComponent_OnInfoComponentAdded Parms{};

	Parms.CreatureManagerInfoComponent = CreatureManagerInfoComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCreativeCreatureManagerComponent::OnInfoComponentRemoved(class UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeCreatureManagerComponent", "OnInfoComponentRemoved");

	Params::FortCreativeCreatureManagerComponent_OnInfoComponentRemoved Parms{};

	Parms.CreatureManagerInfoComponent = CreatureManagerInfoComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortEnvQueryManager::OnGamePhaseChanged(EAthenaGamePhase GamePhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEnvQueryManager", "OnGamePhaseChanged");

	Params::FortEnvQueryManager_OnGamePhaseChanged Parms{};

	Parms.GamePhase = GamePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQueryTwoPointSolver::AddNamedFloatParamA(class FName ParamName, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQueryTwoPointSolver", "AddNamedFloatParamA");

	Params::FortQueryTwoPointSolver_AddNamedFloatParamA Parms{};

	Parms.ParamName = ParamName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQueryTwoPointSolver::AddNamedFloatParamB(class FName ParamName, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQueryTwoPointSolver", "AddNamedFloatParamB");

	Params::FortQueryTwoPointSolver_AddNamedFloatParamB Parms{};

	Parms.ParamName = ParamName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQueryTwoPointSolver::OnCustomRotationMode(const struct FVector& InPointA, const struct FVector& Querier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQueryTwoPointSolver", "OnCustomRotationMode");

	Params::FortQueryTwoPointSolver_OnCustomRotationMode Parms{};

	Parms.InPointA = std::move(InPointA);
	Parms.Querier = std::move(Querier);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQueryTwoPointSolver::SetCustomRotationA(const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQueryTwoPointSolver", "SetCustomRotationA");

	Params::FortQueryTwoPointSolver_SetCustomRotationA Parms{};

	Parms.Rotation = std::move(Rotation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQueryTwoPointSolver::SkipToNextPointA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQueryTwoPointSolver", "SkipToNextPointA");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQueryTwoPointSolver::Start(class UObject* Querier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQueryTwoPointSolver", "Start");

	Params::FortQueryTwoPointSolver_Start Parms{};

	Parms.Querier = Querier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FRotator UFortQueryTwoPointSolver::GetRandomRotationOffset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQueryTwoPointSolver", "GetRandomRotationOffset");

	Params::FortQueryTwoPointSolver_GetRandomRotationOffset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortGameplayAbility_TeleportToActor::PostTeleportedPawn(class AFortPawn* TeleportedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_TeleportToActor", "PostTeleportedPawn");

	Params::FortGameplayAbility_TeleportToActor_PostTeleportedPawn Parms{};

	Parms.TeleportedPawn = TeleportedPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGameplayAbility_TeleportToActor::PreTeleportPawn(class AFortPawn* TeleportedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_TeleportToActor", "PreTeleportPawn");

	Params::FortGameplayAbility_TeleportToActor_PreTeleportPawn Parms{};

	Parms.TeleportedPawn = TeleportedPawn;

	UObject::ProcessEvent(Func, &Parms);
}

float IFortPatrolWardInterface::GetAffectingDistance() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPatrolWardInterface", "GetAffectingDistance");

	Params::FortPatrolWardInterface_GetAffectingDistance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

EWardAffectType IFortPatrolWardInterface::GetAffectingType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPatrolWardInterface", "GetAffectingType");

	Params::FortPatrolWardInterface_GetAffectingType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AFortThreatVisualsManager::BeginThreatVisualsPrecursor(class AActor* SourceActor, const struct FVector& ThreatLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "BeginThreatVisualsPrecursor");

	Params::FortThreatVisualsManager_BeginThreatVisualsPrecursor Parms{};

	Parms.SourceActor = SourceActor;
	Parms.ThreatLocation = std::move(ThreatLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortThreatVisualsManager::OnBeginThreatVisualsPrecursor(class AActor* SourceActor, const struct FVector& EndLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "OnBeginThreatVisualsPrecursor");

	Params::FortThreatVisualsManager_OnBeginThreatVisualsPrecursor Parms{};

	Parms.SourceActor = SourceActor;
	Parms.EndLocation = std::move(EndLocation);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortThreatVisualsManager::OnRep_GoalActorLocations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "OnRep_GoalActorLocations");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortThreatVisualsManager::OnRep_HideClouds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "OnRep_HideClouds");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortThreatVisualsManager::OnRep_StormWinds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "OnRep_StormWinds");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortThreatVisualsManager::OnRep_ThreatLocations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "OnRep_ThreatLocations");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortThreatVisualsManager::OnThreatCloudsChanged(const TArray<struct FThreatLocationInfo>& ThreatLocationInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "OnThreatCloudsChanged");

	Params::FortThreatVisualsManager_OnThreatCloudsChanged Parms{};

	Parms.ThreatLocationInfo = std::move(ThreatLocationInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortThreatVisualsManager::OnWorldReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "OnWorldReady");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortThreatVisualsManager::ResetMinimumCloudAltitude()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "ResetMinimumCloudAltitude");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortThreatVisualsManager::SetCloudsAreHidden(bool bHide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "SetCloudsAreHidden");

	Params::FortThreatVisualsManager_SetCloudsAreHidden Parms{};

	Parms.bHide = bHide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortThreatVisualsManager::SetMinimumCloudAltitude(float NewMinimumAltitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "SetMinimumCloudAltitude");

	Params::FortThreatVisualsManager_SetMinimumCloudAltitude Parms{};

	Parms.NewMinimumAltitude = NewMinimumAltitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool AFortThreatVisualsManager::GetCloudsAreHidden() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "GetCloudsAreHidden");

	Params::FortThreatVisualsManager_GetCloudsAreHidden Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AThreatCloud* AFortThreatVisualsManager::GetThreatCloud(const struct FThreatLocationInfo& ThreatLocInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "GetThreatCloud");

	Params::FortThreatVisualsManager_GetThreatCloud Parms{};

	Parms.ThreatLocInfo = std::move(ThreatLocInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<struct FThreatLocationInfo> AFortThreatVisualsManager::GetThreatClouds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "GetThreatClouds");

	Params::FortThreatVisualsManager_GetThreatClouds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortThreatVisualsManager::StormsExist() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortThreatVisualsManager", "StormsExist");

	Params::FortThreatVisualsManager_StormsExist Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortInfluenceMap::K2_AddInfluenceSource(class UObject* WorldContext, const struct FVector& Position, const class FString& SourceName, float Strength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortInfluenceMap", "K2_AddInfluenceSource");

	Params::FortInfluenceMap_K2_AddInfluenceSource Parms{};

	Parms.WorldContext = WorldContext;
	Parms.Position = std::move(Position);
	Parms.SourceName = std::move(SourceName);
	Parms.Strength = Strength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortInfluenceMap::K2_GetInfluenceSourcePositions(class UObject* WorldContext, TArray<struct FVector>* InfluenceSourcePositions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortInfluenceMap", "K2_GetInfluenceSourcePositions");

	Params::FortInfluenceMap_K2_GetInfluenceSourcePositions Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InfluenceSourcePositions != nullptr)
		*InfluenceSourcePositions = std::move(Parms.InfluenceSourcePositions);
}

void UFortBotMissionLogic::ClearAllLocated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotMissionLogic", "ClearAllLocated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortBotMissionLogic::MarkAllLocated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotMissionLogic", "MarkAllLocated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortBotMissionLogic::MarkSingleLocator(const class AActor* LocatorActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotMissionLogic", "MarkSingleLocator");

	Params::FortBotMissionLogic_MarkSingleLocator Parms{};

	Parms.LocatorActor = LocatorActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortBotMissionLogic::OnAssignedBehavior(class AFortAIController* BotAI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotMissionLogic", "OnAssignedBehavior");

	Params::FortBotMissionLogic_OnAssignedBehavior Parms{};

	Parms.BotAI = BotAI;

	UObject::ProcessEvent(Func, &Parms);
}

bool UFortBotMissionLogic::OnCanStartOtherMission(class AFortAIController* BotAI, class AFortMission* OtherMission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotMissionLogic", "OnCanStartOtherMission");

	Params::FortBotMissionLogic_OnCanStartOtherMission Parms{};

	Parms.BotAI = BotAI;
	Parms.OtherMission = OtherMission;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UFortBotMissionLogic::OnInteractWithMissionGoal(class AFortAIController* BotAI, class AActor* MissionGoal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotMissionLogic", "OnInteractWithMissionGoal");

	Params::FortBotMissionLogic_OnInteractWithMissionGoal Parms{};

	Parms.BotAI = BotAI;
	Parms.MissionGoal = MissionGoal;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UFortBotMissionLogic::OnMissionActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotMissionLogic", "OnMissionActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBotMissionLogic::OnMissionFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotMissionLogic", "OnMissionFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBotMissionLogic::OnMissionStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotMissionLogic", "OnMissionStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBotMissionLogic::ResetBehavior()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotMissionLogic", "ResetBehavior");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortBotMissionLogic::SetCurrentBehavior(class UBehaviorTree* Behavior)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotMissionLogic", "SetCurrentBehavior");

	Params::FortBotMissionLogic_SetCurrentBehavior Parms{};

	Parms.Behavior = Behavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortBotMissionLogic::SetGoalsInvulnerable(bool bGodMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotMissionLogic", "SetGoalsInvulnerable");

	Params::FortBotMissionLogic_SetGoalsInvulnerable Parms{};

	Parms.bGodMode = bGodMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AFortBotStructureBuilder* UFortBotMissionLogic::SpawnStructureBuilder(class AActor* MissionGoal, class UFortBuildingInstructions* BuildingInstructions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotMissionLogic", "SpawnStructureBuilder");

	Params::FortBotMissionLogic_SpawnStructureBuilder Parms{};

	Parms.MissionGoal = MissionGoal;
	Parms.BuildingInstructions = BuildingInstructions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortBotStructureBuilder::BuildAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotStructureBuilder", "BuildAll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortBotStructureBuilder::OnBuildingDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotStructureBuilder", "OnBuildingDied");

	Params::FortBotStructureBuilder_OnBuildingDied Parms{};

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

void AFortBotStructureBuilder::RunDeconstructor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBotStructureBuilder", "RunDeconstructor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

const TArray<class AFortAthenaAIBotController*> UFortAthenaNpcGalileoComponent::GetCommunicationGroup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "GetCommunicationGroup");

	Params::FortAthenaNpcGalileoComponent_GetCommunicationGroup Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaNpcGalileoComponent::OnPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "OnPawnDied");

	Params::FortAthenaNpcGalileoComponent_OnPawnDied Parms{};

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

void UFortAthenaNpcGalileoComponent::SetCommunicationGroup(const TArray<class AFortAthenaAIBotController*>& AIBotControllerList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "SetCommunicationGroup");

	Params::FortAthenaNpcGalileoComponent_SetCommunicationGroup Parms{};

	Parms.AIBotControllerList = std::move(AIBotControllerList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaNpcGalileoComponent::SetPatrolPath(const TArray<struct FVector>& NewPatrolPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "SetPatrolPath");

	Params::FortAthenaNpcGalileoComponent_SetPatrolPath Parms{};

	Parms.NewPatrolPath = std::move(NewPatrolPath);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const TArray<struct FVector> UFortAthenaNpcGalileoComponent::GetPatrolPath() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "GetPatrolPath");

	Params::FortAthenaNpcGalileoComponent_GetPatrolPath Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AAthenaNavInvokerBox::SetInvokerEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaNavInvokerBox", "SetInvokerEnabled");

	Params::AthenaNavInvokerBox_SetInvokerEnabled Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_GameplayBase::SetCanBeConverted(const bool bInCanBeConverted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "SetCanBeConverted");

	Params::FortAthenaAISpawnerDataComponent_GameplayBase_SetCanBeConverted Parms{};

	Parms.bInCanBeConverted = bInCanBeConverted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_GameplayBase::SetCopyConverterSpecificRelations(const bool bInCopyConverterSpecificRelations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "SetCopyConverterSpecificRelations");

	Params::FortAthenaAISpawnerDataComponent_GameplayBase_SetCopyConverterSpecificRelations Parms{};

	Parms.bInCopyConverterSpecificRelations = bInCopyConverterSpecificRelations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UFortAthenaAISpawnerDataComponent_GameplayBase::GetGlobalSpeedMultiplier() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "GetGlobalSpeedMultiplier");

	Params::FortAthenaAISpawnerDataComponent_GameplayBase_GetGlobalSpeedMultiplier Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaAISpawnerDataComponent_GameplayBase::PostOnSpawnedBP(class APawn* PawnAI) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "PostOnSpawnedBP");

	Params::FortAthenaAISpawnerDataComponent_GameplayBase_PostOnSpawnedBP Parms{};

	Parms.PawnAI = PawnAI;

	UObject::ProcessEvent(Func, &Parms);
}

bool UFortAthenaAISpawnerDataComponent_GameplayBase::ShouldOverrideGlobalSpeedMultiplier() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "ShouldOverrideGlobalSpeedMultiplier");

	Params::FortAthenaAISpawnerDataComponent_GameplayBase_ShouldOverrideGlobalSpeedMultiplier Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::SetLooseTagsToApplyToPawn(const struct FGameplayTagContainer& InGameplayTagContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayAbilityBase", "SetLooseTagsToApplyToPawn");

	Params::FortAthenaAISpawnerDataComponent_GameplayAbilityBase_SetLooseTagsToApplyToPawn Parms{};

	Parms.InGameplayTagContainer = std::move(InGameplayTagContainer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::GetInitialGameplayAbilities(TArray<class UFortAbilitySet*>* OutGASets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayAbilityBase", "GetInitialGameplayAbilities");

	Params::FortAthenaAISpawnerDataComponent_GameplayAbilityBase_GetInitialGameplayAbilities Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutGASets != nullptr)
		*OutGASets = std::move(Parms.OutGASets);
}

void UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::GetInitialGameplayEffects(TArray<struct FInitialGameplayEffectInfo>* OutGEs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayAbilityBase", "GetInitialGameplayEffects");

	Params::FortAthenaAISpawnerDataComponent_GameplayAbilityBase_GetInitialGameplayEffects Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutGEs != nullptr)
		*OutGEs = std::move(Parms.OutGEs);
}

struct FGameplayTagContainer UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::GetLooseTagsToApplyToPawn() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayAbilityBase", "GetLooseTagsToApplyToPawn");

	Params::FortAthenaAISpawnerDataComponent_GameplayAbilityBase_GetLooseTagsToApplyToPawn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAthenaAIServicePlayerBots::AddPOIVolume(class AFortPoiVolume* POIVolume, EAthenaAIServicePOIList POIList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "AddPOIVolume");

	Params::AthenaAIServicePlayerBots_AddPOIVolume Parms{};

	Parms.POIVolume = POIVolume;
	Parms.POIList = POIList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UAthenaAIServicePlayerBots::FetchNextCustomBotCosmeticVariantID(const class AFortPlayerPawnAthena* BotPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "FetchNextCustomBotCosmeticVariantID");

	Params::AthenaAIServicePlayerBots_FetchNextCustomBotCosmeticVariantID Parms{};

	Parms.BotPawn = BotPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAthenaAIServicePlayerBots::IsWeaponSupported(class AFortWeapon* FortWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "IsWeaponSupported");

	Params::AthenaAIServicePlayerBots_IsWeaponSupported Parms{};

	Parms.FortWeapon = FortWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAthenaAIServicePlayerBots::JoinTeam(const class AController* SourceTeamController, class AController* DestinationTeamController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "JoinTeam");

	Params::AthenaAIServicePlayerBots_JoinTeam Parms{};

	Parms.SourceTeamController = SourceTeamController;
	Parms.DestinationTeamController = DestinationTeamController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServicePlayerBots::KillBots(bool bKillPlayers, bool bKillNPCs, uint8 TeamIndex, class AActor* BotOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "KillBots");

	Params::AthenaAIServicePlayerBots_KillBots Parms{};

	Parms.bKillPlayers = bKillPlayers;
	Parms.bKillNPCs = bKillNPCs;
	Parms.TeamIndex = TeamIndex;
	Parms.BotOwner = BotOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServicePlayerBots::OnAgentGameOver(class AFortAthenaAIBotController* AIBotController, class AFortPawn* Pawn, class AController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnAgentGameOver");

	Params::AthenaAIServicePlayerBots_OnAgentGameOver Parms{};

	Parms.AIBotController = AIBotController;
	Parms.Pawn = Pawn;
	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServicePlayerBots::OnAIPawnSpawned(class AController* SpawnedController, bool bIsABot, class AFortPawn* FortAIPawn, class AFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnAIPawnSpawned");

	Params::AthenaAIServicePlayerBots_OnAIPawnSpawned Parms{};

	Parms.SpawnedController = SpawnedController;
	Parms.bIsABot = bIsABot;
	Parms.FortAIPawn = FortAIPawn;
	Parms.PlayerPawn = PlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServicePlayerBots::OnGamePhaseChanged(EAthenaGamePhase NewPhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnGamePhaseChanged");

	Params::AthenaAIServicePlayerBots_OnGamePhaseChanged Parms{};

	Parms.NewPhase = NewPhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServicePlayerBots::OnPlaylistDataReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnPlaylistDataReady");

	Params::AthenaAIServicePlayerBots_OnPlaylistDataReady Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServicePlayerBots::OnSafeZoneUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnSafeZoneUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServicePlayerBots::OnServerGameMemberRemoved(uint8 InSquadId, uint8 InTeamIndex, class AFortPlayerStateAthena* ChangedPS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnServerGameMemberRemoved");

	Params::AthenaAIServicePlayerBots_OnServerGameMemberRemoved Parms{};

	Parms.InSquadId = InSquadId;
	Parms.InTeamIndex = InTeamIndex;
	Parms.ChangedPS = ChangedPS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class APawn* UAthenaAIServicePlayerBots::SpawnAI(const struct FVector& InSpawnLocation, const struct FRotator& InSpawnRotation, const class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "SpawnAI");

	Params::AthenaAIServicePlayerBots_SpawnAI Parms{};

	Parms.InSpawnLocation = std::move(InSpawnLocation);
	Parms.InSpawnRotation = std::move(InSpawnRotation);
	Parms.AISpawnerComponentList = AISpawnerComponentList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortNavPathRendererComponent::DeactivateFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNavPathRendererComponent", "DeactivateFX");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortNavPathRendererComponent::OnRep_ColorIndexUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNavPathRendererComponent", "OnRep_ColorIndexUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortNavPathRendererComponent::OnRep_PathModeUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNavPathRendererComponent", "OnRep_PathModeUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortNavPathRendererComponent::OnRep_PathPointsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNavPathRendererComponent", "OnRep_PathPointsUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortNavPathRendererComponent::UpdatePathsVisualOnClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNavPathRendererComponent", "UpdatePathsVisualOnClient");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

float UFortAthenaAISpawnerDataComponent_SkillsetBase::GetSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SkillsetBase", "GetSkill");

	Params::FortAthenaAISpawnerDataComponent_SkillsetBase_GetSkill Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> UFortAthenaAISpawnerDataComponent_SkillsetBase::GetSkillSets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SkillsetBase", "GetSkillSets");

	Params::FortAthenaAISpawnerDataComponent_SkillsetBase_GetSkillSets Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaAISpawnerDataComponent_SkillsetBase::ShouldUseMatchMMRToOverrideSkillLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SkillsetBase", "ShouldUseMatchMMRToOverrideSkillLevel");

	Params::FortAthenaAISpawnerDataComponent_SkillsetBase_ShouldUseMatchMMRToOverrideSkillLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaAISpawnerDataComponent_AIBotSkillset::SetSkill(const float InSKill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotSkillset", "SetSkill");

	Params::FortAthenaAISpawnerDataComponent_AIBotSkillset_SetSkill Parms{};

	Parms.InSKill = InSKill;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_CosmeticBase::GetFallbackTag(struct FGameplayTag* OutFallbackTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_CosmeticBase", "GetFallbackTag");

	Params::FortAthenaAISpawnerDataComponent_CosmeticBase_GetFallbackTag Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutFallbackTag != nullptr)
		*OutFallbackTag = std::move(Parms.OutFallbackTag);
}

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::AddCosmeticOverrideItemDef(const class UAthenaCosmeticItemDefinition* InCosmeticItemToPreview)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "AddCosmeticOverrideItemDef");

	Params::FortAthenaAISpawnerDataComponent_AIBotCosmeticBase_AddCosmeticOverrideItemDef Parms{};

	Parms.InCosmeticItemToPreview = InCosmeticItemToPreview;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetAllLoadouts(TArray<struct FFortAthenaLoadout>* OutLoadouts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetAllLoadouts");

	Params::FortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetAllLoadouts Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLoadouts != nullptr)
		*OutLoadouts = std::move(Parms.OutLoadouts);
}

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetAnimBPOverride(TSubclassOf<class UAnimInstance>* OutAnimBPOverride, int32* OutPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetAnimBPOverride");

	Params::FortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetAnimBPOverride Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAnimBPOverride != nullptr)
		*OutAnimBPOverride = Parms.OutAnimBPOverride;

	if (OutPriority != nullptr)
		*OutPriority = Parms.OutPriority;
}

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetCustomCharacterParts(TArray<class UCustomCharacterPart*>* OutCustomCharacterParts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetCustomCharacterParts");

	Params::FortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetCustomCharacterParts Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutCustomCharacterParts != nullptr)
		*OutCustomCharacterParts = std::move(Parms.OutCustomCharacterParts);
}

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetDances(TArray<class UAthenaDanceItemDefinition*>* Dances, const class AFortAthenaAIBotController* BotController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetDances");

	Params::FortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetDances Parms{};

	Parms.BotController = BotController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Dances != nullptr)
		*Dances = std::move(Parms.Dances);
}

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetLoadout(struct FFortAthenaLoadout* OutLoadout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetLoadout");

	Params::FortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetLoadout Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLoadout != nullptr)
		*OutLoadout = std::move(Parms.OutLoadout);
}

void UFortAITask_ExecuteAbility::OnInjectedHitResultDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAITask_ExecuteAbility", "OnInjectedHitResultDied");

	Params::FortAITask_ExecuteAbility_OnInjectedHitResultDied Parms{};

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

TSubclassOf<class AAIController> UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetAIControllerClass() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetAIControllerClass");

	Params::FortAthenaAISpawnerDataComponent_SpawnParamsBase_GetAIControllerClass Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetInAirSpawnTraceEndHeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetInAirSpawnTraceEndHeight");

	Params::FortAthenaAISpawnerDataComponent_SpawnParamsBase_GetInAirSpawnTraceEndHeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetInAirSpawnTraceSphereRadius() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetInAirSpawnTraceSphereRadius");

	Params::FortAthenaAISpawnerDataComponent_SpawnParamsBase_GetInAirSpawnTraceSphereRadius Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetInAirSpawnTraceStartHeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetInAirSpawnTraceStartHeight");

	Params::FortAthenaAISpawnerDataComponent_SpawnParamsBase_GetInAirSpawnTraceStartHeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TSubclassOf<class APawn> UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetPawnClass() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetPawnClass");

	Params::FortAthenaAISpawnerDataComponent_SpawnParamsBase_GetPawnClass Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FDataTableRowHandle UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetPawnStatHandle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetPawnStatHandle");

	Params::FortAthenaAISpawnerDataComponent_SpawnParamsBase_GetPawnStatHandle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<TSubclassOf<class UFortAthenaAISpawnerData>> UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetSpawnerDataSpawnedAsChildren() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetSpawnerDataSpawnedAsChildren");

	Params::FortAthenaAISpawnerDataComponent_SpawnParamsBase_GetSpawnerDataSpawnedAsChildren Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetSpawnTracePadding() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetSpawnTracePadding");

	Params::FortAthenaAISpawnerDataComponent_SpawnParamsBase_GetSpawnTracePadding Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaAISpawnerDataComponent_SpawnParamsBase::ShouldCheckForOverlaps() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "ShouldCheckForOverlaps");

	Params::FortAthenaAISpawnerDataComponent_SpawnParamsBase_ShouldCheckForOverlaps Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaAISpawnerDataComponent_SpawnParamsBase::ShouldSpawnInAir() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "ShouldSpawnInAir");

	Params::FortAthenaAISpawnerDataComponent_SpawnParamsBase_ShouldSpawnInAir Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AThreatCloud::ManualLightningFlash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatCloud", "ManualLightningFlash");

	UObject::ProcessEvent(Func, nullptr);
}

void AThreatCloud::OnBeginDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatCloud", "OnBeginDeath");

	UObject::ProcessEvent(Func, nullptr);
}

void AThreatCloud::OnCloudActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatCloud", "OnCloudActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void AThreatCloud::OnCloudDeactivated(EFortThreatDeactivationType DeactivationType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatCloud", "OnCloudDeactivated");

	Params::ThreatCloud_OnCloudDeactivated Parms{};

	Parms.DeactivationType = DeactivationType;

	UObject::ProcessEvent(Func, &Parms);
}

void AThreatCloud::OnCloudHiddenChange(bool bCloudsAreHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatCloud", "OnCloudHiddenChange");

	Params::ThreatCloud_OnCloudHiddenChange Parms{};

	Parms.bCloudsAreHidden = bCloudsAreHidden;

	UObject::ProcessEvent(Func, &Parms);
}

void AThreatCloud::OnCloudStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatCloud", "OnCloudStart");

	UObject::ProcessEvent(Func, nullptr);
}

void AThreatCloud::OnLightningStrike(const struct FVector& StartLocation, const struct FVector& EndLocation, class ABuildingRift* Rift, bool bLightningStruckRift)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatCloud", "OnLightningStrike");

	Params::ThreatCloud_OnLightningStrike Parms{};

	Parms.StartLocation = std::move(StartLocation);
	Parms.EndLocation = std::move(EndLocation);
	Parms.Rift = Rift;
	Parms.bLightningStruckRift = bLightningStruckRift;

	UObject::ProcessEvent(Func, &Parms);
}

void AThreatCloud::OnThreatVolumeChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatCloud", "OnThreatVolumeChanged");

	UObject::ProcessEvent(Func, nullptr);
}

struct FBox AThreatCloud::GetThreatVolume() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatCloud", "GetThreatVolume");

	Params::ThreatCloud_GetThreatVolume Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAthenaAIBlueprintLibrary::AIPawnFromGAHasLuringPickupAsGoal(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayTag& GameplayTag, const float MaxLifetime, const EFortPickupSpawnSource RequiredPickupSpawnSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaAIBlueprintLibrary", "AIPawnFromGAHasLuringPickupAsGoal");

	Params::AthenaAIBlueprintLibrary_AIPawnFromGAHasLuringPickupAsGoal Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.GameplayTag = std::move(GameplayTag);
	Parms.MaxLifetime = MaxLifetime;
	Parms.RequiredPickupSpawnSource = RequiredPickupSpawnSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class APawn* UAthenaAIBlueprintLibrary::AthenaSpawnAIFromClass(class UObject* WorldContextObject, TSubclassOf<class APawn> PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail, class AActor* Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaAIBlueprintLibrary", "AthenaSpawnAIFromClass");

	Params::AthenaAIBlueprintLibrary_AthenaSpawnAIFromClass Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PawnClass = PawnClass;
	Parms.BehaviorTree = BehaviorTree;
	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.bNoCollisionFail = bNoCollisionFail;
	Parms.Owner = Owner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAthenaAIPopulationTracker* UAthenaAIBlueprintLibrary::GetAIPopulationTracker(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaAIBlueprintLibrary", "GetAIPopulationTracker");

	Params::AthenaAIBlueprintLibrary_GetAIPopulationTracker Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAthenaAIServiceCreativePlayerBots* UAthenaAIBlueprintLibrary::GetAIServiceCreativePlayerBots(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaAIBlueprintLibrary", "GetAIServiceCreativePlayerBots");

	Params::AthenaAIBlueprintLibrary_GetAIServiceCreativePlayerBots Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAthenaAIServiceLoot* UAthenaAIBlueprintLibrary::GetAIServiceLoot(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaAIBlueprintLibrary", "GetAIServiceLoot");

	Params::AthenaAIBlueprintLibrary_GetAIServiceLoot Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAthenaAIServicePlayerBots* UAthenaAIBlueprintLibrary::GetAIServicePlayerBots(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaAIBlueprintLibrary", "GetAIServicePlayerBots");

	Params::AthenaAIBlueprintLibrary_GetAIServicePlayerBots Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAthenaAIBlueprintLibrary::IsItemDefinitionSupported(class UObject* WorldContextObject, const class UFortItemDefinition* FortItemDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaAIBlueprintLibrary", "IsItemDefinitionSupported");

	Params::AthenaAIBlueprintLibrary_IsItemDefinitionSupported Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.FortItemDef = FortItemDef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAthenaAIBlueprintLibrary::IsWeaponSupported(class UObject* WorldContextObject, class AFortWeapon* FortWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaAIBlueprintLibrary", "IsWeaponSupported");

	Params::AthenaAIBlueprintLibrary_IsWeaponSupported Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.FortWeapon = FortWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAthenaAIBlueprintLibrary::JoinTeam(class UObject* WorldContextObject, const class AController* SourceTeamController, class AController* DestinationTeamController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaAIBlueprintLibrary", "JoinTeam");

	Params::AthenaAIBlueprintLibrary_JoinTeam Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SourceTeamController = SourceTeamController;
	Parms.DestinationTeamController = DestinationTeamController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIBlueprintLibrary::KillBots(class UObject* WorldContextObject, const bool bKillPlayers, const bool bKillNoneParticipants, const uint8 TeamIndex, class AActor* BotOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaAIBlueprintLibrary", "KillBots");

	Params::AthenaAIBlueprintLibrary_KillBots Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bKillPlayers = bKillPlayers;
	Parms.bKillNoneParticipants = bKillNoneParticipants;
	Parms.TeamIndex = TeamIndex;
	Parms.BotOwner = BotOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIBlueprintLibrary::MakeBotGroupsTakeEachOtherAsTargets(const TArray<class AActor*>& GroupA, const TArray<class AActor*>& GroupB, EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaAIBlueprintLibrary", "MakeBotGroupsTakeEachOtherAsTargets");

	Params::AthenaAIBlueprintLibrary_MakeBotGroupsTakeEachOtherAsTargets Parms{};

	Parms.GroupA = std::move(GroupA);
	Parms.GroupB = std::move(GroupB);
	Parms.PerceptionState = PerceptionState;
	Parms.ForgetTime = ForgetTime;
	Parms.ForgetDistance = ForgetDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAlertStateComponent::OnStealthMeterChanged(class AFortAthenaAIBotController* BotController, float StealthMeterTarget_0, float StealthMeterTargetTime_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAlertStateComponent", "OnStealthMeterChanged");

	Params::FortAthenaAlertStateComponent_OnStealthMeterChanged Parms{};

	Parms.BotController = BotController;
	Parms.StealthMeterTarget_0 = StealthMeterTarget_0;
	Parms.StealthMeterTargetTime_0 = StealthMeterTargetTime_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAlertStateComponent::SetStealthMeterTarget(const float InStealthMeterTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAlertStateComponent", "SetStealthMeterTarget");

	Params::FortAthenaAlertStateComponent_SetStealthMeterTarget Parms{};

	Parms.InStealthMeterTarget = InStealthMeterTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAlertStateComponent::SetStealthMeterTargetTime(const float InStealthMeterTargetTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAlertStateComponent", "SetStealthMeterTargetTime");

	Params::FortAthenaAlertStateComponent_SetStealthMeterTargetTime Parms{};

	Parms.InStealthMeterTargetTime = InStealthMeterTargetTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UFortAthenaAlertStateComponent::GetStealthMeterTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAlertStateComponent", "GetStealthMeterTarget");

	Params::FortAthenaAlertStateComponent_GetStealthMeterTarget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAthenaAlertStateComponent::GetStealthMeterTargetTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAlertStateComponent", "GetStealthMeterTargetTime");

	Params::FortAthenaAlertStateComponent_GetStealthMeterTargetTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaNPCLoopStateComponent::InitLoopState(class AFortPawn* PawnOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNPCLoopStateComponent", "InitLoopState");

	Params::FortAthenaNPCLoopStateComponent_InitLoopState Parms{};

	Parms.PawnOwner = PawnOwner;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortAthenaNPCLoopStateComponent::OnOwnerPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNPCLoopStateComponent", "OnOwnerPawnDied");

	Params::FortAthenaNPCLoopStateComponent_OnOwnerPawnDied Parms{};

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

void UFortPawnComponent_AIBotPingCommand::HandleOnNPCConvertEvent(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "HandleOnNPCConvertEvent");

	Params::FortPawnComponent_AIBotPingCommand_HandleOnNPCConvertEvent Parms{};

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_AIBotPingCommand::HandleOnNPCUnconvertEvent(class AFortPawn* UnconvertedFortPawn, EUnconvertReason UnconvertReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "HandleOnNPCUnconvertEvent");

	Params::FortPawnComponent_AIBotPingCommand_HandleOnNPCUnconvertEvent Parms{};

	Parms.UnconvertedFortPawn = UnconvertedFortPawn;
	Parms.UnconvertReason = UnconvertReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_AIBotPingCommand::OnAIPingCommand(class AFortPlayerPawn* PlayerPawn, EPingCommandType CommandType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "OnAIPingCommand");

	Params::FortPawnComponent_AIBotPingCommand_OnAIPingCommand Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.CommandType = CommandType;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPawnComponent_AIBotPingCommand::OnServerMarkerAdded(const struct FFortWorldMarkerData& MarkerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "OnServerMarkerAdded");

	Params::FortPawnComponent_AIBotPingCommand_OnServerMarkerAdded Parms{};

	Parms.MarkerData = std::move(MarkerData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_AIBotPingCommand::OnServerMarkerRemoved(const struct FMarkerID& MarkerID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "OnServerMarkerRemoved");

	Params::FortPawnComponent_AIBotPingCommand_OnServerMarkerRemoved Parms{};

	Parms.MarkerID = std::move(MarkerID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_AIFormation::OnUserDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_AIFormation", "OnUserDied");

	Params::FortPawnComponent_AIFormation_OnUserDied Parms{};

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

void UFortPawnComponent_AIGroup::OnGroupMemberDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_AIGroup", "OnGroupMemberDied");

	Params::FortPawnComponent_AIGroup_OnGroupMemberDied Parms{};

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

void UFortPawnComponent_AIGroup::RemoveFromCurrentGroup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_AIGroup", "RemoveFromCurrentGroup");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaPatrolPath::OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPatrolPath", "OnCurrentPlaylistLoaded");

	Params::FortAthenaPatrolPath_OnCurrentPlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaPatrolPath::SetPatrolPathEnabled(const bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPatrolPath", "SetPatrolPathEnabled");

	Params::FortAthenaPatrolPath_SetPatrolPathEnabled Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool AFortAthenaPatrolPath::CanBeUsed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPatrolPath", "CanBeUsed");

	Params::FortAthenaPatrolPath_CanBeUsed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortAthenaPatrolPath::GetPatrolPoints(TArray<class AFortAthenaPatrolPoint*>* OutPatrolPoints) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPatrolPath", "GetPatrolPoints");

	Params::FortAthenaPatrolPath_GetPatrolPoints Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPatrolPoints != nullptr)
		*OutPatrolPoints = std::move(Parms.OutPatrolPoints);
}

void AFortAthenaPatrolPath::PatrolPathStarted(class AAIController* AIInstigator) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPatrolPath", "PatrolPathStarted");

	Params::FortAthenaPatrolPath_PatrolPathStarted Parms{};

	Parms.AIInstigator = AIInstigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaPatrolPath::PatrolPathStopped(class AAIController* AIInstigator) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPatrolPath", "PatrolPathStopped");

	Params::FortAthenaPatrolPath_PatrolPathStopped Parms{};

	Parms.AIInstigator = AIInstigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaPatrolPath::PatrolPointFailedToReach(class AFortAthenaPatrolPoint* PathPoint, class AAIController* AIInstigator) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPatrolPath", "PatrolPointFailedToReach");

	Params::FortAthenaPatrolPath_PatrolPointFailedToReach Parms{};

	Parms.PathPoint = PathPoint;
	Parms.AIInstigator = AIInstigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaPatrolPath::PatrolPointReached(class AFortAthenaPatrolPoint* PathPoint, class AAIController* AIInstigator) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPatrolPath", "PatrolPointReached");

	Params::FortAthenaPatrolPath_PatrolPointReached Parms{};

	Parms.PathPoint = PathPoint;
	Parms.AIInstigator = AIInstigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortCreativePatrolPath::SetPatrolHasValidNavMesh(const bool bValidNavMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativePatrolPath", "SetPatrolHasValidNavMesh");

	Params::FortCreativePatrolPath_SetPatrolHasValidNavMesh Parms{};

	Parms.bValidNavMesh = bValidNavMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool AFortCreativePatrolPath::HasPatrolValidNavMesh() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativePatrolPath", "HasPatrolValidNavMesh");

	Params::FortCreativePatrolPath_HasPatrolValidNavMesh Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAthenaAIPerceptionStimuliSourceComponent::OnOwnerTeamIndexChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIPerceptionStimuliSourceComponent", "OnOwnerTeamIndexChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIRuntimeParameters_AIConvert::SetCanBeConverted(const bool bInCanBeConverted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "SetCanBeConverted");

	Params::FortAthenaAIRuntimeParameters_AIConvert_SetCanBeConverted Parms{};

	Parms.bInCanBeConverted = bInCanBeConverted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIRuntimeParameters_AIConvert::SetCanBeConvertedFromDBNO(const bool bInCanBeConvertedFromDBNO)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "SetCanBeConvertedFromDBNO");

	Params::FortAthenaAIRuntimeParameters_AIConvert_SetCanBeConvertedFromDBNO Parms{};

	Parms.bInCanBeConvertedFromDBNO = bInCanBeConvertedFromDBNO;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIRuntimeParameters_AIConvert::SetForceKillWhenConverterDies(const bool bInForceKillWhenConverterDies)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "SetForceKillWhenConverterDies");

	Params::FortAthenaAIRuntimeParameters_AIConvert_SetForceKillWhenConverterDies Parms{};

	Parms.bInForceKillWhenConverterDies = bInForceKillWhenConverterDies;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIRuntimeParameters_AIConvert::SetForceKillWhenUnconverted(const bool bInForceKillWhenUnconverted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "SetForceKillWhenUnconverted");

	Params::FortAthenaAIRuntimeParameters_AIConvert_SetForceKillWhenUnconverted Parms{};

	Parms.bInForceKillWhenUnconverted = bInForceKillWhenUnconverted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortAthenaAIRuntimeParameters_AIConvert::GetCanBeConverted() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetCanBeConverted");

	Params::FortAthenaAIRuntimeParameters_AIConvert_GetCanBeConverted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaAIRuntimeParameters_AIConvert::GetCanBeConvertedFromDBNO() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetCanBeConvertedFromDBNO");

	Params::FortAthenaAIRuntimeParameters_AIConvert_GetCanBeConvertedFromDBNO Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaAIRuntimeParameters_AIConvert::GetForceKillWhenConverterDies() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetForceKillWhenConverterDies");

	Params::FortAthenaAIRuntimeParameters_AIConvert_GetForceKillWhenConverterDies Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaAIRuntimeParameters_AIConvert::GetForceKillWhenUnconverted() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetForceKillWhenUnconverted");

	Params::FortAthenaAIRuntimeParameters_AIConvert_GetForceKillWhenUnconverted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<struct FPickupTagConvertInfo> UFortAthenaAIRuntimeParameters_AIConvert::GetPickupTagConvertInfos() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetPickupTagConvertInfos");

	Params::FortAthenaAIRuntimeParameters_AIConvert_GetPickupTagConvertInfos Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TSoftObjectPtr<class UFortAthenaAIBotCosmeticLibraryData> UFortAthenaAIBotCosmeticData::FindLibraryDataFromName(const class FString& PartialName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotCosmeticData", "FindLibraryDataFromName");

	Params::FortAthenaAIBotCosmeticData_FindLibraryDataFromName Parms{};

	Parms.PartialName = std::move(PartialName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaAIBotCosmeticLibraryData::FillDataTableValuesFromSourceLibrary(const class UFortAthenaAIBotCosmeticLibraryData* SourceLibrary)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotCosmeticLibraryData", "FillDataTableValuesFromSourceLibrary");

	Params::FortAthenaAIBotCosmeticLibraryData_FillDataTableValuesFromSourceLibrary Parms{};

	Parms.SourceLibrary = SourceLibrary;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UDataTable* UFortAthenaAIBotCosmeticLibraryData::FindDataTableFromAssetType(const class FString& AssetType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotCosmeticLibraryData", "FindDataTableFromAssetType");

	Params::FortAthenaAIBotCosmeticLibraryData_FindDataTableFromAssetType Parms{};

	Parms.AssetType = std::move(AssetType);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UDataTable*> UFortAthenaAIBotCosmeticLibraryData::RetrieveDataTables() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotCosmeticLibraryData", "RetrieveDataTables");

	Params::FortAthenaAIBotCosmeticLibraryData_RetrieveDataTables Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBotCosmeticBlueprintHelperLibrary::ExportDataTableToSourceCSV(const class UDataTable* DataTable, const bool bCanCheckOutFile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BotCosmeticBlueprintHelperLibrary", "ExportDataTableToSourceCSV");

	Params::BotCosmeticBlueprintHelperLibrary_ExportDataTableToSourceCSV Parms{};

	Parms.DataTable = DataTable;
	Parms.bCanCheckOutFile = bCanCheckOutFile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBotCosmeticBlueprintHelperLibrary::GenerateWeightedCSV(const class FString& AssetTypeName, const TArray<class FString>& AssetNames, const TArray<int32>& AssetWeight, class FString* CSV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BotCosmeticBlueprintHelperLibrary", "GenerateWeightedCSV");

	Params::BotCosmeticBlueprintHelperLibrary_GenerateWeightedCSV Parms{};

	Parms.AssetTypeName = std::move(AssetTypeName);
	Parms.AssetNames = std::move(AssetNames);
	Parms.AssetWeight = std::move(AssetWeight);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (CSV != nullptr)
		*CSV = std::move(Parms.CSV);

	return Parms.ReturnValue;
}

bool UBotCosmeticBlueprintHelperLibrary::LoadDataFromCSV(const class FString& FilePath, const TArray<class FString>& ForbiddenAssetNames, const TArray<class FString>& ForbiddenAssetPrefix, TArray<class FString>* AssetNames, TArray<class FString>* AssetTypes, TArray<int32>* AssetUsageCounts, TArray<int32>* AssetTypeSplitIndices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BotCosmeticBlueprintHelperLibrary", "LoadDataFromCSV");

	Params::BotCosmeticBlueprintHelperLibrary_LoadDataFromCSV Parms{};

	Parms.FilePath = std::move(FilePath);
	Parms.ForbiddenAssetNames = std::move(ForbiddenAssetNames);
	Parms.ForbiddenAssetPrefix = std::move(ForbiddenAssetPrefix);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (AssetNames != nullptr)
		*AssetNames = std::move(Parms.AssetNames);

	if (AssetTypes != nullptr)
		*AssetTypes = std::move(Parms.AssetTypes);

	if (AssetUsageCounts != nullptr)
		*AssetUsageCounts = std::move(Parms.AssetUsageCounts);

	if (AssetTypeSplitIndices != nullptr)
		*AssetTypeSplitIndices = std::move(Parms.AssetTypeSplitIndices);

	return Parms.ReturnValue;
}

TArray<class FString> UBotCosmeticBlueprintHelperLibrary::OpenCSVFileDialog(const class FString& TitleDetails, const bool bAllowMultipleFiles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BotCosmeticBlueprintHelperLibrary", "OpenCSVFileDialog");

	Params::BotCosmeticBlueprintHelperLibrary_OpenCSVFileDialog Parms{};

	Parms.TitleDetails = std::move(TitleDetails);
	Parms.bAllowMultipleFiles = bAllowMultipleFiles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBotCosmeticBlueprintHelperLibrary::SplitDataArrayByType(const TArray<class FString>& InAssetNames, const TArray<class FString>& InAssetTypes, const TArray<int32>& InAssetUsageCounts, const TArray<int32>& InAssetTypeSplitIndices, int32 CurrentSplitIndex, class FString* OutAssetType, TArray<class FString>* OutAssetNames, TArray<int32>* OutAssetUsageCounts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BotCosmeticBlueprintHelperLibrary", "SplitDataArrayByType");

	Params::BotCosmeticBlueprintHelperLibrary_SplitDataArrayByType Parms{};

	Parms.InAssetNames = std::move(InAssetNames);
	Parms.InAssetTypes = std::move(InAssetTypes);
	Parms.InAssetUsageCounts = std::move(InAssetUsageCounts);
	Parms.InAssetTypeSplitIndices = std::move(InAssetTypeSplitIndices);
	Parms.CurrentSplitIndex = CurrentSplitIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAssetType != nullptr)
		*OutAssetType = std::move(Parms.OutAssetType);

	if (OutAssetNames != nullptr)
		*OutAssetNames = std::move(Parms.OutAssetNames);

	if (OutAssetUsageCounts != nullptr)
		*OutAssetUsageCounts = std::move(Parms.OutAssetUsageCounts);

	return Parms.ReturnValue;
}

void UFortAthenaAIBotCustomizationData::SetCharacterCustomizationFromPlayerPawn(const class AFortPlayerPawn* InFortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotCustomizationData", "SetCharacterCustomizationFromPlayerPawn");

	Params::FortAthenaAIBotCustomizationData_SetCharacterCustomizationFromPlayerPawn Parms{};

	Parms.InFortPawn = InFortPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_InventoryBase::GetInventoryItems(TArray<struct FItemAndCount>* OutList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_InventoryBase", "GetInventoryItems");

	Params::FortAthenaAISpawnerDataComponent_InventoryBase_GetInventoryItems Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutList != nullptr)
		*OutList = std::move(Parms.OutList);
}

void UFortAthenaAISpawnerDataComponent_InventoryBase::SetInventoryItems(const TArray<struct FItemAndCount>& InItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_InventoryBase", "SetInventoryItems");

	Params::FortAthenaAISpawnerDataComponent_InventoryBase_SetInventoryItems Parms{};

	Parms.InItems = std::move(InItems);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_AIBotPerception::SetVisibilityRange(const float InSightRadius, const float LoseSightRadius_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotPerception", "SetVisibilityRange");

	Params::FortAthenaAISpawnerDataComponent_AIBotPerception_SetVisibilityRange Parms{};

	Parms.InSightRadius = InSightRadius;
	Parms.LoseSightRadius_0 = LoseSightRadius_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotEvaluator_Movement::EvaluateIsolatedIslandSteering()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Movement", "EvaluateIsolatedIslandSteering");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotEvaluator_Movement::OnCurrentUnstuckSteeringAttemptFinished(const EBotUnstuckSteeringReason UnstuckSteeringReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Movement", "OnCurrentUnstuckSteeringAttemptFinished");

	Params::FortAthenaAIBotEvaluator_Movement_OnCurrentUnstuckSteeringAttemptFinished Parms{};

	Parms.UnstuckSteeringReason = UnstuckSteeringReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotPathFollowingComponent::HandlePawnTeleported(class AFortPawn* TeleportedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotPathFollowingComponent", "HandlePawnTeleported");

	Params::FortAthenaAIBotPathFollowingComponent_HandlePawnTeleported Parms{};

	Parms.TeleportedPawn = TeleportedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UAthenaAISpawner::CancelRequest(const int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAISpawner", "CancelRequest");

	Params::AthenaAISpawner_CancelRequest Parms{};

	Parms.RequestID = RequestID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAthenaAISpawner::QueueForDespawn(class AActor* ActorToDespawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAISpawner", "QueueForDespawn");

	Params::AthenaAISpawner_QueueForDespawn Parms{};

	Parms.ActorToDespawn = ActorToDespawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UAthenaAISpawner::RequestSpawn(class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, const struct FTransform& SpawnTransform, const bool bUrgentRequest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAISpawner", "RequestSpawn");

	Params::AthenaAISpawner_RequestSpawn Parms{};

	Parms.AISpawnerComponentList = AISpawnerComponentList;
	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.bUrgentRequest = bUrgentRequest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaAILODComponent::OnRep_CurrentFortAILODLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAILODComponent", "OnRep_CurrentFortAILODLevel");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FFortAthenaAIObjectTrackerQuery UFortAthenaAIObjectTracker::BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified(const struct FFortAthenaAIObjectTrackerQuerySimplified& SimplifiedQuery, const class AActor* OptionalQuerier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAthenaAIObjectTracker", "BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified");

	Params::FortAthenaAIObjectTracker_BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified Parms{};

	Parms.SimplifiedQuery = std::move(SimplifiedQuery);
	Parms.OptionalQuerier = OptionalQuerier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaAIRuntimeParameters_SmartObjectBase::SetChooseClosestSmartObject(const bool bInChooseClosestSmartObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_SmartObjectBase", "SetChooseClosestSmartObject");

	Params::FortAthenaAIRuntimeParameters_SmartObjectBase_SetChooseClosestSmartObject Parms{};

	Parms.bInChooseClosestSmartObject = bInChooseClosestSmartObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortAthenaAIRuntimeParameters_SmartObjectBase::GetChooseClosestSmartObject() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_SmartObjectBase", "GetChooseClosestSmartObject");

	Params::FortAthenaAIRuntimeParameters_SmartObjectBase_GetChooseClosestSmartObject Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UFortAthenaAISpawnerDataComponent*> UFortAthenaAISpawnerDataComponentList::GetList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponentList", "GetList");

	Params::FortAthenaAISpawnerDataComponentList_GetList Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerDataComponentList::OverrideComponent(const class UFortAthenaAISpawnerDataComponent* NewComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponentList", "OverrideComponent");

	Params::FortAthenaAISpawnerDataComponentList_OverrideComponent Parms{};

	Parms.NewComponent = NewComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerDataComponentList::OverrideComponentClass(const TSubclassOf<class UFortAthenaAISpawnerDataComponent> NewComponentSubClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponentList", "OverrideComponentClass");

	Params::FortAthenaAISpawnerDataComponentList_OverrideComponentClass Parms{};

	Parms.NewComponentSubClass = NewComponentSubClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaAISpawnerDataComponent* UFortAthenaAISpawnerDataComponentList::GetOrCreateComponentClassForModification(class UObject* ComponentOuter, const TSubclassOf<class UFortAthenaAISpawnerDataComponent> ClassToClone) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponentList", "GetOrCreateComponentClassForModification");

	Params::FortAthenaAISpawnerDataComponentList_GetOrCreateComponentClassForModification Parms{};

	Parms.ComponentOuter = ComponentOuter;
	Parms.ClassToClone = ClassToClone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayTagContainer UFortAthenaAISpawnerDataComponent_AffiliationBase::GetFactionTag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "GetFactionTag");

	Params::FortAthenaAISpawnerDataComponent_AffiliationBase_GetFactionTag Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaAISpawnerDataComponent_AffiliationBase::SetAwarenessPropagationIsBasedOnAlertLevel(const bool bInAwarenessPropagationIsBasedOnAlertLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "SetAwarenessPropagationIsBasedOnAlertLevel");

	Params::FortAthenaAISpawnerDataComponent_AffiliationBase_SetAwarenessPropagationIsBasedOnAlertLevel Parms{};

	Parms.bInAwarenessPropagationIsBasedOnAlertLevel = bInAwarenessPropagationIsBasedOnAlertLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_AffiliationBase::SetFactionTags(const struct FGameplayTagContainer& NewTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "SetFactionTags");

	Params::FortAthenaAISpawnerDataComponent_AffiliationBase_SetFactionTags Parms{};

	Parms.NewTags = std::move(NewTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_AffiliationBase::SetFullTeamAwarenessPropagation(const bool bInFullTeamAwarenessPropagation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "SetFullTeamAwarenessPropagation");

	Params::FortAthenaAISpawnerDataComponent_AffiliationBase_SetFullTeamAwarenessPropagation Parms{};

	Parms.bInFullTeamAwarenessPropagation = bInFullTeamAwarenessPropagation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_AffiliationBase::SetFullTeamAwarenessPropagationDistance(const float InFullTeamAwarenessMaxDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "SetFullTeamAwarenessPropagationDistance");

	Params::FortAthenaAISpawnerDataComponent_AffiliationBase_SetFullTeamAwarenessPropagationDistance Parms{};

	Parms.InFullTeamAwarenessMaxDistance = InFullTeamAwarenessMaxDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortAthenaAISpawnerDataComponent_AffiliationBase::GetAwarenessPropagationIsBasedOnAlertLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "GetAwarenessPropagationIsBasedOnAlertLevel");

	Params::FortAthenaAISpawnerDataComponent_AffiliationBase_GetAwarenessPropagationIsBasedOnAlertLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAthenaAISpawnerDataComponent_AffiliationBase::GetFullTeamAwarenessMaxDistance() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "GetFullTeamAwarenessMaxDistance");

	Params::FortAthenaAISpawnerDataComponent_AffiliationBase_GetFullTeamAwarenessMaxDistance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaAISpawnerDataComponent_AffiliationBase::GetFullTeamAwarenessPropagation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "GetFullTeamAwarenessPropagation");

	Params::FortAthenaAISpawnerDataComponent_AffiliationBase_GetFullTeamAwarenessPropagation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaAISpawnerDataComponent_AIBotAffiliation::SetOverrideTeamIndex(const int32 InOverrideTeamIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotAffiliation", "SetOverrideTeamIndex");

	Params::FortAthenaAISpawnerDataComponent_AIBotAffiliation_SetOverrideTeamIndex Parms{};

	Parms.InOverrideTeamIdx = InOverrideTeamIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortAthenaAISpawnerDataComponent_AIBotAffiliation::GetSquadID(int32* OutSquadId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotAffiliation", "GetSquadID");

	Params::FortAthenaAISpawnerDataComponent_AIBotAffiliation_GetSquadID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	return Parms.ReturnValue;
}

bool UFortAthenaAISpawnerDataComponent_AIBotAffiliation::GetTeamID(int32* OutTeamId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotAffiliation", "GetTeamID");

	Params::FortAthenaAISpawnerDataComponent_AIBotAffiliation_GetTeamID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutTeamId != nullptr)
		*OutTeamId = Parms.OutTeamId;

	return Parms.ReturnValue;
}

void UDespawnExpiredPawnComponent::AddDespawnRift(class ABuildingRift* NewRift)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DespawnExpiredPawnComponent", "AddDespawnRift");

	Params::DespawnExpiredPawnComponent_AddDespawnRift Parms{};

	Parms.NewRift = NewRift;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDespawnExpiredPawnComponent::DespawnExpired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DespawnExpiredPawnComponent", "DespawnExpired");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

TArray<class ABuildingRift*> UDespawnExpiredPawnComponent::GetDespawnRifts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DespawnExpiredPawnComponent", "GetDespawnRifts");

	Params::DespawnExpiredPawnComponent_GetDespawnRifts Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaAIRuntimeParameters_BehaviorTreeControl::DisableBehaviorTreeBranch(const EBehaviorTreeBranches Behavior)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_BehaviorTreeControl", "DisableBehaviorTreeBranch");

	Params::FortAthenaAIRuntimeParameters_BehaviorTreeControl_DisableBehaviorTreeBranch Parms{};

	Parms.Behavior = Behavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIRuntimeParameters_BehaviorTreeControl::EnableBehaviorTreeBranch(const EBehaviorTreeBranches Behavior)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_BehaviorTreeControl", "EnableBehaviorTreeBranch");

	Params::FortAthenaAIRuntimeParameters_BehaviorTreeControl_EnableBehaviorTreeBranch Parms{};

	Parms.Behavior = Behavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortAthenaAIRuntimeParameters_BehaviorTreeControl::IsBehaviorTreeBranchActive(const EBehaviorTreeBranches Behavior) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_BehaviorTreeControl", "IsBehaviorTreeBranchActive");

	Params::FortAthenaAIRuntimeParameters_BehaviorTreeControl_IsBehaviorTreeBranchActive Parms{};

	Parms.Behavior = Behavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaAISpawnerDataComponent_AIBotBehavior::DisableBehaviorTreeBranch(const EBehaviorTreeBranches Behavior)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotBehavior", "DisableBehaviorTreeBranch");

	Params::FortAthenaAISpawnerDataComponent_AIBotBehavior_DisableBehaviorTreeBranch Parms{};

	Parms.Behavior = Behavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_AIBotBehavior::EnableBehaviorTreeBranch(const EBehaviorTreeBranches Behavior)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotBehavior", "EnableBehaviorTreeBranch");

	Params::FortAthenaAISpawnerDataComponent_AIBotBehavior_EnableBehaviorTreeBranch Parms{};

	Parms.Behavior = Behavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortAthenaAISpawnerDataComponent_AIBotBehavior::IsBehaviorTreeBranchActive(const EBehaviorTreeBranches Behavior) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotBehavior", "IsBehaviorTreeBranchActive");

	Params::FortAthenaAISpawnerDataComponent_AIBotBehavior_IsBehaviorTreeBranchActive Parms{};

	Parms.Behavior = Behavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetAssociatedPatrolPath(class AFortAthenaPatrolPath* InAssociatedPatrolPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetAssociatedPatrolPath");

	Params::FortAthenaAISpawnerDataComponent_AIBotGameplay_SetAssociatedPatrolPath Parms{};

	Parms.InAssociatedPatrolPath = InAssociatedPatrolPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetLeashInnerRadius(const float InLeashInnerRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetLeashInnerRadius");

	Params::FortAthenaAISpawnerDataComponent_AIBotGameplay_SetLeashInnerRadius Parms{};

	Parms.InLeashInnerRadius = InLeashInnerRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetLeashLocation(const struct FVector& InLeashLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetLeashLocation");

	Params::FortAthenaAISpawnerDataComponent_AIBotGameplay_SetLeashLocation Parms{};

	Parms.InLeashLocation = std::move(InLeashLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetLeashOuterRadius(const float InLeashOuterRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetLeashOuterRadius");

	Params::FortAthenaAISpawnerDataComponent_AIBotGameplay_SetLeashOuterRadius Parms{};

	Parms.InLeashOuterRadius = InLeashOuterRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetNameSettings(const EBotNamingMode InNamingMode, const class FString& InName, const bool bInAddPlayerIDSuffix)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetNameSettings");

	Params::FortAthenaAISpawnerDataComponent_AIBotGameplay_SetNameSettings Parms{};

	Parms.InNamingMode = InNamingMode;
	Parms.InName = std::move(InName);
	Parms.bInAddPlayerIDSuffix = bInAddPlayerIDSuffix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UFortAthenaAIBotCosmeticLibraryData* UFortAthenaAISpawnerDataComponent_CosmeticLibrary::GetAICosmeticLibraryData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_CosmeticLibrary", "GetAICosmeticLibraryData");

	Params::FortAthenaAISpawnerDataComponent_CosmeticLibrary_GetAICosmeticLibraryData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortAthenaAISpawnerDataComponent_CosmeticLibrary::GetAICosmeticLibraryDataIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_CosmeticLibrary", "GetAICosmeticLibraryDataIndex");

	Params::FortAthenaAISpawnerDataComponent_CosmeticLibrary_GetAICosmeticLibraryDataIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaNpcPatrollingComponent::FindAndSetDynamicPatrolPath(const struct FFortAthenaAIObjectTrackerQuery& FindQuery, const bool bOrientationAlreadyRandomized, const bool bExcludeCurrentlyUsedPatrolPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "FindAndSetDynamicPatrolPath");

	Params::FortAthenaNpcPatrollingComponent_FindAndSetDynamicPatrolPath Parms{};

	Parms.FindQuery = std::move(FindQuery);
	Parms.bOrientationAlreadyRandomized = bOrientationAlreadyRandomized;
	Parms.bExcludeCurrentlyUsedPatrolPath = bExcludeCurrentlyUsedPatrolPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaNpcPatrollingComponent::RemovePatrolPath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "RemovePatrolPath");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaNpcPatrollingComponent::SelectNextPatrolPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "SelectNextPatrolPoint");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaNpcPatrollingComponent::SetPatrolPath(class AFortAthenaPatrolPath* NewPatrolPath, const bool bOrientationAlreadyRandomized)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "SetPatrolPath");

	Params::FortAthenaNpcPatrollingComponent_SetPatrolPath Parms{};

	Parms.NewPatrolPath = NewPatrolPath;
	Parms.bOrientationAlreadyRandomized = bOrientationAlreadyRandomized;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaNpcPatrollingComponent::UpdateCurrentDestinationToNearestNextPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "UpdateCurrentDestinationToNearestNextPoint");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class AFortAthenaPatrolPoint* UFortAthenaNpcPatrollingComponent::GetCurrentPatrolPoint() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "GetCurrentPatrolPoint");

	Params::FortAthenaNpcPatrollingComponent_GetCurrentPatrolPoint Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class AFortAthenaPatrolPath* UFortAthenaNpcPatrollingComponent::GetPatrolPath() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "GetPatrolPath");

	Params::FortAthenaNpcPatrollingComponent_GetPatrolPath Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortAthenaNpcPatrollingComponent::GetPatrolPointsCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "GetPatrolPointsCount");

	Params::FortAthenaNpcPatrollingComponent_GetPatrolPointsCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaNpcPatrollingComponent::IsCurrentPatrolPointAnEndPoint() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "IsCurrentPatrolPointAnEndPoint");

	Params::FortAthenaNpcPatrollingComponent_IsCurrentPatrolPointAnEndPoint Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaNpcPatrollingComponent::IsPatrollingEnable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "IsPatrollingEnable");

	Params::FortAthenaNpcPatrollingComponent_IsPatrollingEnable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortCollisionResponseSwapperComponent::HandleBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "HandleBeginOverlap");

	Params::FortCollisionResponseSwapperComponent_HandleBeginOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollisionResponseSwapperComponent::HandleEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "HandleEndOverlap");

	Params::FortCollisionResponseSwapperComponent_HandleEndOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollisionResponseSwapperComponent::RegisterCallbacksForOverlap(class UPrimitiveComponent* InCollisionPrimitiveComponent, class UPrimitiveComponent* InOverlapPrimitiveComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "RegisterCallbacksForOverlap");

	Params::FortCollisionResponseSwapperComponent_RegisterCallbacksForOverlap Parms{};

	Parms.InCollisionPrimitiveComponent = InCollisionPrimitiveComponent;
	Parms.InOverlapPrimitiveComponent = InOverlapPrimitiveComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollisionResponseSwapperComponent::RestoreCollisionResponses()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "RestoreCollisionResponses");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCollisionResponseSwapperComponent::UnregisterCallbacksForOverlap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "UnregisterCallbacksForOverlap");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIPopulationTracker::OnAgentGameOver(class AFortAthenaAIBotController* AIBotController, class AFortPawn* Pawn, class AController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "OnAgentGameOver");

	Params::AthenaAIPopulationTracker_OnAgentGameOver Parms{};

	Parms.AIBotController = AIBotController;
	Parms.Pawn = Pawn;
	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIPopulationTracker::OnAISpawned(class APawn* Pawn, const int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "OnAISpawned");

	Params::AthenaAIPopulationTracker_OnAISpawned Parms{};

	Parms.Pawn = Pawn;
	Parms.RequestID = RequestID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIPopulationTracker::OnFortPawnDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "OnFortPawnDestroyed");

	Params::AthenaAIPopulationTracker_OnFortPawnDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIPopulationTracker::OnFortPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "OnFortPawnDied");

	Params::AthenaAIPopulationTracker_OnFortPawnDied Parms{};

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

TArray<class AController*> UAthenaAIPopulationTracker::GetAIMatchingQuery(const struct FGameplayTagQuery& TagQuery) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "GetAIMatchingQuery");

	Params::AthenaAIPopulationTracker_GetAIMatchingQuery Parms{};

	Parms.TagQuery = std::move(TagQuery);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FAIPopulationCountSnapshot UAthenaAIPopulationTracker::GetAIPopulationTrackerCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "GetAIPopulationTrackerCount");

	Params::AthenaAIPopulationTracker_GetAIPopulationTrackerCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAthenaAIPopulationTracker::GetNumAIPawn() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "GetNumAIPawn");

	Params::AthenaAIPopulationTracker_GetNumAIPawn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAthenaAIPopulationTracker::GetNumNonAthenaParticipantBots() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "GetNumNonAthenaParticipantBots");

	Params::AthenaAIPopulationTracker_GetNumNonAthenaParticipantBots Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAthenaAIPopulationTracker::GetNumPlayerBots() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "GetNumPlayerBots");

	Params::AthenaAIPopulationTracker_GetNumPlayerBots Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAthenaAIPopulationTracker::GetNumTotalBots() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "GetNumTotalBots");

	Params::AthenaAIPopulationTracker_GetNumTotalBots Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAthenaAIServiceCover* UAthenaAIServiceCover::GetAthenaAIServiceCover(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaAIServiceCover", "GetAthenaAIServiceCover");

	Params::AthenaAIServiceCover_GetAthenaAIServiceCover Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAthenaAIServiceCreativePlayerBots::AddHiringHistory(class AActor* HiredOwner, class APlayerController* HiringPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "AddHiringHistory");

	Params::AthenaAIServiceCreativePlayerBots_AddHiringHistory Parms{};

	Parms.HiredOwner = HiredOwner;
	Parms.HiringPlayer = HiringPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServiceCreativePlayerBots::ClearHiringHistory(class AActor* HiredOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "ClearHiringHistory");

	Params::AthenaAIServiceCreativePlayerBots_ClearHiringHistory Parms{};

	Parms.HiredOwner = HiredOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServiceCreativePlayerBots::OnFinishedAddingMinigamePlayer(const struct FUniqueNetIdRepl& UniqueNetId, bool bIsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "OnFinishedAddingMinigamePlayer");

	Params::AthenaAIServiceCreativePlayerBots_OnFinishedAddingMinigamePlayer Parms{};

	Parms.UniqueNetId = std::move(UniqueNetId);
	Parms.bIsLocalPlayer = bIsLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServiceCreativePlayerBots::OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "OnMinigameStateChanged");

	Params::AthenaAIServiceCreativePlayerBots_OnMinigameStateChanged Parms{};

	Parms.Minigame = Minigame;
	Parms.MinigameState = MinigameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const class APlayerController* UAthenaAIServiceCreativePlayerBots::GetLastHiringPlayer(const class AActor* HiredOwner) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "GetLastHiringPlayer");

	Params::AthenaAIServiceCreativePlayerBots_GetLastHiringPlayer Parms{};

	Parms.HiredOwner = HiredOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAthenaAIServiceCreativePlayerBots::IsMinigameBotSpawningRequired() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "IsMinigameBotSpawningRequired");

	Params::AthenaAIServiceCreativePlayerBots_IsMinigameBotSpawningRequired Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAthenaAIServiceLoot::K2_AddGameplayTagToLoot(const class AActor* LootActor, const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceLoot", "K2_AddGameplayTagToLoot");

	Params::AthenaAIServiceLoot_K2_AddGameplayTagToLoot Parms{};

	Parms.LootActor = LootActor;
	Parms.GameplayTag = std::move(GameplayTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServiceLoot::K2_RemoveGameplayTagFromLoot(const class AActor* LootActor, const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceLoot", "K2_RemoveGameplayTagFromLoot");

	Params::AthenaAIServiceLoot_K2_RemoveGameplayTagFromLoot Parms{};

	Parms.LootActor = LootActor;
	Parms.GameplayTag = std::move(GameplayTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServiceLoot::OnGamePhaseStepChanged(const TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceLoot", "OnGamePhaseStepChanged");

	Params::AthenaAIServiceLoot_OnGamePhaseStepChanged Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServiceLoot::UpdateMovingLoots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceLoot", "UpdateMovingLoots");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServiceLoot::UpdateSupplyDropStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceLoot", "UpdateSupplyDropStatus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UAthenaAIServiceZoneManager* UAthenaAIServiceZoneManager::GetAthenaAIServiceZoneManager(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaAIServiceZoneManager", "GetAthenaAIServiceZoneManager");

	Params::AthenaAIServiceZoneManager_GetAthenaAIServiceZoneManager Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAthenaAIServiceZoneManager::OnZoneDestroyed(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "OnZoneDestroyed");

	Params::AthenaAIServiceZoneManager_OnZoneDestroyed Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServiceZoneManager::RegisterDangerZone(class AActor* Actor, const float Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "RegisterDangerZone");

	Params::AthenaAIServiceZoneManager_RegisterDangerZone Parms{};

	Parms.Actor = Actor;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServiceZoneManager::RegisterOccluder(class AActor* OccluderActor, const float SphereRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "RegisterOccluder");

	Params::AthenaAIServiceZoneManager_RegisterOccluder Parms{};

	Parms.OccluderActor = OccluderActor;
	Parms.SphereRadius = SphereRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServiceZoneManager::UnregisterDangerZone(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "UnregisterDangerZone");

	Params::AthenaAIServiceZoneManager_UnregisterDangerZone Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaAIServiceZoneManager::UnregisterOccluder(class AActor* OccluderActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "UnregisterOccluder");

	Params::AthenaAIServiceZoneManager_UnregisterOccluder Parms{};

	Parms.OccluderActor = OccluderActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UAthenaAIServiceZoneManager::IsInDangerZone(const struct FVector& Location) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "IsInDangerZone");

	Params::AthenaAIServiceZoneManager_IsInDangerZone Parms{};

	Parms.Location = std::move(Location);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAthenaAIServiceZoneManager::IsLOFOccluded(const struct FVector& StartLocation, const struct FVector& EndLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "IsLOFOccluded");

	Params::AthenaAIServiceZoneManager_IsLOFOccluded Parms{};

	Parms.StartLocation = std::move(StartLocation);
	Parms.EndLocation = std::move(EndLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
