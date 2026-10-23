#pragma once

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CRDBossRuntime_structs.hpp"

namespace SDK
{

class UBTTask_RotateToFaceAheadBBEntry final : public UBTTask_RotateToFaceBBEntry
{
public:
	uint8                                         Pad_A0[0x4];
	float                                         TimeAhead;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_RotateToFaceAheadBBEntry">();
	}
	static class UBTTask_RotateToFaceAheadBBEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_RotateToFaceAheadBBEntry>();
	}
};
static_assert(alignof(UBTTask_RotateToFaceAheadBBEntry) == 0x000008, "Wrong alignment on UBTTask_RotateToFaceAheadBBEntry");
static_assert(sizeof(UBTTask_RotateToFaceAheadBBEntry) == 0x0000A8, "Wrong size on UBTTask_RotateToFaceAheadBBEntry");
static_assert(offsetof(UBTTask_RotateToFaceAheadBBEntry, TimeAhead) == 0x0000A4, "Member 'UBTTask_RotateToFaceAheadBBEntry::TimeAhead' has a wrong offset!");

class ACRD_BossSpawnedTrap final : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	class UFortAbilitySystemComponent*            AbilitySystemComponent;
	class UFortDamageSet*                         DamageSet;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CRD_BossSpawnedTrap">();
	}
	static class ACRD_BossSpawnedTrap* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACRD_BossSpawnedTrap>();
	}
};
static_assert(alignof(ACRD_BossSpawnedTrap) == 0x000008, "Wrong alignment on ACRD_BossSpawnedTrap");
static_assert(sizeof(ACRD_BossSpawnedTrap) == 0x0002A0, "Wrong size on ACRD_BossSpawnedTrap");
static_assert(offsetof(ACRD_BossSpawnedTrap, AbilitySystemComponent) == 0x000290, "Member 'ACRD_BossSpawnedTrap::AbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(ACRD_BossSpawnedTrap, DamageSet) == 0x000298, "Member 'ACRD_BossSpawnedTrap::DamageSet' has a wrong offset!");

class UEnvQueryGenerator_PointsOnLine final : public UEnvQueryGenerator_ProjectedPoints
{
public:
	TSubclassOf<class UEnvQueryContext>           GenerateFrom;
	struct FAIDataProviderFloatValue              DistanceToFirstPoint;
	struct FAIDataProviderFloatValue              DistanceBetweenPoints;
	struct FAIDataProviderFloatValue              MaxDistance;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryGenerator_PointsOnLine">();
	}
	static class UEnvQueryGenerator_PointsOnLine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryGenerator_PointsOnLine>();
	}
};
static_assert(alignof(UEnvQueryGenerator_PointsOnLine) == 0x000008, "Wrong alignment on UEnvQueryGenerator_PointsOnLine");
static_assert(sizeof(UEnvQueryGenerator_PointsOnLine) == 0x000138, "Wrong size on UEnvQueryGenerator_PointsOnLine");
static_assert(offsetof(UEnvQueryGenerator_PointsOnLine, GenerateFrom) == 0x000088, "Member 'UEnvQueryGenerator_PointsOnLine::GenerateFrom' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_PointsOnLine, DistanceToFirstPoint) == 0x000090, "Member 'UEnvQueryGenerator_PointsOnLine::DistanceToFirstPoint' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_PointsOnLine, DistanceBetweenPoints) == 0x0000C8, "Member 'UEnvQueryGenerator_PointsOnLine::DistanceBetweenPoints' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_PointsOnLine, MaxDistance) == 0x000100, "Member 'UEnvQueryGenerator_PointsOnLine::MaxDistance' has a wrong offset!");

class UBossRuntimeBlueprintFunctionlibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddNewValueToBoolMap(TDelegate<void(bool OldValue, bool NewValue)> OnOldValueFoundDelegate, TMap<struct FGameplayTag, bool>& InMap, const struct FGameplayTag& InKey, bool NewValue);
	static void AddNewValueToFloatMap(TDelegate<void(float OldValue, float NewValue)> OnOldValueFoundDelegate, TMap<struct FGameplayTag, double>& InMap, const struct FGameplayTag& InKey, float NewValue);
	static void AddNewValueToIntMap(TDelegate<void(int32 OldValue, int32 NewValue)> OnOldValueFoundDelegate, TMap<struct FGameplayTag, int32>& InMap, const struct FGameplayTag& InKey, int32 NewValue);
	static bool DoAbilityActivationChecksPass(const class AFortPawn* OwningPawn, const class UFortGameplayAbility* FortGameplayAbility);
	static bool DoAbilityDistanceChecksPass(const class AFortPawn* OwningPawn, const class UFortGameplayAbility* FortGameplayAbility, const class AActor* TargetActor, const struct FGameplayTagContainer& MinRange, const struct FGameplayTagContainer& MaxRange);
	static bool DoAbilityRotationChecksPass(const class AFortPawn* OwningPawn, const class UFortGameplayAbility* FortGameplayAbility, const class AActor* TargetActor);
	static bool GetActorNavAgentLocation(class AActor* InActor, struct FVector* OutVector);
	static TArray<class FName> GetBossAbilityRegistryScope(class UFortGameplayAbility* InAbility);
	static class FString GetExportPath(class UObject* InObject);
	static struct FFortItemEntry MakeFortItemEntryFromVariantHandle(const struct FItemVariantHandle& InVariantHandle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BossRuntimeBlueprintFunctionlibrary">();
	}
	static class UBossRuntimeBlueprintFunctionlibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBossRuntimeBlueprintFunctionlibrary>();
	}
};
static_assert(alignof(UBossRuntimeBlueprintFunctionlibrary) == 0x000008, "Wrong alignment on UBossRuntimeBlueprintFunctionlibrary");
static_assert(sizeof(UBossRuntimeBlueprintFunctionlibrary) == 0x000028, "Wrong size on UBossRuntimeBlueprintFunctionlibrary");

class UEnvQueryTest_GoalIsHostileTeam final : public UEnvQueryTest
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTest_GoalIsHostileTeam">();
	}
	static class UEnvQueryTest_GoalIsHostileTeam* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTest_GoalIsHostileTeam>();
	}
};
static_assert(alignof(UEnvQueryTest_GoalIsHostileTeam) == 0x000008, "Wrong alignment on UEnvQueryTest_GoalIsHostileTeam");
static_assert(sizeof(UEnvQueryTest_GoalIsHostileTeam) == 0x0001F8, "Wrong size on UEnvQueryTest_GoalIsHostileTeam");

class UFortBossInstanceVariantComponent final : public UFortCreativeItemVariantNotifierComponent
{
public:
	uint8                                         Pad_F8[0x50];

public:
	bool AddAbility(const struct FItemVariantHandle& VariantHandle, TSubclassOf<class UFortGameplayAbility> AbilityClass);
	bool AddAbilityAsync(const struct FItemVariantHandle& VariantHandle, const TSoftClassPtr<class UClass>& SoftAbilityClassReference, TDelegate<void(bool Succeeded, struct FItemVariantHandle& VariantHandle)> OnAbilityAdded);
	bool RemoveAbilityByVariantHandle(const struct FItemVariantHandle& VariantHandle);
	void UpdateNavAgent();

	bool GetAbilitySpecHandleForVariantHandle(struct FGameplayAbilitySpecHandle* OutAbilitySpecHandle, const struct FItemVariantHandle& VariantHandle) const;
	bool GetAbilityTagsForVariantHandle(struct FGameplayTagContainer* OutAbilityTags, const struct FItemVariantHandle& VariantHandle) const;
	TSubclassOf<class UFortCreativeItemTemplate> GetDefaultItemTemplateClassForVariant(const struct FItemVariantHandle& VariantHandle, const TSubclassOf<class UFortCreativeItemTemplate> TemplateClass) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBossInstanceVariantComponent">();
	}
	static class UFortBossInstanceVariantComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBossInstanceVariantComponent>();
	}
};
static_assert(alignof(UFortBossInstanceVariantComponent) == 0x000008, "Wrong alignment on UFortBossInstanceVariantComponent");
static_assert(sizeof(UFortBossInstanceVariantComponent) == 0x000148, "Wrong size on UFortBossInstanceVariantComponent");

