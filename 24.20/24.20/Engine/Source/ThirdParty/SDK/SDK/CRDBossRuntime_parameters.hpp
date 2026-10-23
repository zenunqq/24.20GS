#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CRDBossRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct BossRuntimeBlueprintFunctionlibrary_AddNewValueToBoolMap final
{
public:
	TDelegate<void(bool OldValue, bool NewValue)> OnOldValueFoundDelegate;
	uint8                                         Pad_C[0x4];
	TMap<struct FGameplayTag, bool>               InMap;
	struct FGameplayTag                           InKey;
	bool                                          NewValue;
	uint8                                         Pad_65[0x3];
};
static_assert(alignof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToBoolMap) == 0x000008, "Wrong alignment on BossRuntimeBlueprintFunctionlibrary_AddNewValueToBoolMap");
static_assert(sizeof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToBoolMap) == 0x000068, "Wrong size on BossRuntimeBlueprintFunctionlibrary_AddNewValueToBoolMap");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToBoolMap, OnOldValueFoundDelegate) == 0x000000, "Member 'BossRuntimeBlueprintFunctionlibrary_AddNewValueToBoolMap::OnOldValueFoundDelegate' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToBoolMap, InMap) == 0x000010, "Member 'BossRuntimeBlueprintFunctionlibrary_AddNewValueToBoolMap::InMap' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToBoolMap, InKey) == 0x000060, "Member 'BossRuntimeBlueprintFunctionlibrary_AddNewValueToBoolMap::InKey' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToBoolMap, NewValue) == 0x000064, "Member 'BossRuntimeBlueprintFunctionlibrary_AddNewValueToBoolMap::NewValue' has a wrong offset!");

struct BossRuntimeBlueprintFunctionlibrary_AddNewValueToFloatMap final
{
public:
	TDelegate<void(float OldValue, float NewValue)> OnOldValueFoundDelegate;
	uint8                                         Pad_C[0x4];
	TMap<struct FGameplayTag, double>             InMap;
	struct FGameplayTag                           InKey;
	float                                         NewValue;
};
static_assert(alignof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToFloatMap) == 0x000008, "Wrong alignment on BossRuntimeBlueprintFunctionlibrary_AddNewValueToFloatMap");
static_assert(sizeof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToFloatMap) == 0x000068, "Wrong size on BossRuntimeBlueprintFunctionlibrary_AddNewValueToFloatMap");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToFloatMap, OnOldValueFoundDelegate) == 0x000000, "Member 'BossRuntimeBlueprintFunctionlibrary_AddNewValueToFloatMap::OnOldValueFoundDelegate' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToFloatMap, InMap) == 0x000010, "Member 'BossRuntimeBlueprintFunctionlibrary_AddNewValueToFloatMap::InMap' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToFloatMap, InKey) == 0x000060, "Member 'BossRuntimeBlueprintFunctionlibrary_AddNewValueToFloatMap::InKey' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToFloatMap, NewValue) == 0x000064, "Member 'BossRuntimeBlueprintFunctionlibrary_AddNewValueToFloatMap::NewValue' has a wrong offset!");

struct BossRuntimeBlueprintFunctionlibrary_AddNewValueToIntMap final
{
public:
	TDelegate<void(int32 OldValue, int32 NewValue)> OnOldValueFoundDelegate;
	uint8                                         Pad_C[0x4];
	TMap<struct FGameplayTag, int32>              InMap;
	struct FGameplayTag                           InKey;
	int32                                         NewValue;
};
static_assert(alignof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToIntMap) == 0x000008, "Wrong alignment on BossRuntimeBlueprintFunctionlibrary_AddNewValueToIntMap");
static_assert(sizeof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToIntMap) == 0x000068, "Wrong size on BossRuntimeBlueprintFunctionlibrary_AddNewValueToIntMap");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToIntMap, OnOldValueFoundDelegate) == 0x000000, "Member 'BossRuntimeBlueprintFunctionlibrary_AddNewValueToIntMap::OnOldValueFoundDelegate' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToIntMap, InMap) == 0x000010, "Member 'BossRuntimeBlueprintFunctionlibrary_AddNewValueToIntMap::InMap' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToIntMap, InKey) == 0x000060, "Member 'BossRuntimeBlueprintFunctionlibrary_AddNewValueToIntMap::InKey' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_AddNewValueToIntMap, NewValue) == 0x000064, "Member 'BossRuntimeBlueprintFunctionlibrary_AddNewValueToIntMap::NewValue' has a wrong offset!");

