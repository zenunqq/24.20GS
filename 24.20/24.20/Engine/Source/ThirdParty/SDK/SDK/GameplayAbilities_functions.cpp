#pragma once
#include "pch.h"

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"
#include "GameplayAbilities_parameters.hpp"

namespace SDK
{

void AGameplayAbilityTargetActor::CancelTargeting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbilityTargetActor", "CancelTargeting");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AGameplayAbilityTargetActor::ConfirmTargeting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbilityTargetActor", "ConfirmTargeting");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilityAsync::EndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityAsync", "EndAction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitVelocityChange", "CreateWaitVelocityChange");

	Params::AbilityTask_WaitVelocityChange_CreateWaitVelocityChange Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Direction = std::move(Direction);
	Parms.MinimumMagnitude = MinimumMagnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, EMovementMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitMovementModeChange", "CreateWaitMovementModeChange");

	Params::AbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.NewMode = NewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitMovementModeChange", "OnMovementModeChange");

	Params::AbilityTask_WaitMovementModeChange_OnMovementModeChange Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilityAsync_WaitGameplayTagQuery* UAbilityAsync_WaitGameplayTagQuery::WaitGameplayTagQueryOnActor(class AActor* TargetActor, const struct FGameplayTagQuery& TagQuery, const EWaitGameplayTagQueryTriggerCondition TriggerCondition, const bool bOnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityAsync_WaitGameplayTagQuery", "WaitGameplayTagQueryOnActor");

	Params::AbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor Parms{};

	Parms.TargetActor = TargetActor;
	Parms.TagQuery = std::move(TagQuery);
	Parms.TriggerCondition = TriggerCondition;
	Parms.bOnlyTriggerOnce = bOnlyTriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityAsync_WaitAttributeChanged* UAbilityAsync_WaitAttributeChanged::WaitForAttributeChanged(class AActor* TargetActor, const struct FGameplayAttribute& Attribute, bool OnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityAsync_WaitAttributeChanged", "WaitForAttributeChanged");

	Params::AbilityAsync_WaitAttributeChanged_WaitForAttributeChanged Parms{};

	Parms.TargetActor = TargetActor;
	Parms.Attribute = std::move(Attribute);
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityAsync_WaitGameplayEffectApplied* UAbilityAsync_WaitGameplayEffectApplied::WaitGameplayEffectAppliedToActor(class AActor* TargetActor, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityAsync_WaitGameplayEffectApplied", "WaitGameplayEffectAppliedToActor");

	Params::AbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor Parms{};

	Parms.TargetActor = TargetActor;
	Parms.SourceFilter = std::move(SourceFilter);
	Parms.SourceTagRequirements = std::move(SourceTagRequirements);
	Parms.TargetTagRequirements = std::move(TargetTagRequirements);
	Parms.TriggerOnce = TriggerOnce;
	Parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromActor");

	Params::AbilitySystemBlueprintLibrary_AbilityTargetDataFromActor Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(const TArray<class AActor*>& ActorArray, bool OneTargetPerHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromActorArray");

	Params::AbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray Parms{};

	Parms.ActorArray = std::move(ActorArray);
	Parms.OneTargetPerHandle = OneTargetPerHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromHitResult(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromHitResult");

	Params::AbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult Parms{};

	Parms.HitResult = std::move(HitResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromLocations");

	Params::AbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations Parms{};

	Parms.SourceLocation = std::move(SourceLocation);
	Parms.TargetLocation = std::move(TargetLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AddAssetTag");

	Params::AbilitySystemBlueprintLibrary_AddAssetTag Parms{};

	Parms.SpecHandle = std::move(SpecHandle);
	Parms.NewGameplayTag = std::move(NewGameplayTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AddAssetTags");

	Params::AbilitySystemBlueprintLibrary_AddAssetTags Parms{};

	Parms.SpecHandle = std::move(SpecHandle);
	Parms.NewGameplayTags = std::move(NewGameplayTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AddGrantedTag");

	Params::AbilitySystemBlueprintLibrary_AddGrantedTag Parms{};

	Parms.SpecHandle = std::move(SpecHandle);
	Parms.NewGameplayTag = std::move(NewGameplayTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AddGrantedTags");

	Params::AbilitySystemBlueprintLibrary_AddGrantedTags Parms{};

	Parms.SpecHandle = std::move(SpecHandle);
	Parms.NewGameplayTags = std::move(NewGameplayTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, TSubclassOf<class UGameplayEffect> LinkedGameplayEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AddLinkedGameplayEffect");

	Params::AbilitySystemBlueprintLibrary_AddLinkedGameplayEffect Parms{};

	Parms.SpecHandle = std::move(SpecHandle);
	Parms.LinkedGameplayEffect = LinkedGameplayEffect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AddLinkedGameplayEffectSpec");

	Params::AbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec Parms{};

	Parms.SpecHandle = std::move(SpecHandle);
	Parms.LinkedGameplayEffectSpec = std::move(LinkedGameplayEffectSpec);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::AddLooseGameplayTags(class AActor* Actor, const struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AddLooseGameplayTags");

	Params::AbilitySystemBlueprintLibrary_AddLooseGameplayTags Parms{};

	Parms.Actor = Actor;
	Parms.GameplayTags = std::move(GameplayTags);
	Parms.bShouldReplicate = bShouldReplicate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AppendTargetDataHandle");

	Params::AbilitySystemBlueprintLibrary_AppendTargetDataHandle Parms{};

	Parms.TargetHandle = std::move(TargetHandle);
	Parms.HandleToAdd = std::move(HandleToAdd);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, class FName DataName, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AssignSetByCallerMagnitude");

	Params::AbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude Parms{};

	Parms.SpecHandle = std::move(SpecHandle);
	Parms.DataName = DataName;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& DataTag, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "AssignTagSetByCallerMagnitude");

	Params::AbilitySystemBlueprintLibrary_AssignTagSetByCallerMagnitude Parms{};

	Parms.SpecHandle = std::move(SpecHandle);
	Parms.DataTag = std::move(DataTag);
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilitySystemBlueprintLibrary::BreakGameplayCueParameters(const struct FGameplayCueParameters& Parameters, float* NormalizedMagnitude, float* RawMagnitude, struct FGameplayEffectContextHandle* EffectContext, struct FGameplayTag* MatchedTagName, struct FGameplayTag* OriginalTag, struct FGameplayTagContainer* AggregatedSourceTags, struct FGameplayTagContainer* AggregatedTargetTags, struct FVector* Location, struct FVector* Normal, class AActor** Instigator, class AActor** EffectCauser, class UObject** SourceObject, class UPhysicalMaterial** PhysicalMaterial, int32* GameplayEffectLevel, int32* AbilityLevel, class USceneComponent** TargetAttachComponent, bool* bReplicateLocationWhenUsingMinimalRepProxy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "BreakGameplayCueParameters");

	Params::AbilitySystemBlueprintLibrary_BreakGameplayCueParameters Parms{};

	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (NormalizedMagnitude != nullptr)
		*NormalizedMagnitude = Parms.NormalizedMagnitude;

	if (RawMagnitude != nullptr)
		*RawMagnitude = Parms.RawMagnitude;

	if (EffectContext != nullptr)
		*EffectContext = std::move(Parms.EffectContext);

	if (MatchedTagName != nullptr)
		*MatchedTagName = std::move(Parms.MatchedTagName);

	if (OriginalTag != nullptr)
		*OriginalTag = std::move(Parms.OriginalTag);

	if (AggregatedSourceTags != nullptr)
		*AggregatedSourceTags = std::move(Parms.AggregatedSourceTags);

	if (AggregatedTargetTags != nullptr)
		*AggregatedTargetTags = std::move(Parms.AggregatedTargetTags);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Normal != nullptr)
		*Normal = std::move(Parms.Normal);

	if (Instigator != nullptr)
		*Instigator = Parms.Instigator;

	if (EffectCauser != nullptr)
		*EffectCauser = Parms.EffectCauser;

	if (SourceObject != nullptr)
		*SourceObject = Parms.SourceObject;

	if (PhysicalMaterial != nullptr)
		*PhysicalMaterial = Parms.PhysicalMaterial;

	if (GameplayEffectLevel != nullptr)
		*GameplayEffectLevel = Parms.GameplayEffectLevel;

	if (AbilityLevel != nullptr)
		*AbilityLevel = Parms.AbilityLevel;

	if (TargetAttachComponent != nullptr)
		*TargetAttachComponent = Parms.TargetAttachComponent;

	if (bReplicateLocationWhenUsingMinimalRepProxy != nullptr)
		*bReplicateLocationWhenUsingMinimalRepProxy = Parms.bReplicateLocationWhenUsingMinimalRepProxy;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "CloneSpecHandle");

	Params::AbilitySystemBlueprintLibrary_CloneSpecHandle Parms{};

	Parms.InNewInstigator = InNewInstigator;
	Parms.InEffectCauser = InEffectCauser;
	Parms.GameplayEffectSpecHandle_Clone = std::move(GameplayEffectSpecHandle_Clone);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, const struct FGameplayTagRequirements& SourceTagReqs, const struct FGameplayTagRequirements& TargetTagReqs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "DoesGameplayCueMeetTagRequirements");

	Params::AbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements Parms{};

	Parms.Parameters = std::move(Parameters);
	Parms.SourceTagReqs = std::move(SourceTagReqs);
	Parms.TargetTagReqs = std::move(TargetTagReqs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index_0, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "DoesTargetDataContainActor");

	Params::AbilitySystemBlueprintLibrary_DoesTargetDataContainActor Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.Index_0 = Index_0;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilitySystemBlueprintLibrary::EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextAddHitResult");

	Params::AbilitySystemBlueprintLibrary_EffectContextAddHitResult Parms{};

	Parms.EffectContext = std::move(EffectContext);
	Parms.HitResult = std::move(HitResult);
	Parms.bReset = bReset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetEffectCauser");

	Params::AbilitySystemBlueprintLibrary_EffectContextGetEffectCauser Parms{};

	Parms.EffectContext = std::move(EffectContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FHitResult UAbilitySystemBlueprintLibrary::EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetHitResult");

	Params::AbilitySystemBlueprintLibrary_EffectContextGetHitResult Parms{};

	Parms.EffectContext = std::move(EffectContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetInstigatorActor");

	Params::AbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor Parms{};

	Parms.EffectContext = std::move(EffectContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UAbilitySystemBlueprintLibrary::EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetOrigin");

	Params::AbilitySystemBlueprintLibrary_EffectContextGetOrigin Parms{};

	Parms.EffectContext = std::move(EffectContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetOriginalInstigatorActor");

	Params::AbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor Parms{};

	Parms.EffectContext = std::move(EffectContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UAbilitySystemBlueprintLibrary::EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetSourceObject");

	Params::AbilitySystemBlueprintLibrary_EffectContextGetSourceObject Parms{};

	Parms.EffectContext = std::move(EffectContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextHasHitResult");

	Params::AbilitySystemBlueprintLibrary_EffectContextHasHitResult Parms{};

	Parms.EffectContext = std::move(EffectContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextIsInstigatorLocallyControlled");

	Params::AbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled Parms{};

	Parms.EffectContext = std::move(EffectContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextIsValid");

	Params::AbilitySystemBlueprintLibrary_EffectContextIsValid Parms{};

	Parms.EffectContext = std::move(EffectContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilitySystemBlueprintLibrary::EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextSetOrigin");

	Params::AbilitySystemBlueprintLibrary_EffectContextSetOrigin Parms{};

	Parms.EffectContext = std::move(EffectContext);
	Parms.Origin = std::move(Origin);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UAbilitySystemBlueprintLibrary::EqualEqual_ActiveGameplayEffectHandle(const struct FActiveGameplayEffectHandle& A, const struct FActiveGameplayEffectHandle& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EqualEqual_ActiveGameplayEffectHandle");

	Params::AbilitySystemBlueprintLibrary_EqualEqual_ActiveGameplayEffectHandle Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::EqualEqual_GameplayAbilitySpecHandle(const struct FGameplayAbilitySpecHandle& A, const struct FGameplayAbilitySpecHandle& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EqualEqual_GameplayAbilitySpecHandle");

	Params::AbilitySystemBlueprintLibrary_EqualEqual_GameplayAbilitySpecHandle Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EqualEqual_GameplayAttributeGameplayAttribute");

	Params::AbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute Parms{};

	Parms.AttributeA = std::move(AttributeA);
	Parms.AttributeB = std::move(AttributeB);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EvaluateAttributeValueWithTags");

	Params::AbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags Parms{};

	Parms.AbilitySystem = AbilitySystem;
	Parms.Attribute = std::move(Attribute);
	Parms.SourceTags = std::move(SourceTags);
	Parms.TargetTags = std::move(TargetTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "EvaluateAttributeValueWithTagsAndBase");

	Params::AbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase Parms{};

	Parms.AbilitySystem = AbilitySystem;
	Parms.Attribute = std::move(Attribute);
	Parms.SourceTags = std::move(SourceTags);
	Parms.TargetTags = std::move(TargetTags);
	Parms.BaseValue = BaseValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "FilterTargetData");

	Params::AbilitySystemBlueprintLibrary_FilterTargetData Parms{};

	Parms.TargetDataHandle = std::move(TargetDataHandle);
	Parms.ActorFilterClass = std::move(ActorFilterClass);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilitySystemBlueprintLibrary::ForwardGameplayCueToTarget(TScriptInterface<class IGameplayCueInterface> TargetCueInterface, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "ForwardGameplayCueToTarget");

	Params::AbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget Parms{};

	Parms.TargetCueInterface = TargetCueInterface;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetAbilitySystemComponent");

	Params::AbilitySystemBlueprintLibrary_GetAbilitySystemComponent Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectDebugString");

	Params::AbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString Parms{};

	Parms.ActiveHandle = std::move(ActiveHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectExpectedEndTime");

	Params::AbilitySystemBlueprintLibrary_GetActiveGameplayEffectExpectedEndTime Parms{};

	Parms.ActiveHandle = std::move(ActiveHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectRemainingDuration");

	Params::AbilitySystemBlueprintLibrary_GetActiveGameplayEffectRemainingDuration Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActiveHandle = std::move(ActiveHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStackCount");

	Params::AbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount Parms{};

	Parms.ActiveHandle = std::move(ActiveHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStackLimitCount");

	Params::AbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount Parms{};

	Parms.ActiveHandle = std::move(ActiveHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStartTime");

	Params::AbilitySystemBlueprintLibrary_GetActiveGameplayEffectStartTime Parms{};

	Parms.ActiveHandle = std::move(ActiveHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectTotalDuration");

	Params::AbilitySystemBlueprintLibrary_GetActiveGameplayEffectTotalDuration Parms{};

	Parms.ActiveHandle = std::move(ActiveHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* UAbilitySystemBlueprintLibrary::GetActorByIndex(const struct FGameplayCueParameters& Parameters, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActorByIndex");

	Params::AbilitySystemBlueprintLibrary_GetActorByIndex Parms{};

	Parms.Parameters = std::move(Parameters);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAbilitySystemBlueprintLibrary::GetActorCount(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActorCount");

	Params::AbilitySystemBlueprintLibrary_GetActorCount Parms{};

	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class AActor*> UAbilitySystemBlueprintLibrary::GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetActorsFromTargetData");

	Params::AbilitySystemBlueprintLibrary_GetActorsFromTargetData Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class AActor*> UAbilitySystemBlueprintLibrary::GetAllActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetAllActorsFromTargetData");

	Params::AbilitySystemBlueprintLibrary_GetAllActorsFromTargetData Parms{};

	Parms.TargetData = std::move(TargetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FGameplayEffectSpecHandle> UAbilitySystemBlueprintLibrary::GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetAllLinkedGameplayEffectSpecHandles");

	Params::AbilitySystemBlueprintLibrary_GetAllLinkedGameplayEffectSpecHandles Parms{};

	Parms.SpecHandle = std::move(SpecHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAbilitySystemBlueprintLibrary::GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetDataCountFromTargetData");

	Params::AbilitySystemBlueprintLibrary_GetDataCountFromTargetData Parms{};

	Parms.TargetData = std::move(TargetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UAbilitySystemBlueprintLibrary::GetDebugStringFromGameplayAttribute(const struct FGameplayAttribute& Attribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetDebugStringFromGameplayAttribute");

	Params::AbilitySystemBlueprintLibrary_GetDebugStringFromGameplayAttribute Parms{};

	Parms.Attribute = std::move(Attribute);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectContextHandle UAbilitySystemBlueprintLibrary::GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetEffectContext");

	Params::AbilitySystemBlueprintLibrary_GetEffectContext Parms{};

	Parms.SpecHandle = std::move(SpecHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttribute(const class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttribute");

	Params::AbilitySystemBlueprintLibrary_GetFloatAttribute Parms{};

	Parms.Actor = Actor;
	Parms.Attribute = std::move(Attribute);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBase(const class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeBase");

	Params::AbilitySystemBlueprintLibrary_GetFloatAttributeBase Parms{};

	Parms.Actor = Actor;
	Parms.Attribute = std::move(Attribute);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBaseFromAbilitySystemComponent(const class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeBaseFromAbilitySystemComponent");

	Params::AbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.Attribute = std::move(Attribute);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttributeFromAbilitySystemComponent(const class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeFromAbilitySystemComponent");

	Params::AbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent Parms{};

	Parms.AbilitySystem = AbilitySystem;
	Parms.Attribute = std::move(Attribute);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;
}

const class UGameplayAbility* UAbilitySystemBlueprintLibrary::GetGameplayAbilityFromSpecHandle(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAbilitySpecHandle& AbilitySpecHandle, bool* bIsInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayAbilityFromSpecHandle");

	Params::AbilitySystemBlueprintLibrary_GetGameplayAbilityFromSpecHandle Parms{};

	Parms.AbilitySystem = AbilitySystem;
	Parms.AbilitySpecHandle = std::move(AbilitySpecHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bIsInstance != nullptr)
		*bIsInstance = Parms.bIsInstance;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayCueDirection");

	Params::AbilitySystemBlueprintLibrary_GetGameplayCueDirection Parms{};

	Parms.TargetActor = TargetActor;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayCueEndLocationAndNormal");

	Params::AbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal Parms{};

	Parms.TargetActor = TargetActor;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Normal != nullptr)
		*Normal = std::move(Parms.Normal);

	return Parms.ReturnValue;
}

const class UGameplayEffect* UAbilitySystemBlueprintLibrary::GetGameplayEffectFromActiveEffectHandle(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayEffectFromActiveEffectHandle");

	Params::AbilitySystemBlueprintLibrary_GetGameplayEffectFromActiveEffectHandle Parms{};

	Parms.ActiveHandle = std::move(ActiveHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class UGameplayEffectUIData* UAbilitySystemBlueprintLibrary::GetGameplayEffectUIData(TSubclassOf<class UGameplayEffect> EffectClass, TSubclassOf<class UGameplayEffectUIData> DataType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayEffectUIData");

	Params::AbilitySystemBlueprintLibrary_GetGameplayEffectUIData Parms{};

	Parms.EffectClass = EffectClass;
	Parms.DataType = DataType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResult(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetHitResult");

	Params::AbilitySystemBlueprintLibrary_GetHitResult Parms{};

	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetHitResultFromTargetData");

	Params::AbilitySystemBlueprintLibrary_GetHitResultFromTargetData Parms{};

	Parms.HitResult = std::move(HitResult);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* UAbilitySystemBlueprintLibrary::GetInstigatorActor(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetInstigatorActor");

	Params::AbilitySystemBlueprintLibrary_GetInstigatorActor Parms{};

	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UAbilitySystemBlueprintLibrary::GetInstigatorTransform(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetInstigatorTransform");

	Params::AbilitySystemBlueprintLibrary_GetInstigatorTransform Parms{};

	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAbilitySystemBlueprintLibrary::GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetModifiedAttributeMagnitude");

	Params::AbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude Parms{};

	Parms.SpecHandle = std::move(SpecHandle);
	Parms.Attribute = std::move(Attribute);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UAbilitySystemBlueprintLibrary::GetOrigin(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetOrigin");

	Params::AbilitySystemBlueprintLibrary_GetOrigin Parms{};

	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UAbilitySystemBlueprintLibrary::GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataEndPoint");

	Params::AbilitySystemBlueprintLibrary_GetTargetDataEndPoint Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataEndPointTransform");

	Params::AbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataOrigin");

	Params::AbilitySystemBlueprintLibrary_GetTargetDataOrigin Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::HasHitResult(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "HasHitResult");

	Params::AbilitySystemBlueprintLibrary_HasHitResult Parms{};

	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "IsInstigatorLocallyControlled");

	Params::AbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled Parms{};

	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "IsInstigatorLocallyControlledPlayer");

	Params::AbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer Parms{};

	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::IsValid(const struct FGameplayAttribute& Attribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "IsValid");

	Params::AbilitySystemBlueprintLibrary_IsValid Parms{};

	Parms.Attribute = std::move(Attribute);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "MakeFilterHandle");

	Params::AbilitySystemBlueprintLibrary_MakeFilterHandle Parms{};

	Parms.Filter = std::move(Filter);
	Parms.FilterActor = FilterActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayCueParameters UAbilitySystemBlueprintLibrary::MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, const struct FGameplayEffectContextHandle& EffectContext, const struct FGameplayTag& MatchedTagName, const struct FGameplayTag& OriginalTag, const struct FGameplayTagContainer& AggregatedSourceTags, const struct FGameplayTagContainer& AggregatedTargetTags, const struct FVector& Location, const struct FVector& Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32 GameplayEffectLevel, int32 AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "MakeGameplayCueParameters");

	Params::AbilitySystemBlueprintLibrary_MakeGameplayCueParameters Parms{};

	Parms.NormalizedMagnitude = NormalizedMagnitude;
	Parms.RawMagnitude = RawMagnitude;
	Parms.EffectContext = std::move(EffectContext);
	Parms.MatchedTagName = std::move(MatchedTagName);
	Parms.OriginalTag = std::move(OriginalTag);
	Parms.AggregatedSourceTags = std::move(AggregatedSourceTags);
	Parms.AggregatedTargetTags = std::move(AggregatedTargetTags);
	Parms.Location = std::move(Location);
	Parms.Normal = std::move(Normal);
	Parms.Instigator = Instigator;
	Parms.EffectCauser = EffectCauser;
	Parms.SourceObject = SourceObject;
	Parms.PhysicalMaterial = PhysicalMaterial;
	Parms.GameplayEffectLevel = GameplayEffectLevel;
	Parms.AbilityLevel = AbilityLevel;
	Parms.TargetAttachComponent = TargetAttachComponent;
	Parms.bReplicateLocationWhenUsingMinimalRepProxy = bReplicateLocationWhenUsingMinimalRepProxy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "MakeSpecHandle");

	Params::AbilitySystemBlueprintLibrary_MakeSpecHandle Parms{};

	Parms.InGameplayEffect = InGameplayEffect;
	Parms.InInstigator = InInstigator;
	Parms.InEffectCauser = InEffectCauser;
	Parms.InLevel = InLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::NotEqual_ActiveGameplayEffectHandle(const struct FActiveGameplayEffectHandle& A, const struct FActiveGameplayEffectHandle& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "NotEqual_ActiveGameplayEffectHandle");

	Params::AbilitySystemBlueprintLibrary_NotEqual_ActiveGameplayEffectHandle Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::NotEqual_GameplayAbilitySpecHandle(const struct FGameplayAbilitySpecHandle& A, const struct FGameplayAbilitySpecHandle& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "NotEqual_GameplayAbilitySpecHandle");

	Params::AbilitySystemBlueprintLibrary_NotEqual_GameplayAbilitySpecHandle Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "NotEqual_GameplayAttributeGameplayAttribute");

	Params::AbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute Parms{};

	Parms.AttributeA = std::move(AttributeA);
	Parms.AttributeB = std::move(AttributeB);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::RemoveLooseGameplayTags(class AActor* Actor, const struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "RemoveLooseGameplayTags");

	Params::AbilitySystemBlueprintLibrary_RemoveLooseGameplayTags Parms{};

	Parms.Actor = Actor;
	Parms.GameplayTags = std::move(GameplayTags);
	Parms.bShouldReplicate = bShouldReplicate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "SendGameplayEventToActor");

	Params::AbilitySystemBlueprintLibrary_SendGameplayEventToActor Parms{};

	Parms.Actor = Actor;
	Parms.EventTag = std::move(EventTag);
	Parms.Payload = std::move(Payload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "SetDuration");

	Params::AbilitySystemBlueprintLibrary_SetDuration Parms{};

	Parms.SpecHandle = std::move(SpecHandle);
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int32 StackCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "SetStackCount");

	Params::AbilitySystemBlueprintLibrary_SetStackCount Parms{};

	Parms.SpecHandle = std::move(SpecHandle);
	Parms.StackCount = StackCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "SetStackCountToMax");

	Params::AbilitySystemBlueprintLibrary_SetStackCountToMax Parms{};

	Parms.SpecHandle = std::move(SpecHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasActor");

	Params::AbilitySystemBlueprintLibrary_TargetDataHasActor Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasEndPoint");

	Params::AbilitySystemBlueprintLibrary_TargetDataHasEndPoint Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasHitResult");

	Params::AbilitySystemBlueprintLibrary_TargetDataHasHitResult Parms{};

	Parms.HitResult = std::move(HitResult);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemBlueprintLibrary::TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasOrigin");

	Params::AbilitySystemBlueprintLibrary_TargetDataHasOrigin Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityAsync_WaitGameplayEvent* UAbilityAsync_WaitGameplayEvent::WaitGameplayEventToActor(class AActor* TargetActor, const struct FGameplayTag& EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityAsync_WaitGameplayEvent", "WaitGameplayEventToActor");

	Params::AbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor Parms{};

	Parms.TargetActor = TargetActor;
	Parms.EventTag = std::move(EventTag);
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;
	Parms.OnlyMatchExact = OnlyMatchExact;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitInputPress", "WaitInputPress");

	Params::AbilityTask_WaitInputPress_WaitInputPress Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.bTestAlreadyPressed = bTestAlreadyPressed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitInputPress::OnPressCallback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitInputPress", "OnPressCallback");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UAbilityAsync_WaitGameplayTagAdded* UAbilityAsync_WaitGameplayTagAdded::WaitGameplayTagAddToActor(class AActor* TargetActor, const struct FGameplayTag& tag, bool OnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityAsync_WaitGameplayTagAdded", "WaitGameplayTagAddToActor");

	Params::AbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor Parms{};

	Parms.TargetActor = TargetActor;
	Parms.tag = std::move(tag);
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityAsync_WaitGameplayTagRemoved* UAbilityAsync_WaitGameplayTagRemoved::WaitGameplayTagRemoveFromActor(class AActor* TargetActor, const struct FGameplayTag& tag, bool OnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityAsync_WaitGameplayTagRemoved", "WaitGameplayTagRemoveFromActor");

	Params::AbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor Parms{};

	Parms.TargetActor = TargetActor;
	Parms.tag = std::move(tag);
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "BP_ApplyGameplayEffectToOwner");

	Params::GameplayAbility_BP_ApplyGameplayEffectToOwner Parms{};

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.GameplayEffectLevel = GameplayEffectLevel;
	Parms.Stacks = Stacks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "BP_ApplyGameplayEffectToTarget");

	Params::GameplayAbility_BP_ApplyGameplayEffectToTarget Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.GameplayEffectLevel = GameplayEffectLevel;
	Parms.Stacks = Stacks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int32 StacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithAssetTags");

	Params::GameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags Parms{};

	Parms.WithAssetTags = std::move(WithAssetTags);
	Parms.StacksToRemove = StacksToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int32 StacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithGrantedTags");

	Params::GameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags Parms{};

	Parms.WithGrantedTags = std::move(WithGrantedTags);
	Parms.StacksToRemove = StacksToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithHandle(const struct FActiveGameplayEffectHandle& Handle, int32 StacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithHandle");

	Params::GameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle Parms{};

	Parms.Handle = std::move(Handle);
	Parms.StacksToRemove = StacksToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::CancelTaskByInstanceName(class FName InstanceName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "CancelTaskByInstanceName");

	Params::GameplayAbility_CancelTaskByInstanceName Parms{};

	Parms.InstanceName = InstanceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::ConfirmTaskByInstanceName(class FName InstanceName, bool bEndTask)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "ConfirmTaskByInstanceName");

	Params::GameplayAbility_ConfirmTaskByInstanceName Parms{};

	Parms.InstanceName = InstanceName;
	Parms.bEndTask = bEndTask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::EndAbilityState(class FName OptionalStateNameToEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "EndAbilityState");

	Params::GameplayAbility_EndAbilityState Parms{};

	Parms.OptionalStateNameToEnd = OptionalStateNameToEnd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::EndTaskByInstanceName(class FName InstanceName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "EndTaskByInstanceName");

	Params::GameplayAbility_EndTaskByInstanceName Parms{};

	Parms.InstanceName = InstanceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGameplayAbility::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_ActivateAbilityFromEvent");

	Params::GameplayAbility_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayAbility::K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_AddGameplayCue");

	Params::GameplayAbility_K2_AddGameplayCue Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.Context = std::move(Context);
	Parms.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::K2_AddGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_AddGameplayCueWithParams");

	Params::GameplayAbility_K2_AddGameplayCueWithParams Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.GameplayCueParameter = std::move(GameplayCueParameter);
	Parms.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_ApplyGameplayEffectSpecToOwner");

	Params::GameplayAbility_K2_ApplyGameplayEffectSpecToOwner Parms{};

	Parms.EffectSpecHandle = std::move(EffectSpecHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_ApplyGameplayEffectSpecToTarget");

	Params::GameplayAbility_K2_ApplyGameplayEffectSpecToTarget Parms{};

	Parms.EffectSpecHandle = std::move(EffectSpecHandle);
	Parms.TargetData = std::move(TargetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayAbility::K2_CancelAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_CancelAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UGameplayAbility::K2_CheckAbilityCooldown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_CheckAbilityCooldown");

	Params::GameplayAbility_K2_CheckAbilityCooldown Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UGameplayAbility::K2_CheckAbilityCost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_CheckAbilityCost");

	Params::GameplayAbility_K2_CheckAbilityCost Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UGameplayAbility::K2_CommitAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_CommitAbility");

	Params::GameplayAbility_K2_CommitAbility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UGameplayAbility::K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_CommitAbilityCooldown");

	Params::GameplayAbility_K2_CommitAbilityCooldown Parms{};

	Parms.BroadcastCommitEvent = BroadcastCommitEvent;
	Parms.ForceCooldown = ForceCooldown;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UGameplayAbility::K2_CommitAbilityCost(bool BroadcastCommitEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_CommitAbilityCost");

	Params::GameplayAbility_K2_CommitAbilityCost Parms{};

	Parms.BroadcastCommitEvent = BroadcastCommitEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayAbility::K2_CommitExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_CommitExecute");

	UObject::ProcessEvent(Func, nullptr);
}

void UGameplayAbility::K2_EndAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_EndAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::K2_EndAbilityLocally()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_EndAbilityLocally");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_ExecuteGameplayCue");

	Params::GameplayAbility_K2_ExecuteGameplayCue Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_ExecuteGameplayCueWithParams");

	Params::GameplayAbility_K2_ExecuteGameplayCueWithParams Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.GameplayCueParameters = std::move(GameplayCueParameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_OnEndAbility");

	Params::GameplayAbility_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayAbility::K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_RemoveGameplayCue");

	Params::GameplayAbility_K2_RemoveGameplayCue Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "MakeTargetLocationInfoFromOwnerActor");

	Params::GameplayAbility_MakeTargetLocationInfoFromOwnerActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(class FName SocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "MakeTargetLocationInfoFromOwnerSkeletalMeshComponent");

	Params::GameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent Parms{};

	Parms.SocketName = SocketName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayAbility::MontageJumpToSection(class FName SectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "MontageJumpToSection");

	Params::GameplayAbility_MontageJumpToSection Parms{};

	Parms.SectionName = SectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::MontageSetNextSectionName(class FName FromSectionName, class FName ToSectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "MontageSetNextSectionName");

	Params::GameplayAbility_MontageSetNextSectionName Parms{};

	Parms.FromSectionName = FromSectionName;
	Parms.ToSectionName = ToSectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::MontageStop(float OverrideBlendOutTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "MontageStop");

	Params::GameplayAbility_MontageStop Parms{};

	Parms.OverrideBlendOutTime = OverrideBlendOutTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::RemoveGrantedByEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "RemoveGrantedByEffect");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "SendGameplayEvent");

	Params::GameplayAbility_SendGameplayEvent Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.Payload = std::move(Payload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "SetCanBeCanceled");

	Params::GameplayAbility_SetCanBeCanceled Parms{};

	Parms.bCanBeCanceled = bCanBeCanceled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayAbility::SetShouldBlockOtherAbilities(bool bShouldBlockAbilities)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "SetShouldBlockOtherAbilities");

	Params::GameplayAbility_SetShouldBlockOtherAbilities Parms{};

	Parms.bShouldBlockAbilities = bShouldBlockAbilities;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UGameplayAbility::GetAbilityLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "GetAbilityLevel");

	Params::GameplayAbility_GetAbilityLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UGameplayAbility::GetAbilityLevel_BP(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "GetAbilityLevel_BP");

	Params::GameplayAbility_GetAbilityLevel_BP Parms{};

	Parms.Handle = std::move(Handle);
	Parms.ActorInfo = std::move(ActorInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilitySystemComponent* UGameplayAbility::GetAbilitySystemComponentFromActorInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "GetAbilitySystemComponentFromActorInfo");

	Params::GameplayAbility_GetAbilitySystemComponentFromActorInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "GetActorInfo");

	Params::GameplayAbility_GetActorInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* UGameplayAbility::GetAvatarActorFromActorInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "GetAvatarActorFromActorInfo");

	Params::GameplayAbility_GetAvatarActorFromActorInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "GetContextFromOwner");

	Params::GameplayAbility_GetContextFromOwner Parms{};

	Parms.OptionalTargetData = std::move(OptionalTargetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UGameplayAbility::GetCooldownTimeRemaining() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "GetCooldownTimeRemaining");

	Params::GameplayAbility_GetCooldownTimeRemaining Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAnimMontage* UGameplayAbility::GetCurrentMontage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "GetCurrentMontage");

	Params::GameplayAbility_GetCurrentMontage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UGameplayAbility::GetCurrentSourceObject() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "GetCurrentSourceObject");

	Params::GameplayAbility_GetCurrentSourceObject Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectContextHandle UGameplayAbility::GetGrantedByEffectContext() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "GetGrantedByEffectContext");

	Params::GameplayAbility_GetGrantedByEffectContext Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* UGameplayAbility::GetOwningActorFromActorInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "GetOwningActorFromActorInfo");

	Params::GameplayAbility_GetOwningActorFromActorInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "GetOwningComponentFromActorInfo");

	Params::GameplayAbility_GetOwningComponentFromActorInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UGameplayAbility::GetSourceObject_BP(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "GetSourceObject_BP");

	Params::GameplayAbility_GetSourceObject_BP Parms{};

	Parms.Handle = std::move(Handle);
	Parms.ActorInfo = std::move(ActorInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayAbility::InvalidateClientPredictionKey() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "InvalidateClientPredictionKey");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UGameplayAbility::IsLocallyControlled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "IsLocallyControlled");

	Params::GameplayAbility_IsLocallyControlled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UGameplayAbility::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_CanActivateAbility");

	Params::GameplayAbility_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

bool UGameplayAbility::K2_HasAuthority() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_HasAuthority");

	Params::GameplayAbility_K2_HasAuthority Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UGameplayAbility::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "K2_ShouldAbilityRespondToEvent");

	Params::GameplayAbility_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbility", "MakeOutgoingGameplayEffectSpec");

	Params::GameplayAbility_MakeOutgoingGameplayEffectSpec Parms{};

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AGameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "FaceTowardSource");

	Params::GameplayAbilityWorldReticle_FaceTowardSource Parms{};

	Parms.bFaceIn2D = bFaceIn2D;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AGameplayAbilityWorldReticle::OnParametersInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "OnParametersInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void AGameplayAbilityWorldReticle::OnTargetingAnActor(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "OnTargetingAnActor");

	Params::GameplayAbilityWorldReticle_OnTargetingAnActor Parms{};

	Parms.bNewValue = bNewValue;

	UObject::ProcessEvent(Func, &Parms);
}

void AGameplayAbilityWorldReticle::OnValidTargetChanged(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "OnValidTargetChanged");

	Params::GameplayAbilityWorldReticle_OnValidTargetChanged Parms{};

	Parms.bNewValue = bNewValue;

	UObject::ProcessEvent(Func, &Parms);
}

void AGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(class FName ParamName, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "SetReticleMaterialParamFloat");

	Params::GameplayAbilityWorldReticle_SetReticleMaterialParamFloat Parms{};

	Parms.ParamName = ParamName;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

void AGameplayAbilityWorldReticle::SetReticleMaterialParamVector(class FName ParamName, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "SetReticleMaterialParamVector");

	Params::GameplayAbilityWorldReticle_SetReticleMaterialParamVector Parms{};

	Parms.ParamName = ParamName;
	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}

class UAbilityTask_ApplyRootMotionConstantForce* UAbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& WorldDirection_0, float Strength_0, float Duration_0, bool bIsAdditive_0, class UCurveFloat* StrengthOverTime_0, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_ApplyRootMotionConstantForce", "ApplyRootMotionConstantForce");

	Params::AbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.WorldDirection_0 = std::move(WorldDirection_0);
	Parms.Strength_0 = Strength_0;
	Parms.Duration_0 = Duration_0;
	Parms.bIsAdditive_0 = bIsAdditive_0;
	Parms.StrengthOverTime_0 = StrengthOverTime_0;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = std::move(SetVelocityOnFinish);
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	Parms.bEnableGravity_0 = bEnableGravity_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_ApplyRootMotionJumpForce* UAbilityTask_ApplyRootMotionJumpForce::ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FRotator& Rotation_0, float Distance_0, float Height_0, float Duration_0, float MinimumLandedTriggerTime_0, bool bFinishOnLanded_0, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve_0, class UCurveFloat* TimeMappingCurve_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "ApplyRootMotionJumpForce");

	Params::AbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Rotation_0 = std::move(Rotation_0);
	Parms.Distance_0 = Distance_0;
	Parms.Height_0 = Height_0;
	Parms.Duration_0 = Duration_0;
	Parms.MinimumLandedTriggerTime_0 = MinimumLandedTriggerTime_0;
	Parms.bFinishOnLanded_0 = bFinishOnLanded_0;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = std::move(SetVelocityOnFinish);
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	Parms.PathOffsetCurve_0 = PathOffsetCurve_0;
	Parms.TimeMappingCurve_0 = TimeMappingCurve_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_ApplyRootMotionJumpForce::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "Finish");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilityTask_ApplyRootMotionJumpForce::OnLandedCallback(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "OnLandedCallback");

	Params::AbilityTask_ApplyRootMotionJumpForce_OnLandedCallback Parms{};

	Parms.Hit = std::move(Hit);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class AActor* TargetActor_0, const struct FVector& TargetLocationOffset_0, ERootMotionMoveToActorTargetOffsetType OffsetAlignment_0, float Duration_0, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode_0, EMovementMode MovementMode, bool bRestrictSpeedToExpected_0, class UCurveVector* PathOffsetCurve_0, class UCurveFloat* TimeMappingCurve_0, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "ApplyRootMotionMoveToActorForce");

	Params::AbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.TargetActor_0 = TargetActor_0;
	Parms.TargetLocationOffset_0 = std::move(TargetLocationOffset_0);
	Parms.OffsetAlignment_0 = OffsetAlignment_0;
	Parms.Duration_0 = Duration_0;
	Parms.TargetLerpSpeedHorizontal = TargetLerpSpeedHorizontal;
	Parms.TargetLerpSpeedVertical = TargetLerpSpeedVertical;
	Parms.bSetNewMovementMode_0 = bSetNewMovementMode_0;
	Parms.MovementMode = MovementMode;
	Parms.bRestrictSpeedToExpected_0 = bRestrictSpeedToExpected_0;
	Parms.PathOffsetCurve_0 = PathOffsetCurve_0;
	Parms.TimeMappingCurve_0 = TimeMappingCurve_0;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = std::move(SetVelocityOnFinish);
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	Parms.bDisableDestinationReachedInterrupt_0 = bDisableDestinationReachedInterrupt_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, int32 TargetDataIndex, int32 TargetActorIndex, const struct FVector& TargetLocationOffset_0, ERootMotionMoveToActorTargetOffsetType OffsetAlignment_0, float Duration_0, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode_0, EMovementMode MovementMode, bool bRestrictSpeedToExpected_0, class UCurveVector* PathOffsetCurve_0, class UCurveFloat* TimeMappingCurve_0, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "ApplyRootMotionMoveToTargetDataActorForce");

	Params::AbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.TargetDataHandle = std::move(TargetDataHandle);
	Parms.TargetDataIndex = TargetDataIndex;
	Parms.TargetActorIndex = TargetActorIndex;
	Parms.TargetLocationOffset_0 = std::move(TargetLocationOffset_0);
	Parms.OffsetAlignment_0 = OffsetAlignment_0;
	Parms.Duration_0 = Duration_0;
	Parms.TargetLerpSpeedHorizontal = TargetLerpSpeedHorizontal;
	Parms.TargetLerpSpeedVertical = TargetLerpSpeedVertical;
	Parms.bSetNewMovementMode_0 = bSetNewMovementMode_0;
	Parms.MovementMode = MovementMode;
	Parms.bRestrictSpeedToExpected_0 = bRestrictSpeedToExpected_0;
	Parms.PathOffsetCurve_0 = PathOffsetCurve_0;
	Parms.TimeMappingCurve_0 = TimeMappingCurve_0;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = std::move(SetVelocityOnFinish);
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	Parms.bDisableDestinationReachedInterrupt_0 = bDisableDestinationReachedInterrupt_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnRep_TargetLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "OnRep_TargetLocation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "OnTargetActorSwapped");

	Params::AbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped Parms{};

	Parms.OriginalTarget = OriginalTarget;
	Parms.NewTarget = NewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_ApplyRootMotionMoveToForce* UAbilityTask_ApplyRootMotionMoveToForce::ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& TargetLocation_0, float Duration_0, bool bSetNewMovementMode_0, EMovementMode MovementMode, bool bRestrictSpeedToExpected_0, class UCurveVector* PathOffsetCurve_0, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_ApplyRootMotionMoveToForce", "ApplyRootMotionMoveToForce");

	Params::AbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.TargetLocation_0 = std::move(TargetLocation_0);
	Parms.Duration_0 = Duration_0;
	Parms.bSetNewMovementMode_0 = bSetNewMovementMode_0;
	Parms.MovementMode = MovementMode;
	Parms.bRestrictSpeedToExpected_0 = bRestrictSpeedToExpected_0;
	Parms.PathOffsetCurve_0 = PathOffsetCurve_0;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = std::move(SetVelocityOnFinish);
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_ApplyRootMotionRadialForce* UAbilityTask_ApplyRootMotionRadialForce::ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& Location_0, class AActor* LocationActor_0, float Strength_0, float Duration_0, float Radius_0, bool bIsPush_0, bool bIsAdditive_0, bool bNoZForce_0, class UCurveFloat* StrengthDistanceFalloff_0, class UCurveFloat* StrengthOverTime_0, bool bUseFixedWorldDirection_0, const struct FRotator& FixedWorldDirection_0, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_ApplyRootMotionRadialForce", "ApplyRootMotionRadialForce");

	Params::AbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Location_0 = std::move(Location_0);
	Parms.LocationActor_0 = LocationActor_0;
	Parms.Strength_0 = Strength_0;
	Parms.Duration_0 = Duration_0;
	Parms.Radius_0 = Radius_0;
	Parms.bIsPush_0 = bIsPush_0;
	Parms.bIsAdditive_0 = bIsAdditive_0;
	Parms.bNoZForce_0 = bNoZForce_0;
	Parms.StrengthDistanceFalloff_0 = StrengthDistanceFalloff_0;
	Parms.StrengthOverTime_0 = StrengthOverTime_0;
	Parms.bUseFixedWorldDirection_0 = bUseFixedWorldDirection_0;
	Parms.FixedWorldDirection_0 = std::move(FixedWorldDirection_0);
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = std::move(SetVelocityOnFinish);
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::MoveToLocation(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_MoveToLocation", "MoveToLocation");

	Params::AbilityTask_MoveToLocation_MoveToLocation Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Location = std::move(Location);
	Parms.Duration = Duration;
	Parms.OptionalInterpolationCurve = OptionalInterpolationCurve;
	Parms.OptionalVectorInterpolationCurve = OptionalVectorInterpolationCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_NetworkSyncPoint", "WaitNetSync");

	Params::AbilityTask_NetworkSyncPoint_WaitNetSync Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.SyncType = SyncType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_NetworkSyncPoint::OnSignalCallback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_NetworkSyncPoint", "OnSignalCallback");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class UAnimMontage* MontageToPlay_0, float Rate_0, class FName StartSection_0, bool bStopWhenAbilityEnds_0, float AnimRootMotionTranslationScale_0, float StartTimeSeconds_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_PlayMontageAndWait", "CreatePlayMontageAndWaitProxy");

	Params::AbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.MontageToPlay_0 = MontageToPlay_0;
	Parms.Rate_0 = Rate_0;
	Parms.StartSection_0 = StartSection_0;
	Parms.bStopWhenAbilityEnds_0 = bStopWhenAbilityEnds_0;
	Parms.AnimRootMotionTranslationScale_0 = AnimRootMotionTranslationScale_0;
	Parms.StartTimeSeconds_0 = StartTimeSeconds_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageBlendingOut");

	Params::AbilityTask_PlayMontageAndWait_OnMontageBlendingOut Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilityTask_PlayMontageAndWait::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageEnded");

	Params::AbilityTask_PlayMontageAndWait_OnMontageEnded Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageInterrupted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_Repeat* UAbilityTask_Repeat::RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32 TotalActionCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_Repeat", "RepeatAction");

	Params::AbilityTask_Repeat_RepeatAction Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TimeBetweenActions = TimeBetweenActions;
	Parms.TotalActionCount = TotalActionCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class AActor> Class_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_SpawnActor", "SpawnActor");

	Params::AbilityTask_SpawnActor_SpawnActor Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TargetData = std::move(TargetData);
	Parms.Class_0 = Class_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilityTask_SpawnActor::BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class AActor> Class_0, class AActor** SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_SpawnActor", "BeginSpawningActor");

	Params::AbilityTask_SpawnActor_BeginSpawningActor Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TargetData = std::move(TargetData);
	Parms.Class_0 = Class_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SpawnedActor != nullptr)
		*SpawnedActor = Parms.SpawnedActor;

	return Parms.ReturnValue;
}

void UAbilityTask_SpawnActor::FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_SpawnActor", "FinishSpawningActor");

	Params::AbilityTask_SpawnActor_FinishSpawningActor Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TargetData = std::move(TargetData);
	Parms.SpawnedActor = SpawnedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::StartAbilityState(class UGameplayAbility* OwningAbility, class FName StateName, bool bEndCurrentState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_StartAbilityState", "StartAbilityState");

	Params::AbilityTask_StartAbilityState_StartAbilityState Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.StateName = StateName;
	Parms.bEndCurrentState = bEndCurrentState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargeting(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class_0, class FName TaskInstanceName, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_VisualizeTargeting", "VisualizeTargeting");

	Params::AbilityTask_VisualizeTargeting_VisualizeTargeting Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Class_0 = Class_0;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, class FName TaskInstanceName, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_VisualizeTargeting", "VisualizeTargetingUsingActor");

	Params::AbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TargetActor = TargetActor;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilityTask_VisualizeTargeting::BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class_0, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_VisualizeTargeting", "BeginSpawningActor");

	Params::AbilityTask_VisualizeTargeting_BeginSpawningActor Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Class_0 = Class_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SpawnedActor != nullptr)
		*SpawnedActor = Parms.SpawnedActor;

	return Parms.ReturnValue;
}

void UAbilityTask_VisualizeTargeting::FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_VisualizeTargeting", "FinishSpawningActor");

	Params::AbilityTask_VisualizeTargeting_FinishSpawningActor Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.SpawnedActor = SpawnedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivate");

	Params::AbilityTask_WaitAbilityActivate_WaitForAbilityActivate Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.WithTag = std::move(WithTag);
	Parms.WithoutTag = std::move(WithoutTag);
	Parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	Parms.TriggerOnce = TriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivate_Query");

	Params::AbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Query = std::move(Query);
	Parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	Parms.TriggerOnce = TriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivateWithTagRequirements");

	Params::AbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TagRequirements = std::move(TagRequirements);
	Parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	Parms.TriggerOnce = TriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(class UGameplayAbility* ActivatedAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitAbilityActivate", "OnAbilityActivate");

	Params::AbilityTask_WaitAbilityActivate_OnAbilityActivate Parms{};

	Parms.ActivatedAbility = ActivatedAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitAbilityCommit", "WaitForAbilityCommit");

	Params::AbilityTask_WaitAbilityCommit_WaitForAbilityCommit Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.WithTag = std::move(WithTag);
	Parms.WithoutTage = std::move(WithoutTage);
	Parms.TriggerOnce = TriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool TriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitAbilityCommit", "WaitForAbilityCommit_Query");

	Params::AbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Query = std::move(Query);
	Parms.TriggerOnce = TriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(class UGameplayAbility* ActivatedAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitAbilityCommit", "OnAbilityCommit");

	Params::AbilityTask_WaitAbilityCommit_OnAbilityCommit Parms{};

	Parms.ActivatedAbility = ActivatedAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitAttributeChange", "WaitForAttributeChange");

	Params::AbilityTask_WaitAttributeChange_WaitForAttributeChange Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Attribute = std::move(Attribute);
	Parms.WithSrcTag = std::move(WithSrcTag);
	Parms.WithoutSrcTag = std::move(WithoutSrcTag);
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitAttributeChange", "WaitForAttributeChangeWithComparison");

	Params::AbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.InAttribute = std::move(InAttribute);
	Parms.InWithTag = std::move(InWithTag);
	Parms.InWithoutTag = std::move(InWithoutTag);
	Parms.InComparisonType = InComparisonType;
	Parms.InComparisonValue = InComparisonValue;
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitAttributeChangeRatioThreshold* UAbilityTask_WaitAttributeChangeRatioThreshold::WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitAttributeChangeRatioThreshold", "WaitForAttributeChangeRatioThreshold");

	Params::AbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.AttributeNumerator = std::move(AttributeNumerator);
	Parms.AttributeDenominator = std::move(AttributeDenominator);
	Parms.ComparisonType = ComparisonType;
	Parms.ComparisonValue = ComparisonValue;
	Parms.bTriggerOnce = bTriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitAttributeChangeThreshold* UAbilityTask_WaitAttributeChangeThreshold::WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitAttributeChangeThreshold", "WaitForAttributeChangeThreshold");

	Params::AbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Attribute = std::move(Attribute);
	Parms.ComparisonType = ComparisonType;
	Parms.ComparisonValue = ComparisonValue;
	Parms.bTriggerOnce = bTriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::WaitCancel(class UGameplayAbility* OwningAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitCancel", "WaitCancel");

	Params::AbilityTask_WaitCancel_WaitCancel Parms{};

	Parms.OwningAbility = OwningAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitCancel::OnCancelCallback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitCancel", "OnCancelCallback");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilityTask_WaitCancel::OnLocalCancelCallback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitCancel", "OnLocalCancelCallback");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::WaitConfirm(class UGameplayAbility* OwningAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitConfirm", "WaitConfirm");

	Params::AbilityTask_WaitConfirm_WaitConfirm Parms{};

	Parms.OwningAbility = OwningAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitConfirm::OnConfirmCallback(class UGameplayAbility* InAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitConfirm", "OnConfirmCallback");

	Params::AbilityTask_WaitConfirm_OnConfirmCallback Parms{};

	Parms.InAbility = InAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::WaitConfirmCancel(class UGameplayAbility* OwningAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitConfirmCancel", "WaitConfirmCancel");

	Params::AbilityTask_WaitConfirmCancel_WaitConfirmCancel Parms{};

	Parms.OwningAbility = OwningAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitConfirmCancel::OnCancelCallback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnCancelCallback");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilityTask_WaitConfirmCancel::OnConfirmCallback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnConfirmCallback");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilityTask_WaitConfirmCancel::OnLocalCancelCallback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnLocalCancelCallback");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilityTask_WaitConfirmCancel::OnLocalConfirmCallback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnLocalConfirmCallback");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::WaitDelay(class UGameplayAbility* OwningAbility, float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitDelay", "WaitDelay");

	Params::AbilityTask_WaitDelay_WaitDelay Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied", "OnApplyGameplayEffectCallback");

	Params::AbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback Parms{};

	Parms.Target = Target;
	Parms.SpecApplied = std::move(SpecApplied);
	Parms.ActiveHandle = std::move(ActiveHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEffectApplied_Self", "WaitGameplayEffectAppliedToSelf");

	Params::AbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.SourceFilter = std::move(SourceFilter);
	Parms.SourceTagRequirements = std::move(SourceTagRequirements);
	Parms.TargetTagRequirements = std::move(TargetTagRequirements);
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;
	Parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEffectApplied_Self", "WaitGameplayEffectAppliedToSelf_Query");

	Params::AbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.SourceFilter = std::move(SourceFilter);
	Parms.SourceTagQuery = std::move(SourceTagQuery);
	Parms.TargetTagQuery = std::move(TargetTagQuery);
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;
	Parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEffectApplied_Target", "WaitGameplayEffectAppliedToTarget");

	Params::AbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TargetFilter = std::move(TargetFilter);
	Parms.SourceTagRequirements = std::move(SourceTagRequirements);
	Parms.TargetTagRequirements = std::move(TargetTagRequirements);
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;
	Parms.ListenForPeriodicEffects = ListenForPeriodicEffects;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEffectApplied_Target", "WaitGameplayEffectAppliedToTarget_Query");

	Params::AbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.SourceFilter = std::move(SourceFilter);
	Parms.SourceTagQuery = std::move(SourceTagQuery);
	Parms.TargetTagQuery = std::move(TargetTagQuery);
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;
	Parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitGameplayEffectBlockedImmunity* UAbilityTask_WaitGameplayEffectBlockedImmunity::WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEffectBlockedImmunity", "WaitGameplayEffectBlockedByImmunity");

	Params::AbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.SourceTagRequirements = std::move(SourceTagRequirements);
	Parms.TargetTagRequirements = std::move(TargetTagRequirements);
	Parms.OptionalExternalTarget = OptionalExternalTarget;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEffectRemoved", "WaitForGameplayEffectRemoved");

	Params::AbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved(const struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectRemoved", "OnGameplayEffectRemoved");

	Params::AbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved Parms{};

	Parms.InGameplayEffectRemovalInfo = std::move(InGameplayEffectRemovalInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_WaitGameplayEffectStackChange* UAbilityTask_WaitGameplayEffectStackChange::WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEffectStackChange", "WaitForGameplayEffectStackChange");

	Params::AbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitGameplayEffectStackChange::OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int32 NewCount, int32 OldCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectStackChange", "OnGameplayEffectStackChange");

	Params::AbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange Parms{};

	Parms.Handle = std::move(Handle);
	Parms.NewCount = NewCount;
	Parms.OldCount = OldCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_WaitGameplayEvent* UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget_0, bool OnlyTriggerOnce, bool OnlyMatchExact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayEvent", "WaitGameplayEvent");

	Params::AbilityTask_WaitGameplayEvent_WaitGameplayEvent Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.EventTag = std::move(EventTag);
	Parms.OptionalExternalTarget_0 = OptionalExternalTarget_0;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;
	Parms.OnlyMatchExact = OnlyMatchExact;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitGameplayTag::GameplayTagCallback(const struct FGameplayTag& tag, int32 NewCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitGameplayTag", "GameplayTagCallback");

	Params::AbilityTask_WaitGameplayTag_GameplayTagCallback Parms{};

	Parms.tag = std::move(tag);
	Parms.NewCount = NewCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayTagAdded", "WaitGameplayTagAdd");

	Params::AbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.tag = std::move(tag);
	Parms.InOptionalExternalTarget = InOptionalExternalTarget;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayTagRemoved", "WaitGameplayTagRemove");

	Params::AbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.tag = std::move(tag);
	Parms.InOptionalExternalTarget = InOptionalExternalTarget;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitGameplayTagQuery* UAbilityTask_WaitGameplayTagQuery::WaitGameplayTagQuery(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& TagQuery, const class AActor* InOptionalExternalTarget, const EWaitGameplayTagQueryTriggerCondition TriggerCondition, const bool bOnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitGameplayTagQuery", "WaitGameplayTagQuery");

	Params::AbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TagQuery = std::move(TagQuery);
	Parms.InOptionalExternalTarget = InOptionalExternalTarget;
	Parms.TriggerCondition = TriggerCondition;
	Parms.bOnlyTriggerOnce = bOnlyTriggerOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitGameplayTagQuery::UpdateTargetTags(const struct FGameplayTag& tag, int32 NewCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitGameplayTagQuery", "UpdateTargetTags");

	Params::AbilityTask_WaitGameplayTagQuery_UpdateTargetTags Parms{};

	Parms.tag = std::move(tag);
	Parms.NewCount = NewCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitInputRelease", "WaitInputRelease");

	Params::AbilityTask_WaitInputRelease_WaitInputRelease Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.bTestAlreadyReleased = bTestAlreadyReleased;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitInputRelease::OnReleaseCallback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitInputRelease", "OnReleaseCallback");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::WaitForOverlap(class UGameplayAbility* OwningAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitOverlap", "WaitForOverlap");

	Params::AbilityTask_WaitOverlap_WaitForOverlap Parms{};

	Parms.OwningAbility = OwningAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitOverlap::OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitOverlap", "OnHitCallback");

	Params::AbilityTask_WaitOverlap_OnHitCallback Parms{};

	Parms.HitComp = HitComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetData(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, TSubclassOf<class AGameplayAbilityTargetActor> Class_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitTargetData", "WaitTargetData");

	Params::AbilityTask_WaitTargetData_WaitTargetData Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.ConfirmationType = ConfirmationType;
	Parms.Class_0 = Class_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, class AGameplayAbilityTargetActor* TargetActor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_WaitTargetData", "WaitTargetDataUsingActor");

	Params::AbilityTask_WaitTargetData_WaitTargetDataUsingActor Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.ConfirmationType = ConfirmationType;
	Parms.TargetActor_0 = TargetActor_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilityTask_WaitTargetData::BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class_0, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "BeginSpawningActor");

	Params::AbilityTask_WaitTargetData_BeginSpawningActor Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Class_0 = Class_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SpawnedActor != nullptr)
		*SpawnedActor = Parms.SpawnedActor;

	return Parms.ReturnValue;
}

void UAbilityTask_WaitTargetData::FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "FinishSpawningActor");

	Params::AbilityTask_WaitTargetData_FinishSpawningActor Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.SpawnedActor = SpawnedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataCancelledCallback");

	Params::AbilityTask_WaitTargetData_OnTargetDataCancelledCallback Parms{};

	Parms.Data = std::move(Data);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReadyCallback");

	Params::AbilityTask_WaitTargetData_OnTargetDataReadyCallback Parms{};

	Parms.Data = std::move(Data);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReplicatedCallback");

	Params::AbilityTask_WaitTargetData_OnTargetDataReplicatedCallback Parms{};

	Parms.Data = std::move(Data);
	Parms.ActivationTag = std::move(ActivationTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReplicatedCancelledCallback");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectSpecToSelf");

	Params::AbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf Parms{};

	Parms.SpecHandle = std::move(SpecHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectSpecToTarget");

	Params::AbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget Parms{};

	Parms.SpecHandle = std::move(SpecHandle);
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectToSelf");

	Params::AbilitySystemComponent_BP_ApplyGameplayEffectToSelf Parms{};

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.Level = Level;
	Parms.EffectContext = std::move(EffectContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(TSubclassOf<class UGameplayEffect> GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectToTarget");

	Params::AbilitySystemComponent_BP_ApplyGameplayEffectToTarget Parms{};

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.Target = Target;
	Parms.Level = Level;
	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilitySystemComponent::ClearAbility(const struct FGameplayAbilitySpecHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ClearAbility");

	Params::AbilitySystemComponent_ClearAbility Parms{};

	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ClearAllAbilities()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ClearAllAbilities");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ClearAllAbilitiesWithInputID(int32 InputID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ClearAllAbilitiesWithInputID");

	Params::AbilitySystemComponent_ClearAllAbilitiesWithInputID Parms{};

	Parms.InputID = InputID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16 PredictionKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientActivateAbilityFailed");

	Params::AbilitySystemComponent_ClientActivateAbilityFailed Parms{};

	Parms.AbilityToActivate = std::move(AbilityToActivate);
	Parms.PredictionKey = PredictionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientActivateAbilitySucceed");

	Params::AbilitySystemComponent_ClientActivateAbilitySucceed Parms{};

	Parms.AbilityToActivate = std::move(AbilityToActivate);
	Parms.PredictionKey = std::move(PredictionKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientActivateAbilitySucceedWithEventData");

	Params::AbilitySystemComponent_ClientActivateAbilitySucceedWithEventData Parms{};

	Parms.AbilityToActivate = std::move(AbilityToActivate);
	Parms.PredictionKey = std::move(PredictionKey);
	Parms.TriggerEventData = std::move(TriggerEventData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientCancelAbility");

	Params::AbilitySystemComponent_ClientCancelAbility Parms{};

	Parms.AbilityToCancel = std::move(AbilityToCancel);
	Parms.ActivationInfo = std::move(ActivationInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientEndAbility");

	Params::AbilitySystemComponent_ClientEndAbility Parms{};

	Parms.AbilityToEnd = std::move(AbilityToEnd);
	Parms.ActivationInfo = std::move(ActivationInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ClientPrintDebug_Response(const TArray<class FString>& Strings, int32 GameFlags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientPrintDebug_Response");

	Params::AbilitySystemComponent_ClientPrintDebug_Response Parms{};

	Parms.Strings = std::move(Strings);
	Parms.GameFlags = GameFlags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ClientSetReplicatedEvent(EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientSetReplicatedEvent");

	Params::AbilitySystemComponent_ClientSetReplicatedEvent Parms{};

	Parms.EventType = EventType;
	Parms.AbilityHandle = std::move(AbilityHandle);
	Parms.AbilityOriginalPredictionKey = std::move(AbilityOriginalPredictionKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientTryActivateAbility");

	Params::AbilitySystemComponent_ClientTryActivateAbility Parms{};

	Parms.AbilityToActivate = std::move(AbilityToActivate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::GetAllAttributes(TArray<struct FGameplayAttribute>* OutAttributes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "GetAllAttributes");

	Params::AbilitySystemComponent_GetAllAttributes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAttributes != nullptr)
		*OutAttributes = std::move(Parms.OutAttributes);
}

void UAbilitySystemComponent::InputCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "InputCancel");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::InputConfirm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "InputConfirm");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FGameplayAbilitySpecHandle UAbilitySystemComponent::K2_GiveAbility(TSubclassOf<class UGameplayAbility> AbilityClass, int32 Level, int32 InputID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "K2_GiveAbility");

	Params::AbilitySystemComponent_K2_GiveAbility Parms{};

	Parms.AbilityClass = AbilityClass;
	Parms.Level = Level;
	Parms.InputID = InputID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayAbilitySpecHandle UAbilitySystemComponent::K2_GiveAbilityAndActivateOnce(TSubclassOf<class UGameplayAbility> AbilityClass, int32 Level, int32 InputID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "K2_GiveAbilityAndActivateOnce");

	Params::AbilitySystemComponent_K2_GiveAbilityAndActivateOnce Parms{};

	Parms.AbilityClass = AbilityClass;
	Parms.Level = Level;
	Parms.InputID = InputID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilitySystemComponent::K2_InitStats(TSubclassOf<class UAttributeSet> Attributes, const class UDataTable* DataTable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "K2_InitStats");

	Params::AbilitySystemComponent_K2_InitStats Parms{};

	Parms.Attributes = Attributes;
	Parms.DataTable = DataTable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAdded");

	Params::AbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.PredictionKey = std::move(PredictionKey);
	Parms.EffectContext = std::move(EffectContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAdded_WithParams");

	Params::AbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.PredictionKey = std::move(PredictionKey);
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec");

	Params::AbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec Parms{};

	Parms.Spec = std::move(Spec);
	Parms.PredictionKey = std::move(PredictionKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams");

	Params::AbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.PredictionKey = std::move(PredictionKey);
	Parms.GameplayCueParameters = std::move(GameplayCueParameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted");

	Params::AbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.PredictionKey = std::move(PredictionKey);
	Parms.EffectContext = std::move(EffectContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted_FromSpec");

	Params::AbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec Parms{};

	Parms.Spec = std::move(Spec);
	Parms.PredictionKey = std::move(PredictionKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted_WithParams");

	Params::AbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.PredictionKey = std::move(PredictionKey);
	Parms.GameplayCueParameters = std::move(GameplayCueParameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams");

	Params::AbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams Parms{};

	Parms.GameplayCueTags = std::move(GameplayCueTags);
	Parms.PredictionKey = std::move(PredictionKey);
	Parms.GameplayCueParameters = std::move(GameplayCueParameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesExecuted");

	Params::AbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted Parms{};

	Parms.GameplayCueTags = std::move(GameplayCueTags);
	Parms.PredictionKey = std::move(PredictionKey);
	Parms.EffectContext = std::move(EffectContext);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesExecuted_WithParams");

	Params::AbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams Parms{};

	Parms.GameplayCueTags = std::move(GameplayCueTags);
	Parms.PredictionKey = std::move(PredictionKey);
	Parms.GameplayCueParameters = std::move(GameplayCueParameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::OnAvatarActorDestroyed(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "OnAvatarActorDestroyed");

	Params::AbilitySystemComponent_OnAvatarActorDestroyed Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::OnOwnerActorDestroyed(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "OnOwnerActorDestroyed");

	Params::AbilitySystemComponent_OnOwnerActorDestroyed Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::OnRep_ActivateAbilities()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ActivateAbilities");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::OnRep_ClientDebugString()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ClientDebugString");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::OnRep_OwningActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_OwningActor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ReplicatedAnimMontage");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::OnRep_ServerDebugString()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ServerDebugString");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::OnRep_SpawnedAttributes(const TArray<class UAttributeSet*>& PreviousSpawnedAttributes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_SpawnedAttributes");

	Params::AbilitySystemComponent_OnRep_SpawnedAttributes Parms{};

	Parms.PreviousSpawnedAttributes = std::move(PreviousSpawnedAttributes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::OnSpawnedAttributesEndPlayed(class AActor* InActor, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "OnSpawnedAttributesEndPlayed");

	Params::AbilitySystemComponent_OnSpawnedAttributesEndPlayed Parms{};

	Parms.InActor = InActor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::PressInputID(int32 InputID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "PressInputID");

	Params::AbilitySystemComponent_PressInputID Parms{};

	Parms.InputID = InputID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ReleaseInputID(int32 InputID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ReleaseInputID");

	Params::AbilitySystemComponent_ReleaseInputID Parms{};

	Parms.InputID = InputID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UAbilitySystemComponent::RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithAppliedTags");

	Params::AbilitySystemComponent_RemoveActiveEffectsWithAppliedTags Parms{};

	Parms.Tags = std::move(Tags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAbilitySystemComponent::RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithGrantedTags");

	Params::AbilitySystemComponent_RemoveActiveEffectsWithGrantedTags Parms{};

	Parms.Tags = std::move(Tags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAbilitySystemComponent::RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithSourceTags");

	Params::AbilitySystemComponent_RemoveActiveEffectsWithSourceTags Parms{};

	Parms.Tags = std::move(Tags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAbilitySystemComponent::RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithTags");

	Params::AbilitySystemComponent_RemoveActiveEffectsWithTags Parms{};

	Parms.Tags = std::move(Tags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemComponent::RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int32 StacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveGameplayEffect");

	Params::AbilitySystemComponent_RemoveActiveGameplayEffect Parms{};

	Parms.Handle = std::move(Handle);
	Parms.StacksToRemove = StacksToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(TSubclassOf<class UGameplayEffect> GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32 StacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveGameplayEffectBySourceEffect");

	Params::AbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect Parms{};

	Parms.GameplayEffect = GameplayEffect;
	Parms.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;
	Parms.StacksToRemove = StacksToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerAbilityRPCBatch(const struct GameplayAbilities::FServerAbilityRPCBatch& BatchInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerAbilityRPCBatch");

	Params::AbilitySystemComponent_ServerAbilityRPCBatch Parms{};

	Parms.BatchInfo = std::move(BatchInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerCancelAbility");

	Params::AbilitySystemComponent_ServerCancelAbility Parms{};

	Parms.AbilityToCancel = std::move(AbilityToCancel);
	Parms.ActivationInfo = std::move(ActivationInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, class FName SectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerCurrentMontageJumpToSectionName");

	Params::AbilitySystemComponent_ServerCurrentMontageJumpToSectionName Parms{};

	Parms.ClientAnimMontage = ClientAnimMontage;
	Parms.SectionName = SectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, class FName SectionName, class FName NextSectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerCurrentMontageSetNextSectionName");

	Params::AbilitySystemComponent_ServerCurrentMontageSetNextSectionName Parms{};

	Parms.ClientAnimMontage = ClientAnimMontage;
	Parms.ClientPosition = ClientPosition;
	Parms.SectionName = SectionName;
	Parms.NextSectionName = NextSectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerCurrentMontageSetPlayRate");

	Params::AbilitySystemComponent_ServerCurrentMontageSetPlayRate Parms{};

	Parms.ClientAnimMontage = ClientAnimMontage;
	Parms.InPlayRate = InPlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerEndAbility");

	Params::AbilitySystemComponent_ServerEndAbility Parms{};

	Parms.AbilityToEnd = std::move(AbilityToEnd);
	Parms.ActivationInfo = std::move(ActivationInfo);
	Parms.PredictionKey = std::move(PredictionKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerPrintDebug_Request()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerPrintDebug_Request");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerPrintDebug_RequestWithStrings(const TArray<class FString>& Strings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerPrintDebug_RequestWithStrings");

	Params::AbilitySystemComponent_ServerPrintDebug_RequestWithStrings Parms{};

	Parms.Strings = std::move(Strings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetInputPressed");

	Params::AbilitySystemComponent_ServerSetInputPressed Parms{};

	Parms.AbilityHandle = std::move(AbilityHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetInputReleased");

	Params::AbilitySystemComponent_ServerSetInputReleased Parms{};

	Parms.AbilityHandle = std::move(AbilityHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerSetReplicatedEvent(EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedEvent");

	Params::AbilitySystemComponent_ServerSetReplicatedEvent Parms{};

	Parms.EventType = EventType;
	Parms.AbilityHandle = std::move(AbilityHandle);
	Parms.AbilityOriginalPredictionKey = std::move(AbilityOriginalPredictionKey);
	Parms.CurrentPredictionKey = std::move(CurrentPredictionKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerSetReplicatedEventWithPayload(EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedEventWithPayload");

	Params::AbilitySystemComponent_ServerSetReplicatedEventWithPayload Parms{};

	Parms.EventType = EventType;
	Parms.AbilityHandle = std::move(AbilityHandle);
	Parms.AbilityOriginalPredictionKey = std::move(AbilityOriginalPredictionKey);
	Parms.CurrentPredictionKey = std::move(CurrentPredictionKey);
	Parms.VectorPayload = std::move(VectorPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedTargetData");

	Params::AbilitySystemComponent_ServerSetReplicatedTargetData Parms{};

	Parms.AbilityHandle = std::move(AbilityHandle);
	Parms.AbilityOriginalPredictionKey = std::move(AbilityOriginalPredictionKey);
	Parms.ReplicatedTargetDataHandle = std::move(ReplicatedTargetDataHandle);
	Parms.ApplicationTag = std::move(ApplicationTag);
	Parms.CurrentPredictionKey = std::move(CurrentPredictionKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedTargetDataCancelled");

	Params::AbilitySystemComponent_ServerSetReplicatedTargetDataCancelled Parms{};

	Parms.AbilityHandle = std::move(AbilityHandle);
	Parms.AbilityOriginalPredictionKey = std::move(AbilityOriginalPredictionKey);
	Parms.CurrentPredictionKey = std::move(CurrentPredictionKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerTryActivateAbility");

	Params::AbilitySystemComponent_ServerTryActivateAbility Parms{};

	Parms.AbilityToActivate = std::move(AbilityToActivate);
	Parms.InputPressed = InputPressed;
	Parms.PredictionKey = std::move(PredictionKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerTryActivateAbilityWithEventData");

	Params::AbilitySystemComponent_ServerTryActivateAbilityWithEventData Parms{};

	Parms.AbilityToActivate = std::move(AbilityToActivate);
	Parms.InputPressed = InputPressed;
	Parms.PredictionKey = std::move(PredictionKey);
	Parms.TriggerEventData = std::move(TriggerEventData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "SetActiveGameplayEffectLevel");

	Params::AbilitySystemComponent_SetActiveGameplayEffectLevel Parms{};

	Parms.ActiveHandle = std::move(ActiveHandle);
	Parms.NewLevel = NewLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "SetActiveGameplayEffectLevelUsingQuery");

	Params::AbilitySystemComponent_SetActiveGameplayEffectLevelUsingQuery Parms{};

	Parms.Query = std::move(Query);
	Parms.NewLevel = NewLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::SetUserAbilityActivationInhibited(bool NewInhibit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "SetUserAbilityActivationInhibited");

	Params::AbilitySystemComponent_SetUserAbilityActivationInhibited Parms{};

	Parms.NewInhibit = NewInhibit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::TargetCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "TargetCancel");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::TargetConfirm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "TargetConfirm");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UAbilitySystemComponent::TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "TryActivateAbilitiesByTag");

	Params::AbilitySystemComponent_TryActivateAbilitiesByTag Parms{};

	Parms.GameplayTagContainer = std::move(GameplayTagContainer);
	Parms.bAllowRemoteActivation = bAllowRemoteActivation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemComponent::TryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool bAllowRemoteActivation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "TryActivateAbility");

	Params::AbilitySystemComponent_TryActivateAbility Parms{};

	Parms.AbilityToActivate = std::move(AbilityToActivate);
	Parms.bAllowRemoteActivation = bAllowRemoteActivation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemComponent::TryActivateAbilityByClass(TSubclassOf<class UGameplayAbility> InAbilityToActivate, bool bAllowRemoteActivation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "TryActivateAbilityByClass");

	Params::AbilitySystemComponent_TryActivateAbilityByClass Parms{};

	Parms.InAbilityToActivate = InAbilityToActivate;
	Parms.bAllowRemoteActivation = bAllowRemoteActivation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilitySystemComponent::UpdateActiveGameplayEffectSetByCallerMagnitude(const struct FActiveGameplayEffectHandle& ActiveHandle, const struct FGameplayTag& SetByCallerTag, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "UpdateActiveGameplayEffectSetByCallerMagnitude");

	Params::AbilitySystemComponent_UpdateActiveGameplayEffectSetByCallerMagnitude Parms{};

	Parms.ActiveHandle = std::move(ActiveHandle);
	Parms.SetByCallerTag = std::move(SetByCallerTag);
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::UpdateActiveGameplayEffectSetByCallerMagnitudes(const struct FActiveGameplayEffectHandle& ActiveHandle, const TMap<struct FGameplayTag, float>& NewSetByCallerValues)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "UpdateActiveGameplayEffectSetByCallerMagnitudes");

	Params::AbilitySystemComponent_UpdateActiveGameplayEffectSetByCallerMagnitudes Parms{};

	Parms.ActiveHandle = std::move(ActiveHandle);
	Parms.NewSetByCallerValues = std::move(NewSetByCallerValues);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemComponent::FindAllAbilitiesMatchingQuery(TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles, const struct FGameplayTagQuery& Query) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "FindAllAbilitiesMatchingQuery");

	Params::AbilitySystemComponent_FindAllAbilitiesMatchingQuery Parms{};

	Parms.Query = std::move(Query);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAbilityHandles != nullptr)
		*OutAbilityHandles = std::move(Parms.OutAbilityHandles);
}

void UAbilitySystemComponent::FindAllAbilitiesWithInputID(TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles, int32 InputID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "FindAllAbilitiesWithInputID");

	Params::AbilitySystemComponent_FindAllAbilitiesWithInputID Parms{};

	Parms.InputID = InputID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAbilityHandles != nullptr)
		*OutAbilityHandles = std::move(Parms.OutAbilityHandles);
}

void UAbilitySystemComponent::FindAllAbilitiesWithTags(TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles, const struct FGameplayTagContainer& Tags, bool bExactMatch) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "FindAllAbilitiesWithTags");

	Params::AbilitySystemComponent_FindAllAbilitiesWithTags Parms{};

	Parms.Tags = std::move(Tags);
	Parms.bExactMatch = bExactMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAbilityHandles != nullptr)
		*OutAbilityHandles = std::move(Parms.OutAbilityHandles);
}

TArray<struct FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffects(const struct FGameplayEffectQuery& Query) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "GetActiveEffects");

	Params::AbilitySystemComponent_GetActiveEffects Parms{};

	Parms.Query = std::move(Query);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffectsWithAllTags(const struct FGameplayTagContainer& Tags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "GetActiveEffectsWithAllTags");

	Params::AbilitySystemComponent_GetActiveEffectsWithAllTags Parms{};

	Parms.Tags = std::move(Tags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilitySystemComponent::GetAllAbilities(TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "GetAllAbilities");

	Params::AbilitySystemComponent_GetAllAbilities Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAbilityHandles != nullptr)
		*OutAbilityHandles = std::move(Parms.OutAbilityHandles);
}

const class UAttributeSet* UAbilitySystemComponent::GetAttributeSet(TSubclassOf<class UAttributeSet> AttributeSetClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "GetAttributeSet");

	Params::AbilitySystemComponent_GetAttributeSet Parms{};

	Parms.AttributeSetClass = AttributeSetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAbilitySystemComponent::GetGameplayAttributeValue(const struct FGameplayAttribute& Attribute, bool* bFound) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayAttributeValue");

	Params::AbilitySystemComponent_GetGameplayAttributeValue Parms{};

	Parms.Attribute = std::move(Attribute);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bFound != nullptr)
		*bFound = Parms.bFound;

	return Parms.ReturnValue;
}

int32 UAbilitySystemComponent::GetGameplayEffectCount(TSubclassOf<class UGameplayEffect> SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayEffectCount");

	Params::AbilitySystemComponent_GetGameplayEffectCount Parms{};

	Parms.SourceGameplayEffect = SourceGameplayEffect;
	Parms.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;
	Parms.bEnforceOnGoingCheck = bEnforceOnGoingCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAbilitySystemComponent::GetGameplayEffectCount_IfLoaded(TSoftClassPtr<class UClass> SoftSourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayEffectCount_IfLoaded");

	Params::AbilitySystemComponent_GetGameplayEffectCount_IfLoaded Parms{};

	Parms.SoftSourceGameplayEffect = SoftSourceGameplayEffect;
	Parms.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;
	Parms.bEnforceOnGoingCheck = bEnforceOnGoingCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAbilitySystemComponent::GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayEffectMagnitude");

	Params::AbilitySystemComponent_GetGameplayEffectMagnitude Parms{};

	Parms.Handle = std::move(Handle);
	Parms.Attribute = std::move(Attribute);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAbilitySystemComponent::GetGameplayTagCount(const struct FGameplayTag& GameplayTag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayTagCount");

	Params::AbilitySystemComponent_GetGameplayTagCount Parms{};

	Parms.GameplayTag = std::move(GameplayTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemComponent::GetUserAbilityActivationInhibited() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "GetUserAbilityActivationInhibited");

	Params::AbilitySystemComponent_GetUserAbilityActivationInhibited Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAbilitySystemComponent::IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "IsGameplayCueActive");

	Params::AbilitySystemComponent_IsGameplayCueActive Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectContextHandle UAbilitySystemComponent::MakeEffectContext() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "MakeEffectContext");

	Params::AbilitySystemComponent_MakeEffectContext Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemComponent", "MakeOutgoingSpec");

	Params::AbilitySystemComponent_MakeOutgoingSpec Parms{};

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.Level = Level;
	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAbilitySystemGlobals::ListPlayerAbilities()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemGlobals", "ListPlayerAbilities");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemGlobals::ServerActivatePlayerAbility(const class FString& AbilityNameMatch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemGlobals", "ServerActivatePlayerAbility");

	Params::AbilitySystemGlobals_ServerActivatePlayerAbility Parms{};

	Parms.AbilityNameMatch = std::move(AbilityNameMatch);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemGlobals::ServerCancelPlayerAbility(const class FString& AbilityNameMatch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemGlobals", "ServerCancelPlayerAbility");

	Params::AbilitySystemGlobals_ServerCancelPlayerAbility Parms{};

	Parms.AbilityNameMatch = std::move(AbilityNameMatch);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemGlobals::ServerEndPlayerAbility(const class FString& AbilityNameMatch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemGlobals", "ServerEndPlayerAbility");

	Params::AbilitySystemGlobals_ServerEndPlayerAbility Parms{};

	Parms.AbilityNameMatch = std::move(AbilityNameMatch);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemGlobals", "ToggleIgnoreAbilitySystemCooldowns");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilitySystemGlobals", "ToggleIgnoreAbilitySystemCosts");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UGameplayCueFunctionLibrary::AddGameplayCueOnActor(class AActor* Target, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayCueFunctionLibrary", "AddGameplayCueOnActor");

	Params::GameplayCueFunctionLibrary_AddGameplayCueOnActor Parms{};

	Parms.Target = Target;
	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayCueFunctionLibrary::ExecuteGameplayCueOnActor(class AActor* Target, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayCueFunctionLibrary", "ExecuteGameplayCueOnActor");

	Params::GameplayCueFunctionLibrary_ExecuteGameplayCueOnActor Parms{};

	Parms.Target = Target;
	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FGameplayCueParameters UGameplayCueFunctionLibrary::MakeGameplayCueParametersFromHitResult(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayCueFunctionLibrary", "MakeGameplayCueParametersFromHitResult");

	Params::GameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult Parms{};

	Parms.HitResult = std::move(HitResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayCueFunctionLibrary::RemoveGameplayCueOnActor(class AActor* Target, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayCueFunctionLibrary", "RemoveGameplayCueOnActor");

	Params::GameplayCueFunctionLibrary_RemoveGameplayCueOnActor Parms{};

	Parms.Target = Target;
	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IGameplayCueInterface::BlueprintCustomHandler(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueInterface", "BlueprintCustomHandler");

	Params::GameplayCueInterface_BlueprintCustomHandler Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void IGameplayCueInterface::ForwardGameplayCueToParent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueInterface", "ForwardGameplayCueToParent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AGameplayCueNotify_Actor::K2_EndGameplayCue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "K2_EndGameplayCue");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AGameplayCueNotify_Actor::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "K2_HandleGameplayCue");

	Params::GameplayCueNotify_Actor_K2_HandleGameplayCue Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

bool AGameplayCueNotify_Actor::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "OnActive");

	Params::GameplayCueNotify_Actor_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AGameplayCueNotify_Actor::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "OnExecute");

	Params::GameplayCueNotify_Actor_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AGameplayCueNotify_Actor::OnOwnerDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "OnOwnerDestroyed");

	Params::GameplayCueNotify_Actor_OnOwnerDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool AGameplayCueNotify_Actor::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "OnRemove");

	Params::GameplayCueNotify_Actor_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AGameplayCueNotify_Actor::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "WhileActive");

	Params::GameplayCueNotify_Actor_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayCueNotify_Static::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Static", "K2_HandleGameplayCue");

	Params::GameplayCueNotify_Static_K2_HandleGameplayCue Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

bool UGameplayCueNotify_Static::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Static", "OnActive");

	Params::GameplayCueNotify_Static_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UGameplayCueNotify_Static::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Static", "OnExecute");

	Params::GameplayCueNotify_Static_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UGameplayCueNotify_Static::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Static", "OnRemove");

	Params::GameplayCueNotify_Static_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UGameplayCueNotify_Static::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Static", "WhileActive");

	Params::GameplayCueNotify_Static_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayCueNotify_Burst::OnBurst(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Burst", "OnBurst");

	Params::GameplayCueNotify_Burst_OnBurst Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}

void AGameplayCueNotify_BurstLatent::OnBurst(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_BurstLatent", "OnBurst");

	Params::GameplayCueNotify_BurstLatent_OnBurst Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}

void AGameplayCueNotify_Looping::OnApplication(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Looping", "OnApplication");

	Params::GameplayCueNotify_Looping_OnApplication Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}

void AGameplayCueNotify_Looping::OnLoopingStart(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Looping", "OnLoopingStart");

	Params::GameplayCueNotify_Looping_OnLoopingStart Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}

void AGameplayCueNotify_Looping::OnRecurring(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Looping", "OnRecurring");

	Params::GameplayCueNotify_Looping_OnRecurring Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}

void AGameplayCueNotify_Looping::OnRemoval(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayCueNotify_Looping", "OnRemoval");

	Params::GameplayCueNotify_Looping_OnRemoval Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}

bool UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect(const class UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayEffectCustomApplicationRequirement", "CanApplyGameplayEffect");

	Params::GameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect Parms{};

	Parms.GameplayEffect = GameplayEffect;
	Parms.Spec = std::move(Spec);
	Parms.ASC = ASC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayEffectExecutionCalculation::Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayEffectExecutionCalculation", "Execute");

	Params::GameplayEffectExecutionCalculation_Execute Parms{};

	Parms.ExecutionParams = std::move(ExecutionParams);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = std::move(Parms.OutExecutionOutput);
}

float UGameplayModMagnitudeCalculation::GetSetByCallerMagnitudeByName(const struct FGameplayEffectSpec& EffectSpec, const class FName& MagnitudeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSetByCallerMagnitudeByName");

	Params::GameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName Parms{};

	Parms.EffectSpec = std::move(EffectSpec);
	Parms.MagnitudeName = MagnitudeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UGameplayModMagnitudeCalculation::GetSetByCallerMagnitudeByTag(const struct FGameplayEffectSpec& EffectSpec, const struct FGameplayTag& tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSetByCallerMagnitudeByTag");

	Params::GameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag Parms{};

	Parms.EffectSpec = std::move(EffectSpec);
	Parms.tag = std::move(tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceActorTags(const struct FGameplayEffectSpec& EffectSpec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSourceActorTags");

	Params::GameplayModMagnitudeCalculation_GetSourceActorTags Parms{};

	Parms.EffectSpec = std::move(EffectSpec);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceAggregatedTags(const struct FGameplayEffectSpec& EffectSpec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSourceAggregatedTags");

	Params::GameplayModMagnitudeCalculation_GetSourceAggregatedTags Parms{};

	Parms.EffectSpec = std::move(EffectSpec);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceSpecTags(const struct FGameplayEffectSpec& EffectSpec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSourceSpecTags");

	Params::GameplayModMagnitudeCalculation_GetSourceSpecTags Parms{};

	Parms.EffectSpec = std::move(EffectSpec);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetActorTags(const struct FGameplayEffectSpec& EffectSpec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetTargetActorTags");

	Params::GameplayModMagnitudeCalculation_GetTargetActorTags Parms{};

	Parms.EffectSpec = std::move(EffectSpec);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetAggregatedTags(const struct FGameplayEffectSpec& EffectSpec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetTargetAggregatedTags");

	Params::GameplayModMagnitudeCalculation_GetTargetAggregatedTags Parms{};

	Parms.EffectSpec = std::move(EffectSpec);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetSpecTags(const struct FGameplayEffectSpec& EffectSpec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetTargetSpecTags");

	Params::GameplayModMagnitudeCalculation_GetTargetSpecTags Parms{};

	Parms.EffectSpec = std::move(EffectSpec);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UGameplayModMagnitudeCalculation::K2_GetCapturedAttributeMagnitude(const struct FGameplayEffectSpec& EffectSpec, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "K2_GetCapturedAttributeMagnitude");

	Params::GameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude Parms{};

	Parms.EffectSpec = std::move(EffectSpec);
	Parms.Attribute = std::move(Attribute);
	Parms.SourceTags = std::move(SourceTags);
	Parms.TargetTags = std::move(TargetTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "CalculateBaseMagnitude");

	Params::GameplayModMagnitudeCalculation_CalculateBaseMagnitude Parms{};

	Parms.Spec = std::move(Spec);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayTagReponseTable::TagResponseEvent(const struct FGameplayTag& tag, int32 NewCount, class UAbilitySystemComponent* ASC, int32 idx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayTagReponseTable", "TagResponseEvent");

	Params::GameplayTagReponseTable_TagResponseEvent Parms{};

	Parms.tag = std::move(tag);
	Parms.NewCount = NewCount;
	Parms.ASC = ASC;
	Parms.idx = idx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneGameplayCueTrack::SetSequencerTrackHandler(TDelegate<void(class AActor* Target, const struct FGameplayTag& GameplayTag, struct FGameplayCueParameters& Parameters, EGameplayCueEvent Event)> InGameplayCueTrackHandler)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneGameplayCueTrack", "SetSequencerTrackHandler");

	Params::MovieSceneGameplayCueTrack_SetSequencerTrackHandler Parms{};

	Parms.InGameplayCueTrackHandler = InGameplayCueTrackHandler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
