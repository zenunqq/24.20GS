#pragma once

#include "Basic.hpp"

#include "CRDBossRuntime_classes.hpp"
#include "CRDBossRuntime_parameters.hpp"

namespace SDK
{

void UBossRuntimeBlueprintFunctionlibrary::AddNewValueToBoolMap(TDelegate<void(bool OldValue, bool NewValue)> OnOldValueFoundDelegate, TMap<struct FGameplayTag, bool>& InMap, const struct FGameplayTag& InKey, bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BossRuntimeBlueprintFunctionlibrary", "AddNewValueToBoolMap");

	Params::BossRuntimeBlueprintFunctionlibrary_AddNewValueToBoolMap Parms{};

	Parms.OnOldValueFoundDelegate = OnOldValueFoundDelegate;
	Parms.InMap = std::move(InMap);
	Parms.InKey = std::move(InKey);
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InMap = std::move(Parms.InMap);
}

void UBossRuntimeBlueprintFunctionlibrary::AddNewValueToFloatMap(TDelegate<void(float OldValue, float NewValue)> OnOldValueFoundDelegate, TMap<struct FGameplayTag, double>& InMap, const struct FGameplayTag& InKey, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BossRuntimeBlueprintFunctionlibrary", "AddNewValueToFloatMap");

	Params::BossRuntimeBlueprintFunctionlibrary_AddNewValueToFloatMap Parms{};

	Parms.OnOldValueFoundDelegate = OnOldValueFoundDelegate;
	Parms.InMap = std::move(InMap);
	Parms.InKey = std::move(InKey);
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InMap = std::move(Parms.InMap);
}

void UBossRuntimeBlueprintFunctionlibrary::AddNewValueToIntMap(TDelegate<void(int32 OldValue, int32 NewValue)> OnOldValueFoundDelegate, TMap<struct FGameplayTag, int32>& InMap, const struct FGameplayTag& InKey, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BossRuntimeBlueprintFunctionlibrary", "AddNewValueToIntMap");

	Params::BossRuntimeBlueprintFunctionlibrary_AddNewValueToIntMap Parms{};

	Parms.OnOldValueFoundDelegate = OnOldValueFoundDelegate;
	Parms.InMap = std::move(InMap);
	Parms.InKey = std::move(InKey);
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InMap = std::move(Parms.InMap);
}

bool UBossRuntimeBlueprintFunctionlibrary::DoAbilityActivationChecksPass(const class AFortPawn* OwningPawn, const class UFortGameplayAbility* FortGameplayAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BossRuntimeBlueprintFunctionlibrary", "DoAbilityActivationChecksPass");

	Params::BossRuntimeBlueprintFunctionlibrary_DoAbilityActivationChecksPass Parms{};

	Parms.OwningPawn = OwningPawn;
	Parms.FortGameplayAbility = FortGameplayAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBossRuntimeBlueprintFunctionlibrary::DoAbilityDistanceChecksPass(const class AFortPawn* OwningPawn, const class UFortGameplayAbility* FortGameplayAbility, const class AActor* TargetActor, const struct FGameplayTagContainer& MinRange, const struct FGameplayTagContainer& MaxRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BossRuntimeBlueprintFunctionlibrary", "DoAbilityDistanceChecksPass");

	Params::BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass Parms{};

	Parms.OwningPawn = OwningPawn;
	Parms.FortGameplayAbility = FortGameplayAbility;
	Parms.TargetActor = TargetActor;
	Parms.MinRange = std::move(MinRange);
	Parms.MaxRange = std::move(MaxRange);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBossRuntimeBlueprintFunctionlibrary::DoAbilityRotationChecksPass(const class AFortPawn* OwningPawn, const class UFortGameplayAbility* FortGameplayAbility, const class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BossRuntimeBlueprintFunctionlibrary", "DoAbilityRotationChecksPass");

	Params::BossRuntimeBlueprintFunctionlibrary_DoAbilityRotationChecksPass Parms{};

	Parms.OwningPawn = OwningPawn;
	Parms.FortGameplayAbility = FortGameplayAbility;
	Parms.TargetActor = TargetActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBossRuntimeBlueprintFunctionlibrary::GetActorNavAgentLocation(class AActor* InActor, struct FVector* OutVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BossRuntimeBlueprintFunctionlibrary", "GetActorNavAgentLocation");

	Params::BossRuntimeBlueprintFunctionlibrary_GetActorNavAgentLocation Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutVector != nullptr)
		*OutVector = std::move(Parms.OutVector);

	return Parms.ReturnValue;
}

TArray<class FName> UBossRuntimeBlueprintFunctionlibrary::GetBossAbilityRegistryScope(class UFortGameplayAbility* InAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BossRuntimeBlueprintFunctionlibrary", "GetBossAbilityRegistryScope");

	Params::BossRuntimeBlueprintFunctionlibrary_GetBossAbilityRegistryScope Parms{};

	Parms.InAbility = InAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UBossRuntimeBlueprintFunctionlibrary::GetExportPath(class UObject* InObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BossRuntimeBlueprintFunctionlibrary", "GetExportPath");

	Params::BossRuntimeBlueprintFunctionlibrary_GetExportPath Parms{};

	Parms.InObject = InObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FFortItemEntry UBossRuntimeBlueprintFunctionlibrary::MakeFortItemEntryFromVariantHandle(const struct FItemVariantHandle& InVariantHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BossRuntimeBlueprintFunctionlibrary", "MakeFortItemEntryFromVariantHandle");

	Params::BossRuntimeBlueprintFunctionlibrary_MakeFortItemEntryFromVariantHandle Parms{};

	Parms.InVariantHandle = std::move(InVariantHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortBossInstanceVariantComponent::AddAbility(const struct FItemVariantHandle& VariantHandle, TSubclassOf<class UFortGameplayAbility> AbilityClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBossInstanceVariantComponent", "AddAbility");

	Params::FortBossInstanceVariantComponent_AddAbility Parms{};

	Parms.VariantHandle = std::move(VariantHandle);
	Parms.AbilityClass = AbilityClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortBossInstanceVariantComponent::AddAbilityAsync(const struct FItemVariantHandle& VariantHandle, const TSoftClassPtr<class UClass>& SoftAbilityClassReference, TDelegate<void(bool Succeeded, struct FItemVariantHandle& VariantHandle)> OnAbilityAdded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBossInstanceVariantComponent", "AddAbilityAsync");

	Params::FortBossInstanceVariantComponent_AddAbilityAsync Parms{};

	Parms.VariantHandle = std::move(VariantHandle);
	Parms.SoftAbilityClassReference = SoftAbilityClassReference;
	Parms.OnAbilityAdded = OnAbilityAdded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortBossInstanceVariantComponent::RemoveAbilityByVariantHandle(const struct FItemVariantHandle& VariantHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBossInstanceVariantComponent", "RemoveAbilityByVariantHandle");

	Params::FortBossInstanceVariantComponent_RemoveAbilityByVariantHandle Parms{};

	Parms.VariantHandle = std::move(VariantHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortBossInstanceVariantComponent::UpdateNavAgent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBossInstanceVariantComponent", "UpdateNavAgent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortBossInstanceVariantComponent::GetAbilitySpecHandleForVariantHandle(struct FGameplayAbilitySpecHandle* OutAbilitySpecHandle, const struct FItemVariantHandle& VariantHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBossInstanceVariantComponent", "GetAbilitySpecHandleForVariantHandle");

	Params::FortBossInstanceVariantComponent_GetAbilitySpecHandleForVariantHandle Parms{};

	Parms.VariantHandle = std::move(VariantHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAbilitySpecHandle != nullptr)
		*OutAbilitySpecHandle = std::move(Parms.OutAbilitySpecHandle);

	return Parms.ReturnValue;
}

bool UFortBossInstanceVariantComponent::GetAbilityTagsForVariantHandle(struct FGameplayTagContainer* OutAbilityTags, const struct FItemVariantHandle& VariantHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBossInstanceVariantComponent", "GetAbilityTagsForVariantHandle");

	Params::FortBossInstanceVariantComponent_GetAbilityTagsForVariantHandle Parms{};

	Parms.VariantHandle = std::move(VariantHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAbilityTags != nullptr)
		*OutAbilityTags = std::move(Parms.OutAbilityTags);

	return Parms.ReturnValue;
}

TSubclassOf<class UFortCreativeItemTemplate> UFortBossInstanceVariantComponent::GetDefaultItemTemplateClassForVariant(const struct FItemVariantHandle& VariantHandle, const TSubclassOf<class UFortCreativeItemTemplate> TemplateClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBossInstanceVariantComponent", "GetDefaultItemTemplateClassForVariant");

	Params::FortBossInstanceVariantComponent_GetDefaultItemTemplateClassForVariant Parms{};

	Parms.VariantHandle = std::move(VariantHandle);
	Parms.TemplateClass = TemplateClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortPawnComponent_DynamicDamageZones::ActivateAllDamageZones()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_DynamicDamageZones", "ActivateAllDamageZones");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_DynamicDamageZones::ActivateDamageZone(const class FName& DamageZoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_DynamicDamageZones", "ActivateDamageZone");

	Params::FortPawnComponent_DynamicDamageZones_ActivateDamageZone Parms{};

	Parms.DamageZoneName = DamageZoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_DynamicDamageZones::AddDamageZoneInfo(const struct FPawnDamageZoneInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_DynamicDamageZones", "AddDamageZoneInfo");

	Params::FortPawnComponent_DynamicDamageZones_AddDamageZoneInfo Parms{};

	Parms.Info = std::move(Info);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_DynamicDamageZones::DeactivateAllDamageZones()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_DynamicDamageZones", "DeactivateAllDamageZones");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_DynamicDamageZones::DeactivateDamageZone(const class FName& DamageZoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_DynamicDamageZones", "DeactivateDamageZone");

	Params::FortPawnComponent_DynamicDamageZones_DeactivateDamageZone Parms{};

	Parms.DamageZoneName = DamageZoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_DynamicDamageZones::OnPawnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_DynamicDamageZones", "OnPawnDamaged");

	Params::FortPawnComponent_DynamicDamageZones_OnPawnDamaged Parms{};

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

void UFortPawnComponent_DynamicDamageZones::SetDamageZoneType(const class FName& DamageZoneName, EFortDamageZone DamageZone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_DynamicDamageZones", "SetDamageZoneType");

	Params::FortPawnComponent_DynamicDamageZones_SetDamageZoneType Parms{};

	Parms.DamageZoneName = DamageZoneName;
	Parms.DamageZone = DamageZone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

EFortDamageZone UFortPawnComponent_DynamicDamageZones::GetDamageZoneType(const struct FHitResult& InHitResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_DynamicDamageZones", "GetDamageZoneType");

	Params::FortPawnComponent_DynamicDamageZones_GetDamageZoneType Parms{};

	Parms.InHitResult = std::move(InHitResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