struct BossRuntimeBlueprintFunctionlibrary_DoAbilityActivationChecksPass final
{
public:
	const class AFortPawn*                        OwningPawn;
	const class UFortGameplayAbility*             FortGameplayAbility;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(BossRuntimeBlueprintFunctionlibrary_DoAbilityActivationChecksPass) == 0x000008, "Wrong alignment on BossRuntimeBlueprintFunctionlibrary_DoAbilityActivationChecksPass");
static_assert(sizeof(BossRuntimeBlueprintFunctionlibrary_DoAbilityActivationChecksPass) == 0x000018, "Wrong size on BossRuntimeBlueprintFunctionlibrary_DoAbilityActivationChecksPass");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_DoAbilityActivationChecksPass, OwningPawn) == 0x000000, "Member 'BossRuntimeBlueprintFunctionlibrary_DoAbilityActivationChecksPass::OwningPawn' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_DoAbilityActivationChecksPass, FortGameplayAbility) == 0x000008, "Member 'BossRuntimeBlueprintFunctionlibrary_DoAbilityActivationChecksPass::FortGameplayAbility' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_DoAbilityActivationChecksPass, ReturnValue) == 0x000010, "Member 'BossRuntimeBlueprintFunctionlibrary_DoAbilityActivationChecksPass::ReturnValue' has a wrong offset!");

struct BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass final
{
public:
	const class AFortPawn*                        OwningPawn;
	const class UFortGameplayAbility*             FortGameplayAbility;
	const class AActor*                           TargetActor;
	struct FGameplayTagContainer                  MinRange;
	struct FGameplayTagContainer                  MaxRange;
	bool                                          ReturnValue;
	uint8                                         Pad_59[0x7];
};
static_assert(alignof(BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass) == 0x000008, "Wrong alignment on BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass");
static_assert(sizeof(BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass) == 0x000060, "Wrong size on BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass, OwningPawn) == 0x000000, "Member 'BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass::OwningPawn' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass, FortGameplayAbility) == 0x000008, "Member 'BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass::FortGameplayAbility' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass, TargetActor) == 0x000010, "Member 'BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass::TargetActor' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass, MinRange) == 0x000018, "Member 'BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass::MinRange' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass, MaxRange) == 0x000038, "Member 'BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass::MaxRange' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass, ReturnValue) == 0x000058, "Member 'BossRuntimeBlueprintFunctionlibrary_DoAbilityDistanceChecksPass::ReturnValue' has a wrong offset!");

struct BossRuntimeBlueprintFunctionlibrary_DoAbilityRotationChecksPass final
{
public:
	const class AFortPawn*                        OwningPawn;
	const class UFortGameplayAbility*             FortGameplayAbility;
	const class AActor*                           TargetActor;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(BossRuntimeBlueprintFunctionlibrary_DoAbilityRotationChecksPass) == 0x000008, "Wrong alignment on BossRuntimeBlueprintFunctionlibrary_DoAbilityRotationChecksPass");
static_assert(sizeof(BossRuntimeBlueprintFunctionlibrary_DoAbilityRotationChecksPass) == 0x000020, "Wrong size on BossRuntimeBlueprintFunctionlibrary_DoAbilityRotationChecksPass");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_DoAbilityRotationChecksPass, OwningPawn) == 0x000000, "Member 'BossRuntimeBlueprintFunctionlibrary_DoAbilityRotationChecksPass::OwningPawn' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_DoAbilityRotationChecksPass, FortGameplayAbility) == 0x000008, "Member 'BossRuntimeBlueprintFunctionlibrary_DoAbilityRotationChecksPass::FortGameplayAbility' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_DoAbilityRotationChecksPass, TargetActor) == 0x000010, "Member 'BossRuntimeBlueprintFunctionlibrary_DoAbilityRotationChecksPass::TargetActor' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_DoAbilityRotationChecksPass, ReturnValue) == 0x000018, "Member 'BossRuntimeBlueprintFunctionlibrary_DoAbilityRotationChecksPass::ReturnValue' has a wrong offset!");