class UFortBTDecorator_CompareBBEntriesArithmetically final : public UBTDecorator
{
public:
	EArithmeticKeyOperation                       Operator;
	uint8                                         Pad_69[0x7];
	struct FBlackboardKeySelector                 BlackboardKeyA;
	struct FBlackboardKeySelector                 BlackboardKeyB;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_CompareBBEntriesArithmetically">();
	}
	static class UFortBTDecorator_CompareBBEntriesArithmetically* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_CompareBBEntriesArithmetically>();
	}
};
static_assert(alignof(UFortBTDecorator_CompareBBEntriesArithmetically) == 0x000008, "Wrong alignment on UFortBTDecorator_CompareBBEntriesArithmetically");
static_assert(sizeof(UFortBTDecorator_CompareBBEntriesArithmetically) == 0x0000C0, "Wrong size on UFortBTDecorator_CompareBBEntriesArithmetically");
static_assert(offsetof(UFortBTDecorator_CompareBBEntriesArithmetically, Operator) == 0x000068, "Member 'UFortBTDecorator_CompareBBEntriesArithmetically::Operator' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_CompareBBEntriesArithmetically, BlackboardKeyA) == 0x000070, "Member 'UFortBTDecorator_CompareBBEntriesArithmetically::BlackboardKeyA' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_CompareBBEntriesArithmetically, BlackboardKeyB) == 0x000098, "Member 'UFortBTDecorator_CompareBBEntriesArithmetically::BlackboardKeyB' has a wrong offset!");

class UFortPawnComponent_DynamicDamageZones final : public UFortPawnComponent
{
public:
	TMulticastInlineDelegate<void(class AActor* DamagedActor, float Damage, float PreviousHealth, float CurrentHealth, class AController* InstigatedBy, class AActor* DamageCauser, class FName ZoneName, EFortDamageZone ZoneType)> OnDamageZoneDamaged;
	TMulticastInlineDelegate<void(class AActor* Actor, class FName ZoneName, EFortDamageZone ZoneType)> OnDamageZoneActivated;
	TMulticastInlineDelegate<void(class AActor* Actor, class FName ZoneName, EFortDamageZone ZoneType)> OnDamageZoneDeactivated;
	TMulticastInlineDelegate<void(class AActor* Actor, class FName ZoneName, EFortDamageZone ZoneType, float ThresholdPct, class AController* InstigatedBy)> OnDamageZoneThresholdReached;
	TArray<struct FPawnDamageZoneInfo>            ZoneList;

public:
	void ActivateAllDamageZones();
	void ActivateDamageZone(const class FName& DamageZoneName);
	void AddDamageZoneInfo(const struct FPawnDamageZoneInfo& Info);
	void DeactivateAllDamageZones();
	void DeactivateDamageZone(const class FName& DamageZoneName);
	void OnPawnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void SetDamageZoneType(const class FName& DamageZoneName, EFortDamageZone DamageZone);

	EFortDamageZone GetDamageZoneType(const struct FHitResult& InHitResult) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPawnComponent_DynamicDamageZones">();
	}
	static class UFortPawnComponent_DynamicDamageZones* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPawnComponent_DynamicDamageZones>();
	}
};
static_assert(alignof(UFortPawnComponent_DynamicDamageZones) == 0x000008, "Wrong alignment on UFortPawnComponent_DynamicDamageZones");
static_assert(sizeof(UFortPawnComponent_DynamicDamageZones) == 0x0000F8, "Wrong size on UFortPawnComponent_DynamicDamageZones");
static_assert(offsetof(UFortPawnComponent_DynamicDamageZones, OnDamageZoneDamaged) == 0x0000A8, "Member 'UFortPawnComponent_DynamicDamageZones::OnDamageZoneDamaged' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_DynamicDamageZones, OnDamageZoneActivated) == 0x0000B8, "Member 'UFortPawnComponent_DynamicDamageZones::OnDamageZoneActivated' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_DynamicDamageZones, OnDamageZoneDeactivated) == 0x0000C8, "Member 'UFortPawnComponent_DynamicDamageZones::OnDamageZoneDeactivated' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_DynamicDamageZones, OnDamageZoneThresholdReached) == 0x0000D8, "Member 'UFortPawnComponent_DynamicDamageZones::OnDamageZoneThresholdReached' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_DynamicDamageZones, ZoneList) == 0x0000E8, "Member 'UFortPawnComponent_DynamicDamageZones::ZoneList' has a wrong offset!");

}