struct BossRuntimeBlueprintFunctionlibrary_GetActorNavAgentLocation final
{
public:
	class AActor*                                 InActor;
	struct FVector                                OutVector;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(BossRuntimeBlueprintFunctionlibrary_GetActorNavAgentLocation) == 0x000008, "Wrong alignment on BossRuntimeBlueprintFunctionlibrary_GetActorNavAgentLocation");
static_assert(sizeof(BossRuntimeBlueprintFunctionlibrary_GetActorNavAgentLocation) == 0x000028, "Wrong size on BossRuntimeBlueprintFunctionlibrary_GetActorNavAgentLocation");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_GetActorNavAgentLocation, InActor) == 0x000000, "Member 'BossRuntimeBlueprintFunctionlibrary_GetActorNavAgentLocation::InActor' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_GetActorNavAgentLocation, OutVector) == 0x000008, "Member 'BossRuntimeBlueprintFunctionlibrary_GetActorNavAgentLocation::OutVector' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_GetActorNavAgentLocation, ReturnValue) == 0x000020, "Member 'BossRuntimeBlueprintFunctionlibrary_GetActorNavAgentLocation::ReturnValue' has a wrong offset!");

struct BossRuntimeBlueprintFunctionlibrary_GetBossAbilityRegistryScope final
{
public:
	class UFortGameplayAbility*                   InAbility;
	TArray<class FName>                           ReturnValue;
};
static_assert(alignof(BossRuntimeBlueprintFunctionlibrary_GetBossAbilityRegistryScope) == 0x000008, "Wrong alignment on BossRuntimeBlueprintFunctionlibrary_GetBossAbilityRegistryScope");
static_assert(sizeof(BossRuntimeBlueprintFunctionlibrary_GetBossAbilityRegistryScope) == 0x000018, "Wrong size on BossRuntimeBlueprintFunctionlibrary_GetBossAbilityRegistryScope");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_GetBossAbilityRegistryScope, InAbility) == 0x000000, "Member 'BossRuntimeBlueprintFunctionlibrary_GetBossAbilityRegistryScope::InAbility' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_GetBossAbilityRegistryScope, ReturnValue) == 0x000008, "Member 'BossRuntimeBlueprintFunctionlibrary_GetBossAbilityRegistryScope::ReturnValue' has a wrong offset!");

struct BossRuntimeBlueprintFunctionlibrary_GetExportPath final
{
public:
	class UObject*                                InObject;
	class FString                                 ReturnValue;
};
static_assert(alignof(BossRuntimeBlueprintFunctionlibrary_GetExportPath) == 0x000008, "Wrong alignment on BossRuntimeBlueprintFunctionlibrary_GetExportPath");
static_assert(sizeof(BossRuntimeBlueprintFunctionlibrary_GetExportPath) == 0x000018, "Wrong size on BossRuntimeBlueprintFunctionlibrary_GetExportPath");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_GetExportPath, InObject) == 0x000000, "Member 'BossRuntimeBlueprintFunctionlibrary_GetExportPath::InObject' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_GetExportPath, ReturnValue) == 0x000008, "Member 'BossRuntimeBlueprintFunctionlibrary_GetExportPath::ReturnValue' has a wrong offset!");

struct BossRuntimeBlueprintFunctionlibrary_MakeFortItemEntryFromVariantHandle final
{
public:
	struct FItemVariantHandle                     InVariantHandle;
	struct FFortItemEntry                         ReturnValue;
};
static_assert(alignof(BossRuntimeBlueprintFunctionlibrary_MakeFortItemEntryFromVariantHandle) == 0x000008, "Wrong alignment on BossRuntimeBlueprintFunctionlibrary_MakeFortItemEntryFromVariantHandle");
static_assert(sizeof(BossRuntimeBlueprintFunctionlibrary_MakeFortItemEntryFromVariantHandle) == 0x0001B8, "Wrong size on BossRuntimeBlueprintFunctionlibrary_MakeFortItemEntryFromVariantHandle");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_MakeFortItemEntryFromVariantHandle, InVariantHandle) == 0x000000, "Member 'BossRuntimeBlueprintFunctionlibrary_MakeFortItemEntryFromVariantHandle::InVariantHandle' has a wrong offset!");
static_assert(offsetof(BossRuntimeBlueprintFunctionlibrary_MakeFortItemEntryFromVariantHandle, ReturnValue) == 0x000018, "Member 'BossRuntimeBlueprintFunctionlibrary_MakeFortItemEntryFromVariantHandle::ReturnValue' has a wrong offset!");

struct FortBossInstanceVariantComponent_AddAbility final
{
public:
	struct FItemVariantHandle                     VariantHandle;
	TSubclassOf<class UFortGameplayAbility>       AbilityClass;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FortBossInstanceVariantComponent_AddAbility) == 0x000008, "Wrong alignment on FortBossInstanceVariantComponent_AddAbility");
static_assert(sizeof(FortBossInstanceVariantComponent_AddAbility) == 0x000028, "Wrong size on FortBossInstanceVariantComponent_AddAbility");
static_assert(offsetof(FortBossInstanceVariantComponent_AddAbility, VariantHandle) == 0x000000, "Member 'FortBossInstanceVariantComponent_AddAbility::VariantHandle' has a wrong offset!");
static_assert(offsetof(FortBossInstanceVariantComponent_AddAbility, AbilityClass) == 0x000018, "Member 'FortBossInstanceVariantComponent_AddAbility::AbilityClass' has a wrong offset!");
static_assert(offsetof(FortBossInstanceVariantComponent_AddAbility, ReturnValue) == 0x000020, "Member 'FortBossInstanceVariantComponent_AddAbility::ReturnValue' has a wrong offset!");

struct FortBossInstanceVariantComponent_AddAbilityAsync final
{
public:
	struct FItemVariantHandle                     VariantHandle;
	TSoftClassPtr<class UClass>                   SoftAbilityClassReference;
	TDelegate<void(bool Succeeded, struct FItemVariantHandle& VariantHandle)> OnAbilityAdded;
	bool                                          ReturnValue;
	uint8                                         Pad_4D[0x3];
};
static_assert(alignof(FortBossInstanceVariantComponent_AddAbilityAsync) == 0x000008, "Wrong alignment on FortBossInstanceVariantComponent_AddAbilityAsync");
static_assert(sizeof(FortBossInstanceVariantComponent_AddAbilityAsync) == 0x000050, "Wrong size on FortBossInstanceVariantComponent_AddAbilityAsync");
static_assert(offsetof(FortBossInstanceVariantComponent_AddAbilityAsync, VariantHandle) == 0x000000, "Member 'FortBossInstanceVariantComponent_AddAbilityAsync::VariantHandle' has a wrong offset!");
static_assert(offsetof(FortBossInstanceVariantComponent_AddAbilityAsync, SoftAbilityClassReference) == 0x000018, "Member 'FortBossInstanceVariantComponent_AddAbilityAsync::SoftAbilityClassReference' has a wrong offset!");
static_assert(offsetof(FortBossInstanceVariantComponent_AddAbilityAsync, OnAbilityAdded) == 0x000040, "Member 'FortBossInstanceVariantComponent_AddAbilityAsync::OnAbilityAdded' has a wrong offset!");
static_assert(offsetof(FortBossInstanceVariantComponent_AddAbilityAsync, ReturnValue) == 0x00004C, "Member 'FortBossInstanceVariantComponent_AddAbilityAsync::ReturnValue' has a wrong offset!");

struct FortBossInstanceVariantComponent_RemoveAbilityByVariantHandle final
{
public:
	struct FItemVariantHandle                     VariantHandle;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FortBossInstanceVariantComponent_RemoveAbilityByVariantHandle) == 0x000008, "Wrong alignment on FortBossInstanceVariantComponent_RemoveAbilityByVariantHandle");
static_assert(sizeof(FortBossInstanceVariantComponent_RemoveAbilityByVariantHandle) == 0x000020, "Wrong size on FortBossInstanceVariantComponent_RemoveAbilityByVariantHandle");
static_assert(offsetof(FortBossInstanceVariantComponent_RemoveAbilityByVariantHandle, VariantHandle) == 0x000000, "Member 'FortBossInstanceVariantComponent_RemoveAbilityByVariantHandle::VariantHandle' has a wrong offset!");
static_assert(offsetof(FortBossInstanceVariantComponent_RemoveAbilityByVariantHandle, ReturnValue) == 0x000018, "Member 'FortBossInstanceVariantComponent_RemoveAbilityByVariantHandle::ReturnValue' has a wrong offset!");

struct FortBossInstanceVariantComponent_GetAbilitySpecHandleForVariantHandle final
{
public:
	struct FGameplayAbilitySpecHandle             OutAbilitySpecHandle;
	uint8                                         Pad_4[0x4];
	struct FItemVariantHandle                     VariantHandle;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FortBossInstanceVariantComponent_GetAbilitySpecHandleForVariantHandle) == 0x000008, "Wrong alignment on FortBossInstanceVariantComponent_GetAbilitySpecHandleForVariantHandle");
static_assert(sizeof(FortBossInstanceVariantComponent_GetAbilitySpecHandleForVariantHandle) == 0x000028, "Wrong size on FortBossInstanceVariantComponent_GetAbilitySpecHandleForVariantHandle");
static_assert(offsetof(FortBossInstanceVariantComponent_GetAbilitySpecHandleForVariantHandle, OutAbilitySpecHandle) == 0x000000, "Member 'FortBossInstanceVariantComponent_GetAbilitySpecHandleForVariantHandle::OutAbilitySpecHandle' has a wrong offset!");
static_assert(offsetof(FortBossInstanceVariantComponent_GetAbilitySpecHandleForVariantHandle, VariantHandle) == 0x000008, "Member 'FortBossInstanceVariantComponent_GetAbilitySpecHandleForVariantHandle::VariantHandle' has a wrong offset!");
static_assert(offsetof(FortBossInstanceVariantComponent_GetAbilitySpecHandleForVariantHandle, ReturnValue) == 0x000020, "Member 'FortBossInstanceVariantComponent_GetAbilitySpecHandleForVariantHandle::ReturnValue' has a wrong offset!");

struct FortBossInstanceVariantComponent_GetAbilityTagsForVariantHandle final
{
public:
	struct FGameplayTagContainer                  OutAbilityTags;
	struct FItemVariantHandle                     VariantHandle;
	bool                                          ReturnValue;
	uint8                                         Pad_39[0x7];
};
static_assert(alignof(FortBossInstanceVariantComponent_GetAbilityTagsForVariantHandle) == 0x000008, "Wrong alignment on FortBossInstanceVariantComponent_GetAbilityTagsForVariantHandle");
static_assert(sizeof(FortBossInstanceVariantComponent_GetAbilityTagsForVariantHandle) == 0x000040, "Wrong size on FortBossInstanceVariantComponent_GetAbilityTagsForVariantHandle");
static_assert(offsetof(FortBossInstanceVariantComponent_GetAbilityTagsForVariantHandle, OutAbilityTags) == 0x000000, "Member 'FortBossInstanceVariantComponent_GetAbilityTagsForVariantHandle::OutAbilityTags' has a wrong offset!");
static_assert(offsetof(FortBossInstanceVariantComponent_GetAbilityTagsForVariantHandle, VariantHandle) == 0x000020, "Member 'FortBossInstanceVariantComponent_GetAbilityTagsForVariantHandle::VariantHandle' has a wrong offset!");
static_assert(offsetof(FortBossInstanceVariantComponent_GetAbilityTagsForVariantHandle, ReturnValue) == 0x000038, "Member 'FortBossInstanceVariantComponent_GetAbilityTagsForVariantHandle::ReturnValue' has a wrong offset!");

struct FortBossInstanceVariantComponent_GetDefaultItemTemplateClassForVariant final
{
public:
	struct FItemVariantHandle                     VariantHandle;
	TSubclassOf<class UFortCreativeItemTemplate>  TemplateClass;
	TSubclassOf<class UFortCreativeItemTemplate>  ReturnValue;
};
static_assert(alignof(FortBossInstanceVariantComponent_GetDefaultItemTemplateClassForVariant) == 0x000008, "Wrong alignment on FortBossInstanceVariantComponent_GetDefaultItemTemplateClassForVariant");
static_assert(sizeof(FortBossInstanceVariantComponent_GetDefaultItemTemplateClassForVariant) == 0x000028, "Wrong size on FortBossInstanceVariantComponent_GetDefaultItemTemplateClassForVariant");
static_assert(offsetof(FortBossInstanceVariantComponent_GetDefaultItemTemplateClassForVariant, VariantHandle) == 0x000000, "Member 'FortBossInstanceVariantComponent_GetDefaultItemTemplateClassForVariant::VariantHandle' has a wrong offset!");
static_assert(offsetof(FortBossInstanceVariantComponent_GetDefaultItemTemplateClassForVariant, TemplateClass) == 0x000018, "Member 'FortBossInstanceVariantComponent_GetDefaultItemTemplateClassForVariant::TemplateClass' has a wrong offset!");
static_assert(offsetof(FortBossInstanceVariantComponent_GetDefaultItemTemplateClassForVariant, ReturnValue) == 0x000020, "Member 'FortBossInstanceVariantComponent_GetDefaultItemTemplateClassForVariant::ReturnValue' has a wrong offset!");

struct FortPawnComponent_DynamicDamageZones_ActivateDamageZone final
{
public:
	class FName                                   DamageZoneName;
};
static_assert(alignof(FortPawnComponent_DynamicDamageZones_ActivateDamageZone) == 0x000004, "Wrong alignment on FortPawnComponent_DynamicDamageZones_ActivateDamageZone");
static_assert(sizeof(FortPawnComponent_DynamicDamageZones_ActivateDamageZone) == 0x000004, "Wrong size on FortPawnComponent_DynamicDamageZones_ActivateDamageZone");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_ActivateDamageZone, DamageZoneName) == 0x000000, "Member 'FortPawnComponent_DynamicDamageZones_ActivateDamageZone::DamageZoneName' has a wrong offset!");

struct FortPawnComponent_DynamicDamageZones_AddDamageZoneInfo final
{
public:
	struct FPawnDamageZoneInfo                    Info;
};
static_assert(alignof(FortPawnComponent_DynamicDamageZones_AddDamageZoneInfo) == 0x000008, "Wrong alignment on FortPawnComponent_DynamicDamageZones_AddDamageZoneInfo");
static_assert(sizeof(FortPawnComponent_DynamicDamageZones_AddDamageZoneInfo) == 0x000048, "Wrong size on FortPawnComponent_DynamicDamageZones_AddDamageZoneInfo");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_AddDamageZoneInfo, Info) == 0x000000, "Member 'FortPawnComponent_DynamicDamageZones_AddDamageZoneInfo::Info' has a wrong offset!");

struct FortPawnComponent_DynamicDamageZones_DeactivateDamageZone final
{
public:
	class FName                                   DamageZoneName;
};
static_assert(alignof(FortPawnComponent_DynamicDamageZones_DeactivateDamageZone) == 0x000004, "Wrong alignment on FortPawnComponent_DynamicDamageZones_DeactivateDamageZone");
static_assert(sizeof(FortPawnComponent_DynamicDamageZones_DeactivateDamageZone) == 0x000004, "Wrong size on FortPawnComponent_DynamicDamageZones_DeactivateDamageZone");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_DeactivateDamageZone, DamageZoneName) == 0x000000, "Member 'FortPawnComponent_DynamicDamageZones_DeactivateDamageZone::DamageZoneName' has a wrong offset!");

struct FortPawnComponent_DynamicDamageZones_OnPawnDamaged final
{
public:
	class AActor*                                 DamagedActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    FHitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(FortPawnComponent_DynamicDamageZones_OnPawnDamaged) == 0x000008, "Wrong alignment on FortPawnComponent_DynamicDamageZones_OnPawnDamaged");
static_assert(sizeof(FortPawnComponent_DynamicDamageZones_OnPawnDamaged) == 0x000060, "Wrong size on FortPawnComponent_DynamicDamageZones_OnPawnDamaged");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_OnPawnDamaged, DamagedActor) == 0x000000, "Member 'FortPawnComponent_DynamicDamageZones_OnPawnDamaged::DamagedActor' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_OnPawnDamaged, Damage) == 0x000008, "Member 'FortPawnComponent_DynamicDamageZones_OnPawnDamaged::Damage' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_OnPawnDamaged, InstigatedBy) == 0x000010, "Member 'FortPawnComponent_DynamicDamageZones_OnPawnDamaged::InstigatedBy' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_OnPawnDamaged, DamageCauser) == 0x000018, "Member 'FortPawnComponent_DynamicDamageZones_OnPawnDamaged::DamageCauser' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_OnPawnDamaged, HitLocation) == 0x000020, "Member 'FortPawnComponent_DynamicDamageZones_OnPawnDamaged::HitLocation' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_OnPawnDamaged, FHitComponent) == 0x000038, "Member 'FortPawnComponent_DynamicDamageZones_OnPawnDamaged::FHitComponent' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_OnPawnDamaged, BoneName) == 0x000040, "Member 'FortPawnComponent_DynamicDamageZones_OnPawnDamaged::BoneName' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_OnPawnDamaged, Momentum) == 0x000048, "Member 'FortPawnComponent_DynamicDamageZones_OnPawnDamaged::Momentum' has a wrong offset!");

struct FortPawnComponent_DynamicDamageZones_SetDamageZoneType final
{
public:
	class FName                                   DamageZoneName;
	EFortDamageZone                               DamageZone;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FortPawnComponent_DynamicDamageZones_SetDamageZoneType) == 0x000004, "Wrong alignment on FortPawnComponent_DynamicDamageZones_SetDamageZoneType");
static_assert(sizeof(FortPawnComponent_DynamicDamageZones_SetDamageZoneType) == 0x000008, "Wrong size on FortPawnComponent_DynamicDamageZones_SetDamageZoneType");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_SetDamageZoneType, DamageZoneName) == 0x000000, "Member 'FortPawnComponent_DynamicDamageZones_SetDamageZoneType::DamageZoneName' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_SetDamageZoneType, DamageZone) == 0x000004, "Member 'FortPawnComponent_DynamicDamageZones_SetDamageZoneType::DamageZone' has a wrong offset!");

struct FortPawnComponent_DynamicDamageZones_GetDamageZoneType final
{
public:
	struct FHitResult                             InHitResult;
	EFortDamageZone                               ReturnValue;
	uint8                                         Pad_E1[0x7];
};
static_assert(alignof(FortPawnComponent_DynamicDamageZones_GetDamageZoneType) == 0x000008, "Wrong alignment on FortPawnComponent_DynamicDamageZones_GetDamageZoneType");
static_assert(sizeof(FortPawnComponent_DynamicDamageZones_GetDamageZoneType) == 0x0000E8, "Wrong size on FortPawnComponent_DynamicDamageZones_GetDamageZoneType");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_GetDamageZoneType, InHitResult) == 0x000000, "Member 'FortPawnComponent_DynamicDamageZones_GetDamageZoneType::InHitResult' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_DynamicDamageZones_GetDamageZoneType, ReturnValue) == 0x0000E0, "Member 'FortPawnComponent_DynamicDamageZones_GetDamageZoneType::ReturnValue' has a wrong offset!");

}
