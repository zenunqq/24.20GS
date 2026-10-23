#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteAI_structs.hpp"
#include "SmartObjectsModule_structs.hpp"
#include "NavigationSystem_classes.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "ModularGameplay_classes.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UFortQueryItemType_Goal final : public UEnvQueryItemType_ActorBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryItemType_Goal">();
	}
	static class UFortQueryItemType_Goal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryItemType_Goal>();
	}
};
static_assert(alignof(UFortQueryItemType_Goal) == 0x000008, "Wrong alignment on UFortQueryItemType_Goal");
static_assert(sizeof(UFortQueryItemType_Goal) == 0x000030, "Wrong size on UFortQueryItemType_Goal");

class UFortAIInjectedBehaviorComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIInjectedBehaviorComponent">();
	}
	static class UFortAIInjectedBehaviorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIInjectedBehaviorComponent>();
	}
};
static_assert(alignof(UFortAIInjectedBehaviorComponent) == 0x000008, "Wrong alignment on UFortAIInjectedBehaviorComponent");
static_assert(sizeof(UFortAIInjectedBehaviorComponent) == 0x0000F0, "Wrong size on UFortAIInjectedBehaviorComponent");

class UFortNavLinkBlockerComponent final : public UBoxComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavLinkBlockerComponent">();
	}
	static class UFortNavLinkBlockerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavLinkBlockerComponent>();
	}
};
static_assert(alignof(UFortNavLinkBlockerComponent) == 0x000010, "Wrong alignment on UFortNavLinkBlockerComponent");
static_assert(sizeof(UFortNavLinkBlockerComponent) == 0x0005B0, "Wrong size on UFortNavLinkBlockerComponent");

class UFortAthenaAILODSettings_FortWeaponRanged final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TArray<TSubclassOf<class AFortWeaponRanged>>  SystemClasses;
	struct FFortAILODSetting_FortWeaponRanged     BelowLowerLODSettings;
	struct FFortAILODSetting_FortWeaponRanged     LowerLODSettings;
	struct FFortAILODSetting_FortWeaponRanged     AboveLowerLODSettings;
	struct FFortAILODSetting_FortWeaponRanged     BelowNormalLODSettings;
	struct FFortAILODSetting_FortWeaponRanged     NormalLODSettings;
	struct FFortAILODSetting_FortWeaponRanged     AboveNormalLODSettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAILODSettings_FortWeaponRanged">();
	}
	static class UFortAthenaAILODSettings_FortWeaponRanged* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAILODSettings_FortWeaponRanged>();
	}
};
static_assert(alignof(UFortAthenaAILODSettings_FortWeaponRanged) == 0x000008, "Wrong alignment on UFortAthenaAILODSettings_FortWeaponRanged");
static_assert(sizeof(UFortAthenaAILODSettings_FortWeaponRanged) == 0x0002B0, "Wrong size on UFortAthenaAILODSettings_FortWeaponRanged");
static_assert(offsetof(UFortAthenaAILODSettings_FortWeaponRanged, SystemClasses) == 0x000030, "Member 'UFortAthenaAILODSettings_FortWeaponRanged::SystemClasses' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_FortWeaponRanged, BelowLowerLODSettings) == 0x000040, "Member 'UFortAthenaAILODSettings_FortWeaponRanged::BelowLowerLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_FortWeaponRanged, LowerLODSettings) == 0x0000A8, "Member 'UFortAthenaAILODSettings_FortWeaponRanged::LowerLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_FortWeaponRanged, AboveLowerLODSettings) == 0x000110, "Member 'UFortAthenaAILODSettings_FortWeaponRanged::AboveLowerLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_FortWeaponRanged, BelowNormalLODSettings) == 0x000178, "Member 'UFortAthenaAILODSettings_FortWeaponRanged::BelowNormalLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_FortWeaponRanged, NormalLODSettings) == 0x0001E0, "Member 'UFortAthenaAILODSettings_FortWeaponRanged::NormalLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_FortWeaponRanged, AboveNormalLODSettings) == 0x000248, "Member 'UFortAthenaAILODSettings_FortWeaponRanged::AboveNormalLODSettings' has a wrong offset!");

class UFortAITask_Move : public UAITask_MoveTo
{
public:
	struct FFortMoveConfig                        MoveConfig;
	uint8                                         Pad_150[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAITask_Move">();
	}
	static class UFortAITask_Move* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAITask_Move>();
	}
};
static_assert(alignof(UFortAITask_Move) == 0x000008, "Wrong alignment on UFortAITask_Move");
static_assert(sizeof(UFortAITask_Move) == 0x000160, "Wrong size on UFortAITask_Move");
static_assert(offsetof(UFortAITask_Move, MoveConfig) == 0x000118, "Member 'UFortAITask_Move::MoveConfig' has a wrong offset!");

class UBuildingActorHotSpotConfig final : public UDataAsset
{
public:
	struct FBuildingActorHotSpotDirection         DirectionSetup[0x6];
	struct FBuildingActorHotSpotDirection         DefaultSetup;
	class UAIHotSpotConfig*                       ExtraTypeConfig;
	uint8                                         bHasDirectionalSetup : 1;
	uint8                                         Pad_151[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BuildingActorHotSpotConfig">();
	}
	static class UBuildingActorHotSpotConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuildingActorHotSpotConfig>();
	}
};
static_assert(alignof(UBuildingActorHotSpotConfig) == 0x000008, "Wrong alignment on UBuildingActorHotSpotConfig");
static_assert(sizeof(UBuildingActorHotSpotConfig) == 0x000158, "Wrong size on UBuildingActorHotSpotConfig");
static_assert(offsetof(UBuildingActorHotSpotConfig, DirectionSetup) == 0x000030, "Member 'UBuildingActorHotSpotConfig::DirectionSetup' has a wrong offset!");
static_assert(offsetof(UBuildingActorHotSpotConfig, DefaultSetup) == 0x000120, "Member 'UBuildingActorHotSpotConfig::DefaultSetup' has a wrong offset!");
static_assert(offsetof(UBuildingActorHotSpotConfig, ExtraTypeConfig) == 0x000148, "Member 'UBuildingActorHotSpotConfig::ExtraTypeConfig' has a wrong offset!");

class UFortInjectedBehavior final : public UObject
{
public:
	TSubclassOf<class UFortAthenaAIEvaluator>     AIEvaluator;
	float                                         Interval;
	float                                         RandomDeviation;
	class UBehaviorTree*                          InjectedBehaviorTree;
	uint32                                        Priority;
	uint8                                         Pad_44[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortInjectedBehavior">();
	}
	static class UFortInjectedBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortInjectedBehavior>();
	}
};
static_assert(alignof(UFortInjectedBehavior) == 0x000008, "Wrong alignment on UFortInjectedBehavior");
static_assert(sizeof(UFortInjectedBehavior) == 0x000048, "Wrong size on UFortInjectedBehavior");
static_assert(offsetof(UFortInjectedBehavior, AIEvaluator) == 0x000028, "Member 'UFortInjectedBehavior::AIEvaluator' has a wrong offset!");
static_assert(offsetof(UFortInjectedBehavior, Interval) == 0x000030, "Member 'UFortInjectedBehavior::Interval' has a wrong offset!");
static_assert(offsetof(UFortInjectedBehavior, RandomDeviation) == 0x000034, "Member 'UFortInjectedBehavior::RandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortInjectedBehavior, InjectedBehaviorTree) == 0x000038, "Member 'UFortInjectedBehavior::InjectedBehaviorTree' has a wrong offset!");
static_assert(offsetof(UFortInjectedBehavior, Priority) == 0x000040, "Member 'UFortInjectedBehavior::Priority' has a wrong offset!");

class UFortNavModifierComponent : public UNavModifierComponent
{
public:
	float                                         LowSpeedSquareThreshold;
	float                                         LowSpeedSquareDistanceThreshold;
	float                                         LowSpeedRotationThreshold;
	float                                         LowSpeedScaleThreshold;
	uint8                                         bAutomaticNavBoundComputation : 1;
	uint8                                         bForceFailSafeExtent : 1;
	uint8                                         Pad_1A1[0x3];
	float                                         ExtrapolationMultiplierForFailsafeExtent;
	TArray<TSubclassOf<class ANavigationData>>    DisableForNavmeshClasses;
	class UPrimitiveComponent*                    PrimCompAffectingNavMesh;
	uint8                                         Pad_1C0[0x70];

public:
	void SetComponentAffectingNavMesh(class UPrimitiveComponent* InComponentAffectingNavMesh);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavModifierComponent">();
	}
	static class UFortNavModifierComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavModifierComponent>();
	}
};
static_assert(alignof(UFortNavModifierComponent) == 0x000010, "Wrong alignment on UFortNavModifierComponent");
static_assert(sizeof(UFortNavModifierComponent) == 0x000230, "Wrong size on UFortNavModifierComponent");
static_assert(offsetof(UFortNavModifierComponent, LowSpeedSquareThreshold) == 0x000190, "Member 'UFortNavModifierComponent::LowSpeedSquareThreshold' has a wrong offset!");
static_assert(offsetof(UFortNavModifierComponent, LowSpeedSquareDistanceThreshold) == 0x000194, "Member 'UFortNavModifierComponent::LowSpeedSquareDistanceThreshold' has a wrong offset!");
static_assert(offsetof(UFortNavModifierComponent, LowSpeedRotationThreshold) == 0x000198, "Member 'UFortNavModifierComponent::LowSpeedRotationThreshold' has a wrong offset!");
static_assert(offsetof(UFortNavModifierComponent, LowSpeedScaleThreshold) == 0x00019C, "Member 'UFortNavModifierComponent::LowSpeedScaleThreshold' has a wrong offset!");
static_assert(offsetof(UFortNavModifierComponent, ExtrapolationMultiplierForFailsafeExtent) == 0x0001A4, "Member 'UFortNavModifierComponent::ExtrapolationMultiplierForFailsafeExtent' has a wrong offset!");
static_assert(offsetof(UFortNavModifierComponent, DisableForNavmeshClasses) == 0x0001A8, "Member 'UFortNavModifierComponent::DisableForNavmeshClasses' has a wrong offset!");
static_assert(offsetof(UFortNavModifierComponent, PrimCompAffectingNavMesh) == 0x0001B8, "Member 'UFortNavModifierComponent::PrimCompAffectingNavMesh' has a wrong offset!");

class UFortMetaNavArea : public UNavAreaMeta
{
public:
	TArray<struct FNavAgentData>                  AgentData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMetaNavArea">();
	}
	static class UFortMetaNavArea* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMetaNavArea>();
	}
};
static_assert(alignof(UFortMetaNavArea) == 0x000008, "Wrong alignment on UFortMetaNavArea");
static_assert(sizeof(UFortMetaNavArea) == 0x000058, "Wrong size on UFortMetaNavArea");
static_assert(offsetof(UFortMetaNavArea, AgentData) == 0x000048, "Member 'UFortMetaNavArea::AgentData' has a wrong offset!");

class UFortAthenaAIBotSkillSet : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotSkillSet">();
	}
	static class UFortAthenaAIBotSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotSkillSet");
static_assert(sizeof(UFortAthenaAIBotSkillSet) == 0x000030, "Wrong size on UFortAthenaAIBotSkillSet");

class UFortAthenaAIBotPropagateAwarenessSkillSet final : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                         PropagationMaxDistance;
	struct FScalableFloat                         FOV;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotPropagateAwarenessSkillSet">();
	}
	static class UFortAthenaAIBotPropagateAwarenessSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotPropagateAwarenessSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotPropagateAwarenessSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotPropagateAwarenessSkillSet");
static_assert(sizeof(UFortAthenaAIBotPropagateAwarenessSkillSet) == 0x000080, "Wrong size on UFortAthenaAIBotPropagateAwarenessSkillSet");
static_assert(offsetof(UFortAthenaAIBotPropagateAwarenessSkillSet, PropagationMaxDistance) == 0x000030, "Member 'UFortAthenaAIBotPropagateAwarenessSkillSet::PropagationMaxDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPropagateAwarenessSkillSet, FOV) == 0x000058, "Member 'UFortAthenaAIBotPropagateAwarenessSkillSet::FOV' has a wrong offset!");

class UFortPhysicsObjectNavigationComponent : public UFortNavModifierComponent
{
public:
	class UFortPhysicsObjectComponent*            PhysicsObjectComponent;
	uint8                                         Pad_238[0x8];

public:
	void OnSleepStateChanged(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPhysicsObjectNavigationComponent">();
	}
	static class UFortPhysicsObjectNavigationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPhysicsObjectNavigationComponent>();
	}
};
static_assert(alignof(UFortPhysicsObjectNavigationComponent) == 0x000010, "Wrong alignment on UFortPhysicsObjectNavigationComponent");
static_assert(sizeof(UFortPhysicsObjectNavigationComponent) == 0x000240, "Wrong size on UFortPhysicsObjectNavigationComponent");
static_assert(offsetof(UFortPhysicsObjectNavigationComponent, PhysicsObjectComponent) == 0x000230, "Member 'UFortPhysicsObjectNavigationComponent::PhysicsObjectComponent' has a wrong offset!");

class IFortAIEnvironmentalDangerSourceInterface final : public IInterface
{
public:
	float GetDangerAtLocation(const struct FVector& Location) const;
	bool GetDangerSourceActive() const;
	struct FBox GetDangerSourceBounds() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIEnvironmentalDangerSourceInterface">();
	}
	static class IFortAIEnvironmentalDangerSourceInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortAIEnvironmentalDangerSourceInterface>();
	}
};
static_assert(alignof(IFortAIEnvironmentalDangerSourceInterface) == 0x000008, "Wrong alignment on IFortAIEnvironmentalDangerSourceInterface");
static_assert(sizeof(IFortAIEnvironmentalDangerSourceInterface) == 0x000028, "Wrong size on IFortAIEnvironmentalDangerSourceInterface");

class UFortAIPerceptionSystem final : public UAIPerceptionSystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIPerceptionSystem">();
	}
	static class UFortAIPerceptionSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIPerceptionSystem>();
	}
};
static_assert(alignof(UFortAIPerceptionSystem) == 0x000008, "Wrong alignment on UFortAIPerceptionSystem");
static_assert(sizeof(UFortAIPerceptionSystem) == 0x000128, "Wrong size on UFortAIPerceptionSystem");

class UFortCreativeCreatureManagerInfoComponent final : public TObjectBasedCycleFixup<class UFortMinigameLogicComponent, 0x0130, 0x08>
{
public:
	uint8                                         Pad_158[0x18];
	TSoftClassPtr<class UClass>                   CreatureBlueprintClass;
	int32                                         MaxHealth;
	float                                         HearingAggroRange;
	int32                                         ScorePoints;
	float                                         DamageCaused;
	float                                         EnvironmentalDamageOverride;
	float                                         MovementSpeedMultiplier;
	bool                                          bImmuneToWeaponKnockback;
	uint8                                         Pad_1B1[0x7];
	class UFortCreativeCreatureManagerComponent*  CreatureManagerComponent;
	TSubclassOf<class UGameplayEffect>            DamageOverrideEffect;
	TSubclassOf<class UGameplayEffect>            EnvironmentalDamageOverrideEffect;
	TSubclassOf<class UGameplayEffect>            MovementSpeedOverrideEffect;
	TSubclassOf<class UGameplayEffect>            WeaponKnockbackImmunityEffect;
	TSubclassOf<class UGameplayEffect>            MaxHealthOverrideEffect;
	EScoreDistributionType                        ScoreDistribution;
	ECreatureManagerAffectedTargets               AffectedTargetsType;
	uint8                                         Pad_1EA[0x26];

public:
	class UFortCreativeCreatureManagerComponent* GetCreatureManagerComponent();
	float GetInvalidFloat();
	int32 GetInvalidInt32();
	void ResetEnvironmentalDamageOverride();
	void ResetHearingAggroRange();
	void ResetMaxHealth();
	void ResetMovementSpeedMultiplier();
	void ResetOverrideDamage();
	void ResetScoreDistribution();
	void ResetScorePoints();
	void ResetWeaponKnockbackImmunity();
	void SetAffectedTargetsType(ECreatureManagerAffectedTargets InAffectedTargetsType);
	void SetCreatureBlueprintClass(TSoftClassPtr<class UClass> InCreatureBlueprintClass);
	void SetCreatureManagerComponent(class UFortCreativeCreatureManagerComponent* InCreatureManagerComponent);
	void SetDamageOverrideEffect(TSubclassOf<class UGameplayEffect> Effect);
	void SetDamageOverrideTag(const struct FGameplayTag& tag);
	void SetEnvironmentalDamageOverride(float InOverrideDamage);
	void SetEnvironmentalDamageOverrideEffect(TSubclassOf<class UGameplayEffect> Effect);
	void SetHearingAggroRange(float InHearingAggroRange);
	void SetMaxHealth(int32 InMaxHealth);
	void SetMaxHealthOverrideEffect(TSubclassOf<class UGameplayEffect> Effect);
	void SetMaxHealthOverrideTag(const struct FGameplayTag& tag);
	void SetMovementOverrideTag(const struct FGameplayTag& tag);
	void SetMovementSpeedMultiplier(float InOverrideMovementSpeedMultiplier);
	void SetMovementSpeedOverrideEffect(TSubclassOf<class UGameplayEffect> Effect);
	void SetOverrideDamage(float InOverrideDamage);
	void SetScoreDistribution(const EScoreDistributionType InScoreDistribution);
	void SetScorePoints(int32 InScorePoints);
	void SetWeaponKnockbackImmunity(bool InImmuneToWeaponKnockback);
	void SetWeaponKnockbackImmunityEffect(TSubclassOf<class UGameplayEffect> Effect);

	ECreatureManagerAffectedTargets GetAffectedTargetsType() const;
	TSoftClassPtr<class UClass> GetCreatureBlueprintClass() const;
	float GetEnvironmentalDamageOverride() const;
	float GetHearingAggroRange() const;
	int32 GetMaxHealth() const;
	float GetMovementSpeedMultiplier() const;
	float GetOverrideDamage() const;
	EScoreDistributionType GetScoreDistribution() const;
	int32 GetScorePoints() const;
	bool GetWeaponKnockbackImmunity() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCreativeCreatureManagerInfoComponent">();
	}
	static class UFortCreativeCreatureManagerInfoComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCreativeCreatureManagerInfoComponent>();
	}
};
static_assert(alignof(UFortCreativeCreatureManagerInfoComponent) == 0x000008, "Wrong alignment on UFortCreativeCreatureManagerInfoComponent");
static_assert(sizeof(UFortCreativeCreatureManagerInfoComponent) == 0x000210, "Wrong size on UFortCreativeCreatureManagerInfoComponent");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, CreatureBlueprintClass) == 0x000170, "Member 'UFortCreativeCreatureManagerInfoComponent::CreatureBlueprintClass' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, MaxHealth) == 0x000198, "Member 'UFortCreativeCreatureManagerInfoComponent::MaxHealth' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, HearingAggroRange) == 0x00019C, "Member 'UFortCreativeCreatureManagerInfoComponent::HearingAggroRange' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, ScorePoints) == 0x0001A0, "Member 'UFortCreativeCreatureManagerInfoComponent::ScorePoints' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, DamageCaused) == 0x0001A4, "Member 'UFortCreativeCreatureManagerInfoComponent::DamageCaused' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, EnvironmentalDamageOverride) == 0x0001A8, "Member 'UFortCreativeCreatureManagerInfoComponent::EnvironmentalDamageOverride' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, MovementSpeedMultiplier) == 0x0001AC, "Member 'UFortCreativeCreatureManagerInfoComponent::MovementSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, bImmuneToWeaponKnockback) == 0x0001B0, "Member 'UFortCreativeCreatureManagerInfoComponent::bImmuneToWeaponKnockback' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, CreatureManagerComponent) == 0x0001B8, "Member 'UFortCreativeCreatureManagerInfoComponent::CreatureManagerComponent' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, DamageOverrideEffect) == 0x0001C0, "Member 'UFortCreativeCreatureManagerInfoComponent::DamageOverrideEffect' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, EnvironmentalDamageOverrideEffect) == 0x0001C8, "Member 'UFortCreativeCreatureManagerInfoComponent::EnvironmentalDamageOverrideEffect' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, MovementSpeedOverrideEffect) == 0x0001D0, "Member 'UFortCreativeCreatureManagerInfoComponent::MovementSpeedOverrideEffect' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, WeaponKnockbackImmunityEffect) == 0x0001D8, "Member 'UFortCreativeCreatureManagerInfoComponent::WeaponKnockbackImmunityEffect' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, MaxHealthOverrideEffect) == 0x0001E0, "Member 'UFortCreativeCreatureManagerInfoComponent::MaxHealthOverrideEffect' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, ScoreDistribution) == 0x0001E8, "Member 'UFortCreativeCreatureManagerInfoComponent::ScoreDistribution' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerInfoComponent, AffectedTargetsType) == 0x0001E9, "Member 'UFortCreativeCreatureManagerInfoComponent::AffectedTargetsType' has a wrong offset!");

class UFortAthenaAIBotCharacterCustomization final : public UObject
{
public:
	TStructCycleFixup<struct FFortAthenaLoadout, 0x0178, 0x08> CustomizationLoadout;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotCharacterCustomization">();
	}
	static class UFortAthenaAIBotCharacterCustomization* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotCharacterCustomization>();
	}
};
static_assert(alignof(UFortAthenaAIBotCharacterCustomization) == 0x000008, "Wrong alignment on UFortAthenaAIBotCharacterCustomization");
static_assert(sizeof(UFortAthenaAIBotCharacterCustomization) == 0x0001A0, "Wrong size on UFortAthenaAIBotCharacterCustomization");
static_assert(offsetof(UFortAthenaAIBotCharacterCustomization, CustomizationLoadout) == 0x000028, "Member 'UFortAthenaAIBotCharacterCustomization::CustomizationLoadout' has a wrong offset!");

class UFortAthenaAIBotInventoryItems final : public UObject
{
public:
	TArray<struct FItemAndCount>                  Items;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotInventoryItems">();
	}
	static class UFortAthenaAIBotInventoryItems* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotInventoryItems>();
	}
};
static_assert(alignof(UFortAthenaAIBotInventoryItems) == 0x000008, "Wrong alignment on UFortAthenaAIBotInventoryItems");
static_assert(sizeof(UFortAthenaAIBotInventoryItems) == 0x000038, "Wrong size on UFortAthenaAIBotInventoryItems");
static_assert(offsetof(UFortAthenaAIBotInventoryItems, Items) == 0x000028, "Member 'UFortAthenaAIBotInventoryItems::Items' has a wrong offset!");

class UFortIntensityCurveSequence final : public UDataAsset
{
public:
	TArray<struct FDataTableRowHandle>            IntensityCurves;
	EFortIntensityCurveSequenceType               SequenceType;
	uint8                                         Pad_41[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortIntensityCurveSequence">();
	}
	static class UFortIntensityCurveSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortIntensityCurveSequence>();
	}
};
static_assert(alignof(UFortIntensityCurveSequence) == 0x000008, "Wrong alignment on UFortIntensityCurveSequence");
static_assert(sizeof(UFortIntensityCurveSequence) == 0x000048, "Wrong size on UFortIntensityCurveSequence");
static_assert(offsetof(UFortIntensityCurveSequence, IntensityCurves) == 0x000030, "Member 'UFortIntensityCurveSequence::IntensityCurves' has a wrong offset!");
static_assert(offsetof(UFortIntensityCurveSequence, SequenceType) == 0x000040, "Member 'UFortIntensityCurveSequence::SequenceType' has a wrong offset!");

class IFortAthenaAIControllerInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIControllerInterface">();
	}
	static class IFortAthenaAIControllerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortAthenaAIControllerInterface>();
	}
};
static_assert(alignof(IFortAthenaAIControllerInterface) == 0x000008, "Wrong alignment on IFortAthenaAIControllerInterface");
static_assert(sizeof(IFortAthenaAIControllerInterface) == 0x000028, "Wrong size on IFortAthenaAIControllerInterface");

class IFortAthenaAILODSettings final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAILODSettings">();
	}
	static class IFortAthenaAILODSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortAthenaAILODSettings>();
	}
};
static_assert(alignof(IFortAthenaAILODSettings) == 0x000008, "Wrong alignment on IFortAthenaAILODSettings");
static_assert(sizeof(IFortAthenaAILODSettings) == 0x000028, "Wrong size on IFortAthenaAILODSettings");

class UFortNavSystemConfig : public UNavigationSystemModuleConfig
{
public:
	uint8                                         bAllowAutoRebuild : 1;
	uint8                                         bRebuildOnInitialUnlock : 1;
	uint8                                         bUsesStreamedInNavLevel : 1;
	uint8                                         Pad_59[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavSystemConfig">();
	}
	static class UFortNavSystemConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavSystemConfig>();
	}
};
static_assert(alignof(UFortNavSystemConfig) == 0x000008, "Wrong alignment on UFortNavSystemConfig");
static_assert(sizeof(UFortNavSystemConfig) == 0x000060, "Wrong size on UFortNavSystemConfig");

class UFortAthenaAILODSettings_AIEvaluator final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TArray<TSubclassOf<class UFortAthenaAIEvaluator>> SystemClasses;
	struct FFortAILODSetting_AIEvaluator          BelowLowerLODSettings;
	struct FFortAILODSetting_AIEvaluator          LowerLODSettings;
	struct FFortAILODSetting_AIEvaluator          AboveLowerLODSettings;
	struct FFortAILODSetting_AIEvaluator          BelowNormalLODSettings;
	struct FFortAILODSetting_AIEvaluator          NormalLODSettings;
	struct FFortAILODSetting_AIEvaluator          AboveNormalLODSettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAILODSettings_AIEvaluator">();
	}
	static class UFortAthenaAILODSettings_AIEvaluator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAILODSettings_AIEvaluator>();
	}
};
static_assert(alignof(UFortAthenaAILODSettings_AIEvaluator) == 0x000008, "Wrong alignment on UFortAthenaAILODSettings_AIEvaluator");
static_assert(sizeof(UFortAthenaAILODSettings_AIEvaluator) == 0x0002B0, "Wrong size on UFortAthenaAILODSettings_AIEvaluator");
static_assert(offsetof(UFortAthenaAILODSettings_AIEvaluator, SystemClasses) == 0x000030, "Member 'UFortAthenaAILODSettings_AIEvaluator::SystemClasses' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_AIEvaluator, BelowLowerLODSettings) == 0x000040, "Member 'UFortAthenaAILODSettings_AIEvaluator::BelowLowerLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_AIEvaluator, LowerLODSettings) == 0x0000A8, "Member 'UFortAthenaAILODSettings_AIEvaluator::LowerLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_AIEvaluator, AboveLowerLODSettings) == 0x000110, "Member 'UFortAthenaAILODSettings_AIEvaluator::AboveLowerLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_AIEvaluator, BelowNormalLODSettings) == 0x000178, "Member 'UFortAthenaAILODSettings_AIEvaluator::BelowNormalLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_AIEvaluator, NormalLODSettings) == 0x0001E0, "Member 'UFortAthenaAILODSettings_AIEvaluator::NormalLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_AIEvaluator, AboveNormalLODSettings) == 0x000248, "Member 'UFortAthenaAILODSettings_AIEvaluator::AboveNormalLODSettings' has a wrong offset!");

class UFortAthenaAILODSettings_CharacterMovement final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TArray<TSubclassOf<class UFortMovementComp_Character>> SystemClasses;
	struct FFortAILODSetting_CharacterMovement    BelowLowerLODSettings;
	struct FFortAILODSetting_CharacterMovement    LowerLODSettings;
	struct FFortAILODSetting_CharacterMovement    AboveLowerLODSettings;
	struct FFortAILODSetting_CharacterMovement    BelowNormalLODSettings;
	struct FFortAILODSetting_CharacterMovement    NormalLODSettings;
	struct FFortAILODSetting_CharacterMovement    AboveNormalLODSettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAILODSettings_CharacterMovement">();
	}
	static class UFortAthenaAILODSettings_CharacterMovement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAILODSettings_CharacterMovement>();
	}
};
static_assert(alignof(UFortAthenaAILODSettings_CharacterMovement) == 0x000008, "Wrong alignment on UFortAthenaAILODSettings_CharacterMovement");
static_assert(sizeof(UFortAthenaAILODSettings_CharacterMovement) == 0x000970, "Wrong size on UFortAthenaAILODSettings_CharacterMovement");
static_assert(offsetof(UFortAthenaAILODSettings_CharacterMovement, SystemClasses) == 0x000030, "Member 'UFortAthenaAILODSettings_CharacterMovement::SystemClasses' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_CharacterMovement, BelowLowerLODSettings) == 0x000040, "Member 'UFortAthenaAILODSettings_CharacterMovement::BelowLowerLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_CharacterMovement, LowerLODSettings) == 0x0001C8, "Member 'UFortAthenaAILODSettings_CharacterMovement::LowerLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_CharacterMovement, AboveLowerLODSettings) == 0x000350, "Member 'UFortAthenaAILODSettings_CharacterMovement::AboveLowerLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_CharacterMovement, BelowNormalLODSettings) == 0x0004D8, "Member 'UFortAthenaAILODSettings_CharacterMovement::BelowNormalLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_CharacterMovement, NormalLODSettings) == 0x000660, "Member 'UFortAthenaAILODSettings_CharacterMovement::NormalLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_CharacterMovement, AboveNormalLODSettings) == 0x0007E8, "Member 'UFortAthenaAILODSettings_CharacterMovement::AboveNormalLODSettings' has a wrong offset!");

class UFortAthenaAILODSettings_GenericTickingObject final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TArray<TSubclassOf<class UObject>>            SystemClasses;
	struct FFortAILODSetting_GenericTickingObject BelowLowerLODSettings;
	struct FFortAILODSetting_GenericTickingObject LowerLODSettings;
	struct FFortAILODSetting_GenericTickingObject AboveLowerLODSettings;
	struct FFortAILODSetting_GenericTickingObject BelowNormalLODSettings;
	struct FFortAILODSetting_GenericTickingObject NormalLODSettings;
	struct FFortAILODSetting_GenericTickingObject AboveNormalLODSettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAILODSettings_GenericTickingObject">();
	}
	static class UFortAthenaAILODSettings_GenericTickingObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAILODSettings_GenericTickingObject>();
	}
};
static_assert(alignof(UFortAthenaAILODSettings_GenericTickingObject) == 0x000008, "Wrong alignment on UFortAthenaAILODSettings_GenericTickingObject");
static_assert(sizeof(UFortAthenaAILODSettings_GenericTickingObject) == 0x000190, "Wrong size on UFortAthenaAILODSettings_GenericTickingObject");
static_assert(offsetof(UFortAthenaAILODSettings_GenericTickingObject, SystemClasses) == 0x000030, "Member 'UFortAthenaAILODSettings_GenericTickingObject::SystemClasses' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_GenericTickingObject, BelowLowerLODSettings) == 0x000040, "Member 'UFortAthenaAILODSettings_GenericTickingObject::BelowLowerLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_GenericTickingObject, LowerLODSettings) == 0x000078, "Member 'UFortAthenaAILODSettings_GenericTickingObject::LowerLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_GenericTickingObject, AboveLowerLODSettings) == 0x0000B0, "Member 'UFortAthenaAILODSettings_GenericTickingObject::AboveLowerLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_GenericTickingObject, BelowNormalLODSettings) == 0x0000E8, "Member 'UFortAthenaAILODSettings_GenericTickingObject::BelowNormalLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_GenericTickingObject, NormalLODSettings) == 0x000120, "Member 'UFortAthenaAILODSettings_GenericTickingObject::NormalLODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettings_GenericTickingObject, AboveNormalLODSettings) == 0x000158, "Member 'UFortAthenaAILODSettings_GenericTickingObject::AboveNormalLODSettings' has a wrong offset!");

class AFortForcedLODZone final : public AActor
{
public:
	EFortAILODLevel                               ForcedLODLevel;
	uint8                                         Pad_289[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortForcedLODZone">();
	}
	static class AFortForcedLODZone* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortForcedLODZone>();
	}
};
static_assert(alignof(AFortForcedLODZone) == 0x000008, "Wrong alignment on AFortForcedLODZone");
static_assert(sizeof(AFortForcedLODZone) == 0x000290, "Wrong size on AFortForcedLODZone");
static_assert(offsetof(AFortForcedLODZone, ForcedLODLevel) == 0x000288, "Member 'AFortForcedLODZone::ForcedLODLevel' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent">();
	}
	static class UFortAthenaAISpawnerDataComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent");

class UFortAthenaAISpawnerDataComponent_ConstructionBase : public UFortAthenaAISpawnerDataComponent
{
public:
	bool GetConstructionBuildingInfo(struct FConstructionBuildingList* OutConstructionInfoList) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_ConstructionBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_ConstructionBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_ConstructionBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_ConstructionBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_ConstructionBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_ConstructionBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_ConstructionBase");

class UFortNavObstacleComponent final : public UNavRelevantComponent
{
public:
	TSubclassOf<class UNavArea>                   ObstacleAreaClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavObstacleComponent">();
	}
	static class UFortNavObstacleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavObstacleComponent>();
	}
};
static_assert(alignof(UFortNavObstacleComponent) == 0x000008, "Wrong alignment on UFortNavObstacleComponent");
static_assert(sizeof(UFortNavObstacleComponent) == 0x0000F8, "Wrong size on UFortNavObstacleComponent");
static_assert(offsetof(UFortNavObstacleComponent, ObstacleAreaClass) == 0x0000F0, "Member 'UFortNavObstacleComponent::ObstacleAreaClass' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_AIBotConstruction final : public UFortAthenaAISpawnerDataComponent_ConstructionBase
{
public:
	struct FConstructionBuildingList              ConstructionBuildingInfoList;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIBotConstruction">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIBotConstruction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIBotConstruction>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIBotConstruction) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIBotConstruction");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIBotConstruction) == 0x0000C0, "Wrong size on UFortAthenaAISpawnerDataComponent_AIBotConstruction");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConstruction, ConstructionBuildingInfoList) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConstruction::ConstructionBuildingInfoList' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_BehaviorBase : public UFortAthenaAISpawnerDataComponent
{
public:
	class UBehaviorTree* GetBehaviorTree();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_BehaviorBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_BehaviorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_BehaviorBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_BehaviorBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_BehaviorBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_BehaviorBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_BehaviorBase");

class UFortAIGoalProvider : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UWorld*                                 World;
	class UFortAIAssignment*                      AssignmentOwner;
	class UFortAIEncounterInfo*                   EncounterInfo;

public:
	bool InitializeGoalProvider(class UWorld* ContextWorld, class UFortAIAssignment* Assignment);
	void UpdateGoals();

	class UFortAIEncounterInfo* GetEncounterInfo() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIGoalProvider">();
	}
	static class UFortAIGoalProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIGoalProvider>();
	}
};
static_assert(alignof(UFortAIGoalProvider) == 0x000008, "Wrong alignment on UFortAIGoalProvider");
static_assert(sizeof(UFortAIGoalProvider) == 0x000048, "Wrong size on UFortAIGoalProvider");
static_assert(offsetof(UFortAIGoalProvider, World) == 0x000030, "Member 'UFortAIGoalProvider::World' has a wrong offset!");
static_assert(offsetof(UFortAIGoalProvider, AssignmentOwner) == 0x000038, "Member 'UFortAIGoalProvider::AssignmentOwner' has a wrong offset!");
static_assert(offsetof(UFortAIGoalProvider, EncounterInfo) == 0x000040, "Member 'UFortAIGoalProvider::EncounterInfo' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_Behavior : public UFortAthenaAISpawnerDataComponent_BehaviorBase
{
public:
	class UBehaviorTree*                          BehaviorTree;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_Behavior">();
	}
	static class UFortAthenaAISpawnerDataComponent_Behavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_Behavior>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_Behavior) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_Behavior");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_Behavior) == 0x000038, "Wrong size on UFortAthenaAISpawnerDataComponent_Behavior");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_Behavior, BehaviorTree) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_Behavior::BehaviorTree' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase : public UFortAthenaAISpawnerDataComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_ChanceEncounterBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_ChanceEncounterBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_ChanceEncounterBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_ChanceEncounterBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_ChanceEncounterBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_ChanceEncounterBase");

class AFortPlacedPawnMarker final : public ANavigationObjectBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlacedPawnMarker">();
	}
	static class AFortPlacedPawnMarker* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortPlacedPawnMarker>();
	}
};
static_assert(alignof(AFortPlacedPawnMarker) == 0x000008, "Wrong alignment on AFortPlacedPawnMarker");
static_assert(sizeof(AFortPlacedPawnMarker) == 0x0002B0, "Wrong size on AFortPlacedPawnMarker");

class UFortAthenaAISpawnerDataComponent_ConversationBase : public UFortAthenaAISpawnerDataComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_ConversationBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_ConversationBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_ConversationBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_ConversationBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_ConversationBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_ConversationBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_ConversationBase");

class UFortAthenaAISpawnerDataComponent_DebugBase : public UFortAthenaAISpawnerDataComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_DebugBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_DebugBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_DebugBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_DebugBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_DebugBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_DebugBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_DebugBase");

class UFortNavLinkDefinition : public UNavLinkDefinition
{
public:
	struct FFortNavLinkPattern                    Pattern;
	TArray<struct FFortNavLinkPattern>            AdditionalPatterns;
	TArray<EBuildingStairsRailing>                StairsRailing;
	EBuildingFloorRailing                         FloorRailing;
	EFortNavLinkPattern                           PatternType;
	uint8                                         Pad_7A[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavLinkDefinition">();
	}
	static class UFortNavLinkDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavLinkDefinition>();
	}
};
static_assert(alignof(UFortNavLinkDefinition) == 0x000008, "Wrong alignment on UFortNavLinkDefinition");
static_assert(sizeof(UFortNavLinkDefinition) == 0x000080, "Wrong size on UFortNavLinkDefinition");
static_assert(offsetof(UFortNavLinkDefinition, Pattern) == 0x000050, "Member 'UFortNavLinkDefinition::Pattern' has a wrong offset!");
static_assert(offsetof(UFortNavLinkDefinition, AdditionalPatterns) == 0x000058, "Member 'UFortNavLinkDefinition::AdditionalPatterns' has a wrong offset!");
static_assert(offsetof(UFortNavLinkDefinition, StairsRailing) == 0x000068, "Member 'UFortNavLinkDefinition::StairsRailing' has a wrong offset!");
static_assert(offsetof(UFortNavLinkDefinition, FloorRailing) == 0x000078, "Member 'UFortNavLinkDefinition::FloorRailing' has a wrong offset!");
static_assert(offsetof(UFortNavLinkDefinition, PatternType) == 0x000079, "Member 'UFortNavLinkDefinition::PatternType' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_LODBase : public UFortAthenaAISpawnerDataComponent
{
public:
	class UFortAthenaAILODSettingsContainer* GetAILODSettingsContainer() const;
	struct FClientAILODSettings GetClientAILODSettings() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_LODBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_LODBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_LODBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_LODBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_LODBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_LODBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_LODBase");

class UFortAthenaAISpawnerDataComponent_LOD final : public UFortAthenaAISpawnerDataComponent_LODBase
{
public:
	TSubclassOf<class UFortAthenaAILODSettingsContainer> LODSettings;
	struct FClientAILODSettings                   ClientLODSettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_LOD">();
	}
	static class UFortAthenaAISpawnerDataComponent_LOD* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_LOD>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_LOD) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_LOD");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_LOD) == 0x000328, "Wrong size on UFortAthenaAISpawnerDataComponent_LOD");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_LOD, LODSettings) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_LOD::LODSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_LOD, ClientLODSettings) == 0x000038, "Member 'UFortAthenaAISpawnerDataComponent_LOD::ClientLODSettings' has a wrong offset!");

class AEdgeNavLinks final : public ANavLinkProxy
{
public:
	float                                         DistanceBetweenLinks;
	uint8                                         Pad_2DC[0x4];
	struct FVector                                Start;
	struct FVector                                End;
	float                                         SnapRadius;
	float                                         SnapHeight;
	float                                         LinkProjectionHeight;
	float                                         RightLinkForwardOffset;
	ECollisionChannel                             CollisionChannel;
	uint8                                         Pad_321[0x3];
	uint8                                         bManualAdjustment : 1;
	uint8                                         Pad_325[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EdgeNavLinks">();
	}
	static class AEdgeNavLinks* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEdgeNavLinks>();
	}
};
static_assert(alignof(AEdgeNavLinks) == 0x000008, "Wrong alignment on AEdgeNavLinks");
static_assert(sizeof(AEdgeNavLinks) == 0x000328, "Wrong size on AEdgeNavLinks");
static_assert(offsetof(AEdgeNavLinks, DistanceBetweenLinks) == 0x0002D8, "Member 'AEdgeNavLinks::DistanceBetweenLinks' has a wrong offset!");
static_assert(offsetof(AEdgeNavLinks, Start) == 0x0002E0, "Member 'AEdgeNavLinks::Start' has a wrong offset!");
static_assert(offsetof(AEdgeNavLinks, End) == 0x0002F8, "Member 'AEdgeNavLinks::End' has a wrong offset!");
static_assert(offsetof(AEdgeNavLinks, SnapRadius) == 0x000310, "Member 'AEdgeNavLinks::SnapRadius' has a wrong offset!");
static_assert(offsetof(AEdgeNavLinks, SnapHeight) == 0x000314, "Member 'AEdgeNavLinks::SnapHeight' has a wrong offset!");
static_assert(offsetof(AEdgeNavLinks, LinkProjectionHeight) == 0x000318, "Member 'AEdgeNavLinks::LinkProjectionHeight' has a wrong offset!");
static_assert(offsetof(AEdgeNavLinks, RightLinkForwardOffset) == 0x00031C, "Member 'AEdgeNavLinks::RightLinkForwardOffset' has a wrong offset!");
static_assert(offsetof(AEdgeNavLinks, CollisionChannel) == 0x000320, "Member 'AEdgeNavLinks::CollisionChannel' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_VehicleBase : public UFortAthenaAISpawnerDataComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_VehicleBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_VehicleBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_VehicleBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_VehicleBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_VehicleBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_VehicleBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_VehicleBase");

class UFortAthenaAISpawnerDataComponent_VoiceBase : public UFortAthenaAISpawnerDataComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_VoiceBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_VoiceBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_VoiceBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_VoiceBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_VoiceBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_VoiceBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_VoiceBase");

class AAIHotSpot : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	TArray<class UAIHotSpotSlot*>                 UserSlots;
	class UAIHotSpotSlotGenerator*                SlotGenerator;
	TArray<class UAIHotSpotSlot*>                 Slots;
	class AActor*                                 FocusActor;
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	struct FVector                                CustomNavmeshSearchExtent;
	uint8                                         bStartEnabled : 1;
	uint8                                         bAllowSlotlessAssignment : 1;
	uint8                                         bAllowClaimingMultipleSlots : 1;
	uint8                                         bTrackOverlappingSlots : 1;
	uint8                                         bProjectSlotsOnNavmesh : 1;
	uint8                                         bCustomNavmeshSearchExtent : 1;
	uint8                                         bIsEnabled : 1;
	uint8                                         Pad_2E1[0x7];
	TArray<class AAIController*>                  NoSlotAssignees;
	uint8                                         Pad_2F8[0x128];
	class UPrimitiveComponent*                    RenderingComponent;
	class UBillboardComponent*                    SpriteComponent;
	uint8                                         Pad_430[0x8];

public:
	void AssignFromWaitingList();
	int32 AssignGroupToHotspot(const TArray<class AAIController*>& GroupOfAI);
	bool AssignToHotspot(class AAIController* AI);
	bool AssignToSlotByIndex(class AAIController* AI, int32 Index_0);
	bool OccupySlotByIndex(int32 Index_0);
	bool OnAssignedClaimedBehavior(class AAIController* AI, int32 Index_0, int32 UserId, bool bWasOnWaitingList);
	bool OnAssignedOccupiedBehavior(class AAIController* AI, int32 Index_0, int32 UserId);
	bool OnAssignedSlotlessBehavior(class AAIController* AI);
	void OnHotSpotDisabled();
	void OnHotSpotEnabled();
	void OnMoveToSlotFinished(class AAIController* AI, int32 Index_0, int32 UserId, bool bResult);
	void OnRemovedBehavior(class AAIController* AI, int32 Index_0, int32 UserId, EAIHotSpotSlot PrevState, bool bWasOnWaitingList);
	void OnRemovedSlotlessBehavior(class AAIController* AI, bool bIsClamingSlot);
	void OnSlotBlocked(class AAIController* AI, int32 Index_0, int32 UserId);
	void OnSlotClaimed(class AAIController* AI, int32 Index_0, int32 UserId);
	void OnSlotDisabled(int32 Index_0, int32 UserId);
	void OnSlotEnabled(int32 Index_0, int32 UserId);
	void OnSlotFreed(class AAIController* AI, int32 Index_0, int32 UserId);
	void OnSlotOccupied(class AAIController* AI, int32 Index_0, int32 UserId);
	bool RemoveFromHotspot(class AAIController* AI, bool bAssignFromWaitingList);
	int32 RemoveGroupFromHotspot(const TArray<class AAIController*>& GroupOfAI);
	void SetEnabled(bool bEnabled);

	bool CanUseSlotByIndex(const class AAIController* AI, int32 Index_0) const;
	int32 FindBestSlotIndex(class AAIController* AI) const;
	TArray<int32> FindBestSlotIndices(const TArray<class AAIController*>& AI) const;
	TArray<class AAIController*> GetAssignedAI(EAIHotSpotAssignmentFilter Filter) const;
	int32 GetAssignedAICount(EAIHotSpotAssignmentFilter Filter) const;
	class UAIHotSpotSlot* GetSlotByIndex(int32 Index_0) const;
	class UAIHotSpotSlot* GetSlotByOwner(const class AAIController* AIOwner) const;
	int32 GetSlotCount(EAIHotSpotSlotFilter Filter) const;
	int32 GetSlotIndexByOwner(const class AAIController* AIOwner) const;
	struct FVector GetSlotLocationByIndex(int32 Index_0) const;
	class AAIController* GetSlotOwnerByIndex(int32 Index_0) const;
	struct FRotator GetSlotRotationByIndex(int32 Index_0) const;
	EAIHotSpotSlot GetSlotStateByIndex(int32 Index_0) const;
	EAIHotSpotSlot GetSlotStateByOwner(const class AAIController* AIOwner) const;
	int32 GetSlotUserIdByIndex(int32 Index_0) const;
	bool HasAssignedAI(const class AAIController* AI, EAIHotSpotAssignmentFilter Filter) const;
	bool HasEnabledSlots() const;
	bool IsAIAllowed(const class AAIController* AI) const;
	bool IsEnabled() const;
	bool IsSlotlessAssignmentAllowed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIHotSpot">();
	}
	static class AAIHotSpot* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIHotSpot>();
	}
};
static_assert(alignof(AAIHotSpot) == 0x000008, "Wrong alignment on AAIHotSpot");
static_assert(sizeof(AAIHotSpot) == 0x000438, "Wrong size on AAIHotSpot");
static_assert(offsetof(AAIHotSpot, UserSlots) == 0x000290, "Member 'AAIHotSpot::UserSlots' has a wrong offset!");
static_assert(offsetof(AAIHotSpot, SlotGenerator) == 0x0002A0, "Member 'AAIHotSpot::SlotGenerator' has a wrong offset!");
static_assert(offsetof(AAIHotSpot, Slots) == 0x0002A8, "Member 'AAIHotSpot::Slots' has a wrong offset!");
static_assert(offsetof(AAIHotSpot, FocusActor) == 0x0002B8, "Member 'AAIHotSpot::FocusActor' has a wrong offset!");
static_assert(offsetof(AAIHotSpot, FilterClass) == 0x0002C0, "Member 'AAIHotSpot::FilterClass' has a wrong offset!");
static_assert(offsetof(AAIHotSpot, CustomNavmeshSearchExtent) == 0x0002C8, "Member 'AAIHotSpot::CustomNavmeshSearchExtent' has a wrong offset!");
static_assert(offsetof(AAIHotSpot, NoSlotAssignees) == 0x0002E8, "Member 'AAIHotSpot::NoSlotAssignees' has a wrong offset!");
static_assert(offsetof(AAIHotSpot, RenderingComponent) == 0x000420, "Member 'AAIHotSpot::RenderingComponent' has a wrong offset!");
static_assert(offsetof(AAIHotSpot, SpriteComponent) == 0x000428, "Member 'AAIHotSpot::SpriteComponent' has a wrong offset!");

class AFortAIHotSpot : public AAIHotSpot
{
public:
	uint8                                         Pad_438[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIHotSpot">();
	}
	static class AFortAIHotSpot* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAIHotSpot>();
	}
};
static_assert(alignof(AFortAIHotSpot) == 0x000008, "Wrong alignment on AFortAIHotSpot");
static_assert(sizeof(AFortAIHotSpot) == 0x000460, "Wrong size on AFortAIHotSpot");

class UFortAthenaAISpawnerData : public TObjectBasedCycleFixup<class UFortAthenaSpawnerDataBase, 0x0020, 0x08>
{
public:
	TArray<class UFortAthenaAISpawnerDataComponent*> ClassComponentList;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_InventoryBase> InventoryComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_SpawnParamsBase> SpawnParamsComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_BehaviorBase> BehaviorComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_AffiliationBase> AffiliationComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_LODBase> LODComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_DebugBase> DebugComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_AnalyticBase> AnalyticComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_GameplayBase> GameplayComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_ConversationBase> ConversationComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_VoiceBase> VoiceComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_CosmeticBase> CosmeticComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase> ChanceEncounterComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_OptimBase> OptimizationComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase> GameplayAbilityComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_PerceptionBase> PerceptionComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_SmartObjectBase> SmartObjectComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_GroupBase> GroupComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_ScriptBase> ScriptComponent;
	struct FScalableFloat                         SpawnIntervalOverride;

public:
	static class UFortAthenaAISpawnerDataComponentList* CreateComponentListFromClass(const TSubclassOf<class UFortAthenaAISpawnerData> AISpawnerDataClass, class UObject* OuterObject);

	class UFortAthenaAISpawnerDataComponentList* CreateComponentList(class UObject* OuterObject) const;
	class UFortAthenaAISpawnerDataComponent_AffiliationBase* GetAffiliationComponent() const;
	class UFortAthenaAISpawnerDataComponent_LODBase* GetAILODComponent() const;
	class UFortAthenaAISpawnerDataComponent_AnalyticBase* GetAnalyticComponent() const;
	class UFortAthenaAISpawnerDataComponent_BehaviorBase* GetBehaviorComponent() const;
	class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* GetChanceEncounterComponent() const;
	class UFortAthenaAISpawnerDataComponent_ConversationBase* GetConversationComponent() const;
	class UFortAthenaAISpawnerDataComponent_CosmeticBase* GetCosmeticComponent() const;
	class UFortAthenaAISpawnerDataComponent_DebugBase* GetDebugComponent() const;
	class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* GetGameplayAbilityComponent() const;
	class UFortAthenaAISpawnerDataComponent_GameplayBase* GetGameplayComponent() const;
	class UFortAthenaAISpawnerDataComponent_GroupBase* GetGroupComponent() const;
	class UFortAthenaAISpawnerDataComponent_InventoryBase* GetInventoryComponent() const;
	class UFortAthenaAISpawnerDataComponent_OptimBase* GetOptimizationComponent() const;
	class UFortAthenaAISpawnerDataComponent_PerceptionBase* GetPerceptionComponent() const;
	class UFortAthenaAISpawnerDataComponent_ScriptBase* GetScriptComponent() const;
	class UFortAthenaAISpawnerDataComponent_SmartObjectBase* GetSmartObjectComponent() const;
	class UFortAthenaAISpawnerDataComponent_SpawnParamsBase* GetSpawnParamsComponent() const;
	class UFortAthenaAISpawnerDataComponent_VoiceBase* GetVoiceComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerData">();
	}
	static class UFortAthenaAISpawnerData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerData>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerData) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerData");
static_assert(sizeof(UFortAthenaAISpawnerData) == 0x000110, "Wrong size on UFortAthenaAISpawnerData");
static_assert(offsetof(UFortAthenaAISpawnerData, ClassComponentList) == 0x000048, "Member 'UFortAthenaAISpawnerData::ClassComponentList' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, InventoryComponent) == 0x000058, "Member 'UFortAthenaAISpawnerData::InventoryComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, SpawnParamsComponent) == 0x000060, "Member 'UFortAthenaAISpawnerData::SpawnParamsComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, BehaviorComponent) == 0x000068, "Member 'UFortAthenaAISpawnerData::BehaviorComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, AffiliationComponent) == 0x000070, "Member 'UFortAthenaAISpawnerData::AffiliationComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, LODComponent) == 0x000078, "Member 'UFortAthenaAISpawnerData::LODComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, DebugComponent) == 0x000080, "Member 'UFortAthenaAISpawnerData::DebugComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, AnalyticComponent) == 0x000088, "Member 'UFortAthenaAISpawnerData::AnalyticComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, GameplayComponent) == 0x000090, "Member 'UFortAthenaAISpawnerData::GameplayComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, ConversationComponent) == 0x000098, "Member 'UFortAthenaAISpawnerData::ConversationComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, VoiceComponent) == 0x0000A0, "Member 'UFortAthenaAISpawnerData::VoiceComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, CosmeticComponent) == 0x0000A8, "Member 'UFortAthenaAISpawnerData::CosmeticComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, ChanceEncounterComponent) == 0x0000B0, "Member 'UFortAthenaAISpawnerData::ChanceEncounterComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, OptimizationComponent) == 0x0000B8, "Member 'UFortAthenaAISpawnerData::OptimizationComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, GameplayAbilityComponent) == 0x0000C0, "Member 'UFortAthenaAISpawnerData::GameplayAbilityComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, PerceptionComponent) == 0x0000C8, "Member 'UFortAthenaAISpawnerData::PerceptionComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, SmartObjectComponent) == 0x0000D0, "Member 'UFortAthenaAISpawnerData::SmartObjectComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, GroupComponent) == 0x0000D8, "Member 'UFortAthenaAISpawnerData::GroupComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, ScriptComponent) == 0x0000E0, "Member 'UFortAthenaAISpawnerData::ScriptComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerData, SpawnIntervalOverride) == 0x0000E8, "Member 'UFortAthenaAISpawnerData::SpawnIntervalOverride' has a wrong offset!");

class UFortAthenaAIBotSpawnerData : public UFortAthenaAISpawnerData
{
public:
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_SkillsetBase> SkillSetComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_ConstructionBase> ConstructionComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_VehicleBase> VehicleComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_CoverBase> CoverComponent;
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_PerksBase> PerksComponent;

public:
	class UFortAthenaAISpawnerDataComponent_ConstructionBase* GetConstructionComponent() const;
	class UFortAthenaAISpawnerDataComponent_CoverBase* GetCoverComponent() const;
	class UFortAthenaAISpawnerDataComponent_PerksBase* GetPerksComponent() const;
	class UFortAthenaAISpawnerDataComponent_SkillsetBase* GetSkillSetComponent() const;
	class UFortAthenaAISpawnerDataComponent_VehicleBase* GetVehicleComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotSpawnerData">();
	}
	static class UFortAthenaAIBotSpawnerData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotSpawnerData>();
	}
};
static_assert(alignof(UFortAthenaAIBotSpawnerData) == 0x000008, "Wrong alignment on UFortAthenaAIBotSpawnerData");
static_assert(sizeof(UFortAthenaAIBotSpawnerData) == 0x000138, "Wrong size on UFortAthenaAIBotSpawnerData");
static_assert(offsetof(UFortAthenaAIBotSpawnerData, SkillSetComponent) == 0x000110, "Member 'UFortAthenaAIBotSpawnerData::SkillSetComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotSpawnerData, ConstructionComponent) == 0x000118, "Member 'UFortAthenaAIBotSpawnerData::ConstructionComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotSpawnerData, VehicleComponent) == 0x000120, "Member 'UFortAthenaAIBotSpawnerData::VehicleComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotSpawnerData, CoverComponent) == 0x000128, "Member 'UFortAthenaAIBotSpawnerData::CoverComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotSpawnerData, PerksComponent) == 0x000130, "Member 'UFortAthenaAIBotSpawnerData::PerksComponent' has a wrong offset!");

class UFortDoorLinkComponent final : public UNavLinkCustomComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDoorLinkComponent">();
	}
	static class UFortDoorLinkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDoorLinkComponent>();
	}
};
static_assert(alignof(UFortDoorLinkComponent) == 0x000008, "Wrong alignment on UFortDoorLinkComponent");
static_assert(sizeof(UFortDoorLinkComponent) == 0x0001D0, "Wrong size on UFortDoorLinkComponent");

class UFortAthenaNPCSpawnerData final : public UFortAthenaAIBotSpawnerData
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaNPCSpawnerData">();
	}
	static class UFortAthenaNPCSpawnerData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaNPCSpawnerData>();
	}
};
static_assert(alignof(UFortAthenaNPCSpawnerData) == 0x000008, "Wrong alignment on UFortAthenaNPCSpawnerData");
static_assert(sizeof(UFortAthenaNPCSpawnerData) == 0x000138, "Wrong size on UFortAthenaNPCSpawnerData");

class UFortAthenaPlayerBotSpawnerData final : public UFortAthenaAIBotSpawnerData
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaPlayerBotSpawnerData">();
	}
	static class UFortAthenaPlayerBotSpawnerData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaPlayerBotSpawnerData>();
	}
};
static_assert(alignof(UFortAthenaPlayerBotSpawnerData) == 0x000008, "Wrong alignment on UFortAthenaPlayerBotSpawnerData");
static_assert(sizeof(UFortAthenaPlayerBotSpawnerData) == 0x000138, "Wrong size on UFortAthenaPlayerBotSpawnerData");

class UFortNavArea : public UNavArea
{
public:
	uint8                                         bObstacle : 1;
	uint8                                         bSmashable : 1;
	uint8                                         Pad_49[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea">();
	}
	static class UFortNavArea* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea>();
	}
};
static_assert(alignof(UFortNavArea) == 0x000008, "Wrong alignment on UFortNavArea");
static_assert(sizeof(UFortNavArea) == 0x000050, "Wrong size on UFortNavArea");

class UFortNavArea_ObstacleReplacement final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_ObstacleReplacement">();
	}
	static class UFortNavArea_ObstacleReplacement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_ObstacleReplacement>();
	}
};
static_assert(alignof(UFortNavArea_ObstacleReplacement) == 0x000008, "Wrong alignment on UFortNavArea_ObstacleReplacement");
static_assert(sizeof(UFortNavArea_ObstacleReplacement) == 0x000050, "Wrong size on UFortNavArea_ObstacleReplacement");

class UFortBotNameSettings final : public UObject
{
public:
	EBotNamingMode                                NamingMode;
	uint8                                         Pad_29[0x7];
	class FText                                   OverrideName;
	bool                                          bAddPlayerIDSuffix;
	uint8                                         Pad_49[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBotNameSettings">();
	}
	static class UFortBotNameSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBotNameSettings>();
	}
};
static_assert(alignof(UFortBotNameSettings) == 0x000008, "Wrong alignment on UFortBotNameSettings");
static_assert(sizeof(UFortBotNameSettings) == 0x000050, "Wrong size on UFortBotNameSettings");
static_assert(offsetof(UFortBotNameSettings, NamingMode) == 0x000028, "Member 'UFortBotNameSettings::NamingMode' has a wrong offset!");
static_assert(offsetof(UFortBotNameSettings, OverrideName) == 0x000030, "Member 'UFortBotNameSettings::OverrideName' has a wrong offset!");
static_assert(offsetof(UFortBotNameSettings, bAddPlayerIDSuffix) == 0x000048, "Member 'UFortBotNameSettings::bAddPlayerIDSuffix' has a wrong offset!");

class IFortDoorLinkOpenerInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDoorLinkOpenerInterface">();
	}
	static class IFortDoorLinkOpenerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortDoorLinkOpenerInterface>();
	}
};
static_assert(alignof(IFortDoorLinkOpenerInterface) == 0x000008, "Wrong alignment on IFortDoorLinkOpenerInterface");
static_assert(sizeof(IFortDoorLinkOpenerInterface) == 0x000028, "Wrong size on IFortDoorLinkOpenerInterface");

class AFortAIHotSpot_Shooting final : public AFortAIHotSpot
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIHotSpot_Shooting">();
	}
	static class AFortAIHotSpot_Shooting* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAIHotSpot_Shooting>();
	}
};
static_assert(alignof(AFortAIHotSpot_Shooting) == 0x000008, "Wrong alignment on AFortAIHotSpot_Shooting");
static_assert(sizeof(AFortAIHotSpot_Shooting) == 0x000460, "Wrong size on AFortAIHotSpot_Shooting");

class UFortMetaNavArea_Wall : public UFortMetaNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMetaNavArea_Wall">();
	}
	static class UFortMetaNavArea_Wall* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMetaNavArea_Wall>();
	}
};
static_assert(alignof(UFortMetaNavArea_Wall) == 0x000008, "Wrong alignment on UFortMetaNavArea_Wall");
static_assert(sizeof(UFortMetaNavArea_Wall) == 0x000058, "Wrong size on UFortMetaNavArea_Wall");

class UAIHotSpotSlot : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	struct FTransform                             LocalTransform;
	float                                         Height;
	float                                         Radius;
	float                                         DistanceToFocusActor;
	int32                                         UserId;
	uint8                                         bStartEnabled : 1;
	uint8                                         bHasCachedAgentData : 1;
	uint8                                         bHasOverlappingSlots : 1;
	uint8                                         bHasDistanceToFocusActor : 1;
	uint8                                         bIsBlockingOthers : 1;
	uint8                                         bIsEnabled : 1;
	uint8                                         Pad_A1[0x7];
	class AAIController*                          Owner;
	int32                                         SlotIndex;
	EAIHotSpotSlot                                SlotState;
	uint8                                         Pad_B5[0x6B];

public:
	void ClearSlot();
	void OnStateChanged(class AAIController* SlotOwner, EAIHotSpotSlot NewState);
	void SetSlotEnabled(bool bNewEnabled);
	void SetSlotOwnerAndState(class AAIController* NewOwner, EAIHotSpotSlot NewState);
	void SetSlotState(EAIHotSpotSlot NewState);

	class AAIHotSpot* GetHotSpot() const;
	struct FBox GetSlotBounds() const;
	float GetSlotHeight() const;
	int32 GetSlotIndex() const;
	struct FVector GetSlotLocation() const;
	class AAIController* GetSlotOwner() const;
	float GetSlotRadius() const;
	struct FRotator GetSlotRotation() const;
	EAIHotSpotSlot GetSlotState() const;
	int32 GetSlotUserId() const;
	bool HasUserId() const;
	bool IsAIAllowed(const class AAIController* AI) const;
	bool IsEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIHotSpotSlot">();
	}
	static class UAIHotSpotSlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIHotSpotSlot>();
	}
};
static_assert(alignof(UAIHotSpotSlot) == 0x000010, "Wrong alignment on UAIHotSpotSlot");
static_assert(sizeof(UAIHotSpotSlot) == 0x000120, "Wrong size on UAIHotSpotSlot");
static_assert(offsetof(UAIHotSpotSlot, LocalTransform) == 0x000030, "Member 'UAIHotSpotSlot::LocalTransform' has a wrong offset!");
static_assert(offsetof(UAIHotSpotSlot, Height) == 0x000090, "Member 'UAIHotSpotSlot::Height' has a wrong offset!");
static_assert(offsetof(UAIHotSpotSlot, Radius) == 0x000094, "Member 'UAIHotSpotSlot::Radius' has a wrong offset!");
static_assert(offsetof(UAIHotSpotSlot, DistanceToFocusActor) == 0x000098, "Member 'UAIHotSpotSlot::DistanceToFocusActor' has a wrong offset!");
static_assert(offsetof(UAIHotSpotSlot, UserId) == 0x00009C, "Member 'UAIHotSpotSlot::UserId' has a wrong offset!");
static_assert(offsetof(UAIHotSpotSlot, Owner) == 0x0000A8, "Member 'UAIHotSpotSlot::Owner' has a wrong offset!");
static_assert(offsetof(UAIHotSpotSlot, SlotIndex) == 0x0000B0, "Member 'UAIHotSpotSlot::SlotIndex' has a wrong offset!");
static_assert(offsetof(UAIHotSpotSlot, SlotState) == 0x0000B4, "Member 'UAIHotSpotSlot::SlotState' has a wrong offset!");

class UFortAIHotSpotSlot final : public UAIHotSpotSlot
{
public:
	EFortHotSpotSlot                              SlotType;
	uint8                                         Pad_121[0x3];
	uint8                                         bHasProjectedLocation : 1;
	uint8                                         bProjectedOnLowArea : 1;
	uint8                                         bIsAutoGenerated : 1;
	uint8                                         bCanDuplicateOnProjection : 1;
	uint8                                         bCanProjectUp : 1;
	uint8                                         Pad_125[0xB];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIHotSpotSlot">();
	}
	static class UFortAIHotSpotSlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIHotSpotSlot>();
	}
};
static_assert(alignof(UFortAIHotSpotSlot) == 0x000010, "Wrong alignment on UFortAIHotSpotSlot");
static_assert(sizeof(UFortAIHotSpotSlot) == 0x000130, "Wrong size on UFortAIHotSpotSlot");
static_assert(offsetof(UFortAIHotSpotSlot, SlotType) == 0x000120, "Member 'UFortAIHotSpotSlot::SlotType' has a wrong offset!");

class UFortNavArea_DefaultSmashable : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_DefaultSmashable">();
	}
	static class UFortNavArea_DefaultSmashable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_DefaultSmashable>();
	}
};
static_assert(alignof(UFortNavArea_DefaultSmashable) == 0x000008, "Wrong alignment on UFortNavArea_DefaultSmashable");
static_assert(sizeof(UFortNavArea_DefaultSmashable) == 0x000050, "Wrong size on UFortNavArea_DefaultSmashable");

class UFortNavArea_PlayerBuiltSmashable final : public UFortNavArea_DefaultSmashable
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_PlayerBuiltSmashable">();
	}
	static class UFortNavArea_PlayerBuiltSmashable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_PlayerBuiltSmashable>();
	}
};
static_assert(alignof(UFortNavArea_PlayerBuiltSmashable) == 0x000008, "Wrong alignment on UFortNavArea_PlayerBuiltSmashable");
static_assert(sizeof(UFortNavArea_PlayerBuiltSmashable) == 0x000050, "Wrong size on UFortNavArea_PlayerBuiltSmashable");

class UAIHotSpotSlotGenerator : public UObject
{
public:
	void GenerateSlots();

	class UAIHotSpotSlot* AddSlot(const struct FVector& RelativeLocation, const struct FRotator& RelativeRotation, TSubclassOf<class UAIHotSpotSlot> CustomSlotClass, bool bEnabled) const;
	class AAIHotSpot* GetHotSpot() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIHotSpotSlotGenerator">();
	}
	static class UAIHotSpotSlotGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIHotSpotSlotGenerator>();
	}
};
static_assert(alignof(UAIHotSpotSlotGenerator) == 0x000008, "Wrong alignment on UAIHotSpotSlotGenerator");
static_assert(sizeof(UAIHotSpotSlotGenerator) == 0x000028, "Wrong size on UAIHotSpotSlotGenerator");

class UFortNavArea_WoodenWall final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_WoodenWall">();
	}
	static class UFortNavArea_WoodenWall* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_WoodenWall>();
	}
};
static_assert(alignof(UFortNavArea_WoodenWall) == 0x000008, "Wrong alignment on UFortNavArea_WoodenWall");
static_assert(sizeof(UFortNavArea_WoodenWall) == 0x000050, "Wrong size on UFortNavArea_WoodenWall");

class UFortQueryContext_ConverterPawn final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_ConverterPawn">();
	}
	static class UFortQueryContext_ConverterPawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_ConverterPawn>();
	}
};
static_assert(alignof(UFortQueryContext_ConverterPawn) == 0x000008, "Wrong alignment on UFortQueryContext_ConverterPawn");
static_assert(sizeof(UFortQueryContext_ConverterPawn) == 0x000028, "Wrong size on UFortQueryContext_ConverterPawn");

class alignas(0x10) AFortAIHotSpot_Building final : public AFortAIHotSpot
{
public:
	class UAIHotSpotConfig*                       ExtraTypeConfig;
	uint8                                         Pad_468[0xE8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIHotSpot_Building">();
	}
	static class AFortAIHotSpot_Building* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAIHotSpot_Building>();
	}
};
static_assert(alignof(AFortAIHotSpot_Building) == 0x000010, "Wrong alignment on AFortAIHotSpot_Building");
static_assert(sizeof(AFortAIHotSpot_Building) == 0x000550, "Wrong size on AFortAIHotSpot_Building");
static_assert(offsetof(AFortAIHotSpot_Building, ExtraTypeConfig) == 0x000460, "Member 'AFortAIHotSpot_Building::ExtraTypeConfig' has a wrong offset!");

class UFortQueryContext_ConverterController final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_ConverterController">();
	}
	static class UFortQueryContext_ConverterController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_ConverterController>();
	}
};
static_assert(alignof(UFortQueryContext_ConverterController) == 0x000008, "Wrong alignment on UFortQueryContext_ConverterController");
static_assert(sizeof(UFortQueryContext_ConverterController) == 0x000028, "Wrong size on UFortQueryContext_ConverterController");

class UFortQueryContext_ConverterViewLocation final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_ConverterViewLocation">();
	}
	static class UFortQueryContext_ConverterViewLocation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_ConverterViewLocation>();
	}
};
static_assert(alignof(UFortQueryContext_ConverterViewLocation) == 0x000008, "Wrong alignment on UFortQueryContext_ConverterViewLocation");
static_assert(sizeof(UFortQueryContext_ConverterViewLocation) == 0x000028, "Wrong size on UFortQueryContext_ConverterViewLocation");

class UFortAthenaLeashComponent final : public UActorComponent
{
public:
	struct FScalableFloat                         LeashRadius;
	struct FVector                                LeashCenter;
	float                                         LeashRadiusSqr;
	uint8                                         Pad_E4[0x4];

public:
	void SetLeashRadius(float NewRadius);

	const struct FVector GetLeashCenter() const;
	float GetLeashRadius() const;
	bool IsInsideLeash(const struct FVector& Location) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLeashComponent">();
	}
	static class UFortAthenaLeashComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLeashComponent>();
	}
};
static_assert(alignof(UFortAthenaLeashComponent) == 0x000008, "Wrong alignment on UFortAthenaLeashComponent");
static_assert(sizeof(UFortAthenaLeashComponent) == 0x0000E8, "Wrong size on UFortAthenaLeashComponent");
static_assert(offsetof(UFortAthenaLeashComponent, LeashRadius) == 0x0000A0, "Member 'UFortAthenaLeashComponent::LeashRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaLeashComponent, LeashCenter) == 0x0000C8, "Member 'UFortAthenaLeashComponent::LeashCenter' has a wrong offset!");
static_assert(offsetof(UFortAthenaLeashComponent, LeashRadiusSqr) == 0x0000E0, "Member 'UFortAthenaLeashComponent::LeashRadiusSqr' has a wrong offset!");

class UFortMetaNavArea_Obstacles final : public UNavAreaMeta
{
public:
	int32                                         HealthThreshold;
	uint8                                         Pad_4C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMetaNavArea_Obstacles">();
	}
	static class UFortMetaNavArea_Obstacles* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMetaNavArea_Obstacles>();
	}
};
static_assert(alignof(UFortMetaNavArea_Obstacles) == 0x000008, "Wrong alignment on UFortMetaNavArea_Obstacles");
static_assert(sizeof(UFortMetaNavArea_Obstacles) == 0x000050, "Wrong size on UFortMetaNavArea_Obstacles");
static_assert(offsetof(UFortMetaNavArea_Obstacles, HealthThreshold) == 0x000048, "Member 'UFortMetaNavArea_Obstacles::HealthThreshold' has a wrong offset!");

class UFortQueryContext_ConverterViewRotation final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_ConverterViewRotation">();
	}
	static class UFortQueryContext_ConverterViewRotation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_ConverterViewRotation>();
	}
};
static_assert(alignof(UFortQueryContext_ConverterViewRotation) == 0x000008, "Wrong alignment on UFortQueryContext_ConverterViewRotation");
static_assert(sizeof(UFortQueryContext_ConverterViewRotation) == 0x000028, "Wrong size on UFortQueryContext_ConverterViewRotation");

class UFortSpawnPointsPercentageCurveSequence final : public UDataAsset
{
public:
	TArray<struct FDataTableRowHandle>            SpawnPointsPercentageCurves;
	EFortIntensityCurveSequenceType               SequenceType;
	uint8                                         Pad_41[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSpawnPointsPercentageCurveSequence">();
	}
	static class UFortSpawnPointsPercentageCurveSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSpawnPointsPercentageCurveSequence>();
	}
};
static_assert(alignof(UFortSpawnPointsPercentageCurveSequence) == 0x000008, "Wrong alignment on UFortSpawnPointsPercentageCurveSequence");
static_assert(sizeof(UFortSpawnPointsPercentageCurveSequence) == 0x000048, "Wrong size on UFortSpawnPointsPercentageCurveSequence");
static_assert(offsetof(UFortSpawnPointsPercentageCurveSequence, SpawnPointsPercentageCurves) == 0x000030, "Member 'UFortSpawnPointsPercentageCurveSequence::SpawnPointsPercentageCurves' has a wrong offset!");
static_assert(offsetof(UFortSpawnPointsPercentageCurveSequence, SequenceType) == 0x000040, "Member 'UFortSpawnPointsPercentageCurveSequence::SequenceType' has a wrong offset!");

class AFortAIController : public AAIController
{
public:
	uint8                                         Pad_3B0[0x28];
	uint8                                         bUsingNavMesh : 1;
	uint8                                         bAlwaysNotifyBumpWall : 1;
	uint8                                         bInstantRotation : 1;
	uint8                                         bTurnTransitionsEnabled : 1;
	uint8                                         BitPad_3D8_4 : 4;
	uint8                                         BitPad_3D9_0 : 7;
	uint8                                         bIgnoreAllActorsThatAreNotPawnsOrBuildings : 1;
	uint8                                         bAllowHotspotAbilityLooping : 1;
	uint8                                         Pad_3DB[0x5];
	class UFortPathFollowingComponent*            FortPathFollowingComp;
	struct FAIHotSpotUseInfo                      CurrentHotSpot;
	class UFortAthenaAIRuntimeParametersComponent* CachedAIRuntimeParametersComponent;
	class UFortAthenaAIRuntimeParameters_AffiliationBase* CachedAffiliationRuntimeParameters;
	float                                         GoalInfoUpdateRate;
	uint8                                         Pad_414[0x4];
	class AActor*                                 GoalActor;
	float                                         GoalVisibilityPersistanceTime;
	uint8                                         Pad_424[0xAC];
	class AFortAIPawn*                            MyFortPawn;
	TMulticastInlineDelegate<void()>              OnTeamSetDelegate;
	TMulticastInlineDelegate<void(class AFortAIController* OwnerController, class UFortControllerComponent* AttachedComponent)> OnControllerComponentAttachedEvent;
	class UAIGoalComponent*                       AIGoalComponent;
	TMulticastInlineDelegate<void(class AActor* NewActor, class AActor* OldActor)> OnControllerNewGoalActorEvent;
	class UBehaviorTree*                          BTAssetToRunOnPawnAISpawned;
	class UFortGameStateComponent_AffiliationManager* CachedAffiliationManager;

public:
	static bool IsIgnoringProximity(class AFortAIController* FortAIController);

	void ClearAllFocalPoints();
	bool CreateBuildingActor(TSubclassOf<class ABuildingSMActor> BuildingClass, const struct FVector& BuildLoc, const struct FRotator& BuildRot, bool bMirrored);
	void IgnoreProximityForDuration(float DurationToIgnore);
	bool IsAllowedToSleep();
	void LockBehaviorResource();
	void LockMovementResource();
	void OnActorGoalDestroyed(class AActor* DestroyedActor);
	void OnBuildingActorGoalDestroyed();
	void SetAlwaysGameplayRelevant(bool bInAlwaysGameplayRelevant);
	void SetFullPeripheralVision(bool bNewFullPeripheralVision);
	void SetGoalActor(class AActor* InActor, bool bLocationAlwaysKnown);
	void SetIsSleeping(bool bNewSleepStatus);
	void SetPawnAIType(EFortressAIType NewAIType, class AActor* SpawnSpot);
	void SetTeam(EFortTeam InTeam);
	void SetTeamInt(uint8 InTeam);
	void SetupCustomVIM(class UClass* VIM);
	void UnlockBehaviorResource();
	void UnlockMovementResource();
	void WakeUp();

	class UFortAIEncounterInfo* GetEncounterInfo() const;
	class AActor* GetGoalActor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIController">();
	}
	static class AFortAIController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAIController>();
	}
};
static_assert(alignof(AFortAIController) == 0x000008, "Wrong alignment on AFortAIController");
static_assert(sizeof(AFortAIController) == 0x000520, "Wrong size on AFortAIController");
static_assert(offsetof(AFortAIController, FortPathFollowingComp) == 0x0003E0, "Member 'AFortAIController::FortPathFollowingComp' has a wrong offset!");
static_assert(offsetof(AFortAIController, CurrentHotSpot) == 0x0003E8, "Member 'AFortAIController::CurrentHotSpot' has a wrong offset!");
static_assert(offsetof(AFortAIController, CachedAIRuntimeParametersComponent) == 0x000400, "Member 'AFortAIController::CachedAIRuntimeParametersComponent' has a wrong offset!");
static_assert(offsetof(AFortAIController, CachedAffiliationRuntimeParameters) == 0x000408, "Member 'AFortAIController::CachedAffiliationRuntimeParameters' has a wrong offset!");
static_assert(offsetof(AFortAIController, GoalInfoUpdateRate) == 0x000410, "Member 'AFortAIController::GoalInfoUpdateRate' has a wrong offset!");
static_assert(offsetof(AFortAIController, GoalActor) == 0x000418, "Member 'AFortAIController::GoalActor' has a wrong offset!");
static_assert(offsetof(AFortAIController, GoalVisibilityPersistanceTime) == 0x000420, "Member 'AFortAIController::GoalVisibilityPersistanceTime' has a wrong offset!");
static_assert(offsetof(AFortAIController, MyFortPawn) == 0x0004D0, "Member 'AFortAIController::MyFortPawn' has a wrong offset!");
static_assert(offsetof(AFortAIController, OnTeamSetDelegate) == 0x0004D8, "Member 'AFortAIController::OnTeamSetDelegate' has a wrong offset!");
static_assert(offsetof(AFortAIController, OnControllerComponentAttachedEvent) == 0x0004E8, "Member 'AFortAIController::OnControllerComponentAttachedEvent' has a wrong offset!");
static_assert(offsetof(AFortAIController, AIGoalComponent) == 0x0004F8, "Member 'AFortAIController::AIGoalComponent' has a wrong offset!");
static_assert(offsetof(AFortAIController, OnControllerNewGoalActorEvent) == 0x000500, "Member 'AFortAIController::OnControllerNewGoalActorEvent' has a wrong offset!");
static_assert(offsetof(AFortAIController, BTAssetToRunOnPawnAISpawned) == 0x000510, "Member 'AFortAIController::BTAssetToRunOnPawnAISpawned' has a wrong offset!");
static_assert(offsetof(AFortAIController, CachedAffiliationManager) == 0x000518, "Member 'AFortAIController::CachedAffiliationManager' has a wrong offset!");

class AAthenaAIController : public AFortAIController
{
public:
	uint8                                         Pad_520[0x20];
	class UFortGameplayAbility*                   PrimaryMeleeAttackAbilityInstance;
	class UFortGameplayAbility*                   PrimaryRangedAttackAbilityInstance;
	struct FVector                                NavWalkingSearchExtentScale;
	float                                         CheapFlyingNavPointHorizontalGridRatio;
	float                                         CheapFlyingNavNavPointVerticalGridRatio;
	struct FGameplayTagContainer                  CheapFlyingNavSmashableAbilityTag;
	uint8                                         bEnableCheapFlyingNavigation : 1;
	uint8                                         bAllowBacktrackPathfinding : 1;
	uint8                                         bIsGoalRequiredForBehavior : 1;
	uint8                                         bAutoGenerateHotspotOnPlayerBuildings : 1;
	uint8                                         BitPad_590_4 : 4;
	uint8                                         bRegisterToAthenaAIDropper : 1;
	uint8                                         Pad_592[0x6];
	class AActor*                                 SecondaryGoalActor;
	uint8                                         Pad_5A0[0x8];
	class UAthenaPathFollowingComponent*          AthenaPFC;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIController">();
	}
	static class AAthenaAIController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaAIController>();
	}
};
static_assert(alignof(AAthenaAIController) == 0x000008, "Wrong alignment on AAthenaAIController");
static_assert(sizeof(AAthenaAIController) == 0x0005B0, "Wrong size on AAthenaAIController");
static_assert(offsetof(AAthenaAIController, PrimaryMeleeAttackAbilityInstance) == 0x000540, "Member 'AAthenaAIController::PrimaryMeleeAttackAbilityInstance' has a wrong offset!");
static_assert(offsetof(AAthenaAIController, PrimaryRangedAttackAbilityInstance) == 0x000548, "Member 'AAthenaAIController::PrimaryRangedAttackAbilityInstance' has a wrong offset!");
static_assert(offsetof(AAthenaAIController, NavWalkingSearchExtentScale) == 0x000550, "Member 'AAthenaAIController::NavWalkingSearchExtentScale' has a wrong offset!");
static_assert(offsetof(AAthenaAIController, CheapFlyingNavPointHorizontalGridRatio) == 0x000568, "Member 'AAthenaAIController::CheapFlyingNavPointHorizontalGridRatio' has a wrong offset!");
static_assert(offsetof(AAthenaAIController, CheapFlyingNavNavPointVerticalGridRatio) == 0x00056C, "Member 'AAthenaAIController::CheapFlyingNavNavPointVerticalGridRatio' has a wrong offset!");
static_assert(offsetof(AAthenaAIController, CheapFlyingNavSmashableAbilityTag) == 0x000570, "Member 'AAthenaAIController::CheapFlyingNavSmashableAbilityTag' has a wrong offset!");
static_assert(offsetof(AAthenaAIController, SecondaryGoalActor) == 0x000598, "Member 'AAthenaAIController::SecondaryGoalActor' has a wrong offset!");
static_assert(offsetof(AAthenaAIController, AthenaPFC) == 0x0005A8, "Member 'AAthenaAIController::AthenaPFC' has a wrong offset!");

class AIrwinAIController final : public AAthenaAIController
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IrwinAIController">();
	}
	static class AIrwinAIController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AIrwinAIController>();
	}
};
static_assert(alignof(AIrwinAIController) == 0x000008, "Wrong alignment on AIrwinAIController");
static_assert(sizeof(AIrwinAIController) == 0x0005B0, "Wrong size on AIrwinAIController");

class UAIHotSpotManagerProxy : public UAIHotSpotManager
{
public:
	uint8                                         Pad_28[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIHotSpotManagerProxy">();
	}
	static class UAIHotSpotManagerProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIHotSpotManagerProxy>();
	}
};
static_assert(alignof(UAIHotSpotManagerProxy) == 0x000008, "Wrong alignment on UAIHotSpotManagerProxy");
static_assert(sizeof(UAIHotSpotManagerProxy) == 0x000080, "Wrong size on UAIHotSpotManagerProxy");

class UAIHotSpotSlotGenerator_OnBoundingBox : public UAIHotSpotSlotGenerator
{
public:
	TSubclassOf<class UAIHotSpotSlot>             SlotClass;
	struct FVector                                MaxExtent;
	float                                         ExpandBy;
	float                                         OffsetFromEdge;
	float                                         Spacing;
	uint8                                         bLimitMaxExtent : 1;
	uint8                                         bMustHitFocusActor : 1;
	uint8                                         Pad_55[0x3];
	EBoundingBoxSlotDirectionCalculation          SlotDirectionCalculation;
	uint8                                         Pad_59[0x3F];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIHotSpotSlotGenerator_OnBoundingBox">();
	}
	static class UAIHotSpotSlotGenerator_OnBoundingBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIHotSpotSlotGenerator_OnBoundingBox>();
	}
};
static_assert(alignof(UAIHotSpotSlotGenerator_OnBoundingBox) == 0x000008, "Wrong alignment on UAIHotSpotSlotGenerator_OnBoundingBox");
static_assert(sizeof(UAIHotSpotSlotGenerator_OnBoundingBox) == 0x000098, "Wrong size on UAIHotSpotSlotGenerator_OnBoundingBox");
static_assert(offsetof(UAIHotSpotSlotGenerator_OnBoundingBox, SlotClass) == 0x000028, "Member 'UAIHotSpotSlotGenerator_OnBoundingBox::SlotClass' has a wrong offset!");
static_assert(offsetof(UAIHotSpotSlotGenerator_OnBoundingBox, MaxExtent) == 0x000030, "Member 'UAIHotSpotSlotGenerator_OnBoundingBox::MaxExtent' has a wrong offset!");
static_assert(offsetof(UAIHotSpotSlotGenerator_OnBoundingBox, ExpandBy) == 0x000048, "Member 'UAIHotSpotSlotGenerator_OnBoundingBox::ExpandBy' has a wrong offset!");
static_assert(offsetof(UAIHotSpotSlotGenerator_OnBoundingBox, OffsetFromEdge) == 0x00004C, "Member 'UAIHotSpotSlotGenerator_OnBoundingBox::OffsetFromEdge' has a wrong offset!");
static_assert(offsetof(UAIHotSpotSlotGenerator_OnBoundingBox, Spacing) == 0x000050, "Member 'UAIHotSpotSlotGenerator_OnBoundingBox::Spacing' has a wrong offset!");
static_assert(offsetof(UAIHotSpotSlotGenerator_OnBoundingBox, SlotDirectionCalculation) == 0x000058, "Member 'UAIHotSpotSlotGenerator_OnBoundingBox::SlotDirectionCalculation' has a wrong offset!");

class UFortAIHotSpotSlotGenerator_OnBoundingBox final : public UAIHotSpotSlotGenerator_OnBoundingBox
{
public:
	float                                         DistanceForRangedSlots;
	float                                         DistanceForHugeSlots;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIHotSpotSlotGenerator_OnBoundingBox">();
	}
	static class UFortAIHotSpotSlotGenerator_OnBoundingBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIHotSpotSlotGenerator_OnBoundingBox>();
	}
};
static_assert(alignof(UFortAIHotSpotSlotGenerator_OnBoundingBox) == 0x000008, "Wrong alignment on UFortAIHotSpotSlotGenerator_OnBoundingBox");
static_assert(sizeof(UFortAIHotSpotSlotGenerator_OnBoundingBox) == 0x0000A0, "Wrong size on UFortAIHotSpotSlotGenerator_OnBoundingBox");
static_assert(offsetof(UFortAIHotSpotSlotGenerator_OnBoundingBox, DistanceForRangedSlots) == 0x000098, "Member 'UFortAIHotSpotSlotGenerator_OnBoundingBox::DistanceForRangedSlots' has a wrong offset!");
static_assert(offsetof(UFortAIHotSpotSlotGenerator_OnBoundingBox, DistanceForHugeSlots) == 0x00009C, "Member 'UFortAIHotSpotSlotGenerator_OnBoundingBox::DistanceForHugeSlots' has a wrong offset!");

class UAIHotSpotRenderingComponent final : public UDebugDrawComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIHotSpotRenderingComponent">();
	}
	static class UAIHotSpotRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIHotSpotRenderingComponent>();
	}
};
static_assert(alignof(UAIHotSpotRenderingComponent) == 0x000010, "Wrong alignment on UAIHotSpotRenderingComponent");
static_assert(sizeof(UAIHotSpotRenderingComponent) == 0x0005C0, "Wrong size on UAIHotSpotRenderingComponent");

class UFortAthenaAISpawnerDataComponent_Voice final : public UFortAthenaAISpawnerDataComponent_VoiceBase
{
public:
	TSubclassOf<class UFortAIComponent_Voice>     VoiceComponentClass;
	class UFortTaggedSoundBank*                   SoundBank;
	class UFortTaggedSoundBank*                   MaleSoundBankOverride;
	class UFortTaggedSoundBank*                   FemaleSoundBankOverride;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_Voice">();
	}
	static class UFortAthenaAISpawnerDataComponent_Voice* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_Voice>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_Voice) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_Voice");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_Voice) == 0x000050, "Wrong size on UFortAthenaAISpawnerDataComponent_Voice");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_Voice, VoiceComponentClass) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_Voice::VoiceComponentClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_Voice, SoundBank) == 0x000038, "Member 'UFortAthenaAISpawnerDataComponent_Voice::SoundBank' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_Voice, MaleSoundBankOverride) == 0x000040, "Member 'UFortAthenaAISpawnerDataComponent_Voice::MaleSoundBankOverride' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_Voice, FemaleSoundBankOverride) == 0x000048, "Member 'UFortAthenaAISpawnerDataComponent_Voice::FemaleSoundBankOverride' has a wrong offset!");

class UFortBotMissionManager final : public UObject
{
public:
	TSoftClassPtr<class UClass>                   BotPawnClass;
	TArray<class AFortPawn*>                      BotPawns;
	TArray<class UFortBotMissionLogic*>           ActiveMissionsLogicData;
	class UFortBotMissionLogic*                   PrimaryMissionLogicData;
	uint8                                         Pad_78[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBotMissionManager">();
	}
	static class UFortBotMissionManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBotMissionManager>();
	}
};
static_assert(alignof(UFortBotMissionManager) == 0x000008, "Wrong alignment on UFortBotMissionManager");
static_assert(sizeof(UFortBotMissionManager) == 0x0000D0, "Wrong size on UFortBotMissionManager");
static_assert(offsetof(UFortBotMissionManager, BotPawnClass) == 0x000028, "Member 'UFortBotMissionManager::BotPawnClass' has a wrong offset!");
static_assert(offsetof(UFortBotMissionManager, BotPawns) == 0x000050, "Member 'UFortBotMissionManager::BotPawns' has a wrong offset!");
static_assert(offsetof(UFortBotMissionManager, ActiveMissionsLogicData) == 0x000060, "Member 'UFortBotMissionManager::ActiveMissionsLogicData' has a wrong offset!");
static_assert(offsetof(UFortBotMissionManager, PrimaryMissionLogicData) == 0x000070, "Member 'UFortBotMissionManager::PrimaryMissionLogicData' has a wrong offset!");

class UAthenaAIBudgetManager final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x30];
	TMap<TWeakObjectPtr<class UObject>, struct FAthenaMemoryBudgetInterfaces> StaticallyRegisteredPawns;
	uint8                                         Pad_B0[0x1C8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIBudgetManager">();
	}
	static class UAthenaAIBudgetManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIBudgetManager>();
	}
};
static_assert(alignof(UAthenaAIBudgetManager) == 0x000008, "Wrong alignment on UAthenaAIBudgetManager");
static_assert(sizeof(UAthenaAIBudgetManager) == 0x000278, "Wrong size on UAthenaAIBudgetManager");
static_assert(offsetof(UAthenaAIBudgetManager, StaticallyRegisteredPawns) == 0x000060, "Member 'UAthenaAIBudgetManager::StaticallyRegisteredPawns' has a wrong offset!");

class AFortAthenaPatrolPoint final : public AActor
{
public:
	class AFortAthenaLocalGameplayBehavior*       LocalGameplayBehavior;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaPatrolPoint">();
	}
	static class AFortAthenaPatrolPoint* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaPatrolPoint>();
	}
};
static_assert(alignof(AFortAthenaPatrolPoint) == 0x000008, "Wrong alignment on AFortAthenaPatrolPoint");
static_assert(sizeof(AFortAthenaPatrolPoint) == 0x000290, "Wrong size on AFortAthenaPatrolPoint");
static_assert(offsetof(AFortAthenaPatrolPoint, LocalGameplayBehavior) == 0x000288, "Member 'AFortAthenaPatrolPoint::LocalGameplayBehavior' has a wrong offset!");

class UFortNavArea_DefenderNull final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_DefenderNull">();
	}
	static class UFortNavArea_DefenderNull* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_DefenderNull>();
	}
};
static_assert(alignof(UFortNavArea_DefenderNull) == 0x000008, "Wrong alignment on UFortNavArea_DefenderNull");
static_assert(sizeof(UFortNavArea_DefenderNull) == 0x000050, "Wrong size on UFortNavArea_DefenderNull");

class AFortAthenaLocalGameplayBehavior final : public AActor
{
public:
	bool                                          bNeedToAwakeDuringExecution;
	uint8                                         Pad_289[0x7];
	class UFortAthenaBTTask_DynamicBlueprint*     CachedTask;

public:
	void FinishExecute();
	void OnAbort();
	void OnExecute(class AActor* Activator);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLocalGameplayBehavior">();
	}
	static class AFortAthenaLocalGameplayBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaLocalGameplayBehavior>();
	}
};
static_assert(alignof(AFortAthenaLocalGameplayBehavior) == 0x000008, "Wrong alignment on AFortAthenaLocalGameplayBehavior");
static_assert(sizeof(AFortAthenaLocalGameplayBehavior) == 0x000298, "Wrong size on AFortAthenaLocalGameplayBehavior");
static_assert(offsetof(AFortAthenaLocalGameplayBehavior, bNeedToAwakeDuringExecution) == 0x000288, "Member 'AFortAthenaLocalGameplayBehavior::bNeedToAwakeDuringExecution' has a wrong offset!");
static_assert(offsetof(AFortAthenaLocalGameplayBehavior, CachedTask) == 0x000290, "Member 'AFortAthenaLocalGameplayBehavior::CachedTask' has a wrong offset!");

class UFortAIPerceptionComponent : public UAIPerceptionComponent
{
public:
	float                                         LosingSightRadiusBump;
	uint8                                         Pad_17C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIPerceptionComponent">();
	}
	static class UFortAIPerceptionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIPerceptionComponent>();
	}
};
static_assert(alignof(UFortAIPerceptionComponent) == 0x000008, "Wrong alignment on UFortAIPerceptionComponent");
static_assert(sizeof(UFortAIPerceptionComponent) == 0x000180, "Wrong size on UFortAIPerceptionComponent");
static_assert(offsetof(UFortAIPerceptionComponent, LosingSightRadiusBump) == 0x000178, "Member 'UFortAIPerceptionComponent::LosingSightRadiusBump' has a wrong offset!");

class UFortNavAreaAutomatic : public UFortNavArea
{
public:
	struct FCurveTableRowHandle                   NavCostCurveHandle;
	int32                                         NavAreaStrength;
	float                                         AutomaticNavCost;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavAreaAutomatic">();
	}
	static class UFortNavAreaAutomatic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavAreaAutomatic>();
	}
};
static_assert(alignof(UFortNavAreaAutomatic) == 0x000008, "Wrong alignment on UFortNavAreaAutomatic");
static_assert(sizeof(UFortNavAreaAutomatic) == 0x000068, "Wrong size on UFortNavAreaAutomatic");
static_assert(offsetof(UFortNavAreaAutomatic, NavCostCurveHandle) == 0x000050, "Member 'UFortNavAreaAutomatic::NavCostCurveHandle' has a wrong offset!");
static_assert(offsetof(UFortNavAreaAutomatic, NavAreaStrength) == 0x000060, "Member 'UFortNavAreaAutomatic::NavAreaStrength' has a wrong offset!");
static_assert(offsetof(UFortNavAreaAutomatic, AutomaticNavCost) == 0x000064, "Member 'UFortNavAreaAutomatic::AutomaticNavCost' has a wrong offset!");

class UAthenaAIPerceptionComponent final : public UFortAIPerceptionComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIPerceptionComponent">();
	}
	static class UAthenaAIPerceptionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIPerceptionComponent>();
	}
};
static_assert(alignof(UAthenaAIPerceptionComponent) == 0x000008, "Wrong alignment on UAthenaAIPerceptionComponent");
static_assert(sizeof(UAthenaAIPerceptionComponent) == 0x000180, "Wrong size on UAthenaAIPerceptionComponent");

class UFortBehaviorTreeComponent : public UBehaviorTreeComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBehaviorTreeComponent">();
	}
	static class UFortBehaviorTreeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBehaviorTreeComponent>();
	}
};
static_assert(alignof(UFortBehaviorTreeComponent) == 0x000008, "Wrong alignment on UFortBehaviorTreeComponent");
static_assert(sizeof(UFortBehaviorTreeComponent) == 0x000290, "Wrong size on UFortBehaviorTreeComponent");

class UFortAthenaAISpawnerDataComponent_Vehicle final : public UFortAthenaAISpawnerDataComponent_VehicleBase
{
public:
	TSubclassOf<class AFortAthenaVehicle>         VehicleToSpawnAndEnter;
	uint8                                         bSetInfiniteFuel : 1;
	uint8                                         Pad_39[0x7];
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> VehicleSkillSets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_Vehicle">();
	}
	static class UFortAthenaAISpawnerDataComponent_Vehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_Vehicle>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_Vehicle) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_Vehicle");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_Vehicle) == 0x000050, "Wrong size on UFortAthenaAISpawnerDataComponent_Vehicle");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_Vehicle, VehicleToSpawnAndEnter) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_Vehicle::VehicleToSpawnAndEnter' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_Vehicle, VehicleSkillSets) == 0x000040, "Member 'UFortAthenaAISpawnerDataComponent_Vehicle::VehicleSkillSets' has a wrong offset!");

class AFortBotController final : public AFortAIController
{
public:
	class UFortBotMissionLogic*                   CurrentMissionLogic;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBotController">();
	}
	static class AFortBotController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortBotController>();
	}
};
static_assert(alignof(AFortBotController) == 0x000008, "Wrong alignment on AFortBotController");
static_assert(sizeof(AFortBotController) == 0x000528, "Wrong size on AFortBotController");
static_assert(offsetof(AFortBotController, CurrentMissionLogic) == 0x000520, "Member 'AFortBotController::CurrentMissionLogic' has a wrong offset!");

class UAthenaBehaviorTreeComponent final : public UFortBehaviorTreeComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaBehaviorTreeComponent">();
	}
	static class UAthenaBehaviorTreeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaBehaviorTreeComponent>();
	}
};
static_assert(alignof(UAthenaBehaviorTreeComponent) == 0x000008, "Wrong alignment on UAthenaBehaviorTreeComponent");
static_assert(sizeof(UAthenaBehaviorTreeComponent) == 0x000290, "Wrong size on UAthenaBehaviorTreeComponent");

class AFortAIDirector : public AActor
{
public:
	uint8                                         Pad_288[0x10];
	struct FCurveTableRowHandle                   MaxAliveCurve;
	struct FCurveTableRowHandle                   MinAliveCurve;
	struct FIntensityData                         IntensityInfo;
	struct FFortAIEncounterPIDController          AIDirectorPIDController;
	struct FFortAIEncounterPIDControllerSettings  PIDControllerSettings;
	struct FUtilityData                           UtilityContributionData[0x10];
	float                                         UnreachableLocationPathCost;
	uint8                                         Pad_784[0x4];
	struct FFortPlayerPerformanceEstimateSettings PlayerPerformanceEstimateSettings;
	uint8                                         bUsePrototypeEnemies : 1;
	uint8                                         Pad_7C9[0x3];
	bool                                          bForceByPassNavMeshForAISpawning;
	uint8                                         Pad_7CD[0x3];
	TArray<EFortEncounterDirection>               DebugEncounterDirections;
	EDespawnAIType                                DespawnAIType;
	uint8                                         Pad_7E1[0x3];
	float                                         DespawnDistance;
	float                                         DespawnInterval;
	uint8                                         Pad_7EC[0x4];
	struct FGameplayTagContainer                  DebugSpawnAIGroupTags;
	struct FGameplayTagContainer                  DebugEncounterTags;
	float                                         BurstSpawnThreatVisualsEndDelay;
	uint8                                         Pad_834[0x4];
	TArray<struct FFortAIEncounterSpawnGroupCapsProfile> EncounterSpawnGroupCapSettings;
	TArray<struct FFortAIEncounterSpawnPointsProfile> EncounterSpawnPointsSettings;
	TArray<struct FFortAIEncounterPawnDifficultyLevelModifier> EncounterPawnDifficultyLevelModifiers;
	TArray<struct FFortAISpawnGroupUpgradeData>   SpawnGroupUpgrades;
	float                                         GuaranteedUpgradeGroupUtilityBonus;
	float                                         DiscreteEncounterUtilityDesireMappings[0x4];
	EFortAIUtility                                InitialDynamicUtilities[0x4];
	TStructCycleFixup<struct FEncounterEnvironmentQueryInfo, 0x0028, 0x08> SpawnLocationPlacementQueries[0x4];
	TStructCycleFixup<struct FEncounterEnvironmentQueryInfo, 0x0028, 0x08> SpawnLocationActorSearchQueries[0x4];
	class UFortAIDirectorDataTrackingSettings*    DataTrackingSettings;
	TArray<struct FDataTableRowHandle>            BaseLootDropData;
	TArray<struct FFortAILootDropModifiers>       LootDropModifiers;
	struct FGameplayTagQuery                      LootDropDenialQuery;
	uint8                                         bDebugEncounterQueries : 1;
	uint8                                         Pad_A41[0x17];
	TArray<class AFortPlayerControllerZone*>      PlayerControllersForBVTree;
	TArray<class AFortPlayerPawn*>                PlayerPawnsForBVTree;
	uint8                                         Pad_A78[0x30];
	TArray<class AFortAIController*>              AIControllersForBVTree;
	TArray<class AFortAIPawn*>                    AIPawnsForBVTree;
	uint8                                         Pad_AC8[0x30];
	TArray<class AFortAthenaAIBotController*>     AIPlayerBotControllersForBVTree;
	TArray<class AFortPlayerPawn*>                AIPlayerBotPawnsForBVTree;
	uint8                                         Pad_B18[0x30];
	TArray<class AFortAthenaAIBotController*>     AINonPlayerBotControllersForBVTree;
	TArray<class AFortPlayerPawn*>                AINonPlayerBotPawnsForBVTree;
	uint8                                         Pad_B68[0x30];
	TArray<class AFortPlayerPawn*>                NonPlayerBotPawns;
	TArray<class AFortPlayerPawn*>                PlayerBotPawns;
	TArray<class AFortPlayerPawn*>                PlayerPawns;
	TArray<class AFortAIPawn*>                    FortAIPawns;
	uint8                                         Pad_BD8[0x100];
	bool                                          bUseLODSettings;
	uint8                                         Pad_CD9[0x6F];
	TScriptInterface<class IFortAthenaAILODSettings> CachedLODSettingsManager;
	bool                                          bAsyncProcessUpdateAliveAIs;
	bool                                          bAllowProcessPlayerTargeting;
	uint8                                         Pad_D5A[0x2];
	int32                                         MaxNumLODAIProcessPerFrame;
	struct FFortEncounterPawnNumberCaps           DefaultEncounterPawnCaps;
	uint8                                         Pad_D78[0x8];
	class UReporterGraph*                         IntensityGraph;
	class UReporterGraph*                         UtilitiesGraph;
	class UReporterGraph*                         PIDValuesGraph;
	class UReporterGraph*                         PIDContributionsGraph;
	uint8                                         bNightActive : 1;
	uint8                                         bAIDisabled : 1;
	uint8                                         bRegisteredForDayPhaseChange : 1;
	uint8                                         bUseSpawnCap : 1;
	uint8                                         Pad_DA1[0x3];
	int32                                         NightCount;
	float                                         NightEncounterFailureBreatherTime;
	float                                         EncounterPawnSpawnInterval;
	TSubclassOf<class UFortAIEncounterInfo>       DefaultNightEncounter;
	TSubclassOf<class UFortAIEncounterInfo>       DummyDebugEncounter;
	TSubclassOf<class UFortAIEncounterInfo>       BaseEncounterClass;
	int32                                         MaxActiveAlive;
	int32                                         NumActiveAlive;
	int32                                         NumPendingCapRelevantAI;
	uint8                                         Pad_DD4[0x54];
	TArray<struct FPendingSpawnInfo>              PendingSpawns;
	int32                                         MaxAISpawnedPerFrame;
	int32                                         MaxAIDespawnedPerFrame;
	int32                                         DespawnAllAIMaxAIDespawnedPerFrame;
	uint8                                         Pad_E44[0x4];
	TArray<TWeakObjectPtr<class AFortAIPawn>>     PendingDespawns;
	uint8                                         Pad_E58[0x8];
	int32                                         NumWorldSubdivides;
	float                                         MinAISpawnDistanceFromPlayers;
	struct FGameplayTagContainer                  AmbientThreatPreferredPlacementActorTags;
	struct FGameplayTagContainer                  AmbientThreatRequiredPlacementActorTags;
	TArray<class UFortAIEncounterInfo*>           ActiveEncounters;
	TArray<class UFortAIEncounterInfo*>           InactiveEncounters;
	TArray<struct FFortPendingStoppedEncounterData> PendingStoppedEncounters;
	class UFortAIEncounterInfo*                   ActiveDefaultEncounter;
	class UFortAIEncounterInfo*                   ActiveDummyDebugEncounter;
	TArray<class UFortAIEncounterSequence*>       EncounterSequences;
	class UEQSRenderingComponent*                 EQSRenderingComp;
	int32                                         DebugGraphUpdateFrequency;
	float                                         MaxNormalLODDistanceToPlayer;
	float                                         AIRelevantDistanceToPlayer;
	float                                         EncounterRelevantDistanceToPlayer;
	float                                         EncounterRelevantDistanceToDefender;
	uint8                                         Pad_F14[0x4];
	TArray<TScriptInterface<class IFortPatrolWardInterface>> PatrolWards;
	uint8                                         Pad_F28[0x4];
	int32                                         MaxTotalActiveAliveAI;
	int32                                         MaxEncounterActiveAliveAI;
	int32                                         MaxSPUsed;
	uint8                                         Pad_F38[0x8];
	TArray<struct FUtilityTypeFloatPair>          DebugEncounterTopUtilityPercentages;
	TArray<class UCurveFloat*>                    DebugEncounterSpawnPointsCurves;
	uint8                                         bDebugAllowEncounterModifierTags : 1;
	uint8                                         Pad_F61[0x3];
	int32                                         SimulatedNumberOfPlayersForAIEncounters;
	uint8                                         Pad_F68[0x78];
	int32                                         MaxNumberOfEncounterGroups;
	uint8                                         Pad_FE4[0x4];
	TArray<class ABuildingProp_AISpawner*>        RegisteredAISpawners;
	uint8                                         Pad_FF8[0x8];

public:
	static TArray<EFortEncounterDirection> ConvertInvalidDirectionsToValidDirections(const TArray<EFortEncounterDirection>& InvalidDirections);
	static EFortEncounterDirection GetEncounterDirectionFromVector(const struct FVector& DirectionVector);
	static struct FVector GetVectorFromEncounterDirection(EFortEncounterDirection Direction);

	void Activate();
	void Deactivate();
	int32 GetNumActiveEncounters();
	void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void OnDirectorDeactivated();
	void OnFadeStarted();
	void OnPawnDied(class AFortAIPawn* KilledPawn);
	void OnPeakStarted();
	void OnPlayerDied(class AFortPlayerPawn* PlayerPawn);
	void OnPlayerSpawn(class AFortPlayerPawn* PlayerPawn);
	void OnRampStarted();
	void OnRestStarted();
	void PostDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void ReceivePawnSpawned(class AFortPawn* SpawnedPawn);
	void RegisterPatrolWard(TScriptInterface<class IFortPatrolWardInterface> PatrolWard);
	class UFortAIEncounterInfo* StartEncounter(class FString& EncounterInstigator, class UFortDifficultyEncounterSettings* DifficultyEncounterSettings, const struct FFortAIEncounterQueryData& OptionalQueryData);
	void UnregisterPatrolWard(TScriptInterface<class IFortPatrolWardInterface> PatrolWard);

	void GetAmbientThreatEncounterSpawnLocations(TArray<struct FVector>* AmbientThreatEncounterSpawnLocations) const;
	int32 GetNumPlayers() const;
	TArray<class ABuildingRift*> GetRiftsFromClosestActiveEncounterTo(class AActor* Target) const;
	bool IsAnyActiveEncounterRelevantToDefender(class AFortAIPawn* Defender) const;
	bool IsAnyActiveEncounterRelevantToPlayer(const class AFortPlayerPawn* Player) const;
	bool IsAnyAIRelevantToPlayer(class AFortPlayerPawn* Player) const;
	bool IsAnyEncounterGoalWithinDistanceOfPoint(const struct FVector& Point, float Distance, bool bOnlyActiveEncounters) const;
	bool IsLineTooCloseToPatrolWards(const struct FVector& LineStart, const struct FVector& LineEnd) const;
	bool IsPointTooCloseToPatrolWards(const struct FVector& Point, const EWardAffectType WardEffectTypeFilter) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIDirector">();
	}
	static class AFortAIDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAIDirector>();
	}
};
static_assert(alignof(AFortAIDirector) == 0x000008, "Wrong alignment on AFortAIDirector");
static_assert(sizeof(AFortAIDirector) == 0x001000, "Wrong size on AFortAIDirector");
static_assert(offsetof(AFortAIDirector, MaxAliveCurve) == 0x000298, "Member 'AFortAIDirector::MaxAliveCurve' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, MinAliveCurve) == 0x0002A8, "Member 'AFortAIDirector::MinAliveCurve' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, IntensityInfo) == 0x0002B8, "Member 'AFortAIDirector::IntensityInfo' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, AIDirectorPIDController) == 0x0002E8, "Member 'AFortAIDirector::AIDirectorPIDController' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, PIDControllerSettings) == 0x000350, "Member 'AFortAIDirector::PIDControllerSettings' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, UtilityContributionData) == 0x000380, "Member 'AFortAIDirector::UtilityContributionData' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, UnreachableLocationPathCost) == 0x000780, "Member 'AFortAIDirector::UnreachableLocationPathCost' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, PlayerPerformanceEstimateSettings) == 0x000788, "Member 'AFortAIDirector::PlayerPerformanceEstimateSettings' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, bForceByPassNavMeshForAISpawning) == 0x0007CC, "Member 'AFortAIDirector::bForceByPassNavMeshForAISpawning' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DebugEncounterDirections) == 0x0007D0, "Member 'AFortAIDirector::DebugEncounterDirections' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DespawnAIType) == 0x0007E0, "Member 'AFortAIDirector::DespawnAIType' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DespawnDistance) == 0x0007E4, "Member 'AFortAIDirector::DespawnDistance' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DespawnInterval) == 0x0007E8, "Member 'AFortAIDirector::DespawnInterval' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DebugSpawnAIGroupTags) == 0x0007F0, "Member 'AFortAIDirector::DebugSpawnAIGroupTags' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DebugEncounterTags) == 0x000810, "Member 'AFortAIDirector::DebugEncounterTags' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, BurstSpawnThreatVisualsEndDelay) == 0x000830, "Member 'AFortAIDirector::BurstSpawnThreatVisualsEndDelay' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, EncounterSpawnGroupCapSettings) == 0x000838, "Member 'AFortAIDirector::EncounterSpawnGroupCapSettings' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, EncounterSpawnPointsSettings) == 0x000848, "Member 'AFortAIDirector::EncounterSpawnPointsSettings' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, EncounterPawnDifficultyLevelModifiers) == 0x000858, "Member 'AFortAIDirector::EncounterPawnDifficultyLevelModifiers' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, SpawnGroupUpgrades) == 0x000868, "Member 'AFortAIDirector::SpawnGroupUpgrades' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, GuaranteedUpgradeGroupUtilityBonus) == 0x000878, "Member 'AFortAIDirector::GuaranteedUpgradeGroupUtilityBonus' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DiscreteEncounterUtilityDesireMappings) == 0x00087C, "Member 'AFortAIDirector::DiscreteEncounterUtilityDesireMappings' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, InitialDynamicUtilities) == 0x00088C, "Member 'AFortAIDirector::InitialDynamicUtilities' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, SpawnLocationPlacementQueries) == 0x000890, "Member 'AFortAIDirector::SpawnLocationPlacementQueries' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, SpawnLocationActorSearchQueries) == 0x000930, "Member 'AFortAIDirector::SpawnLocationActorSearchQueries' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DataTrackingSettings) == 0x0009D0, "Member 'AFortAIDirector::DataTrackingSettings' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, BaseLootDropData) == 0x0009D8, "Member 'AFortAIDirector::BaseLootDropData' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, LootDropModifiers) == 0x0009E8, "Member 'AFortAIDirector::LootDropModifiers' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, LootDropDenialQuery) == 0x0009F8, "Member 'AFortAIDirector::LootDropDenialQuery' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, PlayerControllersForBVTree) == 0x000A58, "Member 'AFortAIDirector::PlayerControllersForBVTree' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, PlayerPawnsForBVTree) == 0x000A68, "Member 'AFortAIDirector::PlayerPawnsForBVTree' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, AIControllersForBVTree) == 0x000AA8, "Member 'AFortAIDirector::AIControllersForBVTree' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, AIPawnsForBVTree) == 0x000AB8, "Member 'AFortAIDirector::AIPawnsForBVTree' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, AIPlayerBotControllersForBVTree) == 0x000AF8, "Member 'AFortAIDirector::AIPlayerBotControllersForBVTree' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, AIPlayerBotPawnsForBVTree) == 0x000B08, "Member 'AFortAIDirector::AIPlayerBotPawnsForBVTree' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, AINonPlayerBotControllersForBVTree) == 0x000B48, "Member 'AFortAIDirector::AINonPlayerBotControllersForBVTree' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, AINonPlayerBotPawnsForBVTree) == 0x000B58, "Member 'AFortAIDirector::AINonPlayerBotPawnsForBVTree' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, NonPlayerBotPawns) == 0x000B98, "Member 'AFortAIDirector::NonPlayerBotPawns' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, PlayerBotPawns) == 0x000BA8, "Member 'AFortAIDirector::PlayerBotPawns' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, PlayerPawns) == 0x000BB8, "Member 'AFortAIDirector::PlayerPawns' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, FortAIPawns) == 0x000BC8, "Member 'AFortAIDirector::FortAIPawns' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, bUseLODSettings) == 0x000CD8, "Member 'AFortAIDirector::bUseLODSettings' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, CachedLODSettingsManager) == 0x000D48, "Member 'AFortAIDirector::CachedLODSettingsManager' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, bAsyncProcessUpdateAliveAIs) == 0x000D58, "Member 'AFortAIDirector::bAsyncProcessUpdateAliveAIs' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, bAllowProcessPlayerTargeting) == 0x000D59, "Member 'AFortAIDirector::bAllowProcessPlayerTargeting' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, MaxNumLODAIProcessPerFrame) == 0x000D5C, "Member 'AFortAIDirector::MaxNumLODAIProcessPerFrame' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DefaultEncounterPawnCaps) == 0x000D60, "Member 'AFortAIDirector::DefaultEncounterPawnCaps' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, IntensityGraph) == 0x000D80, "Member 'AFortAIDirector::IntensityGraph' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, UtilitiesGraph) == 0x000D88, "Member 'AFortAIDirector::UtilitiesGraph' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, PIDValuesGraph) == 0x000D90, "Member 'AFortAIDirector::PIDValuesGraph' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, PIDContributionsGraph) == 0x000D98, "Member 'AFortAIDirector::PIDContributionsGraph' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, NightCount) == 0x000DA4, "Member 'AFortAIDirector::NightCount' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, NightEncounterFailureBreatherTime) == 0x000DA8, "Member 'AFortAIDirector::NightEncounterFailureBreatherTime' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, EncounterPawnSpawnInterval) == 0x000DAC, "Member 'AFortAIDirector::EncounterPawnSpawnInterval' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DefaultNightEncounter) == 0x000DB0, "Member 'AFortAIDirector::DefaultNightEncounter' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DummyDebugEncounter) == 0x000DB8, "Member 'AFortAIDirector::DummyDebugEncounter' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, BaseEncounterClass) == 0x000DC0, "Member 'AFortAIDirector::BaseEncounterClass' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, MaxActiveAlive) == 0x000DC8, "Member 'AFortAIDirector::MaxActiveAlive' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, NumActiveAlive) == 0x000DCC, "Member 'AFortAIDirector::NumActiveAlive' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, NumPendingCapRelevantAI) == 0x000DD0, "Member 'AFortAIDirector::NumPendingCapRelevantAI' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, PendingSpawns) == 0x000E28, "Member 'AFortAIDirector::PendingSpawns' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, MaxAISpawnedPerFrame) == 0x000E38, "Member 'AFortAIDirector::MaxAISpawnedPerFrame' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, MaxAIDespawnedPerFrame) == 0x000E3C, "Member 'AFortAIDirector::MaxAIDespawnedPerFrame' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DespawnAllAIMaxAIDespawnedPerFrame) == 0x000E40, "Member 'AFortAIDirector::DespawnAllAIMaxAIDespawnedPerFrame' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, PendingDespawns) == 0x000E48, "Member 'AFortAIDirector::PendingDespawns' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, NumWorldSubdivides) == 0x000E60, "Member 'AFortAIDirector::NumWorldSubdivides' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, MinAISpawnDistanceFromPlayers) == 0x000E64, "Member 'AFortAIDirector::MinAISpawnDistanceFromPlayers' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, AmbientThreatPreferredPlacementActorTags) == 0x000E68, "Member 'AFortAIDirector::AmbientThreatPreferredPlacementActorTags' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, AmbientThreatRequiredPlacementActorTags) == 0x000E88, "Member 'AFortAIDirector::AmbientThreatRequiredPlacementActorTags' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, ActiveEncounters) == 0x000EA8, "Member 'AFortAIDirector::ActiveEncounters' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, InactiveEncounters) == 0x000EB8, "Member 'AFortAIDirector::InactiveEncounters' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, PendingStoppedEncounters) == 0x000EC8, "Member 'AFortAIDirector::PendingStoppedEncounters' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, ActiveDefaultEncounter) == 0x000ED8, "Member 'AFortAIDirector::ActiveDefaultEncounter' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, ActiveDummyDebugEncounter) == 0x000EE0, "Member 'AFortAIDirector::ActiveDummyDebugEncounter' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, EncounterSequences) == 0x000EE8, "Member 'AFortAIDirector::EncounterSequences' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, EQSRenderingComp) == 0x000EF8, "Member 'AFortAIDirector::EQSRenderingComp' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DebugGraphUpdateFrequency) == 0x000F00, "Member 'AFortAIDirector::DebugGraphUpdateFrequency' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, MaxNormalLODDistanceToPlayer) == 0x000F04, "Member 'AFortAIDirector::MaxNormalLODDistanceToPlayer' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, AIRelevantDistanceToPlayer) == 0x000F08, "Member 'AFortAIDirector::AIRelevantDistanceToPlayer' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, EncounterRelevantDistanceToPlayer) == 0x000F0C, "Member 'AFortAIDirector::EncounterRelevantDistanceToPlayer' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, EncounterRelevantDistanceToDefender) == 0x000F10, "Member 'AFortAIDirector::EncounterRelevantDistanceToDefender' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, PatrolWards) == 0x000F18, "Member 'AFortAIDirector::PatrolWards' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, MaxTotalActiveAliveAI) == 0x000F2C, "Member 'AFortAIDirector::MaxTotalActiveAliveAI' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, MaxEncounterActiveAliveAI) == 0x000F30, "Member 'AFortAIDirector::MaxEncounterActiveAliveAI' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, MaxSPUsed) == 0x000F34, "Member 'AFortAIDirector::MaxSPUsed' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DebugEncounterTopUtilityPercentages) == 0x000F40, "Member 'AFortAIDirector::DebugEncounterTopUtilityPercentages' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, DebugEncounterSpawnPointsCurves) == 0x000F50, "Member 'AFortAIDirector::DebugEncounterSpawnPointsCurves' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, SimulatedNumberOfPlayersForAIEncounters) == 0x000F64, "Member 'AFortAIDirector::SimulatedNumberOfPlayersForAIEncounters' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, MaxNumberOfEncounterGroups) == 0x000FE0, "Member 'AFortAIDirector::MaxNumberOfEncounterGroups' has a wrong offset!");
static_assert(offsetof(AFortAIDirector, RegisteredAISpawners) == 0x000FE8, "Member 'AFortAIDirector::RegisteredAISpawners' has a wrong offset!");

class UFortAthenaAIBotNameDataAsset final : public UDataAsset
{
public:
	TSoftObjectPtr<class UDataTable>              DefaultNameDataTable;
	TSoftObjectPtr<class UDataTable>              ChinaNameDataTable;
	TArray<struct FFortAthenaAIBotNameRegionData> RegionData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotNameDataAsset">();
	}
	static class UFortAthenaAIBotNameDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotNameDataAsset>();
	}
};
static_assert(alignof(UFortAthenaAIBotNameDataAsset) == 0x000008, "Wrong alignment on UFortAthenaAIBotNameDataAsset");
static_assert(sizeof(UFortAthenaAIBotNameDataAsset) == 0x000090, "Wrong size on UFortAthenaAIBotNameDataAsset");
static_assert(offsetof(UFortAthenaAIBotNameDataAsset, DefaultNameDataTable) == 0x000030, "Member 'UFortAthenaAIBotNameDataAsset::DefaultNameDataTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotNameDataAsset, ChinaNameDataTable) == 0x000058, "Member 'UFortAthenaAIBotNameDataAsset::ChinaNameDataTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotNameDataAsset, RegionData) == 0x000080, "Member 'UFortAthenaAIBotNameDataAsset::RegionData' has a wrong offset!");

class AAthenaAIDirector final : public AFortAIDirector
{
public:
	uint8                                         Pad_1000[0x8];

public:
	static void AggroOnActor(const class AAthenaAIController* AIController, class AActor* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIDirector">();
	}
	static class AAthenaAIDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaAIDirector>();
	}
};
static_assert(alignof(AAthenaAIDirector) == 0x000008, "Wrong alignment on AAthenaAIDirector");
static_assert(sizeof(AAthenaAIDirector) == 0x001008, "Wrong size on AAthenaAIDirector");

class UAthenaAIDropper final : public UObject
{
public:
	TArray<struct FDroppingAgentData>             InactiveAgents;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIDropper">();
	}
	static class UAthenaAIDropper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIDropper>();
	}
};
static_assert(alignof(UAthenaAIDropper) == 0x000008, "Wrong alignment on UAthenaAIDropper");
static_assert(sizeof(UAthenaAIDropper) == 0x000038, "Wrong size on UAthenaAIDropper");
static_assert(offsetof(UAthenaAIDropper, InactiveAgents) == 0x000028, "Member 'UAthenaAIDropper::InactiveAgents' has a wrong offset!");

class UFortNavArea_CheapObstacle : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_CheapObstacle">();
	}
	static class UFortNavArea_CheapObstacle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_CheapObstacle>();
	}
};
static_assert(alignof(UFortNavArea_CheapObstacle) == 0x000008, "Wrong alignment on UFortNavArea_CheapObstacle");
static_assert(sizeof(UFortNavArea_CheapObstacle) == 0x000050, "Wrong size on UFortNavArea_CheapObstacle");

class UFortNavArea_StarlightCheapObstacle final : public UFortNavArea_CheapObstacle
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_StarlightCheapObstacle">();
	}
	static class UFortNavArea_StarlightCheapObstacle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_StarlightCheapObstacle>();
	}
};
static_assert(alignof(UFortNavArea_StarlightCheapObstacle) == 0x000008, "Wrong alignment on UFortNavArea_StarlightCheapObstacle");
static_assert(sizeof(UFortNavArea_StarlightCheapObstacle) == 0x000050, "Wrong size on UFortNavArea_StarlightCheapObstacle");

class UAthenaAIPerceptionManager final : public UAISubsystem
{
public:
	uint8                                         Pad_38[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIPerceptionManager">();
	}
	static class UAthenaAIPerceptionManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIPerceptionManager>();
	}
};
static_assert(alignof(UAthenaAIPerceptionManager) == 0x000008, "Wrong alignment on UAthenaAIPerceptionManager");
static_assert(sizeof(UAthenaAIPerceptionManager) == 0x000048, "Wrong size on UAthenaAIPerceptionManager");

class AAthenaNavSystemConfigOverride final : public ANavSystemConfigOverride
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaNavSystemConfigOverride">();
	}
	static class AAthenaNavSystemConfigOverride* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaNavSystemConfigOverride>();
	}
};
static_assert(alignof(AAthenaNavSystemConfigOverride) == 0x000008, "Wrong alignment on AAthenaNavSystemConfigOverride");
static_assert(sizeof(AAthenaNavSystemConfigOverride) == 0x000298, "Wrong size on AAthenaNavSystemConfigOverride");

class UFortBTDecorator_QueryGameplayAbility : public UBTDecorator
{
public:
	struct FGameplayTagContainer                  GameplayAbilityTag;
	struct FBlackboardKeySelector                 GameplayAbilityTagBlackboardKey;
	struct FBlackboardKeySelector                 Target;
	struct FGameplayTagContainer                  ActiveAbilityTagsToSkipTesting;
	bool                                          bUseTarget;
	bool                                          bUseBlackboardTag;
	uint8                                         Pad_FA[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_QueryGameplayAbility">();
	}
	static class UFortBTDecorator_QueryGameplayAbility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_QueryGameplayAbility>();
	}
};
static_assert(alignof(UFortBTDecorator_QueryGameplayAbility) == 0x000008, "Wrong alignment on UFortBTDecorator_QueryGameplayAbility");
static_assert(sizeof(UFortBTDecorator_QueryGameplayAbility) == 0x000100, "Wrong size on UFortBTDecorator_QueryGameplayAbility");
static_assert(offsetof(UFortBTDecorator_QueryGameplayAbility, GameplayAbilityTag) == 0x000068, "Member 'UFortBTDecorator_QueryGameplayAbility::GameplayAbilityTag' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_QueryGameplayAbility, GameplayAbilityTagBlackboardKey) == 0x000088, "Member 'UFortBTDecorator_QueryGameplayAbility::GameplayAbilityTagBlackboardKey' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_QueryGameplayAbility, Target) == 0x0000B0, "Member 'UFortBTDecorator_QueryGameplayAbility::Target' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_QueryGameplayAbility, ActiveAbilityTagsToSkipTesting) == 0x0000D8, "Member 'UFortBTDecorator_QueryGameplayAbility::ActiveAbilityTagsToSkipTesting' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_QueryGameplayAbility, bUseTarget) == 0x0000F8, "Member 'UFortBTDecorator_QueryGameplayAbility::bUseTarget' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_QueryGameplayAbility, bUseBlackboardTag) == 0x0000F9, "Member 'UFortBTDecorator_QueryGameplayAbility::bUseBlackboardTag' has a wrong offset!");

class UAthenaAISettingsAIDIrectorLOD final : public UDataAsset
{
public:
	TArray<struct FPlayerLODViewConeConfig>       PlayerLODViewConeConfigs;
	struct FPlayerLODViewConeHysteresisConfig     PlayerLODViewConeHysteresisConfig;
	struct FScalableFloat                         CouldBeVisibleViewConeAngleDegrees;
	struct FScalableFloat                         CouldBeVisibleMaxDistance;
	struct FScalableFloat                         LODSortHysteresisDistance;
	TArray<struct FFortAIDirectorPerLODConfig>    FortAIDirectorLODConfigs;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAISettingsAIDIrectorLOD">();
	}
	static class UAthenaAISettingsAIDIrectorLOD* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAISettingsAIDIrectorLOD>();
	}
};
static_assert(alignof(UAthenaAISettingsAIDIrectorLOD) == 0x000008, "Wrong alignment on UAthenaAISettingsAIDIrectorLOD");
static_assert(sizeof(UAthenaAISettingsAIDIrectorLOD) == 0x000118, "Wrong size on UAthenaAISettingsAIDIrectorLOD");
static_assert(offsetof(UAthenaAISettingsAIDIrectorLOD, PlayerLODViewConeConfigs) == 0x000030, "Member 'UAthenaAISettingsAIDIrectorLOD::PlayerLODViewConeConfigs' has a wrong offset!");
static_assert(offsetof(UAthenaAISettingsAIDIrectorLOD, PlayerLODViewConeHysteresisConfig) == 0x000040, "Member 'UAthenaAISettingsAIDIrectorLOD::PlayerLODViewConeHysteresisConfig' has a wrong offset!");
static_assert(offsetof(UAthenaAISettingsAIDIrectorLOD, CouldBeVisibleViewConeAngleDegrees) == 0x000090, "Member 'UAthenaAISettingsAIDIrectorLOD::CouldBeVisibleViewConeAngleDegrees' has a wrong offset!");
static_assert(offsetof(UAthenaAISettingsAIDIrectorLOD, CouldBeVisibleMaxDistance) == 0x0000B8, "Member 'UAthenaAISettingsAIDIrectorLOD::CouldBeVisibleMaxDistance' has a wrong offset!");
static_assert(offsetof(UAthenaAISettingsAIDIrectorLOD, LODSortHysteresisDistance) == 0x0000E0, "Member 'UAthenaAISettingsAIDIrectorLOD::LODSortHysteresisDistance' has a wrong offset!");
static_assert(offsetof(UAthenaAISettingsAIDIrectorLOD, FortAIDirectorLODConfigs) == 0x000108, "Member 'UAthenaAISettingsAIDIrectorLOD::FortAIDirectorLODConfigs' has a wrong offset!");

class UAthenaAISettings final : public UDataAsset
{
public:
	uint8                                         bAllowAIDirector : 1;
	uint8                                         bAllowAIGoalManager : 1;
	uint8                                         bForceRVOUse : 1;
	uint8                                         Pad_31[0x3];
	float                                         MaxPlayerSpeedScaleFootstepSounds;
	float                                         MinFootstepHearingRange;
	float                                         MaxFootstepHearingRange;
	float                                         DamagedHearingRange;
	float                                         CrouchHearingModifier;
	float                                         MaxNPCHearingRange;
	float                                         MaxPerceptualStimuliAge;
	float                                         DeAggroRange;
	float                                         ReducedDeAggroRange;
	float                                         DurationReduceAggroLimits;
	uint8                                         Pad_5C[0x4];
	TSubclassOf<class AAthenaNavSystemConfigOverride> NavigationSystemConfig;
	TSoftObjectPtr<class UAthenaAISettingsAIDIrectorLOD> AIDIrectorLOD;
	TArray<TSubclassOf<class UAthenaAIService>>   AIServices;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAISettings">();
	}
	static class UAthenaAISettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAISettings>();
	}
};
static_assert(alignof(UAthenaAISettings) == 0x000008, "Wrong alignment on UAthenaAISettings");
static_assert(sizeof(UAthenaAISettings) == 0x0000A0, "Wrong size on UAthenaAISettings");
static_assert(offsetof(UAthenaAISettings, MaxPlayerSpeedScaleFootstepSounds) == 0x000034, "Member 'UAthenaAISettings::MaxPlayerSpeedScaleFootstepSounds' has a wrong offset!");
static_assert(offsetof(UAthenaAISettings, MinFootstepHearingRange) == 0x000038, "Member 'UAthenaAISettings::MinFootstepHearingRange' has a wrong offset!");
static_assert(offsetof(UAthenaAISettings, MaxFootstepHearingRange) == 0x00003C, "Member 'UAthenaAISettings::MaxFootstepHearingRange' has a wrong offset!");
static_assert(offsetof(UAthenaAISettings, DamagedHearingRange) == 0x000040, "Member 'UAthenaAISettings::DamagedHearingRange' has a wrong offset!");
static_assert(offsetof(UAthenaAISettings, CrouchHearingModifier) == 0x000044, "Member 'UAthenaAISettings::CrouchHearingModifier' has a wrong offset!");
static_assert(offsetof(UAthenaAISettings, MaxNPCHearingRange) == 0x000048, "Member 'UAthenaAISettings::MaxNPCHearingRange' has a wrong offset!");
static_assert(offsetof(UAthenaAISettings, MaxPerceptualStimuliAge) == 0x00004C, "Member 'UAthenaAISettings::MaxPerceptualStimuliAge' has a wrong offset!");
static_assert(offsetof(UAthenaAISettings, DeAggroRange) == 0x000050, "Member 'UAthenaAISettings::DeAggroRange' has a wrong offset!");
static_assert(offsetof(UAthenaAISettings, ReducedDeAggroRange) == 0x000054, "Member 'UAthenaAISettings::ReducedDeAggroRange' has a wrong offset!");
static_assert(offsetof(UAthenaAISettings, DurationReduceAggroLimits) == 0x000058, "Member 'UAthenaAISettings::DurationReduceAggroLimits' has a wrong offset!");
static_assert(offsetof(UAthenaAISettings, NavigationSystemConfig) == 0x000060, "Member 'UAthenaAISettings::NavigationSystemConfig' has a wrong offset!");
static_assert(offsetof(UAthenaAISettings, AIDIrectorLOD) == 0x000068, "Member 'UAthenaAISettings::AIDIrectorLOD' has a wrong offset!");
static_assert(offsetof(UAthenaAISettings, AIServices) == 0x000090, "Member 'UAthenaAISettings::AIServices' has a wrong offset!");

class UFortAsyncAction_MakeTieredWaveEncounterSettings final : public UBlueprintAsyncActionBase
{
public:
	TMulticastInlineDelegate<void(struct FFortEncounterSettings& EncounterSettings)> OnComplete;
	struct FTieredWaveSetData                     WaveData;
	TStructCycleFixup<struct FFortEncounterSettings, 0x00C0, 0x08> EncounterSettings;
	uint8                                         Pad_2C8[0x10];

public:
	static class UFortAsyncAction_MakeTieredWaveEncounterSettings* CreateAsyncAction_MakeTieredWaveEncounterSettings(const struct FTieredWaveSetData& WaveData_0, const struct FFortEncounterSettings& InEncounterSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAsyncAction_MakeTieredWaveEncounterSettings">();
	}
	static class UFortAsyncAction_MakeTieredWaveEncounterSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAsyncAction_MakeTieredWaveEncounterSettings>();
	}
};
static_assert(alignof(UFortAsyncAction_MakeTieredWaveEncounterSettings) == 0x000008, "Wrong alignment on UFortAsyncAction_MakeTieredWaveEncounterSettings");
static_assert(sizeof(UFortAsyncAction_MakeTieredWaveEncounterSettings) == 0x0002D8, "Wrong size on UFortAsyncAction_MakeTieredWaveEncounterSettings");
static_assert(offsetof(UFortAsyncAction_MakeTieredWaveEncounterSettings, OnComplete) == 0x000030, "Member 'UFortAsyncAction_MakeTieredWaveEncounterSettings::OnComplete' has a wrong offset!");
static_assert(offsetof(UFortAsyncAction_MakeTieredWaveEncounterSettings, WaveData) == 0x000040, "Member 'UFortAsyncAction_MakeTieredWaveEncounterSettings::WaveData' has a wrong offset!");
static_assert(offsetof(UFortAsyncAction_MakeTieredWaveEncounterSettings, EncounterSettings) == 0x000208, "Member 'UFortAsyncAction_MakeTieredWaveEncounterSettings::EncounterSettings' has a wrong offset!");

class UFortAISystem : public UAISystem
{
public:
	TArray<class UFortQueryTwoPointSolver*>       TwoPointSolvers;
	class UFortInfluenceMap*                      InfluenceMap;
	class UFortBotMissionManager*                 BotManager;
	uint8                                         Pad_168[0x10];
	TArray<class UFortRiftBlockerComponent*>      ActiveRiftBlockers;
	uint8                                         Pad_188[0x50];
	class UAthenaAISpawner*                       AISpawner;
	class UAthenaAIServiceManager*                AIServiceManager;

public:
	static bool IsInCone2D(const struct FVector& ConeOrigin, const struct FVector& ConeDirection, float HalfAngle, const struct FVector& LocationToCheck);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAISystem">();
	}
	static class UFortAISystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAISystem>();
	}
};
static_assert(alignof(UFortAISystem) == 0x000008, "Wrong alignment on UFortAISystem");
static_assert(sizeof(UFortAISystem) == 0x0001E8, "Wrong size on UFortAISystem");
static_assert(offsetof(UFortAISystem, TwoPointSolvers) == 0x000148, "Member 'UFortAISystem::TwoPointSolvers' has a wrong offset!");
static_assert(offsetof(UFortAISystem, InfluenceMap) == 0x000158, "Member 'UFortAISystem::InfluenceMap' has a wrong offset!");
static_assert(offsetof(UFortAISystem, BotManager) == 0x000160, "Member 'UFortAISystem::BotManager' has a wrong offset!");
static_assert(offsetof(UFortAISystem, ActiveRiftBlockers) == 0x000178, "Member 'UFortAISystem::ActiveRiftBlockers' has a wrong offset!");
static_assert(offsetof(UFortAISystem, AISpawner) == 0x0001D8, "Member 'UFortAISystem::AISpawner' has a wrong offset!");
static_assert(offsetof(UFortAISystem, AIServiceManager) == 0x0001E0, "Member 'UFortAISystem::AIServiceManager' has a wrong offset!");

class UAthenaAISystem final : public UFortAISystem
{
public:
	class UAthenaAIPerceptionManager*             PerceptionManager;
	class UAthenaAIDropper*                       AIDropper;
	class UAthenaAIPopulationTracker*             AIPopulationTracker;
	class UAthenaAIVehicleAvoidanceManager*       AIVehicleAvoidanceManager;
	TArray<class AAthenaAIController*>            AIControllers;
	TArray<class UAthenaPathFollowingComponent*>  PathFollowingComponents;
	TArray<class AActor*>                         RegisteredAISpawners;
	uint8                                         bUnlimitedAIHealth : 1;
	uint8                                         bNavigationReady : 1;
	uint8                                         Pad_239[0x7];

public:
	void AIProfiling_OnGamePhaseChanged(EAthenaGamePhase GamePhase);
	void AIProfiling_OnSafeZoneUpdated();
	void HandleGamePhaseStepChanged(const TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
	void HandlePlayerExitAircraft(class AController* ExitingController);
	void OnAIPawnDestroyed(class AFortPawn* DestroyedPawn);
	void OnAIPawnDied(class AController* KilledController, bool bIsABot, class AFortPawn* KilledAIPawn, class AFortPlayerPawn* KilledPlayerPawn, class AController* KillerController);
	void OnAIPawnSpawned(class AController* SpawnedController, bool bIsABot, class AFortPawn* FortAIPawn, class AFortPlayerPawn* PlayerPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAISystem">();
	}
	static class UAthenaAISystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAISystem>();
	}
};
static_assert(alignof(UAthenaAISystem) == 0x000008, "Wrong alignment on UAthenaAISystem");
static_assert(sizeof(UAthenaAISystem) == 0x000240, "Wrong size on UAthenaAISystem");
static_assert(offsetof(UAthenaAISystem, PerceptionManager) == 0x0001E8, "Member 'UAthenaAISystem::PerceptionManager' has a wrong offset!");
static_assert(offsetof(UAthenaAISystem, AIDropper) == 0x0001F0, "Member 'UAthenaAISystem::AIDropper' has a wrong offset!");
static_assert(offsetof(UAthenaAISystem, AIPopulationTracker) == 0x0001F8, "Member 'UAthenaAISystem::AIPopulationTracker' has a wrong offset!");
static_assert(offsetof(UAthenaAISystem, AIVehicleAvoidanceManager) == 0x000200, "Member 'UAthenaAISystem::AIVehicleAvoidanceManager' has a wrong offset!");
static_assert(offsetof(UAthenaAISystem, AIControllers) == 0x000208, "Member 'UAthenaAISystem::AIControllers' has a wrong offset!");
static_assert(offsetof(UAthenaAISystem, PathFollowingComponents) == 0x000218, "Member 'UAthenaAISystem::PathFollowingComponents' has a wrong offset!");
static_assert(offsetof(UAthenaAISystem, RegisteredAISpawners) == 0x000228, "Member 'UAthenaAISystem::RegisteredAISpawners' has a wrong offset!");

class UFortNavArea_SmashableJump : public UFortNavArea
{
public:
	int32                                         Strength;
	uint8                                         Pad_54[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_SmashableJump">();
	}
	static class UFortNavArea_SmashableJump* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_SmashableJump>();
	}
};
static_assert(alignof(UFortNavArea_SmashableJump) == 0x000008, "Wrong alignment on UFortNavArea_SmashableJump");
static_assert(sizeof(UFortNavArea_SmashableJump) == 0x000058, "Wrong size on UFortNavArea_SmashableJump");
static_assert(offsetof(UFortNavArea_SmashableJump, Strength) == 0x000050, "Member 'UFortNavArea_SmashableJump::Strength' has a wrong offset!");

class AAthenaCreativeRift final : public TObjectBasedCycleFixup<class ABuildingRift, 0x0BB0, 0x10>
{
public:
	class USphereComponent*                       DespawnSphereComponent;
	class ABuildingProp_AISpawner*                ParentTrap;
	TStructCycleFixup<struct FFortEncounterSettings, 0x00C0, 0x08> OverrideEncounterSettings;
	bool                                          bHasLoadedSettings;
	uint8                                         Pad_CA9[0x7];
	TArray<class AFortPlayerPawn*>                DespawnPlayerOverlaps;
	uint8                                         Pad_CC0[0x8];
	class UFortAIManagerMinigameComponent*        CachedAIMinigamecomponent;

public:
	void BlueprintShowRift();
	void NotifyActorDespawnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaCreativeRift">();
	}
	static class AAthenaCreativeRift* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaCreativeRift>();
	}
};
static_assert(alignof(AAthenaCreativeRift) == 0x000010, "Wrong alignment on AAthenaCreativeRift");
static_assert(sizeof(AAthenaCreativeRift) == 0x000CD0, "Wrong size on AAthenaCreativeRift");
static_assert(offsetof(AAthenaCreativeRift, DespawnSphereComponent) == 0x000BD8, "Member 'AAthenaCreativeRift::DespawnSphereComponent' has a wrong offset!");
static_assert(offsetof(AAthenaCreativeRift, ParentTrap) == 0x000BE0, "Member 'AAthenaCreativeRift::ParentTrap' has a wrong offset!");
static_assert(offsetof(AAthenaCreativeRift, OverrideEncounterSettings) == 0x000BE8, "Member 'AAthenaCreativeRift::OverrideEncounterSettings' has a wrong offset!");
static_assert(offsetof(AAthenaCreativeRift, bHasLoadedSettings) == 0x000CA8, "Member 'AAthenaCreativeRift::bHasLoadedSettings' has a wrong offset!");
static_assert(offsetof(AAthenaCreativeRift, DespawnPlayerOverlaps) == 0x000CB0, "Member 'AAthenaCreativeRift::DespawnPlayerOverlaps' has a wrong offset!");
static_assert(offsetof(AAthenaCreativeRift, CachedAIMinigamecomponent) == 0x000CC8, "Member 'AAthenaCreativeRift::CachedAIMinigamecomponent' has a wrong offset!");

class UFortPathFollowingComponentBase : public UCrowdFollowingComponent
{
public:
	class AAIController*                          AIController;
	uint8                                         Pad_310[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPathFollowingComponentBase">();
	}
	static class UFortPathFollowingComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPathFollowingComponentBase>();
	}
};
static_assert(alignof(UFortPathFollowingComponentBase) == 0x000008, "Wrong alignment on UFortPathFollowingComponentBase");
static_assert(sizeof(UFortPathFollowingComponentBase) == 0x000328, "Wrong size on UFortPathFollowingComponentBase");
static_assert(offsetof(UFortPathFollowingComponentBase, AIController) == 0x000308, "Member 'UFortPathFollowingComponentBase::AIController' has a wrong offset!");

class UAthenaAvoidanceManager final : public UAvoidanceManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAvoidanceManager">();
	}
	static class UAthenaAvoidanceManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAvoidanceManager>();
	}
};
static_assert(alignof(UAthenaAvoidanceManager) == 0x000008, "Wrong alignment on UAthenaAvoidanceManager");
static_assert(sizeof(UAthenaAvoidanceManager) == 0x0000E0, "Wrong size on UAthenaAvoidanceManager");

class UFortPathFollowingComponent : public UFortPathFollowingComponentBase
{
public:
	class AFortAIController*                      MyAI;
	uint8                                         Pad_330[0x20];
	float                                         MovementBlockFrustrationCooldownSpeed;
	uint8                                         Pad_354[0xC4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPathFollowingComponent">();
	}
	static class UFortPathFollowingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPathFollowingComponent>();
	}
};
static_assert(alignof(UFortPathFollowingComponent) == 0x000008, "Wrong alignment on UFortPathFollowingComponent");
static_assert(sizeof(UFortPathFollowingComponent) == 0x000418, "Wrong size on UFortPathFollowingComponent");
static_assert(offsetof(UFortPathFollowingComponent, MyAI) == 0x000328, "Member 'UFortPathFollowingComponent::MyAI' has a wrong offset!");
static_assert(offsetof(UFortPathFollowingComponent, MovementBlockFrustrationCooldownSpeed) == 0x000350, "Member 'UFortPathFollowingComponent::MovementBlockFrustrationCooldownSpeed' has a wrong offset!");

class UAthenaPathFollowingComponent final : public UFortPathFollowingComponent
{
public:
	EAthenaPathFollowingFocus                     FocusDirectionMethod;
	uint8                                         Pad_419[0x1F];
	class AAthenaAIController*                    AthenaAIController;
	uint8                                         Pad_440[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaPathFollowingComponent">();
	}
	static class UAthenaPathFollowingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaPathFollowingComponent>();
	}
};
static_assert(alignof(UAthenaPathFollowingComponent) == 0x000008, "Wrong alignment on UAthenaPathFollowingComponent");
static_assert(sizeof(UAthenaPathFollowingComponent) == 0x000458, "Wrong size on UAthenaPathFollowingComponent");
static_assert(offsetof(UAthenaPathFollowingComponent, FocusDirectionMethod) == 0x000418, "Member 'UAthenaPathFollowingComponent::FocusDirectionMethod' has a wrong offset!");
static_assert(offsetof(UAthenaPathFollowingComponent, AthenaAIController) == 0x000438, "Member 'UAthenaPathFollowingComponent::AthenaAIController' has a wrong offset!");

class UFortNavArea_StoneWall final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_StoneWall">();
	}
	static class UFortNavArea_StoneWall* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_StoneWall>();
	}
};
static_assert(alignof(UFortNavArea_StoneWall) == 0x000008, "Wrong alignment on UFortNavArea_StoneWall");
static_assert(sizeof(UFortNavArea_StoneWall) == 0x000050, "Wrong size on UFortNavArea_StoneWall");

class UFortAthenaAITelemetryFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UFortAthenaAITelemetryData* GetOrCreateAITelemetryData(const class AActor* Owner, const TSubclassOf<class UFortAthenaAITelemetryData> TelemetryDataClass);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAITelemetryFunctionLibrary">();
	}
	static class UFortAthenaAITelemetryFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAITelemetryFunctionLibrary>();
	}
};
static_assert(alignof(UFortAthenaAITelemetryFunctionLibrary) == 0x000008, "Wrong alignment on UFortAthenaAITelemetryFunctionLibrary");
static_assert(sizeof(UFortAthenaAITelemetryFunctionLibrary) == 0x000028, "Wrong size on UFortAthenaAITelemetryFunctionLibrary");

class UFortAthenaAITelemetryData : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAITelemetryData">();
	}
	static class UFortAthenaAITelemetryData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAITelemetryData>();
	}
};
static_assert(alignof(UFortAthenaAITelemetryData) == 0x000008, "Wrong alignment on UFortAthenaAITelemetryData");
static_assert(sizeof(UFortAthenaAITelemetryData) == 0x000028, "Wrong size on UFortAthenaAITelemetryData");

class UFortNavArea_Obstacle : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_Obstacle">();
	}
	static class UFortNavArea_Obstacle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_Obstacle>();
	}
};
static_assert(alignof(UFortNavArea_Obstacle) == 0x000008, "Wrong alignment on UFortNavArea_Obstacle");
static_assert(sizeof(UFortNavArea_Obstacle) == 0x000050, "Wrong size on UFortNavArea_Obstacle");

class UFortAIComponent_Telemetry : public UActorComponent
{
public:
	class AFortAIPawn*                            PossessedPawn;
	class AAthenaAIController*                    CachedAIController;
	class AController*                            DeathInstigator;
	TArray<class UFortItemDefinition*>            GrabbedPickups;
	TArray<class UFortItemDefinition*>            DroppedPickups;
	class UFortAthenaAIRuntimeParameters_AIAnalytic* AnalyticRuntimeParameters;
	TArray<class UFortAthenaAITelemetryData*>     TelemetryData;
	uint8                                         Pad_F0[0x18];

public:
	class UFortAthenaAITelemetryData* GetOrCreateTelemetryData(const TSubclassOf<class UFortAthenaAITelemetryData> TelemetryDataClass);
	void OnDidDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnTetheredFollowerChanged(class AFortPawn* NewFollower, class AFortPawn* OldFollower);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIComponent_Telemetry">();
	}
	static class UFortAIComponent_Telemetry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIComponent_Telemetry>();
	}
};
static_assert(alignof(UFortAIComponent_Telemetry) == 0x000008, "Wrong alignment on UFortAIComponent_Telemetry");
static_assert(sizeof(UFortAIComponent_Telemetry) == 0x000108, "Wrong size on UFortAIComponent_Telemetry");
static_assert(offsetof(UFortAIComponent_Telemetry, PossessedPawn) == 0x0000A0, "Member 'UFortAIComponent_Telemetry::PossessedPawn' has a wrong offset!");
static_assert(offsetof(UFortAIComponent_Telemetry, CachedAIController) == 0x0000A8, "Member 'UFortAIComponent_Telemetry::CachedAIController' has a wrong offset!");
static_assert(offsetof(UFortAIComponent_Telemetry, DeathInstigator) == 0x0000B0, "Member 'UFortAIComponent_Telemetry::DeathInstigator' has a wrong offset!");
static_assert(offsetof(UFortAIComponent_Telemetry, GrabbedPickups) == 0x0000B8, "Member 'UFortAIComponent_Telemetry::GrabbedPickups' has a wrong offset!");
static_assert(offsetof(UFortAIComponent_Telemetry, DroppedPickups) == 0x0000C8, "Member 'UFortAIComponent_Telemetry::DroppedPickups' has a wrong offset!");
static_assert(offsetof(UFortAIComponent_Telemetry, AnalyticRuntimeParameters) == 0x0000D8, "Member 'UFortAIComponent_Telemetry::AnalyticRuntimeParameters' has a wrong offset!");
static_assert(offsetof(UFortAIComponent_Telemetry, TelemetryData) == 0x0000E0, "Member 'UFortAIComponent_Telemetry::TelemetryData' has a wrong offset!");

class UFortAIComponent_Voice : public UActorComponent
{
public:
	class UFortTaggedSoundBank*                   VoiceSoundBank;

public:
	void SetVoiceSoundBank(class UFortTaggedSoundBank* InSoundBank);

	class UFortTaggedSoundBank* GetVoiceSoundBank() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIComponent_Voice">();
	}
	static class UFortAIComponent_Voice* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIComponent_Voice>();
	}
};
static_assert(alignof(UFortAIComponent_Voice) == 0x000008, "Wrong alignment on UFortAIComponent_Voice");
static_assert(sizeof(UFortAIComponent_Voice) == 0x0000A8, "Wrong size on UFortAIComponent_Voice");
static_assert(offsetof(UFortAIComponent_Voice, VoiceSoundBank) == 0x0000A0, "Member 'UFortAIComponent_Voice::VoiceSoundBank' has a wrong offset!");

class UFortNavArea_WalkOverWall final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_WalkOverWall">();
	}
	static class UFortNavArea_WalkOverWall* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_WalkOverWall>();
	}
};
static_assert(alignof(UFortNavArea_WalkOverWall) == 0x000008, "Wrong alignment on UFortNavArea_WalkOverWall");
static_assert(sizeof(UFortNavArea_WalkOverWall) == 0x000050, "Wrong size on UFortNavArea_WalkOverWall");

class UFortAIManagerMinigameComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x60];
	TArray<struct FGameplayTag>                   SpawnableAITypeTags;

public:
	void HandleMinigameStarted();
	void OnPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnPawnSpawned(class APawn* Pawn, const int32 RequestID);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIManagerMinigameComponent">();
	}
	static class UFortAIManagerMinigameComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIManagerMinigameComponent>();
	}
};
static_assert(alignof(UFortAIManagerMinigameComponent) == 0x000008, "Wrong alignment on UFortAIManagerMinigameComponent");
static_assert(sizeof(UFortAIManagerMinigameComponent) == 0x000110, "Wrong size on UFortAIManagerMinigameComponent");
static_assert(offsetof(UFortAIManagerMinigameComponent, SpawnableAITypeTags) == 0x000100, "Member 'UFortAIManagerMinigameComponent::SpawnableAITypeTags' has a wrong offset!");

class UFortAISpawnerUtilityComponent final : public UActorComponent
{
public:
	struct FGameplayTag                           AIPawnSpawnTypeTag;
	uint8                                         Pad_A4[0x4];
	class UEnvQuery*                              EnvironmentQuery;
	TArray<struct FEnvNamedValue>                 QueryParams;
	float                                         QueryRadius;
	float                                         QueryMinDistance;
	TMulticastInlineDelegate<void(TArray<struct FVector>& QueryResultLocations)> OnEnvironmentQueryFinishedDelegate;
	TMulticastInlineDelegate<void(class AFortPawn* FortPawn)> OnUnownedPawnDiedDelegate;
	class UFortAIPawnCustomizationDefinition*     Customization;
	uint8                                         Pad_F0[0x10];
	TArray<struct FVector>                        FreeSpawnSlots;
	uint8                                         Pad_110[0x18];
	TScriptInterface<class IFortSpatialGameplayInterface> CachedFortSpatialGameplay;

public:
	void HandleUnownedPawnSpawned(class AFortPawn* FortPawn);
	void OnUnownedPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	int32 RequestSpawn(class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, const struct FTransform& SpawnTransform);
	void SetEQSQuery(TSoftObjectPtr<class UEnvQuery> SelectedEQSQuery);
	void SetMinigame(const class AFortMinigame* Minigame);
	void SetQueryRadius(float Radius);
	void StartEnvironmentQuery();

	bool IsSpawnCountCapped() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAISpawnerUtilityComponent">();
	}
	static class UFortAISpawnerUtilityComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAISpawnerUtilityComponent>();
	}
};
static_assert(alignof(UFortAISpawnerUtilityComponent) == 0x000008, "Wrong alignment on UFortAISpawnerUtilityComponent");
static_assert(sizeof(UFortAISpawnerUtilityComponent) == 0x000138, "Wrong size on UFortAISpawnerUtilityComponent");
static_assert(offsetof(UFortAISpawnerUtilityComponent, AIPawnSpawnTypeTag) == 0x0000A0, "Member 'UFortAISpawnerUtilityComponent::AIPawnSpawnTypeTag' has a wrong offset!");
static_assert(offsetof(UFortAISpawnerUtilityComponent, EnvironmentQuery) == 0x0000A8, "Member 'UFortAISpawnerUtilityComponent::EnvironmentQuery' has a wrong offset!");
static_assert(offsetof(UFortAISpawnerUtilityComponent, QueryParams) == 0x0000B0, "Member 'UFortAISpawnerUtilityComponent::QueryParams' has a wrong offset!");
static_assert(offsetof(UFortAISpawnerUtilityComponent, QueryRadius) == 0x0000C0, "Member 'UFortAISpawnerUtilityComponent::QueryRadius' has a wrong offset!");
static_assert(offsetof(UFortAISpawnerUtilityComponent, QueryMinDistance) == 0x0000C4, "Member 'UFortAISpawnerUtilityComponent::QueryMinDistance' has a wrong offset!");
static_assert(offsetof(UFortAISpawnerUtilityComponent, OnEnvironmentQueryFinishedDelegate) == 0x0000C8, "Member 'UFortAISpawnerUtilityComponent::OnEnvironmentQueryFinishedDelegate' has a wrong offset!");
static_assert(offsetof(UFortAISpawnerUtilityComponent, OnUnownedPawnDiedDelegate) == 0x0000D8, "Member 'UFortAISpawnerUtilityComponent::OnUnownedPawnDiedDelegate' has a wrong offset!");
static_assert(offsetof(UFortAISpawnerUtilityComponent, Customization) == 0x0000E8, "Member 'UFortAISpawnerUtilityComponent::Customization' has a wrong offset!");
static_assert(offsetof(UFortAISpawnerUtilityComponent, FreeSpawnSlots) == 0x000100, "Member 'UFortAISpawnerUtilityComponent::FreeSpawnSlots' has a wrong offset!");
static_assert(offsetof(UFortAISpawnerUtilityComponent, CachedFortSpatialGameplay) == 0x000128, "Member 'UFortAISpawnerUtilityComponent::CachedFortSpatialGameplay' has a wrong offset!");

class UFortNavSystem : public UNavigationSystemV1
{
public:
	uint8                                         Pad_1528[0x10];
	TSoftClassPtr<class UClass>                   DefaultSmashableArea;
	TSoftClassPtr<class UClass>                   JumpDownArea;
	uint8                                         Pad_1588[0x28];
	TSoftClassPtr<class UClass>                   JumpDownSmashableArea2;
	TSoftClassPtr<class UClass>                   JumpDownSmashableArea3;
	TArray<class UFortCustomNavLinkGlobalProxy*>  LinkGlobalProxies;
	TArray<class ARecastNavMesh*>                 NamedNavmeshes;
	TArray<class UFortNavLinkBlockerComponent*>   NavLinkBlockers;
	uint8                                         Pad_1630[0x10];
	TArray<class UFortPathCostEstimator*>         PathEstimators;
	TArray<class UFortInescapableZoneTracker*>    InescapableZones;
	uint8                                         bAllowAutoRebuild : 1;
	uint8                                         bRebuildOnInitialUnlock : 1;
	uint8                                         bUsesStreamedInNavLevel : 1;
	uint8                                         bUseStaticMeshLinks : 1;
	uint8                                         bUseStaticWorldLinksDown : 1;
	uint8                                         bUseStaticWorldLinksUp : 1;
	uint8                                         bUseJumpLinkActors : 1;
	uint8                                         bGenerateWallClimbLinks : 1;
	uint8                                         bGenerateClamberLinks : 1;
	uint8                                         Pad_1662[0x2];
	int32                                         UndermineHorizontalTileLimit;
	int32                                         UndermineVerticalTileLimit;
	float                                         DirtyAreasUpdateFreqInactive;
	uint8                                         Pad_1670[0xD8];
	class AFortNavigationGraph*                   NavGraphData;
	TArray<TWeakObjectPtr<class AActor>>          CompositePathGoals;
	TArray<struct FBox>                           AtlasCells;
	uint8                                         Pad_1770[0x10];
	TArray<struct FMetaNavCachedEntry>            MetaNavCachedAreas;

public:
	static bool IsNavmeshInRadiusInitialized(class UObject* WorldContext, const struct FVector& TestLocation, float TestRadius);

	void OnNavDataRegistered(class ANavigationData* NavData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavSystem">();
	}
	static class UFortNavSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavSystem>();
	}
};
static_assert(alignof(UFortNavSystem) == 0x000008, "Wrong alignment on UFortNavSystem");
static_assert(sizeof(UFortNavSystem) == 0x001790, "Wrong size on UFortNavSystem");
static_assert(offsetof(UFortNavSystem, DefaultSmashableArea) == 0x001538, "Member 'UFortNavSystem::DefaultSmashableArea' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, JumpDownArea) == 0x001560, "Member 'UFortNavSystem::JumpDownArea' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, JumpDownSmashableArea2) == 0x0015B0, "Member 'UFortNavSystem::JumpDownSmashableArea2' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, JumpDownSmashableArea3) == 0x0015D8, "Member 'UFortNavSystem::JumpDownSmashableArea3' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, LinkGlobalProxies) == 0x001600, "Member 'UFortNavSystem::LinkGlobalProxies' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, NamedNavmeshes) == 0x001610, "Member 'UFortNavSystem::NamedNavmeshes' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, NavLinkBlockers) == 0x001620, "Member 'UFortNavSystem::NavLinkBlockers' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, PathEstimators) == 0x001640, "Member 'UFortNavSystem::PathEstimators' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, InescapableZones) == 0x001650, "Member 'UFortNavSystem::InescapableZones' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, UndermineHorizontalTileLimit) == 0x001664, "Member 'UFortNavSystem::UndermineHorizontalTileLimit' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, UndermineVerticalTileLimit) == 0x001668, "Member 'UFortNavSystem::UndermineVerticalTileLimit' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, DirtyAreasUpdateFreqInactive) == 0x00166C, "Member 'UFortNavSystem::DirtyAreasUpdateFreqInactive' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, NavGraphData) == 0x001748, "Member 'UFortNavSystem::NavGraphData' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, CompositePathGoals) == 0x001750, "Member 'UFortNavSystem::CompositePathGoals' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, AtlasCells) == 0x001760, "Member 'UFortNavSystem::AtlasCells' has a wrong offset!");
static_assert(offsetof(UFortNavSystem, MetaNavCachedAreas) == 0x001780, "Member 'UFortNavSystem::MetaNavCachedAreas' has a wrong offset!");

class UAthenaNavSystem final : public UFortNavSystem
{
public:
	uint8                                         Pad_1790[0x8];
	TArray<struct FNavDataSetVariantSettings>     NavDataSetVariants;
	uint8                                         bUseNavDataSetVariants : 1;
	uint8                                         bMarkBuildingFoundationDirty : 1;
	uint8                                         bSupportRuntimeNavmeshDisabling : 1;
	uint8                                         Pad_17A9[0x3];
	float                                         NavGenerationObserverCheckInterval;
	uint8                                         Pad_17B0[0x20];
	uint8                                         bAllowStaticNavigationInvokerBoxes : 1;
	uint8                                         Pad_17D1[0x7];
	TArray<struct FBoxNavInvoker>                 BoxInvokers;
	uint8                                         Pad_17E8[0x138];
	TArray<struct FBox>                           NavOctTreeInclusionBounds;
	uint8                                         Pad_1930[0x10];

public:
	static bool IsInitialNavigationLockActive(class UObject* WorldContextObject);
	static void RegisterNavGenerationObserver(class USceneComponent* Component, TDelegate<void(class USceneComponent* Component)> Event);
	static void UnregisterNavGenerationObserver(class USceneComponent* Component);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaNavSystem">();
	}
	static class UAthenaNavSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaNavSystem>();
	}
};
static_assert(alignof(UAthenaNavSystem) == 0x000008, "Wrong alignment on UAthenaNavSystem");
static_assert(sizeof(UAthenaNavSystem) == 0x001940, "Wrong size on UAthenaNavSystem");
static_assert(offsetof(UAthenaNavSystem, NavDataSetVariants) == 0x001798, "Member 'UAthenaNavSystem::NavDataSetVariants' has a wrong offset!");
static_assert(offsetof(UAthenaNavSystem, NavGenerationObserverCheckInterval) == 0x0017AC, "Member 'UAthenaNavSystem::NavGenerationObserverCheckInterval' has a wrong offset!");
static_assert(offsetof(UAthenaNavSystem, BoxInvokers) == 0x0017D8, "Member 'UAthenaNavSystem::BoxInvokers' has a wrong offset!");
static_assert(offsetof(UAthenaNavSystem, NavOctTreeInclusionBounds) == 0x001920, "Member 'UAthenaNavSystem::NavOctTreeInclusionBounds' has a wrong offset!");

class UFortPawnComponent_AIInventoryManagement final : public TObjectBasedCycleFixup<class UFortPawnComponent, 0x0080, 0x08>
{
public:
	struct FGameplayTagContainer                  CanEquipItemTags;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPawnComponent_AIInventoryManagement">();
	}
	static class UFortPawnComponent_AIInventoryManagement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPawnComponent_AIInventoryManagement>();
	}
};
static_assert(alignof(UFortPawnComponent_AIInventoryManagement) == 0x000008, "Wrong alignment on UFortPawnComponent_AIInventoryManagement");
static_assert(sizeof(UFortPawnComponent_AIInventoryManagement) == 0x0000C8, "Wrong size on UFortPawnComponent_AIInventoryManagement");
static_assert(offsetof(UFortPawnComponent_AIInventoryManagement, CanEquipItemTags) == 0x0000A8, "Member 'UFortPawnComponent_AIInventoryManagement::CanEquipItemTags' has a wrong offset!");

class UFortAIDataProvider_Ability : public UAIDataProvider
{
public:
	struct FGameplayTagContainer                  AbilityTag;
	struct FGameplayTagContainer                  AbilityBehaviorDistanceTag;
	float                                         BehaviorDistance;
	float                                         MaxTargetSelectionRange;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIDataProvider_Ability">();
	}
	static class UFortAIDataProvider_Ability* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIDataProvider_Ability>();
	}
};
static_assert(alignof(UFortAIDataProvider_Ability) == 0x000008, "Wrong alignment on UFortAIDataProvider_Ability");
static_assert(sizeof(UFortAIDataProvider_Ability) == 0x000070, "Wrong size on UFortAIDataProvider_Ability");
static_assert(offsetof(UFortAIDataProvider_Ability, AbilityTag) == 0x000028, "Member 'UFortAIDataProvider_Ability::AbilityTag' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_Ability, AbilityBehaviorDistanceTag) == 0x000048, "Member 'UFortAIDataProvider_Ability::AbilityBehaviorDistanceTag' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_Ability, BehaviorDistance) == 0x000068, "Member 'UFortAIDataProvider_Ability::BehaviorDistance' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_Ability, MaxTargetSelectionRange) == 0x00006C, "Member 'UFortAIDataProvider_Ability::MaxTargetSelectionRange' has a wrong offset!");

class AFortNavMesh : public ARecastNavMesh
{
public:
	class UFortAIHotSpotManager*                  HotSpotManager;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavMesh">();
	}
	static class AFortNavMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortNavMesh>();
	}
};
static_assert(alignof(AFortNavMesh) == 0x000008, "Wrong alignment on AFortNavMesh");
static_assert(sizeof(AFortNavMesh) == 0x0005A0, "Wrong size on AFortNavMesh");
static_assert(offsetof(AFortNavMesh, HotSpotManager) == 0x000598, "Member 'AFortNavMesh::HotSpotManager' has a wrong offset!");

class AAthenaNavMesh : public AFortNavMesh
{
public:
	int32                                         HotSpotPathfindingMaxSearchNodes;
	float                                         ShallowWaterTraceStartOffsetZ;
	float                                         ShallowWaterTraceEndOffsetZ;
	int32                                         MaximumTilesToProcessForWaterPerFrame;
	bool                                          bSuspendNavmeshWhenNoAIUsersAlive;
	uint8                                         Pad_5B1[0x7];
	TArray<struct FBox>                           SerializedDirtyAreas;
	uint8                                         Pad_5C8[0xD8];

public:
	void ComputeOffsetForMoveTiles(const struct FVector& StartPosition, const struct FVector& DesiredPosition, struct FVector* OutEndPosition, struct FIntPoint* OutTileOffset);
	void MoveTiles(const struct FBox& SourceBox, const struct FIntPoint& TileOffset, const float RotationDeg, const struct FVector2D& FillerTilePosition);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaNavMesh">();
	}
	static class AAthenaNavMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaNavMesh>();
	}
};
static_assert(alignof(AAthenaNavMesh) == 0x000008, "Wrong alignment on AAthenaNavMesh");
static_assert(sizeof(AAthenaNavMesh) == 0x0006A0, "Wrong size on AAthenaNavMesh");
static_assert(offsetof(AAthenaNavMesh, HotSpotPathfindingMaxSearchNodes) == 0x0005A0, "Member 'AAthenaNavMesh::HotSpotPathfindingMaxSearchNodes' has a wrong offset!");
static_assert(offsetof(AAthenaNavMesh, ShallowWaterTraceStartOffsetZ) == 0x0005A4, "Member 'AAthenaNavMesh::ShallowWaterTraceStartOffsetZ' has a wrong offset!");
static_assert(offsetof(AAthenaNavMesh, ShallowWaterTraceEndOffsetZ) == 0x0005A8, "Member 'AAthenaNavMesh::ShallowWaterTraceEndOffsetZ' has a wrong offset!");
static_assert(offsetof(AAthenaNavMesh, MaximumTilesToProcessForWaterPerFrame) == 0x0005AC, "Member 'AAthenaNavMesh::MaximumTilesToProcessForWaterPerFrame' has a wrong offset!");
static_assert(offsetof(AAthenaNavMesh, bSuspendNavmeshWhenNoAIUsersAlive) == 0x0005B0, "Member 'AAthenaNavMesh::bSuspendNavmeshWhenNoAIUsersAlive' has a wrong offset!");
static_assert(offsetof(AAthenaNavMesh, SerializedDirtyAreas) == 0x0005B8, "Member 'AAthenaNavMesh::SerializedDirtyAreas' has a wrong offset!");

class UFortAIDataProvider_AIDirector final : public UAIDataProvider
{
public:
	float                                         AIRelevantDistanceToPlayer;
	float                                         EncounterRelevantDistanceToPlayer;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIDataProvider_AIDirector">();
	}
	static class UFortAIDataProvider_AIDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIDataProvider_AIDirector>();
	}
};
static_assert(alignof(UFortAIDataProvider_AIDirector) == 0x000008, "Wrong alignment on UFortAIDataProvider_AIDirector");
static_assert(sizeof(UFortAIDataProvider_AIDirector) == 0x000030, "Wrong size on UFortAIDataProvider_AIDirector");
static_assert(offsetof(UFortAIDataProvider_AIDirector, AIRelevantDistanceToPlayer) == 0x000028, "Member 'UFortAIDataProvider_AIDirector::AIRelevantDistanceToPlayer' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_AIDirector, EncounterRelevantDistanceToPlayer) == 0x00002C, "Member 'UFortAIDataProvider_AIDirector::EncounterRelevantDistanceToPlayer' has a wrong offset!");

class UFortAIDataProvider_FloatCurveOverGameDifficulty final : public UAIDataProvider
{
public:
	struct FScalableFloat                         ScalableFloat;
	float                                         FloatValue;
	uint8                                         Pad_54[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIDataProvider_FloatCurveOverGameDifficulty">();
	}
	static class UFortAIDataProvider_FloatCurveOverGameDifficulty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIDataProvider_FloatCurveOverGameDifficulty>();
	}
};
static_assert(alignof(UFortAIDataProvider_FloatCurveOverGameDifficulty) == 0x000008, "Wrong alignment on UFortAIDataProvider_FloatCurveOverGameDifficulty");
static_assert(sizeof(UFortAIDataProvider_FloatCurveOverGameDifficulty) == 0x000058, "Wrong size on UFortAIDataProvider_FloatCurveOverGameDifficulty");
static_assert(offsetof(UFortAIDataProvider_FloatCurveOverGameDifficulty, ScalableFloat) == 0x000028, "Member 'UFortAIDataProvider_FloatCurveOverGameDifficulty::ScalableFloat' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_FloatCurveOverGameDifficulty, FloatValue) == 0x000050, "Member 'UFortAIDataProvider_FloatCurveOverGameDifficulty::FloatValue' has a wrong offset!");

class UFortNavArea_TraceSmashable final : public UFortNavArea_DefaultSmashable
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_TraceSmashable">();
	}
	static class UFortNavArea_TraceSmashable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_TraceSmashable>();
	}
};
static_assert(alignof(UFortNavArea_TraceSmashable) == 0x000008, "Wrong alignment on UFortNavArea_TraceSmashable");
static_assert(sizeof(UFortNavArea_TraceSmashable) == 0x000050, "Wrong size on UFortNavArea_TraceSmashable");

class UFortAIDataProvider_GoalProviderAbility final : public UFortAIDataProvider_Ability
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIDataProvider_GoalProviderAbility">();
	}
	static class UFortAIDataProvider_GoalProviderAbility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIDataProvider_GoalProviderAbility>();
	}
};
static_assert(alignof(UFortAIDataProvider_GoalProviderAbility) == 0x000008, "Wrong alignment on UFortAIDataProvider_GoalProviderAbility");
static_assert(sizeof(UFortAIDataProvider_GoalProviderAbility) == 0x000070, "Wrong size on UFortAIDataProvider_GoalProviderAbility");

class UFortAIDataProvider_Pawn final : public UAIDataProvider
{
public:
	float                                         SightRadius;
	float                                         HearingRadius;
	float                                         ViewLocationOffsetFromGround;
	float                                         MaxStepHeight;
	struct FVector                                TetheredBoxCenterLocation;
	float                                         TetheredBoxWidth;
	float                                         TetheredBoxHeight;
	float                                         TetheredBoxEQSGridSize;
	float                                         TetheredBoxEQSSpaceBetween;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIDataProvider_Pawn">();
	}
	static class UFortAIDataProvider_Pawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIDataProvider_Pawn>();
	}
};
static_assert(alignof(UFortAIDataProvider_Pawn) == 0x000008, "Wrong alignment on UFortAIDataProvider_Pawn");
static_assert(sizeof(UFortAIDataProvider_Pawn) == 0x000060, "Wrong size on UFortAIDataProvider_Pawn");
static_assert(offsetof(UFortAIDataProvider_Pawn, SightRadius) == 0x000028, "Member 'UFortAIDataProvider_Pawn::SightRadius' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_Pawn, HearingRadius) == 0x00002C, "Member 'UFortAIDataProvider_Pawn::HearingRadius' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_Pawn, ViewLocationOffsetFromGround) == 0x000030, "Member 'UFortAIDataProvider_Pawn::ViewLocationOffsetFromGround' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_Pawn, MaxStepHeight) == 0x000034, "Member 'UFortAIDataProvider_Pawn::MaxStepHeight' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_Pawn, TetheredBoxCenterLocation) == 0x000038, "Member 'UFortAIDataProvider_Pawn::TetheredBoxCenterLocation' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_Pawn, TetheredBoxWidth) == 0x000050, "Member 'UFortAIDataProvider_Pawn::TetheredBoxWidth' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_Pawn, TetheredBoxHeight) == 0x000054, "Member 'UFortAIDataProvider_Pawn::TetheredBoxHeight' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_Pawn, TetheredBoxEQSGridSize) == 0x000058, "Member 'UFortAIDataProvider_Pawn::TetheredBoxEQSGridSize' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_Pawn, TetheredBoxEQSSpaceBetween) == 0x00005C, "Member 'UFortAIDataProvider_Pawn::TetheredBoxEQSSpaceBetween' has a wrong offset!");

class UAthenaNavPresenceDetectorComponent final : public UActorComponent
{
public:
	bool                                          bDisableUponNavMeshPresence;
	bool                                          bHasValidNavMesh;
	uint8                                         Pad_A2[0x2];
	class FName                                   NavMeshNameToUse;
	TArray<struct FNavMeshDetectedInfo>           NavMeshesInfo;
	TMulticastInlineDelegate<void(class AActor* NavActor, bool bWasUndetectedBefore)> NavMeshPresenceDetected;
	TMulticastInlineDelegate<void(class AActor* NavActor, bool bWasDetectedBefore)> NavMeshPresenceUndetected;
	uint8                                         Pad_D8[0x10];

public:
	void OnNavMeshTilesUpdated(const struct FUpdatedNavMeshTiles& UpdatedNavMeshTiles);

	bool HasValidNavMeshLocation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaNavPresenceDetectorComponent">();
	}
	static class UAthenaNavPresenceDetectorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaNavPresenceDetectorComponent>();
	}
};
static_assert(alignof(UAthenaNavPresenceDetectorComponent) == 0x000008, "Wrong alignment on UAthenaNavPresenceDetectorComponent");
static_assert(sizeof(UAthenaNavPresenceDetectorComponent) == 0x0000E8, "Wrong size on UAthenaNavPresenceDetectorComponent");
static_assert(offsetof(UAthenaNavPresenceDetectorComponent, bDisableUponNavMeshPresence) == 0x0000A0, "Member 'UAthenaNavPresenceDetectorComponent::bDisableUponNavMeshPresence' has a wrong offset!");
static_assert(offsetof(UAthenaNavPresenceDetectorComponent, bHasValidNavMesh) == 0x0000A1, "Member 'UAthenaNavPresenceDetectorComponent::bHasValidNavMesh' has a wrong offset!");
static_assert(offsetof(UAthenaNavPresenceDetectorComponent, NavMeshNameToUse) == 0x0000A4, "Member 'UAthenaNavPresenceDetectorComponent::NavMeshNameToUse' has a wrong offset!");
static_assert(offsetof(UAthenaNavPresenceDetectorComponent, NavMeshesInfo) == 0x0000A8, "Member 'UAthenaNavPresenceDetectorComponent::NavMeshesInfo' has a wrong offset!");
static_assert(offsetof(UAthenaNavPresenceDetectorComponent, NavMeshPresenceDetected) == 0x0000B8, "Member 'UAthenaNavPresenceDetectorComponent::NavMeshPresenceDetected' has a wrong offset!");
static_assert(offsetof(UAthenaNavPresenceDetectorComponent, NavMeshPresenceUndetected) == 0x0000C8, "Member 'UAthenaNavPresenceDetectorComponent::NavMeshPresenceUndetected' has a wrong offset!");

class UFortAIDataProvider_ScalableFloat final : public UAIDataProvider
{
public:
	struct FScalableFloat                         ScalableFloat;
	float                                         FloatValue;
	int32                                         IntValue;
	bool                                          BoolValue;
	uint8                                         Pad_59[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIDataProvider_ScalableFloat">();
	}
	static class UFortAIDataProvider_ScalableFloat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIDataProvider_ScalableFloat>();
	}
};
static_assert(alignof(UFortAIDataProvider_ScalableFloat) == 0x000008, "Wrong alignment on UFortAIDataProvider_ScalableFloat");
static_assert(sizeof(UFortAIDataProvider_ScalableFloat) == 0x000060, "Wrong size on UFortAIDataProvider_ScalableFloat");
static_assert(offsetof(UFortAIDataProvider_ScalableFloat, ScalableFloat) == 0x000028, "Member 'UFortAIDataProvider_ScalableFloat::ScalableFloat' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_ScalableFloat, FloatValue) == 0x000050, "Member 'UFortAIDataProvider_ScalableFloat::FloatValue' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_ScalableFloat, IntValue) == 0x000054, "Member 'UFortAIDataProvider_ScalableFloat::IntValue' has a wrong offset!");
static_assert(offsetof(UFortAIDataProvider_ScalableFloat, BoolValue) == 0x000058, "Member 'UFortAIDataProvider_ScalableFloat::BoolValue' has a wrong offset!");

class UFortAIAssetLoader final : public UObject
{
public:
	TArray<struct FPendingRequestManager>         PendingRequests;
	TArray<class UObject*>                        AssetsLoaded;
	uint8                                         Pad_48[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIAssetLoader">();
	}
	static class UFortAIAssetLoader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIAssetLoader>();
	}
};
static_assert(alignof(UFortAIAssetLoader) == 0x000008, "Wrong alignment on UFortAIAssetLoader");
static_assert(sizeof(UFortAIAssetLoader) == 0x000050, "Wrong size on UFortAIAssetLoader");
static_assert(offsetof(UFortAIAssetLoader, PendingRequests) == 0x000028, "Member 'UFortAIAssetLoader::PendingRequests' has a wrong offset!");
static_assert(offsetof(UFortAIAssetLoader, AssetsLoaded) == 0x000038, "Member 'UFortAIAssetLoader::AssetsLoaded' has a wrong offset!");

class UFortCustomNavLinkGlobalProxy : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	uint32                                        LinkId;
	uint8                                         Pad_34[0x4];
	class UObject*                                Owner;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCustomNavLinkGlobalProxy">();
	}
	static class UFortCustomNavLinkGlobalProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCustomNavLinkGlobalProxy>();
	}
};
static_assert(alignof(UFortCustomNavLinkGlobalProxy) == 0x000008, "Wrong alignment on UFortCustomNavLinkGlobalProxy");
static_assert(sizeof(UFortCustomNavLinkGlobalProxy) == 0x000040, "Wrong size on UFortCustomNavLinkGlobalProxy");
static_assert(offsetof(UFortCustomNavLinkGlobalProxy, LinkId) == 0x000030, "Member 'UFortCustomNavLinkGlobalProxy::LinkId' has a wrong offset!");
static_assert(offsetof(UFortCustomNavLinkGlobalProxy, Owner) == 0x000038, "Member 'UFortCustomNavLinkGlobalProxy::Owner' has a wrong offset!");

class UFortAIAssignment final : public UObject
{
public:
	struct FFortAIAssignmentIdentifier            AssignmentIdentifier;
	class UFortAIAssignmentSettings*              AssignmentSettings;
	class UFortAIGoalProvider*                    GoalProvider;
	TArray<TWeakObjectPtr<class UAIGoalComponent>> GoalComponentsOnAssignment;
	uint8                                         Pad_78[0x50];
	TArray<struct FFortAIGoal>                    Goals;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIAssignment">();
	}
	static class UFortAIAssignment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIAssignment>();
	}
};
static_assert(alignof(UFortAIAssignment) == 0x000008, "Wrong alignment on UFortAIAssignment");
static_assert(sizeof(UFortAIAssignment) == 0x0000D8, "Wrong size on UFortAIAssignment");
static_assert(offsetof(UFortAIAssignment, AssignmentIdentifier) == 0x000028, "Member 'UFortAIAssignment::AssignmentIdentifier' has a wrong offset!");
static_assert(offsetof(UFortAIAssignment, AssignmentSettings) == 0x000058, "Member 'UFortAIAssignment::AssignmentSettings' has a wrong offset!");
static_assert(offsetof(UFortAIAssignment, GoalProvider) == 0x000060, "Member 'UFortAIAssignment::GoalProvider' has a wrong offset!");
static_assert(offsetof(UFortAIAssignment, GoalComponentsOnAssignment) == 0x000068, "Member 'UFortAIAssignment::GoalComponentsOnAssignment' has a wrong offset!");
static_assert(offsetof(UFortAIAssignment, Goals) == 0x0000C8, "Member 'UFortAIAssignment::Goals' has a wrong offset!");

class UFortAIAssignmentSettings final : public UDataAsset
{
public:
	TArray<struct FGoalSelectionQueryInfo>        GoalSelectionQueryInfos;
	bool                                          bGoalLocationsAlwaysKnown;
	bool                                          bIsEnemyAssignment;
	uint8                                         Pad_42[0x6];
	struct FGameplayTagContainer                  RequiredTags;
	struct FGameplayTagContainer                  ProhibitedTags;
	float                                         MaxAIAllowedForAssignment;
	float                                         MaxAIAllowedPerGoal;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIAssignmentSettings">();
	}
	static class UFortAIAssignmentSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIAssignmentSettings>();
	}
};
static_assert(alignof(UFortAIAssignmentSettings) == 0x000008, "Wrong alignment on UFortAIAssignmentSettings");
static_assert(sizeof(UFortAIAssignmentSettings) == 0x000090, "Wrong size on UFortAIAssignmentSettings");
static_assert(offsetof(UFortAIAssignmentSettings, GoalSelectionQueryInfos) == 0x000030, "Member 'UFortAIAssignmentSettings::GoalSelectionQueryInfos' has a wrong offset!");
static_assert(offsetof(UFortAIAssignmentSettings, bGoalLocationsAlwaysKnown) == 0x000040, "Member 'UFortAIAssignmentSettings::bGoalLocationsAlwaysKnown' has a wrong offset!");
static_assert(offsetof(UFortAIAssignmentSettings, bIsEnemyAssignment) == 0x000041, "Member 'UFortAIAssignmentSettings::bIsEnemyAssignment' has a wrong offset!");
static_assert(offsetof(UFortAIAssignmentSettings, RequiredTags) == 0x000048, "Member 'UFortAIAssignmentSettings::RequiredTags' has a wrong offset!");
static_assert(offsetof(UFortAIAssignmentSettings, ProhibitedTags) == 0x000068, "Member 'UFortAIAssignmentSettings::ProhibitedTags' has a wrong offset!");
static_assert(offsetof(UFortAIAssignmentSettings, MaxAIAllowedForAssignment) == 0x000088, "Member 'UFortAIAssignmentSettings::MaxAIAllowedForAssignment' has a wrong offset!");
static_assert(offsetof(UFortAIAssignmentSettings, MaxAIAllowedPerGoal) == 0x00008C, "Member 'UFortAIAssignmentSettings::MaxAIAllowedPerGoal' has a wrong offset!");

class UFortNavArea_MetaReplacement final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_MetaReplacement">();
	}
	static class UFortNavArea_MetaReplacement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_MetaReplacement>();
	}
};
static_assert(alignof(UFortNavArea_MetaReplacement) == 0x000008, "Wrong alignment on UFortNavArea_MetaReplacement");
static_assert(sizeof(UFortNavArea_MetaReplacement) == 0x000050, "Wrong size on UFortNavArea_MetaReplacement");

class AFortAIBotDebugActor final : public AActor
{
public:
	class UAthenaAIBotDebugMiniMapIndicator*      BotDebugMiniMapIndicator;

public:
	void OnRep_BotDebugMiniMapIndicator(class UAthenaAIBotDebugMiniMapIndicator* OldBotDebugMiniMap);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIBotDebugActor">();
	}
	static class AFortAIBotDebugActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAIBotDebugActor>();
	}
};
static_assert(alignof(AFortAIBotDebugActor) == 0x000008, "Wrong alignment on AFortAIBotDebugActor");
static_assert(sizeof(AFortAIBotDebugActor) == 0x000290, "Wrong size on AFortAIBotDebugActor");
static_assert(offsetof(AFortAIBotDebugActor, BotDebugMiniMapIndicator) == 0x000288, "Member 'AFortAIBotDebugActor::BotDebugMiniMapIndicator' has a wrong offset!");

class AFortAIBotPOIDebugActor final : public AActor
{
public:
	class UAthenaAIBotPOIDebugMiniMapIndicator*   BotPOIDebugMiniMapIndicator;

public:
	void OnRep_PlayerBotsDebugMiniMap(class UAthenaAIBotPOIDebugMiniMapIndicator* OldPlayerBotsDebugMiniMap);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIBotPOIDebugActor">();
	}
	static class AFortAIBotPOIDebugActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAIBotPOIDebugActor>();
	}
};
static_assert(alignof(AFortAIBotPOIDebugActor) == 0x000008, "Wrong alignment on AFortAIBotPOIDebugActor");
static_assert(sizeof(AFortAIBotPOIDebugActor) == 0x000290, "Wrong size on AFortAIBotPOIDebugActor");
static_assert(offsetof(AFortAIBotPOIDebugActor, BotPOIDebugMiniMapIndicator) == 0x000288, "Member 'AFortAIBotPOIDebugActor::BotPOIDebugMiniMapIndicator' has a wrong offset!");

class AAthenaNavMesh_Big final : public AAthenaNavMesh
{
public:
	float                                         MaximumDistanceToWaterForShallow;
	uint8                                         Pad_6A4[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaNavMesh_Big">();
	}
	static class AAthenaNavMesh_Big* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaNavMesh_Big>();
	}
};
static_assert(alignof(AAthenaNavMesh_Big) == 0x000008, "Wrong alignment on AAthenaNavMesh_Big");
static_assert(sizeof(AAthenaNavMesh_Big) == 0x0006A8, "Wrong size on AAthenaNavMesh_Big");
static_assert(offsetof(AAthenaNavMesh_Big, MaximumDistanceToWaterForShallow) == 0x0006A0, "Member 'AAthenaNavMesh_Big::MaximumDistanceToWaterForShallow' has a wrong offset!");

class UFortAICustomTargetingComponent final : public UActorComponent
{
public:
	TArray<struct FAICustomTargetConfiguration>   Configurations;
	uint8                                         Pad_B0[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAICustomTargetingComponent">();
	}
	static class UFortAICustomTargetingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAICustomTargetingComponent>();
	}
};
static_assert(alignof(UFortAICustomTargetingComponent) == 0x000008, "Wrong alignment on UFortAICustomTargetingComponent");
static_assert(sizeof(UFortAICustomTargetingComponent) == 0x000100, "Wrong size on UFortAICustomTargetingComponent");
static_assert(offsetof(UFortAICustomTargetingComponent, Configurations) == 0x0000A0, "Member 'UFortAICustomTargetingComponent::Configurations' has a wrong offset!");

class UFortAIDirectorLODAIConfig final : public UObject
{
public:
	struct FScalableFloat                         SingleAIUnitCost;
	struct FScalableFloat                         Priority;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIDirectorLODAIConfig">();
	}
	static class UFortAIDirectorLODAIConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIDirectorLODAIConfig>();
	}
};
static_assert(alignof(UFortAIDirectorLODAIConfig) == 0x000008, "Wrong alignment on UFortAIDirectorLODAIConfig");
static_assert(sizeof(UFortAIDirectorLODAIConfig) == 0x000078, "Wrong size on UFortAIDirectorLODAIConfig");
static_assert(offsetof(UFortAIDirectorLODAIConfig, SingleAIUnitCost) == 0x000028, "Member 'UFortAIDirectorLODAIConfig::SingleAIUnitCost' has a wrong offset!");
static_assert(offsetof(UFortAIDirectorLODAIConfig, Priority) == 0x000050, "Member 'UFortAIDirectorLODAIConfig::Priority' has a wrong offset!");

class AFortAIDirectorDataManager final : public AActor
{
public:
	class UObject*                                OwnerObject;
	TArray<struct FAIDirectorEventData>           EventsToTrack;
	TArray<struct FFortAIDirectorFactorData>      FactorsToTrack;
	uint8                                         Pad_2B0[0xA0];
	TArray<EFortAIDirectorFactor>                 FactorsBeingTracked;
	uint8                                         Pad_360[0x8];

public:
	void TriggerEvent(const struct FFortAIDirectorEvent& TriggeredEvent);

	float GetAIDirectorFactorValue(EFortAIDirectorFactor AIDirectorFactor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIDirectorDataManager">();
	}
	static class AFortAIDirectorDataManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAIDirectorDataManager>();
	}
};
static_assert(alignof(AFortAIDirectorDataManager) == 0x000008, "Wrong alignment on AFortAIDirectorDataManager");
static_assert(sizeof(AFortAIDirectorDataManager) == 0x000368, "Wrong size on AFortAIDirectorDataManager");
static_assert(offsetof(AFortAIDirectorDataManager, OwnerObject) == 0x000288, "Member 'AFortAIDirectorDataManager::OwnerObject' has a wrong offset!");
static_assert(offsetof(AFortAIDirectorDataManager, EventsToTrack) == 0x000290, "Member 'AFortAIDirectorDataManager::EventsToTrack' has a wrong offset!");
static_assert(offsetof(AFortAIDirectorDataManager, FactorsToTrack) == 0x0002A0, "Member 'AFortAIDirectorDataManager::FactorsToTrack' has a wrong offset!");
static_assert(offsetof(AFortAIDirectorDataManager, FactorsBeingTracked) == 0x000350, "Member 'AFortAIDirectorDataManager::FactorsBeingTracked' has a wrong offset!");

class UFortAIDirectorDataTrackingSettings final : public UDataAsset
{
public:
	TSubclassOf<class AFortAIDirectorDataManager> PlayerDataManager;
	TSubclassOf<class AFortAIDirectorDataManager> EncounterDataManager;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIDirectorDataTrackingSettings">();
	}
	static class UFortAIDirectorDataTrackingSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIDirectorDataTrackingSettings>();
	}
};
static_assert(alignof(UFortAIDirectorDataTrackingSettings) == 0x000008, "Wrong alignment on UFortAIDirectorDataTrackingSettings");
static_assert(sizeof(UFortAIDirectorDataTrackingSettings) == 0x000040, "Wrong size on UFortAIDirectorDataTrackingSettings");
static_assert(offsetof(UFortAIDirectorDataTrackingSettings, PlayerDataManager) == 0x000030, "Member 'UFortAIDirectorDataTrackingSettings::PlayerDataManager' has a wrong offset!");
static_assert(offsetof(UFortAIDirectorDataTrackingSettings, EncounterDataManager) == 0x000038, "Member 'UFortAIDirectorDataTrackingSettings::EncounterDataManager' has a wrong offset!");

class AFortAIDirectorEventManager final : public AActor
{
public:
	uint8                                         Pad_288[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIDirectorEventManager">();
	}
	static class AFortAIDirectorEventManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAIDirectorEventManager>();
	}
};
static_assert(alignof(AFortAIDirectorEventManager) == 0x000008, "Wrong alignment on AFortAIDirectorEventManager");
static_assert(sizeof(AFortAIDirectorEventManager) == 0x0002D8, "Wrong size on AFortAIDirectorEventManager");

class UFortAIEncounterInfo final : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	class UFortAISpawnGroupProgressionInfo*       SpawnGroupProgressionInfo;
	struct FFortSpawnPointsPercentageCurveSequenceInstanceInfo SpawnPointsPercentageCurveSequence;
	struct FFortIntensityCurveSequenceInstanceInfo IntensityCurveSequence;
	float                                         BurstSpawnPointsPercentage;
	float                                         SpawnPointsMultiplier;
	bool                                          bUseBreathers;
	uint8                                         Pad_69[0x7];
	struct FCurveTableRowHandle                   LowPlayerPerformanceBreatherTimeSecondsCurve;
	struct FCurveTableRowHandle                   NormalPlayerPerformanceBreatherTimeSecondsCurve;
	struct FCurveTableRowHandle                   HighPlayerPerformanceBreatherTimeSecondsCurve;
	float                                         EncounterTimeSeconds;
	uint8                                         Pad_A4[0x4];
	TArray<struct FUtilityTypeFloatPair>          LockedUtilityValues;
	int32                                         NumFreeUtilities;
	float                                         UtilityAdjustmentPeriodSeconds;
	float                                         MinSpawnDistance;
	float                                         MaxSpawnDistance;
	int32                                         NumDirections;
	bool                                          bChangeDirectionsOnRest;
	uint8                                         Pad_CD[0x3];
	float                                         SpawnPointsPercentageLimit;
	int32                                         PawnNumberLimit;
	struct FFortEncounterPawnNumberCaps           PawnNumberCaps;
	float                                         SpawningIntervalSeconds;
	float                                         PreSpawnRequeryTime;
	struct FFortEncounterSettingsFixedPace        EncounterSettingsFixed;
	uint8                                         Pad_10C[0x4];
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter)> OnEncounterSpawnDirectionsChosen;
	float                                         NextRiftReplacementTime;
	float                                         NextSpawningTime;
	struct FFortAIEncounterSpawnGroupCapsProfile  EncounterSpawnGroupCapsProfile;
	TArray<struct FFortAIEncounterSpawnGroupCapsCategory> AdditionalSpawnGroupCapsCategories;
	struct FFortAIEncounterSpawnPointsProfile     EncounterSpawnPointsProfile;
	TArray<struct FFortAISpawnGroupUpgradeData>   AvailableUpgrades;
	TArray<struct FCurveTableRowHandle>           PawnDifficultyLevelModifiers;
	TArray<struct FFortAIBaseLootDropRow>         BaseLootDropRows;
	TArray<struct FFortAILootDropModifierRow>     LootDropModifierRows;
	bool                                          bRequiresReinitializationFromProfile;
	uint8                                         Pad_1E9[0x7];
	struct FCurveTableRowHandle                   DesiredHostilityCurve;
	class UFortIntensityCurveSequenceProgression* IntensitySequenceProgression;
	uint8                                         Pad_208[0x70];
	float                                         AliveMultiplier;
	EFortEncounterSpawnLimitType                  SpawnLimitType;
	uint8                                         Pad_27D[0x3];
	int32                                         SpawnLimit;
	int32                                         PawnNumberLimitProgress;
	int32                                         SpawnPointsLimitProgress;
	bool                                          bSpawnLimitReached;
	bool                                          bHasSpawnedAllBurstSpawnAI;
	bool                                          bOverrideAliveCounts;
	uint8                                         Pad_28F[0x1];
	int32                                         MinAliveOverride;
	int32                                         MaxAliveOverride;
	float                                         HostilityThreshold;
	float                                         PeakTimeSeconds;
	float                                         BreatherTimeSeconds;
	float                                         MaxRampTimeSeconds;
	float                                         MinTimeBetweenBreathesSeconds;
	float                                         MaxFadeTimeSeconds;
	float                                         FadeEndIntensity;
	float                                         FadeEndRemainingSpawnPointsPercentage;
	float                                         CompletionPercentageToDisableBreathers;
	uint8                                         Pad_2BC[0x4];
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter)> OnEncounterAllEnemiesKilled;
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter, class AFortAIPawn* SpawnedEnemy)> OnEncounterEnemySpawned;
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter)> OnEncounterEnemySpawnFailed;
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter)> OnEncounterAllBurstEnemiesSpawned;
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter, bool bSuccessfullyCompleted)> OnEncounterCompleted;
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter, class AFortAIPawn* DeadPawn)> OnEncounterPawnDied;
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter)> OnEncounterSpawnedFinalEnemy;
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter, class ABuildingRift* Rift)> OnEncounterRiftSpawned;
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter, class ABuildingRift* Rift, class AController* EventInvestigator, class AActor* DamageCauser)> OnBuildingRiftBlockedShouldDie;
	uint8                                         Pad_350[0x3];
	bool                                          bDisplayThreatVisuals;
	float                                         BaseDesiredUtilities[0x10];
	uint8                                         Pad_394[0x4];
	struct FGameplayTagContainer                  UtilitiesRequiredTags[0x10];
	struct FGameplayTagContainer                  InjectedTagForUtilityCheck;
	uint8                                         Pad_5B8[0x4];
	float                                         MaxLargeSpawnGroupDiscountInterval;
	float                                         MaxSelectionToSpawningDelay;
	uint8                                         Pad_5C4[0x54];
	TArray<struct FUtilityTypeFloatPair>          CurrentDesiredUtilities;
	float                                         UtilityRecentSelectionPenalties[0x10];
	float                                         UtilityEffectivenessMeasurements[0x10];
	struct FCurveTableRowHandle                   UtilityEffectivenessMultiplierCurve;
	float                                         UtilityEffectivenessInfluenceCap;
	uint8                                         Pad_6BC[0x4];
	TArray<struct FUtilityTypeFloatPair>          CurrentTopUtilityPercentages;
	TArray<EFortAIUtility>                        UsedTopUtilities;
	TArray<EFortAIUtility>                        CurrentlySelectedFreeUtilities;
	int32                                         NumUtilitiesConsidered;
	float                                         ReactivityPercentage;
	bool                                          bAdjustUtilitiesDuringRest;
	bool                                          bDespawnAIsDuringRest;
	uint8                                         Pad_6FA[0x2];
	float                                         LastPlayerCombatFactorUpdateTime;
	float                                         LastUtilityAdjustTime;
	float                                         LastSpawnPointAdjustmentTime;
	float                                         LastLargeGroupSpawnTime;
	uint8                                         Pad_70C[0x4];
	TArray<struct FAIEncounterSpawnGroupWeights>  EnemySpawnData;
	struct FFortAIEncounterPIDController          EncounterPIDController;
	int32                                         CurrentSpawnPointsCap;
	int32                                         CurrentSpawnPointsUsed;
	uint8                                         Pad_790[0x8];
	int32                                         FailSafeMinSpawnPoints;
	uint8                                         Pad_79C[0x4];
	TArray<struct FSpawnGroupInstanceInfo>        ActiveSpawnGroups;
	float                                         EncounterEngagementDistance;
	float                                         MinRelevantBuildingDamagedDistance;
	float                                         MaxRelevantBuildingDamagedDistance;
	uint8                                         Pad_7BC[0x14];
	class AActor*                                 CurrentGroupSpawnPoint;
	EFortEncounterState                           EncounterState;
	EFortEncounterPacingState                     PacingState;
	uint8                                         Pad_7DA[0x2];
	float                                         LastPacingStateTransitionTime;
	struct FFortAIEncounterWaveProgressEstimation WaveProgressEstimate;
	float                                         DesiredDifficultyLevel;
	float                                         DifficultyLevelOverride;
	uint8                                         Pad_804[0x4];
	class AFortAIDirector*                        MyAIDirector;
	TArray<struct FFortGoalActorEncounterDataManagerPair> DataManagers;
	class AActor*                                 TargetObjective;
	bool                                          bOnlyActiveAtNight;
	uint8                                         Pad_829[0x3];
	int32                                         NumRiftsToUse;
	int32                                         MinRiftsToUse;
	int32                                         NumRiftsUsed;
	TStructCycleFixup<struct FFortEncounterSettings, 0x00C0, 0x08> EncounterSettings;
	float                                         EncounterStartTime;
	float                                         HostilityCurveStartTime;
	TStructCycleFixup<struct FEncounterEnvironmentQueryInfo, 0x0028, 0x08> DefaultEnvironmentQueryInfo;
	TStructCycleFixup<struct FEncounterEnvironmentQueryInfo, 0x0028, 0x08> FallbackEnvironmentQueryInfo;
	TStructCycleFixup<struct FEncounterEnvironmentQueryInfo, 0x0028, 0x08> OverrideEnvironmentQueryInfo;
	TStructCycleFixup<struct FEncounterEnvironmentQueryInfo, 0x0028, 0x08> CurrentEnvironmentQueryInfo;
	bool                                          bNukeWavesAtDaybreak;
	bool                                          bNukeWavesAtEncounterEnd;
	bool                                          bNukeWavesAtEncounterDeactivation;
	uint8                                         Pad_9A3[0x1];
	int32                                         ActiveEnemyCap;
	uint8                                         Pad_9A8[0x8];
	float                                         CurrentHostilityLevel;
	uint8                                         Pad_9B4[0x4];
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter)> OnEncounterRampStarted;
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter)> OnEncounterPeakStarted;
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter)> OnEncounterFadeStarted;
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter)> OnEncounterRestStarted;
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter)> OnEncounterCombatParticipation;
	TMulticastInlineDelegate<void(class UFortAIEncounterInfo* Encounter)> OnEncounterOptionsChanged;
	TSubclassOf<class ABuildingRift>              RiftClassTemplate;
	uint8                                         Pad_A20[0x20];
	TMap<TWeakObjectPtr<class AActor>, struct FFortAISpawnerData> ExternalAISpawners;
	struct FFortAIEncounterQueryData              EncounterQueryData;
	class UFortAIEncounterRiftManager*            RiftManager;
	class FString                                 AssociatedMissionName;
	EFortMissionType                              AssociatedMissionType;
	uint8                                         Pad_AC9[0x3];
	uint8                                         bCanBeActive : 1;
	uint8                                         Pad_ACD[0x3];
	TArray<class UFortAIAssignment*>              EncounterAssignments;
	class UFortAIAssignmentSettings*              DefaultEncounterAssignmentSettings;
	uint8                                         Pad_AE8[0x30];
	int32                                         MaxActiveAlive;
	int32                                         MaxSpawnPointsUsed;
	class UCurveFloat*                            OverrideSpawnPointsCurve;
	uint8                                         Pad_B28[0x1F8];
	bool                                          bSendFullAnalyticsReport;
	bool                                          bUseAILifespans;
	bool                                          bTrackCombatParticipation;
	uint8                                         Pad_D23[0x5];
	struct FGameplayTagContainer                  ModifierTags;
	TArray<struct FFortAIEncounterTimedModifierTags> TimedModifierTags;
	struct FGameplayTagContainer                  GameContextTags;
	class AFortGameplayMutator_AILevelVariance*   AILevelMutator;
	TArray<class AFortGameplayMutator_AIEncounterModifierTags*> EncounterModifierTagsMutators;
	uint8                                         Pad_D90[0x8];

public:
	class UFortAIAssignment* CreateEncounterAssignment(class UFortAIAssignmentSettings* AssignmentSettings, class AActor* GoalActor);
	void DespawnPendingAndCurrentAI();
	class AFortAIDirectorDataManager* GetEncounterDataManager();
	float GetEncounterTimeSeconds();
	bool GroupHasAIRemainingToSpawn(const struct FFortAISpawnerData& FortAISpawnerData);
	void NotifyRiftDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnEncounterPawnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnFadeStarted();
	void OnGameDifficultyChanged();
	void OnGoalTakeDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnPeakStarted();
	void OnRampStarted();
	void OnRestStarted();
	void RegisterAISpawner(class AActor* InAISpawner);
	void RequestActivation(int32 ActivationDelay);
	void SetEncounterActivationState(bool bEncounterActivityState);
	void SetNukeWavesAtEncounterEnd(bool bNuke);
	void SetPawnNumberLimit(int32 InPawnNumberLimit);
	class AFortAIPawn* SpawnAIPawnReservedForEnemySpawner(class AActor* EnemySpawner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void SpawnTestAIGroup(const class UFortAISpawnGroup* SpawnGroupToSpawn, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class AActor* SpawnSource, const TArray<class UFortAbilitySet*>& AbilitySetsToGrantOnSpawn, const struct FFortAISpawnGroupUpgradeData& UpgradeData, bool bAllowAssigningToExternalSpawners, float SecondsBetweenSpawns);
	void UnRegisterAISpawner(class AActor* InAISpawner);

	bool EncounterHasReservedSpawnRequestForEnemySpawner(class AActor* EnemySpawner) const;
	bool GetCurrentSpawnAreaDirections(TArray<EFortEncounterDirection>* OutDirections) const;
	void GetEncounterAssignmentGoalActors(TArray<class AActor*>* OutGoalActors) const;
	void GetEncounterGameplayTags(struct FGameplayTagContainer* OutEncounterTags) const;
	class AActor* GetEncounterQueryActor() const;
	void GetEncounterRifts(TArray<class ABuildingRift*>* OutRifts) const;
	int32 GetPawnNumberLimit() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIEncounterInfo">();
	}
	static class UFortAIEncounterInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIEncounterInfo>();
	}
};
static_assert(alignof(UFortAIEncounterInfo) == 0x000008, "Wrong alignment on UFortAIEncounterInfo");
static_assert(sizeof(UFortAIEncounterInfo) == 0x000D98, "Wrong size on UFortAIEncounterInfo");
static_assert(offsetof(UFortAIEncounterInfo, SpawnGroupProgressionInfo) == 0x000038, "Member 'UFortAIEncounterInfo::SpawnGroupProgressionInfo' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, SpawnPointsPercentageCurveSequence) == 0x000040, "Member 'UFortAIEncounterInfo::SpawnPointsPercentageCurveSequence' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, IntensityCurveSequence) == 0x000050, "Member 'UFortAIEncounterInfo::IntensityCurveSequence' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, BurstSpawnPointsPercentage) == 0x000060, "Member 'UFortAIEncounterInfo::BurstSpawnPointsPercentage' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, SpawnPointsMultiplier) == 0x000064, "Member 'UFortAIEncounterInfo::SpawnPointsMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bUseBreathers) == 0x000068, "Member 'UFortAIEncounterInfo::bUseBreathers' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, LowPlayerPerformanceBreatherTimeSecondsCurve) == 0x000070, "Member 'UFortAIEncounterInfo::LowPlayerPerformanceBreatherTimeSecondsCurve' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, NormalPlayerPerformanceBreatherTimeSecondsCurve) == 0x000080, "Member 'UFortAIEncounterInfo::NormalPlayerPerformanceBreatherTimeSecondsCurve' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, HighPlayerPerformanceBreatherTimeSecondsCurve) == 0x000090, "Member 'UFortAIEncounterInfo::HighPlayerPerformanceBreatherTimeSecondsCurve' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, EncounterTimeSeconds) == 0x0000A0, "Member 'UFortAIEncounterInfo::EncounterTimeSeconds' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, LockedUtilityValues) == 0x0000A8, "Member 'UFortAIEncounterInfo::LockedUtilityValues' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, NumFreeUtilities) == 0x0000B8, "Member 'UFortAIEncounterInfo::NumFreeUtilities' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, UtilityAdjustmentPeriodSeconds) == 0x0000BC, "Member 'UFortAIEncounterInfo::UtilityAdjustmentPeriodSeconds' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MinSpawnDistance) == 0x0000C0, "Member 'UFortAIEncounterInfo::MinSpawnDistance' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MaxSpawnDistance) == 0x0000C4, "Member 'UFortAIEncounterInfo::MaxSpawnDistance' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, NumDirections) == 0x0000C8, "Member 'UFortAIEncounterInfo::NumDirections' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bChangeDirectionsOnRest) == 0x0000CC, "Member 'UFortAIEncounterInfo::bChangeDirectionsOnRest' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, SpawnPointsPercentageLimit) == 0x0000D0, "Member 'UFortAIEncounterInfo::SpawnPointsPercentageLimit' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, PawnNumberLimit) == 0x0000D4, "Member 'UFortAIEncounterInfo::PawnNumberLimit' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, PawnNumberCaps) == 0x0000D8, "Member 'UFortAIEncounterInfo::PawnNumberCaps' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, SpawningIntervalSeconds) == 0x0000F0, "Member 'UFortAIEncounterInfo::SpawningIntervalSeconds' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, PreSpawnRequeryTime) == 0x0000F4, "Member 'UFortAIEncounterInfo::PreSpawnRequeryTime' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, EncounterSettingsFixed) == 0x0000F8, "Member 'UFortAIEncounterInfo::EncounterSettingsFixed' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterSpawnDirectionsChosen) == 0x000110, "Member 'UFortAIEncounterInfo::OnEncounterSpawnDirectionsChosen' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, NextRiftReplacementTime) == 0x000120, "Member 'UFortAIEncounterInfo::NextRiftReplacementTime' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, NextSpawningTime) == 0x000124, "Member 'UFortAIEncounterInfo::NextSpawningTime' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, EncounterSpawnGroupCapsProfile) == 0x000128, "Member 'UFortAIEncounterInfo::EncounterSpawnGroupCapsProfile' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, AdditionalSpawnGroupCapsCategories) == 0x000158, "Member 'UFortAIEncounterInfo::AdditionalSpawnGroupCapsCategories' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, EncounterSpawnPointsProfile) == 0x000168, "Member 'UFortAIEncounterInfo::EncounterSpawnPointsProfile' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, AvailableUpgrades) == 0x0001A8, "Member 'UFortAIEncounterInfo::AvailableUpgrades' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, PawnDifficultyLevelModifiers) == 0x0001B8, "Member 'UFortAIEncounterInfo::PawnDifficultyLevelModifiers' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, BaseLootDropRows) == 0x0001C8, "Member 'UFortAIEncounterInfo::BaseLootDropRows' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, LootDropModifierRows) == 0x0001D8, "Member 'UFortAIEncounterInfo::LootDropModifierRows' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bRequiresReinitializationFromProfile) == 0x0001E8, "Member 'UFortAIEncounterInfo::bRequiresReinitializationFromProfile' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, DesiredHostilityCurve) == 0x0001F0, "Member 'UFortAIEncounterInfo::DesiredHostilityCurve' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, IntensitySequenceProgression) == 0x000200, "Member 'UFortAIEncounterInfo::IntensitySequenceProgression' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, AliveMultiplier) == 0x000278, "Member 'UFortAIEncounterInfo::AliveMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, SpawnLimitType) == 0x00027C, "Member 'UFortAIEncounterInfo::SpawnLimitType' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, SpawnLimit) == 0x000280, "Member 'UFortAIEncounterInfo::SpawnLimit' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, PawnNumberLimitProgress) == 0x000284, "Member 'UFortAIEncounterInfo::PawnNumberLimitProgress' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, SpawnPointsLimitProgress) == 0x000288, "Member 'UFortAIEncounterInfo::SpawnPointsLimitProgress' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bSpawnLimitReached) == 0x00028C, "Member 'UFortAIEncounterInfo::bSpawnLimitReached' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bHasSpawnedAllBurstSpawnAI) == 0x00028D, "Member 'UFortAIEncounterInfo::bHasSpawnedAllBurstSpawnAI' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bOverrideAliveCounts) == 0x00028E, "Member 'UFortAIEncounterInfo::bOverrideAliveCounts' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MinAliveOverride) == 0x000290, "Member 'UFortAIEncounterInfo::MinAliveOverride' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MaxAliveOverride) == 0x000294, "Member 'UFortAIEncounterInfo::MaxAliveOverride' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, HostilityThreshold) == 0x000298, "Member 'UFortAIEncounterInfo::HostilityThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, PeakTimeSeconds) == 0x00029C, "Member 'UFortAIEncounterInfo::PeakTimeSeconds' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, BreatherTimeSeconds) == 0x0002A0, "Member 'UFortAIEncounterInfo::BreatherTimeSeconds' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MaxRampTimeSeconds) == 0x0002A4, "Member 'UFortAIEncounterInfo::MaxRampTimeSeconds' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MinTimeBetweenBreathesSeconds) == 0x0002A8, "Member 'UFortAIEncounterInfo::MinTimeBetweenBreathesSeconds' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MaxFadeTimeSeconds) == 0x0002AC, "Member 'UFortAIEncounterInfo::MaxFadeTimeSeconds' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, FadeEndIntensity) == 0x0002B0, "Member 'UFortAIEncounterInfo::FadeEndIntensity' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, FadeEndRemainingSpawnPointsPercentage) == 0x0002B4, "Member 'UFortAIEncounterInfo::FadeEndRemainingSpawnPointsPercentage' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, CompletionPercentageToDisableBreathers) == 0x0002B8, "Member 'UFortAIEncounterInfo::CompletionPercentageToDisableBreathers' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterAllEnemiesKilled) == 0x0002C0, "Member 'UFortAIEncounterInfo::OnEncounterAllEnemiesKilled' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterEnemySpawned) == 0x0002D0, "Member 'UFortAIEncounterInfo::OnEncounterEnemySpawned' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterEnemySpawnFailed) == 0x0002E0, "Member 'UFortAIEncounterInfo::OnEncounterEnemySpawnFailed' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterAllBurstEnemiesSpawned) == 0x0002F0, "Member 'UFortAIEncounterInfo::OnEncounterAllBurstEnemiesSpawned' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterCompleted) == 0x000300, "Member 'UFortAIEncounterInfo::OnEncounterCompleted' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterPawnDied) == 0x000310, "Member 'UFortAIEncounterInfo::OnEncounterPawnDied' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterSpawnedFinalEnemy) == 0x000320, "Member 'UFortAIEncounterInfo::OnEncounterSpawnedFinalEnemy' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterRiftSpawned) == 0x000330, "Member 'UFortAIEncounterInfo::OnEncounterRiftSpawned' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnBuildingRiftBlockedShouldDie) == 0x000340, "Member 'UFortAIEncounterInfo::OnBuildingRiftBlockedShouldDie' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bDisplayThreatVisuals) == 0x000353, "Member 'UFortAIEncounterInfo::bDisplayThreatVisuals' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, BaseDesiredUtilities) == 0x000354, "Member 'UFortAIEncounterInfo::BaseDesiredUtilities' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, UtilitiesRequiredTags) == 0x000398, "Member 'UFortAIEncounterInfo::UtilitiesRequiredTags' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, InjectedTagForUtilityCheck) == 0x000598, "Member 'UFortAIEncounterInfo::InjectedTagForUtilityCheck' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MaxLargeSpawnGroupDiscountInterval) == 0x0005BC, "Member 'UFortAIEncounterInfo::MaxLargeSpawnGroupDiscountInterval' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MaxSelectionToSpawningDelay) == 0x0005C0, "Member 'UFortAIEncounterInfo::MaxSelectionToSpawningDelay' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, CurrentDesiredUtilities) == 0x000618, "Member 'UFortAIEncounterInfo::CurrentDesiredUtilities' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, UtilityRecentSelectionPenalties) == 0x000628, "Member 'UFortAIEncounterInfo::UtilityRecentSelectionPenalties' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, UtilityEffectivenessMeasurements) == 0x000668, "Member 'UFortAIEncounterInfo::UtilityEffectivenessMeasurements' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, UtilityEffectivenessMultiplierCurve) == 0x0006A8, "Member 'UFortAIEncounterInfo::UtilityEffectivenessMultiplierCurve' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, UtilityEffectivenessInfluenceCap) == 0x0006B8, "Member 'UFortAIEncounterInfo::UtilityEffectivenessInfluenceCap' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, CurrentTopUtilityPercentages) == 0x0006C0, "Member 'UFortAIEncounterInfo::CurrentTopUtilityPercentages' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, UsedTopUtilities) == 0x0006D0, "Member 'UFortAIEncounterInfo::UsedTopUtilities' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, CurrentlySelectedFreeUtilities) == 0x0006E0, "Member 'UFortAIEncounterInfo::CurrentlySelectedFreeUtilities' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, NumUtilitiesConsidered) == 0x0006F0, "Member 'UFortAIEncounterInfo::NumUtilitiesConsidered' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, ReactivityPercentage) == 0x0006F4, "Member 'UFortAIEncounterInfo::ReactivityPercentage' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bAdjustUtilitiesDuringRest) == 0x0006F8, "Member 'UFortAIEncounterInfo::bAdjustUtilitiesDuringRest' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bDespawnAIsDuringRest) == 0x0006F9, "Member 'UFortAIEncounterInfo::bDespawnAIsDuringRest' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, LastPlayerCombatFactorUpdateTime) == 0x0006FC, "Member 'UFortAIEncounterInfo::LastPlayerCombatFactorUpdateTime' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, LastUtilityAdjustTime) == 0x000700, "Member 'UFortAIEncounterInfo::LastUtilityAdjustTime' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, LastSpawnPointAdjustmentTime) == 0x000704, "Member 'UFortAIEncounterInfo::LastSpawnPointAdjustmentTime' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, LastLargeGroupSpawnTime) == 0x000708, "Member 'UFortAIEncounterInfo::LastLargeGroupSpawnTime' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, EnemySpawnData) == 0x000710, "Member 'UFortAIEncounterInfo::EnemySpawnData' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, EncounterPIDController) == 0x000720, "Member 'UFortAIEncounterInfo::EncounterPIDController' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, CurrentSpawnPointsCap) == 0x000788, "Member 'UFortAIEncounterInfo::CurrentSpawnPointsCap' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, CurrentSpawnPointsUsed) == 0x00078C, "Member 'UFortAIEncounterInfo::CurrentSpawnPointsUsed' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, FailSafeMinSpawnPoints) == 0x000798, "Member 'UFortAIEncounterInfo::FailSafeMinSpawnPoints' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, ActiveSpawnGroups) == 0x0007A0, "Member 'UFortAIEncounterInfo::ActiveSpawnGroups' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, EncounterEngagementDistance) == 0x0007B0, "Member 'UFortAIEncounterInfo::EncounterEngagementDistance' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MinRelevantBuildingDamagedDistance) == 0x0007B4, "Member 'UFortAIEncounterInfo::MinRelevantBuildingDamagedDistance' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MaxRelevantBuildingDamagedDistance) == 0x0007B8, "Member 'UFortAIEncounterInfo::MaxRelevantBuildingDamagedDistance' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, CurrentGroupSpawnPoint) == 0x0007D0, "Member 'UFortAIEncounterInfo::CurrentGroupSpawnPoint' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, EncounterState) == 0x0007D8, "Member 'UFortAIEncounterInfo::EncounterState' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, PacingState) == 0x0007D9, "Member 'UFortAIEncounterInfo::PacingState' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, LastPacingStateTransitionTime) == 0x0007DC, "Member 'UFortAIEncounterInfo::LastPacingStateTransitionTime' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, WaveProgressEstimate) == 0x0007E0, "Member 'UFortAIEncounterInfo::WaveProgressEstimate' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, DesiredDifficultyLevel) == 0x0007FC, "Member 'UFortAIEncounterInfo::DesiredDifficultyLevel' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, DifficultyLevelOverride) == 0x000800, "Member 'UFortAIEncounterInfo::DifficultyLevelOverride' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MyAIDirector) == 0x000808, "Member 'UFortAIEncounterInfo::MyAIDirector' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, DataManagers) == 0x000810, "Member 'UFortAIEncounterInfo::DataManagers' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, TargetObjective) == 0x000820, "Member 'UFortAIEncounterInfo::TargetObjective' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bOnlyActiveAtNight) == 0x000828, "Member 'UFortAIEncounterInfo::bOnlyActiveAtNight' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, NumRiftsToUse) == 0x00082C, "Member 'UFortAIEncounterInfo::NumRiftsToUse' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MinRiftsToUse) == 0x000830, "Member 'UFortAIEncounterInfo::MinRiftsToUse' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, NumRiftsUsed) == 0x000834, "Member 'UFortAIEncounterInfo::NumRiftsUsed' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, EncounterSettings) == 0x000838, "Member 'UFortAIEncounterInfo::EncounterSettings' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, EncounterStartTime) == 0x0008F8, "Member 'UFortAIEncounterInfo::EncounterStartTime' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, HostilityCurveStartTime) == 0x0008FC, "Member 'UFortAIEncounterInfo::HostilityCurveStartTime' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, DefaultEnvironmentQueryInfo) == 0x000900, "Member 'UFortAIEncounterInfo::DefaultEnvironmentQueryInfo' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, FallbackEnvironmentQueryInfo) == 0x000928, "Member 'UFortAIEncounterInfo::FallbackEnvironmentQueryInfo' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OverrideEnvironmentQueryInfo) == 0x000950, "Member 'UFortAIEncounterInfo::OverrideEnvironmentQueryInfo' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, CurrentEnvironmentQueryInfo) == 0x000978, "Member 'UFortAIEncounterInfo::CurrentEnvironmentQueryInfo' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bNukeWavesAtDaybreak) == 0x0009A0, "Member 'UFortAIEncounterInfo::bNukeWavesAtDaybreak' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bNukeWavesAtEncounterEnd) == 0x0009A1, "Member 'UFortAIEncounterInfo::bNukeWavesAtEncounterEnd' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bNukeWavesAtEncounterDeactivation) == 0x0009A2, "Member 'UFortAIEncounterInfo::bNukeWavesAtEncounterDeactivation' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, ActiveEnemyCap) == 0x0009A4, "Member 'UFortAIEncounterInfo::ActiveEnemyCap' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, CurrentHostilityLevel) == 0x0009B0, "Member 'UFortAIEncounterInfo::CurrentHostilityLevel' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterRampStarted) == 0x0009B8, "Member 'UFortAIEncounterInfo::OnEncounterRampStarted' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterPeakStarted) == 0x0009C8, "Member 'UFortAIEncounterInfo::OnEncounterPeakStarted' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterFadeStarted) == 0x0009D8, "Member 'UFortAIEncounterInfo::OnEncounterFadeStarted' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterRestStarted) == 0x0009E8, "Member 'UFortAIEncounterInfo::OnEncounterRestStarted' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterCombatParticipation) == 0x0009F8, "Member 'UFortAIEncounterInfo::OnEncounterCombatParticipation' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OnEncounterOptionsChanged) == 0x000A08, "Member 'UFortAIEncounterInfo::OnEncounterOptionsChanged' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, RiftClassTemplate) == 0x000A18, "Member 'UFortAIEncounterInfo::RiftClassTemplate' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, ExternalAISpawners) == 0x000A40, "Member 'UFortAIEncounterInfo::ExternalAISpawners' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, EncounterQueryData) == 0x000A90, "Member 'UFortAIEncounterInfo::EncounterQueryData' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, RiftManager) == 0x000AB0, "Member 'UFortAIEncounterInfo::RiftManager' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, AssociatedMissionName) == 0x000AB8, "Member 'UFortAIEncounterInfo::AssociatedMissionName' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, AssociatedMissionType) == 0x000AC8, "Member 'UFortAIEncounterInfo::AssociatedMissionType' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, EncounterAssignments) == 0x000AD0, "Member 'UFortAIEncounterInfo::EncounterAssignments' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, DefaultEncounterAssignmentSettings) == 0x000AE0, "Member 'UFortAIEncounterInfo::DefaultEncounterAssignmentSettings' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MaxActiveAlive) == 0x000B18, "Member 'UFortAIEncounterInfo::MaxActiveAlive' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, MaxSpawnPointsUsed) == 0x000B1C, "Member 'UFortAIEncounterInfo::MaxSpawnPointsUsed' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, OverrideSpawnPointsCurve) == 0x000B20, "Member 'UFortAIEncounterInfo::OverrideSpawnPointsCurve' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bSendFullAnalyticsReport) == 0x000D20, "Member 'UFortAIEncounterInfo::bSendFullAnalyticsReport' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bUseAILifespans) == 0x000D21, "Member 'UFortAIEncounterInfo::bUseAILifespans' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, bTrackCombatParticipation) == 0x000D22, "Member 'UFortAIEncounterInfo::bTrackCombatParticipation' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, ModifierTags) == 0x000D28, "Member 'UFortAIEncounterInfo::ModifierTags' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, TimedModifierTags) == 0x000D48, "Member 'UFortAIEncounterInfo::TimedModifierTags' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, GameContextTags) == 0x000D58, "Member 'UFortAIEncounterInfo::GameContextTags' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, AILevelMutator) == 0x000D78, "Member 'UFortAIEncounterInfo::AILevelMutator' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterInfo, EncounterModifierTagsMutators) == 0x000D80, "Member 'UFortAIEncounterInfo::EncounterModifierTagsMutators' has a wrong offset!");

class IFortAIEncounterInfoOwnerInterface final : public IInterface
{
public:
	class UFortAIEncounterInfo* GetEncounterInfo() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIEncounterInfoOwnerInterface">();
	}
	static class IFortAIEncounterInfoOwnerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortAIEncounterInfoOwnerInterface>();
	}
};
static_assert(alignof(IFortAIEncounterInfoOwnerInterface) == 0x000008, "Wrong alignment on IFortAIEncounterInfoOwnerInterface");
static_assert(sizeof(IFortAIEncounterInfoOwnerInterface) == 0x000028, "Wrong size on IFortAIEncounterInfoOwnerInterface");

class UFortAIEncounterRiftManager final : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	class UFortAIEncounterInfo*                   MyEncounter;
	class AFortAIDirector*                        AIDirector;
	struct FFortAIEncounterSpawnArea              CurrentSpawnArea;
	struct FFortAIEncounterSpawnArea              FutureSpawnArea;
	float                                         UpdateIntervalTimeSeconds;
	int32                                         NumRiftsToUse;
	int32                                         MinRiftsToUse;
	uint8                                         Pad_104[0x4];
	TStructCycleFixup<struct FFortEncounterSettings, 0x00C0, 0x08> EncounterSettings;
	float                                         ExtraSpawnLocationPercentage;
	uint8                                         Pad_1CC[0x4];
	TStructCycleFixup<struct FEncounterEnvironmentQueryInfo, 0x0028, 0x08> CurrentEnvironmentQueryInfo;
	TStructCycleFixup<struct FEncounterEnvironmentQueryInfo, 0x0028, 0x08> FallbackEnvironmentQueryInfo;
	struct FFortAIEncounterQueryDirectionTracker  EncounterQueryDirectionTracker;
	TSubclassOf<class ABuildingRift>              RiftClassTemplate;
	float                                         LastObjectiveBatchPathCostUpdateTime;
	float                                         LastPlayerBatchPathCostUpdateTime;
	uint8                                         Pad_278[0x38];

public:
	void OnRiftDestroyed(class AActor* Rift);

	class AFortMission* GetAssociatedMission() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIEncounterRiftManager">();
	}
	static class UFortAIEncounterRiftManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIEncounterRiftManager>();
	}
};
static_assert(alignof(UFortAIEncounterRiftManager) == 0x000008, "Wrong alignment on UFortAIEncounterRiftManager");
static_assert(sizeof(UFortAIEncounterRiftManager) == 0x0002B0, "Wrong size on UFortAIEncounterRiftManager");
static_assert(offsetof(UFortAIEncounterRiftManager, MyEncounter) == 0x000038, "Member 'UFortAIEncounterRiftManager::MyEncounter' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterRiftManager, AIDirector) == 0x000040, "Member 'UFortAIEncounterRiftManager::AIDirector' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterRiftManager, CurrentSpawnArea) == 0x000048, "Member 'UFortAIEncounterRiftManager::CurrentSpawnArea' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterRiftManager, FutureSpawnArea) == 0x0000A0, "Member 'UFortAIEncounterRiftManager::FutureSpawnArea' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterRiftManager, UpdateIntervalTimeSeconds) == 0x0000F8, "Member 'UFortAIEncounterRiftManager::UpdateIntervalTimeSeconds' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterRiftManager, NumRiftsToUse) == 0x0000FC, "Member 'UFortAIEncounterRiftManager::NumRiftsToUse' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterRiftManager, MinRiftsToUse) == 0x000100, "Member 'UFortAIEncounterRiftManager::MinRiftsToUse' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterRiftManager, EncounterSettings) == 0x000108, "Member 'UFortAIEncounterRiftManager::EncounterSettings' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterRiftManager, ExtraSpawnLocationPercentage) == 0x0001C8, "Member 'UFortAIEncounterRiftManager::ExtraSpawnLocationPercentage' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterRiftManager, CurrentEnvironmentQueryInfo) == 0x0001D0, "Member 'UFortAIEncounterRiftManager::CurrentEnvironmentQueryInfo' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterRiftManager, FallbackEnvironmentQueryInfo) == 0x0001F8, "Member 'UFortAIEncounterRiftManager::FallbackEnvironmentQueryInfo' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterRiftManager, EncounterQueryDirectionTracker) == 0x000220, "Member 'UFortAIEncounterRiftManager::EncounterQueryDirectionTracker' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterRiftManager, RiftClassTemplate) == 0x000268, "Member 'UFortAIEncounterRiftManager::RiftClassTemplate' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterRiftManager, LastObjectiveBatchPathCostUpdateTime) == 0x000270, "Member 'UFortAIEncounterRiftManager::LastObjectiveBatchPathCostUpdateTime' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterRiftManager, LastPlayerBatchPathCostUpdateTime) == 0x000274, "Member 'UFortAIEncounterRiftManager::LastPlayerBatchPathCostUpdateTime' has a wrong offset!");

class UFortAIEncounterSequence final : public UObject
{
public:
	struct FFortGeneratedEncounterSequence        GeneratedEncounterSequence;
	int32                                         CurrentEncounterIndexInSequence;
	uint8                                         Pad_5C[0x4];
	class UFortAIEncounterInfo*                   CurrentEncounter;
	class AFortAIDirector*                        AssociatedAIDirector;
	class AFortMission*                           AssociatedMission;
	TArray<class AActor*>                         TargetActors;
	class UFortAIAssignmentSettings*              AssignmentSettings;
	TStructCycleFixup<struct FEncounterEnvironmentQueryInfo, 0x0028, 0x08> OverrideEnvironmentQueryInfo;
	class AActor*                                 OptionalQueryActor;
	struct FGameplayTagContainer                  InjectedTags;
	TStructCycleFixup<struct FFortEncounterSettings, 0x00C0, 0x08> EncounterSettings;

public:
	EFortEncounterSequenceResult Last();
	EFortEncounterSequenceResult Next();
	EFortEncounterSequenceResult Previous();
	void SetEncounterStartingData(const TArray<class AActor*>& InTargetActors, class UFortAIAssignmentSettings* InAssignmentSettings, const struct FEncounterEnvironmentQueryInfo& InOverrideEnvironmentQueryInfo, class AActor* InOptionalQueryActor, const struct FGameplayTagContainer& InInjectedTags, const struct FFortEncounterSettings& InEncounterSettings);
	class UFortAIEncounterInfo* StartCurrentEncounter(EFortEncounterSequenceResult* OutRequestResult, const TArray<class AActor*>& InTargetActors, class UFortAIAssignmentSettings* InAssignmentSettings, const struct FEncounterEnvironmentQueryInfo& InOverrideEnvironmentQueryInfo, class AActor* InOptionalQueryActor, const struct FGameplayTagContainer& InInjectedTags, const struct FFortEncounterSettings& InEncounterSettings, int32 ActivationDelay);
	class UFortAIEncounterInfo* StartCurrentEncounterWithSavedData(EFortEncounterSequenceResult* OutRequestResult, int32 ActivationDelay);
	void StopCurrentEncounter();

	bool EncounterBelongsToSequence(class UFortAIEncounterInfo* InEncounter) const;
	class UFortAIEncounterInfo* GetCurrentEncounter() const;
	int32 GetEncounterIndexInSequence() const;
	int32 GetNumEncountersInSequence() const;
	bool HasEncounter() const;
	bool IsOnFinalIndexInSequence() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIEncounterSequence">();
	}
	static class UFortAIEncounterSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIEncounterSequence>();
	}
};
static_assert(alignof(UFortAIEncounterSequence) == 0x000008, "Wrong alignment on UFortAIEncounterSequence");
static_assert(sizeof(UFortAIEncounterSequence) == 0x0001A0, "Wrong size on UFortAIEncounterSequence");
static_assert(offsetof(UFortAIEncounterSequence, GeneratedEncounterSequence) == 0x000028, "Member 'UFortAIEncounterSequence::GeneratedEncounterSequence' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterSequence, CurrentEncounterIndexInSequence) == 0x000058, "Member 'UFortAIEncounterSequence::CurrentEncounterIndexInSequence' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterSequence, CurrentEncounter) == 0x000060, "Member 'UFortAIEncounterSequence::CurrentEncounter' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterSequence, AssociatedAIDirector) == 0x000068, "Member 'UFortAIEncounterSequence::AssociatedAIDirector' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterSequence, AssociatedMission) == 0x000070, "Member 'UFortAIEncounterSequence::AssociatedMission' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterSequence, TargetActors) == 0x000078, "Member 'UFortAIEncounterSequence::TargetActors' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterSequence, AssignmentSettings) == 0x000088, "Member 'UFortAIEncounterSequence::AssignmentSettings' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterSequence, OverrideEnvironmentQueryInfo) == 0x000090, "Member 'UFortAIEncounterSequence::OverrideEnvironmentQueryInfo' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterSequence, OptionalQueryActor) == 0x0000B8, "Member 'UFortAIEncounterSequence::OptionalQueryActor' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterSequence, InjectedTags) == 0x0000C0, "Member 'UFortAIEncounterSequence::InjectedTags' has a wrong offset!");
static_assert(offsetof(UFortAIEncounterSequence, EncounterSettings) == 0x0000E0, "Member 'UFortAIEncounterSequence::EncounterSettings' has a wrong offset!");

class IFortAIEncounterTargetInterface final : public IInterface
{
public:
	float GetObjectiveCompletionPercentage();
	bool IsFloatingTarget();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIEncounterTargetInterface">();
	}
	static class IFortAIEncounterTargetInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortAIEncounterTargetInterface>();
	}
};
static_assert(alignof(IFortAIEncounterTargetInterface) == 0x000008, "Wrong alignment on IFortAIEncounterTargetInterface");
static_assert(sizeof(IFortAIEncounterTargetInterface) == 0x000028, "Wrong size on IFortAIEncounterTargetInterface");

class UFortAIFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UAthenaAISpawner* GetAISpawner(class UObject* WorldContextObject);
	static class UFortAthenaAIRuntimeParameters* GetOrCreateAIRuntimeParameters(const class AAIController* AIController, const TSubclassOf<class UFortAthenaAIRuntimeParameters> ParametersClass);
	static bool IsConcealedByPerceptionModifiers(const class UObject* WorldContextObject, const struct FVector& ObserverLocation, const struct FVector& TargetLocation, float* OutConcealment);
	static void MakeNoiseEvent(class AActor* NoiseMaker, const float MaxRange, const class FName NoiseTag);
	static void MakeNoiseEventAtLocation(class AActor* NoiseMaker, const float MaxRange, const struct FVector& NoiseLocation, const class FName NoiseTag);
	static void RequestNavUpdateForBuilding(class ABuildingActor* BuildingActor);
	static void SetHearingRange(class AActor* AIAgent, float Range);
	static bool TeleportAIPawn(class AFortAIPawn* AIPawn, const struct FVector& DestLocation, const struct FRotator& DestRotation, bool bIgnoreCollision);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIFunctionLibrary">();
	}
	static class UFortAIFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIFunctionLibrary>();
	}
};
static_assert(alignof(UFortAIFunctionLibrary) == 0x000008, "Wrong alignment on UFortAIFunctionLibrary");
static_assert(sizeof(UFortAIFunctionLibrary) == 0x000028, "Wrong size on UFortAIFunctionLibrary");

class AFortAIGoalManager final : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	TArray<class UFortAIAssignment*>              WorldAssignments;
	TArray<class UFortAIAssignment*>              WorldEnemyAssignments;
	class UFortAIAssignment*                      DefaultAttackPlayersAssignment;
	uint8                                         Pad_2B8[0x60];
	TArray<class UEnvQuery*>                      CombinedQueries;
	uint8                                         Pad_328[0x50];
	class UFortAIAssignmentSettings*              DefaultEncounterAssignmentSettings;
	class UFortAIAssignmentSettings*              DefaultEnemyAssignmentSettings;
	TArray<struct FPawnGoalSelectionTableEntry>   PawnGoalSelectionTable;
	uint8                                         Pad_398[0x60];

public:
	static void AddGoalsToWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& AssignmentIdentifier, const TArray<struct FFortAIGoalInfo>& GoalInfos);
	static void AddGoalToWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& AssignmentIdentifier, const struct FFortAIGoalInfo& GoalInfo);
	static void CreateWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& WorldAssignmentIdentifier, class UFortAIAssignmentSettings* AssignmentSettings, TSubclassOf<class UFortAIGoalProvider> GoalProvider, struct FFortAIAssignmentIdentifier* AssignmentIdentifier, EAssignmentCreationResult* CreationResult);
	static void MakeGoalFromActor(struct FFortAIGoalInfo* Goal, const class UObject* WorldContextObject, class AActor* GoalActor, bool bActorAlwaysPerceived, bool bGoalActorAllowsUndermining);
	static void MakeGoalFromLocation(struct FFortAIGoalInfo* Goal, const class UObject* WorldContextObject, const struct FVector& GoalLocation);
	static void MakeGoalsFromActors(TArray<struct FFortAIGoalInfo>* Goals, const class UObject* WorldContextObject, const TArray<class AActor*>& GoalActors, bool bActorsAlwaysPerceived, bool bGoalActorsAllowUndermining);
	static void MakeGoalsFromLocations(TArray<struct FFortAIGoalInfo>* Goals, const class UObject* WorldContextObject, const TArray<struct FVector>& GoalLocations);
	static void MakeGoalsFromLocationsAndActor(TArray<struct FFortAIGoalInfo>* Goals, const class UObject* WorldContextObject, const TArray<struct FVector>& GoalLocations, const class AActor* GoalActor);
	static void RemoveGoalFromWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& AssignmentIdentifier, const struct FFortAIGoalInfo& GoalInfo);
	static void RemoveGoalsFromWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& AssignmentIdentifier, const TArray<struct FFortAIGoalInfo>& GoalInfos);
	static void RemoveWorldAssignment(const class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& AssignmentIdentifier);
	static void SetCurrentGoalDiscouragement(class UObject* WorldContext, class AFortAIController* AI);

	void AddGoal(class AActor* GoalActor, class UFortAIAssignmentSettings* GoalSettings);
	void AddGoalActorToAssignment(class UFortAIAssignment* Assignment, class AActor* GoalActor);
	class UFortAIAssignment* AddWorldAssignment(class UFortAIAssignmentSettings* AssignmentSettings, class AActor* GoalActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIGoalManager">();
	}
	static class AFortAIGoalManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAIGoalManager>();
	}
};
static_assert(alignof(AFortAIGoalManager) == 0x000008, "Wrong alignment on AFortAIGoalManager");
static_assert(sizeof(AFortAIGoalManager) == 0x0003F8, "Wrong size on AFortAIGoalManager");
static_assert(offsetof(AFortAIGoalManager, WorldAssignments) == 0x000290, "Member 'AFortAIGoalManager::WorldAssignments' has a wrong offset!");
static_assert(offsetof(AFortAIGoalManager, WorldEnemyAssignments) == 0x0002A0, "Member 'AFortAIGoalManager::WorldEnemyAssignments' has a wrong offset!");
static_assert(offsetof(AFortAIGoalManager, DefaultAttackPlayersAssignment) == 0x0002B0, "Member 'AFortAIGoalManager::DefaultAttackPlayersAssignment' has a wrong offset!");
static_assert(offsetof(AFortAIGoalManager, CombinedQueries) == 0x000318, "Member 'AFortAIGoalManager::CombinedQueries' has a wrong offset!");
static_assert(offsetof(AFortAIGoalManager, DefaultEncounterAssignmentSettings) == 0x000378, "Member 'AFortAIGoalManager::DefaultEncounterAssignmentSettings' has a wrong offset!");
static_assert(offsetof(AFortAIGoalManager, DefaultEnemyAssignmentSettings) == 0x000380, "Member 'AFortAIGoalManager::DefaultEnemyAssignmentSettings' has a wrong offset!");
static_assert(offsetof(AFortAIGoalManager, PawnGoalSelectionTable) == 0x000388, "Member 'AFortAIGoalManager::PawnGoalSelectionTable' has a wrong offset!");

class UFortAINearbyActorsPerceptionComponent final : public TObjectBasedCycleFixup<class UFortNearbyActorsPerceptionComponent, 0x00A0, 0x08>
{
public:
	uint8                                         Pad_C8[0x8];
	TScriptInterface<class IFortAthenaAILODSettings> CachedLODSettingsManager;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAINearbyActorsPerceptionComponent">();
	}
	static class UFortAINearbyActorsPerceptionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAINearbyActorsPerceptionComponent>();
	}
};
static_assert(alignof(UFortAINearbyActorsPerceptionComponent) == 0x000008, "Wrong alignment on UFortAINearbyActorsPerceptionComponent");
static_assert(sizeof(UFortAINearbyActorsPerceptionComponent) == 0x0000E0, "Wrong size on UFortAINearbyActorsPerceptionComponent");
static_assert(offsetof(UFortAINearbyActorsPerceptionComponent, CachedLODSettingsManager) == 0x0000D0, "Member 'UFortAINearbyActorsPerceptionComponent::CachedLODSettingsManager' has a wrong offset!");

class IFortAIObjectiveInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIObjectiveInterface">();
	}
	static class IFortAIObjectiveInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortAIObjectiveInterface>();
	}
};
static_assert(alignof(IFortAIObjectiveInterface) == 0x000008, "Wrong alignment on IFortAIObjectiveInterface");
static_assert(sizeof(IFortAIObjectiveInterface) == 0x000028, "Wrong size on IFortAIObjectiveInterface");

class UFortAIPawnCustomizationDefinition final : public UPrimaryDataAsset
{
public:
	uint8                                         Pad_30[0x8];
	TSoftObjectPtr<class USkeletalMesh>           SkeletalMesh;
	TArray<struct FFortAIPawnMaterialDefinition>  OverrideMaterials;
	TSoftClassPtr<class UClass>                   AnimationBP;
	TArray<class UCustomCharacterPart*>           CharacterParts;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIPawnCustomizationDefinition">();
	}
	static class UFortAIPawnCustomizationDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIPawnCustomizationDefinition>();
	}
};
static_assert(alignof(UFortAIPawnCustomizationDefinition) == 0x000008, "Wrong alignment on UFortAIPawnCustomizationDefinition");
static_assert(sizeof(UFortAIPawnCustomizationDefinition) == 0x0000A8, "Wrong size on UFortAIPawnCustomizationDefinition");
static_assert(offsetof(UFortAIPawnCustomizationDefinition, SkeletalMesh) == 0x000038, "Member 'UFortAIPawnCustomizationDefinition::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(UFortAIPawnCustomizationDefinition, OverrideMaterials) == 0x000060, "Member 'UFortAIPawnCustomizationDefinition::OverrideMaterials' has a wrong offset!");
static_assert(offsetof(UFortAIPawnCustomizationDefinition, AnimationBP) == 0x000070, "Member 'UFortAIPawnCustomizationDefinition::AnimationBP' has a wrong offset!");
static_assert(offsetof(UFortAIPawnCustomizationDefinition, CharacterParts) == 0x000098, "Member 'UFortAIPawnCustomizationDefinition::CharacterParts' has a wrong offset!");

class UFortAIPawnVariant final : public UObject
{
public:
	TArray<TSubclassOf<class AFortAIPawn>>        PawnClasses;
	TArray<struct FFortAIPawnVariantDefinition>   PawnVariantDefinitions;
	int32                                         MinPlayersToSpawnVariant;
	uint8                                         Pad_4C[0x4];
	struct FDataTableRowHandle                    SpawnPointValueHandle;
	int32                                         CachedSpawnPointValue;
	float                                         EncounterExpectedLifespan;
	int32                                         VersionNum;
	uint8                                         Pad_6C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIPawnVariant">();
	}
	static class UFortAIPawnVariant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIPawnVariant>();
	}
};
static_assert(alignof(UFortAIPawnVariant) == 0x000008, "Wrong alignment on UFortAIPawnVariant");
static_assert(sizeof(UFortAIPawnVariant) == 0x000070, "Wrong size on UFortAIPawnVariant");
static_assert(offsetof(UFortAIPawnVariant, PawnClasses) == 0x000028, "Member 'UFortAIPawnVariant::PawnClasses' has a wrong offset!");
static_assert(offsetof(UFortAIPawnVariant, PawnVariantDefinitions) == 0x000038, "Member 'UFortAIPawnVariant::PawnVariantDefinitions' has a wrong offset!");
static_assert(offsetof(UFortAIPawnVariant, MinPlayersToSpawnVariant) == 0x000048, "Member 'UFortAIPawnVariant::MinPlayersToSpawnVariant' has a wrong offset!");
static_assert(offsetof(UFortAIPawnVariant, SpawnPointValueHandle) == 0x000050, "Member 'UFortAIPawnVariant::SpawnPointValueHandle' has a wrong offset!");
static_assert(offsetof(UFortAIPawnVariant, CachedSpawnPointValue) == 0x000060, "Member 'UFortAIPawnVariant::CachedSpawnPointValue' has a wrong offset!");
static_assert(offsetof(UFortAIPawnVariant, EncounterExpectedLifespan) == 0x000064, "Member 'UFortAIPawnVariant::EncounterExpectedLifespan' has a wrong offset!");
static_assert(offsetof(UFortAIPawnVariant, VersionNum) == 0x000068, "Member 'UFortAIPawnVariant::VersionNum' has a wrong offset!");

class IFortAIRootAssignmentProviderInterface final : public IInterface
{
public:
	const struct FFortAIAssignmentIdentifier GetRootAssignmentIdentifier() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIRootAssignmentProviderInterface">();
	}
	static class IFortAIRootAssignmentProviderInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortAIRootAssignmentProviderInterface>();
	}
};
static_assert(alignof(IFortAIRootAssignmentProviderInterface) == 0x000008, "Wrong alignment on IFortAIRootAssignmentProviderInterface");
static_assert(sizeof(IFortAIRootAssignmentProviderInterface) == 0x000028, "Wrong size on IFortAIRootAssignmentProviderInterface");

class AFortAISpawnerActorBase final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAISpawnerActorBase">();
	}
	static class AFortAISpawnerActorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAISpawnerActorBase>();
	}
};
static_assert(alignof(AFortAISpawnerActorBase) == 0x000008, "Wrong alignment on AFortAISpawnerActorBase");
static_assert(sizeof(AFortAISpawnerActorBase) == 0x000288, "Wrong size on AFortAISpawnerActorBase");

class IFortAISpawnerInterface final : public IInterface
{
public:
	bool IsReadyToReceiveNewSpawnGroup();
	bool OnReceiveSpawnGroup();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAISpawnerInterface">();
	}
	static class IFortAISpawnerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortAISpawnerInterface>();
	}
};
static_assert(alignof(IFortAISpawnerInterface) == 0x000008, "Wrong alignment on IFortAISpawnerInterface");
static_assert(sizeof(IFortAISpawnerInterface) == 0x000028, "Wrong size on IFortAISpawnerInterface");

class UFortAISpawnGroup final : public UPrimaryDataAsset
{
public:
	float                                         EnemyUtilities[0x10];
	TArray<struct FSpawnGroupEnemy>               EnemiesToSpawn;
	bool                                          bIsPrototype;
	bool                                          bIsValidForEnemySpawners;
	bool                                          bIsLargeSpawnGroup;
	uint8                                         Pad_83[0x1];
	float                                         MaxDiscountRatio;
	bool                                          bUseWeightSystem;
	uint8                                         Pad_89[0x7];
	struct FScalableFloat                         Weight;
	struct FScalableFloat                         MinNumber;
	struct FScalableFloat                         MaxNumber;
	struct FCurveTableRowHandle                   MaxGroupCategoryPopulationDensityCurve;
	TArray<struct FFortSpawnGroupEncounterTypeData> EncounterTypeData;
	struct FGameplayTagContainer                  SpawnGroupGameplayTags;
	struct FGameplayTagQuery                      RequiredTagQuery;

public:
	TSubclassOf<class UFortAIPawnVariant> GetEnemy(int32 EnemyIndex) const;
	int32 GetNumberOfEnemies() const;
	bool IsLargeSpawnGroup() const;
	bool IsPrototype() const;
	bool IsValidForEnemySpawners() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAISpawnGroup">();
	}
	static class UFortAISpawnGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAISpawnGroup>();
	}
};
static_assert(alignof(UFortAISpawnGroup) == 0x000008, "Wrong alignment on UFortAISpawnGroup");
static_assert(sizeof(UFortAISpawnGroup) == 0x000190, "Wrong size on UFortAISpawnGroup");
static_assert(offsetof(UFortAISpawnGroup, EnemyUtilities) == 0x000030, "Member 'UFortAISpawnGroup::EnemyUtilities' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroup, EnemiesToSpawn) == 0x000070, "Member 'UFortAISpawnGroup::EnemiesToSpawn' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroup, bIsPrototype) == 0x000080, "Member 'UFortAISpawnGroup::bIsPrototype' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroup, bIsValidForEnemySpawners) == 0x000081, "Member 'UFortAISpawnGroup::bIsValidForEnemySpawners' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroup, bIsLargeSpawnGroup) == 0x000082, "Member 'UFortAISpawnGroup::bIsLargeSpawnGroup' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroup, MaxDiscountRatio) == 0x000084, "Member 'UFortAISpawnGroup::MaxDiscountRatio' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroup, bUseWeightSystem) == 0x000088, "Member 'UFortAISpawnGroup::bUseWeightSystem' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroup, Weight) == 0x000090, "Member 'UFortAISpawnGroup::Weight' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroup, MinNumber) == 0x0000B8, "Member 'UFortAISpawnGroup::MinNumber' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroup, MaxNumber) == 0x0000E0, "Member 'UFortAISpawnGroup::MaxNumber' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroup, MaxGroupCategoryPopulationDensityCurve) == 0x000108, "Member 'UFortAISpawnGroup::MaxGroupCategoryPopulationDensityCurve' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroup, EncounterTypeData) == 0x000118, "Member 'UFortAISpawnGroup::EncounterTypeData' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroup, SpawnGroupGameplayTags) == 0x000128, "Member 'UFortAISpawnGroup::SpawnGroupGameplayTags' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroup, RequiredTagQuery) == 0x000148, "Member 'UFortAISpawnGroup::RequiredTagQuery' has a wrong offset!");

class UFortAISpawnGroupCapsCategorySet final : public UObject
{
public:
	TArray<struct FFortAIEncounterSpawnGroupCapsCategory> SpawnGroupCapsCategories;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAISpawnGroupCapsCategorySet">();
	}
	static class UFortAISpawnGroupCapsCategorySet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAISpawnGroupCapsCategorySet>();
	}
};
static_assert(alignof(UFortAISpawnGroupCapsCategorySet) == 0x000008, "Wrong alignment on UFortAISpawnGroupCapsCategorySet");
static_assert(sizeof(UFortAISpawnGroupCapsCategorySet) == 0x000038, "Wrong size on UFortAISpawnGroupCapsCategorySet");
static_assert(offsetof(UFortAISpawnGroupCapsCategorySet, SpawnGroupCapsCategories) == 0x000028, "Member 'UFortAISpawnGroupCapsCategorySet::SpawnGroupCapsCategories' has a wrong offset!");

class UFortAISpawnGroupProgressionInfo final : public UDataAsset
{
public:
	TArray<struct FSpawnGroupProgression>         SpawnGroups;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAISpawnGroupProgressionInfo">();
	}
	static class UFortAISpawnGroupProgressionInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAISpawnGroupProgressionInfo>();
	}
};
static_assert(alignof(UFortAISpawnGroupProgressionInfo) == 0x000008, "Wrong alignment on UFortAISpawnGroupProgressionInfo");
static_assert(sizeof(UFortAISpawnGroupProgressionInfo) == 0x000040, "Wrong size on UFortAISpawnGroupProgressionInfo");
static_assert(offsetof(UFortAISpawnGroupProgressionInfo, SpawnGroups) == 0x000030, "Member 'UFortAISpawnGroupProgressionInfo::SpawnGroups' has a wrong offset!");

class UFortAISpawnGroupUpgrade final : public UObject
{
public:
	struct FGameplayTagContainer                  UpgradeTags;
	struct FGameplayTagQuery                      GroupRequiredTagQuery;
	TArray<struct FFortAIPawnUpgrade>             BasePawnUpgrades;
	class FName                                   AdditionalModifiersLootTierGroup;
	bool                                          bInvalidForEnemySpawners;
	uint8                                         Pad_A5[0x3];
	float                                         SpawnGroupDiscountPercentage;
	uint8                                         Pad_AC[0x4];
	struct FFortAISpawnGroupUpgradeUIData         UIData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAISpawnGroupUpgrade">();
	}
	static class UFortAISpawnGroupUpgrade* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAISpawnGroupUpgrade>();
	}
};
static_assert(alignof(UFortAISpawnGroupUpgrade) == 0x000008, "Wrong alignment on UFortAISpawnGroupUpgrade");
static_assert(sizeof(UFortAISpawnGroupUpgrade) == 0x000120, "Wrong size on UFortAISpawnGroupUpgrade");
static_assert(offsetof(UFortAISpawnGroupUpgrade, UpgradeTags) == 0x000028, "Member 'UFortAISpawnGroupUpgrade::UpgradeTags' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroupUpgrade, GroupRequiredTagQuery) == 0x000048, "Member 'UFortAISpawnGroupUpgrade::GroupRequiredTagQuery' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroupUpgrade, BasePawnUpgrades) == 0x000090, "Member 'UFortAISpawnGroupUpgrade::BasePawnUpgrades' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroupUpgrade, AdditionalModifiersLootTierGroup) == 0x0000A0, "Member 'UFortAISpawnGroupUpgrade::AdditionalModifiersLootTierGroup' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroupUpgrade, bInvalidForEnemySpawners) == 0x0000A4, "Member 'UFortAISpawnGroupUpgrade::bInvalidForEnemySpawners' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroupUpgrade, SpawnGroupDiscountPercentage) == 0x0000A8, "Member 'UFortAISpawnGroupUpgrade::SpawnGroupDiscountPercentage' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroupUpgrade, UIData) == 0x0000B0, "Member 'UFortAISpawnGroupUpgrade::UIData' has a wrong offset!");

class UFortAISpawnGroupUpgradeProbabilities final : public UObject
{
public:
	bool                                          bIsGuaranteedUpgrade;
	uint8                                         Pad_29[0x7];
	TArray<struct FFortAIPawnUpgradeProbability>  UpgradeProbabilities;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAISpawnGroupUpgradeProbabilities">();
	}
	static class UFortAISpawnGroupUpgradeProbabilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAISpawnGroupUpgradeProbabilities>();
	}
};
static_assert(alignof(UFortAISpawnGroupUpgradeProbabilities) == 0x000008, "Wrong alignment on UFortAISpawnGroupUpgradeProbabilities");
static_assert(sizeof(UFortAISpawnGroupUpgradeProbabilities) == 0x000040, "Wrong size on UFortAISpawnGroupUpgradeProbabilities");
static_assert(offsetof(UFortAISpawnGroupUpgradeProbabilities, bIsGuaranteedUpgrade) == 0x000028, "Member 'UFortAISpawnGroupUpgradeProbabilities::bIsGuaranteedUpgrade' has a wrong offset!");
static_assert(offsetof(UFortAISpawnGroupUpgradeProbabilities, UpgradeProbabilities) == 0x000030, "Member 'UFortAISpawnGroupUpgradeProbabilities::UpgradeProbabilities' has a wrong offset!");

class IFortAITetheringBoxBoundsInterface final : public IInterface
{
public:
	struct FVector GetTetheredBoxBoundsCenter();
	float GetTetheredBoxBoundsEQSGridSize();
	float GetTetheredBoxBoundsEQSSpaceBetween();
	float GetTetheredBoxBoundsHeight();
	float GetTetheredBoxBoundsWidth();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAITetheringBoxBoundsInterface">();
	}
	static class IFortAITetheringBoxBoundsInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortAITetheringBoxBoundsInterface>();
	}
};
static_assert(alignof(IFortAITetheringBoxBoundsInterface) == 0x000008, "Wrong alignment on IFortAITetheringBoxBoundsInterface");
static_assert(sizeof(IFortAITetheringBoxBoundsInterface) == 0x000028, "Wrong size on IFortAITetheringBoxBoundsInterface");

class AFortAthenaAIBotController : public AAIController
{
public:
	uint8                                         Pad_3B0[0x48];
	class AActor*                                 PreviousVehicle;
	TMulticastInlineDelegate<void(class AFortAthenaAIBotController* AIBotController, class AFortPickup* PickUp)> OnPickupCreated;
	uint8                                         Pad_410[0x10];
	TMap<struct FGuid, TStructCycleFixup<struct FFortAbilitySetHandle, 0x0038, 0x08>> AppliedInGameModifierAbilitySetHandles;
	TSet<struct FGuid>                            GadgetTrackedAttributeItemInstanceIds;
	uint8                                         Pad_4C0[0x50];
	struct FFortBotTargetHandler                  TargetHandler;
	uint8                                         Pad_550[0x1];
	uint8                                         BitPad_551_0 : 1;
	uint8                                         bIsAnAthenaGameParticipant : 1;
	uint8                                         Pad_552[0x6];
	EReachLocationValidationMode                  ReachLocationValidationMode;
	uint8                                         Pad_559[0x7];
	class UBehaviorTree*                          BehaviorTree;
	struct FFortBotInventoryInfo                  SlotItems[0x6];
	uint8                                         Pad_658[0x48];
	class UFortAthenaAIBotInventoryDigestedSkillSet* CacheInventoryDigestedSkillSet;
	uint8                                         Pad_6A8[0x8];
	class AFortPlayerPawnAthena*                  PlayerBotPawn;
	class UAthenaAIServicePlayerBots*             CachedAIServicePlayerBots;
	class AFortGameModeAthena*                    CachedGameMode;
	class UFortAthenaAIRuntimeParametersComponent* CachedAIRuntimeParametersComponent;
	class UFortAthenaAIRuntimeParameters_Leash*   CachedLeashRuntimeParameters;
	class UFortAthenaAIRuntimeParameters_AffiliationBase* CachedAffiliationRuntimeParameters;
	class UFortAthenaNpcPatrollingComponent*      CachedPatrollingComponent;
	class UFortAIControllerPerksComponent*        CachedAIPerksComponent;
	uint8                                         Pad_6F0[0x8];
	TArray<struct FBotDelayedStimulus>            DelayedStimulus;
	uint8                                         Pad_708[0x18];
	TArray<struct FFortBotThreatActorInfo>        ObjectsThreatList;
	TArray<struct FFortBotThreatActorInfo>        TrapsThreatList;
	EAlertLevel                                   CurrentAlertLevel;
	uint8                                         Pad_741[0x7];
	struct FAlertLevelInfo                        DefaultAlertLevelInfo;
	TMulticastInlineDelegate<void(class AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel)> OnAlertLevelChangedEventDelegate;
	TMulticastInlineDelegate<void(class AFortAthenaAIBotController* BotController, float StealthMeterTarget, float StealthMeterTargetTime)> OnStealthMeterChangedEventDelegate;
	uint8                                         Pad_778[0x8];
	TMulticastInlineDelegate<void(class AFortAthenaAIBotController* BotController, bool bIsDBNO)> OnAgentDBNOStatusChangedEventDelegate;
	TMulticastInlineDelegate<void(class AFortAthenaAIBotController* BotController, class AFortPawn* AgentPawn)> OnAgentDiedEventDelegate;
	TMulticastInlineDelegate<void(class AFortAthenaAIBotController* BotController, class AFortPawn* AgentPawn, class AController* InstigatedBy)> OnAgentGameOver;
	uint8                                         Pad_7B0[0x48];
	TMulticastInlineDelegate<void(class AFortPlayerPawn* KilledPlayerPawn)> OnPlayerPawnKilledByBot;
	TMulticastInlineDelegate<void(class AFortAIPawn* KilledAIPawn)> OnAIPawnKilledByBot;
	TMulticastInlineDelegate<void(class AActor* OldTarget, class AActor* NewTarget)> OnCurrentTargetChangedDelegate;
	uint8                                         Pad_828[0x30];
	class AFortInventory*                         Inventory;
	float                                         Skill;
	uint8                                         bAllowUnsupportedItemsInDefaultInventory : 1;
	uint8                                         Pad_865[0x3];
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> BotSkillSetClasses;
	uint8                                         Pad_878[0x20];
	class UFortAthenaAIBotInventoryItems*         StartupInventory;
	TStructCycleFixup<struct FFortAthenaLoadout, 0x0178, 0x08> CosmeticLoadoutBC;
	TArray<class UCustomCharacterPart*>           CustomCharacterPartOverridesBC;
	class UFortBotNameSettings*                   NameSettingsBC;
	struct FScalableFloat                         SpectateOnDeathMinTime;
	struct FScalableFloat                         SpectateOnDeathMaxTime;
	struct FScalableFloat                         EmotesMaxCount;
	struct FVector                                LeashGameplayVolumeProjectExtent;
	class UFortAthenaAIBotPerceptionDigestedSkillSet* CachePerceptionDigestedSkillSet;
	class UFortAthenaAIBotHarvestDigestedSkillSet* CacheHarvestDigestedSkillSet;
	class UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementSkillSet;
	class UFortAthenaAIBotLootingDigestedSkillSet* CacheLootingSkillSet;
	class UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingSkillSet;
	class UFortAthenaAIBotPlayStyleDigestedSkillSet* CachePlayStyleSkillSet;
	class UFortAthenaAIBotUnstuckDigestedSkillSet* CacheUnstuckSkillSet;
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackSkillSet;
	class UFortAthenaAIBotVehicleDigestedSkillSet* CacheVehicleSkillSet;
	uint8                                         Pad_B08[0x60];
	class UFortInteractContextInfo*               InteractContextInfo;
	uint8                                         Pad_B70[0x78];
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;
	uint8                                         Pad_BF0[0x4];
	uint8                                         BitPad_BF4_0 : 1;
	uint8                                         bCanBeDestroyedOnDeath : 1;
	uint8                                         Pad_BF5[0xB];
	struct FVector                                LastDeathLocation;
	struct FRotator                               LastDeathRotation;
	class UFortWorldItem*                         CachedWorldItem;
	uint8                                         Pad_C38[0x8];
	class AFortWeapon*                            CacheWeaponUsedToCalculateType;
	bool                                          bCachedIsUsingArcedProjectileWeapon;
	uint8                                         Pad_C49[0x3];
	float                                         CachedProjectileGravityScale;
	class AFortWeapon*                            CachedWeaponUsedToCalculateProjectileData;
	class UStatManager*                           StatManager;
	TArray<struct FBuildingWeakSpotData>          ActiveWeakSpots;
	uint8                                         Pad_C70[0x28];
	TSubclassOf<class AFortPawn>                  CacheBotPawnClass;
	uint8                                         Pad_CA0[0x8];
	class AActor*                                 CurrentLootActor;
	class UAthenaMarkerComponent*                 MarkerComponent;
	class FString                                 BotPlayerName;
	struct FGameplayTag                           DescriptorTag;
	uint8                                         Pad_CCC[0x4];
	class FString                                 BotIDSuffix;
	class FString                                 BotPlayerNameWithSkillRating;
	uint8                                         Pad_CF0[0x10];
	class UFortAthenaMutator_SpawningPolicyData*  PolicyDataSpawner;
	uint8                                         Pad_D08[0xD8];
	class UFortControllerComponent_Telemetry*     FortControllerComponent_Telemetry;
	bool                                          bForceUsingBuildingTool;
	bool                                          bForceHolsterWeapon;
	uint8                                         Pad_DEA[0x6];
	class UFortWorldItem*                         PendingEquipWeapon;
	uint8                                         Pad_DF8[0x50];
	class APawn*                                  PlayerToSpectateOnDeath;
	TMulticastInlineDelegate<void(class AFortAthenaAIBotController* BotController, class AFortPlayerPawnAthena* BotPawn)> OnPlayerPawnAISpawnedDelegate;
	uint8                                         Pad_E60[0x108];
	class UAISenseConfig_Sight*                   AISenseConfig_SightOverride;
	uint8                                         Pad_F70[0x10];
	class AActor*                                 BotOwner;
	int32                                         BotControllerUID;
	uint8                                         Pad_F8C[0x4];
	class AFortPlayerPawnAthena*                  ReviveTarget;
	uint8                                         Pad_F98[0x90];
	class UFortAthenaAIBotCustomizationData*      BotData;
	struct FDebugMinimapData                      DebugMinimapData;
	class AFortPlayerPawnAthena*                  RevivePlayerPawnToken;
	uint8                                         Pad_11E8[0x18];
	class AActor*                                 LeashActorToFollow;
	struct FVector                                LeashActorToFollowLocalOffset;
	class AFortAthenaAILeashVolume*               LeashVolume;
	TWeakObjectPtr<class AGameplayVolume>         LeashGameplayVolume;
	class UFortGameStateComponent_AffiliationManager* CachedAffiliationManager;
	class UFortActorComponent_Affiliation*        CachedAffiliationComponent;
	bool                                          bIsAffectedByMutatorHealthAndShieldModifiers;
	uint8                                         Pad_1241[0x7];
	bool                                          bHasChangedPawnCullDistanceToAggroMode;
	uint8                                         Pad_1249[0x7];
	class UFortAthenaAIRuntimeParameters_AIBotRespawn* RespawnRuntimeParameters;
	TWeakObjectPtr<class AActor>                  CurrentBlockingObstacle;
	uint8                                         Pad_1260[0x8];
	TArray<TWeakObjectPtr<class AActor>>          NoSmashActors;
	uint8                                         Pad_1278[0x8];
	class APawn*                                  FinisherPawn;
	uint8                                         Pad_1288[0x54];
	EFortPawnStasisMode                           PreviousStasisMode;
	bool                                          bPostponeGiveWeaponCheat;
	bool                                          bPostponeGiveMaterialsCheat;
	uint8                                         Pad_12DF[0x1];
	float                                         StartSpectatingTime;
	uint8                                         Pad_12E4[0x64];
	class UAthenaDanceItemDefinition*             RequestedEmoteAsset;
	uint8                                         Pad_1350[0x8];
	class UBehaviorTree*                          BTAssetToRunOnPawnAISpawned;
	uint8                                         Pad_1360[0x50];

public:
	void AddTargetInfo(class AActor* Target, const bool bForceTarget, const EPerceptionState PerceptionState, const float ForgetTime, const float ForgetDistance);
	void AddTargetInfos(const TArray<class AActor*>& Targets, const EPerceptionState PerceptionState, const float ForgetTime, const float ForgetDistance);
	void BlueprintOnBehaviorTreeStarted();
	void ChangeActiveVariantForCosmeticItem(class FName ItemTemplateToChange, const struct FGameplayTag& VariantChannelToChange, const struct FGameplayTag& DesiredActiveVariant);
	void Cheat_ClearForcedCosmeticItems();
	void Cheat_ForceAthenaCosmeticItemInSlot(const class UAthenaCosmeticItemDefinition* CosmeticItem, EAthenaCustomizationCategory Slot, int32 Index_0);
	class AFortWeapon* EquipBestWeapon();
	class AFortWeapon* EquipMeleeWeapon();
	class AFortWeapon* EquipWeapon(const class UFortWorldItem* Weapon);
	class AFortWeapon* EquipWeaponByTag(const struct FGameplayTag& WeaponTag);
	void NotifyPickupsSpawnedOnDeath(const TArray<class AFortPickup*>& SpawnedPickups, const int32 SpawnRequestId);
	void OnAgentDBNO(class AFortPawn* InPlayer, bool bInIsDBNO);
	void OnAlertLevelChanged(const EAlertLevel OldAlertLevel, const EAlertLevel NewAlertLevel);
	void OnBeginSpectating(class AFortPlayerStateZone* Spectator);
	void OnCurrentHarvestableDestroyed(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnEndSpectating(class AFortPlayerStateZone* Spectator);
	void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
	void OnGamePhaseStepChanged(const TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
	void OnKnockbacked(const struct FGameplayTag& KnockbackTypeTag);
	void OnLaunched(const struct FVector& LaunchVelocity, const bool bXYOverride, const bool bZOverride);
	void OnMovementModeChange(class ACharacter* InCharacter, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnPawnDidDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnPawnWeaponChanged(class AFortWeapon* NewWeapon, class AFortWeapon* OldWeapon);
	void OnPerceptionSensed(class AActor* SourceActor, const struct FAIStimulus& Stim);
	void OnPossesedPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnPossessedPawnReceiveDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnSafeZoneStateChanged(const EFortSafeZoneState NewState);
	void OnSafeZoneUpdated();
	void OnServerMarkerAdded(const struct FFortWorldMarkerData& MarkerData);
	void OnTargetActorDestroyed(class AActor* DestroyedActor);
	void OnTargetBuildingDestroyed(class ABuildingActor* Building, class AAthenaAIController* AIController);
	void OnTargetPawnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnTargetPawnDead(class AFortPawn* FortPawn);
	void OnTargetPawnDestroyed();
	void OverrideAggressivenessPlayStyle(bool bInIsAggressive);
	void OverrideSkill(const float NewSkill);
	void PlayEmote(const struct FPrimaryAssetId& EmotePrimaryAssetId);
	void QueueStim(class AActor* SourceActor, const struct FVector& SourceLocation, const struct FVector& SourceDirection, const EStimType NewStimType, const float StimStrength, const class FName StimTag);
	void ReleaseBuildTool();
	void RemoveEmoteRequest();
	void RemoveSkillSet(TSubclassOf<class UFortAthenaAIBotSkillSet> SkillSetClass);
	void RequestEmote(const struct FPrimaryAssetId& EmotePrimaryAssetId, float InfiniteEmoteMaxDuration);
	void SetBotOwner(class AActor* InBotOwner);
	void SetLeashActorToFollow(const class AActor* ActorToFollow, const float LeashLocationUpdateRate, const struct FVector& LocalOffset);
	void SetLeashGameplayVolume(const class AGameplayVolume* InLeashGameplayVolume);
	void SetLeashReturnLocationMode(ELeashReturnLocationMode ReturnMode);
	void SetLeashVolume(class AFortAthenaAILeashVolume* InLeashVolume);
	void SetPatrollingEnable(const bool bEnable);
	void SetRadialLeashInnerRadius(const float InnerRadius);
	void SetRadialLeashOuterRadius(const float OuterRadius);
	void SetSkillSet(TSubclassOf<class UFortAthenaAIBotSkillSet> SkillSetClass);
	void StartFire();
	void StartSecondaryFire();
	void StopEmote();
	void StopFire();
	void StopSecondaryFire(const bool bFireWhenStopping);
	void SwitchTeam(uint8 TeamIndex);
	void ThankBusDriver();
	void UpdateLeashActorToFollowLocation();

	class AActor* GetBotOwner() const;
	class AActor* GetCurrentThreat() const;
	class UAthenaMarkerComponent* GetMarkerComponent() const;
	const class UFortWorldItem* GetSlotItemByItemDefinition(const class UFortItemDefinition* ItemDefinition) const;
	bool IsAnAthenaGameParticipant() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotController">();
	}
	static class AFortAthenaAIBotController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaAIBotController>();
	}
};
static_assert(alignof(AFortAthenaAIBotController) == 0x000010, "Wrong alignment on AFortAthenaAIBotController");
static_assert(sizeof(AFortAthenaAIBotController) == 0x0013B0, "Wrong size on AFortAthenaAIBotController");
static_assert(offsetof(AFortAthenaAIBotController, PreviousVehicle) == 0x0003F8, "Member 'AFortAthenaAIBotController::PreviousVehicle' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, OnPickupCreated) == 0x000400, "Member 'AFortAthenaAIBotController::OnPickupCreated' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, AppliedInGameModifierAbilitySetHandles) == 0x000420, "Member 'AFortAthenaAIBotController::AppliedInGameModifierAbilitySetHandles' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, GadgetTrackedAttributeItemInstanceIds) == 0x000470, "Member 'AFortAthenaAIBotController::GadgetTrackedAttributeItemInstanceIds' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, TargetHandler) == 0x000510, "Member 'AFortAthenaAIBotController::TargetHandler' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, ReachLocationValidationMode) == 0x000558, "Member 'AFortAthenaAIBotController::ReachLocationValidationMode' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, BehaviorTree) == 0x000560, "Member 'AFortAthenaAIBotController::BehaviorTree' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, SlotItems) == 0x000568, "Member 'AFortAthenaAIBotController::SlotItems' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CacheInventoryDigestedSkillSet) == 0x0006A0, "Member 'AFortAthenaAIBotController::CacheInventoryDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, PlayerBotPawn) == 0x0006B0, "Member 'AFortAthenaAIBotController::PlayerBotPawn' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CachedAIServicePlayerBots) == 0x0006B8, "Member 'AFortAthenaAIBotController::CachedAIServicePlayerBots' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CachedGameMode) == 0x0006C0, "Member 'AFortAthenaAIBotController::CachedGameMode' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CachedAIRuntimeParametersComponent) == 0x0006C8, "Member 'AFortAthenaAIBotController::CachedAIRuntimeParametersComponent' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CachedLeashRuntimeParameters) == 0x0006D0, "Member 'AFortAthenaAIBotController::CachedLeashRuntimeParameters' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CachedAffiliationRuntimeParameters) == 0x0006D8, "Member 'AFortAthenaAIBotController::CachedAffiliationRuntimeParameters' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CachedPatrollingComponent) == 0x0006E0, "Member 'AFortAthenaAIBotController::CachedPatrollingComponent' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CachedAIPerksComponent) == 0x0006E8, "Member 'AFortAthenaAIBotController::CachedAIPerksComponent' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, DelayedStimulus) == 0x0006F8, "Member 'AFortAthenaAIBotController::DelayedStimulus' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, ObjectsThreatList) == 0x000720, "Member 'AFortAthenaAIBotController::ObjectsThreatList' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, TrapsThreatList) == 0x000730, "Member 'AFortAthenaAIBotController::TrapsThreatList' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CurrentAlertLevel) == 0x000740, "Member 'AFortAthenaAIBotController::CurrentAlertLevel' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, DefaultAlertLevelInfo) == 0x000748, "Member 'AFortAthenaAIBotController::DefaultAlertLevelInfo' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, OnAlertLevelChangedEventDelegate) == 0x000758, "Member 'AFortAthenaAIBotController::OnAlertLevelChangedEventDelegate' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, OnStealthMeterChangedEventDelegate) == 0x000768, "Member 'AFortAthenaAIBotController::OnStealthMeterChangedEventDelegate' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, OnAgentDBNOStatusChangedEventDelegate) == 0x000780, "Member 'AFortAthenaAIBotController::OnAgentDBNOStatusChangedEventDelegate' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, OnAgentDiedEventDelegate) == 0x000790, "Member 'AFortAthenaAIBotController::OnAgentDiedEventDelegate' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, OnAgentGameOver) == 0x0007A0, "Member 'AFortAthenaAIBotController::OnAgentGameOver' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, OnPlayerPawnKilledByBot) == 0x0007F8, "Member 'AFortAthenaAIBotController::OnPlayerPawnKilledByBot' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, OnAIPawnKilledByBot) == 0x000808, "Member 'AFortAthenaAIBotController::OnAIPawnKilledByBot' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, OnCurrentTargetChangedDelegate) == 0x000818, "Member 'AFortAthenaAIBotController::OnCurrentTargetChangedDelegate' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, Inventory) == 0x000858, "Member 'AFortAthenaAIBotController::Inventory' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, Skill) == 0x000860, "Member 'AFortAthenaAIBotController::Skill' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, BotSkillSetClasses) == 0x000868, "Member 'AFortAthenaAIBotController::BotSkillSetClasses' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, StartupInventory) == 0x000898, "Member 'AFortAthenaAIBotController::StartupInventory' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CosmeticLoadoutBC) == 0x0008A0, "Member 'AFortAthenaAIBotController::CosmeticLoadoutBC' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CustomCharacterPartOverridesBC) == 0x000A18, "Member 'AFortAthenaAIBotController::CustomCharacterPartOverridesBC' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, NameSettingsBC) == 0x000A28, "Member 'AFortAthenaAIBotController::NameSettingsBC' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, SpectateOnDeathMinTime) == 0x000A30, "Member 'AFortAthenaAIBotController::SpectateOnDeathMinTime' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, SpectateOnDeathMaxTime) == 0x000A58, "Member 'AFortAthenaAIBotController::SpectateOnDeathMaxTime' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, EmotesMaxCount) == 0x000A80, "Member 'AFortAthenaAIBotController::EmotesMaxCount' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, LeashGameplayVolumeProjectExtent) == 0x000AA8, "Member 'AFortAthenaAIBotController::LeashGameplayVolumeProjectExtent' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CachePerceptionDigestedSkillSet) == 0x000AC0, "Member 'AFortAthenaAIBotController::CachePerceptionDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CacheHarvestDigestedSkillSet) == 0x000AC8, "Member 'AFortAthenaAIBotController::CacheHarvestDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CacheMovementSkillSet) == 0x000AD0, "Member 'AFortAthenaAIBotController::CacheMovementSkillSet' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CacheLootingSkillSet) == 0x000AD8, "Member 'AFortAthenaAIBotController::CacheLootingSkillSet' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CacheAttackingSkillSet) == 0x000AE0, "Member 'AFortAthenaAIBotController::CacheAttackingSkillSet' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CachePlayStyleSkillSet) == 0x000AE8, "Member 'AFortAthenaAIBotController::CachePlayStyleSkillSet' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CacheUnstuckSkillSet) == 0x000AF0, "Member 'AFortAthenaAIBotController::CacheUnstuckSkillSet' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CacheRangeAttackSkillSet) == 0x000AF8, "Member 'AFortAthenaAIBotController::CacheRangeAttackSkillSet' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CacheVehicleSkillSet) == 0x000B00, "Member 'AFortAthenaAIBotController::CacheVehicleSkillSet' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, InteractContextInfo) == 0x000B68, "Member 'AFortAthenaAIBotController::InteractContextInfo' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CacheAimingDigestedSkillSet) == 0x000BE8, "Member 'AFortAthenaAIBotController::CacheAimingDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, LastDeathLocation) == 0x000C00, "Member 'AFortAthenaAIBotController::LastDeathLocation' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, LastDeathRotation) == 0x000C18, "Member 'AFortAthenaAIBotController::LastDeathRotation' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CachedWorldItem) == 0x000C30, "Member 'AFortAthenaAIBotController::CachedWorldItem' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CacheWeaponUsedToCalculateType) == 0x000C40, "Member 'AFortAthenaAIBotController::CacheWeaponUsedToCalculateType' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, bCachedIsUsingArcedProjectileWeapon) == 0x000C48, "Member 'AFortAthenaAIBotController::bCachedIsUsingArcedProjectileWeapon' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CachedProjectileGravityScale) == 0x000C4C, "Member 'AFortAthenaAIBotController::CachedProjectileGravityScale' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CachedWeaponUsedToCalculateProjectileData) == 0x000C50, "Member 'AFortAthenaAIBotController::CachedWeaponUsedToCalculateProjectileData' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, StatManager) == 0x000C58, "Member 'AFortAthenaAIBotController::StatManager' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, ActiveWeakSpots) == 0x000C60, "Member 'AFortAthenaAIBotController::ActiveWeakSpots' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CacheBotPawnClass) == 0x000C98, "Member 'AFortAthenaAIBotController::CacheBotPawnClass' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CurrentLootActor) == 0x000CA8, "Member 'AFortAthenaAIBotController::CurrentLootActor' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, MarkerComponent) == 0x000CB0, "Member 'AFortAthenaAIBotController::MarkerComponent' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, BotPlayerName) == 0x000CB8, "Member 'AFortAthenaAIBotController::BotPlayerName' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, DescriptorTag) == 0x000CC8, "Member 'AFortAthenaAIBotController::DescriptorTag' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, BotIDSuffix) == 0x000CD0, "Member 'AFortAthenaAIBotController::BotIDSuffix' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, BotPlayerNameWithSkillRating) == 0x000CE0, "Member 'AFortAthenaAIBotController::BotPlayerNameWithSkillRating' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, PolicyDataSpawner) == 0x000D00, "Member 'AFortAthenaAIBotController::PolicyDataSpawner' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, FortControllerComponent_Telemetry) == 0x000DE0, "Member 'AFortAthenaAIBotController::FortControllerComponent_Telemetry' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, bForceUsingBuildingTool) == 0x000DE8, "Member 'AFortAthenaAIBotController::bForceUsingBuildingTool' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, bForceHolsterWeapon) == 0x000DE9, "Member 'AFortAthenaAIBotController::bForceHolsterWeapon' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, PendingEquipWeapon) == 0x000DF0, "Member 'AFortAthenaAIBotController::PendingEquipWeapon' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, PlayerToSpectateOnDeath) == 0x000E48, "Member 'AFortAthenaAIBotController::PlayerToSpectateOnDeath' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, OnPlayerPawnAISpawnedDelegate) == 0x000E50, "Member 'AFortAthenaAIBotController::OnPlayerPawnAISpawnedDelegate' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, AISenseConfig_SightOverride) == 0x000F68, "Member 'AFortAthenaAIBotController::AISenseConfig_SightOverride' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, BotOwner) == 0x000F80, "Member 'AFortAthenaAIBotController::BotOwner' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, BotControllerUID) == 0x000F88, "Member 'AFortAthenaAIBotController::BotControllerUID' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, ReviveTarget) == 0x000F90, "Member 'AFortAthenaAIBotController::ReviveTarget' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, BotData) == 0x001028, "Member 'AFortAthenaAIBotController::BotData' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, DebugMinimapData) == 0x001030, "Member 'AFortAthenaAIBotController::DebugMinimapData' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, RevivePlayerPawnToken) == 0x0011E0, "Member 'AFortAthenaAIBotController::RevivePlayerPawnToken' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, LeashActorToFollow) == 0x001200, "Member 'AFortAthenaAIBotController::LeashActorToFollow' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, LeashActorToFollowLocalOffset) == 0x001208, "Member 'AFortAthenaAIBotController::LeashActorToFollowLocalOffset' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, LeashVolume) == 0x001220, "Member 'AFortAthenaAIBotController::LeashVolume' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, LeashGameplayVolume) == 0x001228, "Member 'AFortAthenaAIBotController::LeashGameplayVolume' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CachedAffiliationManager) == 0x001230, "Member 'AFortAthenaAIBotController::CachedAffiliationManager' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CachedAffiliationComponent) == 0x001238, "Member 'AFortAthenaAIBotController::CachedAffiliationComponent' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, bIsAffectedByMutatorHealthAndShieldModifiers) == 0x001240, "Member 'AFortAthenaAIBotController::bIsAffectedByMutatorHealthAndShieldModifiers' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, bHasChangedPawnCullDistanceToAggroMode) == 0x001248, "Member 'AFortAthenaAIBotController::bHasChangedPawnCullDistanceToAggroMode' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, RespawnRuntimeParameters) == 0x001250, "Member 'AFortAthenaAIBotController::RespawnRuntimeParameters' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, CurrentBlockingObstacle) == 0x001258, "Member 'AFortAthenaAIBotController::CurrentBlockingObstacle' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, NoSmashActors) == 0x001268, "Member 'AFortAthenaAIBotController::NoSmashActors' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, FinisherPawn) == 0x001280, "Member 'AFortAthenaAIBotController::FinisherPawn' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, PreviousStasisMode) == 0x0012DC, "Member 'AFortAthenaAIBotController::PreviousStasisMode' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, bPostponeGiveWeaponCheat) == 0x0012DD, "Member 'AFortAthenaAIBotController::bPostponeGiveWeaponCheat' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, bPostponeGiveMaterialsCheat) == 0x0012DE, "Member 'AFortAthenaAIBotController::bPostponeGiveMaterialsCheat' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, StartSpectatingTime) == 0x0012E0, "Member 'AFortAthenaAIBotController::StartSpectatingTime' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, RequestedEmoteAsset) == 0x001348, "Member 'AFortAthenaAIBotController::RequestedEmoteAsset' has a wrong offset!");
static_assert(offsetof(AFortAthenaAIBotController, BTAssetToRunOnPawnAISpawned) == 0x001358, "Member 'AFortAthenaAIBotController::BTAssetToRunOnPawnAISpawned' has a wrong offset!");

class UFortAthenaTrackableAIObjectComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x10];
	struct FGameplayTagContainer                  GameplayTags;
	uint8                                         Pad_D0[0x8];
	TSubclassOf<class UObject>                    CustomRegistrationClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaTrackableAIObjectComponent">();
	}
	static class UFortAthenaTrackableAIObjectComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaTrackableAIObjectComponent>();
	}
};
static_assert(alignof(UFortAthenaTrackableAIObjectComponent) == 0x000008, "Wrong alignment on UFortAthenaTrackableAIObjectComponent");
static_assert(sizeof(UFortAthenaTrackableAIObjectComponent) == 0x0000E0, "Wrong size on UFortAthenaTrackableAIObjectComponent");
static_assert(offsetof(UFortAthenaTrackableAIObjectComponent, GameplayTags) == 0x0000B0, "Member 'UFortAthenaTrackableAIObjectComponent::GameplayTags' has a wrong offset!");
static_assert(offsetof(UFortAthenaTrackableAIObjectComponent, CustomRegistrationClass) == 0x0000D8, "Member 'UFortAthenaTrackableAIObjectComponent::CustomRegistrationClass' has a wrong offset!");

class UFortAthenaTrackableAIObjectVehicleComponent final : public UFortAthenaTrackableAIObjectComponent
{
public:
	void HandleSleepStateChanged(const bool bIsAwake);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaTrackableAIObjectVehicleComponent">();
	}
	static class UFortAthenaTrackableAIObjectVehicleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaTrackableAIObjectVehicleComponent>();
	}
};
static_assert(alignof(UFortAthenaTrackableAIObjectVehicleComponent) == 0x000008, "Wrong alignment on UFortAthenaTrackableAIObjectVehicleComponent");
static_assert(sizeof(UFortAthenaTrackableAIObjectVehicleComponent) == 0x0000E0, "Wrong size on UFortAthenaTrackableAIObjectVehicleComponent");

class UFortBlackboardComponent final : public UBlackboardComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBlackboardComponent">();
	}
	static class UFortBlackboardComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBlackboardComponent>();
	}
};
static_assert(alignof(UFortBlackboardComponent) == 0x000008, "Wrong alignment on UFortBlackboardComponent");
static_assert(sizeof(UFortBlackboardComponent) == 0x0001A8, "Wrong size on UFortBlackboardComponent");

class UFortBTTask_TriggerVOEvent final : public UBTTaskNode
{
public:
	uint8                                         bUseFeedbackBank : 1;
	uint8                                         Pad_71[0x7];
	class FString                                 CustomEventName;
	class FString                                 SelectedEvent;
	class UFortFeedbackBank*                      FeedbackBank;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTTask_TriggerVOEvent">();
	}
	static class UFortBTTask_TriggerVOEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTTask_TriggerVOEvent>();
	}
};
static_assert(alignof(UFortBTTask_TriggerVOEvent) == 0x000008, "Wrong alignment on UFortBTTask_TriggerVOEvent");
static_assert(sizeof(UFortBTTask_TriggerVOEvent) == 0x0000A0, "Wrong size on UFortBTTask_TriggerVOEvent");
static_assert(offsetof(UFortBTTask_TriggerVOEvent, CustomEventName) == 0x000078, "Member 'UFortBTTask_TriggerVOEvent::CustomEventName' has a wrong offset!");
static_assert(offsetof(UFortBTTask_TriggerVOEvent, SelectedEvent) == 0x000088, "Member 'UFortBTTask_TriggerVOEvent::SelectedEvent' has a wrong offset!");
static_assert(offsetof(UFortBTTask_TriggerVOEvent, FeedbackBank) == 0x000098, "Member 'UFortBTTask_TriggerVOEvent::FeedbackBank' has a wrong offset!");

class UFortCreativeCreatureManagerComponent final : public UActorComponent
{
public:
	TArray<class UFortCreativeCreatureManagerInfoComponent*> CreatureManagerInfos;
	TMap<TSoftClassPtr<class UClass>, class UFortCreativeCreatureManagerInfoComponent*> EnabledCreatureManagerInfos;
	uint8                                         Pad_100[0x60];

public:
	void OnAIPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnInfoComponentAdded(class UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent);
	void OnInfoComponentRemoved(class UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCreativeCreatureManagerComponent">();
	}
	static class UFortCreativeCreatureManagerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCreativeCreatureManagerComponent>();
	}
};
static_assert(alignof(UFortCreativeCreatureManagerComponent) == 0x000008, "Wrong alignment on UFortCreativeCreatureManagerComponent");
static_assert(sizeof(UFortCreativeCreatureManagerComponent) == 0x000160, "Wrong size on UFortCreativeCreatureManagerComponent");
static_assert(offsetof(UFortCreativeCreatureManagerComponent, CreatureManagerInfos) == 0x0000A0, "Member 'UFortCreativeCreatureManagerComponent::CreatureManagerInfos' has a wrong offset!");
static_assert(offsetof(UFortCreativeCreatureManagerComponent, EnabledCreatureManagerInfos) == 0x0000B0, "Member 'UFortCreativeCreatureManagerComponent::EnabledCreatureManagerInfos' has a wrong offset!");

class UFortCrowdManager final : public UCrowdManager
{
public:
	uint8                                         Pad_F0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCrowdManager">();
	}
	static class UFortCrowdManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCrowdManager>();
	}
};
static_assert(alignof(UFortCrowdManager) == 0x000008, "Wrong alignment on UFortCrowdManager");
static_assert(sizeof(UFortCrowdManager) == 0x0000F8, "Wrong size on UFortCrowdManager");

class AFortEnemySpawn final : public TObjectBasedCycleFixup<class ABuildingActor, 0x0790, 0x08>
{
public:
	float                                         ClusterRadius;
	uint8                                         Pad_7BC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortEnemySpawn">();
	}
	static class AFortEnemySpawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortEnemySpawn>();
	}
};
static_assert(alignof(AFortEnemySpawn) == 0x000008, "Wrong alignment on AFortEnemySpawn");
static_assert(sizeof(AFortEnemySpawn) == 0x0007C0, "Wrong size on AFortEnemySpawn");
static_assert(offsetof(AFortEnemySpawn, ClusterRadius) == 0x0007B8, "Member 'AFortEnemySpawn::ClusterRadius' has a wrong offset!");

class UFortEnvQueryManager final : public UEnvQueryManager
{
public:
	TArray<struct FEnvQueryManagerConfig>         EnvManagerConfigPerGamePhase;
	struct FEnvQueryManagerConfig                 EnvManagerConfigSTW;

public:
	void OnGamePhaseChanged(EAthenaGamePhase GamePhase);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortEnvQueryManager">();
	}
	static class UFortEnvQueryManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortEnvQueryManager>();
	}
};
static_assert(alignof(UFortEnvQueryManager) == 0x000008, "Wrong alignment on UFortEnvQueryManager");
static_assert(sizeof(UFortEnvQueryManager) == 0x000198, "Wrong size on UFortEnvQueryManager");
static_assert(offsetof(UFortEnvQueryManager, EnvManagerConfigPerGamePhase) == 0x000158, "Member 'UFortEnvQueryManager::EnvManagerConfigPerGamePhase' has a wrong offset!");
static_assert(offsetof(UFortEnvQueryManager, EnvManagerConfigSTW) == 0x000168, "Member 'UFortEnvQueryManager::EnvManagerConfigSTW' has a wrong offset!");

class UFortQueryContext_WorldLocationParam final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_WorldLocationParam">();
	}
	static class UFortQueryContext_WorldLocationParam* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_WorldLocationParam>();
	}
};
static_assert(alignof(UFortQueryContext_WorldLocationParam) == 0x000008, "Wrong alignment on UFortQueryContext_WorldLocationParam");
static_assert(sizeof(UFortQueryContext_WorldLocationParam) == 0x000028, "Wrong size on UFortQueryContext_WorldLocationParam");

class UFortQueryTwoPointSolver final : public UObject
{
public:
	class UEnvQuery*                              QueryPointA;
	class UEnvQuery*                              QueryPointB;
	TArray<struct FEnvNamedValue>                 QueryParamsA;
	TArray<struct FEnvNamedValue>                 QueryParamsB;
	TMulticastInlineDelegate<void(const struct FVector& PointA, const struct FVector& PointB)> OnFinished;
	TMulticastInlineDelegate<void()>              OnFailed;
	ETwoPointSolverRotationA                      RotationMode;
	uint8                                         Pad_79[0x7];
	struct FRotator                               MinRotationOffset;
	struct FRotator                               MaxRotationOffset;
	uint8                                         bUseNegativeAngleOffsets : 1;
	uint8                                         bUsePositiveAngleOffsets : 1;
	uint8                                         Pad_B1[0x7F];
	class UFortAISystem*                          AISys;
	class UObject*                                CachedQuerier;

public:
	void AddNamedFloatParamA(class FName ParamName, float Value);
	void AddNamedFloatParamB(class FName ParamName, float Value);
	void OnCustomRotationMode(const struct FVector& InPointA, const struct FVector& Querier);
	void SetCustomRotationA(const struct FRotator& Rotation);
	void SkipToNextPointA();
	void Start(class UObject* Querier);

	struct FRotator GetRandomRotationOffset() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTwoPointSolver">();
	}
	static class UFortQueryTwoPointSolver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTwoPointSolver>();
	}
};
static_assert(alignof(UFortQueryTwoPointSolver) == 0x000008, "Wrong alignment on UFortQueryTwoPointSolver");
static_assert(sizeof(UFortQueryTwoPointSolver) == 0x000140, "Wrong size on UFortQueryTwoPointSolver");
static_assert(offsetof(UFortQueryTwoPointSolver, QueryPointA) == 0x000028, "Member 'UFortQueryTwoPointSolver::QueryPointA' has a wrong offset!");
static_assert(offsetof(UFortQueryTwoPointSolver, QueryPointB) == 0x000030, "Member 'UFortQueryTwoPointSolver::QueryPointB' has a wrong offset!");
static_assert(offsetof(UFortQueryTwoPointSolver, QueryParamsA) == 0x000038, "Member 'UFortQueryTwoPointSolver::QueryParamsA' has a wrong offset!");
static_assert(offsetof(UFortQueryTwoPointSolver, QueryParamsB) == 0x000048, "Member 'UFortQueryTwoPointSolver::QueryParamsB' has a wrong offset!");
static_assert(offsetof(UFortQueryTwoPointSolver, OnFinished) == 0x000058, "Member 'UFortQueryTwoPointSolver::OnFinished' has a wrong offset!");
static_assert(offsetof(UFortQueryTwoPointSolver, OnFailed) == 0x000068, "Member 'UFortQueryTwoPointSolver::OnFailed' has a wrong offset!");
static_assert(offsetof(UFortQueryTwoPointSolver, RotationMode) == 0x000078, "Member 'UFortQueryTwoPointSolver::RotationMode' has a wrong offset!");
static_assert(offsetof(UFortQueryTwoPointSolver, MinRotationOffset) == 0x000080, "Member 'UFortQueryTwoPointSolver::MinRotationOffset' has a wrong offset!");
static_assert(offsetof(UFortQueryTwoPointSolver, MaxRotationOffset) == 0x000098, "Member 'UFortQueryTwoPointSolver::MaxRotationOffset' has a wrong offset!");
static_assert(offsetof(UFortQueryTwoPointSolver, AISys) == 0x000130, "Member 'UFortQueryTwoPointSolver::AISys' has a wrong offset!");
static_assert(offsetof(UFortQueryTwoPointSolver, CachedQuerier) == 0x000138, "Member 'UFortQueryTwoPointSolver::CachedQuerier' has a wrong offset!");

class UFortGameplayAbility_TeleportToActor final : public TObjectBasedCycleFixup<class UFortGameplayAbility, 0x0B00, 0x08>
{
public:
	uint8                                         Pad_B28[0x4];
	bool                                          bCheckPlayerLOSWhenTeleporting;
	uint8                                         Pad_B2D[0x3];
	float                                         MaxDistanceToConsiderLOS;
	float                                         PlayerFOV;
	float                                         TeleportDelay;
	int32                                         TeleportRetries;
	float                                         RetryDelay;
	uint8                                         Pad_B44[0xC];
	class UEnvQuery*                              FindTeleportSpotEQSQuery;
	uint8                                         Pad_B58[0x8];

public:
	void PostTeleportedPawn(class AFortPawn* TeleportedPawn);
	void PreTeleportPawn(class AFortPawn* TeleportedPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayAbility_TeleportToActor">();
	}
	static class UFortGameplayAbility_TeleportToActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayAbility_TeleportToActor>();
	}
};
static_assert(alignof(UFortGameplayAbility_TeleportToActor) == 0x000008, "Wrong alignment on UFortGameplayAbility_TeleportToActor");
static_assert(sizeof(UFortGameplayAbility_TeleportToActor) == 0x000B60, "Wrong size on UFortGameplayAbility_TeleportToActor");
static_assert(offsetof(UFortGameplayAbility_TeleportToActor, bCheckPlayerLOSWhenTeleporting) == 0x000B2C, "Member 'UFortGameplayAbility_TeleportToActor::bCheckPlayerLOSWhenTeleporting' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_TeleportToActor, MaxDistanceToConsiderLOS) == 0x000B30, "Member 'UFortGameplayAbility_TeleportToActor::MaxDistanceToConsiderLOS' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_TeleportToActor, PlayerFOV) == 0x000B34, "Member 'UFortGameplayAbility_TeleportToActor::PlayerFOV' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_TeleportToActor, TeleportDelay) == 0x000B38, "Member 'UFortGameplayAbility_TeleportToActor::TeleportDelay' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_TeleportToActor, TeleportRetries) == 0x000B3C, "Member 'UFortGameplayAbility_TeleportToActor::TeleportRetries' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_TeleportToActor, RetryDelay) == 0x000B40, "Member 'UFortGameplayAbility_TeleportToActor::RetryDelay' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_TeleportToActor, FindTeleportSpotEQSQuery) == 0x000B50, "Member 'UFortGameplayAbility_TeleportToActor::FindTeleportSpotEQSQuery' has a wrong offset!");

class UFortIntensityCurveSequenceProgression final : public UDataAsset
{
public:
	TArray<struct FFortInstensityCurveSequenceProgression> IntensityCurveSequences;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortIntensityCurveSequenceProgression">();
	}
	static class UFortIntensityCurveSequenceProgression* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortIntensityCurveSequenceProgression>();
	}
};
static_assert(alignof(UFortIntensityCurveSequenceProgression) == 0x000008, "Wrong alignment on UFortIntensityCurveSequenceProgression");
static_assert(sizeof(UFortIntensityCurveSequenceProgression) == 0x000040, "Wrong size on UFortIntensityCurveSequenceProgression");
static_assert(offsetof(UFortIntensityCurveSequenceProgression, IntensityCurveSequences) == 0x000030, "Member 'UFortIntensityCurveSequenceProgression::IntensityCurveSequences' has a wrong offset!");

class AFortJumpDownLink final : public ANavLinkProxy
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortJumpDownLink">();
	}
	static class AFortJumpDownLink* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortJumpDownLink>();
	}
};
static_assert(alignof(AFortJumpDownLink) == 0x000008, "Wrong alignment on AFortJumpDownLink");
static_assert(sizeof(AFortJumpDownLink) == 0x0002D8, "Wrong size on AFortJumpDownLink");

class AFortNavGraphGoal final : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	float                                         GraphRadius;
	uint8                                         Pad_294[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavGraphGoal">();
	}
	static class AFortNavGraphGoal* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortNavGraphGoal>();
	}
};
static_assert(alignof(AFortNavGraphGoal) == 0x000008, "Wrong alignment on AFortNavGraphGoal");
static_assert(sizeof(AFortNavGraphGoal) == 0x000298, "Wrong size on AFortNavGraphGoal");
static_assert(offsetof(AFortNavGraphGoal, GraphRadius) == 0x000290, "Member 'AFortNavGraphGoal::GraphRadius' has a wrong offset!");

class AFortNavLinkContainer final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavLinkContainer">();
	}
	static class AFortNavLinkContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortNavLinkContainer>();
	}
};
static_assert(alignof(AFortNavLinkContainer) == 0x000008, "Wrong alignment on AFortNavLinkContainer");
static_assert(sizeof(AFortNavLinkContainer) == 0x000288, "Wrong size on AFortNavLinkContainer");

class IFortPatrolWardInterface final : public IInterface
{
public:
	float GetAffectingDistance() const;
	EWardAffectType GetAffectingType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPatrolWardInterface">();
	}
	static class IFortPatrolWardInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortPatrolWardInterface>();
	}
};
static_assert(alignof(IFortPatrolWardInterface) == 0x000008, "Wrong alignment on IFortPatrolWardInterface");
static_assert(sizeof(IFortPatrolWardInterface) == 0x000028, "Wrong size on IFortPatrolWardInterface");

class UFortRiftBlockerComponent final : public UBoxComponent
{
public:
	uint8                                         bStartActive : 1;
	uint8                                         Pad_5A9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRiftBlockerComponent">();
	}
	static class UFortRiftBlockerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRiftBlockerComponent>();
	}
};
static_assert(alignof(UFortRiftBlockerComponent) == 0x000010, "Wrong alignment on UFortRiftBlockerComponent");
static_assert(sizeof(UFortRiftBlockerComponent) == 0x0005B0, "Wrong size on UFortRiftBlockerComponent");

class UFortStaticMeshLinkComponent final : public UNavRelevantComponent
{
public:
	uint8                                         Pad_F0[0x48];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStaticMeshLinkComponent">();
	}
	static class UFortStaticMeshLinkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStaticMeshLinkComponent>();
	}
};
static_assert(alignof(UFortStaticMeshLinkComponent) == 0x000008, "Wrong alignment on UFortStaticMeshLinkComponent");
static_assert(sizeof(UFortStaticMeshLinkComponent) == 0x000138, "Wrong size on UFortStaticMeshLinkComponent");

class AFortThreatVisualsManager final : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	TSubclassOf<class AThreatCloud>               CloudBlueprint;
	float                                         CloudRadius;
	float                                         ThreatBoxVolumeTopPadding;
	float                                         ThreatBoxVolumeBottomPadding;
	bool                                          bUseLocalPlayersOnlyForCloudMinimumHeight;
	bool                                          bHideClouds;
	uint8                                         Pad_2A6[0x2];
	float                                         CloudMinimumHeightAbovePlayers;
	float                                         CloudMinimumHeightAboveGround;
	float                                         CloudMinimumAltitude;
	float                                         CloudMaxVerticalDelta;
	float                                         CloudMinSpeed;
	float                                         CloudMaxSpeed;
	float                                         StormWindCloudRadius;
	float                                         StormWindGoalRadius;
	float                                         StormWindFalloffRadius;
	float                                         StormWindInactiveMagnitude;
	float                                         StormWindActiveMagnitude;
	float                                         StormWindDesiredDeltaBlendTime;
	float                                         StormWindDirectionAdditionalAngle;
	uint8                                         Pad_2DC[0x4];
	struct FThreatLocationArray                   ThreatLocations;
	struct FStormWindArray                        StormWindArray;
	TArray<struct FVector>                        GoalActorLocations;
	uint8                                         Pad_520[0x20];

public:
	void BeginThreatVisualsPrecursor(class AActor* SourceActor, const struct FVector& ThreatLocation);
	void OnBeginThreatVisualsPrecursor(class AActor* SourceActor, const struct FVector& EndLocation);
	void OnRep_GoalActorLocations();
	void OnRep_HideClouds();
	void OnRep_StormWinds();
	void OnRep_ThreatLocations();
	void OnThreatCloudsChanged(const TArray<struct FThreatLocationInfo>& ThreatLocationInfo);
	void OnWorldReady();
	void ResetMinimumCloudAltitude();
	void SetCloudsAreHidden(bool bHide);
	void SetMinimumCloudAltitude(float NewMinimumAltitude);

	bool GetCloudsAreHidden() const;
	class AThreatCloud* GetThreatCloud(const struct FThreatLocationInfo& ThreatLocInfo) const;
	const TArray<struct FThreatLocationInfo> GetThreatClouds() const;
	bool StormsExist() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortThreatVisualsManager">();
	}
	static class AFortThreatVisualsManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortThreatVisualsManager>();
	}
};
static_assert(alignof(AFortThreatVisualsManager) == 0x000008, "Wrong alignment on AFortThreatVisualsManager");
static_assert(sizeof(AFortThreatVisualsManager) == 0x000540, "Wrong size on AFortThreatVisualsManager");
static_assert(offsetof(AFortThreatVisualsManager, CloudBlueprint) == 0x000290, "Member 'AFortThreatVisualsManager::CloudBlueprint' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, CloudRadius) == 0x000298, "Member 'AFortThreatVisualsManager::CloudRadius' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, ThreatBoxVolumeTopPadding) == 0x00029C, "Member 'AFortThreatVisualsManager::ThreatBoxVolumeTopPadding' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, ThreatBoxVolumeBottomPadding) == 0x0002A0, "Member 'AFortThreatVisualsManager::ThreatBoxVolumeBottomPadding' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, bUseLocalPlayersOnlyForCloudMinimumHeight) == 0x0002A4, "Member 'AFortThreatVisualsManager::bUseLocalPlayersOnlyForCloudMinimumHeight' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, bHideClouds) == 0x0002A5, "Member 'AFortThreatVisualsManager::bHideClouds' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, CloudMinimumHeightAbovePlayers) == 0x0002A8, "Member 'AFortThreatVisualsManager::CloudMinimumHeightAbovePlayers' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, CloudMinimumHeightAboveGround) == 0x0002AC, "Member 'AFortThreatVisualsManager::CloudMinimumHeightAboveGround' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, CloudMinimumAltitude) == 0x0002B0, "Member 'AFortThreatVisualsManager::CloudMinimumAltitude' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, CloudMaxVerticalDelta) == 0x0002B4, "Member 'AFortThreatVisualsManager::CloudMaxVerticalDelta' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, CloudMinSpeed) == 0x0002B8, "Member 'AFortThreatVisualsManager::CloudMinSpeed' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, CloudMaxSpeed) == 0x0002BC, "Member 'AFortThreatVisualsManager::CloudMaxSpeed' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, StormWindCloudRadius) == 0x0002C0, "Member 'AFortThreatVisualsManager::StormWindCloudRadius' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, StormWindGoalRadius) == 0x0002C4, "Member 'AFortThreatVisualsManager::StormWindGoalRadius' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, StormWindFalloffRadius) == 0x0002C8, "Member 'AFortThreatVisualsManager::StormWindFalloffRadius' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, StormWindInactiveMagnitude) == 0x0002CC, "Member 'AFortThreatVisualsManager::StormWindInactiveMagnitude' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, StormWindActiveMagnitude) == 0x0002D0, "Member 'AFortThreatVisualsManager::StormWindActiveMagnitude' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, StormWindDesiredDeltaBlendTime) == 0x0002D4, "Member 'AFortThreatVisualsManager::StormWindDesiredDeltaBlendTime' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, StormWindDirectionAdditionalAngle) == 0x0002D8, "Member 'AFortThreatVisualsManager::StormWindDirectionAdditionalAngle' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, ThreatLocations) == 0x0002E0, "Member 'AFortThreatVisualsManager::ThreatLocations' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, StormWindArray) == 0x0003F8, "Member 'AFortThreatVisualsManager::StormWindArray' has a wrong offset!");
static_assert(offsetof(AFortThreatVisualsManager, GoalActorLocations) == 0x000510, "Member 'AFortThreatVisualsManager::GoalActorLocations' has a wrong offset!");

class UAIGoalComponent : public UGameFrameworkComponent
{
public:
	uint8                                         Pad_A0[0x68];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIGoalComponent">();
	}
	static class UAIGoalComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIGoalComponent>();
	}
};
static_assert(alignof(UAIGoalComponent) == 0x000008, "Wrong alignment on UAIGoalComponent");
static_assert(sizeof(UAIGoalComponent) == 0x000108, "Wrong size on UAIGoalComponent");

class UFortAIGoalComponent : public UAIGoalComponent
{
public:
	TMap<EFortAILODLevel, struct FScalableFloat>  AssignmentUpdatePeriods;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIGoalComponent">();
	}
	static class UFortAIGoalComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIGoalComponent>();
	}
};
static_assert(alignof(UFortAIGoalComponent) == 0x000008, "Wrong alignment on UFortAIGoalComponent");
static_assert(sizeof(UFortAIGoalComponent) == 0x000158, "Wrong size on UFortAIGoalComponent");
static_assert(offsetof(UFortAIGoalComponent, AssignmentUpdatePeriods) == 0x000108, "Member 'UFortAIGoalComponent::AssignmentUpdatePeriods' has a wrong offset!");

class UFortAIGoalProvider_EnvQuery final : public UFortAIGoalProvider
{
public:
	uint8                                         Pad_48[0x8];
	class UEnvQuery*                              GoalQuery;
	float                                         AutomaticUpdatePeriodInSeconds;
	uint8                                         Pad_5C[0x4];
	struct FFortAIAssignmentIdentifier            SpecificAssignmentContext;
	TSoftClassPtr<class UClass>                   AIPawnContext;
	uint8                                         Pad_B8[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIGoalProvider_EnvQuery">();
	}
	static class UFortAIGoalProvider_EnvQuery* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIGoalProvider_EnvQuery>();
	}
};
static_assert(alignof(UFortAIGoalProvider_EnvQuery) == 0x000008, "Wrong alignment on UFortAIGoalProvider_EnvQuery");
static_assert(sizeof(UFortAIGoalProvider_EnvQuery) == 0x0000D8, "Wrong size on UFortAIGoalProvider_EnvQuery");
static_assert(offsetof(UFortAIGoalProvider_EnvQuery, GoalQuery) == 0x000050, "Member 'UFortAIGoalProvider_EnvQuery::GoalQuery' has a wrong offset!");
static_assert(offsetof(UFortAIGoalProvider_EnvQuery, AutomaticUpdatePeriodInSeconds) == 0x000058, "Member 'UFortAIGoalProvider_EnvQuery::AutomaticUpdatePeriodInSeconds' has a wrong offset!");
static_assert(offsetof(UFortAIGoalProvider_EnvQuery, SpecificAssignmentContext) == 0x000060, "Member 'UFortAIGoalProvider_EnvQuery::SpecificAssignmentContext' has a wrong offset!");
static_assert(offsetof(UFortAIGoalProvider_EnvQuery, AIPawnContext) == 0x000090, "Member 'UFortAIGoalProvider_EnvQuery::AIPawnContext' has a wrong offset!");

class UFortAIEncounterGoalSelectionTable final : public UDataAsset
{
public:
	TArray<struct FEncounterGoalSelectionTableEntry> EncounterGoalSelectionCriteria;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIEncounterGoalSelectionTable">();
	}
	static class UFortAIEncounterGoalSelectionTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIEncounterGoalSelectionTable>();
	}
};
static_assert(alignof(UFortAIEncounterGoalSelectionTable) == 0x000008, "Wrong alignment on UFortAIEncounterGoalSelectionTable");
static_assert(sizeof(UFortAIEncounterGoalSelectionTable) == 0x000040, "Wrong size on UFortAIEncounterGoalSelectionTable");
static_assert(offsetof(UFortAIEncounterGoalSelectionTable, EncounterGoalSelectionCriteria) == 0x000030, "Member 'UFortAIEncounterGoalSelectionTable::EncounterGoalSelectionCriteria' has a wrong offset!");

class UAIHotSpotConfig final : public UDataAsset
{
public:
	TArray<struct FAIHotSpotSlotConfig>           Slots;
	uint8                                         bDetectUnreachableSlots : 1;
	uint8                                         Pad_41[0x7];
	class UAIHotSpotSlotGenerator*                SlotGenerator;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIHotSpotConfig">();
	}
	static class UAIHotSpotConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIHotSpotConfig>();
	}
};
static_assert(alignof(UAIHotSpotConfig) == 0x000008, "Wrong alignment on UAIHotSpotConfig");
static_assert(sizeof(UAIHotSpotConfig) == 0x000050, "Wrong size on UAIHotSpotConfig");
static_assert(offsetof(UAIHotSpotConfig, Slots) == 0x000030, "Member 'UAIHotSpotConfig::Slots' has a wrong offset!");
static_assert(offsetof(UAIHotSpotConfig, SlotGenerator) == 0x000048, "Member 'UAIHotSpotConfig::SlotGenerator' has a wrong offset!");

class UBuildingActorHotSpotRenderingComponent final : public UDebugDrawComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BuildingActorHotSpotRenderingComponent">();
	}
	static class UBuildingActorHotSpotRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuildingActorHotSpotRenderingComponent>();
	}
};
static_assert(alignof(UBuildingActorHotSpotRenderingComponent) == 0x000010, "Wrong alignment on UBuildingActorHotSpotRenderingComponent");
static_assert(sizeof(UBuildingActorHotSpotRenderingComponent) == 0x0005C0, "Wrong size on UBuildingActorHotSpotRenderingComponent");

class UFortAIHotSpotManager final : public UAIHotSpotManagerProxy
{
public:
	TSoftObjectPtr<class UBuildingActorHotSpotConfig> FallbackHotspotConfig;
	uint8                                         Pad_A8[0xF0];
	TArray<struct FAutoAcquireSlot>               AutoAcquireSlots;
	uint8                                         Pad_1A8[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIHotSpotManager">();
	}
	static class UFortAIHotSpotManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIHotSpotManager>();
	}
};
static_assert(alignof(UFortAIHotSpotManager) == 0x000008, "Wrong alignment on UFortAIHotSpotManager");
static_assert(sizeof(UFortAIHotSpotManager) == 0x0001C8, "Wrong size on UFortAIHotSpotManager");
static_assert(offsetof(UFortAIHotSpotManager, FallbackHotspotConfig) == 0x000080, "Member 'UFortAIHotSpotManager::FallbackHotspotConfig' has a wrong offset!");
static_assert(offsetof(UFortAIHotSpotManager, AutoAcquireSlots) == 0x000198, "Member 'UFortAIHotSpotManager::AutoAcquireSlots' has a wrong offset!");

class UFortAIHotSpotSlotGenerator_FromConfig final : public UAIHotSpotSlotGenerator
{
public:
	class UAIHotSpotConfig*                       BuildingConfig;
	struct FVector                                Offset;
	uint8                                         bMirrorX : 1;
	uint8                                         bMirrorY : 1;
	uint8                                         Pad_49[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIHotSpotSlotGenerator_FromConfig">();
	}
	static class UFortAIHotSpotSlotGenerator_FromConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIHotSpotSlotGenerator_FromConfig>();
	}
};
static_assert(alignof(UFortAIHotSpotSlotGenerator_FromConfig) == 0x000008, "Wrong alignment on UFortAIHotSpotSlotGenerator_FromConfig");
static_assert(sizeof(UFortAIHotSpotSlotGenerator_FromConfig) == 0x000050, "Wrong size on UFortAIHotSpotSlotGenerator_FromConfig");
static_assert(offsetof(UFortAIHotSpotSlotGenerator_FromConfig, BuildingConfig) == 0x000028, "Member 'UFortAIHotSpotSlotGenerator_FromConfig::BuildingConfig' has a wrong offset!");
static_assert(offsetof(UFortAIHotSpotSlotGenerator_FromConfig, Offset) == 0x000030, "Member 'UFortAIHotSpotSlotGenerator_FromConfig::Offset' has a wrong offset!");

class UFortAIHotSpotSlotGenerator_RampTrace final : public UAIHotSpotSlotGenerator
{
public:
	uint8                                         Pad_28[0x30];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIHotSpotSlotGenerator_RampTrace">();
	}
	static class UFortAIHotSpotSlotGenerator_RampTrace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIHotSpotSlotGenerator_RampTrace>();
	}
};
static_assert(alignof(UFortAIHotSpotSlotGenerator_RampTrace) == 0x000008, "Wrong alignment on UFortAIHotSpotSlotGenerator_RampTrace");
static_assert(sizeof(UFortAIHotSpotSlotGenerator_RampTrace) == 0x000058, "Wrong size on UFortAIHotSpotSlotGenerator_RampTrace");

class AFortAIHotSpot_FakeBuilding final : public AFortAIHotSpot
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIHotSpot_FakeBuilding">();
	}
	static class AFortAIHotSpot_FakeBuilding* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAIHotSpot_FakeBuilding>();
	}
};
static_assert(alignof(AFortAIHotSpot_FakeBuilding) == 0x000008, "Wrong alignment on AFortAIHotSpot_FakeBuilding");
static_assert(sizeof(AFortAIHotSpot_FakeBuilding) == 0x000460, "Wrong size on AFortAIHotSpot_FakeBuilding");

class UFortInfluenceMap final : public UObject
{
public:
	uint8                                         Pad_28[0xB8];
	class AFortNavigationGraph*                   GraphData;
	uint8                                         Pad_E8[0x10];

public:
	static void K2_AddInfluenceSource(class UObject* WorldContext, const struct FVector& Position, const class FString& SourceName, float Strength);
	static void K2_GetInfluenceSourcePositions(class UObject* WorldContext, TArray<struct FVector>* InfluenceSourcePositions);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortInfluenceMap">();
	}
	static class UFortInfluenceMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortInfluenceMap>();
	}
};
static_assert(alignof(UFortInfluenceMap) == 0x000008, "Wrong alignment on UFortInfluenceMap");
static_assert(sizeof(UFortInfluenceMap) == 0x0000F8, "Wrong size on UFortInfluenceMap");
static_assert(offsetof(UFortInfluenceMap, GraphData) == 0x0000E0, "Member 'UFortInfluenceMap::GraphData' has a wrong offset!");

class ALevelTestingActorBase final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelTestingActorBase">();
	}
	static class ALevelTestingActorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelTestingActorBase>();
	}
};
static_assert(alignof(ALevelTestingActorBase) == 0x000008, "Wrong alignment on ALevelTestingActorBase");
static_assert(sizeof(ALevelTestingActorBase) == 0x000288, "Wrong size on ALevelTestingActorBase");

class UFortBotMissionLogic final : public UObject
{
public:
	class AFortMission*                           Mission;
	TArray<class AActor*>                         Goals;
	TArray<class AFortBotStructureBuilder*>       Builders;
	class UBehaviorTree*                          CurrentBehaviorAsset;
	TArray<class AFortBotController*>             AssignedAI;
	TArray<uint8>                                 GoalHasLocator;

public:
	void ClearAllLocated();
	void MarkAllLocated();
	void MarkSingleLocator(const class AActor* LocatorActor);
	void OnAssignedBehavior(class AFortAIController* BotAI);
	bool OnCanStartOtherMission(class AFortAIController* BotAI, class AFortMission* OtherMission);
	bool OnInteractWithMissionGoal(class AFortAIController* BotAI, class AActor* MissionGoal);
	void OnMissionActivated();
	void OnMissionFinished();
	void OnMissionStarted();
	void ResetBehavior();
	void SetCurrentBehavior(class UBehaviorTree* Behavior);
	void SetGoalsInvulnerable(bool bGodMode);
	class AFortBotStructureBuilder* SpawnStructureBuilder(class AActor* MissionGoal, class UFortBuildingInstructions* BuildingInstructions);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBotMissionLogic">();
	}
	static class UFortBotMissionLogic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBotMissionLogic>();
	}
};
static_assert(alignof(UFortBotMissionLogic) == 0x000008, "Wrong alignment on UFortBotMissionLogic");
static_assert(sizeof(UFortBotMissionLogic) == 0x000078, "Wrong size on UFortBotMissionLogic");
static_assert(offsetof(UFortBotMissionLogic, Mission) == 0x000028, "Member 'UFortBotMissionLogic::Mission' has a wrong offset!");
static_assert(offsetof(UFortBotMissionLogic, Goals) == 0x000030, "Member 'UFortBotMissionLogic::Goals' has a wrong offset!");
static_assert(offsetof(UFortBotMissionLogic, Builders) == 0x000040, "Member 'UFortBotMissionLogic::Builders' has a wrong offset!");
static_assert(offsetof(UFortBotMissionLogic, CurrentBehaviorAsset) == 0x000050, "Member 'UFortBotMissionLogic::CurrentBehaviorAsset' has a wrong offset!");
static_assert(offsetof(UFortBotMissionLogic, AssignedAI) == 0x000058, "Member 'UFortBotMissionLogic::AssignedAI' has a wrong offset!");
static_assert(offsetof(UFortBotMissionLogic, GoalHasLocator) == 0x000068, "Member 'UFortBotMissionLogic::GoalHasLocator' has a wrong offset!");

class AFortBotStructureBuilder final : public AActor
{
public:
	class UFortBuildingInstructions*              BuildingInstructions;
	TArray<class ABuildingActor*>                 BuiltActors;
	class AActor*                                 CachedGoal;
	uint8                                         Pad_2A8[0x18];

public:
	void BuildAll();
	void OnBuildingDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void RunDeconstructor();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBotStructureBuilder">();
	}
	static class AFortBotStructureBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortBotStructureBuilder>();
	}
};
static_assert(alignof(AFortBotStructureBuilder) == 0x000008, "Wrong alignment on AFortBotStructureBuilder");
static_assert(sizeof(AFortBotStructureBuilder) == 0x0002C0, "Wrong size on AFortBotStructureBuilder");
static_assert(offsetof(AFortBotStructureBuilder, BuildingInstructions) == 0x000288, "Member 'AFortBotStructureBuilder::BuildingInstructions' has a wrong offset!");
static_assert(offsetof(AFortBotStructureBuilder, BuiltActors) == 0x000290, "Member 'AFortBotStructureBuilder::BuiltActors' has a wrong offset!");
static_assert(offsetof(AFortBotStructureBuilder, CachedGoal) == 0x0002A0, "Member 'AFortBotStructureBuilder::CachedGoal' has a wrong offset!");

class UFortNavAgentCostData final : public UPrimaryDataAsset
{
public:
	class FName                                   NavAgentName;
	uint8                                         Pad_34[0x4];
	TArray<TSubclassOf<class UNavArea>>           NavAreaStrengthBuckets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavAgentCostData">();
	}
	static class UFortNavAgentCostData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavAgentCostData>();
	}
};
static_assert(alignof(UFortNavAgentCostData) == 0x000008, "Wrong alignment on UFortNavAgentCostData");
static_assert(sizeof(UFortNavAgentCostData) == 0x000048, "Wrong size on UFortNavAgentCostData");
static_assert(offsetof(UFortNavAgentCostData, NavAgentName) == 0x000030, "Member 'UFortNavAgentCostData::NavAgentName' has a wrong offset!");
static_assert(offsetof(UFortNavAgentCostData, NavAreaStrengthBuckets) == 0x000038, "Member 'UFortNavAgentCostData::NavAreaStrengthBuckets' has a wrong offset!");

class UFortNavArea_BigMovingPawn final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_BigMovingPawn">();
	}
	static class UFortNavArea_BigMovingPawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_BigMovingPawn>();
	}
};
static_assert(alignof(UFortNavArea_BigMovingPawn) == 0x000008, "Wrong alignment on UFortNavArea_BigMovingPawn");
static_assert(sizeof(UFortNavArea_BigMovingPawn) == 0x000050, "Wrong size on UFortNavArea_BigMovingPawn");

class UFortAthenaNpcGalileoComponent final : public UActorComponent
{
public:
	class AFortAthenaAIBotController*             CachedBotController;
	class AFortPawn*                              PossessedPawn;
	TArray<struct FVector>                        PatrolPath;
	TArray<class AFortAthenaAIBotController*>     CommunicationGroup;
	TMulticastInlineDelegate<void()>              OnPatrollingStart;
	TMulticastInlineDelegate<void()>              OnPatrollingStop;
	uint8                                         Pad_F0[0x10];

public:
	const TArray<class AFortAthenaAIBotController*> GetCommunicationGroup();
	void OnPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void SetCommunicationGroup(const TArray<class AFortAthenaAIBotController*>& AIBotControllerList);
	void SetPatrolPath(const TArray<struct FVector>& NewPatrolPath);

	const TArray<struct FVector> GetPatrolPath() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaNpcGalileoComponent">();
	}
	static class UFortAthenaNpcGalileoComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaNpcGalileoComponent>();
	}
};
static_assert(alignof(UFortAthenaNpcGalileoComponent) == 0x000008, "Wrong alignment on UFortAthenaNpcGalileoComponent");
static_assert(sizeof(UFortAthenaNpcGalileoComponent) == 0x000100, "Wrong size on UFortAthenaNpcGalileoComponent");
static_assert(offsetof(UFortAthenaNpcGalileoComponent, CachedBotController) == 0x0000A0, "Member 'UFortAthenaNpcGalileoComponent::CachedBotController' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcGalileoComponent, PossessedPawn) == 0x0000A8, "Member 'UFortAthenaNpcGalileoComponent::PossessedPawn' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcGalileoComponent, PatrolPath) == 0x0000B0, "Member 'UFortAthenaNpcGalileoComponent::PatrolPath' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcGalileoComponent, CommunicationGroup) == 0x0000C0, "Member 'UFortAthenaNpcGalileoComponent::CommunicationGroup' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcGalileoComponent, OnPatrollingStart) == 0x0000D0, "Member 'UFortAthenaNpcGalileoComponent::OnPatrollingStart' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcGalileoComponent, OnPatrollingStop) == 0x0000E0, "Member 'UFortAthenaNpcGalileoComponent::OnPatrollingStop' has a wrong offset!");

class UFortNavArea_Clamber final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_Clamber">();
	}
	static class UFortNavArea_Clamber* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_Clamber>();
	}
};
static_assert(alignof(UFortNavArea_Clamber) == 0x000008, "Wrong alignment on UFortNavArea_Clamber");
static_assert(sizeof(UFortNavArea_Clamber) == 0x000050, "Wrong size on UFortNavArea_Clamber");

class UFortNavArea_ClosedDoors final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_ClosedDoors">();
	}
	static class UFortNavArea_ClosedDoors* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_ClosedDoors>();
	}
};
static_assert(alignof(UFortNavArea_ClosedDoors) == 0x000008, "Wrong alignment on UFortNavArea_ClosedDoors");
static_assert(sizeof(UFortNavArea_ClosedDoors) == 0x000050, "Wrong size on UFortNavArea_ClosedDoors");

class UFortNavArea_Danger final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_Danger">();
	}
	static class UFortNavArea_Danger* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_Danger>();
	}
};
static_assert(alignof(UFortNavArea_Danger) == 0x000008, "Wrong alignment on UFortNavArea_Danger");
static_assert(sizeof(UFortNavArea_Danger) == 0x000050, "Wrong size on UFortNavArea_Danger");

class UFortNavArea_HuskNull final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_HuskNull">();
	}
	static class UFortNavArea_HuskNull* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_HuskNull>();
	}
};
static_assert(alignof(UFortNavArea_HuskNull) == 0x000008, "Wrong alignment on UFortNavArea_HuskNull");
static_assert(sizeof(UFortNavArea_HuskNull) == 0x000050, "Wrong size on UFortNavArea_HuskNull");

class UFortNavArea_LowJump final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_LowJump">();
	}
	static class UFortNavArea_LowJump* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_LowJump>();
	}
};
static_assert(alignof(UFortNavArea_LowJump) == 0x000008, "Wrong alignment on UFortNavArea_LowJump");
static_assert(sizeof(UFortNavArea_LowJump) == 0x000050, "Wrong size on UFortNavArea_LowJump");

class UFortNavArea_LowSmashable final : public UFortNavArea_DefaultSmashable
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_LowSmashable">();
	}
	static class UFortNavArea_LowSmashable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_LowSmashable>();
	}
};
static_assert(alignof(UFortNavArea_LowSmashable) == 0x000008, "Wrong alignment on UFortNavArea_LowSmashable");
static_assert(sizeof(UFortNavArea_LowSmashable) == 0x000050, "Wrong size on UFortNavArea_LowSmashable");

class UFortNavArea_PortalOrSmash final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_PortalOrSmash">();
	}
	static class UFortNavArea_PortalOrSmash* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_PortalOrSmash>();
	}
};
static_assert(alignof(UFortNavArea_PortalOrSmash) == 0x000008, "Wrong alignment on UFortNavArea_PortalOrSmash");
static_assert(sizeof(UFortNavArea_PortalOrSmash) == 0x000050, "Wrong size on UFortNavArea_PortalOrSmash");

class UFortNavArea_Stairs final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_Stairs">();
	}
	static class UFortNavArea_Stairs* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_Stairs>();
	}
};
static_assert(alignof(UFortNavArea_Stairs) == 0x000008, "Wrong alignment on UFortNavArea_Stairs");
static_assert(sizeof(UFortNavArea_Stairs) == 0x000050, "Wrong size on UFortNavArea_Stairs");

class UFortNavArea_StarlightObstacle final : public UFortNavArea_Obstacle
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_StarlightObstacle">();
	}
	static class UFortNavArea_StarlightObstacle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_StarlightObstacle>();
	}
};
static_assert(alignof(UFortNavArea_StarlightObstacle) == 0x000008, "Wrong alignment on UFortNavArea_StarlightObstacle");
static_assert(sizeof(UFortNavArea_StarlightObstacle) == 0x000050, "Wrong size on UFortNavArea_StarlightObstacle");

class UFortNavArea_TakerOnly final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_TakerOnly">();
	}
	static class UFortNavArea_TakerOnly* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_TakerOnly>();
	}
};
static_assert(alignof(UFortNavArea_TakerOnly) == 0x000008, "Wrong alignment on UFortNavArea_TakerOnly");
static_assert(sizeof(UFortNavArea_TakerOnly) == 0x000050, "Wrong size on UFortNavArea_TakerOnly");

class UFortNavArea_Unwalkable final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_Unwalkable">();
	}
	static class UFortNavArea_Unwalkable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_Unwalkable>();
	}
};
static_assert(alignof(UFortNavArea_Unwalkable) == 0x000008, "Wrong alignment on UFortNavArea_Unwalkable");
static_assert(sizeof(UFortNavArea_Unwalkable) == 0x000050, "Wrong size on UFortNavArea_Unwalkable");

class UFortNavArea_WallCorner final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_WallCorner">();
	}
	static class UFortNavArea_WallCorner* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_WallCorner>();
	}
};
static_assert(alignof(UFortNavArea_WallCorner) == 0x000008, "Wrong alignment on UFortNavArea_WallCorner");
static_assert(sizeof(UFortNavArea_WallCorner) == 0x000050, "Wrong size on UFortNavArea_WallCorner");

class AAthenaNavInvokerBox final : public AActor
{
public:
	float                                         GenerationRange;
	uint8                                         Pad_28C[0x4];
	class UNavigationInvokerComponent*            InvokerComp;

public:
	void SetInvokerEnabled(bool bEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaNavInvokerBox">();
	}
	static class AAthenaNavInvokerBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaNavInvokerBox>();
	}
};
static_assert(alignof(AAthenaNavInvokerBox) == 0x000008, "Wrong alignment on AAthenaNavInvokerBox");
static_assert(sizeof(AAthenaNavInvokerBox) == 0x000298, "Wrong size on AAthenaNavInvokerBox");
static_assert(offsetof(AAthenaNavInvokerBox, GenerationRange) == 0x000288, "Member 'AAthenaNavInvokerBox::GenerationRange' has a wrong offset!");
static_assert(offsetof(AAthenaNavInvokerBox, InvokerComp) == 0x000290, "Member 'AAthenaNavInvokerBox::InvokerComp' has a wrong offset!");

class UAthenaNavMeshRenderingComponent final : public UNavMeshRenderingComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaNavMeshRenderingComponent">();
	}
	static class UAthenaNavMeshRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaNavMeshRenderingComponent>();
	}
};
static_assert(alignof(UAthenaNavMeshRenderingComponent) == 0x000010, "Wrong alignment on UAthenaNavMeshRenderingComponent");
static_assert(sizeof(UAthenaNavMeshRenderingComponent) == 0x0005D0, "Wrong size on UAthenaNavMeshRenderingComponent");

class AAthenaNavOctTreeInclusionBounds final : public AVolume
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaNavOctTreeInclusionBounds">();
	}
	static class AAthenaNavOctTreeInclusionBounds* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaNavOctTreeInclusionBounds>();
	}
};
static_assert(alignof(AAthenaNavOctTreeInclusionBounds) == 0x000008, "Wrong alignment on AAthenaNavOctTreeInclusionBounds");
static_assert(sizeof(AAthenaNavOctTreeInclusionBounds) == 0x0002C0, "Wrong size on AAthenaNavOctTreeInclusionBounds");

class IAthenaNavRelevantActorInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaNavRelevantActorInterface">();
	}
	static class IAthenaNavRelevantActorInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAthenaNavRelevantActorInterface>();
	}
};
static_assert(alignof(IAthenaNavRelevantActorInterface) == 0x000008, "Wrong alignment on IAthenaNavRelevantActorInterface");
static_assert(sizeof(IAthenaNavRelevantActorInterface) == 0x000028, "Wrong size on IAthenaNavRelevantActorInterface");

class UAthenaNavSystemConfig final : public UFortNavSystemConfig
{
public:
	TArray<struct FNavDataSetVariantSettings>     NavDataSetVariants;
	uint8                                         bUseNavDataSetVariants : 1;
	uint8                                         bDiscardNavDataFromSublevels : 1;
	uint8                                         bUseNavigationInvokers : 1;
	uint8                                         bAllowStaticNavigationInvokerBoxes : 1;
	uint8                                         bLazyOctree : 1;
	uint8                                         bUseNavOctTreeInclusionBounds : 1;
	uint8                                         bPrioritizeNavigationAroundSpawners : 1;
	uint8                                         bResetDirtyAreasOnInitialBuildingRelease : 1;
	uint8                                         bSupportRuntimeNavmeshDisabling : 1;
	uint8                                         bNavOctreeUnlockedByDefaultWhenNotPreloadingNavData : 1;
	uint8                                         bConfigureDirtyAreaWarningSizeThreshold : 1;
	uint8                                         Pad_72[0x2];
	float                                         DirtyAreaWarningSizeThreshold;
	TArray<struct FOverriddenSupportedAgentsByReleaseVersion> OverriddenSupportedAgentsByReleaseVersion;
	bool                                          bSuspendNavmeshWhenNoPossibleUsers;
	uint8                                         Pad_89[0x7];
	TArray<class FName>                           AllowedNavBoundsUniqueActorTags;
	struct FNavAgentSelector                      EnableAutoNavConfigForAgent;
	uint8                                         Pad_A4[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaNavSystemConfig">();
	}
	static class UAthenaNavSystemConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaNavSystemConfig>();
	}
};
static_assert(alignof(UAthenaNavSystemConfig) == 0x000008, "Wrong alignment on UAthenaNavSystemConfig");
static_assert(sizeof(UAthenaNavSystemConfig) == 0x0000A8, "Wrong size on UAthenaNavSystemConfig");
static_assert(offsetof(UAthenaNavSystemConfig, NavDataSetVariants) == 0x000060, "Member 'UAthenaNavSystemConfig::NavDataSetVariants' has a wrong offset!");
static_assert(offsetof(UAthenaNavSystemConfig, DirtyAreaWarningSizeThreshold) == 0x000074, "Member 'UAthenaNavSystemConfig::DirtyAreaWarningSizeThreshold' has a wrong offset!");
static_assert(offsetof(UAthenaNavSystemConfig, OverriddenSupportedAgentsByReleaseVersion) == 0x000078, "Member 'UAthenaNavSystemConfig::OverriddenSupportedAgentsByReleaseVersion' has a wrong offset!");
static_assert(offsetof(UAthenaNavSystemConfig, bSuspendNavmeshWhenNoPossibleUsers) == 0x000088, "Member 'UAthenaNavSystemConfig::bSuspendNavmeshWhenNoPossibleUsers' has a wrong offset!");
static_assert(offsetof(UAthenaNavSystemConfig, AllowedNavBoundsUniqueActorTags) == 0x000090, "Member 'UAthenaNavSystemConfig::AllowedNavBoundsUniqueActorTags' has a wrong offset!");
static_assert(offsetof(UAthenaNavSystemConfig, EnableAutoNavConfigForAgent) == 0x0000A0, "Member 'UAthenaNavSystemConfig::EnableAutoNavConfigForAgent' has a wrong offset!");

class UFortNavArea_WallCornerReplacement final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_WallCornerReplacement">();
	}
	static class UFortNavArea_WallCornerReplacement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_WallCornerReplacement>();
	}
};
static_assert(alignof(UFortNavArea_WallCornerReplacement) == 0x000008, "Wrong alignment on UFortNavArea_WallCornerReplacement");
static_assert(sizeof(UFortNavArea_WallCornerReplacement) == 0x000050, "Wrong size on UFortNavArea_WallCornerReplacement");

class UFortNavArea_TempWallReplacement final : public UFortNavAreaAutomatic
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavArea_TempWallReplacement">();
	}
	static class UFortNavArea_TempWallReplacement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_TempWallReplacement>();
	}
};
static_assert(alignof(UFortNavArea_TempWallReplacement) == 0x000008, "Wrong alignment on UFortNavArea_TempWallReplacement");
static_assert(sizeof(UFortNavArea_TempWallReplacement) == 0x000068, "Wrong size on UFortNavArea_TempWallReplacement");

class UEdgeNavLinksRenderingComponent final : public UNavLinkRenderingComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EdgeNavLinksRenderingComponent">();
	}
	static class UEdgeNavLinksRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEdgeNavLinksRenderingComponent>();
	}
};
static_assert(alignof(UEdgeNavLinksRenderingComponent) == 0x000010, "Wrong alignment on UEdgeNavLinksRenderingComponent");
static_assert(sizeof(UEdgeNavLinksRenderingComponent) == 0x000570, "Wrong size on UEdgeNavLinksRenderingComponent");

class UFortClamberLinkGlobalProxy final : public UFortCustomNavLinkGlobalProxy
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortClamberLinkGlobalProxy">();
	}
	static class UFortClamberLinkGlobalProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortClamberLinkGlobalProxy>();
	}
};
static_assert(alignof(UFortClamberLinkGlobalProxy) == 0x000008, "Wrong alignment on UFortClamberLinkGlobalProxy");
static_assert(sizeof(UFortClamberLinkGlobalProxy) == 0x000040, "Wrong size on UFortClamberLinkGlobalProxy");

class UFortNavigationMetaFilter : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavigationMetaFilter">();
	}
	static class UFortNavigationMetaFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavigationMetaFilter>();
	}
};
static_assert(alignof(UFortNavigationMetaFilter) == 0x000008, "Wrong alignment on UFortNavigationMetaFilter");
static_assert(sizeof(UFortNavigationMetaFilter) == 0x000048, "Wrong size on UFortNavigationMetaFilter");

class UFortAthenaAISpawnerDataComponent_GameplayBase : public UFortAthenaAISpawnerDataComponent
{
public:
	bool                                          bOverrideGlobalSpeedMultiplier;
	uint8                                         Pad_31[0x7];
	struct FScalableFloat                         GlobalSpeedMultiplier;
	struct FScalableFloat                         CanBeConverted;
	struct FScalableFloat                         CanBeConvertedFromDBNO;
	struct FScalableFloat                         ForceKillWhenUnconverted;
	struct FScalableFloat                         ForceKillWhenConverterDies;
	struct FScalableFloat                         CopyConverterSpecificRelations;
	struct FScalableFloat                         RemoveFromAllFactions;
	struct FScalableFloat                         ReleaseDistance;
	struct FScalableFloat                         CheckReleaseConditionsTimeInterval;
	struct FGameplayTagContainer                  AddToFactions;
	struct FGameplayTagContainer                  RemoveFromFactions;
	struct FScalableFloat                         PawnCullDistance;
	TArray<class UFortAbilitySet*>                AbilitySetsForConverted;
	struct FTeleportSettings                      TeleportSettings;
	bool                                          bApplyTaggedNavFilters;
	uint8                                         Pad_251[0x7];
	struct FFortAITaggedNavFilterData             NavFilterData;
	bool                                          bEnableDBNO;
	ETInteractionType                             DBNOInteractionType;
	uint8                                         Pad_2BA[0x2];
	float                                         DBNOInteractionDuration;
	bool                                          bOnlyLeaderInteraction;
	uint8                                         Pad_2C1[0x7];

public:
	void SetCanBeConverted(const bool bInCanBeConverted);
	void SetCopyConverterSpecificRelations(const bool bInCopyConverterSpecificRelations);

	float GetGlobalSpeedMultiplier() const;
	void PostOnSpawnedBP(class APawn* PawnAI) const;
	bool ShouldOverrideGlobalSpeedMultiplier() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_GameplayBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_GameplayBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_GameplayBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_GameplayBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_GameplayBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_GameplayBase) == 0x0002C8, "Wrong size on UFortAthenaAISpawnerDataComponent_GameplayBase");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, bOverrideGlobalSpeedMultiplier) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::bOverrideGlobalSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, GlobalSpeedMultiplier) == 0x000038, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::GlobalSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, CanBeConverted) == 0x000060, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::CanBeConverted' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, CanBeConvertedFromDBNO) == 0x000088, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::CanBeConvertedFromDBNO' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, ForceKillWhenUnconverted) == 0x0000B0, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::ForceKillWhenUnconverted' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, ForceKillWhenConverterDies) == 0x0000D8, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::ForceKillWhenConverterDies' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, CopyConverterSpecificRelations) == 0x000100, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::CopyConverterSpecificRelations' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, RemoveFromAllFactions) == 0x000128, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::RemoveFromAllFactions' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, ReleaseDistance) == 0x000150, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::ReleaseDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, CheckReleaseConditionsTimeInterval) == 0x000178, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::CheckReleaseConditionsTimeInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, AddToFactions) == 0x0001A0, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::AddToFactions' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, RemoveFromFactions) == 0x0001C0, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::RemoveFromFactions' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, PawnCullDistance) == 0x0001E0, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::PawnCullDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, AbilitySetsForConverted) == 0x000208, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::AbilitySetsForConverted' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, TeleportSettings) == 0x000218, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::TeleportSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, bApplyTaggedNavFilters) == 0x000250, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::bApplyTaggedNavFilters' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, NavFilterData) == 0x000258, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::NavFilterData' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, bEnableDBNO) == 0x0002B8, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::bEnableDBNO' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, DBNOInteractionType) == 0x0002B9, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::DBNOInteractionType' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, DBNOInteractionDuration) == 0x0002BC, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::DBNOInteractionDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayBase, bOnlyLeaderInteraction) == 0x0002C0, "Member 'UFortAthenaAISpawnerDataComponent_GameplayBase::bOnlyLeaderInteraction' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_AIGameplay final : public UFortAthenaAISpawnerDataComponent_GameplayBase
{
public:
	float                                         MoveSoundStimulusBroadcastInterval;
	float                                         MaxMoveSoundRange;
	uint8                                         bGenerateSoundInAllMovementModes : 1;
	uint8                                         Pad_2D1[0x7];
	struct FScalableFloat                         DefaultLifespanAfterDeath;
	EFortAthenaAISpawnerDataComponentTriBool      IsAlwaysGameplayRelevantOverride;
	uint8                                         Pad_301[0x7];
	TArray<struct FPickupTagConvertInfo>          PickupTagConvertInfos;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIGameplay">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIGameplay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIGameplay>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIGameplay) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIGameplay");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIGameplay) == 0x000318, "Wrong size on UFortAthenaAISpawnerDataComponent_AIGameplay");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIGameplay, MoveSoundStimulusBroadcastInterval) == 0x0002C8, "Member 'UFortAthenaAISpawnerDataComponent_AIGameplay::MoveSoundStimulusBroadcastInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIGameplay, MaxMoveSoundRange) == 0x0002CC, "Member 'UFortAthenaAISpawnerDataComponent_AIGameplay::MaxMoveSoundRange' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIGameplay, DefaultLifespanAfterDeath) == 0x0002D8, "Member 'UFortAthenaAISpawnerDataComponent_AIGameplay::DefaultLifespanAfterDeath' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIGameplay, IsAlwaysGameplayRelevantOverride) == 0x000300, "Member 'UFortAthenaAISpawnerDataComponent_AIGameplay::IsAlwaysGameplayRelevantOverride' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIGameplay, PickupTagConvertInfos) == 0x000308, "Member 'UFortAthenaAISpawnerDataComponent_AIGameplay::PickupTagConvertInfos' has a wrong offset!");

class UFortNavigationFilter_Hunting final : public UFortNavigationMetaFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavigationFilter_Hunting">();
	}
	static class UFortNavigationFilter_Hunting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavigationFilter_Hunting>();
	}
};
static_assert(alignof(UFortNavigationFilter_Hunting) == 0x000008, "Wrong alignment on UFortNavigationFilter_Hunting");
static_assert(sizeof(UFortNavigationFilter_Hunting) == 0x000048, "Wrong size on UFortNavigationFilter_Hunting");

class UFortNavigationFilter_IgnoreSmashingCost final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavigationFilter_IgnoreSmashingCost">();
	}
	static class UFortNavigationFilter_IgnoreSmashingCost* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavigationFilter_IgnoreSmashingCost>();
	}
};
static_assert(alignof(UFortNavigationFilter_IgnoreSmashingCost) == 0x000008, "Wrong alignment on UFortNavigationFilter_IgnoreSmashingCost");
static_assert(sizeof(UFortNavigationFilter_IgnoreSmashingCost) == 0x000048, "Wrong size on UFortNavigationFilter_IgnoreSmashingCost");

class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase : public UFortAthenaAISpawnerDataComponent
{
public:
	TArray<struct FInitialGameplayEffectInfo>     InitialGameplayEffect;
	TArray<class UFortAbilitySet*>                InitialGameplayAbilitiesSet;
	struct FGameplayTagContainer                  LooseTagsToApplyToPawn;

public:
	void SetLooseTagsToApplyToPawn(const struct FGameplayTagContainer& InGameplayTagContainer);

	void GetInitialGameplayAbilities(TArray<class UFortAbilitySet*>* OutGASets) const;
	void GetInitialGameplayEffects(TArray<struct FInitialGameplayEffectInfo>* OutGEs) const;
	struct FGameplayTagContainer GetLooseTagsToApplyToPawn() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_GameplayAbilityBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_GameplayAbilityBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_GameplayAbilityBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_GameplayAbilityBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_GameplayAbilityBase) == 0x000070, "Wrong size on UFortAthenaAISpawnerDataComponent_GameplayAbilityBase");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayAbilityBase, InitialGameplayEffect) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::InitialGameplayEffect' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayAbilityBase, InitialGameplayAbilitiesSet) == 0x000040, "Member 'UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::InitialGameplayAbilitiesSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GameplayAbilityBase, LooseTagsToApplyToPawn) == 0x000050, "Member 'UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::LooseTagsToApplyToPawn' has a wrong offset!");

class UFortNavigationFilter_Leash final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavigationFilter_Leash">();
	}
	static class UFortNavigationFilter_Leash* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavigationFilter_Leash>();
	}
};
static_assert(alignof(UFortNavigationFilter_Leash) == 0x000008, "Wrong alignment on UFortNavigationFilter_Leash");
static_assert(sizeof(UFortNavigationFilter_Leash) == 0x000048, "Wrong size on UFortNavigationFilter_Leash");

class UFortNavigationFilter_NoSmashing final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavigationFilter_NoSmashing">();
	}
	static class UFortNavigationFilter_NoSmashing* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavigationFilter_NoSmashing>();
	}
};
static_assert(alignof(UFortNavigationFilter_NoSmashing) == 0x000008, "Wrong alignment on UFortNavigationFilter_NoSmashing");
static_assert(sizeof(UFortNavigationFilter_NoSmashing) == 0x000048, "Wrong size on UFortNavigationFilter_NoSmashing");

class UFortAthenaAISpawnerDataComponent_OptimBase : public UFortAthenaAISpawnerDataComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_OptimBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_OptimBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_OptimBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_OptimBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_OptimBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_OptimBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_OptimBase");

class UFortAthenaAISpawnerDataComponent_AIPawnOptim final : public UFortAthenaAISpawnerDataComponent_OptimBase
{
public:
	uint8                                         bRegisterToAIDropper : 1;
	uint8                                         Pad_31[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIPawnOptim">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIPawnOptim* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIPawnOptim>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIPawnOptim) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIPawnOptim");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIPawnOptim) == 0x000038, "Wrong size on UFortAthenaAISpawnerDataComponent_AIPawnOptim");

class UFortNavigationFilter_NoSmashingIncludeLow final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavigationFilter_NoSmashingIncludeLow">();
	}
	static class UFortNavigationFilter_NoSmashingIncludeLow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavigationFilter_NoSmashingIncludeLow>();
	}
};
static_assert(alignof(UFortNavigationFilter_NoSmashingIncludeLow) == 0x000008, "Wrong alignment on UFortNavigationFilter_NoSmashingIncludeLow");
static_assert(sizeof(UFortNavigationFilter_NoSmashingIncludeLow) == 0x000048, "Wrong size on UFortNavigationFilter_NoSmashingIncludeLow");

class UFortNavigationFilter_TetherZone final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavigationFilter_TetherZone">();
	}
	static class UFortNavigationFilter_TetherZone* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavigationFilter_TetherZone>();
	}
};
static_assert(alignof(UFortNavigationFilter_TetherZone) == 0x000008, "Wrong alignment on UFortNavigationFilter_TetherZone");
static_assert(sizeof(UFortNavigationFilter_TetherZone) == 0x000048, "Wrong size on UFortNavigationFilter_TetherZone");

class UAthenaAIService : public UObject
{
public:
	class AFortGameModeAthena*                    CachedGameMode;
	class AFortGameStateAthena*                   CachedGameState;
	uint8                                         Pad_38[0x30];
	class UAthenaAIServiceManager*                AIServiceManager;
	uint8                                         Pad_70[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIService">();
	}
	static class UAthenaAIService* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIService>();
	}
};
static_assert(alignof(UAthenaAIService) == 0x000008, "Wrong alignment on UAthenaAIService");
static_assert(sizeof(UAthenaAIService) == 0x000078, "Wrong size on UAthenaAIService");
static_assert(offsetof(UAthenaAIService, CachedGameMode) == 0x000028, "Member 'UAthenaAIService::CachedGameMode' has a wrong offset!");
static_assert(offsetof(UAthenaAIService, CachedGameState) == 0x000030, "Member 'UAthenaAIService::CachedGameState' has a wrong offset!");
static_assert(offsetof(UAthenaAIService, AIServiceManager) == 0x000068, "Member 'UAthenaAIService::AIServiceManager' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) UAthenaAIServicePlayerBots : public UAthenaAIService
{
public:
	uint8                                         Pad_78[0x8];
	class UFortAthenaAISpawnerDataComponentList*  DefaultAISpawnerDataComponentList;
	class UFortAthenaAISpawnerDataComponent_SpawnParamsBase* DefaultAISpawnComponent;
	TArray<struct FFortServerBotInfo>             DeadBots;
	TArray<struct FFortServerBotInfo>             PlayerBotsRestartLeft;
	struct FVector                                ZiplineOctreeCenter;
	struct FScalableFloat                         ZiplineOctreeRadius;
	struct FScalableFloat                         UseZiplines;
	uint8                                         Pad_118[0x138];
	struct FDebugMinimapData                      DebugMinimapData;
	class FName                                   MarkPlayerBotsAggressiveStencilName;
	class FName                                   MarkPlayerBotsDefensiveStencilName;
	bool                                          bBotHostileToHumanPlayersOnly;
	uint8                                         Pad_409[0x7];
	struct FScalableFloat                         UseAllBattleBusPOIsSquadRatio;
	class UCurveFloat*                            TagQueryWeightChance;
	TSoftObjectPtr<class UEnvQuery>               FindLocationsAroundPOIQuery;
	TArray<struct FBattleBusPOI>                  BattleBusTagQueryPOIList;
	TArray<struct FBattleBusPOI>                  SecondaryBattleBusTagQueryPOIList;
	uint8                                         Pad_488[0x8];
	TArray<struct FNavigationPOI>                 OnGroundTagQueryPOIList;
	struct FConstructionBuildingInfo              ConstructionBuildingInfo[0x6];
	struct FScalableFloat                         UseCustomSupportedItemList;
	class UDataTable*                             BotItemDataTable;
	class FName                                   AugmentsRegistryName;
	uint8                                         Pad_564[0x4];
	class UDataRegistry*                          ItemBehaviorsRegistry;
	TArray<class UBehaviorTree*>                  InjectionSupportingBehaviors;
	struct FScalableFloat                         UseRegionalNameList;
	struct FScalableFloat                         MaxAnonymousBotCount;
	TSoftObjectPtr<class UFortAthenaAIBotNameDataAsset> BotNameDataAsset;
	struct FScalableFloat                         CosmeticVariationCount;
	struct FScalableFloat                         ThankBusDriverProbability;
	struct FScalableFloat                         ThankBusDriverMinTime;
	struct FScalableFloat                         ThankBusDriverMaxTime;
	struct FScalableFloat                         TriggerEndGameBehaviorMinTime;
	struct FScalableFloat                         TriggerEndGameBehaviorMaxTime;
	struct FScalableFloat                         ShowSeasonLevelProbability;
	struct FScalableFloat                         SpectateOthersOnDeath;
	struct FScalableFloat                         MaxNumberOfBotsToSpawnAroundPlayer;
	float                                         MaxAroundBotDistanceToSearchPOIToLand;
	uint8                                         Pad_764[0x4];
	struct FScalableFloat                         BackfillEnabled;
	struct FScalableFloat                         UsePlayerCosmeticForBackfill;
	struct FScalableFloat                         UsePlayerInventoryForBackfill;
	struct FScalableFloat                         OnlyUseBackfillDuringSafezones;
	TSoftClassPtr<class UClass>                   BackfillSpawnerData;
	struct FGameplayTagContainer                  SupportedItemTags;
	TArray<struct FCachedPOIVolumeLocations>      CachedValidPOIVolumeLocations;
	TArray<class ABuildingFoundation*>            CachedBuildingFoundations;
	TArray<struct FFortBotAugmentsDataTableRow>   CachedSupportedAugments;
	uint8                                         Pad_880[0x1C8];
	class AFortPlayerStartWarmup*                 LastTeamPlayerStart;
	uint8                                         Pad_A50[0x8];
	TMap<int32, class UCacheSafeZoneLocation*>    CacheSafeZoneLocationsMap;
	float                                         DeadBotCleanupMinDelay;
	uint8                                         Pad_AAC[0xC];
	TSet<class FString>                           ReservedPlayerNames;
	uint8                                         Pad_B08[0x8];
	TArray<int32>                                 LocationsInSafeZoneFreeIndices;
	uint8                                         Pad_B20[0x50];
	class AFortTeamInfoAthena*                    CurrentFillingTeam;
	uint8                                         Pad_B78[0x58];
	struct FScalableFloat                         BotsUniqueIDUseValidAccountID;
	int32                                         CurrentBotControllerUID;
	uint8                                         Pad_BFC[0x4];
	TArray<class UFortAthenaBeaconComponent*>     BeaconList;
	uint8                                         BitPad_C10_0 : 6;
	uint8                                         bWaitForNavmeshToBeLoaded : 1;
	uint8                                         bDoSpawnBotFlow : 1;
	uint8                                         bDoMapSampling : 1;
	EAthenaGamePhase                              GamePhaseToStartSpawning;
	uint8                                         Pad_C13[0x5];
	TSubclassOf<class UFortAthenaAISpawnerData>   DefaultBotAISpawnerData;
	uint8                                         Pad_C20[0x10];
	TSoftObjectPtr<class UEnvQuery>               EQSMapSampling;
	uint8                                         Pad_C58[0x30];
	struct FScalableFloat                         CanReviveDownedSquad;
	class UAthenaAIPopulationTracker*             CachedAIPopulationTracker;
	TArray<struct FFortServerBotInfo>             PlayerBots;
	TArray<struct FFortServerBotInfo>             NonAthenaParticipantBots;
	uint8                                         Pad_CD8[0x88];
	TSoftObjectPtr<class UDataTable>              MMRSpawnTable;
	TArray<TSoftObjectPtr<class UDataTable>>      MMRSpawnTableOverrides;
	struct FMMRSpawningPlayerBotsRuntimeInfo      CachedMMRSpawningInfo;
	uint8                                         Pad_DD0[0x20];
	struct FScalableFloat                         OverridePOISpreadingSquadCount;
	uint8                                         Pad_E18[0x68];
	struct FScalableFloat                         OnlyPickPOIsInSafeZone;
	struct FVector                                KillVolumeOverlapCheckHalfExtent;
	struct FScalableFloat                         DynamicBotPOIEnabled;
	TSoftObjectPtr<class UEnvQuery>               BotPOIEQS;
	struct FScalableFloat                         BotPOIMinimumWeightForSquadMembers;
	struct FScalableFloat                         BotPOINextPOIDurationSecondByWeight;
	struct FScalableFloat                         BotPOINextPOIMinDuration;
	struct FScalableFloat                         BotPOINextPOIMaxDuration;
	TSoftObjectPtr<class UDataTable>              BotPOIExcludedZonesTable;
	struct FScalableFloat                         JumpOffBusWithDynamicPOIEnabled;
	struct FScalableFloat                         BotPOIJumpMainPOICountMax;
	struct FScalableFloat                         BotPOISquadJumpOnMainPOICountMax;
	struct FScalableFloat                         DenyJumpBusBotPOIByProximityEnabled;
	struct FScalableFloat                         DenyJumpBusBotPOIDistance;
	struct FScalableFloat                         NavigationWithDynamicPOIEnabled;
	struct FScalableFloat                         FailToReachBotPOICountMax;
	struct FScalableFloat                         BotPOIScoringWeightFactor;
	struct FScalableFloat                         BotPOIScoringDistanceFactor;
	struct FScalableFloat                         BotPOIScoringOccupancyFactor;
	struct FScalableFloat                         BotPOIScoringVisitedFactor;
	struct FScalableFloat                         ChanceToUseNextSafeZone;
	int32                                         BotPOIIdCount;
	int32                                         BotPOISquadJumpedOnMainPOICount;
	TArray<int32>                                 StartupPOIPendingEQSRequestIDList;
	TArray<struct FBotPOI>                        BotPOIList;
	TArray<struct FBotPOI>                        CachedMainJumpBotPOIList;
	TArray<struct FBotPOI>                        CachedSecondaryJumpBotPOIList;
	TArray<struct FBotPOIExcludedZone>            CachedBotPOIExcludedZonesList;
	bool                                          bIsBotPOIJumpListSplit;
	bool                                          bIsExcludedZoneGenerated;
	uint8                                         Pad_1212[0x6];
	class AFortAIBotPOIDebugActor*                BotPOIDebugDebugActor;
	bool                                          bCheatBotPOIDebugMiniMapEnabled;
	uint8                                         Pad_1221[0x7];
	class AFortAIBotDebugActor*                   BotDebugDebugActor;
	bool                                          bCheatBotDebugMiniMapEnabled;
	uint8                                         Pad_1231[0x7];

public:
	void AddPOIVolume(class AFortPoiVolume* POIVolume, EAthenaAIServicePOIList POIList);
	int32 FetchNextCustomBotCosmeticVariantID(const class AFortPlayerPawnAthena* BotPawn);
	bool IsWeaponSupported(class AFortWeapon* FortWeapon);
	void JoinTeam(const class AController* SourceTeamController, class AController* DestinationTeamController);
	void KillBots(bool bKillPlayers, bool bKillNPCs, uint8 TeamIndex, class AActor* BotOwner);
	void OnAgentGameOver(class AFortAthenaAIBotController* AIBotController, class AFortPawn* Pawn, class AController* Instigator);
	void OnAIPawnSpawned(class AController* SpawnedController, bool bIsABot, class AFortPawn* FortAIPawn, class AFortPlayerPawn* PlayerPawn);
	void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
	void OnPlaylistDataReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnSafeZoneUpdated();
	void OnServerGameMemberRemoved(uint8 InSquadId, uint8 InTeamIndex, class AFortPlayerStateAthena* ChangedPS);
	class APawn* SpawnAI(const struct FVector& InSpawnLocation, const struct FRotator& InSpawnRotation, const class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIServicePlayerBots">();
	}
	static class UAthenaAIServicePlayerBots* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIServicePlayerBots>();
	}
};
#pragma pack(pop)
static_assert(alignof(UAthenaAIServicePlayerBots) == 0x000010, "Wrong alignment on UAthenaAIServicePlayerBots");
static_assert(sizeof(UAthenaAIServicePlayerBots) == 0x001240, "Wrong size on UAthenaAIServicePlayerBots");
static_assert(offsetof(UAthenaAIServicePlayerBots, DefaultAISpawnerDataComponentList) == 0x000080, "Member 'UAthenaAIServicePlayerBots::DefaultAISpawnerDataComponentList' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, DefaultAISpawnComponent) == 0x000088, "Member 'UAthenaAIServicePlayerBots::DefaultAISpawnComponent' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, DeadBots) == 0x000090, "Member 'UAthenaAIServicePlayerBots::DeadBots' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, PlayerBotsRestartLeft) == 0x0000A0, "Member 'UAthenaAIServicePlayerBots::PlayerBotsRestartLeft' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, ZiplineOctreeCenter) == 0x0000B0, "Member 'UAthenaAIServicePlayerBots::ZiplineOctreeCenter' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, ZiplineOctreeRadius) == 0x0000C8, "Member 'UAthenaAIServicePlayerBots::ZiplineOctreeRadius' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, UseZiplines) == 0x0000F0, "Member 'UAthenaAIServicePlayerBots::UseZiplines' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, DebugMinimapData) == 0x000250, "Member 'UAthenaAIServicePlayerBots::DebugMinimapData' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, MarkPlayerBotsAggressiveStencilName) == 0x000400, "Member 'UAthenaAIServicePlayerBots::MarkPlayerBotsAggressiveStencilName' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, MarkPlayerBotsDefensiveStencilName) == 0x000404, "Member 'UAthenaAIServicePlayerBots::MarkPlayerBotsDefensiveStencilName' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, bBotHostileToHumanPlayersOnly) == 0x000408, "Member 'UAthenaAIServicePlayerBots::bBotHostileToHumanPlayersOnly' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, UseAllBattleBusPOIsSquadRatio) == 0x000410, "Member 'UAthenaAIServicePlayerBots::UseAllBattleBusPOIsSquadRatio' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, TagQueryWeightChance) == 0x000438, "Member 'UAthenaAIServicePlayerBots::TagQueryWeightChance' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, FindLocationsAroundPOIQuery) == 0x000440, "Member 'UAthenaAIServicePlayerBots::FindLocationsAroundPOIQuery' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BattleBusTagQueryPOIList) == 0x000468, "Member 'UAthenaAIServicePlayerBots::BattleBusTagQueryPOIList' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, SecondaryBattleBusTagQueryPOIList) == 0x000478, "Member 'UAthenaAIServicePlayerBots::SecondaryBattleBusTagQueryPOIList' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, OnGroundTagQueryPOIList) == 0x000490, "Member 'UAthenaAIServicePlayerBots::OnGroundTagQueryPOIList' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, ConstructionBuildingInfo) == 0x0004A0, "Member 'UAthenaAIServicePlayerBots::ConstructionBuildingInfo' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, UseCustomSupportedItemList) == 0x000530, "Member 'UAthenaAIServicePlayerBots::UseCustomSupportedItemList' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotItemDataTable) == 0x000558, "Member 'UAthenaAIServicePlayerBots::BotItemDataTable' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, AugmentsRegistryName) == 0x000560, "Member 'UAthenaAIServicePlayerBots::AugmentsRegistryName' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, ItemBehaviorsRegistry) == 0x000568, "Member 'UAthenaAIServicePlayerBots::ItemBehaviorsRegistry' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, InjectionSupportingBehaviors) == 0x000570, "Member 'UAthenaAIServicePlayerBots::InjectionSupportingBehaviors' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, UseRegionalNameList) == 0x000580, "Member 'UAthenaAIServicePlayerBots::UseRegionalNameList' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, MaxAnonymousBotCount) == 0x0005A8, "Member 'UAthenaAIServicePlayerBots::MaxAnonymousBotCount' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotNameDataAsset) == 0x0005D0, "Member 'UAthenaAIServicePlayerBots::BotNameDataAsset' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, CosmeticVariationCount) == 0x0005F8, "Member 'UAthenaAIServicePlayerBots::CosmeticVariationCount' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, ThankBusDriverProbability) == 0x000620, "Member 'UAthenaAIServicePlayerBots::ThankBusDriverProbability' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, ThankBusDriverMinTime) == 0x000648, "Member 'UAthenaAIServicePlayerBots::ThankBusDriverMinTime' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, ThankBusDriverMaxTime) == 0x000670, "Member 'UAthenaAIServicePlayerBots::ThankBusDriverMaxTime' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, TriggerEndGameBehaviorMinTime) == 0x000698, "Member 'UAthenaAIServicePlayerBots::TriggerEndGameBehaviorMinTime' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, TriggerEndGameBehaviorMaxTime) == 0x0006C0, "Member 'UAthenaAIServicePlayerBots::TriggerEndGameBehaviorMaxTime' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, ShowSeasonLevelProbability) == 0x0006E8, "Member 'UAthenaAIServicePlayerBots::ShowSeasonLevelProbability' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, SpectateOthersOnDeath) == 0x000710, "Member 'UAthenaAIServicePlayerBots::SpectateOthersOnDeath' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, MaxNumberOfBotsToSpawnAroundPlayer) == 0x000738, "Member 'UAthenaAIServicePlayerBots::MaxNumberOfBotsToSpawnAroundPlayer' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, MaxAroundBotDistanceToSearchPOIToLand) == 0x000760, "Member 'UAthenaAIServicePlayerBots::MaxAroundBotDistanceToSearchPOIToLand' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BackfillEnabled) == 0x000768, "Member 'UAthenaAIServicePlayerBots::BackfillEnabled' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, UsePlayerCosmeticForBackfill) == 0x000790, "Member 'UAthenaAIServicePlayerBots::UsePlayerCosmeticForBackfill' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, UsePlayerInventoryForBackfill) == 0x0007B8, "Member 'UAthenaAIServicePlayerBots::UsePlayerInventoryForBackfill' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, OnlyUseBackfillDuringSafezones) == 0x0007E0, "Member 'UAthenaAIServicePlayerBots::OnlyUseBackfillDuringSafezones' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BackfillSpawnerData) == 0x000808, "Member 'UAthenaAIServicePlayerBots::BackfillSpawnerData' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, SupportedItemTags) == 0x000830, "Member 'UAthenaAIServicePlayerBots::SupportedItemTags' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, CachedValidPOIVolumeLocations) == 0x000850, "Member 'UAthenaAIServicePlayerBots::CachedValidPOIVolumeLocations' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, CachedBuildingFoundations) == 0x000860, "Member 'UAthenaAIServicePlayerBots::CachedBuildingFoundations' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, CachedSupportedAugments) == 0x000870, "Member 'UAthenaAIServicePlayerBots::CachedSupportedAugments' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, LastTeamPlayerStart) == 0x000A48, "Member 'UAthenaAIServicePlayerBots::LastTeamPlayerStart' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, CacheSafeZoneLocationsMap) == 0x000A58, "Member 'UAthenaAIServicePlayerBots::CacheSafeZoneLocationsMap' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, DeadBotCleanupMinDelay) == 0x000AA8, "Member 'UAthenaAIServicePlayerBots::DeadBotCleanupMinDelay' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, ReservedPlayerNames) == 0x000AB8, "Member 'UAthenaAIServicePlayerBots::ReservedPlayerNames' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, LocationsInSafeZoneFreeIndices) == 0x000B10, "Member 'UAthenaAIServicePlayerBots::LocationsInSafeZoneFreeIndices' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, CurrentFillingTeam) == 0x000B70, "Member 'UAthenaAIServicePlayerBots::CurrentFillingTeam' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotsUniqueIDUseValidAccountID) == 0x000BD0, "Member 'UAthenaAIServicePlayerBots::BotsUniqueIDUseValidAccountID' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, CurrentBotControllerUID) == 0x000BF8, "Member 'UAthenaAIServicePlayerBots::CurrentBotControllerUID' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BeaconList) == 0x000C00, "Member 'UAthenaAIServicePlayerBots::BeaconList' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, GamePhaseToStartSpawning) == 0x000C12, "Member 'UAthenaAIServicePlayerBots::GamePhaseToStartSpawning' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, DefaultBotAISpawnerData) == 0x000C18, "Member 'UAthenaAIServicePlayerBots::DefaultBotAISpawnerData' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, EQSMapSampling) == 0x000C30, "Member 'UAthenaAIServicePlayerBots::EQSMapSampling' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, CanReviveDownedSquad) == 0x000C88, "Member 'UAthenaAIServicePlayerBots::CanReviveDownedSquad' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, CachedAIPopulationTracker) == 0x000CB0, "Member 'UAthenaAIServicePlayerBots::CachedAIPopulationTracker' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, PlayerBots) == 0x000CB8, "Member 'UAthenaAIServicePlayerBots::PlayerBots' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, NonAthenaParticipantBots) == 0x000CC8, "Member 'UAthenaAIServicePlayerBots::NonAthenaParticipantBots' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, MMRSpawnTable) == 0x000D60, "Member 'UAthenaAIServicePlayerBots::MMRSpawnTable' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, MMRSpawnTableOverrides) == 0x000D88, "Member 'UAthenaAIServicePlayerBots::MMRSpawnTableOverrides' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, CachedMMRSpawningInfo) == 0x000D98, "Member 'UAthenaAIServicePlayerBots::CachedMMRSpawningInfo' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, OverridePOISpreadingSquadCount) == 0x000DF0, "Member 'UAthenaAIServicePlayerBots::OverridePOISpreadingSquadCount' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, OnlyPickPOIsInSafeZone) == 0x000E80, "Member 'UAthenaAIServicePlayerBots::OnlyPickPOIsInSafeZone' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, KillVolumeOverlapCheckHalfExtent) == 0x000EA8, "Member 'UAthenaAIServicePlayerBots::KillVolumeOverlapCheckHalfExtent' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, DynamicBotPOIEnabled) == 0x000EC0, "Member 'UAthenaAIServicePlayerBots::DynamicBotPOIEnabled' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOIEQS) == 0x000EE8, "Member 'UAthenaAIServicePlayerBots::BotPOIEQS' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOIMinimumWeightForSquadMembers) == 0x000F10, "Member 'UAthenaAIServicePlayerBots::BotPOIMinimumWeightForSquadMembers' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOINextPOIDurationSecondByWeight) == 0x000F38, "Member 'UAthenaAIServicePlayerBots::BotPOINextPOIDurationSecondByWeight' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOINextPOIMinDuration) == 0x000F60, "Member 'UAthenaAIServicePlayerBots::BotPOINextPOIMinDuration' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOINextPOIMaxDuration) == 0x000F88, "Member 'UAthenaAIServicePlayerBots::BotPOINextPOIMaxDuration' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOIExcludedZonesTable) == 0x000FB0, "Member 'UAthenaAIServicePlayerBots::BotPOIExcludedZonesTable' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, JumpOffBusWithDynamicPOIEnabled) == 0x000FD8, "Member 'UAthenaAIServicePlayerBots::JumpOffBusWithDynamicPOIEnabled' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOIJumpMainPOICountMax) == 0x001000, "Member 'UAthenaAIServicePlayerBots::BotPOIJumpMainPOICountMax' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOISquadJumpOnMainPOICountMax) == 0x001028, "Member 'UAthenaAIServicePlayerBots::BotPOISquadJumpOnMainPOICountMax' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, DenyJumpBusBotPOIByProximityEnabled) == 0x001050, "Member 'UAthenaAIServicePlayerBots::DenyJumpBusBotPOIByProximityEnabled' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, DenyJumpBusBotPOIDistance) == 0x001078, "Member 'UAthenaAIServicePlayerBots::DenyJumpBusBotPOIDistance' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, NavigationWithDynamicPOIEnabled) == 0x0010A0, "Member 'UAthenaAIServicePlayerBots::NavigationWithDynamicPOIEnabled' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, FailToReachBotPOICountMax) == 0x0010C8, "Member 'UAthenaAIServicePlayerBots::FailToReachBotPOICountMax' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOIScoringWeightFactor) == 0x0010F0, "Member 'UAthenaAIServicePlayerBots::BotPOIScoringWeightFactor' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOIScoringDistanceFactor) == 0x001118, "Member 'UAthenaAIServicePlayerBots::BotPOIScoringDistanceFactor' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOIScoringOccupancyFactor) == 0x001140, "Member 'UAthenaAIServicePlayerBots::BotPOIScoringOccupancyFactor' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOIScoringVisitedFactor) == 0x001168, "Member 'UAthenaAIServicePlayerBots::BotPOIScoringVisitedFactor' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, ChanceToUseNextSafeZone) == 0x001190, "Member 'UAthenaAIServicePlayerBots::ChanceToUseNextSafeZone' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOIIdCount) == 0x0011B8, "Member 'UAthenaAIServicePlayerBots::BotPOIIdCount' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOISquadJumpedOnMainPOICount) == 0x0011BC, "Member 'UAthenaAIServicePlayerBots::BotPOISquadJumpedOnMainPOICount' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, StartupPOIPendingEQSRequestIDList) == 0x0011C0, "Member 'UAthenaAIServicePlayerBots::StartupPOIPendingEQSRequestIDList' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOIList) == 0x0011D0, "Member 'UAthenaAIServicePlayerBots::BotPOIList' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, CachedMainJumpBotPOIList) == 0x0011E0, "Member 'UAthenaAIServicePlayerBots::CachedMainJumpBotPOIList' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, CachedSecondaryJumpBotPOIList) == 0x0011F0, "Member 'UAthenaAIServicePlayerBots::CachedSecondaryJumpBotPOIList' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, CachedBotPOIExcludedZonesList) == 0x001200, "Member 'UAthenaAIServicePlayerBots::CachedBotPOIExcludedZonesList' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, bIsBotPOIJumpListSplit) == 0x001210, "Member 'UAthenaAIServicePlayerBots::bIsBotPOIJumpListSplit' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, bIsExcludedZoneGenerated) == 0x001211, "Member 'UAthenaAIServicePlayerBots::bIsExcludedZoneGenerated' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotPOIDebugDebugActor) == 0x001218, "Member 'UAthenaAIServicePlayerBots::BotPOIDebugDebugActor' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, bCheatBotPOIDebugMiniMapEnabled) == 0x001220, "Member 'UAthenaAIServicePlayerBots::bCheatBotPOIDebugMiniMapEnabled' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, BotDebugDebugActor) == 0x001228, "Member 'UAthenaAIServicePlayerBots::BotDebugDebugActor' has a wrong offset!");
static_assert(offsetof(UAthenaAIServicePlayerBots, bCheatBotDebugMiniMapEnabled) == 0x001230, "Member 'UAthenaAIServicePlayerBots::bCheatBotDebugMiniMapEnabled' has a wrong offset!");

class AFortNavigationGraph final : public ANavigationData
{
public:
	uint8                                         Pad_498[0x158];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavigationGraph">();
	}
	static class AFortNavigationGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortNavigationGraph>();
	}
};
static_assert(alignof(AFortNavigationGraph) == 0x000008, "Wrong alignment on AFortNavigationGraph");
static_assert(sizeof(AFortNavigationGraph) == 0x0005F0, "Wrong size on AFortNavigationGraph");

class AFortNavModifierVolume final : public ANavModifierVolume
{
public:
	TArray<TSubclassOf<class ANavigationData>>    EnableOnlyForNavmeshClasses;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavModifierVolume">();
	}
	static class AFortNavModifierVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortNavModifierVolume>();
	}
};
static_assert(alignof(AFortNavModifierVolume) == 0x000008, "Wrong alignment on AFortNavModifierVolume");
static_assert(sizeof(AFortNavModifierVolume) == 0x0002E8, "Wrong size on AFortNavModifierVolume");
static_assert(offsetof(AFortNavModifierVolume, EnableOnlyForNavmeshClasses) == 0x0002D8, "Member 'AFortNavModifierVolume::EnableOnlyForNavmeshClasses' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_GroupBase final : public UFortAthenaAISpawnerDataComponent
{
public:
	struct FScalableFloat                         EnableGroupComponent;
	struct FScalableFloat                         CanBeGroupLeader;
	struct FScalableFloat                         EnableFormationComponent;
	TArray<struct FVector>                        FormationSlots;
	struct FScalableFloat                         MaxDistanceFromSlotToSprint;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_GroupBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_GroupBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_GroupBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_GroupBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_GroupBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_GroupBase) == 0x0000E0, "Wrong size on UFortAthenaAISpawnerDataComponent_GroupBase");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GroupBase, EnableGroupComponent) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_GroupBase::EnableGroupComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GroupBase, CanBeGroupLeader) == 0x000058, "Member 'UFortAthenaAISpawnerDataComponent_GroupBase::CanBeGroupLeader' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GroupBase, EnableFormationComponent) == 0x000080, "Member 'UFortAthenaAISpawnerDataComponent_GroupBase::EnableFormationComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GroupBase, FormationSlots) == 0x0000A8, "Member 'UFortAthenaAISpawnerDataComponent_GroupBase::FormationSlots' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_GroupBase, MaxDistanceFromSlotToSprint) == 0x0000B8, "Member 'UFortAthenaAISpawnerDataComponent_GroupBase::MaxDistanceFromSlotToSprint' has a wrong offset!");

class IFortNavPathRendererInfoInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavPathRendererInfoInterface">();
	}
	static class IFortNavPathRendererInfoInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortNavPathRendererInfoInterface>();
	}
};
static_assert(alignof(IFortNavPathRendererInfoInterface) == 0x000008, "Wrong alignment on IFortNavPathRendererInfoInterface");
static_assert(sizeof(IFortNavPathRendererInfoInterface) == 0x000028, "Wrong size on IFortNavPathRendererInfoInterface");

class UFortNavPathRendererComponent final : public UActorComponent
{
public:
	class UNiagaraSystem*                         PathVFX;
	struct FVector                                PathVFXOffset;
	TArray<struct FColor>                         PathColors;
	class UNiagaraComponent*                      PathVFXComponent;
	TArray<struct FPathRendererInfo>              PathRendererList;
	TArray<struct FVector4f>                      AllPathsPoints;
	TArray<struct FVector>                        NavPathPoints;
	TArray<int32>                                 NavPathPointsStatus;
	EPatrollingMode                               PathMode;
	uint8                                         Pad_119[0x3];
	int32                                         CurrentPathColorIndex;

public:
	void DeactivateFX();
	void OnRep_ColorIndexUpdated();
	void OnRep_PathModeUpdated();
	void OnRep_PathPointsUpdated();
	void UpdatePathsVisualOnClient();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavPathRendererComponent">();
	}
	static class UFortNavPathRendererComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavPathRendererComponent>();
	}
};
static_assert(alignof(UFortNavPathRendererComponent) == 0x000008, "Wrong alignment on UFortNavPathRendererComponent");
static_assert(sizeof(UFortNavPathRendererComponent) == 0x000120, "Wrong size on UFortNavPathRendererComponent");
static_assert(offsetof(UFortNavPathRendererComponent, PathVFX) == 0x0000A0, "Member 'UFortNavPathRendererComponent::PathVFX' has a wrong offset!");
static_assert(offsetof(UFortNavPathRendererComponent, PathVFXOffset) == 0x0000A8, "Member 'UFortNavPathRendererComponent::PathVFXOffset' has a wrong offset!");
static_assert(offsetof(UFortNavPathRendererComponent, PathColors) == 0x0000C0, "Member 'UFortNavPathRendererComponent::PathColors' has a wrong offset!");
static_assert(offsetof(UFortNavPathRendererComponent, PathVFXComponent) == 0x0000D0, "Member 'UFortNavPathRendererComponent::PathVFXComponent' has a wrong offset!");
static_assert(offsetof(UFortNavPathRendererComponent, PathRendererList) == 0x0000D8, "Member 'UFortNavPathRendererComponent::PathRendererList' has a wrong offset!");
static_assert(offsetof(UFortNavPathRendererComponent, AllPathsPoints) == 0x0000E8, "Member 'UFortNavPathRendererComponent::AllPathsPoints' has a wrong offset!");
static_assert(offsetof(UFortNavPathRendererComponent, NavPathPoints) == 0x0000F8, "Member 'UFortNavPathRendererComponent::NavPathPoints' has a wrong offset!");
static_assert(offsetof(UFortNavPathRendererComponent, NavPathPointsStatus) == 0x000108, "Member 'UFortNavPathRendererComponent::NavPathPointsStatus' has a wrong offset!");
static_assert(offsetof(UFortNavPathRendererComponent, PathMode) == 0x000118, "Member 'UFortNavPathRendererComponent::PathMode' has a wrong offset!");
static_assert(offsetof(UFortNavPathRendererComponent, CurrentPathColorIndex) == 0x00011C, "Member 'UFortNavPathRendererComponent::CurrentPathColorIndex' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_SkillsetBase : public UFortAthenaAISpawnerDataComponent
{
public:
	float GetSkill();
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> GetSkillSets();
	bool ShouldUseMatchMMRToOverrideSkillLevel();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_SkillsetBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_SkillsetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_SkillsetBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_SkillsetBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_SkillsetBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_SkillsetBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_SkillsetBase");

class UFortAthenaAISpawnerDataComponent_AIBotSkillset : public UFortAthenaAISpawnerDataComponent_SkillsetBase
{
public:
	TSubclassOf<class UFortAthenaAIBotAimingSkillSet> AimingSkillSet;
	TSubclassOf<class UFortAthenaAIBotAttackingSkillSet> AttackingSkillSet;
	TSubclassOf<class UFortAthenaAIBotBuildingSkillSet> BuildingSkillSet;
	TSubclassOf<class UFortAthenaAIBotDBNOSkillSet> DBNOSkillSet;
	TSubclassOf<class UFortAthenaAIBotEmoteSkillSet> EmoteSkillSet;
	TSubclassOf<class UFortAthenaAIBotEvasiveManeuversSkillSet> EvasiveManeuversSkillSet;
	TSubclassOf<class UFortAthenaAIBotHarvestSkillSet> HarvestSkillSet;
	TSubclassOf<class UFortAthenaAIBotHealingSkillSet> HealingSkillSet;
	TSubclassOf<class UFortAthenaAIBotInventorySkillSet> InventorySkillSet;
	TSubclassOf<class UFortAthenaAIBotLootingSkillSet> LootingSkillSet;
	TSubclassOf<class UFortAthenaAIBotMovementSkillSet> MovementSkillSet;
	TSubclassOf<class UFortAthenaAIBotPerceptionSkillSet> PerceptionSkillSet;
	TSubclassOf<class UFortAthenaAIBotPlayStyleSkillSet> PlayStyleSkillSet;
	TSubclassOf<class UFortAthenaAIBotPropagateAwarenessSkillSet> PropagateAwarenessSkillSet;
	TSubclassOf<class UFortAthenaAIBotRangeAttackSkillSet> RangeAttackSkillSet;
	TSubclassOf<class UFortAthenaAIBotReviveSkillSet> ReviveSkillSet;
	TSubclassOf<class UFortAthenaAIBotUnstuckSkillSet> UnstuckSkillSet;
	TSubclassOf<class UFortAthenaAIBotVehicleSkillSet> VehicleSkillSet;
	uint8                                         bUseMatchMMRToOverrideSkillLevel : 1;
	uint8                                         Pad_C1[0x7];
	TSoftObjectPtr<class UDataTable>              OverrideSkillLevelMMRTable;
	struct FScalableFloat                         Skill;
	float                                         SkillOverride;
	uint8                                         Pad_11C[0x4];

public:
	void SetSkill(const float InSKill);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIBotSkillset">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIBotSkillset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIBotSkillset>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIBotSkillset) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIBotSkillset");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIBotSkillset) == 0x000120, "Wrong size on UFortAthenaAISpawnerDataComponent_AIBotSkillset");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, AimingSkillSet) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::AimingSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, AttackingSkillSet) == 0x000038, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::AttackingSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, BuildingSkillSet) == 0x000040, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::BuildingSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, DBNOSkillSet) == 0x000048, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::DBNOSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, EmoteSkillSet) == 0x000050, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::EmoteSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, EvasiveManeuversSkillSet) == 0x000058, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::EvasiveManeuversSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, HarvestSkillSet) == 0x000060, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::HarvestSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, HealingSkillSet) == 0x000068, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::HealingSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, InventorySkillSet) == 0x000070, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::InventorySkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, LootingSkillSet) == 0x000078, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::LootingSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, MovementSkillSet) == 0x000080, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::MovementSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, PerceptionSkillSet) == 0x000088, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::PerceptionSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, PlayStyleSkillSet) == 0x000090, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::PlayStyleSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, PropagateAwarenessSkillSet) == 0x000098, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::PropagateAwarenessSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, RangeAttackSkillSet) == 0x0000A0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::RangeAttackSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, ReviveSkillSet) == 0x0000A8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::ReviveSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, UnstuckSkillSet) == 0x0000B0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::UnstuckSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, VehicleSkillSet) == 0x0000B8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::VehicleSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, OverrideSkillLevelMMRTable) == 0x0000C8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::OverrideSkillLevelMMRTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, Skill) == 0x0000F0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::Skill' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotSkillset, SkillOverride) == 0x000118, "Member 'UFortAthenaAISpawnerDataComponent_AIBotSkillset::SkillOverride' has a wrong offset!");

class AJLargeNavMesh final : public AAthenaNavMesh
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"JLargeNavMesh">();
	}
	static class AJLargeNavMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<AJLargeNavMesh>();
	}
};
static_assert(alignof(AJLargeNavMesh) == 0x000008, "Wrong alignment on AJLargeNavMesh");
static_assert(sizeof(AJLargeNavMesh) == 0x0006A0, "Wrong size on AJLargeNavMesh");

class AJMediumNavMesh final : public AAthenaNavMesh
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"JMediumNavMesh">();
	}
	static class AJMediumNavMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<AJMediumNavMesh>();
	}
};
static_assert(alignof(AJMediumNavMesh) == 0x000008, "Wrong alignment on AJMediumNavMesh");
static_assert(sizeof(AJMediumNavMesh) == 0x0006A0, "Wrong size on AJMediumNavMesh");

class UFortAthenaAISpawnerDataComponent_ScriptBase : public UFortAthenaAISpawnerDataComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_ScriptBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_ScriptBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_ScriptBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_ScriptBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_ScriptBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_ScriptBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_ScriptBase");

class AJSmallNavMesh final : public AAthenaNavMesh
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"JSmallNavMesh">();
	}
	static class AJSmallNavMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<AJSmallNavMesh>();
	}
};
static_assert(alignof(AJSmallNavMesh) == 0x000008, "Wrong alignment on AJSmallNavMesh");
static_assert(sizeof(AJSmallNavMesh) == 0x0006A0, "Wrong size on AJSmallNavMesh");

class UFortInescapableZoneTracker final : public UObject
{
public:
	class AFortNavigationGraph*                   NavGraph;
	uint8                                         Pad_30[0x60];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortInescapableZoneTracker">();
	}
	static class UFortInescapableZoneTracker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortInescapableZoneTracker>();
	}
};
static_assert(alignof(UFortInescapableZoneTracker) == 0x000008, "Wrong alignment on UFortInescapableZoneTracker");
static_assert(sizeof(UFortInescapableZoneTracker) == 0x000090, "Wrong size on UFortInescapableZoneTracker");
static_assert(offsetof(UFortInescapableZoneTracker, NavGraph) == 0x000028, "Member 'UFortInescapableZoneTracker::NavGraph' has a wrong offset!");

class UFortAthenaAIRuntimeParameters : public UObject
{
public:
	int32                                         ExtractedLevel;
	uint8                                         Pad_2C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters">();
	}
	static class UFortAthenaAIRuntimeParameters* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters");
static_assert(sizeof(UFortAthenaAIRuntimeParameters) == 0x000030, "Wrong size on UFortAthenaAIRuntimeParameters");
static_assert(offsetof(UFortAthenaAIRuntimeParameters, ExtractedLevel) == 0x000028, "Member 'UFortAthenaAIRuntimeParameters::ExtractedLevel' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_Leash final : public UFortAthenaAIRuntimeParameters
{
public:
	struct FVector                                LeashLocation;
	float                                         LeashInnerRadius;
	float                                         LeashOuterRadius;
	ELeashReturnLocationMode                      LeashReturnLocationMode;
	bool                                          bCheckForReachabilityOnRandomLocationGeneration;
	uint8                                         Pad_52[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_Leash">();
	}
	static class UFortAthenaAIRuntimeParameters_Leash* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_Leash>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_Leash) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_Leash");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_Leash) == 0x000058, "Wrong size on UFortAthenaAIRuntimeParameters_Leash");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Leash, LeashLocation) == 0x000030, "Member 'UFortAthenaAIRuntimeParameters_Leash::LeashLocation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Leash, LeashInnerRadius) == 0x000048, "Member 'UFortAthenaAIRuntimeParameters_Leash::LeashInnerRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Leash, LeashOuterRadius) == 0x00004C, "Member 'UFortAthenaAIRuntimeParameters_Leash::LeashOuterRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Leash, LeashReturnLocationMode) == 0x000050, "Member 'UFortAthenaAIRuntimeParameters_Leash::LeashReturnLocationMode' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Leash, bCheckForReachabilityOnRandomLocationGeneration) == 0x000051, "Member 'UFortAthenaAIRuntimeParameters_Leash::bCheckForReachabilityOnRandomLocationGeneration' has a wrong offset!");

class UFortPathCostEstimator final : public UObject
{
public:
	TWeakObjectPtr<class AActor>                  GoalActorWeak;
	class AFortNavigationGraph*                   NavGraph;
	uint8                                         Pad_38[0x70];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPathCostEstimator">();
	}
	static class UFortPathCostEstimator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPathCostEstimator>();
	}
};
static_assert(alignof(UFortPathCostEstimator) == 0x000008, "Wrong alignment on UFortPathCostEstimator");
static_assert(sizeof(UFortPathCostEstimator) == 0x0000A8, "Wrong size on UFortPathCostEstimator");
static_assert(offsetof(UFortPathCostEstimator, GoalActorWeak) == 0x000028, "Member 'UFortPathCostEstimator::GoalActorWeak' has a wrong offset!");
static_assert(offsetof(UFortPathCostEstimator, NavGraph) == 0x000030, "Member 'UFortPathCostEstimator::NavGraph' has a wrong offset!");

class ANavGraphDebugActor final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavGraphDebugActor">();
	}
	static class ANavGraphDebugActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavGraphDebugActor>();
	}
};
static_assert(alignof(ANavGraphDebugActor) == 0x000008, "Wrong alignment on ANavGraphDebugActor");
static_assert(sizeof(ANavGraphDebugActor) == 0x000288, "Wrong size on ANavGraphDebugActor");

class UAthenaAISense_Hearing final : public UAISense_Hearing
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAISense_Hearing">();
	}
	static class UAthenaAISense_Hearing* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAISense_Hearing>();
	}
};
static_assert(alignof(UAthenaAISense_Hearing) == 0x000008, "Wrong alignment on UAthenaAISense_Hearing");
static_assert(sizeof(UAthenaAISense_Hearing) == 0x0000E8, "Wrong size on UAthenaAISense_Hearing");

class UFortAIControllerPerksComponent final : public TObjectBasedCycleFixup<class UFortControllerComponent, 0x0080, 0x08>
{
public:
	uint8                                         Pad_A8[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIControllerPerksComponent">();
	}
	static class UFortAIControllerPerksComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIControllerPerksComponent>();
	}
};
static_assert(alignof(UFortAIControllerPerksComponent) == 0x000008, "Wrong alignment on UFortAIControllerPerksComponent");
static_assert(sizeof(UFortAIControllerPerksComponent) == 0x0000C0, "Wrong size on UFortAIControllerPerksComponent");

class UFortAthenaAISpawnerDataComponent_CosmeticBase : public UFortAthenaAISpawnerDataComponent
{
public:
	void GetFallbackTag(struct FGameplayTag* OutFallbackTag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_CosmeticBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_CosmeticBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_CosmeticBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_CosmeticBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_CosmeticBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_CosmeticBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_CosmeticBase");

class UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase : public UFortAthenaAISpawnerDataComponent_CosmeticBase
{
public:
	TArray<class UAthenaCosmeticItemDefinition*>  CosmeticOverrideList;

public:
	void AddCosmeticOverrideItemDef(const class UAthenaCosmeticItemDefinition* InCosmeticItemToPreview);
	void GetAllLoadouts(TArray<struct FFortAthenaLoadout>* OutLoadouts);
	void GetAnimBPOverride(TSubclassOf<class UAnimInstance>* OutAnimBPOverride, int32* OutPriority);
	void GetCustomCharacterParts(TArray<class UCustomCharacterPart*>* OutCustomCharacterParts);
	void GetDances(TArray<class UAthenaDanceItemDefinition*>* Dances, const class AFortAthenaAIBotController* BotController);
	void GetLoadout(struct FFortAthenaLoadout* OutLoadout);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIBotCosmeticBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase) == 0x000040, "Wrong size on UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase, CosmeticOverrideList) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::CosmeticOverrideList' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_CosmeticLoadout final : public UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase
{
public:
	TStructCycleFixup<struct FFortAthenaLoadout, 0x0178, 0x08> CosmeticLoadout;
	TArray<struct FFortAthenaAIWeightedCosmeticLoadout> WeightedLoadouts;
	TArray<class UCustomCharacterPart*>           CustomCharacterParts;
	bool                                          bCanShowDefaultSkin;
	uint8                                         Pad_1D9[0x3];
	struct FGameplayTag                           FallbackTag;
	TSubclassOf<class UAnimInstance>              AnimBPOverride;
	int32                                         AnimBPOverridePriority;
	uint8                                         Pad_1EC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_CosmeticLoadout">();
	}
	static class UFortAthenaAISpawnerDataComponent_CosmeticLoadout* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_CosmeticLoadout>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_CosmeticLoadout) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_CosmeticLoadout");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_CosmeticLoadout) == 0x0001F0, "Wrong size on UFortAthenaAISpawnerDataComponent_CosmeticLoadout");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CosmeticLoadout, CosmeticLoadout) == 0x000040, "Member 'UFortAthenaAISpawnerDataComponent_CosmeticLoadout::CosmeticLoadout' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CosmeticLoadout, WeightedLoadouts) == 0x0001B8, "Member 'UFortAthenaAISpawnerDataComponent_CosmeticLoadout::WeightedLoadouts' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CosmeticLoadout, CustomCharacterParts) == 0x0001C8, "Member 'UFortAthenaAISpawnerDataComponent_CosmeticLoadout::CustomCharacterParts' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CosmeticLoadout, bCanShowDefaultSkin) == 0x0001D8, "Member 'UFortAthenaAISpawnerDataComponent_CosmeticLoadout::bCanShowDefaultSkin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CosmeticLoadout, FallbackTag) == 0x0001DC, "Member 'UFortAthenaAISpawnerDataComponent_CosmeticLoadout::FallbackTag' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CosmeticLoadout, AnimBPOverride) == 0x0001E0, "Member 'UFortAthenaAISpawnerDataComponent_CosmeticLoadout::AnimBPOverride' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CosmeticLoadout, AnimBPOverridePriority) == 0x0001E8, "Member 'UFortAthenaAISpawnerDataComponent_CosmeticLoadout::AnimBPOverridePriority' has a wrong offset!");

class UFortAIPerkBase : public UObject
{
public:
	struct FScalableFloat                         CooldownDuration;
	struct FScalableFloat                         CooldownDurationRandomDeviation;
	struct FScalableFloat                         ActivationCountBeforeCooldown;
	struct FScalableFloat                         ActivationDuration;
	struct FScalableFloat                         ActivationDurationRandomDeviation;
	struct FScalableFloat                         OddsToActivate;
	struct FScalableFloat                         FailedActivationCooldownDuration;
	struct FScalableFloat                         FailedActivationCooldownDurationRandomDeviation;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIPerkBase">();
	}
	static class UFortAIPerkBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIPerkBase>();
	}
};
static_assert(alignof(UFortAIPerkBase) == 0x000008, "Wrong alignment on UFortAIPerkBase");
static_assert(sizeof(UFortAIPerkBase) == 0x000168, "Wrong size on UFortAIPerkBase");
static_assert(offsetof(UFortAIPerkBase, CooldownDuration) == 0x000028, "Member 'UFortAIPerkBase::CooldownDuration' has a wrong offset!");
static_assert(offsetof(UFortAIPerkBase, CooldownDurationRandomDeviation) == 0x000050, "Member 'UFortAIPerkBase::CooldownDurationRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAIPerkBase, ActivationCountBeforeCooldown) == 0x000078, "Member 'UFortAIPerkBase::ActivationCountBeforeCooldown' has a wrong offset!");
static_assert(offsetof(UFortAIPerkBase, ActivationDuration) == 0x0000A0, "Member 'UFortAIPerkBase::ActivationDuration' has a wrong offset!");
static_assert(offsetof(UFortAIPerkBase, ActivationDurationRandomDeviation) == 0x0000C8, "Member 'UFortAIPerkBase::ActivationDurationRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAIPerkBase, OddsToActivate) == 0x0000F0, "Member 'UFortAIPerkBase::OddsToActivate' has a wrong offset!");
static_assert(offsetof(UFortAIPerkBase, FailedActivationCooldownDuration) == 0x000118, "Member 'UFortAIPerkBase::FailedActivationCooldownDuration' has a wrong offset!");
static_assert(offsetof(UFortAIPerkBase, FailedActivationCooldownDurationRandomDeviation) == 0x000140, "Member 'UFortAIPerkBase::FailedActivationCooldownDurationRandomDeviation' has a wrong offset!");

class UAITask_ExecuteAbility : public UAITask
{
public:
	uint8                                         Pad_68[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AITask_ExecuteAbility">();
	}
	static class UAITask_ExecuteAbility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAITask_ExecuteAbility>();
	}
};
static_assert(alignof(UAITask_ExecuteAbility) == 0x000008, "Wrong alignment on UAITask_ExecuteAbility");
static_assert(sizeof(UAITask_ExecuteAbility) == 0x000090, "Wrong size on UAITask_ExecuteAbility");

class UFortAITask_AdjustToSlot final : public UAITask
{
public:
	struct FVector                                SlotLocation;
	struct FVector                                SlotDirection;
	uint8                                         Pad_98[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAITask_AdjustToSlot">();
	}
	static class UFortAITask_AdjustToSlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAITask_AdjustToSlot>();
	}
};
static_assert(alignof(UFortAITask_AdjustToSlot) == 0x000008, "Wrong alignment on UFortAITask_AdjustToSlot");
static_assert(sizeof(UFortAITask_AdjustToSlot) == 0x0000C0, "Wrong size on UFortAITask_AdjustToSlot");
static_assert(offsetof(UFortAITask_AdjustToSlot, SlotLocation) == 0x000068, "Member 'UFortAITask_AdjustToSlot::SlotLocation' has a wrong offset!");
static_assert(offsetof(UFortAITask_AdjustToSlot, SlotDirection) == 0x000080, "Member 'UFortAITask_AdjustToSlot::SlotDirection' has a wrong offset!");

class UFortAITask_ExecuteAbility final : public UAITask_ExecuteAbility
{
public:
	uint8                                         Pad_90[0x28];

public:
	void OnInjectedHitResultDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAITask_ExecuteAbility">();
	}
	static class UFortAITask_ExecuteAbility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAITask_ExecuteAbility>();
	}
};
static_assert(alignof(UFortAITask_ExecuteAbility) == 0x000008, "Wrong alignment on UFortAITask_ExecuteAbility");
static_assert(sizeof(UFortAITask_ExecuteAbility) == 0x0000B8, "Wrong size on UFortAITask_ExecuteAbility");

class UFortAthenaAIRuntimeParameters_Sight final : public UFortAthenaAIRuntimeParameters
{
public:
	bool                                          bOverrideVisibilityRange;
	uint8                                         Pad_31[0x3];
	float                                         SightRadius;
	float                                         LoseSightRadius;
	uint8                                         Pad_3C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_Sight">();
	}
	static class UFortAthenaAIRuntimeParameters_Sight* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_Sight>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_Sight) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_Sight");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_Sight) == 0x000040, "Wrong size on UFortAthenaAIRuntimeParameters_Sight");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Sight, bOverrideVisibilityRange) == 0x000030, "Member 'UFortAthenaAIRuntimeParameters_Sight::bOverrideVisibilityRange' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Sight, SightRadius) == 0x000034, "Member 'UFortAthenaAIRuntimeParameters_Sight::SightRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Sight, LoseSightRadius) == 0x000038, "Member 'UFortAthenaAIRuntimeParameters_Sight::LoseSightRadius' has a wrong offset!");

class UFortAITask_FuzzyQueue final : public UAITask_MoveTo
{
public:
	uint8                                         Pad_118[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAITask_FuzzyQueue">();
	}
	static class UFortAITask_FuzzyQueue* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAITask_FuzzyQueue>();
	}
};
static_assert(alignof(UFortAITask_FuzzyQueue) == 0x000008, "Wrong alignment on UFortAITask_FuzzyQueue");
static_assert(sizeof(UFortAITask_FuzzyQueue) == 0x000138, "Wrong size on UFortAITask_FuzzyQueue");

class UFortAITask_MoveTo final : public UAITask_MoveTo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAITask_MoveTo">();
	}
	static class UFortAITask_MoveTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAITask_MoveTo>();
	}
};
static_assert(alignof(UFortAITask_MoveTo) == 0x000008, "Wrong alignment on UFortAITask_MoveTo");
static_assert(sizeof(UFortAITask_MoveTo) == 0x000118, "Wrong size on UFortAITask_MoveTo");

class UFortAITask_NavmeshWait final : public UAITask
{
public:
	uint8                                         Pad_68[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAITask_NavmeshWait">();
	}
	static class UFortAITask_NavmeshWait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAITask_NavmeshWait>();
	}
};
static_assert(alignof(UFortAITask_NavmeshWait) == 0x000008, "Wrong alignment on UFortAITask_NavmeshWait");
static_assert(sizeof(UFortAITask_NavmeshWait) == 0x000078, "Wrong size on UFortAITask_NavmeshWait");

class UFortAITask_RotateToFace final : public UAITask
{
public:
	class AActor*                                 FocusTarget;
	struct FVector                                FocalPoint;
	uint8                                         Pad_88[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAITask_RotateToFace">();
	}
	static class UFortAITask_RotateToFace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAITask_RotateToFace>();
	}
};
static_assert(alignof(UFortAITask_RotateToFace) == 0x000008, "Wrong alignment on UFortAITask_RotateToFace");
static_assert(sizeof(UFortAITask_RotateToFace) == 0x000090, "Wrong size on UFortAITask_RotateToFace");
static_assert(offsetof(UFortAITask_RotateToFace, FocusTarget) == 0x000068, "Member 'UFortAITask_RotateToFace::FocusTarget' has a wrong offset!");
static_assert(offsetof(UFortAITask_RotateToFace, FocalPoint) == 0x000070, "Member 'UFortAITask_RotateToFace::FocalPoint' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_SpawnParamsBase : public UFortAthenaAISpawnerDataComponent
{
public:
	TSubclassOf<class AAIController> GetAIControllerClass() const;
	float GetInAirSpawnTraceEndHeight() const;
	float GetInAirSpawnTraceSphereRadius() const;
	float GetInAirSpawnTraceStartHeight() const;
	TSubclassOf<class APawn> GetPawnClass() const;
	struct FDataTableRowHandle GetPawnStatHandle() const;
	TArray<TSubclassOf<class UFortAthenaAISpawnerData>> GetSpawnerDataSpawnedAsChildren() const;
	float GetSpawnTracePadding() const;
	bool ShouldCheckForOverlaps() const;
	bool ShouldSpawnInAir() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_SpawnParamsBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_SpawnParamsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_SpawnParamsBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_SpawnParamsBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_SpawnParamsBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_SpawnParamsBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_SpawnParamsBase");

class UFortAITask_StepAside final : public UFortAITask_Move
{
public:
	uint8                                         Pad_160[0x18];
	class AActor*                                 GoalActor;
	uint8                                         Pad_180[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAITask_StepAside">();
	}
	static class UFortAITask_StepAside* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAITask_StepAside>();
	}
};
static_assert(alignof(UFortAITask_StepAside) == 0x000008, "Wrong alignment on UFortAITask_StepAside");
static_assert(sizeof(UFortAITask_StepAside) == 0x0001A8, "Wrong size on UFortAITask_StepAside");
static_assert(offsetof(UFortAITask_StepAside, GoalActor) == 0x000178, "Member 'UFortAITask_StepAside::GoalActor' has a wrong offset!");

class AThreatCloud final : public AActor
{
public:
	TArray<class UBoxComponent*>                  LightningSourceAreas;
	uint8                                         Pad_298[0x8];
	struct FSlateBrush                            MiniMapIconBrush;
	float                                         MiniMapIconPercent;
	uint8                                         Pad_364[0xC];
	struct FSlateBrush                            MiniMapFarOffIconBrush;
	struct FLinearColor                           ActiveTint;
	struct FLinearColor                           InActiveTint;
	float                                         ActiveTransitionTime;
	float                                         DeathTimerDuration;
	float                                         CloudMiniMapTickInterval;
	uint8                                         Pad_45C[0x14];
	float                                         MiniMapFarOffIconDegreesOfArc;
	uint8                                         Pad_474[0xC];
	struct FBox                                   ThreatBoxVolume;
	float                                         GroundLevelUnderCloud;
	uint8                                         Pad_4BC[0x4];
	TArray<struct FVector>                        GoalActorLocations;

public:
	void ManualLightningFlash();
	void OnBeginDeath();
	void OnCloudActivated();
	void OnCloudDeactivated(EFortThreatDeactivationType DeactivationType);
	void OnCloudHiddenChange(bool bCloudsAreHidden);
	void OnCloudStart();
	void OnLightningStrike(const struct FVector& StartLocation, const struct FVector& EndLocation, class ABuildingRift* Rift, bool bLightningStruckRift);
	void OnThreatVolumeChanged();

	struct FBox GetThreatVolume() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ThreatCloud">();
	}
	static class AThreatCloud* GetDefaultObj()
	{
		return GetDefaultObjImpl<AThreatCloud>();
	}
};
static_assert(alignof(AThreatCloud) == 0x000010, "Wrong alignment on AThreatCloud");
static_assert(sizeof(AThreatCloud) == 0x0004D0, "Wrong size on AThreatCloud");
static_assert(offsetof(AThreatCloud, LightningSourceAreas) == 0x000288, "Member 'AThreatCloud::LightningSourceAreas' has a wrong offset!");
static_assert(offsetof(AThreatCloud, MiniMapIconBrush) == 0x0002A0, "Member 'AThreatCloud::MiniMapIconBrush' has a wrong offset!");
static_assert(offsetof(AThreatCloud, MiniMapIconPercent) == 0x000360, "Member 'AThreatCloud::MiniMapIconPercent' has a wrong offset!");
static_assert(offsetof(AThreatCloud, MiniMapFarOffIconBrush) == 0x000370, "Member 'AThreatCloud::MiniMapFarOffIconBrush' has a wrong offset!");
static_assert(offsetof(AThreatCloud, ActiveTint) == 0x000430, "Member 'AThreatCloud::ActiveTint' has a wrong offset!");
static_assert(offsetof(AThreatCloud, InActiveTint) == 0x000440, "Member 'AThreatCloud::InActiveTint' has a wrong offset!");
static_assert(offsetof(AThreatCloud, ActiveTransitionTime) == 0x000450, "Member 'AThreatCloud::ActiveTransitionTime' has a wrong offset!");
static_assert(offsetof(AThreatCloud, DeathTimerDuration) == 0x000454, "Member 'AThreatCloud::DeathTimerDuration' has a wrong offset!");
static_assert(offsetof(AThreatCloud, CloudMiniMapTickInterval) == 0x000458, "Member 'AThreatCloud::CloudMiniMapTickInterval' has a wrong offset!");
static_assert(offsetof(AThreatCloud, MiniMapFarOffIconDegreesOfArc) == 0x000470, "Member 'AThreatCloud::MiniMapFarOffIconDegreesOfArc' has a wrong offset!");
static_assert(offsetof(AThreatCloud, ThreatBoxVolume) == 0x000480, "Member 'AThreatCloud::ThreatBoxVolume' has a wrong offset!");
static_assert(offsetof(AThreatCloud, GroundLevelUnderCloud) == 0x0004B8, "Member 'AThreatCloud::GroundLevelUnderCloud' has a wrong offset!");
static_assert(offsetof(AThreatCloud, GoalActorLocations) == 0x0004C0, "Member 'AThreatCloud::GoalActorLocations' has a wrong offset!");

class UAthenaAIBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool AIPawnFromGAHasLuringPickupAsGoal(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayTag& GameplayTag, const float MaxLifetime, const EFortPickupSpawnSource RequiredPickupSpawnSource);
	static class APawn* AthenaSpawnAIFromClass(class UObject* WorldContextObject, TSubclassOf<class APawn> PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail, class AActor* Owner);
	static class UAthenaAIPopulationTracker* GetAIPopulationTracker(class UObject* WorldContextObject);
	static class UAthenaAIServiceCreativePlayerBots* GetAIServiceCreativePlayerBots(class UObject* WorldContextObject);
	static class UAthenaAIServiceLoot* GetAIServiceLoot(class UObject* WorldContextObject);
	static class UAthenaAIServicePlayerBots* GetAIServicePlayerBots(class UObject* WorldContextObject);
	static bool IsItemDefinitionSupported(class UObject* WorldContextObject, const class UFortItemDefinition* FortItemDef);
	static bool IsWeaponSupported(class UObject* WorldContextObject, class AFortWeapon* FortWeapon);
	static void JoinTeam(class UObject* WorldContextObject, const class AController* SourceTeamController, class AController* DestinationTeamController);
	static void KillBots(class UObject* WorldContextObject, const bool bKillPlayers, const bool bKillNoneParticipants, const uint8 TeamIndex, class AActor* BotOwner);
	static void MakeBotGroupsTakeEachOtherAsTargets(const TArray<class AActor*>& GroupA, const TArray<class AActor*>& GroupB, EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIBlueprintLibrary">();
	}
	static class UAthenaAIBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIBlueprintLibrary>();
	}
};
static_assert(alignof(UAthenaAIBlueprintLibrary) == 0x000008, "Wrong alignment on UAthenaAIBlueprintLibrary");
static_assert(sizeof(UAthenaAIBlueprintLibrary) == 0x000028, "Wrong size on UAthenaAIBlueprintLibrary");

class UFortAthenaAIBotBuildingComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotBuildingComponent">();
	}
	static class UFortAthenaAIBotBuildingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotBuildingComponent>();
	}
};
static_assert(alignof(UFortAthenaAIBotBuildingComponent) == 0x000008, "Wrong alignment on UFortAthenaAIBotBuildingComponent");
static_assert(sizeof(UFortAthenaAIBotBuildingComponent) == 0x0000D8, "Wrong size on UFortAthenaAIBotBuildingComponent");

class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase : public UFortAthenaAISpawnerDataComponent_CosmeticBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIPawnCosmeticBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase");

class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization final : public UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase
{
public:
	struct FGameplayTag                           FallbackTag;
	uint8                                         Pad_34[0x4];
	class UFortAIPawnCustomizationDefinition*     CustomizationDefinition;
	bool                                          bCanUnloadCustomization;
	uint8                                         Pad_41[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization) == 0x000048, "Wrong size on UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization, FallbackTag) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization::FallbackTag' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization, CustomizationDefinition) == 0x000038, "Member 'UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization::CustomizationDefinition' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization, bCanUnloadCustomization) == 0x000040, "Member 'UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization::bCanUnloadCustomization' has a wrong offset!");

class UFortAthenaAlertStateComponent final : public UActorComponent
{
public:
	float                                         StealthMeterTarget;
	float                                         StealthMeterTargetTime;

public:
	void OnStealthMeterChanged(class AFortAthenaAIBotController* BotController, float StealthMeterTarget_0, float StealthMeterTargetTime_0);
	void SetStealthMeterTarget(const float InStealthMeterTarget);
	void SetStealthMeterTargetTime(const float InStealthMeterTargetTime);

	float GetStealthMeterTarget() const;
	float GetStealthMeterTargetTime() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAlertStateComponent">();
	}
	static class UFortAthenaAlertStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAlertStateComponent>();
	}
};
static_assert(alignof(UFortAthenaAlertStateComponent) == 0x000008, "Wrong alignment on UFortAthenaAlertStateComponent");
static_assert(sizeof(UFortAthenaAlertStateComponent) == 0x0000A8, "Wrong size on UFortAthenaAlertStateComponent");
static_assert(offsetof(UFortAthenaAlertStateComponent, StealthMeterTarget) == 0x0000A0, "Member 'UFortAthenaAlertStateComponent::StealthMeterTarget' has a wrong offset!");
static_assert(offsetof(UFortAthenaAlertStateComponent, StealthMeterTargetTime) == 0x0000A4, "Member 'UFortAthenaAlertStateComponent::StealthMeterTargetTime' has a wrong offset!");

class UFortAthenaNPCLoopStateComponent final : public UActorComponent
{
public:
	uint8                                         bSpawnOutsideTheLoop : 1;
	uint8                                         Pad_A1[0x7];
	class UFortAthenaAIRuntimeParameters_AIBotLoopSettings* RuntimeLoopSettings;

public:
	void InitLoopState(class AFortPawn* PawnOwner);
	void OnOwnerPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaNPCLoopStateComponent">();
	}
	static class UFortAthenaNPCLoopStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaNPCLoopStateComponent>();
	}
};
static_assert(alignof(UFortAthenaNPCLoopStateComponent) == 0x000008, "Wrong alignment on UFortAthenaNPCLoopStateComponent");
static_assert(sizeof(UFortAthenaNPCLoopStateComponent) == 0x0000B0, "Wrong size on UFortAthenaNPCLoopStateComponent");
static_assert(offsetof(UFortAthenaNPCLoopStateComponent, RuntimeLoopSettings) == 0x0000A8, "Member 'UFortAthenaNPCLoopStateComponent::RuntimeLoopSettings' has a wrong offset!");

class UAthenaTrapAIPerceptionStimuliSourceComponent final : public UAIPerceptionStimuliSourceComponent
{
public:
	TMap<class AActor*, struct FTrapDetectionState> TrapDiscoverabilityMap;
	uint8                                         bEnablePerceptionSystemOnTrap : 1;
	uint8                                         Pad_109[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaTrapAIPerceptionStimuliSourceComponent">();
	}
	static class UAthenaTrapAIPerceptionStimuliSourceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaTrapAIPerceptionStimuliSourceComponent>();
	}
};
static_assert(alignof(UAthenaTrapAIPerceptionStimuliSourceComponent) == 0x000008, "Wrong alignment on UAthenaTrapAIPerceptionStimuliSourceComponent");
static_assert(sizeof(UAthenaTrapAIPerceptionStimuliSourceComponent) == 0x000110, "Wrong size on UAthenaTrapAIPerceptionStimuliSourceComponent");
static_assert(offsetof(UAthenaTrapAIPerceptionStimuliSourceComponent, TrapDiscoverabilityMap) == 0x0000B8, "Member 'UAthenaTrapAIPerceptionStimuliSourceComponent::TrapDiscoverabilityMap' has a wrong offset!");

class UFortPawnComponent_PingCommand : public TObjectBasedCycleFixup<class UFortPawnComponent, 0x0080, 0x08>
{
public:
	struct FFortPingInfo                          PingInfo;
	uint8                                         Pad_248[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPawnComponent_PingCommand">();
	}
	static class UFortPawnComponent_PingCommand* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPawnComponent_PingCommand>();
	}
};
static_assert(alignof(UFortPawnComponent_PingCommand) == 0x000008, "Wrong alignment on UFortPawnComponent_PingCommand");
static_assert(sizeof(UFortPawnComponent_PingCommand) == 0x000260, "Wrong size on UFortPawnComponent_PingCommand");
static_assert(offsetof(UFortPawnComponent_PingCommand, PingInfo) == 0x0000A8, "Member 'UFortPawnComponent_PingCommand::PingInfo' has a wrong offset!");

class UFortPawnComponent_AIBotPingCommand final : public UFortPawnComponent_PingCommand
{
public:
	class AAIController*                          CachedOwnerController;

public:
	void HandleOnNPCConvertEvent(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);
	void HandleOnNPCUnconvertEvent(class AFortPawn* UnconvertedFortPawn, EUnconvertReason UnconvertReason);
	void OnAIPingCommand(class AFortPlayerPawn* PlayerPawn, EPingCommandType CommandType);
	void OnServerMarkerAdded(const struct FFortWorldMarkerData& MarkerData);
	void OnServerMarkerRemoved(const struct FMarkerID& MarkerID);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPawnComponent_AIBotPingCommand">();
	}
	static class UFortPawnComponent_AIBotPingCommand* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPawnComponent_AIBotPingCommand>();
	}
};
static_assert(alignof(UFortPawnComponent_AIBotPingCommand) == 0x000008, "Wrong alignment on UFortPawnComponent_AIBotPingCommand");
static_assert(sizeof(UFortPawnComponent_AIBotPingCommand) == 0x000268, "Wrong size on UFortPawnComponent_AIBotPingCommand");
static_assert(offsetof(UFortPawnComponent_AIBotPingCommand, CachedOwnerController) == 0x000260, "Member 'UFortPawnComponent_AIBotPingCommand::CachedOwnerController' has a wrong offset!");

class UFortAthenaNavArea_ShallowWater final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaNavArea_ShallowWater">();
	}
	static class UFortAthenaNavArea_ShallowWater* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaNavArea_ShallowWater>();
	}
};
static_assert(alignof(UFortAthenaNavArea_ShallowWater) == 0x000008, "Wrong alignment on UFortAthenaNavArea_ShallowWater");
static_assert(sizeof(UFortAthenaNavArea_ShallowWater) == 0x000050, "Wrong size on UFortAthenaNavArea_ShallowWater");

class UFortPawnComponent_AIFormation final : public TObjectBasedCycleFixup<class UFortPawnComponent, 0x0080, 0x08>
{
public:
	TArray<struct FVector>                        Slots;
	float                                         MaxDistanceFromSlotToSprint;
	uint8                                         Pad_BC[0x4];
	TArray<struct FFortAthenaAIFormationSlotRuntime> RuntimeSlots;
	float                                         MaxDistanceFromSlotToSprintSqr;
	uint8                                         Pad_D4[0x4];

public:
	void OnUserDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPawnComponent_AIFormation">();
	}
	static class UFortPawnComponent_AIFormation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPawnComponent_AIFormation>();
	}
};
static_assert(alignof(UFortPawnComponent_AIFormation) == 0x000008, "Wrong alignment on UFortPawnComponent_AIFormation");
static_assert(sizeof(UFortPawnComponent_AIFormation) == 0x0000D8, "Wrong size on UFortPawnComponent_AIFormation");
static_assert(offsetof(UFortPawnComponent_AIFormation, Slots) == 0x0000A8, "Member 'UFortPawnComponent_AIFormation::Slots' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_AIFormation, MaxDistanceFromSlotToSprint) == 0x0000B8, "Member 'UFortPawnComponent_AIFormation::MaxDistanceFromSlotToSprint' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_AIFormation, RuntimeSlots) == 0x0000C0, "Member 'UFortPawnComponent_AIFormation::RuntimeSlots' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_AIFormation, MaxDistanceFromSlotToSprintSqr) == 0x0000D0, "Member 'UFortPawnComponent_AIFormation::MaxDistanceFromSlotToSprintSqr' has a wrong offset!");

class UFortPawnComponent_AIGroup final : public TObjectBasedCycleFixup<class UFortPawnComponent, 0x0080, 0x08>
{
public:
	bool                                          bCanBeGroupLeader;
	uint8                                         Pad_A9[0x3];
	int32                                         GroupId;

public:
	void OnGroupMemberDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void RemoveFromCurrentGroup();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPawnComponent_AIGroup">();
	}
	static class UFortPawnComponent_AIGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPawnComponent_AIGroup>();
	}
};
static_assert(alignof(UFortPawnComponent_AIGroup) == 0x000008, "Wrong alignment on UFortPawnComponent_AIGroup");
static_assert(sizeof(UFortPawnComponent_AIGroup) == 0x0000B0, "Wrong size on UFortPawnComponent_AIGroup");
static_assert(offsetof(UFortPawnComponent_AIGroup, bCanBeGroupLeader) == 0x0000A8, "Member 'UFortPawnComponent_AIGroup::bCanBeGroupLeader' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_AIGroup, GroupId) == 0x0000AC, "Member 'UFortPawnComponent_AIGroup::GroupId' has a wrong offset!");

class UFortAthenaAIPerk_EvasiveManeuvers final : public UFortAIPerkBase
{
public:
	struct FEvasiveManeuverSkillSettings          EvasiveManeuverSkillSettings;
	struct FScalableFloat                         DistanceMin;
	struct FScalableFloat                         DistanceMax;
	struct FGameplayTagQuery                      WeaponTagQuery;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIPerk_EvasiveManeuvers">();
	}
	static class UFortAthenaAIPerk_EvasiveManeuvers* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIPerk_EvasiveManeuvers>();
	}
};
static_assert(alignof(UFortAthenaAIPerk_EvasiveManeuvers) == 0x000008, "Wrong alignment on UFortAthenaAIPerk_EvasiveManeuvers");
static_assert(sizeof(UFortAthenaAIPerk_EvasiveManeuvers) == 0x000458, "Wrong size on UFortAthenaAIPerk_EvasiveManeuvers");
static_assert(offsetof(UFortAthenaAIPerk_EvasiveManeuvers, EvasiveManeuverSkillSettings) == 0x000168, "Member 'UFortAthenaAIPerk_EvasiveManeuvers::EvasiveManeuverSkillSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIPerk_EvasiveManeuvers, DistanceMin) == 0x0003C0, "Member 'UFortAthenaAIPerk_EvasiveManeuvers::DistanceMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIPerk_EvasiveManeuvers, DistanceMax) == 0x0003E8, "Member 'UFortAthenaAIPerk_EvasiveManeuvers::DistanceMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIPerk_EvasiveManeuvers, WeaponTagQuery) == 0x000410, "Member 'UFortAthenaAIPerk_EvasiveManeuvers::WeaponTagQuery' has a wrong offset!");

class AFortAthenaPatrolPath : public AActor
{
public:
	uint8                                         Pad_288[0x18];
	EPatrollingMode                               Mode;
	uint8                                         Pad_2A1[0x7];
	TArray<class AFortAthenaPatrolPoint*>         PatrolPoints;
	bool                                          bUseRandomStartupPatrolPoint;
	bool                                          bUseRandomStartupDirection;
	uint8                                         Pad_2BA[0x6];
	struct FGameplayTagContainer                  GameplayTags;
	class AActor*                                 RadialLeashLocationActorOverride;
	float                                         RadialLeashInnerRadiusOverride;
	float                                         RadialLeashOuterRadiusOverride;
	TArray<struct FPatrolPathLeash>               PathLeashArray;
	struct FScalableFloat                         WaterLevelIndexMax;
	struct FScalableFloat                         WaterLevelIndexMin;
	TMulticastInlineDelegate<void(class AFortAthenaPatrolPoint* PatrolPathPoint, class AAIController* Instigator)> OnPatrolPointFailedToReach;
	TMulticastInlineDelegate<void(class AFortAthenaPatrolPoint* PatrolPathPoint, class AAIController* Instigator)> OnPatrolPointReached;
	TMulticastInlineDelegate<void(class AAIController* Instigator)> OnPatrolPathStarted;
	TMulticastInlineDelegate<void(class AAIController* Instigator)> OnPatrolPathStopped;
	TMulticastInlineDelegate<void(bool bIsEnabled)> OnPatrolPathActivationStatusChanged;
	struct FScalableFloat                         MaxConcurrentUsage;
	int32                                         CurrentConcurrentUsage;
	uint8                                         Pad_3CC[0x4];
	struct FScalableFloat                         MaxLifetimeUsage;
	float                                         DebugLinkWidthSelected;
	float                                         DebugLinkWidthNotSelected;
	struct FLinearColor                           DebugNotSelectedColor;
	uint8                                         BitPad_410_0 : 1;
	uint8                                         bIsPatrolPathEnabled : 1;
	uint8                                         Pad_411[0x3F];

public:
	void OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void SetPatrolPathEnabled(const bool bIsEnabled);

	bool CanBeUsed() const;
	void GetPatrolPoints(TArray<class AFortAthenaPatrolPoint*>* OutPatrolPoints) const;
	void PatrolPathStarted(class AAIController* AIInstigator) const;
	void PatrolPathStopped(class AAIController* AIInstigator) const;
	void PatrolPointFailedToReach(class AFortAthenaPatrolPoint* PathPoint, class AAIController* AIInstigator) const;
	void PatrolPointReached(class AFortAthenaPatrolPoint* PathPoint, class AAIController* AIInstigator) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaPatrolPath">();
	}
	static class AFortAthenaPatrolPath* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaPatrolPath>();
	}
};
static_assert(alignof(AFortAthenaPatrolPath) == 0x000008, "Wrong alignment on AFortAthenaPatrolPath");
static_assert(sizeof(AFortAthenaPatrolPath) == 0x000450, "Wrong size on AFortAthenaPatrolPath");
static_assert(offsetof(AFortAthenaPatrolPath, Mode) == 0x0002A0, "Member 'AFortAthenaPatrolPath::Mode' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, PatrolPoints) == 0x0002A8, "Member 'AFortAthenaPatrolPath::PatrolPoints' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, bUseRandomStartupPatrolPoint) == 0x0002B8, "Member 'AFortAthenaPatrolPath::bUseRandomStartupPatrolPoint' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, bUseRandomStartupDirection) == 0x0002B9, "Member 'AFortAthenaPatrolPath::bUseRandomStartupDirection' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, GameplayTags) == 0x0002C0, "Member 'AFortAthenaPatrolPath::GameplayTags' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, RadialLeashLocationActorOverride) == 0x0002E0, "Member 'AFortAthenaPatrolPath::RadialLeashLocationActorOverride' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, RadialLeashInnerRadiusOverride) == 0x0002E8, "Member 'AFortAthenaPatrolPath::RadialLeashInnerRadiusOverride' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, RadialLeashOuterRadiusOverride) == 0x0002EC, "Member 'AFortAthenaPatrolPath::RadialLeashOuterRadiusOverride' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, PathLeashArray) == 0x0002F0, "Member 'AFortAthenaPatrolPath::PathLeashArray' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, WaterLevelIndexMax) == 0x000300, "Member 'AFortAthenaPatrolPath::WaterLevelIndexMax' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, WaterLevelIndexMin) == 0x000328, "Member 'AFortAthenaPatrolPath::WaterLevelIndexMin' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, OnPatrolPointFailedToReach) == 0x000350, "Member 'AFortAthenaPatrolPath::OnPatrolPointFailedToReach' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, OnPatrolPointReached) == 0x000360, "Member 'AFortAthenaPatrolPath::OnPatrolPointReached' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, OnPatrolPathStarted) == 0x000370, "Member 'AFortAthenaPatrolPath::OnPatrolPathStarted' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, OnPatrolPathStopped) == 0x000380, "Member 'AFortAthenaPatrolPath::OnPatrolPathStopped' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, OnPatrolPathActivationStatusChanged) == 0x000390, "Member 'AFortAthenaPatrolPath::OnPatrolPathActivationStatusChanged' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, MaxConcurrentUsage) == 0x0003A0, "Member 'AFortAthenaPatrolPath::MaxConcurrentUsage' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, CurrentConcurrentUsage) == 0x0003C8, "Member 'AFortAthenaPatrolPath::CurrentConcurrentUsage' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, MaxLifetimeUsage) == 0x0003D0, "Member 'AFortAthenaPatrolPath::MaxLifetimeUsage' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, DebugLinkWidthSelected) == 0x0003F8, "Member 'AFortAthenaPatrolPath::DebugLinkWidthSelected' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, DebugLinkWidthNotSelected) == 0x0003FC, "Member 'AFortAthenaPatrolPath::DebugLinkWidthNotSelected' has a wrong offset!");
static_assert(offsetof(AFortAthenaPatrolPath, DebugNotSelectedColor) == 0x000400, "Member 'AFortAthenaPatrolPath::DebugNotSelectedColor' has a wrong offset!");

class AFortCreativePatrolPath final : public AFortAthenaPatrolPath
{
public:
	TArray<class AFortCreativeDeviceProp*>        CreativePatrolPoints;
	EFortCreativePatrolPathGroup                  PatrolPathGroup;
	uint8                                         Pad_461[0x7];
	class ABuildingActor*                         CreativePathRenderer;
	uint8                                         Pad_470[0x8];

public:
	void SetPatrolHasValidNavMesh(const bool bValidNavMesh);

	bool HasPatrolValidNavMesh() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCreativePatrolPath">();
	}
	static class AFortCreativePatrolPath* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortCreativePatrolPath>();
	}
};
static_assert(alignof(AFortCreativePatrolPath) == 0x000008, "Wrong alignment on AFortCreativePatrolPath");
static_assert(sizeof(AFortCreativePatrolPath) == 0x000478, "Wrong size on AFortCreativePatrolPath");
static_assert(offsetof(AFortCreativePatrolPath, CreativePatrolPoints) == 0x000450, "Member 'AFortCreativePatrolPath::CreativePatrolPoints' has a wrong offset!");
static_assert(offsetof(AFortCreativePatrolPath, PatrolPathGroup) == 0x000460, "Member 'AFortCreativePatrolPath::PatrolPathGroup' has a wrong offset!");
static_assert(offsetof(AFortCreativePatrolPath, CreativePathRenderer) == 0x000468, "Member 'AFortCreativePatrolPath::CreativePathRenderer' has a wrong offset!");

class UFortAthenaAIBotDigestedSkillSet : public UFortAthenaAIRuntimeParameters
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotDigestedSkillSet">();
	}
	static class UFortAthenaAIBotDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotDigestedSkillSet) == 0x000030, "Wrong size on UFortAthenaAIBotDigestedSkillSet");

class UFortAthenaAIBotAimingDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	struct FDigestedFocusSetting                  DefaultFocusSetting;
	TArray<struct FDigestedFocusSetting>          FocusSettings;
	struct FLookAtDigestedSetting                 LookAtSettings[0x4];
	bool                                          bAllowScanAroundWhileSwimming;
	uint8                                         Pad_E9[0x3];
	float                                         TrackingReactionTime;
	float                                         InAirTrackingReactionTimeMultiplier;
	float                                         TrackingInterpTime;
	float                                         TrackingInterpTimeMultForGroundVehicles;
	float                                         TrackingInterpTimeMultForFlyingVehicles;
	float                                         MaxTrackingPredictionError;
	float                                         MaxTrackingOffsetErrorMultiplier;
	float                                         AdjustedTrackingOffsetErrorMultiplierAgainstAIs;
	float                                         TrackingErrorUpdateInterval;
	float                                         TrackingInAirVelocityThreshold;
	float                                         TrackingInAirHeightDeltaThreshold;
	float                                         TargetAcquisitionRate;
	float                                         TimeToHitMultiplier;
	float                                         MaxTimeToHitAddedCausedByTargetSpeed;
	float                                         MaxTimeToHitAddedCausedByTargetInAir;
	float                                         TimeToHitDelayMultiplierWhenTargetInAir;
	uint8                                         Pad_12C[0x4];
	struct FScalableFloat                         TimeToHitDelayMultiplierCurveBasedOnSpeed;
	bool                                          bAimingCircleEnabled;
	bool                                          bTargetIdleDetectionEnabled;
	bool                                          bTargetIdleUseAgainstNPC;
	uint8                                         Pad_15B[0x1];
	float                                         TargetIdleLookBackTime;
	float                                         TargetIdleUnsuspectingCosAngle;
	float                                         TargetIdleUnsuspectingDistance;
	float                                         TargetIdleUnsuspectingDamageDuration;
	float                                         TargetIdleUnsuspectingTimeMultiplier;
	float                                         TargetIdleVerticalSpeedThreshold;
	float                                         TargetIdleLateralSpeedThreshold;
	float                                         TargetIdleFrontalSpeedThreshold;
	float                                         TargetIdleRevivedGracePeriodDuration;
	float                                         MaxDistanceEvaluationErrorRatio;
	float                                         TargetingUpdateInterval;
	float                                         TargetingUpdateIntervalMaxDeviation;
	float                                         ReachLeashLimitToleranceDistance;
	bool                                          bShootFloorTrapOnlyWhenHigherThanTrap;
	uint8                                         Pad_191[0x3];
	float                                         TargetingRotationSpeedLimit;
	float                                         TargetingRotationSnapThreshold;
	uint8                                         Pad_19C[0x4];
	struct FDigestedWeaponAccuracy                NoWeaponAccuracy;
	TArray<struct FDigestedWeaponAccuracyCategory> WeaponAccuracies;
	TArray<struct FDigestedTargetBasedAccuracyCategory> DigestedTargetBasedAccuracies;
	struct FDigestedTrackingOffsetModifiers       TrackingOffsetModifiers;
	struct FDigestedAimingCircleSettings          DefaultAimingCircleSettings;
	TWeakObjectPtr<class AFortWeapon>             CachedWeaponUsedToCalculateAccuracy;
	uint8                                         Pad_768[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotAimingDigestedSkillSet">();
	}
	static class UFortAthenaAIBotAimingDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotAimingDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotAimingDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotAimingDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotAimingDigestedSkillSet) == 0x000770, "Wrong size on UFortAthenaAIBotAimingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, DefaultFocusSetting) == 0x000030, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::DefaultFocusSetting' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, FocusSettings) == 0x000098, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::FocusSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, LookAtSettings) == 0x0000A8, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::LookAtSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, bAllowScanAroundWhileSwimming) == 0x0000E8, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::bAllowScanAroundWhileSwimming' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TrackingReactionTime) == 0x0000EC, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TrackingReactionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, InAirTrackingReactionTimeMultiplier) == 0x0000F0, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::InAirTrackingReactionTimeMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TrackingInterpTime) == 0x0000F4, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TrackingInterpTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TrackingInterpTimeMultForGroundVehicles) == 0x0000F8, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TrackingInterpTimeMultForGroundVehicles' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TrackingInterpTimeMultForFlyingVehicles) == 0x0000FC, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TrackingInterpTimeMultForFlyingVehicles' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, MaxTrackingPredictionError) == 0x000100, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::MaxTrackingPredictionError' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, MaxTrackingOffsetErrorMultiplier) == 0x000104, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::MaxTrackingOffsetErrorMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, AdjustedTrackingOffsetErrorMultiplierAgainstAIs) == 0x000108, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::AdjustedTrackingOffsetErrorMultiplierAgainstAIs' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TrackingErrorUpdateInterval) == 0x00010C, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TrackingErrorUpdateInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TrackingInAirVelocityThreshold) == 0x000110, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TrackingInAirVelocityThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TrackingInAirHeightDeltaThreshold) == 0x000114, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TrackingInAirHeightDeltaThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TargetAcquisitionRate) == 0x000118, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TargetAcquisitionRate' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TimeToHitMultiplier) == 0x00011C, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TimeToHitMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, MaxTimeToHitAddedCausedByTargetSpeed) == 0x000120, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::MaxTimeToHitAddedCausedByTargetSpeed' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, MaxTimeToHitAddedCausedByTargetInAir) == 0x000124, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::MaxTimeToHitAddedCausedByTargetInAir' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TimeToHitDelayMultiplierWhenTargetInAir) == 0x000128, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TimeToHitDelayMultiplierWhenTargetInAir' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TimeToHitDelayMultiplierCurveBasedOnSpeed) == 0x000130, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TimeToHitDelayMultiplierCurveBasedOnSpeed' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, bAimingCircleEnabled) == 0x000158, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::bAimingCircleEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, bTargetIdleDetectionEnabled) == 0x000159, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::bTargetIdleDetectionEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, bTargetIdleUseAgainstNPC) == 0x00015A, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::bTargetIdleUseAgainstNPC' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TargetIdleLookBackTime) == 0x00015C, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TargetIdleLookBackTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TargetIdleUnsuspectingCosAngle) == 0x000160, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TargetIdleUnsuspectingCosAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TargetIdleUnsuspectingDistance) == 0x000164, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TargetIdleUnsuspectingDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TargetIdleUnsuspectingDamageDuration) == 0x000168, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TargetIdleUnsuspectingDamageDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TargetIdleUnsuspectingTimeMultiplier) == 0x00016C, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TargetIdleUnsuspectingTimeMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TargetIdleVerticalSpeedThreshold) == 0x000170, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TargetIdleVerticalSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TargetIdleLateralSpeedThreshold) == 0x000174, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TargetIdleLateralSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TargetIdleFrontalSpeedThreshold) == 0x000178, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TargetIdleFrontalSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TargetIdleRevivedGracePeriodDuration) == 0x00017C, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TargetIdleRevivedGracePeriodDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, MaxDistanceEvaluationErrorRatio) == 0x000180, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::MaxDistanceEvaluationErrorRatio' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TargetingUpdateInterval) == 0x000184, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TargetingUpdateInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TargetingUpdateIntervalMaxDeviation) == 0x000188, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TargetingUpdateIntervalMaxDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, ReachLeashLimitToleranceDistance) == 0x00018C, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::ReachLeashLimitToleranceDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, bShootFloorTrapOnlyWhenHigherThanTrap) == 0x000190, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::bShootFloorTrapOnlyWhenHigherThanTrap' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TargetingRotationSpeedLimit) == 0x000194, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TargetingRotationSpeedLimit' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TargetingRotationSnapThreshold) == 0x000198, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TargetingRotationSnapThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, NoWeaponAccuracy) == 0x0001A0, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::NoWeaponAccuracy' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, WeaponAccuracies) == 0x0004C0, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::WeaponAccuracies' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, DigestedTargetBasedAccuracies) == 0x0004D0, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::DigestedTargetBasedAccuracies' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, TrackingOffsetModifiers) == 0x0004E0, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::TrackingOffsetModifiers' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, DefaultAimingCircleSettings) == 0x000600, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::DefaultAimingCircleSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingDigestedSkillSet, CachedWeaponUsedToCalculateAccuracy) == 0x000760, "Member 'UFortAthenaAIBotAimingDigestedSkillSet::CachedWeaponUsedToCalculateAccuracy' has a wrong offset!");

class UAthenaAIPerceptionStimuliSourceComponent : public UAIPerceptionStimuliSourceComponent
{
public:
	void OnOwnerTeamIndexChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIPerceptionStimuliSourceComponent">();
	}
	static class UAthenaAIPerceptionStimuliSourceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIPerceptionStimuliSourceComponent>();
	}
};
static_assert(alignof(UAthenaAIPerceptionStimuliSourceComponent) == 0x000008, "Wrong alignment on UAthenaAIPerceptionStimuliSourceComponent");
static_assert(sizeof(UAthenaAIPerceptionStimuliSourceComponent) == 0x0000B8, "Wrong size on UAthenaAIPerceptionStimuliSourceComponent");

class UFortAthenaAIBotAimingSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FFocusSetting                          DefaultFocusSetting;
	TArray<struct FFocusSetting>                  FocusSettings;
	struct FLookAtSetting                         LookAtSettings[0x4];
	struct FScalableFloat                         AllowScanAroundWhileSwimming;
	struct FScalableFloat                         TrackingReactionTime;
	struct FScalableFloat                         InAirTrackingReactionTimeMultiplier;
	struct FScalableFloat                         TrackingInterpTime;
	struct FScalableFloat                         TrackingInterpTimeMultForGroundVehicles;
	struct FScalableFloat                         TrackingInterpTimeMultForFlyingVehicles;
	struct FScalableFloat                         MaxTrackingPredictionError;
	struct FScalableFloat                         MaxTrackingOffsetErrorMultiplier;
	struct FScalableFloat                         AdjustedTrackingOffsetErrorMultiplierAgainstAIs;
	struct FScalableFloat                         TrackingErrorUpdateInterval;
	struct FScalableFloat                         TrackingInAirVelocityThreshold;
	struct FScalableFloat                         TrackingInAirHeightDeltaThreshold;
	struct FScalableFloat                         TargetAcquisitionRate;
	struct FScalableFloat                         TimeToHitMultiplier;
	struct FScalableFloat                         MaxTimeToHitAddedCausedByTargetSpeed;
	struct FScalableFloat                         MaxTimeToHitAddedCausedByTargetInAir;
	struct FScalableFloat                         TimeToHitDelayMultiplierWhenTargetInAir;
	struct FScalableFloat                         TimeToHitDelayMultiplierCurveBasedOnSpeed;
	struct FScalableFloat                         AimingCircleEnabled;
	struct FScalableFloat                         TargetIdleDetectionEnabled;
	struct FScalableFloat                         TargetIdleUseAgainstNPC;
	struct FScalableFloat                         TargetIdleLookBackTime;
	struct FScalableFloat                         TargetIdleUnsuspectingAngle;
	struct FScalableFloat                         TargetIdleUnsuspectingDistance;
	struct FScalableFloat                         TargetIdleUnsuspectingDamageDuration;
	struct FScalableFloat                         TargetIdleUnsuspectingTimeMultiplier;
	struct FScalableFloat                         TargetIdleVerticalSpeedThreshold;
	struct FScalableFloat                         TargetIdleLateralSpeedThreshold;
	struct FScalableFloat                         TargetIdleFrontalSpeedThreshold;
	struct FScalableFloat                         TargetIdleRevivedGracePeriodDuration;
	struct FScalableFloat                         MaxDistanceEvaluationErrorRatio;
	struct FScalableFloat                         TargetingUpdateInterval;
	struct FScalableFloat                         TargetingUpdateIntervalMaxDeviation;
	struct FScalableFloat                         ReachLeashLimitToleranceDistance;
	struct FScalableFloat                         ShootFloorTrapOnlyWhenHigherThanTrap;
	struct FScalableFloat                         TargetingRotationSpeedLimit;
	struct FScalableFloat                         TargetingRotationSnapThreshold;
	struct FWeaponAccuracy                        NoWeaponAccuracy;
	TArray<struct FWeaponAccuracyCategory>        WeaponAccuracies;
	TArray<struct FTargetBasedAccuracyCategory>   TargetBasedAccuracies;
	uint8                                         bDigestTrackingOffsetModifiersWithAvgMatchMMR : 1;
	uint8                                         Pad_1121[0x7];
	TArray<struct FTrackingOffsetModifierInfo>    TrackingOffsetModifiers;
	struct FAimingCircleSettings                  DefaultAimingCircleSettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotAimingSkillSet">();
	}
	static class UFortAthenaAIBotAimingSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotAimingSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotAimingSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotAimingSkillSet");
static_assert(sizeof(UFortAthenaAIBotAimingSkillSet) == 0x001520, "Wrong size on UFortAthenaAIBotAimingSkillSet");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, DefaultFocusSetting) == 0x000030, "Member 'UFortAthenaAIBotAimingSkillSet::DefaultFocusSetting' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, FocusSettings) == 0x000170, "Member 'UFortAthenaAIBotAimingSkillSet::FocusSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, LookAtSettings) == 0x000180, "Member 'UFortAthenaAIBotAimingSkillSet::LookAtSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, AllowScanAroundWhileSwimming) == 0x000400, "Member 'UFortAthenaAIBotAimingSkillSet::AllowScanAroundWhileSwimming' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TrackingReactionTime) == 0x000428, "Member 'UFortAthenaAIBotAimingSkillSet::TrackingReactionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, InAirTrackingReactionTimeMultiplier) == 0x000450, "Member 'UFortAthenaAIBotAimingSkillSet::InAirTrackingReactionTimeMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TrackingInterpTime) == 0x000478, "Member 'UFortAthenaAIBotAimingSkillSet::TrackingInterpTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TrackingInterpTimeMultForGroundVehicles) == 0x0004A0, "Member 'UFortAthenaAIBotAimingSkillSet::TrackingInterpTimeMultForGroundVehicles' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TrackingInterpTimeMultForFlyingVehicles) == 0x0004C8, "Member 'UFortAthenaAIBotAimingSkillSet::TrackingInterpTimeMultForFlyingVehicles' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, MaxTrackingPredictionError) == 0x0004F0, "Member 'UFortAthenaAIBotAimingSkillSet::MaxTrackingPredictionError' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, MaxTrackingOffsetErrorMultiplier) == 0x000518, "Member 'UFortAthenaAIBotAimingSkillSet::MaxTrackingOffsetErrorMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, AdjustedTrackingOffsetErrorMultiplierAgainstAIs) == 0x000540, "Member 'UFortAthenaAIBotAimingSkillSet::AdjustedTrackingOffsetErrorMultiplierAgainstAIs' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TrackingErrorUpdateInterval) == 0x000568, "Member 'UFortAthenaAIBotAimingSkillSet::TrackingErrorUpdateInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TrackingInAirVelocityThreshold) == 0x000590, "Member 'UFortAthenaAIBotAimingSkillSet::TrackingInAirVelocityThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TrackingInAirHeightDeltaThreshold) == 0x0005B8, "Member 'UFortAthenaAIBotAimingSkillSet::TrackingInAirHeightDeltaThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetAcquisitionRate) == 0x0005E0, "Member 'UFortAthenaAIBotAimingSkillSet::TargetAcquisitionRate' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TimeToHitMultiplier) == 0x000608, "Member 'UFortAthenaAIBotAimingSkillSet::TimeToHitMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, MaxTimeToHitAddedCausedByTargetSpeed) == 0x000630, "Member 'UFortAthenaAIBotAimingSkillSet::MaxTimeToHitAddedCausedByTargetSpeed' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, MaxTimeToHitAddedCausedByTargetInAir) == 0x000658, "Member 'UFortAthenaAIBotAimingSkillSet::MaxTimeToHitAddedCausedByTargetInAir' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TimeToHitDelayMultiplierWhenTargetInAir) == 0x000680, "Member 'UFortAthenaAIBotAimingSkillSet::TimeToHitDelayMultiplierWhenTargetInAir' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TimeToHitDelayMultiplierCurveBasedOnSpeed) == 0x0006A8, "Member 'UFortAthenaAIBotAimingSkillSet::TimeToHitDelayMultiplierCurveBasedOnSpeed' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, AimingCircleEnabled) == 0x0006D0, "Member 'UFortAthenaAIBotAimingSkillSet::AimingCircleEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetIdleDetectionEnabled) == 0x0006F8, "Member 'UFortAthenaAIBotAimingSkillSet::TargetIdleDetectionEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetIdleUseAgainstNPC) == 0x000720, "Member 'UFortAthenaAIBotAimingSkillSet::TargetIdleUseAgainstNPC' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetIdleLookBackTime) == 0x000748, "Member 'UFortAthenaAIBotAimingSkillSet::TargetIdleLookBackTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetIdleUnsuspectingAngle) == 0x000770, "Member 'UFortAthenaAIBotAimingSkillSet::TargetIdleUnsuspectingAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetIdleUnsuspectingDistance) == 0x000798, "Member 'UFortAthenaAIBotAimingSkillSet::TargetIdleUnsuspectingDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetIdleUnsuspectingDamageDuration) == 0x0007C0, "Member 'UFortAthenaAIBotAimingSkillSet::TargetIdleUnsuspectingDamageDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetIdleUnsuspectingTimeMultiplier) == 0x0007E8, "Member 'UFortAthenaAIBotAimingSkillSet::TargetIdleUnsuspectingTimeMultiplier' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetIdleVerticalSpeedThreshold) == 0x000810, "Member 'UFortAthenaAIBotAimingSkillSet::TargetIdleVerticalSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetIdleLateralSpeedThreshold) == 0x000838, "Member 'UFortAthenaAIBotAimingSkillSet::TargetIdleLateralSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetIdleFrontalSpeedThreshold) == 0x000860, "Member 'UFortAthenaAIBotAimingSkillSet::TargetIdleFrontalSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetIdleRevivedGracePeriodDuration) == 0x000888, "Member 'UFortAthenaAIBotAimingSkillSet::TargetIdleRevivedGracePeriodDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, MaxDistanceEvaluationErrorRatio) == 0x0008B0, "Member 'UFortAthenaAIBotAimingSkillSet::MaxDistanceEvaluationErrorRatio' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetingUpdateInterval) == 0x0008D8, "Member 'UFortAthenaAIBotAimingSkillSet::TargetingUpdateInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetingUpdateIntervalMaxDeviation) == 0x000900, "Member 'UFortAthenaAIBotAimingSkillSet::TargetingUpdateIntervalMaxDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, ReachLeashLimitToleranceDistance) == 0x000928, "Member 'UFortAthenaAIBotAimingSkillSet::ReachLeashLimitToleranceDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, ShootFloorTrapOnlyWhenHigherThanTrap) == 0x000950, "Member 'UFortAthenaAIBotAimingSkillSet::ShootFloorTrapOnlyWhenHigherThanTrap' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetingRotationSpeedLimit) == 0x000978, "Member 'UFortAthenaAIBotAimingSkillSet::TargetingRotationSpeedLimit' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetingRotationSnapThreshold) == 0x0009A0, "Member 'UFortAthenaAIBotAimingSkillSet::TargetingRotationSnapThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, NoWeaponAccuracy) == 0x0009C8, "Member 'UFortAthenaAIBotAimingSkillSet::NoWeaponAccuracy' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, WeaponAccuracies) == 0x001100, "Member 'UFortAthenaAIBotAimingSkillSet::WeaponAccuracies' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TargetBasedAccuracies) == 0x001110, "Member 'UFortAthenaAIBotAimingSkillSet::TargetBasedAccuracies' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, TrackingOffsetModifiers) == 0x001128, "Member 'UFortAthenaAIBotAimingSkillSet::TrackingOffsetModifiers' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAimingSkillSet, DefaultAimingCircleSettings) == 0x001138, "Member 'UFortAthenaAIBotAimingSkillSet::DefaultAimingCircleSettings' has a wrong offset!");

class UAISenseScalableConfig : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseScalableConfig">();
	}
	static class UAISenseScalableConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseScalableConfig>();
	}
};
static_assert(alignof(UAISenseScalableConfig) == 0x000008, "Wrong alignment on UAISenseScalableConfig");
static_assert(sizeof(UAISenseScalableConfig) == 0x000028, "Wrong size on UAISenseScalableConfig");

class UAthenaAIServiceGroup final : public UAthenaAIService
{
public:
	int32                                         GroupIndexCount;
	uint8                                         Pad_7C[0x4];
	TArray<struct FAthenaAIServiceGroupInfo>      GroupList;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIServiceGroup">();
	}
	static class UAthenaAIServiceGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIServiceGroup>();
	}
};
static_assert(alignof(UAthenaAIServiceGroup) == 0x000008, "Wrong alignment on UAthenaAIServiceGroup");
static_assert(sizeof(UAthenaAIServiceGroup) == 0x000090, "Wrong size on UAthenaAIServiceGroup");
static_assert(offsetof(UAthenaAIServiceGroup, GroupIndexCount) == 0x000078, "Member 'UAthenaAIServiceGroup::GroupIndexCount' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceGroup, GroupList) == 0x000080, "Member 'UAthenaAIServiceGroup::GroupList' has a wrong offset!");

class UAISenseScalableConfig_Sight final : public UAISenseScalableConfig
{
public:
	struct FScalableFloat                         SightRadius;
	struct FScalableFloat                         LoseSightRadius;
	struct FScalableFloat                         PeripheralVisionAngleDegrees;
	struct FScalableFloat                         PointOfViewBackwardOffset;
	struct FScalableFloat                         NearClippingRadius;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseScalableConfig_Sight">();
	}
	static class UAISenseScalableConfig_Sight* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseScalableConfig_Sight>();
	}
};
static_assert(alignof(UAISenseScalableConfig_Sight) == 0x000008, "Wrong alignment on UAISenseScalableConfig_Sight");
static_assert(sizeof(UAISenseScalableConfig_Sight) == 0x0000F0, "Wrong size on UAISenseScalableConfig_Sight");
static_assert(offsetof(UAISenseScalableConfig_Sight, SightRadius) == 0x000028, "Member 'UAISenseScalableConfig_Sight::SightRadius' has a wrong offset!");
static_assert(offsetof(UAISenseScalableConfig_Sight, LoseSightRadius) == 0x000050, "Member 'UAISenseScalableConfig_Sight::LoseSightRadius' has a wrong offset!");
static_assert(offsetof(UAISenseScalableConfig_Sight, PeripheralVisionAngleDegrees) == 0x000078, "Member 'UAISenseScalableConfig_Sight::PeripheralVisionAngleDegrees' has a wrong offset!");
static_assert(offsetof(UAISenseScalableConfig_Sight, PointOfViewBackwardOffset) == 0x0000A0, "Member 'UAISenseScalableConfig_Sight::PointOfViewBackwardOffset' has a wrong offset!");
static_assert(offsetof(UAISenseScalableConfig_Sight, NearClippingRadius) == 0x0000C8, "Member 'UAISenseScalableConfig_Sight::NearClippingRadius' has a wrong offset!");

class UAISenseScalableConfig_Hearing final : public UAISenseScalableConfig
{
public:
	struct FScalableFloat                         HearingRange;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseScalableConfig_Hearing">();
	}
	static class UAISenseScalableConfig_Hearing* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseScalableConfig_Hearing>();
	}
};
static_assert(alignof(UAISenseScalableConfig_Hearing) == 0x000008, "Wrong alignment on UAISenseScalableConfig_Hearing");
static_assert(sizeof(UAISenseScalableConfig_Hearing) == 0x000050, "Wrong size on UAISenseScalableConfig_Hearing");
static_assert(offsetof(UAISenseScalableConfig_Hearing, HearingRange) == 0x000028, "Member 'UAISenseScalableConfig_Hearing::HearingRange' has a wrong offset!");

class UFortAthenaBeaconComponent final : public UActorComponent
{
public:
	int32                                         MaxAttractedBots;
	float                                         AttractionRadius;
	TArray<class AActor*>                         RegisteredActors;
	TMulticastInlineDelegate<void()>              OnConsumeEvent;
	bool                                          bIsConsumed;
	uint8                                         Pad_C9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBeaconComponent">();
	}
	static class UFortAthenaBeaconComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBeaconComponent>();
	}
};
static_assert(alignof(UFortAthenaBeaconComponent) == 0x000008, "Wrong alignment on UFortAthenaBeaconComponent");
static_assert(sizeof(UFortAthenaBeaconComponent) == 0x0000D0, "Wrong size on UFortAthenaBeaconComponent");
static_assert(offsetof(UFortAthenaBeaconComponent, MaxAttractedBots) == 0x0000A0, "Member 'UFortAthenaBeaconComponent::MaxAttractedBots' has a wrong offset!");
static_assert(offsetof(UFortAthenaBeaconComponent, AttractionRadius) == 0x0000A4, "Member 'UFortAthenaBeaconComponent::AttractionRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaBeaconComponent, RegisteredActors) == 0x0000A8, "Member 'UFortAthenaBeaconComponent::RegisteredActors' has a wrong offset!");
static_assert(offsetof(UFortAthenaBeaconComponent, OnConsumeEvent) == 0x0000B8, "Member 'UFortAthenaBeaconComponent::OnConsumeEvent' has a wrong offset!");
static_assert(offsetof(UFortAthenaBeaconComponent, bIsConsumed) == 0x0000C8, "Member 'UFortAthenaBeaconComponent::bIsConsumed' has a wrong offset!");

class UFortAthenaAIBotAlertLevelConfig final : public UObject
{
public:
	int32                                         AlertLevels;
	uint8                                         Pad_2C[0x4];
	class UAISenseScalableConfig*                 ScalableSenseConfig;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotAlertLevelConfig">();
	}
	static class UFortAthenaAIBotAlertLevelConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotAlertLevelConfig>();
	}
};
static_assert(alignof(UFortAthenaAIBotAlertLevelConfig) == 0x000008, "Wrong alignment on UFortAthenaAIBotAlertLevelConfig");
static_assert(sizeof(UFortAthenaAIBotAlertLevelConfig) == 0x000038, "Wrong size on UFortAthenaAIBotAlertLevelConfig");
static_assert(offsetof(UFortAthenaAIBotAlertLevelConfig, AlertLevels) == 0x000028, "Member 'UFortAthenaAIBotAlertLevelConfig::AlertLevels' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAlertLevelConfig, ScalableSenseConfig) == 0x000030, "Member 'UFortAthenaAIBotAlertLevelConfig::ScalableSenseConfig' has a wrong offset!");

class UFortAthenaAIBotAttackingDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                         MaxDistanceToEngageMeleeSq;
	float                                         MinDistanceToGiveUpMeleeSq;
	float                                         MaxDistanceToThrowMeleeAttackSq;
	float                                         ExcludeReachingTargetInMeleeTime;
	float                                         ExcludeReachingTargetMoveDistanceSquared;
	bool                                          bUseContinuousMeleeAttack;
	bool                                          bOnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon;
	bool                                          bOnlyUsePickaxeAgainstGameParticipants;
	uint8                                         Pad_47[0x1];
	float                                         MaxDistanceToConsiderAsAnAlternateTargetSq;
	bool                                          bEnableAlternateTargetRequiredTags;
	uint8                                         Pad_4D[0x3];
	struct FGameplayTagContainer                  AlternateTargetRequiredTags;
	bool                                          bEnableWTFBehavior;
	uint8                                         Pad_71[0x3];
	float                                         MinCooldownDelayBetweenMeleeAttackAttempts;
	float                                         MaxCooldownDelayBetweenMeleeAttackAttempts;
	uint8                                         Pad_7C[0x4];
	struct FGameplayTagContainer                  ThrowableGameplayTags;
	struct FGameplayTagQuery                      CombatMeleeTagQuery;
	int32                                         MinThrowableCount;
	int32                                         MaxThrowableCount;
	float                                         ThrowableCooldownMin;
	float                                         ThrowableCooldownMax;
	float                                         ThrowableMinimumRangeSquared;
	bool                                          bThrowableEvaluatorActive;
	uint8                                         Pad_FD[0x3];
	float                                         RetreatMinHealthRange;
	float                                         RetreatMaxHealthRange;
	float                                         RetreatProbability;
	float                                         RetreatRangeMinSquared;
	float                                         RetreatRangeMaxSquared;
	float                                         RetreatMaxDuration;
	struct FVector                                RetreatPositionBoxExtent;
	bool                                          CautiousInvestigationEnabled;
	uint8                                         Pad_131[0x3];
	float                                         TimeSinceLastStimToBeCautious;
	float                                         CautiousInvestigationTimeMax;
	uint8                                         Pad_13C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotAttackingDigestedSkillSet">();
	}
	static class UFortAthenaAIBotAttackingDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotAttackingDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotAttackingDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotAttackingDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotAttackingDigestedSkillSet) == 0x000140, "Wrong size on UFortAthenaAIBotAttackingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, MaxDistanceToEngageMeleeSq) == 0x000030, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::MaxDistanceToEngageMeleeSq' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, MinDistanceToGiveUpMeleeSq) == 0x000034, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::MinDistanceToGiveUpMeleeSq' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, MaxDistanceToThrowMeleeAttackSq) == 0x000038, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::MaxDistanceToThrowMeleeAttackSq' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, ExcludeReachingTargetInMeleeTime) == 0x00003C, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::ExcludeReachingTargetInMeleeTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, ExcludeReachingTargetMoveDistanceSquared) == 0x000040, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::ExcludeReachingTargetMoveDistanceSquared' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, bUseContinuousMeleeAttack) == 0x000044, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::bUseContinuousMeleeAttack' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, bOnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon) == 0x000045, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::bOnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, bOnlyUsePickaxeAgainstGameParticipants) == 0x000046, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::bOnlyUsePickaxeAgainstGameParticipants' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, MaxDistanceToConsiderAsAnAlternateTargetSq) == 0x000048, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::MaxDistanceToConsiderAsAnAlternateTargetSq' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, bEnableAlternateTargetRequiredTags) == 0x00004C, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::bEnableAlternateTargetRequiredTags' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, AlternateTargetRequiredTags) == 0x000050, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::AlternateTargetRequiredTags' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, bEnableWTFBehavior) == 0x000070, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::bEnableWTFBehavior' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, MinCooldownDelayBetweenMeleeAttackAttempts) == 0x000074, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::MinCooldownDelayBetweenMeleeAttackAttempts' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, MaxCooldownDelayBetweenMeleeAttackAttempts) == 0x000078, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::MaxCooldownDelayBetweenMeleeAttackAttempts' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, ThrowableGameplayTags) == 0x000080, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::ThrowableGameplayTags' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, CombatMeleeTagQuery) == 0x0000A0, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::CombatMeleeTagQuery' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, MinThrowableCount) == 0x0000E8, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::MinThrowableCount' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, MaxThrowableCount) == 0x0000EC, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::MaxThrowableCount' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, ThrowableCooldownMin) == 0x0000F0, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::ThrowableCooldownMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, ThrowableCooldownMax) == 0x0000F4, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::ThrowableCooldownMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, ThrowableMinimumRangeSquared) == 0x0000F8, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::ThrowableMinimumRangeSquared' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, bThrowableEvaluatorActive) == 0x0000FC, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::bThrowableEvaluatorActive' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, RetreatMinHealthRange) == 0x000100, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::RetreatMinHealthRange' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, RetreatMaxHealthRange) == 0x000104, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::RetreatMaxHealthRange' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, RetreatProbability) == 0x000108, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::RetreatProbability' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, RetreatRangeMinSquared) == 0x00010C, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::RetreatRangeMinSquared' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, RetreatRangeMaxSquared) == 0x000110, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::RetreatRangeMaxSquared' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, RetreatMaxDuration) == 0x000114, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::RetreatMaxDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, RetreatPositionBoxExtent) == 0x000118, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::RetreatPositionBoxExtent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, CautiousInvestigationEnabled) == 0x000130, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::CautiousInvestigationEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, TimeSinceLastStimToBeCautious) == 0x000134, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::TimeSinceLastStimToBeCautious' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingDigestedSkillSet, CautiousInvestigationTimeMax) == 0x000138, "Member 'UFortAthenaAIBotAttackingDigestedSkillSet::CautiousInvestigationTimeMax' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_AIConvert : public UFortAthenaAIRuntimeParameters
{
public:
	bool                                          bCanBeConverted;
	bool                                          bCanBeConvertedFromDBNO;
	bool                                          bForceKillWhenUnconverted;
	bool                                          bForceKillWhenConverterDies;
	bool                                          bCopyConverterSpecificRelations;
	bool                                          bRemoveFromAllFactions;
	uint8                                         Pad_36[0x2];
	float                                         ReleaseDistanceSq;
	float                                         CheckReleaseConditionsTimeInterval;
	struct FGameplayTagContainer                  AddToFactions;
	struct FGameplayTagContainer                  RemoveFromFactions;
	uint8                                         PreConversionTeamIndex;
	uint8                                         Pad_81[0x7];
	struct FGameplayTagContainer                  PreConversionFactions;
	TArray<class UFortAbilitySet*>                AbilitySetsForConverted;
	struct FTeleportSettings                      TeleportSettings;
	bool                                          bEnableDBNO;
	ETInteractionType                             DBNOInteractionType;
	uint8                                         Pad_F2[0x2];
	float                                         DBNOInteractionDuration;
	TArray<struct FPickupTagConvertInfo>          PickupTagConvertInfos;

public:
	void SetCanBeConverted(const bool bInCanBeConverted);
	void SetCanBeConvertedFromDBNO(const bool bInCanBeConvertedFromDBNO);
	void SetForceKillWhenConverterDies(const bool bInForceKillWhenConverterDies);
	void SetForceKillWhenUnconverted(const bool bInForceKillWhenUnconverted);

	bool GetCanBeConverted() const;
	bool GetCanBeConvertedFromDBNO() const;
	bool GetForceKillWhenConverterDies() const;
	bool GetForceKillWhenUnconverted() const;
	const TArray<struct FPickupTagConvertInfo> GetPickupTagConvertInfos() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_AIConvert">();
	}
	static class UFortAthenaAIRuntimeParameters_AIConvert* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_AIConvert>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_AIConvert) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_AIConvert");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_AIConvert) == 0x000108, "Wrong size on UFortAthenaAIRuntimeParameters_AIConvert");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, bCanBeConverted) == 0x000030, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::bCanBeConverted' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, bCanBeConvertedFromDBNO) == 0x000031, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::bCanBeConvertedFromDBNO' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, bForceKillWhenUnconverted) == 0x000032, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::bForceKillWhenUnconverted' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, bForceKillWhenConverterDies) == 0x000033, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::bForceKillWhenConverterDies' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, bCopyConverterSpecificRelations) == 0x000034, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::bCopyConverterSpecificRelations' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, bRemoveFromAllFactions) == 0x000035, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::bRemoveFromAllFactions' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, ReleaseDistanceSq) == 0x000038, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::ReleaseDistanceSq' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, CheckReleaseConditionsTimeInterval) == 0x00003C, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::CheckReleaseConditionsTimeInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, AddToFactions) == 0x000040, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::AddToFactions' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, RemoveFromFactions) == 0x000060, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::RemoveFromFactions' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, PreConversionTeamIndex) == 0x000080, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::PreConversionTeamIndex' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, PreConversionFactions) == 0x000088, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::PreConversionFactions' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, AbilitySetsForConverted) == 0x0000A8, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::AbilitySetsForConverted' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, TeleportSettings) == 0x0000B8, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::TeleportSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, bEnableDBNO) == 0x0000F0, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::bEnableDBNO' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, DBNOInteractionType) == 0x0000F1, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::DBNOInteractionType' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, DBNOInteractionDuration) == 0x0000F4, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::DBNOInteractionDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIConvert, PickupTagConvertInfos) == 0x0000F8, "Member 'UFortAthenaAIRuntimeParameters_AIConvert::PickupTagConvertInfos' has a wrong offset!");

class UFortAthenaAIBotAttackingSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                         MaxDistanceToEngageMelee;
	struct FScalableFloat                         MinDistanceToGiveUpMelee;
	struct FScalableFloat                         MaxDistanceToThrowMeleeAttack;
	struct FScalableFloat                         UseContinuousMeleeAttack;
	struct FScalableFloat                         OnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon;
	struct FScalableFloat                         OnlyUsePickaxeAgainstGameParticipants;
	struct FScalableFloat                         EnableWTFBehavior;
	struct FScalableFloat                         MinCooldownDelayBetweenMeleeAttackAttempts;
	struct FScalableFloat                         MaxCooldownDelayBetweenMeleeAttackAttempts;
	struct FGameplayTagQuery                      CombatMeleeTagQuery;
	struct FScalableFloat                         ExcludeReachingTargetInMeleeTime;
	struct FScalableFloat                         ExcludeReachingTargetMoveDistance;
	struct FScalableFloat                         MaxDistanceToConsiderAsAnAlternateTarget;
	struct FScalableFloat                         EnableAlternateTargetRequiredTags;
	struct FGameplayTagContainer                  AlternateTargetRequiredTags;
	struct FGameplayTagContainer                  ThrowableGameplayTags;
	struct FScalableFloat                         MinThrowableCount;
	struct FScalableFloat                         MaxThrowableCount;
	struct FScalableFloat                         ThrowableCooldownMin;
	struct FScalableFloat                         ThrowableCooldownMax;
	struct FScalableFloat                         ThrowableMinimumRange;
	struct FScalableFloat                         ThrowableEvaluatorActive;
	struct FScalableFloat                         RetreatMinHealthRange;
	struct FScalableFloat                         RetreatMaxHealthRange;
	struct FScalableFloat                         RetreatProbability;
	struct FScalableFloat                         RetreatRangeMin;
	struct FScalableFloat                         RetreatRangeMax;
	struct FScalableFloat                         RetreatMaxDuration;
	struct FVector                                RetreatPositionBoxExtent;
	struct FScalableFloat                         CautiousInvestigationEnabled;
	struct FScalableFloat                         TimeSinceLastStimToBeCautious;
	struct FScalableFloat                         CautiousInvestigationTimeMax;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotAttackingSkillSet">();
	}
	static class UFortAthenaAIBotAttackingSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotAttackingSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotAttackingSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotAttackingSkillSet");
static_assert(sizeof(UFortAthenaAIBotAttackingSkillSet) == 0x000530, "Wrong size on UFortAthenaAIBotAttackingSkillSet");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, MaxDistanceToEngageMelee) == 0x000030, "Member 'UFortAthenaAIBotAttackingSkillSet::MaxDistanceToEngageMelee' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, MinDistanceToGiveUpMelee) == 0x000058, "Member 'UFortAthenaAIBotAttackingSkillSet::MinDistanceToGiveUpMelee' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, MaxDistanceToThrowMeleeAttack) == 0x000080, "Member 'UFortAthenaAIBotAttackingSkillSet::MaxDistanceToThrowMeleeAttack' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, UseContinuousMeleeAttack) == 0x0000A8, "Member 'UFortAthenaAIBotAttackingSkillSet::UseContinuousMeleeAttack' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, OnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon) == 0x0000D0, "Member 'UFortAthenaAIBotAttackingSkillSet::OnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, OnlyUsePickaxeAgainstGameParticipants) == 0x0000F8, "Member 'UFortAthenaAIBotAttackingSkillSet::OnlyUsePickaxeAgainstGameParticipants' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, EnableWTFBehavior) == 0x000120, "Member 'UFortAthenaAIBotAttackingSkillSet::EnableWTFBehavior' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, MinCooldownDelayBetweenMeleeAttackAttempts) == 0x000148, "Member 'UFortAthenaAIBotAttackingSkillSet::MinCooldownDelayBetweenMeleeAttackAttempts' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, MaxCooldownDelayBetweenMeleeAttackAttempts) == 0x000170, "Member 'UFortAthenaAIBotAttackingSkillSet::MaxCooldownDelayBetweenMeleeAttackAttempts' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, CombatMeleeTagQuery) == 0x000198, "Member 'UFortAthenaAIBotAttackingSkillSet::CombatMeleeTagQuery' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, ExcludeReachingTargetInMeleeTime) == 0x0001E0, "Member 'UFortAthenaAIBotAttackingSkillSet::ExcludeReachingTargetInMeleeTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, ExcludeReachingTargetMoveDistance) == 0x000208, "Member 'UFortAthenaAIBotAttackingSkillSet::ExcludeReachingTargetMoveDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, MaxDistanceToConsiderAsAnAlternateTarget) == 0x000230, "Member 'UFortAthenaAIBotAttackingSkillSet::MaxDistanceToConsiderAsAnAlternateTarget' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, EnableAlternateTargetRequiredTags) == 0x000258, "Member 'UFortAthenaAIBotAttackingSkillSet::EnableAlternateTargetRequiredTags' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, AlternateTargetRequiredTags) == 0x000280, "Member 'UFortAthenaAIBotAttackingSkillSet::AlternateTargetRequiredTags' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, ThrowableGameplayTags) == 0x0002A0, "Member 'UFortAthenaAIBotAttackingSkillSet::ThrowableGameplayTags' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, MinThrowableCount) == 0x0002C0, "Member 'UFortAthenaAIBotAttackingSkillSet::MinThrowableCount' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, MaxThrowableCount) == 0x0002E8, "Member 'UFortAthenaAIBotAttackingSkillSet::MaxThrowableCount' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, ThrowableCooldownMin) == 0x000310, "Member 'UFortAthenaAIBotAttackingSkillSet::ThrowableCooldownMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, ThrowableCooldownMax) == 0x000338, "Member 'UFortAthenaAIBotAttackingSkillSet::ThrowableCooldownMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, ThrowableMinimumRange) == 0x000360, "Member 'UFortAthenaAIBotAttackingSkillSet::ThrowableMinimumRange' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, ThrowableEvaluatorActive) == 0x000388, "Member 'UFortAthenaAIBotAttackingSkillSet::ThrowableEvaluatorActive' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, RetreatMinHealthRange) == 0x0003B0, "Member 'UFortAthenaAIBotAttackingSkillSet::RetreatMinHealthRange' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, RetreatMaxHealthRange) == 0x0003D8, "Member 'UFortAthenaAIBotAttackingSkillSet::RetreatMaxHealthRange' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, RetreatProbability) == 0x000400, "Member 'UFortAthenaAIBotAttackingSkillSet::RetreatProbability' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, RetreatRangeMin) == 0x000428, "Member 'UFortAthenaAIBotAttackingSkillSet::RetreatRangeMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, RetreatRangeMax) == 0x000450, "Member 'UFortAthenaAIBotAttackingSkillSet::RetreatRangeMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, RetreatMaxDuration) == 0x000478, "Member 'UFortAthenaAIBotAttackingSkillSet::RetreatMaxDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, RetreatPositionBoxExtent) == 0x0004A0, "Member 'UFortAthenaAIBotAttackingSkillSet::RetreatPositionBoxExtent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, CautiousInvestigationEnabled) == 0x0004B8, "Member 'UFortAthenaAIBotAttackingSkillSet::CautiousInvestigationEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, TimeSinceLastStimToBeCautious) == 0x0004E0, "Member 'UFortAthenaAIBotAttackingSkillSet::TimeSinceLastStimToBeCautious' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotAttackingSkillSet, CautiousInvestigationTimeMax) == 0x000508, "Member 'UFortAthenaAIBotAttackingSkillSet::CautiousInvestigationTimeMax' has a wrong offset!");

class UFortAthenaAIBotBuildingDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                         DefensiveBuildingDelayBetweenBuilds;
	float                                         DefensiveBuildingDelayDeviationBetweenBuilds;
	float                                         DelayBetweenBuildPieces;
	float                                         ForceEquipBuildToolDuration;
	float                                         StealWallTurboBuildDetectionTime;
	int32                                         StealWallAfterNumberOfTurboBuiltWall;
	float                                         StealWallEfficiency;
	float                                         StealWallBuildingTemplateWeights[0x5];
	TArray<struct FAthenaFortAIBotDigestedWeightedBuildingList> WeightedBuildingLists;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotBuildingDigestedSkillSet">();
	}
	static class UFortAthenaAIBotBuildingDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotBuildingDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotBuildingDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotBuildingDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotBuildingDigestedSkillSet) == 0x000070, "Wrong size on UFortAthenaAIBotBuildingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotBuildingDigestedSkillSet, DefensiveBuildingDelayBetweenBuilds) == 0x000030, "Member 'UFortAthenaAIBotBuildingDigestedSkillSet::DefensiveBuildingDelayBetweenBuilds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingDigestedSkillSet, DefensiveBuildingDelayDeviationBetweenBuilds) == 0x000034, "Member 'UFortAthenaAIBotBuildingDigestedSkillSet::DefensiveBuildingDelayDeviationBetweenBuilds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingDigestedSkillSet, DelayBetweenBuildPieces) == 0x000038, "Member 'UFortAthenaAIBotBuildingDigestedSkillSet::DelayBetweenBuildPieces' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingDigestedSkillSet, ForceEquipBuildToolDuration) == 0x00003C, "Member 'UFortAthenaAIBotBuildingDigestedSkillSet::ForceEquipBuildToolDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingDigestedSkillSet, StealWallTurboBuildDetectionTime) == 0x000040, "Member 'UFortAthenaAIBotBuildingDigestedSkillSet::StealWallTurboBuildDetectionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingDigestedSkillSet, StealWallAfterNumberOfTurboBuiltWall) == 0x000044, "Member 'UFortAthenaAIBotBuildingDigestedSkillSet::StealWallAfterNumberOfTurboBuiltWall' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingDigestedSkillSet, StealWallEfficiency) == 0x000048, "Member 'UFortAthenaAIBotBuildingDigestedSkillSet::StealWallEfficiency' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingDigestedSkillSet, StealWallBuildingTemplateWeights) == 0x00004C, "Member 'UFortAthenaAIBotBuildingDigestedSkillSet::StealWallBuildingTemplateWeights' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingDigestedSkillSet, WeightedBuildingLists) == 0x000060, "Member 'UFortAthenaAIBotBuildingDigestedSkillSet::WeightedBuildingLists' has a wrong offset!");

class UAthenaAIBotPOIDebugMiniMapIndicator final : public TObjectBasedCycleFixup<class UFortMiniMapIndicator, 0x0118, 0x08>
{
public:
	TArray<struct FBotPOIDebugInfo>               BotPOIDebugInfoList;
	TArray<struct FBotPOIExcludedZonesDebugInfo>  BotPOIExcludedZonesDebugInfoList;
	TArray<struct FVector>                        ClusteredLootLocationsDebug;
	TArray<class FString>                         ClusteredLootNamesDebug;
	int32                                         ClusteredLootDrawDebugLevel;
	int32                                         DynamicPOIDrawDebugLevel;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIBotPOIDebugMiniMapIndicator">();
	}
	static class UAthenaAIBotPOIDebugMiniMapIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIBotPOIDebugMiniMapIndicator>();
	}
};
static_assert(alignof(UAthenaAIBotPOIDebugMiniMapIndicator) == 0x000008, "Wrong alignment on UAthenaAIBotPOIDebugMiniMapIndicator");
static_assert(sizeof(UAthenaAIBotPOIDebugMiniMapIndicator) == 0x000188, "Wrong size on UAthenaAIBotPOIDebugMiniMapIndicator");
static_assert(offsetof(UAthenaAIBotPOIDebugMiniMapIndicator, BotPOIDebugInfoList) == 0x000140, "Member 'UAthenaAIBotPOIDebugMiniMapIndicator::BotPOIDebugInfoList' has a wrong offset!");
static_assert(offsetof(UAthenaAIBotPOIDebugMiniMapIndicator, BotPOIExcludedZonesDebugInfoList) == 0x000150, "Member 'UAthenaAIBotPOIDebugMiniMapIndicator::BotPOIExcludedZonesDebugInfoList' has a wrong offset!");
static_assert(offsetof(UAthenaAIBotPOIDebugMiniMapIndicator, ClusteredLootLocationsDebug) == 0x000160, "Member 'UAthenaAIBotPOIDebugMiniMapIndicator::ClusteredLootLocationsDebug' has a wrong offset!");
static_assert(offsetof(UAthenaAIBotPOIDebugMiniMapIndicator, ClusteredLootNamesDebug) == 0x000170, "Member 'UAthenaAIBotPOIDebugMiniMapIndicator::ClusteredLootNamesDebug' has a wrong offset!");
static_assert(offsetof(UAthenaAIBotPOIDebugMiniMapIndicator, ClusteredLootDrawDebugLevel) == 0x000180, "Member 'UAthenaAIBotPOIDebugMiniMapIndicator::ClusteredLootDrawDebugLevel' has a wrong offset!");
static_assert(offsetof(UAthenaAIBotPOIDebugMiniMapIndicator, DynamicPOIDrawDebugLevel) == 0x000184, "Member 'UAthenaAIBotPOIDebugMiniMapIndicator::DynamicPOIDrawDebugLevel' has a wrong offset!");

class UFortAthenaAIBotBuildingSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                         DefensiveBuildingDelayBetweenBuilds;
	struct FScalableFloat                         DefensiveBuildingDelayDeviationBetweenBuilds;
	struct FScalableFloat                         DelayBetweenBuildPieces;
	struct FScalableFloat                         ForceEquipBuildToolDuration;
	TArray<struct FAthenaFortAIBotWeightedBuildingList> WeightedBuildingLists;
	struct FScalableFloat                         StealWallTurboBuildDetectionTime;
	struct FScalableFloat                         StealWallAfterNumberOfTurboBuiltWall;
	struct FScalableFloat                         StealWallEfficiency;
	struct FScalableFloat                         StealWallBuildingTemplateWeights[0x5];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotBuildingSkillSet">();
	}
	static class UFortAthenaAIBotBuildingSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotBuildingSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotBuildingSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotBuildingSkillSet");
static_assert(sizeof(UFortAthenaAIBotBuildingSkillSet) == 0x000220, "Wrong size on UFortAthenaAIBotBuildingSkillSet");
static_assert(offsetof(UFortAthenaAIBotBuildingSkillSet, DefensiveBuildingDelayBetweenBuilds) == 0x000030, "Member 'UFortAthenaAIBotBuildingSkillSet::DefensiveBuildingDelayBetweenBuilds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingSkillSet, DefensiveBuildingDelayDeviationBetweenBuilds) == 0x000058, "Member 'UFortAthenaAIBotBuildingSkillSet::DefensiveBuildingDelayDeviationBetweenBuilds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingSkillSet, DelayBetweenBuildPieces) == 0x000080, "Member 'UFortAthenaAIBotBuildingSkillSet::DelayBetweenBuildPieces' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingSkillSet, ForceEquipBuildToolDuration) == 0x0000A8, "Member 'UFortAthenaAIBotBuildingSkillSet::ForceEquipBuildToolDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingSkillSet, WeightedBuildingLists) == 0x0000D0, "Member 'UFortAthenaAIBotBuildingSkillSet::WeightedBuildingLists' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingSkillSet, StealWallTurboBuildDetectionTime) == 0x0000E0, "Member 'UFortAthenaAIBotBuildingSkillSet::StealWallTurboBuildDetectionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingSkillSet, StealWallAfterNumberOfTurboBuiltWall) == 0x000108, "Member 'UFortAthenaAIBotBuildingSkillSet::StealWallAfterNumberOfTurboBuiltWall' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingSkillSet, StealWallEfficiency) == 0x000130, "Member 'UFortAthenaAIBotBuildingSkillSet::StealWallEfficiency' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotBuildingSkillSet, StealWallBuildingTemplateWeights) == 0x000158, "Member 'UFortAthenaAIBotBuildingSkillSet::StealWallBuildingTemplateWeights' has a wrong offset!");

class UFortAthenaAIBotCosmeticData final : public UDataAsset
{
public:
	TArray<TSoftObjectPtr<class UFortAthenaAIBotCosmeticLibraryData>> CosmeticLibraries;

public:
	TSoftObjectPtr<class UFortAthenaAIBotCosmeticLibraryData> FindLibraryDataFromName(const class FString& PartialName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotCosmeticData">();
	}
	static class UFortAthenaAIBotCosmeticData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotCosmeticData>();
	}
};
static_assert(alignof(UFortAthenaAIBotCosmeticData) == 0x000008, "Wrong alignment on UFortAthenaAIBotCosmeticData");
static_assert(sizeof(UFortAthenaAIBotCosmeticData) == 0x000040, "Wrong size on UFortAthenaAIBotCosmeticData");
static_assert(offsetof(UFortAthenaAIBotCosmeticData, CosmeticLibraries) == 0x000030, "Member 'UFortAthenaAIBotCosmeticData::CosmeticLibraries' has a wrong offset!");

class UFortAthenaAIBotCosmeticLibraryData final : public UPrimaryDataAsset
{
public:
	TSoftObjectPtr<class UDataTable>              PredefineSetsDataTable;
	TSoftObjectPtr<class UDataTable>              CharactersDataTable;
	TSoftObjectPtr<class UDataTable>              GlidersDataTable;
	TSoftObjectPtr<class UDataTable>              SkyDiveContrailsDataTable;
	TSoftObjectPtr<class UDataTable>              BackpacksDataTable;
	TSoftObjectPtr<class UDataTable>              PickaxesDataTable;
	TSoftObjectPtr<class UDataTable>              FallbackCharactersDataTable;
	TSoftObjectPtr<class UDataTable>              EmotesDataTable;
	TSoftObjectPtr<class UDataTable>              BannerIconDataTable;
	TSoftObjectPtr<class UDataTable>              BannerColorDataTable;
	struct FScalableFloat                         OddsToUseSameSetCosmeticItems;
	struct FScalableFloat                         OddsToUseRandomItemWhenNoneFromSetAvailable;

public:
	bool FillDataTableValuesFromSourceLibrary(const class UFortAthenaAIBotCosmeticLibraryData* SourceLibrary);
	class UDataTable* FindDataTableFromAssetType(const class FString& AssetType);

	TArray<class UDataTable*> RetrieveDataTables() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotCosmeticLibraryData">();
	}
	static class UFortAthenaAIBotCosmeticLibraryData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotCosmeticLibraryData>();
	}
};
static_assert(alignof(UFortAthenaAIBotCosmeticLibraryData) == 0x000008, "Wrong alignment on UFortAthenaAIBotCosmeticLibraryData");
static_assert(sizeof(UFortAthenaAIBotCosmeticLibraryData) == 0x000210, "Wrong size on UFortAthenaAIBotCosmeticLibraryData");
static_assert(offsetof(UFortAthenaAIBotCosmeticLibraryData, PredefineSetsDataTable) == 0x000030, "Member 'UFortAthenaAIBotCosmeticLibraryData::PredefineSetsDataTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCosmeticLibraryData, CharactersDataTable) == 0x000058, "Member 'UFortAthenaAIBotCosmeticLibraryData::CharactersDataTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCosmeticLibraryData, GlidersDataTable) == 0x000080, "Member 'UFortAthenaAIBotCosmeticLibraryData::GlidersDataTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCosmeticLibraryData, SkyDiveContrailsDataTable) == 0x0000A8, "Member 'UFortAthenaAIBotCosmeticLibraryData::SkyDiveContrailsDataTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCosmeticLibraryData, BackpacksDataTable) == 0x0000D0, "Member 'UFortAthenaAIBotCosmeticLibraryData::BackpacksDataTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCosmeticLibraryData, PickaxesDataTable) == 0x0000F8, "Member 'UFortAthenaAIBotCosmeticLibraryData::PickaxesDataTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCosmeticLibraryData, FallbackCharactersDataTable) == 0x000120, "Member 'UFortAthenaAIBotCosmeticLibraryData::FallbackCharactersDataTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCosmeticLibraryData, EmotesDataTable) == 0x000148, "Member 'UFortAthenaAIBotCosmeticLibraryData::EmotesDataTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCosmeticLibraryData, BannerIconDataTable) == 0x000170, "Member 'UFortAthenaAIBotCosmeticLibraryData::BannerIconDataTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCosmeticLibraryData, BannerColorDataTable) == 0x000198, "Member 'UFortAthenaAIBotCosmeticLibraryData::BannerColorDataTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCosmeticLibraryData, OddsToUseSameSetCosmeticItems) == 0x0001C0, "Member 'UFortAthenaAIBotCosmeticLibraryData::OddsToUseSameSetCosmeticItems' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCosmeticLibraryData, OddsToUseRandomItemWhenNoneFromSetAvailable) == 0x0001E8, "Member 'UFortAthenaAIBotCosmeticLibraryData::OddsToUseRandomItemWhenNoneFromSetAvailable' has a wrong offset!");

class UBotCosmeticBlueprintHelperLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool ExportDataTableToSourceCSV(const class UDataTable* DataTable, const bool bCanCheckOutFile);
	static bool GenerateWeightedCSV(const class FString& AssetTypeName, const TArray<class FString>& AssetNames, const TArray<int32>& AssetWeight, class FString* CSV);
	static bool LoadDataFromCSV(const class FString& FilePath, const TArray<class FString>& ForbiddenAssetNames, const TArray<class FString>& ForbiddenAssetPrefix, TArray<class FString>* AssetNames, TArray<class FString>* AssetTypes, TArray<int32>* AssetUsageCounts, TArray<int32>* AssetTypeSplitIndices);
	static TArray<class FString> OpenCSVFileDialog(const class FString& TitleDetails, const bool bAllowMultipleFiles);
	static bool SplitDataArrayByType(const TArray<class FString>& InAssetNames, const TArray<class FString>& InAssetTypes, const TArray<int32>& InAssetUsageCounts, const TArray<int32>& InAssetTypeSplitIndices, int32 CurrentSplitIndex, class FString* OutAssetType, TArray<class FString>* OutAssetNames, TArray<int32>* OutAssetUsageCounts);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BotCosmeticBlueprintHelperLibrary">();
	}
	static class UBotCosmeticBlueprintHelperLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBotCosmeticBlueprintHelperLibrary>();
	}
};
static_assert(alignof(UBotCosmeticBlueprintHelperLibrary) == 0x000008, "Wrong alignment on UBotCosmeticBlueprintHelperLibrary");
static_assert(sizeof(UBotCosmeticBlueprintHelperLibrary) == 0x000028, "Wrong size on UBotCosmeticBlueprintHelperLibrary");

class UPatrolPathRenderingComponent final : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PatrolPathRenderingComponent">();
	}
	static class UPatrolPathRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPatrolPathRenderingComponent>();
	}
};
static_assert(alignof(UPatrolPathRenderingComponent) == 0x000010, "Wrong alignment on UPatrolPathRenderingComponent");
static_assert(sizeof(UPatrolPathRenderingComponent) == 0x000570, "Wrong size on UPatrolPathRenderingComponent");

class UFortAthenaAIBotCustomizationData final : public UPrimaryDataAsset
{
public:
	TSubclassOf<class AFortPlayerPawnAthena>      PawnClass;
	uint8                                         bRequiresUniqueNetId : 1;
	uint8                                         bHasCustomSquadId : 1;
	uint8                                         CustomSquadId;
	uint8                                         bOverrideCanRespawnOnDeath : 1;
	uint8                                         bCanRespawnOnDeath : 1;
	uint8                                         bOverrideBehaviorTree : 1;
	uint8                                         bOverrideCharacterCustomization : 1;
	uint8                                         bOverrideDBNOPlayStyle : 1;
	uint8                                         bOverrideSkillLevel : 1;
	uint8                                         bUseMatchMMRToOverrideSkillLevel : 1;
	uint8                                         bOverrideSkillSets : 1;
	uint8                                         bOverrideStartupInventory : 1;
	uint8                                         bOverrideBotNameSettings : 1;
	uint8                                         bOverrideBotIDAnalyticsSuffix : 1;
	uint8                                         bOverrideConstructionBuildingInfo : 1;
	uint8                                         Pad_3C[0x4];
	TSoftObjectPtr<class UDataTable>              OverrideSkillLevelMMRTable;
	class UBehaviorTree*                          BehaviorTree;
	EBotDataOverrideCosmeticMode                  OverrideCosmeticMode;
	uint8                                         Pad_71[0x7];
	class UFortAthenaAIBotCharacterCustomization* CharacterCustomization;
	TSoftObjectPtr<class UFortAthenaAIBotCosmeticLibraryData> CosmeticCustomizationLibrary;
	EDBNOPlayStyle                                DBNOPlayStyle;
	uint8                                         Pad_A9[0x3];
	float                                         SkillLevel;
	uint8                                         Pad_B0[0x8];
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> SkillSetOverrideClasses;
	class UFortAthenaAIBotInventoryItems*         StartupInventory;
	class UFortBotNameSettings*                   BotNameSettings;
	class FString                                 BotAnalyticsSuffix;
	float                                         SpawnTracePadding;
	uint8                                         Pad_EC[0x4];
	struct FConstructionBuildingInfo              OverrideConstructionBuildingInfo[0x6];
	TSubclassOf<class UFortAthenaAILODSettingsContainer> AILODSettingsContainer;
	class UFortAthenaAILODSettingsContainer*      AILODSettingsContainerLoaded;

public:
	void SetCharacterCustomizationFromPlayerPawn(const class AFortPlayerPawn* InFortPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotCustomizationData">();
	}
	static class UFortAthenaAIBotCustomizationData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotCustomizationData>();
	}
};
static_assert(alignof(UFortAthenaAIBotCustomizationData) == 0x000008, "Wrong alignment on UFortAthenaAIBotCustomizationData");
static_assert(sizeof(UFortAthenaAIBotCustomizationData) == 0x000190, "Wrong size on UFortAthenaAIBotCustomizationData");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, PawnClass) == 0x000030, "Member 'UFortAthenaAIBotCustomizationData::PawnClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, CustomSquadId) == 0x000039, "Member 'UFortAthenaAIBotCustomizationData::CustomSquadId' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, OverrideSkillLevelMMRTable) == 0x000040, "Member 'UFortAthenaAIBotCustomizationData::OverrideSkillLevelMMRTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, BehaviorTree) == 0x000068, "Member 'UFortAthenaAIBotCustomizationData::BehaviorTree' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, OverrideCosmeticMode) == 0x000070, "Member 'UFortAthenaAIBotCustomizationData::OverrideCosmeticMode' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, CharacterCustomization) == 0x000078, "Member 'UFortAthenaAIBotCustomizationData::CharacterCustomization' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, CosmeticCustomizationLibrary) == 0x000080, "Member 'UFortAthenaAIBotCustomizationData::CosmeticCustomizationLibrary' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, DBNOPlayStyle) == 0x0000A8, "Member 'UFortAthenaAIBotCustomizationData::DBNOPlayStyle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, SkillLevel) == 0x0000AC, "Member 'UFortAthenaAIBotCustomizationData::SkillLevel' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, SkillSetOverrideClasses) == 0x0000B8, "Member 'UFortAthenaAIBotCustomizationData::SkillSetOverrideClasses' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, StartupInventory) == 0x0000C8, "Member 'UFortAthenaAIBotCustomizationData::StartupInventory' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, BotNameSettings) == 0x0000D0, "Member 'UFortAthenaAIBotCustomizationData::BotNameSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, BotAnalyticsSuffix) == 0x0000D8, "Member 'UFortAthenaAIBotCustomizationData::BotAnalyticsSuffix' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, SpawnTracePadding) == 0x0000E8, "Member 'UFortAthenaAIBotCustomizationData::SpawnTracePadding' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, OverrideConstructionBuildingInfo) == 0x0000F0, "Member 'UFortAthenaAIBotCustomizationData::OverrideConstructionBuildingInfo' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, AILODSettingsContainer) == 0x000180, "Member 'UFortAthenaAIBotCustomizationData::AILODSettingsContainer' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotCustomizationData, AILODSettingsContainerLoaded) == 0x000188, "Member 'UFortAthenaAIBotCustomizationData::AILODSettingsContainerLoaded' has a wrong offset!");

class UFortAthenaAIBotDBNODigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                         MaxDBNOCrawlingResponseTime;
	float                                         MaxDBNOCrawlingResponseTimeDeviation;
	float                                         AllyEvaluationTime;
	float                                         AllyEvaluationTimeDeviation;
	float                                         AllyEvaluationMaxDistance;
	float                                         OddsToLookForCover;
	float                                         CoverEvaluationTime;
	float                                         CoverEvaluationTimeDeviation;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotDBNODigestedSkillSet">();
	}
	static class UFortAthenaAIBotDBNODigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotDBNODigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotDBNODigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotDBNODigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotDBNODigestedSkillSet) == 0x000050, "Wrong size on UFortAthenaAIBotDBNODigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotDBNODigestedSkillSet, MaxDBNOCrawlingResponseTime) == 0x000030, "Member 'UFortAthenaAIBotDBNODigestedSkillSet::MaxDBNOCrawlingResponseTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotDBNODigestedSkillSet, MaxDBNOCrawlingResponseTimeDeviation) == 0x000034, "Member 'UFortAthenaAIBotDBNODigestedSkillSet::MaxDBNOCrawlingResponseTimeDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotDBNODigestedSkillSet, AllyEvaluationTime) == 0x000038, "Member 'UFortAthenaAIBotDBNODigestedSkillSet::AllyEvaluationTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotDBNODigestedSkillSet, AllyEvaluationTimeDeviation) == 0x00003C, "Member 'UFortAthenaAIBotDBNODigestedSkillSet::AllyEvaluationTimeDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotDBNODigestedSkillSet, AllyEvaluationMaxDistance) == 0x000040, "Member 'UFortAthenaAIBotDBNODigestedSkillSet::AllyEvaluationMaxDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotDBNODigestedSkillSet, OddsToLookForCover) == 0x000044, "Member 'UFortAthenaAIBotDBNODigestedSkillSet::OddsToLookForCover' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotDBNODigestedSkillSet, CoverEvaluationTime) == 0x000048, "Member 'UFortAthenaAIBotDBNODigestedSkillSet::CoverEvaluationTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotDBNODigestedSkillSet, CoverEvaluationTimeDeviation) == 0x00004C, "Member 'UFortAthenaAIBotDBNODigestedSkillSet::CoverEvaluationTimeDeviation' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_InventoryBase : public UFortAthenaAISpawnerDataComponent
{
public:
	TArray<struct FItemAndCount>                  Items;
	struct FScalableFloat                         ShouldDropCurrencyOnDeath;
	struct FScalableFloat                         DefaultInventoryIgnoresRestrictions;
	class FName                                   CurrencyPayoutRowName;
	uint8                                         Pad_94[0x4];
	struct FDataTableRowHandle                    LootInfo;
	bool                                          bDeathTagsCanBlockLootDrop;
	bool                                          bUseDefenderInventoryManagement;
	uint8                                         Pad_AA[0x6];

public:
	void GetInventoryItems(TArray<struct FItemAndCount>* OutList);
	void SetInventoryItems(const TArray<struct FItemAndCount>& InItems);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_InventoryBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_InventoryBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_InventoryBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_InventoryBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_InventoryBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_InventoryBase) == 0x0000B0, "Wrong size on UFortAthenaAISpawnerDataComponent_InventoryBase");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_InventoryBase, Items) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_InventoryBase::Items' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_InventoryBase, ShouldDropCurrencyOnDeath) == 0x000040, "Member 'UFortAthenaAISpawnerDataComponent_InventoryBase::ShouldDropCurrencyOnDeath' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_InventoryBase, DefaultInventoryIgnoresRestrictions) == 0x000068, "Member 'UFortAthenaAISpawnerDataComponent_InventoryBase::DefaultInventoryIgnoresRestrictions' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_InventoryBase, CurrencyPayoutRowName) == 0x000090, "Member 'UFortAthenaAISpawnerDataComponent_InventoryBase::CurrencyPayoutRowName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_InventoryBase, LootInfo) == 0x000098, "Member 'UFortAthenaAISpawnerDataComponent_InventoryBase::LootInfo' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_InventoryBase, bDeathTagsCanBlockLootDrop) == 0x0000A8, "Member 'UFortAthenaAISpawnerDataComponent_InventoryBase::bDeathTagsCanBlockLootDrop' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_InventoryBase, bUseDefenderInventoryManagement) == 0x0000A9, "Member 'UFortAthenaAISpawnerDataComponent_InventoryBase::bUseDefenderInventoryManagement' has a wrong offset!");

class UFortAthenaAIBotDBNOSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                         MaxDBNOCrawlingResponseTime;
	struct FScalableFloat                         MaxDBNOCrawlingResponseTimeDeviation;
	struct FScalableFloat                         AllyEvaluationTime;
	struct FScalableFloat                         AllyEvaluationTimeDeviation;
	struct FScalableFloat                         AllyEvaluationMaxDistance;
	struct FScalableFloat                         OddsToLookForCover;
	struct FScalableFloat                         CoverEvaluationTime;
	struct FScalableFloat                         CoverEvaluationTimeDeviation;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotDBNOSkillSet">();
	}
	static class UFortAthenaAIBotDBNOSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotDBNOSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotDBNOSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotDBNOSkillSet");
static_assert(sizeof(UFortAthenaAIBotDBNOSkillSet) == 0x000170, "Wrong size on UFortAthenaAIBotDBNOSkillSet");
static_assert(offsetof(UFortAthenaAIBotDBNOSkillSet, MaxDBNOCrawlingResponseTime) == 0x000030, "Member 'UFortAthenaAIBotDBNOSkillSet::MaxDBNOCrawlingResponseTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotDBNOSkillSet, MaxDBNOCrawlingResponseTimeDeviation) == 0x000058, "Member 'UFortAthenaAIBotDBNOSkillSet::MaxDBNOCrawlingResponseTimeDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotDBNOSkillSet, AllyEvaluationTime) == 0x000080, "Member 'UFortAthenaAIBotDBNOSkillSet::AllyEvaluationTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotDBNOSkillSet, AllyEvaluationTimeDeviation) == 0x0000A8, "Member 'UFortAthenaAIBotDBNOSkillSet::AllyEvaluationTimeDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotDBNOSkillSet, AllyEvaluationMaxDistance) == 0x0000D0, "Member 'UFortAthenaAIBotDBNOSkillSet::AllyEvaluationMaxDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotDBNOSkillSet, OddsToLookForCover) == 0x0000F8, "Member 'UFortAthenaAIBotDBNOSkillSet::OddsToLookForCover' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotDBNOSkillSet, CoverEvaluationTime) == 0x000120, "Member 'UFortAthenaAIBotDBNOSkillSet::CoverEvaluationTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotDBNOSkillSet, CoverEvaluationTimeDeviation) == 0x000148, "Member 'UFortAthenaAIBotDBNOSkillSet::CoverEvaluationTimeDeviation' has a wrong offset!");

class UFortAthenaAIBotEmoteDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                         InfiniteEmoteMinDuration;
	float                                         InfiniteEmoteMaxDuration;
	int32                                         EmotesMaxCount;
	float                                         DanceOnKillMaxDistanceFromKillSqr;
	float                                         DanceOnKillMaxTimeFromKill;
	float                                         DanceOnKillMinTimeFromLastTry;
	float                                         DanceOnKillChanceToDanceOnBots;
	float                                         DanceOnKillChanceToDanceOnPlayers;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEmoteDigestedSkillSet">();
	}
	static class UFortAthenaAIBotEmoteDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEmoteDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotEmoteDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotEmoteDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotEmoteDigestedSkillSet) == 0x000050, "Wrong size on UFortAthenaAIBotEmoteDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEmoteDigestedSkillSet, InfiniteEmoteMinDuration) == 0x000030, "Member 'UFortAthenaAIBotEmoteDigestedSkillSet::InfiniteEmoteMinDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEmoteDigestedSkillSet, InfiniteEmoteMaxDuration) == 0x000034, "Member 'UFortAthenaAIBotEmoteDigestedSkillSet::InfiniteEmoteMaxDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEmoteDigestedSkillSet, EmotesMaxCount) == 0x000038, "Member 'UFortAthenaAIBotEmoteDigestedSkillSet::EmotesMaxCount' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEmoteDigestedSkillSet, DanceOnKillMaxDistanceFromKillSqr) == 0x00003C, "Member 'UFortAthenaAIBotEmoteDigestedSkillSet::DanceOnKillMaxDistanceFromKillSqr' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEmoteDigestedSkillSet, DanceOnKillMaxTimeFromKill) == 0x000040, "Member 'UFortAthenaAIBotEmoteDigestedSkillSet::DanceOnKillMaxTimeFromKill' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEmoteDigestedSkillSet, DanceOnKillMinTimeFromLastTry) == 0x000044, "Member 'UFortAthenaAIBotEmoteDigestedSkillSet::DanceOnKillMinTimeFromLastTry' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEmoteDigestedSkillSet, DanceOnKillChanceToDanceOnBots) == 0x000048, "Member 'UFortAthenaAIBotEmoteDigestedSkillSet::DanceOnKillChanceToDanceOnBots' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEmoteDigestedSkillSet, DanceOnKillChanceToDanceOnPlayers) == 0x00004C, "Member 'UFortAthenaAIBotEmoteDigestedSkillSet::DanceOnKillChanceToDanceOnPlayers' has a wrong offset!");

class UAthenaAIServiceManager final : public UAISubsystem
{
public:
	uint8                                         Pad_38[0x18];
	TArray<class UAthenaAIService*>               AIServices;
	uint8                                         Pad_60[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIServiceManager">();
	}
	static class UAthenaAIServiceManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIServiceManager>();
	}
};
static_assert(alignof(UAthenaAIServiceManager) == 0x000008, "Wrong alignment on UAthenaAIServiceManager");
static_assert(sizeof(UAthenaAIServiceManager) == 0x000080, "Wrong size on UAthenaAIServiceManager");
static_assert(offsetof(UAthenaAIServiceManager, AIServices) == 0x000050, "Member 'UAthenaAIServiceManager::AIServices' has a wrong offset!");

class UFortAthenaAIBotEmoteSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                         InfiniteEmoteMinDuration;
	struct FScalableFloat                         InfiniteEmoteMaxDuration;
	struct FScalableFloat                         DanceOnKillMaxDistanceFromKill;
	struct FScalableFloat                         DanceOnKillMaxTimeFromKill;
	struct FScalableFloat                         DanceOnKillMinTimeFromLastTry;
	struct FScalableFloat                         DanceOnKillChanceToDanceOnBots;
	struct FScalableFloat                         DanceOnKillChanceToDanceOnPlayers;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEmoteSkillSet">();
	}
	static class UFortAthenaAIBotEmoteSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEmoteSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotEmoteSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotEmoteSkillSet");
static_assert(sizeof(UFortAthenaAIBotEmoteSkillSet) == 0x000148, "Wrong size on UFortAthenaAIBotEmoteSkillSet");
static_assert(offsetof(UFortAthenaAIBotEmoteSkillSet, InfiniteEmoteMinDuration) == 0x000030, "Member 'UFortAthenaAIBotEmoteSkillSet::InfiniteEmoteMinDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEmoteSkillSet, InfiniteEmoteMaxDuration) == 0x000058, "Member 'UFortAthenaAIBotEmoteSkillSet::InfiniteEmoteMaxDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEmoteSkillSet, DanceOnKillMaxDistanceFromKill) == 0x000080, "Member 'UFortAthenaAIBotEmoteSkillSet::DanceOnKillMaxDistanceFromKill' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEmoteSkillSet, DanceOnKillMaxTimeFromKill) == 0x0000A8, "Member 'UFortAthenaAIBotEmoteSkillSet::DanceOnKillMaxTimeFromKill' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEmoteSkillSet, DanceOnKillMinTimeFromLastTry) == 0x0000D0, "Member 'UFortAthenaAIBotEmoteSkillSet::DanceOnKillMinTimeFromLastTry' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEmoteSkillSet, DanceOnKillChanceToDanceOnBots) == 0x0000F8, "Member 'UFortAthenaAIBotEmoteSkillSet::DanceOnKillChanceToDanceOnBots' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEmoteSkillSet, DanceOnKillChanceToDanceOnPlayers) == 0x000120, "Member 'UFortAthenaAIBotEmoteSkillSet::DanceOnKillChanceToDanceOnPlayers' has a wrong offset!");

class UFortAthenaAIEvaluator : public UObject
{
public:
	class UBehaviorTreeComponent*                 CachedOwnerComp;
	class AAIController*                          CachedAIController;
	TSubclassOf<class UNavigationQueryFilter>     OverrideNavigationFilterClass;
	class FName                                   ExecutionStatusName;
	uint8                                         Pad_44[0xC];
	TScriptInterface<class IFortAthenaAILODSettings> CachedLODSettingsInterface;
	class UBlackboardKeyAccessValidator*          KeyAccessValidator;
	uint8                                         Pad_68[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIEvaluator">();
	}
	static class UFortAthenaAIEvaluator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIEvaluator>();
	}
};
static_assert(alignof(UFortAthenaAIEvaluator) == 0x000008, "Wrong alignment on UFortAthenaAIEvaluator");
static_assert(sizeof(UFortAthenaAIEvaluator) == 0x000088, "Wrong size on UFortAthenaAIEvaluator");
static_assert(offsetof(UFortAthenaAIEvaluator, CachedOwnerComp) == 0x000028, "Member 'UFortAthenaAIEvaluator::CachedOwnerComp' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator, CachedAIController) == 0x000030, "Member 'UFortAthenaAIEvaluator::CachedAIController' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator, OverrideNavigationFilterClass) == 0x000038, "Member 'UFortAthenaAIEvaluator::OverrideNavigationFilterClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator, ExecutionStatusName) == 0x000040, "Member 'UFortAthenaAIEvaluator::ExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator, CachedLODSettingsInterface) == 0x000050, "Member 'UFortAthenaAIEvaluator::CachedLODSettingsInterface' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator, KeyAccessValidator) == 0x000060, "Member 'UFortAthenaAIEvaluator::KeyAccessValidator' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_PerceptionBase : public UFortAthenaAISpawnerDataComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_PerceptionBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_PerceptionBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_PerceptionBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_PerceptionBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_PerceptionBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_PerceptionBase) == 0x000030, "Wrong size on UFortAthenaAISpawnerDataComponent_PerceptionBase");

class UFortAthenaAISpawnerDataComponent_AIBotPerception final : public UFortAthenaAISpawnerDataComponent_PerceptionBase
{
public:
	bool                                          bOverrideVisibilityRange;
	uint8                                         Pad_31[0x3];
	float                                         SightRadius;
	float                                         LoseSightRadius;
	uint8                                         Pad_3C[0x4];

public:
	void SetVisibilityRange(const float InSightRadius, const float LoseSightRadius_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIBotPerception">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIBotPerception* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIBotPerception>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIBotPerception) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIBotPerception");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIBotPerception) == 0x000040, "Wrong size on UFortAthenaAISpawnerDataComponent_AIBotPerception");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotPerception, bOverrideVisibilityRange) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_AIBotPerception::bOverrideVisibilityRange' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotPerception, SightRadius) == 0x000034, "Member 'UFortAthenaAISpawnerDataComponent_AIBotPerception::SightRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotPerception, LoseSightRadius) == 0x000038, "Member 'UFortAthenaAISpawnerDataComponent_AIBotPerception::LoseSightRadius' has a wrong offset!");

class UFortAthenaAIBotEvaluator : public UFortAthenaAIEvaluator
{
public:
	class AFortAthenaAIBotController*             CachedBotController;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator">();
	}
	static class UFortAthenaAIBotEvaluator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator");
static_assert(sizeof(UFortAthenaAIBotEvaluator) == 0x000090, "Wrong size on UFortAthenaAIBotEvaluator");
static_assert(offsetof(UFortAthenaAIBotEvaluator, CachedBotController) == 0x000088, "Member 'UFortAthenaAIBotEvaluator::CachedBotController' has a wrong offset!");

class UFortAthenaAIBotEvaluator_Movement : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   MovementStateKeyName;
	class FName                                   MovementDestinationKeyName;
	class FName                                   LastPartialPathTimeKeyName;
	class FName                                   LastPartialPathCountKeyName;
	class FName                                   LastBlockedPathCountKeyName;
	class FName                                   UnstuckInWaterExecutionStatusName;
	class FName                                   UnstuckLastBlockedByActorKeyName;
	class FName                                   UnstuckExecutionStatusKeyName;
	class FName                                   TeleportExecutionStatusKeyName;
	class FName                                   UndermineExecutionStatusKeyName;
	class FName                                   UndermineTargetKeyName;
	class FName                                   UndermineLocationImpactName;
	class FName                                   UnstuckSteerExecutionStatusKeyName;
	class FName                                   UnstuckSteerDirectionKeyName;
	class UAthenaAIServicePlayerBots*             CachedAIServicePlayerBots;
	uint8                                         Pad_D0[0x10];
	class UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementDigestedSkillSet;
	class UFortAthenaAIBotUnstuckDigestedSkillSet* UnstuckSkillSet;
	uint8                                         Pad_F0[0xA0];

public:
	void EvaluateIsolatedIslandSteering();
	void OnCurrentUnstuckSteeringAttemptFinished(const EBotUnstuckSteeringReason UnstuckSteeringReason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Movement">();
	}
	static class UFortAthenaAIBotEvaluator_Movement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Movement>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Movement) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Movement");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Movement) == 0x000190, "Wrong size on UFortAthenaAIBotEvaluator_Movement");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, MovementStateKeyName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_Movement::MovementStateKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, MovementDestinationKeyName) == 0x000094, "Member 'UFortAthenaAIBotEvaluator_Movement::MovementDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, LastPartialPathTimeKeyName) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_Movement::LastPartialPathTimeKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, LastPartialPathCountKeyName) == 0x00009C, "Member 'UFortAthenaAIBotEvaluator_Movement::LastPartialPathCountKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, LastBlockedPathCountKeyName) == 0x0000A0, "Member 'UFortAthenaAIBotEvaluator_Movement::LastBlockedPathCountKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, UnstuckInWaterExecutionStatusName) == 0x0000A4, "Member 'UFortAthenaAIBotEvaluator_Movement::UnstuckInWaterExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, UnstuckLastBlockedByActorKeyName) == 0x0000A8, "Member 'UFortAthenaAIBotEvaluator_Movement::UnstuckLastBlockedByActorKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, UnstuckExecutionStatusKeyName) == 0x0000AC, "Member 'UFortAthenaAIBotEvaluator_Movement::UnstuckExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, TeleportExecutionStatusKeyName) == 0x0000B0, "Member 'UFortAthenaAIBotEvaluator_Movement::TeleportExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, UndermineExecutionStatusKeyName) == 0x0000B4, "Member 'UFortAthenaAIBotEvaluator_Movement::UndermineExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, UndermineTargetKeyName) == 0x0000B8, "Member 'UFortAthenaAIBotEvaluator_Movement::UndermineTargetKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, UndermineLocationImpactName) == 0x0000BC, "Member 'UFortAthenaAIBotEvaluator_Movement::UndermineLocationImpactName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, UnstuckSteerExecutionStatusKeyName) == 0x0000C0, "Member 'UFortAthenaAIBotEvaluator_Movement::UnstuckSteerExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, UnstuckSteerDirectionKeyName) == 0x0000C4, "Member 'UFortAthenaAIBotEvaluator_Movement::UnstuckSteerDirectionKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, CachedAIServicePlayerBots) == 0x0000C8, "Member 'UFortAthenaAIBotEvaluator_Movement::CachedAIServicePlayerBots' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, CachedMovementDigestedSkillSet) == 0x0000E0, "Member 'UFortAthenaAIBotEvaluator_Movement::CachedMovementDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Movement, UnstuckSkillSet) == 0x0000E8, "Member 'UFortAthenaAIBotEvaluator_Movement::UnstuckSkillSet' has a wrong offset!");

class UFortAthenaAIPerk_Ambush final : public UFortAIPerkBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIPerk_Ambush">();
	}
	static class UFortAthenaAIPerk_Ambush* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIPerk_Ambush>();
	}
};
static_assert(alignof(UFortAthenaAIPerk_Ambush) == 0x000008, "Wrong alignment on UFortAthenaAIPerk_Ambush");
static_assert(sizeof(UFortAthenaAIPerk_Ambush) == 0x000168, "Wrong size on UFortAthenaAIPerk_Ambush");

class UFortAthenaAIBotEvaluator_Loot final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class UAthenaAIServiceLoot*                   CachedAIServiceLoot;
	class UFortAthenaAIBotLootingDigestedSkillSet* LootingSkillSet;
	uint8                                         Pad_1A0[0x10];
	class FName                                   LootDestinationKeyName;
	class FName                                   LootObjectKeyName;
	class FName                                   LootTypeKeyName;
	class FName                                   POINavigationExecutionStatusKeyName;
	uint8                                         Pad_1C0[0x8];
	EExecutionStatus                              POINavigationExecutionStatus;
	uint8                                         Pad_1C9[0x177];
	uint32                                        CurrentLootOctreeElementId;
	uint8                                         Pad_344[0x4];
	class AFortTeamInfoAthena*                    CachedTeamInfo;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Loot">();
	}
	static class UFortAthenaAIBotEvaluator_Loot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Loot>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Loot) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Loot");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Loot) == 0x000350, "Wrong size on UFortAthenaAIBotEvaluator_Loot");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Loot, CachedAIServiceLoot) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_Loot::CachedAIServiceLoot' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Loot, LootingSkillSet) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_Loot::LootingSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Loot, LootDestinationKeyName) == 0x0001B0, "Member 'UFortAthenaAIBotEvaluator_Loot::LootDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Loot, LootObjectKeyName) == 0x0001B4, "Member 'UFortAthenaAIBotEvaluator_Loot::LootObjectKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Loot, LootTypeKeyName) == 0x0001B8, "Member 'UFortAthenaAIBotEvaluator_Loot::LootTypeKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Loot, POINavigationExecutionStatusKeyName) == 0x0001BC, "Member 'UFortAthenaAIBotEvaluator_Loot::POINavigationExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Loot, POINavigationExecutionStatus) == 0x0001C8, "Member 'UFortAthenaAIBotEvaluator_Loot::POINavigationExecutionStatus' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Loot, CurrentLootOctreeElementId) == 0x000340, "Member 'UFortAthenaAIBotEvaluator_Loot::CurrentLootOctreeElementId' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Loot, CachedTeamInfo) == 0x000348, "Member 'UFortAthenaAIBotEvaluator_Loot::CachedTeamInfo' has a wrong offset!");

class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	uint8                                         Pad_30[0x8];
	struct FDigestedEvasiveManeuverSkillSettings  DefaultEvasiveManeuverSkillSettings;
	TArray<struct FDigestedEvasiveManeuverSkillSettingsSpecialization> EvasiveManeuverSkillSettingsSpecializations;
	float                                         JetpackStrafeDelay;
	float                                         JetpackStrafeRandomDeviationDelay;
	float                                         JetpackStrafeOverlayWeight;
	float                                         JetpackStrafeDistanceMax;
	float                                         JetpackStrafeDistanceMin;
	float                                         JetpackStrafeActivationTime;
	float                                         JetpackStrafeActivationTimeRandomDeviation;
	float                                         JetpackStrafeTime;
	float                                         JetpackStrafeTimeRandomDeviation;
	float                                         DodgeMaxDistanceSquared;
	float                                         CrouchMaxDistanceSquared;
	float                                         JumpMaxDistanceSquared;
	float                                         JetpackStrafeMaxDistanceSquared;
	float                                         AvoidProjectilesReactionDistanceSqr;
	float                                         AvoidProjectilesReactionTimeMin;
	float                                         AvoidProjectilesReactionTimeMax;
	float                                         AvoidProjectilesEvasiveDistanceMin;
	float                                         AvoidProjectilesEvasiveDistanceMax;
	float                                         AvoidPhysicsObjectsReactionDistanceMin;
	float                                         AvoidPhysicsObjectsReactionDistanceMax;
	float                                         AvoidPhysicsObjectsSpeedMin;
	float                                         AvoidPhysicsObjectsSpeedMax;
	struct FGameplayTagQuery                      CanUseEvasiveManeuversTagQuery;
	bool                                          bCanCrouchInUrgentMovement;
	bool                                          bCanDodgeInUrgentMovement;
	bool                                          bCanJumpInUrgentMovement;
	uint8                                         Pad_143[0x5];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvasiveManeuversDigestedSkillSet">();
	}
	static class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvasiveManeuversDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvasiveManeuversDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet) == 0x000148, "Wrong size on UFortAthenaAIBotEvasiveManeuversDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, DefaultEvasiveManeuverSkillSettings) == 0x000038, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::DefaultEvasiveManeuverSkillSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, EvasiveManeuverSkillSettingsSpecializations) == 0x000090, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::EvasiveManeuverSkillSettingsSpecializations' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, JetpackStrafeDelay) == 0x0000A0, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::JetpackStrafeDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, JetpackStrafeRandomDeviationDelay) == 0x0000A4, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::JetpackStrafeRandomDeviationDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, JetpackStrafeOverlayWeight) == 0x0000A8, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::JetpackStrafeOverlayWeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, JetpackStrafeDistanceMax) == 0x0000AC, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::JetpackStrafeDistanceMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, JetpackStrafeDistanceMin) == 0x0000B0, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::JetpackStrafeDistanceMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, JetpackStrafeActivationTime) == 0x0000B4, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::JetpackStrafeActivationTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, JetpackStrafeActivationTimeRandomDeviation) == 0x0000B8, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::JetpackStrafeActivationTimeRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, JetpackStrafeTime) == 0x0000BC, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::JetpackStrafeTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, JetpackStrafeTimeRandomDeviation) == 0x0000C0, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::JetpackStrafeTimeRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, DodgeMaxDistanceSquared) == 0x0000C4, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::DodgeMaxDistanceSquared' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, CrouchMaxDistanceSquared) == 0x0000C8, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::CrouchMaxDistanceSquared' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, JumpMaxDistanceSquared) == 0x0000CC, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::JumpMaxDistanceSquared' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, JetpackStrafeMaxDistanceSquared) == 0x0000D0, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::JetpackStrafeMaxDistanceSquared' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, AvoidProjectilesReactionDistanceSqr) == 0x0000D4, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::AvoidProjectilesReactionDistanceSqr' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, AvoidProjectilesReactionTimeMin) == 0x0000D8, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::AvoidProjectilesReactionTimeMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, AvoidProjectilesReactionTimeMax) == 0x0000DC, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::AvoidProjectilesReactionTimeMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, AvoidProjectilesEvasiveDistanceMin) == 0x0000E0, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::AvoidProjectilesEvasiveDistanceMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, AvoidProjectilesEvasiveDistanceMax) == 0x0000E4, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::AvoidProjectilesEvasiveDistanceMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, AvoidPhysicsObjectsReactionDistanceMin) == 0x0000E8, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::AvoidPhysicsObjectsReactionDistanceMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, AvoidPhysicsObjectsReactionDistanceMax) == 0x0000EC, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::AvoidPhysicsObjectsReactionDistanceMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, AvoidPhysicsObjectsSpeedMin) == 0x0000F0, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::AvoidPhysicsObjectsSpeedMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, AvoidPhysicsObjectsSpeedMax) == 0x0000F4, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::AvoidPhysicsObjectsSpeedMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, CanUseEvasiveManeuversTagQuery) == 0x0000F8, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::CanUseEvasiveManeuversTagQuery' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, bCanCrouchInUrgentMovement) == 0x000140, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::bCanCrouchInUrgentMovement' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, bCanDodgeInUrgentMovement) == 0x000141, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::bCanDodgeInUrgentMovement' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet, bCanJumpInUrgentMovement) == 0x000142, "Member 'UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::bCanJumpInUrgentMovement' has a wrong offset!");

class UFortAthenaAIBotEvasiveManeuversSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FEvasiveManeuverSkillSettings          DefaultEvasiveManeuverSkillSettings;
	TArray<struct FEvasiveManeuverSkillSettingsSpecialization> EvasiveManeuverSkillSettingsSpecializations;
	struct FScalableFloat                         JetpackStrafeOverlayWeight;
	struct FScalableFloat                         JetpackStrafeDelay;
	struct FScalableFloat                         JetpackStrafeRandomDeviationDelay;
	struct FScalableFloat                         JetpackStrafeDistanceMax;
	struct FScalableFloat                         JetpackStrafeDistanceMin;
	struct FScalableFloat                         JetpackStrafeActivationTime;
	struct FScalableFloat                         JetpackStrafeActivationTimeRandomDeviation;
	struct FScalableFloat                         JetpackStrafeTime;
	struct FScalableFloat                         JetpackStrafeTimeRandomDeviation;
	struct FScalableFloat                         DodgeMaxDistance;
	struct FScalableFloat                         CanDodgeInUrgentMovement;
	struct FScalableFloat                         CrouchMaxDistance;
	struct FScalableFloat                         CanCrouchInUrgentMovement;
	struct FScalableFloat                         JumpMaxDistance;
	struct FScalableFloat                         CanJumpInUrgentMovement;
	struct FScalableFloat                         JetpackStrafeMaxDistance;
	struct FScalableFloat                         AvoidProjectilesReactionDistanceMax;
	struct FScalableFloat                         AvoidProjectilesReactionTimeMin;
	struct FScalableFloat                         AvoidProjectilesReactionTimeMax;
	struct FScalableFloat                         AvoidProjectilesEvasiveDistanceMin;
	struct FScalableFloat                         AvoidProjectilesEvasiveDistanceMax;
	struct FScalableFloat                         AvoidPhysicsObjectsReactionDistanceMin;
	struct FScalableFloat                         AvoidPhysicsObjectsReactionDistanceMax;
	struct FScalableFloat                         AvoidPhysicsObjectsSpeedMin;
	struct FScalableFloat                         AvoidPhysicsObjectsSpeedMax;
	struct FGameplayTagQuery                      CanUseEvasiveManeuversTagQuery;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvasiveManeuversSkillSet">();
	}
	static class UFortAthenaAIBotEvasiveManeuversSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvasiveManeuversSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvasiveManeuversSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvasiveManeuversSkillSet");
static_assert(sizeof(UFortAthenaAIBotEvasiveManeuversSkillSet) == 0x0006C8, "Wrong size on UFortAthenaAIBotEvasiveManeuversSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, DefaultEvasiveManeuverSkillSettings) == 0x000030, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::DefaultEvasiveManeuverSkillSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, EvasiveManeuverSkillSettingsSpecializations) == 0x000288, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::EvasiveManeuverSkillSettingsSpecializations' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, JetpackStrafeOverlayWeight) == 0x000298, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::JetpackStrafeOverlayWeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, JetpackStrafeDelay) == 0x0002C0, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::JetpackStrafeDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, JetpackStrafeRandomDeviationDelay) == 0x0002E8, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::JetpackStrafeRandomDeviationDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, JetpackStrafeDistanceMax) == 0x000310, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::JetpackStrafeDistanceMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, JetpackStrafeDistanceMin) == 0x000338, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::JetpackStrafeDistanceMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, JetpackStrafeActivationTime) == 0x000360, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::JetpackStrafeActivationTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, JetpackStrafeActivationTimeRandomDeviation) == 0x000388, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::JetpackStrafeActivationTimeRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, JetpackStrafeTime) == 0x0003B0, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::JetpackStrafeTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, JetpackStrafeTimeRandomDeviation) == 0x0003D8, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::JetpackStrafeTimeRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, DodgeMaxDistance) == 0x000400, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::DodgeMaxDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, CanDodgeInUrgentMovement) == 0x000428, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::CanDodgeInUrgentMovement' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, CrouchMaxDistance) == 0x000450, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::CrouchMaxDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, CanCrouchInUrgentMovement) == 0x000478, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::CanCrouchInUrgentMovement' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, JumpMaxDistance) == 0x0004A0, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::JumpMaxDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, CanJumpInUrgentMovement) == 0x0004C8, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::CanJumpInUrgentMovement' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, JetpackStrafeMaxDistance) == 0x0004F0, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::JetpackStrafeMaxDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, AvoidProjectilesReactionDistanceMax) == 0x000518, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::AvoidProjectilesReactionDistanceMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, AvoidProjectilesReactionTimeMin) == 0x000540, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::AvoidProjectilesReactionTimeMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, AvoidProjectilesReactionTimeMax) == 0x000568, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::AvoidProjectilesReactionTimeMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, AvoidProjectilesEvasiveDistanceMin) == 0x000590, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::AvoidProjectilesEvasiveDistanceMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, AvoidProjectilesEvasiveDistanceMax) == 0x0005B8, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::AvoidProjectilesEvasiveDistanceMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, AvoidPhysicsObjectsReactionDistanceMin) == 0x0005E0, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::AvoidPhysicsObjectsReactionDistanceMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, AvoidPhysicsObjectsReactionDistanceMax) == 0x000608, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::AvoidPhysicsObjectsReactionDistanceMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, AvoidPhysicsObjectsSpeedMin) == 0x000630, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::AvoidPhysicsObjectsSpeedMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, AvoidPhysicsObjectsSpeedMax) == 0x000658, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::AvoidPhysicsObjectsSpeedMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvasiveManeuversSkillSet, CanUseEvasiveManeuversTagQuery) == 0x000680, "Member 'UFortAthenaAIBotEvasiveManeuversSkillSet::CanUseEvasiveManeuversTagQuery' has a wrong offset!");

class UFortAthenaAIBotHarvestDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                         DelayBetweenHarvest;
	float                                         DeviationTimeBetweenHarvest;
	float                                         HarvestingMaxDistanceSquared;
	float                                         WeakSpotHitProbability;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotHarvestDigestedSkillSet">();
	}
	static class UFortAthenaAIBotHarvestDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotHarvestDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotHarvestDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotHarvestDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotHarvestDigestedSkillSet) == 0x000040, "Wrong size on UFortAthenaAIBotHarvestDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotHarvestDigestedSkillSet, DelayBetweenHarvest) == 0x000030, "Member 'UFortAthenaAIBotHarvestDigestedSkillSet::DelayBetweenHarvest' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotHarvestDigestedSkillSet, DeviationTimeBetweenHarvest) == 0x000034, "Member 'UFortAthenaAIBotHarvestDigestedSkillSet::DeviationTimeBetweenHarvest' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotHarvestDigestedSkillSet, HarvestingMaxDistanceSquared) == 0x000038, "Member 'UFortAthenaAIBotHarvestDigestedSkillSet::HarvestingMaxDistanceSquared' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotHarvestDigestedSkillSet, WeakSpotHitProbability) == 0x00003C, "Member 'UFortAthenaAIBotHarvestDigestedSkillSet::WeakSpotHitProbability' has a wrong offset!");

class UFortAthenaAIBotHarvestSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                         DelayBetweenHarvest;
	struct FScalableFloat                         DeviationTimeBetweenHarvest;
	struct FScalableFloat                         HarvestingMaxDistance;
	struct FScalableFloat                         WeakSpotHitProbability;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotHarvestSkillSet">();
	}
	static class UFortAthenaAIBotHarvestSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotHarvestSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotHarvestSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotHarvestSkillSet");
static_assert(sizeof(UFortAthenaAIBotHarvestSkillSet) == 0x0000D0, "Wrong size on UFortAthenaAIBotHarvestSkillSet");
static_assert(offsetof(UFortAthenaAIBotHarvestSkillSet, DelayBetweenHarvest) == 0x000030, "Member 'UFortAthenaAIBotHarvestSkillSet::DelayBetweenHarvest' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotHarvestSkillSet, DeviationTimeBetweenHarvest) == 0x000058, "Member 'UFortAthenaAIBotHarvestSkillSet::DeviationTimeBetweenHarvest' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotHarvestSkillSet, HarvestingMaxDistance) == 0x000080, "Member 'UFortAthenaAIBotHarvestSkillSet::HarvestingMaxDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotHarvestSkillSet, WeakSpotHitProbability) == 0x0000A8, "Member 'UFortAthenaAIBotHarvestSkillSet::WeakSpotHitProbability' has a wrong offset!");

class UFortAthenaAIBotHealingDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	struct FFortBotDigestedHealingItemsList       HealthItemsList;
	TArray<struct FFortBotDigestedHealingItemsSpec> HealthItemsSpecializations;
	struct FFortBotDigestedHealingItemsList       ShieldItemsList;
	TArray<struct FFortBotDigestedHealingItemsSpec> ShieldItemsSpecializations;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotHealingDigestedSkillSet">();
	}
	static class UFortAthenaAIBotHealingDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotHealingDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotHealingDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotHealingDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotHealingDigestedSkillSet) == 0x000070, "Wrong size on UFortAthenaAIBotHealingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotHealingDigestedSkillSet, HealthItemsList) == 0x000030, "Member 'UFortAthenaAIBotHealingDigestedSkillSet::HealthItemsList' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotHealingDigestedSkillSet, HealthItemsSpecializations) == 0x000040, "Member 'UFortAthenaAIBotHealingDigestedSkillSet::HealthItemsSpecializations' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotHealingDigestedSkillSet, ShieldItemsList) == 0x000050, "Member 'UFortAthenaAIBotHealingDigestedSkillSet::ShieldItemsList' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotHealingDigestedSkillSet, ShieldItemsSpecializations) == 0x000060, "Member 'UFortAthenaAIBotHealingDigestedSkillSet::ShieldItemsSpecializations' has a wrong offset!");

class UFortAthenaAIBotHealingSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FFortBotHealingItemsList               HealthItemsList;
	TArray<struct FFortBotHealingItemsSpec>       HealthItemsSpecializations;
	struct FFortBotHealingItemsList               ShieldItemsList;
	TArray<struct FFortBotHealingItemsSpec>       ShieldItemsSpecializations;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotHealingSkillSet">();
	}
	static class UFortAthenaAIBotHealingSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotHealingSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotHealingSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotHealingSkillSet");
static_assert(sizeof(UFortAthenaAIBotHealingSkillSet) == 0x000070, "Wrong size on UFortAthenaAIBotHealingSkillSet");
static_assert(offsetof(UFortAthenaAIBotHealingSkillSet, HealthItemsList) == 0x000030, "Member 'UFortAthenaAIBotHealingSkillSet::HealthItemsList' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotHealingSkillSet, HealthItemsSpecializations) == 0x000040, "Member 'UFortAthenaAIBotHealingSkillSet::HealthItemsSpecializations' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotHealingSkillSet, ShieldItemsList) == 0x000050, "Member 'UFortAthenaAIBotHealingSkillSet::ShieldItemsList' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotHealingSkillSet, ShieldItemsSpecializations) == 0x000060, "Member 'UFortAthenaAIBotHealingSkillSet::ShieldItemsSpecializations' has a wrong offset!");

class UFortAthenaAIBotInventoryDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                         DefaultWeaponSelectionDistance;
	float                                         DefaultWeaponSelectionDistanceDeviation;
	bool                                          bHasInfiniteResources;
	bool                                          bHasInfiniteAmmoForAllWeapons;
	uint8                                         Pad_3A[0x6];
	struct FGameplayTagContainer                  InventorySlotPreference[0x6];
	TArray<struct FDigestedBotEquipWeaponInfo>    EquipWeaponInfo;
	bool                                          bShouldPrioritizeRangedWeaponWithoutTarget;
	uint8                                         Pad_111[0x7];
	struct FGameplayTagContainer                  InfiniteAmmoCheats;
	TArray<struct FItemAndCount>                  MaterialItems;
	float                                         GiveMaterialsToBotFrequency;
	uint8                                         Pad_14C[0x4];
	struct FGameplayTagContainer                  CheckLoadedAmmoForInfiniteAmmoCheats;
	float                                         NoWeaponGiveWeaponAfterTime;
	float                                         NoWeaponNoPlayerConeDistance;
	float                                         NoWeaponNoPlayerConeFOV;
	class FName                                   NoWeaponLootTierGroup;
	struct FGameplayTagContainer                  IgnoredAsWeaponTags;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotInventoryDigestedSkillSet">();
	}
	static class UFortAthenaAIBotInventoryDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotInventoryDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotInventoryDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotInventoryDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotInventoryDigestedSkillSet) == 0x0001A0, "Wrong size on UFortAthenaAIBotInventoryDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, DefaultWeaponSelectionDistance) == 0x000030, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::DefaultWeaponSelectionDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, DefaultWeaponSelectionDistanceDeviation) == 0x000034, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::DefaultWeaponSelectionDistanceDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, bHasInfiniteResources) == 0x000038, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::bHasInfiniteResources' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, bHasInfiniteAmmoForAllWeapons) == 0x000039, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::bHasInfiniteAmmoForAllWeapons' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, InventorySlotPreference) == 0x000040, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::InventorySlotPreference' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, EquipWeaponInfo) == 0x000100, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::EquipWeaponInfo' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, bShouldPrioritizeRangedWeaponWithoutTarget) == 0x000110, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::bShouldPrioritizeRangedWeaponWithoutTarget' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, InfiniteAmmoCheats) == 0x000118, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::InfiniteAmmoCheats' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, MaterialItems) == 0x000138, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::MaterialItems' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, GiveMaterialsToBotFrequency) == 0x000148, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::GiveMaterialsToBotFrequency' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, CheckLoadedAmmoForInfiniteAmmoCheats) == 0x000150, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::CheckLoadedAmmoForInfiniteAmmoCheats' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, NoWeaponGiveWeaponAfterTime) == 0x000170, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::NoWeaponGiveWeaponAfterTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, NoWeaponNoPlayerConeDistance) == 0x000174, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::NoWeaponNoPlayerConeDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, NoWeaponNoPlayerConeFOV) == 0x000178, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::NoWeaponNoPlayerConeFOV' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, NoWeaponLootTierGroup) == 0x00017C, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::NoWeaponLootTierGroup' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventoryDigestedSkillSet, IgnoredAsWeaponTags) == 0x000180, "Member 'UFortAthenaAIBotInventoryDigestedSkillSet::IgnoredAsWeaponTags' has a wrong offset!");

class UFortAthenaAIBotInventorySkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                         DefaultWeaponSelectionDistance;
	struct FScalableFloat                         DefaultWeaponSelectionDistanceDeviation;
	struct FScalableFloat                         HasInfiniteResources;
	struct FGameplayTagContainer                  InventorySlotPreference[0x6];
	TArray<struct FBotEquipWeaponInfo>            EquipWeaponInfo;
	struct FScalableFloat                         ShouldPrioritizeRangedWeaponWithoutTarget;
	struct FScalableFloat                         HasInfiniteAmmoForAllWeapons;
	TArray<struct FWeaponAmmoCheat>               AmmoCheats;
	TArray<struct FItemAndCount>                  MaterialItems;
	struct FScalableFloat                         GiveMaterialsToBotFrequency;
	struct FScalableFloat                         NoWeaponGiveWeaponAfterTime;
	struct FScalableFloat                         NoWeaponNoPlayerConeDistance;
	struct FScalableFloat                         NoWeaponNoPlayerConeFOV;
	class FName                                   NoWeaponLootTierGroup;
	uint8                                         Pad_28C[0x4];
	struct FGameplayTagContainer                  IgnoredAsWeaponTags;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotInventorySkillSet">();
	}
	static class UFortAthenaAIBotInventorySkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotInventorySkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotInventorySkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotInventorySkillSet");
static_assert(sizeof(UFortAthenaAIBotInventorySkillSet) == 0x0002B0, "Wrong size on UFortAthenaAIBotInventorySkillSet");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, DefaultWeaponSelectionDistance) == 0x000030, "Member 'UFortAthenaAIBotInventorySkillSet::DefaultWeaponSelectionDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, DefaultWeaponSelectionDistanceDeviation) == 0x000058, "Member 'UFortAthenaAIBotInventorySkillSet::DefaultWeaponSelectionDistanceDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, HasInfiniteResources) == 0x000080, "Member 'UFortAthenaAIBotInventorySkillSet::HasInfiniteResources' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, InventorySlotPreference) == 0x0000A8, "Member 'UFortAthenaAIBotInventorySkillSet::InventorySlotPreference' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, EquipWeaponInfo) == 0x000168, "Member 'UFortAthenaAIBotInventorySkillSet::EquipWeaponInfo' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, ShouldPrioritizeRangedWeaponWithoutTarget) == 0x000178, "Member 'UFortAthenaAIBotInventorySkillSet::ShouldPrioritizeRangedWeaponWithoutTarget' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, HasInfiniteAmmoForAllWeapons) == 0x0001A0, "Member 'UFortAthenaAIBotInventorySkillSet::HasInfiniteAmmoForAllWeapons' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, AmmoCheats) == 0x0001C8, "Member 'UFortAthenaAIBotInventorySkillSet::AmmoCheats' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, MaterialItems) == 0x0001D8, "Member 'UFortAthenaAIBotInventorySkillSet::MaterialItems' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, GiveMaterialsToBotFrequency) == 0x0001E8, "Member 'UFortAthenaAIBotInventorySkillSet::GiveMaterialsToBotFrequency' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, NoWeaponGiveWeaponAfterTime) == 0x000210, "Member 'UFortAthenaAIBotInventorySkillSet::NoWeaponGiveWeaponAfterTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, NoWeaponNoPlayerConeDistance) == 0x000238, "Member 'UFortAthenaAIBotInventorySkillSet::NoWeaponNoPlayerConeDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, NoWeaponNoPlayerConeFOV) == 0x000260, "Member 'UFortAthenaAIBotInventorySkillSet::NoWeaponNoPlayerConeFOV' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, NoWeaponLootTierGroup) == 0x000288, "Member 'UFortAthenaAIBotInventorySkillSet::NoWeaponLootTierGroup' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotInventorySkillSet, IgnoredAsWeaponTags) == 0x000290, "Member 'UFortAthenaAIBotInventorySkillSet::IgnoredAsWeaponTags' has a wrong offset!");

class UFortAthenaAIBotLootingDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                         ThresholdDistanceToSwitchLootItem;
	float                                         ThresholdDistanceSquaredToRescanForBetterLoot;
	float                                         ThresholdTimeToRescanForBetterLoot;
	uint8                                         Pad_3C[0x4];
	struct FVector                                OctreeBoxHalfExtent;
	float                                         LootStateEvaluationRadiusSq;
	float                                         MinLootDurationPerPOI;
	float                                         MaxLootDurationPerPOI;
	float                                         LootPickupInteractionTime;
	float                                         LootPickupInteractionDeviationTime;
	float                                         Distance2DScore;
	float                                         HeightScore;
	float                                         ThreatMaxScore;
	struct FScalableFloat                         ThreatProximityScoreTable;
	float                                         PrioritizeWeaponScore;
	float                                         PoiSelectionDistanceScore;
	float                                         PoiSelectionBotPresenceScore;
	uint8                                         Pad_AC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotLootingDigestedSkillSet">();
	}
	static class UFortAthenaAIBotLootingDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotLootingDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotLootingDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotLootingDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotLootingDigestedSkillSet) == 0x0000B0, "Wrong size on UFortAthenaAIBotLootingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, ThresholdDistanceToSwitchLootItem) == 0x000030, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::ThresholdDistanceToSwitchLootItem' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, ThresholdDistanceSquaredToRescanForBetterLoot) == 0x000034, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::ThresholdDistanceSquaredToRescanForBetterLoot' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, ThresholdTimeToRescanForBetterLoot) == 0x000038, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::ThresholdTimeToRescanForBetterLoot' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, OctreeBoxHalfExtent) == 0x000040, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::OctreeBoxHalfExtent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, LootStateEvaluationRadiusSq) == 0x000058, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::LootStateEvaluationRadiusSq' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, MinLootDurationPerPOI) == 0x00005C, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::MinLootDurationPerPOI' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, MaxLootDurationPerPOI) == 0x000060, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::MaxLootDurationPerPOI' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, LootPickupInteractionTime) == 0x000064, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::LootPickupInteractionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, LootPickupInteractionDeviationTime) == 0x000068, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::LootPickupInteractionDeviationTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, Distance2DScore) == 0x00006C, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::Distance2DScore' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, HeightScore) == 0x000070, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::HeightScore' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, ThreatMaxScore) == 0x000074, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::ThreatMaxScore' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, ThreatProximityScoreTable) == 0x000078, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::ThreatProximityScoreTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, PrioritizeWeaponScore) == 0x0000A0, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::PrioritizeWeaponScore' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, PoiSelectionDistanceScore) == 0x0000A4, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::PoiSelectionDistanceScore' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingDigestedSkillSet, PoiSelectionBotPresenceScore) == 0x0000A8, "Member 'UFortAthenaAIBotLootingDigestedSkillSet::PoiSelectionBotPresenceScore' has a wrong offset!");

class UFortAthenaAIBotLootingSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                         ThresholdDistanceToSwitchLootItem;
	struct FScalableFloat                         ThresholdDistanceToRescanForBetterLoot;
	struct FScalableFloat                         ThresholdTimeToRescanForBetterLoot;
	struct FVector                                OctreeBoxExtent;
	struct FScalableFloat                         LootStateEvaluationRadius;
	struct FScalableFloat                         MinLootDurationPerPOI;
	struct FScalableFloat                         MaxLootDurationPerPOI;
	struct FScalableFloat                         LootPickupInteractionTime;
	struct FScalableFloat                         LootPickupInteractionDeviationTime;
	struct FScalableFloat                         Distance2DScore;
	struct FScalableFloat                         HeightScore;
	struct FScalableFloat                         ThreatMaxScore;
	struct FScalableFloat                         ThreatProximityScoreTable;
	struct FScalableFloat                         PrioritizeWeaponScore;
	struct FScalableFloat                         PoiSelectionDistanceScore;
	struct FScalableFloat                         PoiSelectionBotPresenceScore;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotLootingSkillSet">();
	}
	static class UFortAthenaAIBotLootingSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotLootingSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotLootingSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotLootingSkillSet");
static_assert(sizeof(UFortAthenaAIBotLootingSkillSet) == 0x0002A0, "Wrong size on UFortAthenaAIBotLootingSkillSet");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, ThresholdDistanceToSwitchLootItem) == 0x000030, "Member 'UFortAthenaAIBotLootingSkillSet::ThresholdDistanceToSwitchLootItem' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, ThresholdDistanceToRescanForBetterLoot) == 0x000058, "Member 'UFortAthenaAIBotLootingSkillSet::ThresholdDistanceToRescanForBetterLoot' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, ThresholdTimeToRescanForBetterLoot) == 0x000080, "Member 'UFortAthenaAIBotLootingSkillSet::ThresholdTimeToRescanForBetterLoot' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, OctreeBoxExtent) == 0x0000A8, "Member 'UFortAthenaAIBotLootingSkillSet::OctreeBoxExtent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, LootStateEvaluationRadius) == 0x0000C0, "Member 'UFortAthenaAIBotLootingSkillSet::LootStateEvaluationRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, MinLootDurationPerPOI) == 0x0000E8, "Member 'UFortAthenaAIBotLootingSkillSet::MinLootDurationPerPOI' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, MaxLootDurationPerPOI) == 0x000110, "Member 'UFortAthenaAIBotLootingSkillSet::MaxLootDurationPerPOI' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, LootPickupInteractionTime) == 0x000138, "Member 'UFortAthenaAIBotLootingSkillSet::LootPickupInteractionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, LootPickupInteractionDeviationTime) == 0x000160, "Member 'UFortAthenaAIBotLootingSkillSet::LootPickupInteractionDeviationTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, Distance2DScore) == 0x000188, "Member 'UFortAthenaAIBotLootingSkillSet::Distance2DScore' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, HeightScore) == 0x0001B0, "Member 'UFortAthenaAIBotLootingSkillSet::HeightScore' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, ThreatMaxScore) == 0x0001D8, "Member 'UFortAthenaAIBotLootingSkillSet::ThreatMaxScore' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, ThreatProximityScoreTable) == 0x000200, "Member 'UFortAthenaAIBotLootingSkillSet::ThreatProximityScoreTable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, PrioritizeWeaponScore) == 0x000228, "Member 'UFortAthenaAIBotLootingSkillSet::PrioritizeWeaponScore' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, PoiSelectionDistanceScore) == 0x000250, "Member 'UFortAthenaAIBotLootingSkillSet::PoiSelectionDistanceScore' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotLootingSkillSet, PoiSelectionBotPresenceScore) == 0x000278, "Member 'UFortAthenaAIBotLootingSkillSet::PoiSelectionBotPresenceScore' has a wrong offset!");

class UFortAthenaAIBotMovementDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                         SlowDownDistanceSquared;
	float                                         TraversalSpeedEstimation;
	float                                         TraversalSpeedEstimationWithThreat;
	bool                                          bOffPathDetectionEnabled;
	uint8                                         Pad_3D[0x3];
	float                                         OffPathDistanceThresholdSquared;
	float                                         GliderDeployMinAngle;
	float                                         GliderDeployMaxAngle;
	float                                         GliderNoiseMinDistance;
	float                                         GliderNoiseMaxDistance;
	float                                         GliderNoiseMinDelay;
	float                                         GliderNoiseMaxDelay;
	float                                         GliderNoiseDistanceTreshold;
	float                                         GliderStopRotationDistance;
	float                                         GliderLandingDistance;
	float                                         GliderRotationLerpDuration;
	bool                                          GliderBehaviorEnableFlag;
	uint8                                         Pad_6D[0x3];
	float                                         GliderBehaviorMinInterval;
	float                                         GliderBehaviorMaxInterval;
	float                                         GliderBehaviorMinRadius;
	float                                         GliderBehaviorMaxRadius;
	float                                         GliderBehaviorSurveyProbability;
	bool                                          GliderMovementTypeEnableFlag;
	uint8                                         Pad_85[0x3];
	float                                         GliderLinearProbability;
	float                                         GliderSpiralMinRadius;
	float                                         GliderSpiralMaxRadius;
	float                                         GliderSpiralMinAngle;
	float                                         GliderSpiralMaxAngle;
	float                                         GliderSpiralMinInterval;
	float                                         GliderSpiralMaxInterval;
	float                                         GliderSpiralProbability;
	float                                         GliderSerpentineMinAngle;
	float                                         GliderSerpentineMaxAngle;
	float                                         GliderSerpentineMinRadius;
	float                                         GliderSerpentineMaxRadius;
	float                                         GliderSerpentineMinInterval;
	float                                         GliderSerpentineMaxInterval;
	float                                         GliderSerpentineMinPeriod;
	float                                         GliderSerpentineMaxPeriod;
	float                                         GliderSerpentineProbability;
	float                                         JumpOffMinAngle;
	float                                         JumpOffMaxAngle;
	float                                         MinPatrolDistance;
	float                                         MaxPatrolDistance;
	float                                         MaxPatrolDistanceRandomDeviation;
	float                                         WobbleProbability;
	float                                         MaxDelayBetweenWobblingMovement;
	float                                         MaxDelayBetweenWobblingMovementRandomDeviation;
	bool                                          bAllowSwimWobble;
	uint8                                         Pad_ED[0x3];
	float                                         MaxWobblingDuration;
	float                                         MaxWobblingDurationRandomDeviation;
	float                                         MaxWobblingIntensity;
	float                                         WobblingIntensityDeviation;
	float                                         MaxWobblingFrequency;
	float                                         WobblingFrequencyDeviation;
	float                                         WobblingStickToPathCorridorStrength;
	float                                         MaxAfterLaunchedPauseTime;
	float                                         MaxAfterLaunchedFromVortexPauseTime;
	float                                         AfterLaunchedPauseTimeDeviation;
	bool                                          bSteerMovementWhenLaunched;
	uint8                                         Pad_119[0x3];
	float                                         SteerMovementWhenLaunchedDirectionUpdateTime;
	float                                         MaxReactionTimeToDangerZone;
	float                                         MaxReactionTimeToDangerZoneDeviation;
	bool                                          bLimitBlockingObstacleAngle;
	bool                                          bEnableSwimSprintJump;
	uint8                                         Pad_12A[0x2];
	float                                         SwimSprintJumpDelay;
	float                                         SwimSprintJumpDelayDeviation;
	float                                         SwimUnblockJumpHeightThreshold;
	bool                                          bSwimSprintJumpNav2D;
	uint8                                         Pad_139[0x3];
	float                                         TacticalSprintEvaluationMinTime;
	float                                         TacticalSprintEvaluationMaxTime;
	float                                         TacticalSprintMinTriggerChance;
	float                                         TacticalSprintMaxTriggerChance;
	float                                         TacticalSprintMinTriggerChanceInUrgentMovement;
	float                                         TacticalSprintMaxTriggerChanceInUrgentMovement;
	float                                         TacticalSprintMaxSlopeAngle;
	float                                         TacticalSprintMinPathTargetDistance;
	float                                         TacticalSprintMaxPathAlignmentAngle;
	float                                         TacticalSprintMaxPathConeAngle;
	float                                         TacticalSprintPathConeRearOffset;
	bool                                          TacticalSprintUsageEnabled;
	uint8                                         Pad_169[0x3];
	float                                         TacticalSprintJumpTriggerChance;
	float                                         TacticalSprintJumpDelay;
	float                                         TacticalSprintJumpDelayDeviation;
	float                                         TacticalSprintJumpDelayInitialRatio;
	uint8                                         Pad_17C[0x4];
	struct FVector                                SlidingBoxExtent;
	float                                         SlidingEnabled[0x4];
	float                                         SlidingEvaluationMinTime;
	float                                         SlidingEvaluationMaxTime;
	float                                         SlidingTriggerChanceStyleMalus;
	float                                         SlidingTriggerChanceStyleMalusRandomDeviation;
	float                                         SlidingTriggerChanceFlat;
	float                                         SlidingTriggerChanceLittleSlope;
	float                                         SlidingTriggerChanceSteepSlope;
	float                                         SlidingDuringUrgentMovementTriggerChanceFlat;
	float                                         SlidingDuringUrgentMovementTriggerChanceLittleSlope;
	float                                         SlidingDuringUrgentMovementTriggerChanceSteepSlope;
	float                                         MinSlidingDuration;
	float                                         SlidingCooldownMinTime;
	float                                         SlidingCooldownMaxTime;
	float                                         SlidingStopMinDelay;
	float                                         SlidingStopMaxDelay;
	float                                         SlidingMaxPathConeAngle;
	float                                         SlidingMinPathTargetDistance;
	float                                         SlidingAllowResumeFocusOnTargetTriggerChance;
	float                                         MoveToRangeAttackMinOffset;
	float                                         MoveToRangeAttackMaxOffset;
	float                                         LKPMinOffset;
	float                                         LKPMaxOffset;
	float                                         SandTunnelJumpMinTime;
	float                                         SandTunnelJumpMaxTime;
	float                                         SandTunnelBurrowedAndHiddenChance;
	float                                         SandTunnelBurrowedAndHiddenMinTime;
	float                                         SandTunnelBurrowedAndHiddenMaxTime;
	uint8                                         Pad_214[0x4];
	struct FVector                                ZiplineOctreeBoxExtent;
	float                                         ThresholdDistanceToRescanForZiplines;
	float                                         CooldownBetweenZiplineUsages;
	float                                         DistanceToAddToZiplineStartPosition;
	float                                         RadiusFromZiplineEnterPointToLookAtExit;
	bool                                          ZiplineUsageEnabled;
	uint8                                         Pad_241[0x7];
	struct FDigestedBotKnockbackSettings          DefaultKnockbackSettings;
	TArray<struct FDigestedBotKnockbackSettings>  KnockbackSettingsSpecializations;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotMovementDigestedSkillSet">();
	}
	static class UFortAthenaAIBotMovementDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotMovementDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotMovementDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotMovementDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotMovementDigestedSkillSet) == 0x0002A8, "Wrong size on UFortAthenaAIBotMovementDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlowDownDistanceSquared) == 0x000030, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlowDownDistanceSquared' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TraversalSpeedEstimation) == 0x000034, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TraversalSpeedEstimation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TraversalSpeedEstimationWithThreat) == 0x000038, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TraversalSpeedEstimationWithThreat' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, bOffPathDetectionEnabled) == 0x00003C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::bOffPathDetectionEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, OffPathDistanceThresholdSquared) == 0x000040, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::OffPathDistanceThresholdSquared' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderDeployMinAngle) == 0x000044, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderDeployMinAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderDeployMaxAngle) == 0x000048, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderDeployMaxAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderNoiseMinDistance) == 0x00004C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderNoiseMinDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderNoiseMaxDistance) == 0x000050, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderNoiseMaxDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderNoiseMinDelay) == 0x000054, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderNoiseMinDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderNoiseMaxDelay) == 0x000058, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderNoiseMaxDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderNoiseDistanceTreshold) == 0x00005C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderNoiseDistanceTreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderStopRotationDistance) == 0x000060, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderStopRotationDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderLandingDistance) == 0x000064, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderLandingDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderRotationLerpDuration) == 0x000068, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderRotationLerpDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderBehaviorEnableFlag) == 0x00006C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderBehaviorEnableFlag' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderBehaviorMinInterval) == 0x000070, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderBehaviorMinInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderBehaviorMaxInterval) == 0x000074, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderBehaviorMaxInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderBehaviorMinRadius) == 0x000078, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderBehaviorMinRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderBehaviorMaxRadius) == 0x00007C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderBehaviorMaxRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderBehaviorSurveyProbability) == 0x000080, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderBehaviorSurveyProbability' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderMovementTypeEnableFlag) == 0x000084, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderMovementTypeEnableFlag' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderLinearProbability) == 0x000088, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderLinearProbability' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSpiralMinRadius) == 0x00008C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSpiralMinRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSpiralMaxRadius) == 0x000090, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSpiralMaxRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSpiralMinAngle) == 0x000094, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSpiralMinAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSpiralMaxAngle) == 0x000098, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSpiralMaxAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSpiralMinInterval) == 0x00009C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSpiralMinInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSpiralMaxInterval) == 0x0000A0, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSpiralMaxInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSpiralProbability) == 0x0000A4, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSpiralProbability' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSerpentineMinAngle) == 0x0000A8, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSerpentineMinAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSerpentineMaxAngle) == 0x0000AC, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSerpentineMaxAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSerpentineMinRadius) == 0x0000B0, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSerpentineMinRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSerpentineMaxRadius) == 0x0000B4, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSerpentineMaxRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSerpentineMinInterval) == 0x0000B8, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSerpentineMinInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSerpentineMaxInterval) == 0x0000BC, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSerpentineMaxInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSerpentineMinPeriod) == 0x0000C0, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSerpentineMinPeriod' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSerpentineMaxPeriod) == 0x0000C4, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSerpentineMaxPeriod' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, GliderSerpentineProbability) == 0x0000C8, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::GliderSerpentineProbability' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, JumpOffMinAngle) == 0x0000CC, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::JumpOffMinAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, JumpOffMaxAngle) == 0x0000D0, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::JumpOffMaxAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MinPatrolDistance) == 0x0000D4, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MinPatrolDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MaxPatrolDistance) == 0x0000D8, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MaxPatrolDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MaxPatrolDistanceRandomDeviation) == 0x0000DC, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MaxPatrolDistanceRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, WobbleProbability) == 0x0000E0, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::WobbleProbability' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MaxDelayBetweenWobblingMovement) == 0x0000E4, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MaxDelayBetweenWobblingMovement' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MaxDelayBetweenWobblingMovementRandomDeviation) == 0x0000E8, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MaxDelayBetweenWobblingMovementRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, bAllowSwimWobble) == 0x0000EC, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::bAllowSwimWobble' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MaxWobblingDuration) == 0x0000F0, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MaxWobblingDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MaxWobblingDurationRandomDeviation) == 0x0000F4, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MaxWobblingDurationRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MaxWobblingIntensity) == 0x0000F8, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MaxWobblingIntensity' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, WobblingIntensityDeviation) == 0x0000FC, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::WobblingIntensityDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MaxWobblingFrequency) == 0x000100, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MaxWobblingFrequency' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, WobblingFrequencyDeviation) == 0x000104, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::WobblingFrequencyDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, WobblingStickToPathCorridorStrength) == 0x000108, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::WobblingStickToPathCorridorStrength' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MaxAfterLaunchedPauseTime) == 0x00010C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MaxAfterLaunchedPauseTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MaxAfterLaunchedFromVortexPauseTime) == 0x000110, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MaxAfterLaunchedFromVortexPauseTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, AfterLaunchedPauseTimeDeviation) == 0x000114, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::AfterLaunchedPauseTimeDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, bSteerMovementWhenLaunched) == 0x000118, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::bSteerMovementWhenLaunched' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SteerMovementWhenLaunchedDirectionUpdateTime) == 0x00011C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SteerMovementWhenLaunchedDirectionUpdateTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MaxReactionTimeToDangerZone) == 0x000120, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MaxReactionTimeToDangerZone' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MaxReactionTimeToDangerZoneDeviation) == 0x000124, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MaxReactionTimeToDangerZoneDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, bLimitBlockingObstacleAngle) == 0x000128, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::bLimitBlockingObstacleAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, bEnableSwimSprintJump) == 0x000129, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::bEnableSwimSprintJump' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SwimSprintJumpDelay) == 0x00012C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SwimSprintJumpDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SwimSprintJumpDelayDeviation) == 0x000130, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SwimSprintJumpDelayDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SwimUnblockJumpHeightThreshold) == 0x000134, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SwimUnblockJumpHeightThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, bSwimSprintJumpNav2D) == 0x000138, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::bSwimSprintJumpNav2D' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintEvaluationMinTime) == 0x00013C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintEvaluationMinTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintEvaluationMaxTime) == 0x000140, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintEvaluationMaxTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintMinTriggerChance) == 0x000144, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintMinTriggerChance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintMaxTriggerChance) == 0x000148, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintMaxTriggerChance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintMinTriggerChanceInUrgentMovement) == 0x00014C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintMinTriggerChanceInUrgentMovement' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintMaxTriggerChanceInUrgentMovement) == 0x000150, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintMaxTriggerChanceInUrgentMovement' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintMaxSlopeAngle) == 0x000154, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintMaxSlopeAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintMinPathTargetDistance) == 0x000158, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintMinPathTargetDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintMaxPathAlignmentAngle) == 0x00015C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintMaxPathAlignmentAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintMaxPathConeAngle) == 0x000160, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintMaxPathConeAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintPathConeRearOffset) == 0x000164, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintPathConeRearOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintUsageEnabled) == 0x000168, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintUsageEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintJumpTriggerChance) == 0x00016C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintJumpTriggerChance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintJumpDelay) == 0x000170, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintJumpDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintJumpDelayDeviation) == 0x000174, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintJumpDelayDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, TacticalSprintJumpDelayInitialRatio) == 0x000178, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::TacticalSprintJumpDelayInitialRatio' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingBoxExtent) == 0x000180, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingBoxExtent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingEnabled) == 0x000198, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingEvaluationMinTime) == 0x0001A8, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingEvaluationMinTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingEvaluationMaxTime) == 0x0001AC, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingEvaluationMaxTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingTriggerChanceStyleMalus) == 0x0001B0, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingTriggerChanceStyleMalus' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingTriggerChanceStyleMalusRandomDeviation) == 0x0001B4, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingTriggerChanceStyleMalusRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingTriggerChanceFlat) == 0x0001B8, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingTriggerChanceFlat' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingTriggerChanceLittleSlope) == 0x0001BC, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingTriggerChanceLittleSlope' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingTriggerChanceSteepSlope) == 0x0001C0, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingTriggerChanceSteepSlope' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingDuringUrgentMovementTriggerChanceFlat) == 0x0001C4, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingDuringUrgentMovementTriggerChanceFlat' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingDuringUrgentMovementTriggerChanceLittleSlope) == 0x0001C8, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingDuringUrgentMovementTriggerChanceLittleSlope' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingDuringUrgentMovementTriggerChanceSteepSlope) == 0x0001CC, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingDuringUrgentMovementTriggerChanceSteepSlope' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MinSlidingDuration) == 0x0001D0, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MinSlidingDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingCooldownMinTime) == 0x0001D4, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingCooldownMinTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingCooldownMaxTime) == 0x0001D8, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingCooldownMaxTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingStopMinDelay) == 0x0001DC, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingStopMinDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingStopMaxDelay) == 0x0001E0, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingStopMaxDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingMaxPathConeAngle) == 0x0001E4, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingMaxPathConeAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingMinPathTargetDistance) == 0x0001E8, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingMinPathTargetDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SlidingAllowResumeFocusOnTargetTriggerChance) == 0x0001EC, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SlidingAllowResumeFocusOnTargetTriggerChance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MoveToRangeAttackMinOffset) == 0x0001F0, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MoveToRangeAttackMinOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, MoveToRangeAttackMaxOffset) == 0x0001F4, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::MoveToRangeAttackMaxOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, LKPMinOffset) == 0x0001F8, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::LKPMinOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, LKPMaxOffset) == 0x0001FC, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::LKPMaxOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SandTunnelJumpMinTime) == 0x000200, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SandTunnelJumpMinTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SandTunnelJumpMaxTime) == 0x000204, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SandTunnelJumpMaxTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SandTunnelBurrowedAndHiddenChance) == 0x000208, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SandTunnelBurrowedAndHiddenChance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SandTunnelBurrowedAndHiddenMinTime) == 0x00020C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SandTunnelBurrowedAndHiddenMinTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, SandTunnelBurrowedAndHiddenMaxTime) == 0x000210, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::SandTunnelBurrowedAndHiddenMaxTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, ZiplineOctreeBoxExtent) == 0x000218, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::ZiplineOctreeBoxExtent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, ThresholdDistanceToRescanForZiplines) == 0x000230, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::ThresholdDistanceToRescanForZiplines' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, CooldownBetweenZiplineUsages) == 0x000234, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::CooldownBetweenZiplineUsages' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, DistanceToAddToZiplineStartPosition) == 0x000238, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::DistanceToAddToZiplineStartPosition' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, RadiusFromZiplineEnterPointToLookAtExit) == 0x00023C, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::RadiusFromZiplineEnterPointToLookAtExit' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, ZiplineUsageEnabled) == 0x000240, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::ZiplineUsageEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, DefaultKnockbackSettings) == 0x000248, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::DefaultKnockbackSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementDigestedSkillSet, KnockbackSettingsSpecializations) == 0x000298, "Member 'UFortAthenaAIBotMovementDigestedSkillSet::KnockbackSettingsSpecializations' has a wrong offset!");

class UFortAthenaAIBotMovementSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                         SlowDownDistance;
	struct FScalableFloat                         TraversalSpeedEstimation;
	struct FScalableFloat                         TraversalSpeedEstimationWithThreat;
	struct FScalableFloat                         OffPathDetectionEnabled;
	struct FScalableFloat                         OffPathDistanceThreshold;
	struct FScalableFloat                         GliderDeployMinAngle;
	struct FScalableFloat                         GliderDeployMaxAngle;
	struct FScalableFloat                         GliderNoiseMinDistance;
	struct FScalableFloat                         GliderNoiseMaxDistance;
	struct FScalableFloat                         GliderNoiseMinDelay;
	struct FScalableFloat                         GliderNoiseMaxDelay;
	struct FScalableFloat                         GliderNoiseDistanceTreshold;
	struct FScalableFloat                         GliderStopRotationDistance;
	struct FScalableFloat                         GliderLandingDistance;
	struct FScalableFloat                         GliderRotationLerpDuration;
	struct FScalableFloat                         GliderBehaviorEnableFlag;
	struct FScalableFloat                         GliderBehaviorMinInterval;
	struct FScalableFloat                         GliderBehaviorMaxInterval;
	struct FScalableFloat                         GliderBehaviorMinRadius;
	struct FScalableFloat                         GliderBehaviorMaxRadius;
	struct FScalableFloat                         GliderBehaviorSurveyProbability;
	struct FScalableFloat                         GliderMovementTypeEnableFlag;
	struct FScalableFloat                         GliderLinearProbability;
	struct FScalableFloat                         GliderSpiralMinRadius;
	struct FScalableFloat                         GliderSpiralMaxRadius;
	struct FScalableFloat                         GliderSpiralMinAngle;
	struct FScalableFloat                         GliderSpiralMaxAngle;
	struct FScalableFloat                         GliderSpiralMinInterval;
	struct FScalableFloat                         GliderSpiralMaxInterval;
	struct FScalableFloat                         GliderSpiralProbability;
	struct FScalableFloat                         GliderSerpentineMinAngle;
	struct FScalableFloat                         GliderSerpentineMaxAngle;
	struct FScalableFloat                         GliderSerpentineMinRadius;
	struct FScalableFloat                         GliderSerpentineMaxRadius;
	struct FScalableFloat                         GliderSerpentineMinInterval;
	struct FScalableFloat                         GliderSerpentineMaxInterval;
	struct FScalableFloat                         GliderSerpentineMinPeriod;
	struct FScalableFloat                         GliderSerpentineMaxPeriod;
	struct FScalableFloat                         GliderSerpentineProbability;
	struct FScalableFloat                         JumpOffMinAngle;
	struct FScalableFloat                         JumpOffMaxAngle;
	struct FScalableFloat                         MinPatrolDistance;
	struct FScalableFloat                         MaxPatrolDistance;
	struct FScalableFloat                         MaxPatrolDistanceRandomDeviation;
	struct FScalableFloat                         MoveToRangeAttackMinOffset;
	struct FScalableFloat                         MoveToRangeAttackMaxOffset;
	struct FScalableFloat                         LKPMinOffset;
	struct FScalableFloat                         LKPMaxOffset;
	struct FScalableFloat                         SandTunnelJumpMinTime;
	struct FScalableFloat                         SandTunnelJumpMaxTime;
	struct FScalableFloat                         SandTunnelBurrowedAndHiddenChance;
	struct FScalableFloat                         SandTunnelBurrowedAndHiddenMinTime;
	struct FScalableFloat                         SandTunnelBurrowedAndHiddenMaxTime;
	struct FScalableFloat                         WobblingProbability;
	struct FScalableFloat                         MaxDelayBetweenWobblingMovement;
	struct FScalableFloat                         MaxDelayBetweenWobblingMovementRandomDeviation;
	struct FScalableFloat                         MaxWobblingDuration;
	struct FScalableFloat                         MaxWobblingDurationRandomDeviation;
	struct FScalableFloat                         MaxWobblingIntensity;
	struct FScalableFloat                         WobblingIntensityDeviation;
	struct FScalableFloat                         MaxWobblingFrequency;
	struct FScalableFloat                         WobblingFrequencyDeviation;
	struct FScalableFloat                         WobblingStickToPathCorridorStrength;
	struct FScalableFloat                         LimitBlockingObstacleAngle;
	struct FScalableFloat                         MaxAfterLaunchedPauseTime;
	struct FScalableFloat                         MaxAfterLaunchedFromVortexPauseTime;
	struct FScalableFloat                         AfterLaunchedPauseTimeDeviation;
	struct FScalableFloat                         SteerMovementWhenLaunched;
	struct FScalableFloat                         SteerMovementWhenLaunchedDirectionUpdateTime;
	struct FScalableFloat                         MaxReactionTimeToDangerZone;
	struct FScalableFloat                         MaxReactionTimeToDangerZoneDeviation;
	struct FScalableFloat                         AllowSwimWobble;
	struct FScalableFloat                         EnableSwimSprintJump;
	struct FScalableFloat                         SwimSprintJumpDelay;
	struct FScalableFloat                         SwimSprintJumpDelayDeviation;
	struct FScalableFloat                         SwimUnblockJumpHeightThreshold;
	struct FScalableFloat                         SwimSprintJumpNav2D;
	struct FScalableFloat                         TacticalSprintEvaluationMinTime;
	struct FScalableFloat                         TacticalSprintEvaluationMaxTime;
	struct FScalableFloat                         TacticalSprintMinTriggerChance;
	struct FScalableFloat                         TacticalSprintMaxTriggerChance;
	struct FScalableFloat                         TacticalSprintMinTriggerChanceInUrgentMovement;
	struct FScalableFloat                         TacticalSprintMaxTriggerChanceInUrgentMovement;
	struct FScalableFloat                         TacticalSprintMaxSlopeAngle;
	struct FScalableFloat                         TacticalSprintMinPathTargetDistance;
	struct FScalableFloat                         TacticalSprintMaxPathAlignmentAngle;
	struct FScalableFloat                         TacticalSprintMaxPathConeAngle;
	struct FScalableFloat                         TacticalSprintPathConeRearOffset;
	struct FScalableFloat                         TacticalSprintUsageEnabled;
	struct FScalableFloat                         TacticalSprintJumpTriggerChance;
	struct FScalableFloat                         TacticalSprintJumpDelay;
	struct FScalableFloat                         TacticalSprintJumpDelayDeviation;
	struct FScalableFloat                         TacticalSprintJumpDelayInitialRatio;
	struct FVector                                SlidingBoxExtent;
	struct FScalableFloat                         SlidingEnabled[0x4];
	struct FScalableFloat                         SlidingEvaluationMinTime;
	struct FScalableFloat                         SlidingEvaluationMaxTime;
	struct FScalableFloat                         SlidingTriggerChanceStyleMalus;
	struct FScalableFloat                         SlidingTriggerChanceStyleMalusRandomDeviation;
	struct FScalableFloat                         SlidingTriggerChanceFlat;
	struct FScalableFloat                         SlidingTriggerChanceLittleSlope;
	struct FScalableFloat                         SlidingTriggerChanceSteepSlope;
	struct FScalableFloat                         SlidingDuringUrgentMovementTriggerChanceFlat;
	struct FScalableFloat                         SlidingDuringUrgentMovementTriggerChanceLittleSlope;
	struct FScalableFloat                         SlidingDuringUrgentMovementTriggerChanceSteepSlope;
	struct FScalableFloat                         MinSlidingDuration;
	struct FScalableFloat                         SlidingCooldownMinTime;
	struct FScalableFloat                         SlidingCooldownMaxTime;
	struct FScalableFloat                         SlidingStopMinDelay;
	struct FScalableFloat                         SlidingStopMaxDelay;
	struct FScalableFloat                         SlidingMaxPathConeAngle;
	struct FScalableFloat                         SlidingMinPathTargetDistance;
	struct FScalableFloat                         SlidingAllowResumeFocusOnTargetTriggerChance;
	struct FVector                                ZiplineOctreeBoxExtent;
	struct FScalableFloat                         ThresholdDistanceToRescanForZiplines;
	struct FScalableFloat                         CooldownBetweenZiplineUsages;
	struct FScalableFloat                         DistanceToAddToZiplineStartPosition;
	struct FScalableFloat                         RadiusFromZiplineEnterPointToLookAtExit;
	struct FScalableFloat                         ZiplineUsageEnabled;
	TArray<struct FBotKnockbackSettings>          KnockbackSettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotMovementSkillSet">();
	}
	static class UFortAthenaAIBotMovementSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotMovementSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotMovementSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotMovementSkillSet");
static_assert(sizeof(UFortAthenaAIBotMovementSkillSet) == 0x001330, "Wrong size on UFortAthenaAIBotMovementSkillSet");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlowDownDistance) == 0x000030, "Member 'UFortAthenaAIBotMovementSkillSet::SlowDownDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TraversalSpeedEstimation) == 0x000058, "Member 'UFortAthenaAIBotMovementSkillSet::TraversalSpeedEstimation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TraversalSpeedEstimationWithThreat) == 0x000080, "Member 'UFortAthenaAIBotMovementSkillSet::TraversalSpeedEstimationWithThreat' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, OffPathDetectionEnabled) == 0x0000A8, "Member 'UFortAthenaAIBotMovementSkillSet::OffPathDetectionEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, OffPathDistanceThreshold) == 0x0000D0, "Member 'UFortAthenaAIBotMovementSkillSet::OffPathDistanceThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderDeployMinAngle) == 0x0000F8, "Member 'UFortAthenaAIBotMovementSkillSet::GliderDeployMinAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderDeployMaxAngle) == 0x000120, "Member 'UFortAthenaAIBotMovementSkillSet::GliderDeployMaxAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderNoiseMinDistance) == 0x000148, "Member 'UFortAthenaAIBotMovementSkillSet::GliderNoiseMinDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderNoiseMaxDistance) == 0x000170, "Member 'UFortAthenaAIBotMovementSkillSet::GliderNoiseMaxDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderNoiseMinDelay) == 0x000198, "Member 'UFortAthenaAIBotMovementSkillSet::GliderNoiseMinDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderNoiseMaxDelay) == 0x0001C0, "Member 'UFortAthenaAIBotMovementSkillSet::GliderNoiseMaxDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderNoiseDistanceTreshold) == 0x0001E8, "Member 'UFortAthenaAIBotMovementSkillSet::GliderNoiseDistanceTreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderStopRotationDistance) == 0x000210, "Member 'UFortAthenaAIBotMovementSkillSet::GliderStopRotationDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderLandingDistance) == 0x000238, "Member 'UFortAthenaAIBotMovementSkillSet::GliderLandingDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderRotationLerpDuration) == 0x000260, "Member 'UFortAthenaAIBotMovementSkillSet::GliderRotationLerpDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderBehaviorEnableFlag) == 0x000288, "Member 'UFortAthenaAIBotMovementSkillSet::GliderBehaviorEnableFlag' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderBehaviorMinInterval) == 0x0002B0, "Member 'UFortAthenaAIBotMovementSkillSet::GliderBehaviorMinInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderBehaviorMaxInterval) == 0x0002D8, "Member 'UFortAthenaAIBotMovementSkillSet::GliderBehaviorMaxInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderBehaviorMinRadius) == 0x000300, "Member 'UFortAthenaAIBotMovementSkillSet::GliderBehaviorMinRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderBehaviorMaxRadius) == 0x000328, "Member 'UFortAthenaAIBotMovementSkillSet::GliderBehaviorMaxRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderBehaviorSurveyProbability) == 0x000350, "Member 'UFortAthenaAIBotMovementSkillSet::GliderBehaviorSurveyProbability' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderMovementTypeEnableFlag) == 0x000378, "Member 'UFortAthenaAIBotMovementSkillSet::GliderMovementTypeEnableFlag' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderLinearProbability) == 0x0003A0, "Member 'UFortAthenaAIBotMovementSkillSet::GliderLinearProbability' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSpiralMinRadius) == 0x0003C8, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSpiralMinRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSpiralMaxRadius) == 0x0003F0, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSpiralMaxRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSpiralMinAngle) == 0x000418, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSpiralMinAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSpiralMaxAngle) == 0x000440, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSpiralMaxAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSpiralMinInterval) == 0x000468, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSpiralMinInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSpiralMaxInterval) == 0x000490, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSpiralMaxInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSpiralProbability) == 0x0004B8, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSpiralProbability' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSerpentineMinAngle) == 0x0004E0, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSerpentineMinAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSerpentineMaxAngle) == 0x000508, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSerpentineMaxAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSerpentineMinRadius) == 0x000530, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSerpentineMinRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSerpentineMaxRadius) == 0x000558, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSerpentineMaxRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSerpentineMinInterval) == 0x000580, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSerpentineMinInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSerpentineMaxInterval) == 0x0005A8, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSerpentineMaxInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSerpentineMinPeriod) == 0x0005D0, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSerpentineMinPeriod' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSerpentineMaxPeriod) == 0x0005F8, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSerpentineMaxPeriod' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, GliderSerpentineProbability) == 0x000620, "Member 'UFortAthenaAIBotMovementSkillSet::GliderSerpentineProbability' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, JumpOffMinAngle) == 0x000648, "Member 'UFortAthenaAIBotMovementSkillSet::JumpOffMinAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, JumpOffMaxAngle) == 0x000670, "Member 'UFortAthenaAIBotMovementSkillSet::JumpOffMaxAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MinPatrolDistance) == 0x000698, "Member 'UFortAthenaAIBotMovementSkillSet::MinPatrolDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MaxPatrolDistance) == 0x0006C0, "Member 'UFortAthenaAIBotMovementSkillSet::MaxPatrolDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MaxPatrolDistanceRandomDeviation) == 0x0006E8, "Member 'UFortAthenaAIBotMovementSkillSet::MaxPatrolDistanceRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MoveToRangeAttackMinOffset) == 0x000710, "Member 'UFortAthenaAIBotMovementSkillSet::MoveToRangeAttackMinOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MoveToRangeAttackMaxOffset) == 0x000738, "Member 'UFortAthenaAIBotMovementSkillSet::MoveToRangeAttackMaxOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, LKPMinOffset) == 0x000760, "Member 'UFortAthenaAIBotMovementSkillSet::LKPMinOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, LKPMaxOffset) == 0x000788, "Member 'UFortAthenaAIBotMovementSkillSet::LKPMaxOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SandTunnelJumpMinTime) == 0x0007B0, "Member 'UFortAthenaAIBotMovementSkillSet::SandTunnelJumpMinTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SandTunnelJumpMaxTime) == 0x0007D8, "Member 'UFortAthenaAIBotMovementSkillSet::SandTunnelJumpMaxTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SandTunnelBurrowedAndHiddenChance) == 0x000800, "Member 'UFortAthenaAIBotMovementSkillSet::SandTunnelBurrowedAndHiddenChance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SandTunnelBurrowedAndHiddenMinTime) == 0x000828, "Member 'UFortAthenaAIBotMovementSkillSet::SandTunnelBurrowedAndHiddenMinTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SandTunnelBurrowedAndHiddenMaxTime) == 0x000850, "Member 'UFortAthenaAIBotMovementSkillSet::SandTunnelBurrowedAndHiddenMaxTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, WobblingProbability) == 0x000878, "Member 'UFortAthenaAIBotMovementSkillSet::WobblingProbability' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MaxDelayBetweenWobblingMovement) == 0x0008A0, "Member 'UFortAthenaAIBotMovementSkillSet::MaxDelayBetweenWobblingMovement' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MaxDelayBetweenWobblingMovementRandomDeviation) == 0x0008C8, "Member 'UFortAthenaAIBotMovementSkillSet::MaxDelayBetweenWobblingMovementRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MaxWobblingDuration) == 0x0008F0, "Member 'UFortAthenaAIBotMovementSkillSet::MaxWobblingDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MaxWobblingDurationRandomDeviation) == 0x000918, "Member 'UFortAthenaAIBotMovementSkillSet::MaxWobblingDurationRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MaxWobblingIntensity) == 0x000940, "Member 'UFortAthenaAIBotMovementSkillSet::MaxWobblingIntensity' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, WobblingIntensityDeviation) == 0x000968, "Member 'UFortAthenaAIBotMovementSkillSet::WobblingIntensityDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MaxWobblingFrequency) == 0x000990, "Member 'UFortAthenaAIBotMovementSkillSet::MaxWobblingFrequency' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, WobblingFrequencyDeviation) == 0x0009B8, "Member 'UFortAthenaAIBotMovementSkillSet::WobblingFrequencyDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, WobblingStickToPathCorridorStrength) == 0x0009E0, "Member 'UFortAthenaAIBotMovementSkillSet::WobblingStickToPathCorridorStrength' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, LimitBlockingObstacleAngle) == 0x000A08, "Member 'UFortAthenaAIBotMovementSkillSet::LimitBlockingObstacleAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MaxAfterLaunchedPauseTime) == 0x000A30, "Member 'UFortAthenaAIBotMovementSkillSet::MaxAfterLaunchedPauseTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MaxAfterLaunchedFromVortexPauseTime) == 0x000A58, "Member 'UFortAthenaAIBotMovementSkillSet::MaxAfterLaunchedFromVortexPauseTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, AfterLaunchedPauseTimeDeviation) == 0x000A80, "Member 'UFortAthenaAIBotMovementSkillSet::AfterLaunchedPauseTimeDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SteerMovementWhenLaunched) == 0x000AA8, "Member 'UFortAthenaAIBotMovementSkillSet::SteerMovementWhenLaunched' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SteerMovementWhenLaunchedDirectionUpdateTime) == 0x000AD0, "Member 'UFortAthenaAIBotMovementSkillSet::SteerMovementWhenLaunchedDirectionUpdateTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MaxReactionTimeToDangerZone) == 0x000AF8, "Member 'UFortAthenaAIBotMovementSkillSet::MaxReactionTimeToDangerZone' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MaxReactionTimeToDangerZoneDeviation) == 0x000B20, "Member 'UFortAthenaAIBotMovementSkillSet::MaxReactionTimeToDangerZoneDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, AllowSwimWobble) == 0x000B48, "Member 'UFortAthenaAIBotMovementSkillSet::AllowSwimWobble' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, EnableSwimSprintJump) == 0x000B70, "Member 'UFortAthenaAIBotMovementSkillSet::EnableSwimSprintJump' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SwimSprintJumpDelay) == 0x000B98, "Member 'UFortAthenaAIBotMovementSkillSet::SwimSprintJumpDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SwimSprintJumpDelayDeviation) == 0x000BC0, "Member 'UFortAthenaAIBotMovementSkillSet::SwimSprintJumpDelayDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SwimUnblockJumpHeightThreshold) == 0x000BE8, "Member 'UFortAthenaAIBotMovementSkillSet::SwimUnblockJumpHeightThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SwimSprintJumpNav2D) == 0x000C10, "Member 'UFortAthenaAIBotMovementSkillSet::SwimSprintJumpNav2D' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintEvaluationMinTime) == 0x000C38, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintEvaluationMinTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintEvaluationMaxTime) == 0x000C60, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintEvaluationMaxTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintMinTriggerChance) == 0x000C88, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintMinTriggerChance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintMaxTriggerChance) == 0x000CB0, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintMaxTriggerChance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintMinTriggerChanceInUrgentMovement) == 0x000CD8, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintMinTriggerChanceInUrgentMovement' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintMaxTriggerChanceInUrgentMovement) == 0x000D00, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintMaxTriggerChanceInUrgentMovement' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintMaxSlopeAngle) == 0x000D28, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintMaxSlopeAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintMinPathTargetDistance) == 0x000D50, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintMinPathTargetDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintMaxPathAlignmentAngle) == 0x000D78, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintMaxPathAlignmentAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintMaxPathConeAngle) == 0x000DA0, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintMaxPathConeAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintPathConeRearOffset) == 0x000DC8, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintPathConeRearOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintUsageEnabled) == 0x000DF0, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintUsageEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintJumpTriggerChance) == 0x000E18, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintJumpTriggerChance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintJumpDelay) == 0x000E40, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintJumpDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintJumpDelayDeviation) == 0x000E68, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintJumpDelayDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, TacticalSprintJumpDelayInitialRatio) == 0x000E90, "Member 'UFortAthenaAIBotMovementSkillSet::TacticalSprintJumpDelayInitialRatio' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingBoxExtent) == 0x000EB8, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingBoxExtent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingEnabled) == 0x000ED0, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingEvaluationMinTime) == 0x000F70, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingEvaluationMinTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingEvaluationMaxTime) == 0x000F98, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingEvaluationMaxTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingTriggerChanceStyleMalus) == 0x000FC0, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingTriggerChanceStyleMalus' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingTriggerChanceStyleMalusRandomDeviation) == 0x000FE8, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingTriggerChanceStyleMalusRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingTriggerChanceFlat) == 0x001010, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingTriggerChanceFlat' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingTriggerChanceLittleSlope) == 0x001038, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingTriggerChanceLittleSlope' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingTriggerChanceSteepSlope) == 0x001060, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingTriggerChanceSteepSlope' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingDuringUrgentMovementTriggerChanceFlat) == 0x001088, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingDuringUrgentMovementTriggerChanceFlat' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingDuringUrgentMovementTriggerChanceLittleSlope) == 0x0010B0, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingDuringUrgentMovementTriggerChanceLittleSlope' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingDuringUrgentMovementTriggerChanceSteepSlope) == 0x0010D8, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingDuringUrgentMovementTriggerChanceSteepSlope' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, MinSlidingDuration) == 0x001100, "Member 'UFortAthenaAIBotMovementSkillSet::MinSlidingDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingCooldownMinTime) == 0x001128, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingCooldownMinTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingCooldownMaxTime) == 0x001150, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingCooldownMaxTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingStopMinDelay) == 0x001178, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingStopMinDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingStopMaxDelay) == 0x0011A0, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingStopMaxDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingMaxPathConeAngle) == 0x0011C8, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingMaxPathConeAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingMinPathTargetDistance) == 0x0011F0, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingMinPathTargetDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, SlidingAllowResumeFocusOnTargetTriggerChance) == 0x001218, "Member 'UFortAthenaAIBotMovementSkillSet::SlidingAllowResumeFocusOnTargetTriggerChance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, ZiplineOctreeBoxExtent) == 0x001240, "Member 'UFortAthenaAIBotMovementSkillSet::ZiplineOctreeBoxExtent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, ThresholdDistanceToRescanForZiplines) == 0x001258, "Member 'UFortAthenaAIBotMovementSkillSet::ThresholdDistanceToRescanForZiplines' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, CooldownBetweenZiplineUsages) == 0x001280, "Member 'UFortAthenaAIBotMovementSkillSet::CooldownBetweenZiplineUsages' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, DistanceToAddToZiplineStartPosition) == 0x0012A8, "Member 'UFortAthenaAIBotMovementSkillSet::DistanceToAddToZiplineStartPosition' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, RadiusFromZiplineEnterPointToLookAtExit) == 0x0012D0, "Member 'UFortAthenaAIBotMovementSkillSet::RadiusFromZiplineEnterPointToLookAtExit' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, ZiplineUsageEnabled) == 0x0012F8, "Member 'UFortAthenaAIBotMovementSkillSet::ZiplineUsageEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotMovementSkillSet, KnockbackSettings) == 0x001320, "Member 'UFortAthenaAIBotMovementSkillSet::KnockbackSettings' has a wrong offset!");

class UFortAthenaAIBotPathFollowingComponent final : public UFortPathFollowingComponentBase
{
public:
	class AFortAthenaAIBotController*             BotController;
	class ABuildingActor*                         HitBuilding;
	class UFortAthenaAIBotUnstuckDigestedSkillSet* CachedUnstuckSkillSet;
	class UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet;
	class UFortAthenaAIBotVehicleDigestedSkillSet* CachedVehicleSkillSet;
	uint8                                         Pad_350[0x210];

public:
	void HandlePawnTeleported(class AFortPawn* TeleportedPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotPathFollowingComponent">();
	}
	static class UFortAthenaAIBotPathFollowingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotPathFollowingComponent>();
	}
};
static_assert(alignof(UFortAthenaAIBotPathFollowingComponent) == 0x000008, "Wrong alignment on UFortAthenaAIBotPathFollowingComponent");
static_assert(sizeof(UFortAthenaAIBotPathFollowingComponent) == 0x000560, "Wrong size on UFortAthenaAIBotPathFollowingComponent");
static_assert(offsetof(UFortAthenaAIBotPathFollowingComponent, BotController) == 0x000328, "Member 'UFortAthenaAIBotPathFollowingComponent::BotController' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPathFollowingComponent, HitBuilding) == 0x000330, "Member 'UFortAthenaAIBotPathFollowingComponent::HitBuilding' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPathFollowingComponent, CachedUnstuckSkillSet) == 0x000338, "Member 'UFortAthenaAIBotPathFollowingComponent::CachedUnstuckSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPathFollowingComponent, CachedMovementSkillSet) == 0x000340, "Member 'UFortAthenaAIBotPathFollowingComponent::CachedMovementSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPathFollowingComponent, CachedVehicleSkillSet) == 0x000348, "Member 'UFortAthenaAIBotPathFollowingComponent::CachedVehicleSkillSet' has a wrong offset!");

class UFortAthenaAIBotPerceptionDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                         SightReactionTime;
	float                                         SightRandomDeviation;
	uint8                                         Pad_38[0x28];
	TArray<struct FDigestedSightReactionSpecialization> SightReactionSpecializations;
	float                                         LoseSightTime;
	float                                         LoseSightRandomDeviation;
	float                                         SightSuspicionTime;
	float                                         SightSuspicionRandomDeviation;
	float                                         EnemyMarkedReactionTime;
	float                                         EnemyMarkedReactionRandomDeviation;
	float                                         ChancesToHelpOnMarkedEnemy;
	float                                         DamageReactionTime;
	float                                         DamageRandomDeviation;
	float                                         HearingReactionTime;
	float                                         HearingRandomDeviation;
	float                                         MaxHearingLocationError;
	float                                         ObstacleDistanceOverrideTargetingSq;
	float                                         ObstacleForgetDistanceSq;
	float                                         ObstacleMinimumBlockingTime;
	uint8                                         Pad_AC[0x4];
	struct FFortAthenaAIBotDigestedTargetHeuristicSettings DefaultTargetHeuristicSettings;
	TArray<struct FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization> TargetHeuristicsSettingsSpecializations;
	struct FSoundPerceptionDigestedSetting        SoundSettings[0x7];
	float                                         AlertedAccumulatedLoudnessLimit;
	float                                         AlertedAccumulatedDamageLimit;
	float                                         LKPAccumulatedLoudnessLimit;
	float                                         EnemyMarkingDelay;
	float                                         EnemyMarkingDelayRandomDeviation;
	float                                         AdditionalMarkedEnemyLKPForgetTime;
	float                                         AdditionalMarkedEnemyLKPForgetDistance;
	struct FAlertLevelInfo                        AlertLevelInfos[0x4];
	float                                         ProjectileThreatForgetTime;
	struct FTrapPerceptionSettings                TrapPerceptionSettings;
	bool                                          bStealthMeterEnable;
	uint8                                         Pad_319[0x3];
	float                                         StealthMeterThreshold;
	struct FScalableFloat                         StealthMeterIncreaseSpeed;
	float                                         StealthMeterDecreaseSpeed;
	bool                                          bStealthMeterAllowSharedTarget;
	bool                                          bStealthMeterForceLKPWhenDamagedAndThreatened;
	uint8                                         Pad_34E[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotPerceptionDigestedSkillSet">();
	}
	static class UFortAthenaAIBotPerceptionDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotPerceptionDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotPerceptionDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotPerceptionDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotPerceptionDigestedSkillSet) == 0x000350, "Wrong size on UFortAthenaAIBotPerceptionDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, SightReactionTime) == 0x000030, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::SightReactionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, SightRandomDeviation) == 0x000034, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::SightRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, SightReactionSpecializations) == 0x000060, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::SightReactionSpecializations' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, LoseSightTime) == 0x000070, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::LoseSightTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, LoseSightRandomDeviation) == 0x000074, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::LoseSightRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, SightSuspicionTime) == 0x000078, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::SightSuspicionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, SightSuspicionRandomDeviation) == 0x00007C, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::SightSuspicionRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, EnemyMarkedReactionTime) == 0x000080, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::EnemyMarkedReactionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, EnemyMarkedReactionRandomDeviation) == 0x000084, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::EnemyMarkedReactionRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, ChancesToHelpOnMarkedEnemy) == 0x000088, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::ChancesToHelpOnMarkedEnemy' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, DamageReactionTime) == 0x00008C, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::DamageReactionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, DamageRandomDeviation) == 0x000090, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::DamageRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, HearingReactionTime) == 0x000094, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::HearingReactionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, HearingRandomDeviation) == 0x000098, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::HearingRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, MaxHearingLocationError) == 0x00009C, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::MaxHearingLocationError' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, ObstacleDistanceOverrideTargetingSq) == 0x0000A0, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::ObstacleDistanceOverrideTargetingSq' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, ObstacleForgetDistanceSq) == 0x0000A4, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::ObstacleForgetDistanceSq' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, ObstacleMinimumBlockingTime) == 0x0000A8, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::ObstacleMinimumBlockingTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, DefaultTargetHeuristicSettings) == 0x0000B0, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::DefaultTargetHeuristicSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, TargetHeuristicsSettingsSpecializations) == 0x000240, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::TargetHeuristicsSettingsSpecializations' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, SoundSettings) == 0x000250, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::SoundSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, AlertedAccumulatedLoudnessLimit) == 0x0002A4, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::AlertedAccumulatedLoudnessLimit' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, AlertedAccumulatedDamageLimit) == 0x0002A8, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::AlertedAccumulatedDamageLimit' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, LKPAccumulatedLoudnessLimit) == 0x0002AC, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::LKPAccumulatedLoudnessLimit' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, EnemyMarkingDelay) == 0x0002B0, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::EnemyMarkingDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, EnemyMarkingDelayRandomDeviation) == 0x0002B4, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::EnemyMarkingDelayRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, AdditionalMarkedEnemyLKPForgetTime) == 0x0002B8, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::AdditionalMarkedEnemyLKPForgetTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, AdditionalMarkedEnemyLKPForgetDistance) == 0x0002BC, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::AdditionalMarkedEnemyLKPForgetDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, AlertLevelInfos) == 0x0002C0, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::AlertLevelInfos' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, ProjectileThreatForgetTime) == 0x000300, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::ProjectileThreatForgetTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, TrapPerceptionSettings) == 0x000304, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::TrapPerceptionSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, bStealthMeterEnable) == 0x000318, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::bStealthMeterEnable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, StealthMeterThreshold) == 0x00031C, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::StealthMeterThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, StealthMeterIncreaseSpeed) == 0x000320, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::StealthMeterIncreaseSpeed' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, StealthMeterDecreaseSpeed) == 0x000348, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::StealthMeterDecreaseSpeed' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, bStealthMeterAllowSharedTarget) == 0x00034C, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::bStealthMeterAllowSharedTarget' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionDigestedSkillSet, bStealthMeterForceLKPWhenDamagedAndThreatened) == 0x00034D, "Member 'UFortAthenaAIBotPerceptionDigestedSkillSet::bStealthMeterForceLKPWhenDamagedAndThreatened' has a wrong offset!");

class UFortAthenaAIBotPerceptionSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                         SightReactionTime;
	struct FScalableFloat                         SightRandomDeviation;
	struct FScalableFloat                         SightRandomAddition;
	TArray<struct FSightReactionSpecialization>   SightReactionSpecializations;
	struct FScalableFloat                         LoseSightTime;
	struct FScalableFloat                         LoseSightRandomDeviation;
	struct FScalableFloat                         SightSuspicionTime;
	struct FScalableFloat                         SightSuspicionRandomDeviation;
	struct FScalableFloat                         EnemyMarkedReactionTime;
	struct FScalableFloat                         EnemyMarkedReactionRandomDeviation;
	struct FScalableFloat                         ChancesToHelpOnMarkedEnemy;
	struct FScalableFloat                         DamageReactionTime;
	struct FScalableFloat                         DamageRandomDeviation;
	struct FScalableFloat                         HearingReactionTime;
	struct FScalableFloat                         HearingRandomDeviation;
	struct FScalableFloat                         MaxHearingLocationError;
	struct FFortAthenaAIBotTargetHeuristicSettings DefaultTargetHeuristicSettings;
	TArray<struct FFortAthenaAIBotTargetHeuristicSettingsSpecialization> TargetHeuristicSettingsSpecializations;
	struct FScalableFloat                         ObstacleDistanceOverrideTargeting;
	struct FScalableFloat                         ObstacleForgetDistance;
	struct FScalableFloat                         ObstacleMinimumBlockingTime;
	struct FSoundPerceptionSetting                SoundSettings[0x7];
	struct FScalableFloat                         AlertedAccumulatedLoudnessLimit;
	struct FScalableFloat                         AlertedAccumulatedDamageLimit;
	struct FScalableFloat                         LKPAccumulatedLoudnessLimit;
	struct FScalableFloat                         EnemyMarkingDelay;
	struct FScalableFloat                         EnemyMarkingDelayRandomDeviation;
	struct FScalableFloat                         AdditionalMarkedEnemyLKPForgetTime;
	struct FScalableFloat                         AdditionalMarkedEnemyLKPForgetDistance;
	TArray<class UFortAthenaAIBotAlertLevelConfig*> AlertLevelConfigs;
	struct FScalableFloat                         ProjectileThreatForgetTime;
	struct FScalableFloat                         TrapDetectionDistanceMax;
	struct FScalableFloat                         TrapDetectionDistanceMaxDeviation;
	struct FScalableFloat                         TrapDetectionChanceWhenPerpendicular;
	struct FScalableFloat                         TrapDetectionChanceWhenParallel;
	struct FScalableFloat                         TrapDetectionEvaluationAngleThreshold;
	struct FScalableFloat                         TrapDetectionAutomaticIfWithinCreationTime;
	struct FScalableFloat                         StealthMeterEnable;
	struct FScalableFloat                         StealthMeterThreshold;
	struct FScalableFloat                         StealthMeterIncreaseSpeed;
	struct FScalableFloat                         StealthMeterDecreaseSpeed;
	struct FScalableFloat                         StealthMeterAllowSharedTarget;
	struct FScalableFloat                         bStealthMeterForceLKPWhenDamagedAndThreatened;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotPerceptionSkillSet">();
	}
	static class UFortAthenaAIBotPerceptionSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotPerceptionSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotPerceptionSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotPerceptionSkillSet");
static_assert(sizeof(UFortAthenaAIBotPerceptionSkillSet) == 0x000CE0, "Wrong size on UFortAthenaAIBotPerceptionSkillSet");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, SightReactionTime) == 0x000030, "Member 'UFortAthenaAIBotPerceptionSkillSet::SightReactionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, SightRandomDeviation) == 0x000058, "Member 'UFortAthenaAIBotPerceptionSkillSet::SightRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, SightRandomAddition) == 0x000080, "Member 'UFortAthenaAIBotPerceptionSkillSet::SightRandomAddition' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, SightReactionSpecializations) == 0x0000A8, "Member 'UFortAthenaAIBotPerceptionSkillSet::SightReactionSpecializations' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, LoseSightTime) == 0x0000B8, "Member 'UFortAthenaAIBotPerceptionSkillSet::LoseSightTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, LoseSightRandomDeviation) == 0x0000E0, "Member 'UFortAthenaAIBotPerceptionSkillSet::LoseSightRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, SightSuspicionTime) == 0x000108, "Member 'UFortAthenaAIBotPerceptionSkillSet::SightSuspicionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, SightSuspicionRandomDeviation) == 0x000130, "Member 'UFortAthenaAIBotPerceptionSkillSet::SightSuspicionRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, EnemyMarkedReactionTime) == 0x000158, "Member 'UFortAthenaAIBotPerceptionSkillSet::EnemyMarkedReactionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, EnemyMarkedReactionRandomDeviation) == 0x000180, "Member 'UFortAthenaAIBotPerceptionSkillSet::EnemyMarkedReactionRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, ChancesToHelpOnMarkedEnemy) == 0x0001A8, "Member 'UFortAthenaAIBotPerceptionSkillSet::ChancesToHelpOnMarkedEnemy' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, DamageReactionTime) == 0x0001D0, "Member 'UFortAthenaAIBotPerceptionSkillSet::DamageReactionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, DamageRandomDeviation) == 0x0001F8, "Member 'UFortAthenaAIBotPerceptionSkillSet::DamageRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, HearingReactionTime) == 0x000220, "Member 'UFortAthenaAIBotPerceptionSkillSet::HearingReactionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, HearingRandomDeviation) == 0x000248, "Member 'UFortAthenaAIBotPerceptionSkillSet::HearingRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, MaxHearingLocationError) == 0x000270, "Member 'UFortAthenaAIBotPerceptionSkillSet::MaxHearingLocationError' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, DefaultTargetHeuristicSettings) == 0x000298, "Member 'UFortAthenaAIBotPerceptionSkillSet::DefaultTargetHeuristicSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, TargetHeuristicSettingsSpecializations) == 0x0005E0, "Member 'UFortAthenaAIBotPerceptionSkillSet::TargetHeuristicSettingsSpecializations' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, ObstacleDistanceOverrideTargeting) == 0x0005F0, "Member 'UFortAthenaAIBotPerceptionSkillSet::ObstacleDistanceOverrideTargeting' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, ObstacleForgetDistance) == 0x000618, "Member 'UFortAthenaAIBotPerceptionSkillSet::ObstacleForgetDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, ObstacleMinimumBlockingTime) == 0x000640, "Member 'UFortAthenaAIBotPerceptionSkillSet::ObstacleMinimumBlockingTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, SoundSettings) == 0x000668, "Member 'UFortAthenaAIBotPerceptionSkillSet::SoundSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, AlertedAccumulatedLoudnessLimit) == 0x0009B0, "Member 'UFortAthenaAIBotPerceptionSkillSet::AlertedAccumulatedLoudnessLimit' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, AlertedAccumulatedDamageLimit) == 0x0009D8, "Member 'UFortAthenaAIBotPerceptionSkillSet::AlertedAccumulatedDamageLimit' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, LKPAccumulatedLoudnessLimit) == 0x000A00, "Member 'UFortAthenaAIBotPerceptionSkillSet::LKPAccumulatedLoudnessLimit' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, EnemyMarkingDelay) == 0x000A28, "Member 'UFortAthenaAIBotPerceptionSkillSet::EnemyMarkingDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, EnemyMarkingDelayRandomDeviation) == 0x000A50, "Member 'UFortAthenaAIBotPerceptionSkillSet::EnemyMarkingDelayRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, AdditionalMarkedEnemyLKPForgetTime) == 0x000A78, "Member 'UFortAthenaAIBotPerceptionSkillSet::AdditionalMarkedEnemyLKPForgetTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, AdditionalMarkedEnemyLKPForgetDistance) == 0x000AA0, "Member 'UFortAthenaAIBotPerceptionSkillSet::AdditionalMarkedEnemyLKPForgetDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, AlertLevelConfigs) == 0x000AC8, "Member 'UFortAthenaAIBotPerceptionSkillSet::AlertLevelConfigs' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, ProjectileThreatForgetTime) == 0x000AD8, "Member 'UFortAthenaAIBotPerceptionSkillSet::ProjectileThreatForgetTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, TrapDetectionDistanceMax) == 0x000B00, "Member 'UFortAthenaAIBotPerceptionSkillSet::TrapDetectionDistanceMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, TrapDetectionDistanceMaxDeviation) == 0x000B28, "Member 'UFortAthenaAIBotPerceptionSkillSet::TrapDetectionDistanceMaxDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, TrapDetectionChanceWhenPerpendicular) == 0x000B50, "Member 'UFortAthenaAIBotPerceptionSkillSet::TrapDetectionChanceWhenPerpendicular' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, TrapDetectionChanceWhenParallel) == 0x000B78, "Member 'UFortAthenaAIBotPerceptionSkillSet::TrapDetectionChanceWhenParallel' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, TrapDetectionEvaluationAngleThreshold) == 0x000BA0, "Member 'UFortAthenaAIBotPerceptionSkillSet::TrapDetectionEvaluationAngleThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, TrapDetectionAutomaticIfWithinCreationTime) == 0x000BC8, "Member 'UFortAthenaAIBotPerceptionSkillSet::TrapDetectionAutomaticIfWithinCreationTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, StealthMeterEnable) == 0x000BF0, "Member 'UFortAthenaAIBotPerceptionSkillSet::StealthMeterEnable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, StealthMeterThreshold) == 0x000C18, "Member 'UFortAthenaAIBotPerceptionSkillSet::StealthMeterThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, StealthMeterIncreaseSpeed) == 0x000C40, "Member 'UFortAthenaAIBotPerceptionSkillSet::StealthMeterIncreaseSpeed' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, StealthMeterDecreaseSpeed) == 0x000C68, "Member 'UFortAthenaAIBotPerceptionSkillSet::StealthMeterDecreaseSpeed' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, StealthMeterAllowSharedTarget) == 0x000C90, "Member 'UFortAthenaAIBotPerceptionSkillSet::StealthMeterAllowSharedTarget' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPerceptionSkillSet, bStealthMeterForceLKPWhenDamagedAndThreatened) == 0x000CB8, "Member 'UFortAthenaAIBotPerceptionSkillSet::bStealthMeterForceLKPWhenDamagedAndThreatened' has a wrong offset!");

class UAthenaAISpawner final : public UAISubsystem
{
public:
	TMulticastInlineDelegate<void(class APawn* Pawn, int32 RequestID)> OnPawnPreFinishSpawningEvent;
	TMulticastInlineDelegate<void(class APawn* Pawn, int32 RequestID)> OnPawnSpawnedEvent;
	uint8                                         Pad_58[0xB0];

public:
	bool CancelRequest(const int32 RequestID);
	void QueueForDespawn(class AActor* ActorToDespawn);
	int32 RequestSpawn(class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, const struct FTransform& SpawnTransform, const bool bUrgentRequest);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAISpawner">();
	}
	static class UAthenaAISpawner* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAISpawner>();
	}
};
static_assert(alignof(UAthenaAISpawner) == 0x000008, "Wrong alignment on UAthenaAISpawner");
static_assert(sizeof(UAthenaAISpawner) == 0x000108, "Wrong size on UAthenaAISpawner");
static_assert(offsetof(UAthenaAISpawner, OnPawnPreFinishSpawningEvent) == 0x000038, "Member 'UAthenaAISpawner::OnPawnPreFinishSpawningEvent' has a wrong offset!");
static_assert(offsetof(UAthenaAISpawner, OnPawnSpawnedEvent) == 0x000048, "Member 'UAthenaAISpawner::OnPawnSpawnedEvent' has a wrong offset!");

class UFortAthenaAIBotPlayStyleDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	struct FScalableFloat                         AggressiveTowardsThreatWeight;
	struct FScalableFloat                         DefensiveTowardsThreatWeight;
	EDBNOPlayStyle                                DBNOPlayStyle;
	uint8                                         Pad_81[0x7];
	TArray<struct FPlaystyleSwitchToAggressiveDataDigested> ChangeToAggressiveData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotPlayStyleDigestedSkillSet">();
	}
	static class UFortAthenaAIBotPlayStyleDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotPlayStyleDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotPlayStyleDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotPlayStyleDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotPlayStyleDigestedSkillSet) == 0x000098, "Wrong size on UFortAthenaAIBotPlayStyleDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotPlayStyleDigestedSkillSet, AggressiveTowardsThreatWeight) == 0x000030, "Member 'UFortAthenaAIBotPlayStyleDigestedSkillSet::AggressiveTowardsThreatWeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPlayStyleDigestedSkillSet, DefensiveTowardsThreatWeight) == 0x000058, "Member 'UFortAthenaAIBotPlayStyleDigestedSkillSet::DefensiveTowardsThreatWeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPlayStyleDigestedSkillSet, DBNOPlayStyle) == 0x000080, "Member 'UFortAthenaAIBotPlayStyleDigestedSkillSet::DBNOPlayStyle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPlayStyleDigestedSkillSet, ChangeToAggressiveData) == 0x000088, "Member 'UFortAthenaAIBotPlayStyleDigestedSkillSet::ChangeToAggressiveData' has a wrong offset!");

class UFortAthenaAIBotPlayStyleSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                         AggressiveTowardsThreatWeight;
	struct FScalableFloat                         DefensiveTowardsThreatWeight;
	struct FScalableFloat                         PassiveDBNOPlayStyle;
	struct FScalableFloat                         ThirstyDBNOPlayStyle;
	struct FScalableFloat                         PassiveOnHumansDBNOPlayStyle;
	TArray<struct FPlaystyleSwitchToAggressiveData> ChangeToAggressiveData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotPlayStyleSkillSet">();
	}
	static class UFortAthenaAIBotPlayStyleSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotPlayStyleSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotPlayStyleSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotPlayStyleSkillSet");
static_assert(sizeof(UFortAthenaAIBotPlayStyleSkillSet) == 0x000108, "Wrong size on UFortAthenaAIBotPlayStyleSkillSet");
static_assert(offsetof(UFortAthenaAIBotPlayStyleSkillSet, AggressiveTowardsThreatWeight) == 0x000030, "Member 'UFortAthenaAIBotPlayStyleSkillSet::AggressiveTowardsThreatWeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPlayStyleSkillSet, DefensiveTowardsThreatWeight) == 0x000058, "Member 'UFortAthenaAIBotPlayStyleSkillSet::DefensiveTowardsThreatWeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPlayStyleSkillSet, PassiveDBNOPlayStyle) == 0x000080, "Member 'UFortAthenaAIBotPlayStyleSkillSet::PassiveDBNOPlayStyle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPlayStyleSkillSet, ThirstyDBNOPlayStyle) == 0x0000A8, "Member 'UFortAthenaAIBotPlayStyleSkillSet::ThirstyDBNOPlayStyle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPlayStyleSkillSet, PassiveOnHumansDBNOPlayStyle) == 0x0000D0, "Member 'UFortAthenaAIBotPlayStyleSkillSet::PassiveOnHumansDBNOPlayStyle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPlayStyleSkillSet, ChangeToAggressiveData) == 0x0000F8, "Member 'UFortAthenaAIBotPlayStyleSkillSet::ChangeToAggressiveData' has a wrong offset!");

class UFortAthenaAIBotPropagateAwarenessDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                         PropagationMaxDistanceSQ;
	float                                         CosineFOV;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotPropagateAwarenessDigestedSkillSet">();
	}
	static class UFortAthenaAIBotPropagateAwarenessDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotPropagateAwarenessDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotPropagateAwarenessDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotPropagateAwarenessDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotPropagateAwarenessDigestedSkillSet) == 0x000038, "Wrong size on UFortAthenaAIBotPropagateAwarenessDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotPropagateAwarenessDigestedSkillSet, PropagationMaxDistanceSQ) == 0x000030, "Member 'UFortAthenaAIBotPropagateAwarenessDigestedSkillSet::PropagationMaxDistanceSQ' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotPropagateAwarenessDigestedSkillSet, CosineFOV) == 0x000034, "Member 'UFortAthenaAIBotPropagateAwarenessDigestedSkillSet::CosineFOV' has a wrong offset!");

class UFortAthenaAIBotRangeAttackDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	TWeakObjectPtr<class AFortWeapon>             CachedWeaponUsedToCalculateSkillSet;
	uint8                                         Pad_38[0x8];
	TArray<struct FDigestedRangedWeaponSkillCategory> RangedWeaponCategorySkills;
	float                                         ChangeWeaponDelay;
	float                                         ChangeWeaponDelayDeviation;
	float                                         SwapInsteadOfReloadOdds;
	float                                         SwapInsteadOfReloadRangeMax;
	struct FGameplayTagContainer                  SwapInsteadOfReloadIgnoredWeaponTags;
	float                                         InterruptReloadToShootOdds;
	float                                         ReloadPartiallyEmptyWeaponsOdds;
	float                                         UseCoverOdds;
	float                                         CoverDistanceMin;
	struct FScalableFloat                         CoverDistanceMaxCurve;
	float                                         CoverDistanceToTargetMin;
	float                                         MinimumDistanceToTargetWhileMovingToCover;
	float                                         CoverSearchCooldown;
	float                                         MaximumPathDetourFactor;
	float                                         PostCoverCooldownMin;
	float                                         PostCoverCooldownMax;
	bool                                          bCanFindShootingPositionAround;
	uint8                                         Pad_D1[0x3];
	float                                         PositioningMaxSearchRadius;
	float                                         PositioningQueryCooldown;
	float                                         PositioningQueryCooldownDeviation;
	int32                                         CoverPeekCountMin;
	int32                                         CoverPeekCountMax;
	float                                         ShotDelayAfterTargetRevived;
	uint8                                         Pad_EC[0x4];
	TArray<struct FDigestedFiringPattern>         DefaultTargetInAirFiringPatterns;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotRangeAttackDigestedSkillSet">();
	}
	static class UFortAthenaAIBotRangeAttackDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotRangeAttackDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotRangeAttackDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotRangeAttackDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotRangeAttackDigestedSkillSet) == 0x000100, "Wrong size on UFortAthenaAIBotRangeAttackDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, CachedWeaponUsedToCalculateSkillSet) == 0x000030, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::CachedWeaponUsedToCalculateSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, RangedWeaponCategorySkills) == 0x000040, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::RangedWeaponCategorySkills' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, ChangeWeaponDelay) == 0x000050, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::ChangeWeaponDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, ChangeWeaponDelayDeviation) == 0x000054, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::ChangeWeaponDelayDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, SwapInsteadOfReloadOdds) == 0x000058, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::SwapInsteadOfReloadOdds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, SwapInsteadOfReloadRangeMax) == 0x00005C, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::SwapInsteadOfReloadRangeMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, SwapInsteadOfReloadIgnoredWeaponTags) == 0x000060, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::SwapInsteadOfReloadIgnoredWeaponTags' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, InterruptReloadToShootOdds) == 0x000080, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::InterruptReloadToShootOdds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, ReloadPartiallyEmptyWeaponsOdds) == 0x000084, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::ReloadPartiallyEmptyWeaponsOdds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, UseCoverOdds) == 0x000088, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::UseCoverOdds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, CoverDistanceMin) == 0x00008C, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::CoverDistanceMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, CoverDistanceMaxCurve) == 0x000090, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::CoverDistanceMaxCurve' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, CoverDistanceToTargetMin) == 0x0000B8, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::CoverDistanceToTargetMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, MinimumDistanceToTargetWhileMovingToCover) == 0x0000BC, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::MinimumDistanceToTargetWhileMovingToCover' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, CoverSearchCooldown) == 0x0000C0, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::CoverSearchCooldown' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, MaximumPathDetourFactor) == 0x0000C4, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::MaximumPathDetourFactor' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, PostCoverCooldownMin) == 0x0000C8, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::PostCoverCooldownMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, PostCoverCooldownMax) == 0x0000CC, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::PostCoverCooldownMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, bCanFindShootingPositionAround) == 0x0000D0, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::bCanFindShootingPositionAround' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, PositioningMaxSearchRadius) == 0x0000D4, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::PositioningMaxSearchRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, PositioningQueryCooldown) == 0x0000D8, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::PositioningQueryCooldown' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, PositioningQueryCooldownDeviation) == 0x0000DC, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::PositioningQueryCooldownDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, CoverPeekCountMin) == 0x0000E0, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::CoverPeekCountMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, CoverPeekCountMax) == 0x0000E4, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::CoverPeekCountMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, ShotDelayAfterTargetRevived) == 0x0000E8, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::ShotDelayAfterTargetRevived' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackDigestedSkillSet, DefaultTargetInAirFiringPatterns) == 0x0000F0, "Member 'UFortAthenaAIBotRangeAttackDigestedSkillSet::DefaultTargetInAirFiringPatterns' has a wrong offset!");

class UFortAthenaAIBotRangeAttackSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	TArray<struct FRangedWeaponSkillCategory>     RangedWeaponSkills;
	struct FScalableFloat                         ChangeWeaponDelay;
	struct FScalableFloat                         ChangeWeaponDelayDeviation;
	struct FScalableFloat                         SwapInsteadOfReloadOdds;
	struct FScalableFloat                         SwapInsteadOfReloadRangeMax;
	struct FGameplayTagContainer                  SwapInsteadOfReloadIgnoredWeaponTags;
	struct FScalableFloat                         InterruptReloadToShootOdds;
	struct FScalableFloat                         ReloadPartiallyEmptyWeaponsOdds;
	struct FScalableFloat                         UseCoverOdds;
	struct FScalableFloat                         CoverDistanceMin;
	struct FScalableFloat                         CoverDistanceMaxCurve;
	struct FScalableFloat                         CoverDistanceToTargetMin;
	struct FScalableFloat                         MinimumDistanceToTargetWhileMovingToCover;
	struct FScalableFloat                         CoverSearchCooldown;
	struct FScalableFloat                         MaximumPathDetourFactor;
	struct FScalableFloat                         PostCoverCooldownMin;
	struct FScalableFloat                         PostCoverCooldownMax;
	struct FScalableFloat                         CanFindShootingPositionAround;
	struct FScalableFloat                         PositioningMaxSearchRadius;
	struct FScalableFloat                         PositioningQueryCooldown;
	struct FScalableFloat                         PositioningQueryCooldownDeviation;
	struct FScalableFloat                         CoverPeekCountMin;
	struct FScalableFloat                         CoverPeekCountMax;
	struct FScalableFloat                         ShotDelayAfterTargetRevived;
	TArray<struct FFiringPattern>                 DefaultTargetInAirFiringPatterns;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotRangeAttackSkillSet">();
	}
	static class UFortAthenaAIBotRangeAttackSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotRangeAttackSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotRangeAttackSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotRangeAttackSkillSet");
static_assert(sizeof(UFortAthenaAIBotRangeAttackSkillSet) == 0x0003E0, "Wrong size on UFortAthenaAIBotRangeAttackSkillSet");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, RangedWeaponSkills) == 0x000030, "Member 'UFortAthenaAIBotRangeAttackSkillSet::RangedWeaponSkills' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, ChangeWeaponDelay) == 0x000040, "Member 'UFortAthenaAIBotRangeAttackSkillSet::ChangeWeaponDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, ChangeWeaponDelayDeviation) == 0x000068, "Member 'UFortAthenaAIBotRangeAttackSkillSet::ChangeWeaponDelayDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, SwapInsteadOfReloadOdds) == 0x000090, "Member 'UFortAthenaAIBotRangeAttackSkillSet::SwapInsteadOfReloadOdds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, SwapInsteadOfReloadRangeMax) == 0x0000B8, "Member 'UFortAthenaAIBotRangeAttackSkillSet::SwapInsteadOfReloadRangeMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, SwapInsteadOfReloadIgnoredWeaponTags) == 0x0000E0, "Member 'UFortAthenaAIBotRangeAttackSkillSet::SwapInsteadOfReloadIgnoredWeaponTags' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, InterruptReloadToShootOdds) == 0x000100, "Member 'UFortAthenaAIBotRangeAttackSkillSet::InterruptReloadToShootOdds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, ReloadPartiallyEmptyWeaponsOdds) == 0x000128, "Member 'UFortAthenaAIBotRangeAttackSkillSet::ReloadPartiallyEmptyWeaponsOdds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, UseCoverOdds) == 0x000150, "Member 'UFortAthenaAIBotRangeAttackSkillSet::UseCoverOdds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, CoverDistanceMin) == 0x000178, "Member 'UFortAthenaAIBotRangeAttackSkillSet::CoverDistanceMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, CoverDistanceMaxCurve) == 0x0001A0, "Member 'UFortAthenaAIBotRangeAttackSkillSet::CoverDistanceMaxCurve' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, CoverDistanceToTargetMin) == 0x0001C8, "Member 'UFortAthenaAIBotRangeAttackSkillSet::CoverDistanceToTargetMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, MinimumDistanceToTargetWhileMovingToCover) == 0x0001F0, "Member 'UFortAthenaAIBotRangeAttackSkillSet::MinimumDistanceToTargetWhileMovingToCover' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, CoverSearchCooldown) == 0x000218, "Member 'UFortAthenaAIBotRangeAttackSkillSet::CoverSearchCooldown' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, MaximumPathDetourFactor) == 0x000240, "Member 'UFortAthenaAIBotRangeAttackSkillSet::MaximumPathDetourFactor' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, PostCoverCooldownMin) == 0x000268, "Member 'UFortAthenaAIBotRangeAttackSkillSet::PostCoverCooldownMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, PostCoverCooldownMax) == 0x000290, "Member 'UFortAthenaAIBotRangeAttackSkillSet::PostCoverCooldownMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, CanFindShootingPositionAround) == 0x0002B8, "Member 'UFortAthenaAIBotRangeAttackSkillSet::CanFindShootingPositionAround' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, PositioningMaxSearchRadius) == 0x0002E0, "Member 'UFortAthenaAIBotRangeAttackSkillSet::PositioningMaxSearchRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, PositioningQueryCooldown) == 0x000308, "Member 'UFortAthenaAIBotRangeAttackSkillSet::PositioningQueryCooldown' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, PositioningQueryCooldownDeviation) == 0x000330, "Member 'UFortAthenaAIBotRangeAttackSkillSet::PositioningQueryCooldownDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, CoverPeekCountMin) == 0x000358, "Member 'UFortAthenaAIBotRangeAttackSkillSet::CoverPeekCountMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, CoverPeekCountMax) == 0x000380, "Member 'UFortAthenaAIBotRangeAttackSkillSet::CoverPeekCountMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, ShotDelayAfterTargetRevived) == 0x0003A8, "Member 'UFortAthenaAIBotRangeAttackSkillSet::ShotDelayAfterTargetRevived' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotRangeAttackSkillSet, DefaultTargetInAirFiringPatterns) == 0x0003D0, "Member 'UFortAthenaAIBotRangeAttackSkillSet::DefaultTargetInAirFiringPatterns' has a wrong offset!");

class UFortAthenaAIBotReviveDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                         AllyEvaluationTime;
	float                                         AllyEvaluationTimeDeviation;
	float                                         CooldownOnCancel;
	uint8                                         Pad_3C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotReviveDigestedSkillSet">();
	}
	static class UFortAthenaAIBotReviveDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotReviveDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotReviveDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotReviveDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotReviveDigestedSkillSet) == 0x000040, "Wrong size on UFortAthenaAIBotReviveDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotReviveDigestedSkillSet, AllyEvaluationTime) == 0x000030, "Member 'UFortAthenaAIBotReviveDigestedSkillSet::AllyEvaluationTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotReviveDigestedSkillSet, AllyEvaluationTimeDeviation) == 0x000034, "Member 'UFortAthenaAIBotReviveDigestedSkillSet::AllyEvaluationTimeDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotReviveDigestedSkillSet, CooldownOnCancel) == 0x000038, "Member 'UFortAthenaAIBotReviveDigestedSkillSet::CooldownOnCancel' has a wrong offset!");

class UFortAthenaAIBotReviveSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                         AllyEvaluationTime;
	struct FScalableFloat                         AllyEvaluationTimeDeviation;
	struct FScalableFloat                         CooldownOnCancel;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotReviveSkillSet">();
	}
	static class UFortAthenaAIBotReviveSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotReviveSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotReviveSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotReviveSkillSet");
static_assert(sizeof(UFortAthenaAIBotReviveSkillSet) == 0x0000A8, "Wrong size on UFortAthenaAIBotReviveSkillSet");
static_assert(offsetof(UFortAthenaAIBotReviveSkillSet, AllyEvaluationTime) == 0x000030, "Member 'UFortAthenaAIBotReviveSkillSet::AllyEvaluationTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotReviveSkillSet, AllyEvaluationTimeDeviation) == 0x000058, "Member 'UFortAthenaAIBotReviveSkillSet::AllyEvaluationTimeDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotReviveSkillSet, CooldownOnCancel) == 0x000080, "Member 'UFortAthenaAIBotReviveSkillSet::CooldownOnCancel' has a wrong offset!");

class UFortAthenaAIBotUnstuckDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	bool                                          bCanUndermineWhenStuck;
	bool                                          bCanTeleportWhenStuck;
	bool                                          bAvoidsTeleportLocationsUnderTheLandscape;
	bool                                          bCanTeleportWhenStuckWithPlayerAround;
	float                                         MaxDistanceSqToPlayerToTeleport;
	float                                         PlayerToPhoebeAngleVisibilityConeToTeleport;
	float                                         TimeBetweenPartialPathToConsiderPathStuck;
	int32                                         ConsecutivePartialPathCountToConsiderPathStuck;
	float                                         DistanceSqBetweenBlockedPathToConsiderPathStuck;
	float                                         DistanceBetweenSampleToConsiderPathStuckInWater;
	float                                         TimeBetweenSampleToConsiderPathStuckInWater;
	float                                         DistanceBetweenSampleToConsiderPathStuckOnGround;
	float                                         TimeBetweenSampleToConsiderPathStuckOnGround;
	int32                                         ConsecutiveBlockedPathCountToConsiderPathStuck;
	int32                                         MaxSafeZoneIndexToAllowTeleport;
	float                                         TimeToBreakBlockingDoor;
	float                                         TimeToCloseBlockingDoor;
	float                                         RiverbedObstacleCollisionNormalThreshold;
	bool                                          bCanUseSteeringWhenStuckOnIsolatedIsland;
	uint8                                         Pad_6D[0x3];
	int32                                         MaxSteeringDirectionAttempts;
	float                                         SteeringAttemptDuration;
	float                                         EvaluateIsolatedIslandSteeringTime;
	bool                                          bCanSlideWhenBlocked;
	uint8                                         Pad_7D[0x3];
	float                                         SlidingDurationSeconds;
	float                                         SlidingStartIntensity;
	float                                         SlidingIntensityPerSeconds;
	float                                         SlidingMaxIntensity;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotUnstuckDigestedSkillSet">();
	}
	static class UFortAthenaAIBotUnstuckDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotUnstuckDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotUnstuckDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotUnstuckDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotUnstuckDigestedSkillSet) == 0x000090, "Wrong size on UFortAthenaAIBotUnstuckDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, bCanUndermineWhenStuck) == 0x000030, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::bCanUndermineWhenStuck' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, bCanTeleportWhenStuck) == 0x000031, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::bCanTeleportWhenStuck' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, bAvoidsTeleportLocationsUnderTheLandscape) == 0x000032, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::bAvoidsTeleportLocationsUnderTheLandscape' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, bCanTeleportWhenStuckWithPlayerAround) == 0x000033, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::bCanTeleportWhenStuckWithPlayerAround' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, MaxDistanceSqToPlayerToTeleport) == 0x000034, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::MaxDistanceSqToPlayerToTeleport' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, PlayerToPhoebeAngleVisibilityConeToTeleport) == 0x000038, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::PlayerToPhoebeAngleVisibilityConeToTeleport' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, TimeBetweenPartialPathToConsiderPathStuck) == 0x00003C, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::TimeBetweenPartialPathToConsiderPathStuck' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, ConsecutivePartialPathCountToConsiderPathStuck) == 0x000040, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::ConsecutivePartialPathCountToConsiderPathStuck' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, DistanceSqBetweenBlockedPathToConsiderPathStuck) == 0x000044, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::DistanceSqBetweenBlockedPathToConsiderPathStuck' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, DistanceBetweenSampleToConsiderPathStuckInWater) == 0x000048, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::DistanceBetweenSampleToConsiderPathStuckInWater' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, TimeBetweenSampleToConsiderPathStuckInWater) == 0x00004C, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::TimeBetweenSampleToConsiderPathStuckInWater' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, DistanceBetweenSampleToConsiderPathStuckOnGround) == 0x000050, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::DistanceBetweenSampleToConsiderPathStuckOnGround' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, TimeBetweenSampleToConsiderPathStuckOnGround) == 0x000054, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::TimeBetweenSampleToConsiderPathStuckOnGround' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, ConsecutiveBlockedPathCountToConsiderPathStuck) == 0x000058, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::ConsecutiveBlockedPathCountToConsiderPathStuck' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, MaxSafeZoneIndexToAllowTeleport) == 0x00005C, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::MaxSafeZoneIndexToAllowTeleport' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, TimeToBreakBlockingDoor) == 0x000060, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::TimeToBreakBlockingDoor' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, TimeToCloseBlockingDoor) == 0x000064, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::TimeToCloseBlockingDoor' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, RiverbedObstacleCollisionNormalThreshold) == 0x000068, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::RiverbedObstacleCollisionNormalThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, bCanUseSteeringWhenStuckOnIsolatedIsland) == 0x00006C, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::bCanUseSteeringWhenStuckOnIsolatedIsland' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, MaxSteeringDirectionAttempts) == 0x000070, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::MaxSteeringDirectionAttempts' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, SteeringAttemptDuration) == 0x000074, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::SteeringAttemptDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, EvaluateIsolatedIslandSteeringTime) == 0x000078, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::EvaluateIsolatedIslandSteeringTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, bCanSlideWhenBlocked) == 0x00007C, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::bCanSlideWhenBlocked' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, SlidingDurationSeconds) == 0x000080, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::SlidingDurationSeconds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, SlidingStartIntensity) == 0x000084, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::SlidingStartIntensity' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, SlidingIntensityPerSeconds) == 0x000088, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::SlidingIntensityPerSeconds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckDigestedSkillSet, SlidingMaxIntensity) == 0x00008C, "Member 'UFortAthenaAIBotUnstuckDigestedSkillSet::SlidingMaxIntensity' has a wrong offset!");

class UFortAthenaAIBotUnstuckSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                         CanUndermineWhenStuck;
	struct FScalableFloat                         CanTeleportWhenStuck;
	struct FScalableFloat                         AvoidsTeleportLocationsUnderTheLandscape;
	struct FScalableFloat                         CanTeleportWhenStuckWithPlayerAround;
	struct FScalableFloat                         MaxDistanceToPlayerToTeleport;
	struct FScalableFloat                         PlayerToPhoebeAngleVisibilityConeToTeleport;
	struct FScalableFloat                         MaxSafeZoneIndexToAllowTeleport;
	struct FScalableFloat                         TimeToCloseBlockingDoor;
	struct FScalableFloat                         TimeToBreakBlockingDoor;
	struct FScalableFloat                         RiverbedObstacleCollisionNormalThreshold;
	struct FScalableFloat                         CanUseSteeringWhenStuckOnIsolatedIsland;
	struct FScalableFloat                         MaxSteeringDirectionAttempts;
	struct FScalableFloat                         SteeringAttemptDuration;
	struct FScalableFloat                         EvaluateIsolatedIslandSteeringTime;
	struct FScalableFloat                         TimeBetweenPartialPathToConsiderPathStuck;
	struct FScalableFloat                         ConsecutivePartialPathCountToConsiderPathStuck;
	struct FScalableFloat                         DistanceBetweenSampleToConsiderPathStuckInWater;
	struct FScalableFloat                         TimeBetweenSampleToConsiderPathStuckInWater;
	struct FScalableFloat                         DistanceBetweenSampleToConsiderPathStuckOnGround;
	struct FScalableFloat                         TimeBetweenSampleToConsiderPathStuckOnGround;
	struct FScalableFloat                         DistanceBetweenBlockedPathToConsiderPathStuck;
	struct FScalableFloat                         ConsecutiveBlockedPathCountToConsiderPathStuck;
	struct FScalableFloat                         bCanSlideWhenBlocked;
	struct FScalableFloat                         SlidingDurationSeconds;
	struct FScalableFloat                         SlidingStartIntensity;
	struct FScalableFloat                         SlidingIntensityPerSeconds;
	struct FScalableFloat                         SlidingMaxIntensity;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotUnstuckSkillSet">();
	}
	static class UFortAthenaAIBotUnstuckSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotUnstuckSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotUnstuckSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotUnstuckSkillSet");
static_assert(sizeof(UFortAthenaAIBotUnstuckSkillSet) == 0x000468, "Wrong size on UFortAthenaAIBotUnstuckSkillSet");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, CanUndermineWhenStuck) == 0x000030, "Member 'UFortAthenaAIBotUnstuckSkillSet::CanUndermineWhenStuck' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, CanTeleportWhenStuck) == 0x000058, "Member 'UFortAthenaAIBotUnstuckSkillSet::CanTeleportWhenStuck' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, AvoidsTeleportLocationsUnderTheLandscape) == 0x000080, "Member 'UFortAthenaAIBotUnstuckSkillSet::AvoidsTeleportLocationsUnderTheLandscape' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, CanTeleportWhenStuckWithPlayerAround) == 0x0000A8, "Member 'UFortAthenaAIBotUnstuckSkillSet::CanTeleportWhenStuckWithPlayerAround' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, MaxDistanceToPlayerToTeleport) == 0x0000D0, "Member 'UFortAthenaAIBotUnstuckSkillSet::MaxDistanceToPlayerToTeleport' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, PlayerToPhoebeAngleVisibilityConeToTeleport) == 0x0000F8, "Member 'UFortAthenaAIBotUnstuckSkillSet::PlayerToPhoebeAngleVisibilityConeToTeleport' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, MaxSafeZoneIndexToAllowTeleport) == 0x000120, "Member 'UFortAthenaAIBotUnstuckSkillSet::MaxSafeZoneIndexToAllowTeleport' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, TimeToCloseBlockingDoor) == 0x000148, "Member 'UFortAthenaAIBotUnstuckSkillSet::TimeToCloseBlockingDoor' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, TimeToBreakBlockingDoor) == 0x000170, "Member 'UFortAthenaAIBotUnstuckSkillSet::TimeToBreakBlockingDoor' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, RiverbedObstacleCollisionNormalThreshold) == 0x000198, "Member 'UFortAthenaAIBotUnstuckSkillSet::RiverbedObstacleCollisionNormalThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, CanUseSteeringWhenStuckOnIsolatedIsland) == 0x0001C0, "Member 'UFortAthenaAIBotUnstuckSkillSet::CanUseSteeringWhenStuckOnIsolatedIsland' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, MaxSteeringDirectionAttempts) == 0x0001E8, "Member 'UFortAthenaAIBotUnstuckSkillSet::MaxSteeringDirectionAttempts' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, SteeringAttemptDuration) == 0x000210, "Member 'UFortAthenaAIBotUnstuckSkillSet::SteeringAttemptDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, EvaluateIsolatedIslandSteeringTime) == 0x000238, "Member 'UFortAthenaAIBotUnstuckSkillSet::EvaluateIsolatedIslandSteeringTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, TimeBetweenPartialPathToConsiderPathStuck) == 0x000260, "Member 'UFortAthenaAIBotUnstuckSkillSet::TimeBetweenPartialPathToConsiderPathStuck' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, ConsecutivePartialPathCountToConsiderPathStuck) == 0x000288, "Member 'UFortAthenaAIBotUnstuckSkillSet::ConsecutivePartialPathCountToConsiderPathStuck' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, DistanceBetweenSampleToConsiderPathStuckInWater) == 0x0002B0, "Member 'UFortAthenaAIBotUnstuckSkillSet::DistanceBetweenSampleToConsiderPathStuckInWater' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, TimeBetweenSampleToConsiderPathStuckInWater) == 0x0002D8, "Member 'UFortAthenaAIBotUnstuckSkillSet::TimeBetweenSampleToConsiderPathStuckInWater' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, DistanceBetweenSampleToConsiderPathStuckOnGround) == 0x000300, "Member 'UFortAthenaAIBotUnstuckSkillSet::DistanceBetweenSampleToConsiderPathStuckOnGround' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, TimeBetweenSampleToConsiderPathStuckOnGround) == 0x000328, "Member 'UFortAthenaAIBotUnstuckSkillSet::TimeBetweenSampleToConsiderPathStuckOnGround' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, DistanceBetweenBlockedPathToConsiderPathStuck) == 0x000350, "Member 'UFortAthenaAIBotUnstuckSkillSet::DistanceBetweenBlockedPathToConsiderPathStuck' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, ConsecutiveBlockedPathCountToConsiderPathStuck) == 0x000378, "Member 'UFortAthenaAIBotUnstuckSkillSet::ConsecutiveBlockedPathCountToConsiderPathStuck' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, bCanSlideWhenBlocked) == 0x0003A0, "Member 'UFortAthenaAIBotUnstuckSkillSet::bCanSlideWhenBlocked' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, SlidingDurationSeconds) == 0x0003C8, "Member 'UFortAthenaAIBotUnstuckSkillSet::SlidingDurationSeconds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, SlidingStartIntensity) == 0x0003F0, "Member 'UFortAthenaAIBotUnstuckSkillSet::SlidingStartIntensity' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, SlidingIntensityPerSeconds) == 0x000418, "Member 'UFortAthenaAIBotUnstuckSkillSet::SlidingIntensityPerSeconds' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotUnstuckSkillSet, SlidingMaxIntensity) == 0x000440, "Member 'UFortAthenaAIBotUnstuckSkillSet::SlidingMaxIntensity' has a wrong offset!");

class UFortAthenaAIBotVehicleDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	struct FDigestedVehicleDriving                NoMatchingVehicleDriving;
	TArray<struct FDigestedVehicleDrivingCategory> VehicleDrivingArray;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotVehicleDigestedSkillSet">();
	}
	static class UFortAthenaAIBotVehicleDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotVehicleDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotVehicleDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotVehicleDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotVehicleDigestedSkillSet) == 0x0000F8, "Wrong size on UFortAthenaAIBotVehicleDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotVehicleDigestedSkillSet, NoMatchingVehicleDriving) == 0x000030, "Member 'UFortAthenaAIBotVehicleDigestedSkillSet::NoMatchingVehicleDriving' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotVehicleDigestedSkillSet, VehicleDrivingArray) == 0x0000E8, "Member 'UFortAthenaAIBotVehicleDigestedSkillSet::VehicleDrivingArray' has a wrong offset!");

class UFortAthenaAIBotVehicleSkillSet final : public UFortAthenaAIBotSkillSet
{
public:
	struct FVehicleDriving                        NoMatchingVehicleDriving;
	TArray<struct FVehicleDrivingCategory>        VehicleDrivingArray;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotVehicleSkillSet">();
	}
	static class UFortAthenaAIBotVehicleSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotVehicleSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotVehicleSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotVehicleSkillSet");
static_assert(sizeof(UFortAthenaAIBotVehicleSkillSet) == 0x000340, "Wrong size on UFortAthenaAIBotVehicleSkillSet");
static_assert(offsetof(UFortAthenaAIBotVehicleSkillSet, NoMatchingVehicleDriving) == 0x000030, "Member 'UFortAthenaAIBotVehicleSkillSet::NoMatchingVehicleDriving' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotVehicleSkillSet, VehicleDrivingArray) == 0x000330, "Member 'UFortAthenaAIBotVehicleSkillSet::VehicleDrivingArray' has a wrong offset!");

class UFortAthenaAIBotWarmupDigestedSkillSet final : public UFortAthenaAIBotDigestedSkillSet
{
public:
	float                                         WarmupPlayEmoteBehaviorWeight;
	float                                         WarmupLootAndShootBehaviorWeight;
	float                                         WarmupIdleBehaviorWeight;
	uint8                                         Pad_3C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotWarmupDigestedSkillSet">();
	}
	static class UFortAthenaAIBotWarmupDigestedSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotWarmupDigestedSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotWarmupDigestedSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotWarmupDigestedSkillSet");
static_assert(sizeof(UFortAthenaAIBotWarmupDigestedSkillSet) == 0x000040, "Wrong size on UFortAthenaAIBotWarmupDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotWarmupDigestedSkillSet, WarmupPlayEmoteBehaviorWeight) == 0x000030, "Member 'UFortAthenaAIBotWarmupDigestedSkillSet::WarmupPlayEmoteBehaviorWeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotWarmupDigestedSkillSet, WarmupLootAndShootBehaviorWeight) == 0x000034, "Member 'UFortAthenaAIBotWarmupDigestedSkillSet::WarmupLootAndShootBehaviorWeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotWarmupDigestedSkillSet, WarmupIdleBehaviorWeight) == 0x000038, "Member 'UFortAthenaAIBotWarmupDigestedSkillSet::WarmupIdleBehaviorWeight' has a wrong offset!");

class UFortAthenaAIBotWarmupSkillSet : public UFortAthenaAIBotSkillSet
{
public:
	struct FScalableFloat                         WarmupPlayEmoteBehaviorWeight;
	struct FScalableFloat                         WarmupLootAndShootBehaviorWeight;
	struct FScalableFloat                         WarmupIdleBehaviorWeight;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotWarmupSkillSet">();
	}
	static class UFortAthenaAIBotWarmupSkillSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotWarmupSkillSet>();
	}
};
static_assert(alignof(UFortAthenaAIBotWarmupSkillSet) == 0x000008, "Wrong alignment on UFortAthenaAIBotWarmupSkillSet");
static_assert(sizeof(UFortAthenaAIBotWarmupSkillSet) == 0x0000A8, "Wrong size on UFortAthenaAIBotWarmupSkillSet");
static_assert(offsetof(UFortAthenaAIBotWarmupSkillSet, WarmupPlayEmoteBehaviorWeight) == 0x000030, "Member 'UFortAthenaAIBotWarmupSkillSet::WarmupPlayEmoteBehaviorWeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotWarmupSkillSet, WarmupLootAndShootBehaviorWeight) == 0x000058, "Member 'UFortAthenaAIBotWarmupSkillSet::WarmupLootAndShootBehaviorWeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotWarmupSkillSet, WarmupIdleBehaviorWeight) == 0x000080, "Member 'UFortAthenaAIBotWarmupSkillSet::WarmupIdleBehaviorWeight' has a wrong offset!");

class UFortAthenaAIBot_EQSQueryContext_CurrentTarget final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBot_EQSQueryContext_CurrentTarget">();
	}
	static class UFortAthenaAIBot_EQSQueryContext_CurrentTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBot_EQSQueryContext_CurrentTarget>();
	}
};
static_assert(alignof(UFortAthenaAIBot_EQSQueryContext_CurrentTarget) == 0x000008, "Wrong alignment on UFortAthenaAIBot_EQSQueryContext_CurrentTarget");
static_assert(sizeof(UFortAthenaAIBot_EQSQueryContext_CurrentTarget) == 0x000028, "Wrong size on UFortAthenaAIBot_EQSQueryContext_CurrentTarget");

class UFortAthenaAICoverComponent final : public UControllerComponent
{
public:
	TSubclassOf<class UNavigationQueryFilter>     CoverPositionFilterClass;
	struct FVector                                CoverBoxExtent;
	float                                         CoverOffset;
	uint8                                         Pad_C4[0x4];
	class AAIController*                          CachedController;
	TWeakObjectPtr<class ABuildingActor>          LastBuildingActorUsedForCover;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAICoverComponent">();
	}
	static class UFortAthenaAICoverComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAICoverComponent>();
	}
};
static_assert(alignof(UFortAthenaAICoverComponent) == 0x000008, "Wrong alignment on UFortAthenaAICoverComponent");
static_assert(sizeof(UFortAthenaAICoverComponent) == 0x0000D8, "Wrong size on UFortAthenaAICoverComponent");
static_assert(offsetof(UFortAthenaAICoverComponent, CoverPositionFilterClass) == 0x0000A0, "Member 'UFortAthenaAICoverComponent::CoverPositionFilterClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAICoverComponent, CoverBoxExtent) == 0x0000A8, "Member 'UFortAthenaAICoverComponent::CoverBoxExtent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAICoverComponent, CoverOffset) == 0x0000C0, "Member 'UFortAthenaAICoverComponent::CoverOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAICoverComponent, CachedController) == 0x0000C8, "Member 'UFortAthenaAICoverComponent::CachedController' has a wrong offset!");
static_assert(offsetof(UFortAthenaAICoverComponent, LastBuildingActorUsedForCover) == 0x0000D0, "Member 'UFortAthenaAICoverComponent::LastBuildingActorUsedForCover' has a wrong offset!");

class UBlackboardKeyAccessValidator final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyAccessValidator">();
	}
	static class UBlackboardKeyAccessValidator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyAccessValidator>();
	}
};
static_assert(alignof(UBlackboardKeyAccessValidator) == 0x000008, "Wrong alignment on UBlackboardKeyAccessValidator");
static_assert(sizeof(UBlackboardKeyAccessValidator) == 0x000028, "Wrong size on UBlackboardKeyAccessValidator");

class UFortAthenaAIEvaluatorComponent final : public UActorComponent
{
public:
	TArray<struct FMovementEvaluatorInfo>         MovementEvaluatorInfo;
	TArray<class UFortAthenaAIEvaluator*>         AIEvaluators;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIEvaluatorComponent">();
	}
	static class UFortAthenaAIEvaluatorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIEvaluatorComponent>();
	}
};
static_assert(alignof(UFortAthenaAIEvaluatorComponent) == 0x000008, "Wrong alignment on UFortAthenaAIEvaluatorComponent");
static_assert(sizeof(UFortAthenaAIEvaluatorComponent) == 0x0000C0, "Wrong size on UFortAthenaAIEvaluatorComponent");
static_assert(offsetof(UFortAthenaAIEvaluatorComponent, MovementEvaluatorInfo) == 0x0000A0, "Member 'UFortAthenaAIEvaluatorComponent::MovementEvaluatorInfo' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluatorComponent, AIEvaluators) == 0x0000B0, "Member 'UFortAthenaAIEvaluatorComponent::AIEvaluators' has a wrong offset!");

class AFortAthenaAILeashVolume final : public AVolume
{
public:
	struct FVector                                ProjectExtent;
	float                                         IsInsideTolerance;
	uint8                                         Pad_2DC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAILeashVolume">();
	}
	static class AFortAthenaAILeashVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaAILeashVolume>();
	}
};
static_assert(alignof(AFortAthenaAILeashVolume) == 0x000008, "Wrong alignment on AFortAthenaAILeashVolume");
static_assert(sizeof(AFortAthenaAILeashVolume) == 0x0002E0, "Wrong size on AFortAthenaAILeashVolume");
static_assert(offsetof(AFortAthenaAILeashVolume, ProjectExtent) == 0x0002C0, "Member 'AFortAthenaAILeashVolume::ProjectExtent' has a wrong offset!");
static_assert(offsetof(AFortAthenaAILeashVolume, IsInsideTolerance) == 0x0002D8, "Member 'AFortAthenaAILeashVolume::IsInsideTolerance' has a wrong offset!");

class UFortAthenaAILODSettingsContainer final : public UObject
{
public:
	TMap<TSubclassOf<class UObject>, TScriptInterface<class IFortAthenaAILODSettings>> ClassToSettings;
	TArray<TSubclassOf<class UFortAthenaAILODSettings_AIEvaluator>> LODSettings_AIEvaluators;
	TArray<TSubclassOf<class UFortAthenaAILODSettings_CharacterMovement>> LODSettings_CharacterMovement;
	TArray<TSubclassOf<class UFortAthenaAILODSettings_FortWeaponRanged>> LODSettings_FortWeaponRanged;
	TArray<TSubclassOf<class UFortAthenaAILODSettings_GenericTickingObject>> LODSettings_GenericTickingObject;
	TSubclassOf<class UFortAIDirectorLODAIConfig> FortAIDirectorLODConfig;
	class UFortAIDirectorLODAIConfig*             FortAIDirectorObjectLODConfig;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAILODSettingsContainer">();
	}
	static class UFortAthenaAILODSettingsContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAILODSettingsContainer>();
	}
};
static_assert(alignof(UFortAthenaAILODSettingsContainer) == 0x000008, "Wrong alignment on UFortAthenaAILODSettingsContainer");
static_assert(sizeof(UFortAthenaAILODSettingsContainer) == 0x0000C8, "Wrong size on UFortAthenaAILODSettingsContainer");
static_assert(offsetof(UFortAthenaAILODSettingsContainer, ClassToSettings) == 0x000028, "Member 'UFortAthenaAILODSettingsContainer::ClassToSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettingsContainer, LODSettings_AIEvaluators) == 0x000078, "Member 'UFortAthenaAILODSettingsContainer::LODSettings_AIEvaluators' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettingsContainer, LODSettings_CharacterMovement) == 0x000088, "Member 'UFortAthenaAILODSettingsContainer::LODSettings_CharacterMovement' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettingsContainer, LODSettings_FortWeaponRanged) == 0x000098, "Member 'UFortAthenaAILODSettingsContainer::LODSettings_FortWeaponRanged' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettingsContainer, LODSettings_GenericTickingObject) == 0x0000A8, "Member 'UFortAthenaAILODSettingsContainer::LODSettings_GenericTickingObject' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettingsContainer, FortAIDirectorLODConfig) == 0x0000B8, "Member 'UFortAthenaAILODSettingsContainer::FortAIDirectorLODConfig' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODSettingsContainer, FortAIDirectorObjectLODConfig) == 0x0000C0, "Member 'UFortAthenaAILODSettingsContainer::FortAIDirectorObjectLODConfig' has a wrong offset!");

class UFortAthenaAILODComponent final : public UActorComponent
{
public:
	EFortAILODLevel                               CurrentFortAILODLevel;
	uint8                                         Pad_A1[0x2];
	uint8                                         BitPad_A3_0 : 1;
	uint8                                         bCouldBeVisibleToPlayers : 1;
	uint8                                         Pad_A4[0x4];
	class AFortPawn*                              CachedFortPawn;
	class UFortAthenaAILODSettingsContainer*      AILODSettingsContainer;
	uint8                                         Pad_B8[0x30];

public:
	void OnRep_CurrentFortAILODLevel();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAILODComponent">();
	}
	static class UFortAthenaAILODComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAILODComponent>();
	}
};
static_assert(alignof(UFortAthenaAILODComponent) == 0x000008, "Wrong alignment on UFortAthenaAILODComponent");
static_assert(sizeof(UFortAthenaAILODComponent) == 0x0000E8, "Wrong size on UFortAthenaAILODComponent");
static_assert(offsetof(UFortAthenaAILODComponent, CurrentFortAILODLevel) == 0x0000A0, "Member 'UFortAthenaAILODComponent::CurrentFortAILODLevel' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODComponent, CachedFortPawn) == 0x0000A8, "Member 'UFortAthenaAILODComponent::CachedFortPawn' has a wrong offset!");
static_assert(offsetof(UFortAthenaAILODComponent, AILODSettingsContainer) == 0x0000B0, "Member 'UFortAthenaAILODComponent::AILODSettingsContainer' has a wrong offset!");

class UFortAthenaAIObjectTracker final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x28];
	TMap<TSubclassOf<class UObject>, struct FAITrackedObjectsSet> TrackedObjects;

public:
	static struct FFortAthenaAIObjectTrackerQuery BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified(const struct FFortAthenaAIObjectTrackerQuerySimplified& SimplifiedQuery, const class AActor* OptionalQuerier);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIObjectTracker">();
	}
	static class UFortAthenaAIObjectTracker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIObjectTracker>();
	}
};
static_assert(alignof(UFortAthenaAIObjectTracker) == 0x000008, "Wrong alignment on UFortAthenaAIObjectTracker");
static_assert(sizeof(UFortAthenaAIObjectTracker) == 0x0000A8, "Wrong size on UFortAthenaAIObjectTracker");
static_assert(offsetof(UFortAthenaAIObjectTracker, TrackedObjects) == 0x000058, "Member 'UFortAthenaAIObjectTracker::TrackedObjects' has a wrong offset!");

class IFortAthenaAIRuntimeParametersProvider final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParametersProvider">();
	}
	static class IFortAthenaAIRuntimeParametersProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortAthenaAIRuntimeParametersProvider>();
	}
};
static_assert(alignof(IFortAthenaAIRuntimeParametersProvider) == 0x000008, "Wrong alignment on IFortAthenaAIRuntimeParametersProvider");
static_assert(sizeof(IFortAthenaAIRuntimeParametersProvider) == 0x000028, "Wrong size on IFortAthenaAIRuntimeParametersProvider");

class UFortAthenaAIRuntimeParametersComponent final : public UActorComponent
{
public:
	TMap<TSubclassOf<class UFortAthenaAIRuntimeParameters>, TScriptInterface<class IFortAthenaAIRuntimeParametersProvider>> RegisteredParametersProviders;
	TMap<TSubclassOf<class UObject>, class UFortAthenaAIRuntimeParameters*> ExtractedRuntimeParameters;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParametersComponent">();
	}
	static class UFortAthenaAIRuntimeParametersComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParametersComponent>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParametersComponent) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParametersComponent");
static_assert(sizeof(UFortAthenaAIRuntimeParametersComponent) == 0x000140, "Wrong size on UFortAthenaAIRuntimeParametersComponent");
static_assert(offsetof(UFortAthenaAIRuntimeParametersComponent, RegisteredParametersProviders) == 0x0000A0, "Member 'UFortAthenaAIRuntimeParametersComponent::RegisteredParametersProviders' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParametersComponent, ExtractedRuntimeParameters) == 0x0000F0, "Member 'UFortAthenaAIRuntimeParametersComponent::ExtractedRuntimeParameters' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_PerksBase final : public UFortAthenaAISpawnerDataComponent
{
public:
	TArray<struct FPerkAvailabilityContainer>     PerksContainers;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_PerksBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_PerksBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_PerksBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_PerksBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_PerksBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_PerksBase) == 0x000040, "Wrong size on UFortAthenaAISpawnerDataComponent_PerksBase");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_PerksBase, PerksContainers) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_PerksBase::PerksContainers' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_SmartObjectBase final : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                         bEnabled : 1;
	uint8                                         bChooseClosestSmartObject : 1;
	uint8                                         Pad_31[0x3];
	float                                         UnreachableBanDuration;
	float                                         SelectedSmartObjectExpirationDelay;
	float                                         GlobalSmartObjectCooldownOnFinished;
	float                                         GlobalSmartObjectCooldownOnInterrupted;
	uint8                                         Pad_44[0x4];
	TArray<struct FAIRuntimeParametersSmartObjectActivity> SmartObjectActivities;
	TArray<struct FSmartObjectRecentlyUsed>       SmartObjectsMostRecentlyUsed;
	TArray<struct FSmartObjectBanned>             SmartObjectsBannedList;
	int32                                         SelectedActivityID;
	uint8                                         Pad_7C[0x4];
	struct FSmartObjectRequestResult              SelectedResult;
	float                                         LastSelectedSmartObjectTimestamp;
	uint8                                         Pad_94[0x4];
	struct FSmartObjectClaimHandle                ClaimedHandle;
	class UGameplayBehaviorConfig*                BehaviorConfig;
	class UGameplayBehavior*                      GameplayBehavior;
	class UGameplayInteractionSmartObjectBehaviorDefinition* GameplayInteractionBehaviorDefinition;
	float                                         GlobalSmartObjectLastUseTimestamp;
	float                                         GlobalSmartObjectCooldown;
	int32                                         ActivitiesIDCount;
	uint8                                         Pad_D4[0x4];

public:
	void SetChooseClosestSmartObject(const bool bInChooseClosestSmartObject);

	bool GetChooseClosestSmartObject() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_SmartObjectBase">();
	}
	static class UFortAthenaAIRuntimeParameters_SmartObjectBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_SmartObjectBase>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_SmartObjectBase) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_SmartObjectBase");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_SmartObjectBase) == 0x0000D8, "Wrong size on UFortAthenaAIRuntimeParameters_SmartObjectBase");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, UnreachableBanDuration) == 0x000034, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::UnreachableBanDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, SelectedSmartObjectExpirationDelay) == 0x000038, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::SelectedSmartObjectExpirationDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, GlobalSmartObjectCooldownOnFinished) == 0x00003C, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::GlobalSmartObjectCooldownOnFinished' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, GlobalSmartObjectCooldownOnInterrupted) == 0x000040, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::GlobalSmartObjectCooldownOnInterrupted' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, SmartObjectActivities) == 0x000048, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::SmartObjectActivities' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, SmartObjectsMostRecentlyUsed) == 0x000058, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::SmartObjectsMostRecentlyUsed' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, SmartObjectsBannedList) == 0x000068, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::SmartObjectsBannedList' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, SelectedActivityID) == 0x000078, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::SelectedActivityID' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, SelectedResult) == 0x000080, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::SelectedResult' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, LastSelectedSmartObjectTimestamp) == 0x000090, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::LastSelectedSmartObjectTimestamp' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, ClaimedHandle) == 0x000098, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::ClaimedHandle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, BehaviorConfig) == 0x0000B0, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::BehaviorConfig' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, GameplayBehavior) == 0x0000B8, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::GameplayBehavior' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, GameplayInteractionBehaviorDefinition) == 0x0000C0, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::GameplayInteractionBehaviorDefinition' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, GlobalSmartObjectLastUseTimestamp) == 0x0000C8, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::GlobalSmartObjectLastUseTimestamp' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, GlobalSmartObjectCooldown) == 0x0000CC, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::GlobalSmartObjectCooldown' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_SmartObjectBase, ActivitiesIDCount) == 0x0000D0, "Member 'UFortAthenaAIRuntimeParameters_SmartObjectBase::ActivitiesIDCount' has a wrong offset!");

class UFortAthenaAISmartObjectActivity final : public UObject
{
public:
	struct FScalableFloat                         Enabled;
	struct FFortAthenaAISmartObjectActivityCondition SmartObjectActivityCondition;
	struct FFortAthenaAISmartObjectActivityConfig SmartObjectActivityConfig;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISmartObjectActivity">();
	}
	static class UFortAthenaAISmartObjectActivity* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISmartObjectActivity>();
	}
};
static_assert(alignof(UFortAthenaAISmartObjectActivity) == 0x000008, "Wrong alignment on UFortAthenaAISmartObjectActivity");
static_assert(sizeof(UFortAthenaAISmartObjectActivity) == 0x000158, "Wrong size on UFortAthenaAISmartObjectActivity");
static_assert(offsetof(UFortAthenaAISmartObjectActivity, Enabled) == 0x000028, "Member 'UFortAthenaAISmartObjectActivity::Enabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISmartObjectActivity, SmartObjectActivityCondition) == 0x000050, "Member 'UFortAthenaAISmartObjectActivity::SmartObjectActivityCondition' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISmartObjectActivity, SmartObjectActivityConfig) == 0x000098, "Member 'UFortAthenaAISmartObjectActivity::SmartObjectActivityConfig' has a wrong offset!");

class UFortAthenaAISpawnerDataComponentList final : public UObject
{
public:
	uint8                                         Pad_28[0x30];

public:
	TArray<class UFortAthenaAISpawnerDataComponent*> GetList();
	class UFortAthenaAISpawnerDataComponentList* OverrideComponent(const class UFortAthenaAISpawnerDataComponent* NewComponent);
	class UFortAthenaAISpawnerDataComponentList* OverrideComponentClass(const TSubclassOf<class UFortAthenaAISpawnerDataComponent> NewComponentSubClass);

	class UFortAthenaAISpawnerDataComponent* GetOrCreateComponentClassForModification(class UObject* ComponentOuter, const TSubclassOf<class UFortAthenaAISpawnerDataComponent> ClassToClone) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponentList">();
	}
	static class UFortAthenaAISpawnerDataComponentList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponentList>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponentList) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponentList");
static_assert(sizeof(UFortAthenaAISpawnerDataComponentList) == 0x000058, "Wrong size on UFortAthenaAISpawnerDataComponentList");

class UFortAthenaAIRuntimeParameters_AffiliationBase final : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                         Pad_30[0x4];
	uint8                                         bFullTeamAwarenessPropagation : 1;
	uint8                                         bAwarenessPropagationIsBasedOnAlertLevel : 1;
	uint8                                         bTurnHostileOnDamageIfNeutral : 1;
	uint8                                         Pad_35[0x3];
	float                                         TurnHostileWhenBlockedTime;
	uint8                                         Pad_3C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_AffiliationBase">();
	}
	static class UFortAthenaAIRuntimeParameters_AffiliationBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_AffiliationBase>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_AffiliationBase) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_AffiliationBase");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_AffiliationBase) == 0x000040, "Wrong size on UFortAthenaAIRuntimeParameters_AffiliationBase");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AffiliationBase, TurnHostileWhenBlockedTime) == 0x000038, "Member 'UFortAthenaAIRuntimeParameters_AffiliationBase::TurnHostileWhenBlockedTime' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_AffiliationBase : public UFortAthenaAISpawnerDataComponent
{
public:
	struct FGameplayTagContainer                  FactionTags;
	struct FScalableFloat                         TurnHostileOnDamageIfNeutral;
	struct FScalableFloat                         TurnHostileWhenBlockedTime;
	TArray<struct FSpawnerDataComponentAffiliationSharedBBConfiguration> FactionSharedBBConfigurations;
	uint8                                         bFullTeamAwarenessPropagation : 1;
	uint8                                         bAwarenessPropagationIsBasedOnAlertLevel : 1;
	uint8                                         Pad_B1[0x3];
	float                                         FullTeamAwarenessMaxDistance;

public:
	struct FGameplayTagContainer GetFactionTag();
	void SetAwarenessPropagationIsBasedOnAlertLevel(const bool bInAwarenessPropagationIsBasedOnAlertLevel);
	void SetFactionTags(const struct FGameplayTagContainer& NewTags);
	void SetFullTeamAwarenessPropagation(const bool bInFullTeamAwarenessPropagation);
	void SetFullTeamAwarenessPropagationDistance(const float InFullTeamAwarenessMaxDistance);

	bool GetAwarenessPropagationIsBasedOnAlertLevel() const;
	float GetFullTeamAwarenessMaxDistance() const;
	bool GetFullTeamAwarenessPropagation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AffiliationBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_AffiliationBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AffiliationBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AffiliationBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AffiliationBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AffiliationBase) == 0x0000B8, "Wrong size on UFortAthenaAISpawnerDataComponent_AffiliationBase");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AffiliationBase, FactionTags) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_AffiliationBase::FactionTags' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AffiliationBase, TurnHostileOnDamageIfNeutral) == 0x000050, "Member 'UFortAthenaAISpawnerDataComponent_AffiliationBase::TurnHostileOnDamageIfNeutral' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AffiliationBase, TurnHostileWhenBlockedTime) == 0x000078, "Member 'UFortAthenaAISpawnerDataComponent_AffiliationBase::TurnHostileWhenBlockedTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AffiliationBase, FactionSharedBBConfigurations) == 0x0000A0, "Member 'UFortAthenaAISpawnerDataComponent_AffiliationBase::FactionSharedBBConfigurations' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AffiliationBase, FullTeamAwarenessMaxDistance) == 0x0000B4, "Member 'UFortAthenaAISpawnerDataComponent_AffiliationBase::FullTeamAwarenessMaxDistance' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_Analytic : public UFortAthenaAIRuntimeParameters
{
public:
	struct FGameplayTagContainer                  OnDeathGameplayTags;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_Analytic">();
	}
	static class UFortAthenaAIRuntimeParameters_Analytic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_Analytic>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_Analytic) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_Analytic");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_Analytic) == 0x000050, "Wrong size on UFortAthenaAIRuntimeParameters_Analytic");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Analytic, OnDeathGameplayTags) == 0x000030, "Member 'UFortAthenaAIRuntimeParameters_Analytic::OnDeathGameplayTags' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_AIAnalytic final : public UFortAthenaAIRuntimeParameters_Analytic
{
public:
	class FString                                 AnalyticUniqueID;
	class FString                                 AIType;
	uint8                                         bShouldSendSpawnEvents : 1;
	uint8                                         bShouldRecordGrabbedPickups : 1;
	uint8                                         bShouldRecordDroppedPickups : 1;
	uint8                                         bShouldRecordDeathInstigator : 1;
	uint8                                         bShouldRecordRegularDowns : 1;
	uint8                                         bShouldRecordTetheredDowns : 1;
	uint8                                         Pad_71[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_AIAnalytic">();
	}
	static class UFortAthenaAIRuntimeParameters_AIAnalytic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_AIAnalytic>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_AIAnalytic) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_AIAnalytic");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_AIAnalytic) == 0x000078, "Wrong size on UFortAthenaAIRuntimeParameters_AIAnalytic");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIAnalytic, AnalyticUniqueID) == 0x000050, "Member 'UFortAthenaAIRuntimeParameters_AIAnalytic::AnalyticUniqueID' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIAnalytic, AIType) == 0x000060, "Member 'UFortAthenaAIRuntimeParameters_AIAnalytic::AIType' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_AnalyticBase : public UFortAthenaAISpawnerDataComponent
{
public:
	struct FGameplayTagContainer                  OnDeathGameplayTags;
	uint8                                         Pad_50[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AnalyticBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_AnalyticBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AnalyticBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AnalyticBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AnalyticBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AnalyticBase) == 0x000060, "Wrong size on UFortAthenaAISpawnerDataComponent_AnalyticBase");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AnalyticBase, OnDeathGameplayTags) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_AnalyticBase::OnDeathGameplayTags' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_AIAnalytic final : public UFortAthenaAISpawnerDataComponent_AnalyticBase
{
public:
	class FString                                 AIType;
	struct FScalableFloat                         ShouldSendSpawnEvents;
	struct FScalableFloat                         ShouldRecordGrabbedPickups;
	struct FScalableFloat                         ShouldRecordDroppedPickups;
	struct FScalableFloat                         ShouldRecordDeathInstigator;
	struct FScalableFloat                         ShouldRecordRegularDowns;
	struct FScalableFloat                         ShouldRecordTetheredDowns;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIAnalytic">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIAnalytic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIAnalytic>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIAnalytic) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIAnalytic");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIAnalytic) == 0x000160, "Wrong size on UFortAthenaAISpawnerDataComponent_AIAnalytic");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIAnalytic, AIType) == 0x000060, "Member 'UFortAthenaAISpawnerDataComponent_AIAnalytic::AIType' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIAnalytic, ShouldSendSpawnEvents) == 0x000070, "Member 'UFortAthenaAISpawnerDataComponent_AIAnalytic::ShouldSendSpawnEvents' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIAnalytic, ShouldRecordGrabbedPickups) == 0x000098, "Member 'UFortAthenaAISpawnerDataComponent_AIAnalytic::ShouldRecordGrabbedPickups' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIAnalytic, ShouldRecordDroppedPickups) == 0x0000C0, "Member 'UFortAthenaAISpawnerDataComponent_AIAnalytic::ShouldRecordDroppedPickups' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIAnalytic, ShouldRecordDeathInstigator) == 0x0000E8, "Member 'UFortAthenaAISpawnerDataComponent_AIAnalytic::ShouldRecordDeathInstigator' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIAnalytic, ShouldRecordRegularDowns) == 0x000110, "Member 'UFortAthenaAISpawnerDataComponent_AIAnalytic::ShouldRecordRegularDowns' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIAnalytic, ShouldRecordTetheredDowns) == 0x000138, "Member 'UFortAthenaAISpawnerDataComponent_AIAnalytic::ShouldRecordTetheredDowns' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_Marker final : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                         bSupportsMarkerWithFaction : 1;
	uint8                                         Pad_31[0x3];
	float                                         MarkerPropagationMaxDistanceSQ;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_Marker">();
	}
	static class UFortAthenaAIRuntimeParameters_Marker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_Marker>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_Marker) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_Marker");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_Marker) == 0x000038, "Wrong size on UFortAthenaAIRuntimeParameters_Marker");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Marker, MarkerPropagationMaxDistanceSQ) == 0x000034, "Member 'UFortAthenaAIRuntimeParameters_Marker::MarkerPropagationMaxDistanceSQ' has a wrong offset!");

class UAthenaAIServiceVehicle final : public UAthenaAIService
{
public:
	uint8                                         Pad_78[0x48];
	float                                         TimeToRefreshTree;
	uint8                                         Pad_C4[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIServiceVehicle">();
	}
	static class UAthenaAIServiceVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIServiceVehicle>();
	}
};
static_assert(alignof(UAthenaAIServiceVehicle) == 0x000008, "Wrong alignment on UAthenaAIServiceVehicle");
static_assert(sizeof(UAthenaAIServiceVehicle) == 0x0000C8, "Wrong size on UAthenaAIServiceVehicle");
static_assert(offsetof(UAthenaAIServiceVehicle, TimeToRefreshTree) == 0x0000C0, "Member 'UAthenaAIServiceVehicle::TimeToRefreshTree' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_AIBotDisguise final : public UFortAthenaAIRuntimeParameters
{
public:
	bool                                          bShouldApplyDisguise;
	bool                                          bRevealDisguiseOnDamage;
	bool                                          bRevealOnDamageExcludeAIPawnDamage;
	bool                                          bRevealDisguiseOnPlayerProximity;
	float                                         RevealPlayerProximityDistanceSqr;
	float                                         RevealPlayerProximityMinDuration;
	float                                         RevealPlayerProximityMaxDuration;
	class UFortBotNameSettings*                   NameSettingsAfterReveal;
	struct FGameplayTagContainer                  DisguisedFactionsBeforeReveal;
	struct FGameplayTagContainer                  DisguisedFactionsAfterReveal;
	TArray<TSubclassOf<class UGameplayEffect>>    DisguiseGameplayEffectBeforeReveal;
	TArray<TSubclassOf<class UGameplayEffect>>    DisguiseGameplayEffectAfterReveal;
	TArray<struct FItemAndCount>                  DisguiseInventory;
	struct FDataTableRowHandle                    DisguiseLootInfo;
	TSubclassOf<class UFortNPCConversationParticipantComponent> DisguiseConversationComponentOverride;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_AIBotDisguise">();
	}
	static class UFortAthenaAIRuntimeParameters_AIBotDisguise* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_AIBotDisguise>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_AIBotDisguise) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_AIBotDisguise");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_AIBotDisguise) == 0x0000D0, "Wrong size on UFortAthenaAIRuntimeParameters_AIBotDisguise");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, bShouldApplyDisguise) == 0x000030, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::bShouldApplyDisguise' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, bRevealDisguiseOnDamage) == 0x000031, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::bRevealDisguiseOnDamage' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, bRevealOnDamageExcludeAIPawnDamage) == 0x000032, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::bRevealOnDamageExcludeAIPawnDamage' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, bRevealDisguiseOnPlayerProximity) == 0x000033, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::bRevealDisguiseOnPlayerProximity' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, RevealPlayerProximityDistanceSqr) == 0x000034, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::RevealPlayerProximityDistanceSqr' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, RevealPlayerProximityMinDuration) == 0x000038, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::RevealPlayerProximityMinDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, RevealPlayerProximityMaxDuration) == 0x00003C, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::RevealPlayerProximityMaxDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, NameSettingsAfterReveal) == 0x000040, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::NameSettingsAfterReveal' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, DisguisedFactionsBeforeReveal) == 0x000048, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::DisguisedFactionsBeforeReveal' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, DisguisedFactionsAfterReveal) == 0x000068, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::DisguisedFactionsAfterReveal' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, DisguiseGameplayEffectBeforeReveal) == 0x000088, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::DisguiseGameplayEffectBeforeReveal' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, DisguiseGameplayEffectAfterReveal) == 0x000098, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::DisguiseGameplayEffectAfterReveal' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, DisguiseInventory) == 0x0000A8, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::DisguiseInventory' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, DisguiseLootInfo) == 0x0000B8, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::DisguiseLootInfo' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotDisguise, DisguiseConversationComponentOverride) == 0x0000C8, "Member 'UFortAthenaAIRuntimeParameters_AIBotDisguise::DisguiseConversationComponentOverride' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_Collection final : public UFortAthenaAIRuntimeParameters
{
public:
	bool                                          bForceAddToCollectionOnDamage;
	uint8                                         Pad_31[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_Collection">();
	}
	static class UFortAthenaAIRuntimeParameters_Collection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_Collection>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_Collection) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_Collection");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_Collection) == 0x000038, "Wrong size on UFortAthenaAIRuntimeParameters_Collection");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Collection, bForceAddToCollectionOnDamage) == 0x000030, "Member 'UFortAthenaAIRuntimeParameters_Collection::bForceAddToCollectionOnDamage' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_AIBotAffiliation final : public UFortAthenaAISpawnerDataComponent_AffiliationBase
{
public:
	bool                                          bForceAddToCollectionOnDamage;
	uint8                                         bOverrideIsAnAthenaGameParticipant : 1;
	uint8                                         bIsAnAthenaGameParticipant : 1;
	uint8                                         Pad_BA[0x6];
	struct FScalableFloat                         SupportsMarkerWithFaction;
	struct FScalableFloat                         MarkerPropagationMaxDistance;
	struct FScalableFloat                         DisguiseProbability;
	struct FScalableFloat                         RevealDisguiseOnDamage;
	struct FScalableFloat                         RevealOnDamageExcludeAIPawnDamage;
	struct FScalableFloat                         RevealDisguiseOnPlayerProximity;
	struct FScalableFloat                         RevealPlayerProximityDistance;
	struct FScalableFloat                         RevealPlayerProximityMinDuration;
	struct FScalableFloat                         RevealPlayerProximityMaxDuration;
	class UFortBotNameSettings*                   NameSettingsAfterReveal;
	struct FGameplayTagContainer                  DisguisedFactionsBeforeReveal;
	struct FGameplayTagContainer                  DisguisedFactionsAfterReveal;
	TArray<TSubclassOf<class UGameplayEffect>>    DisguiseGameplayEffectBeforeReveal;
	TArray<TSubclassOf<class UGameplayEffect>>    DisguiseGameplayEffectAfterReveal;
	TArray<struct FItemAndCount>                  DisguiseInventory;
	struct FDataTableRowHandle                    DisguiseLootInfo;
	TSubclassOf<class UFortNPCConversationParticipantComponent> DisguiseConversationComponent;
	int32                                         OverrideTeamIndex;
	uint8                                         Pad_2BC[0x4];

public:
	void SetOverrideTeamIndex(const int32 InOverrideTeamIdx);

	bool GetSquadID(int32* OutSquadId) const;
	bool GetTeamID(int32* OutTeamId) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIBotAffiliation">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIBotAffiliation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIBotAffiliation>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIBotAffiliation");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation) == 0x0002C0, "Wrong size on UFortAthenaAISpawnerDataComponent_AIBotAffiliation");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, bForceAddToCollectionOnDamage) == 0x0000B8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::bForceAddToCollectionOnDamage' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, SupportsMarkerWithFaction) == 0x0000C0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::SupportsMarkerWithFaction' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, MarkerPropagationMaxDistance) == 0x0000E8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::MarkerPropagationMaxDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, DisguiseProbability) == 0x000110, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::DisguiseProbability' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, RevealDisguiseOnDamage) == 0x000138, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::RevealDisguiseOnDamage' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, RevealOnDamageExcludeAIPawnDamage) == 0x000160, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::RevealOnDamageExcludeAIPawnDamage' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, RevealDisguiseOnPlayerProximity) == 0x000188, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::RevealDisguiseOnPlayerProximity' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, RevealPlayerProximityDistance) == 0x0001B0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::RevealPlayerProximityDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, RevealPlayerProximityMinDuration) == 0x0001D8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::RevealPlayerProximityMinDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, RevealPlayerProximityMaxDuration) == 0x000200, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::RevealPlayerProximityMaxDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, NameSettingsAfterReveal) == 0x000228, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::NameSettingsAfterReveal' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, DisguisedFactionsBeforeReveal) == 0x000230, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::DisguisedFactionsBeforeReveal' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, DisguisedFactionsAfterReveal) == 0x000250, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::DisguisedFactionsAfterReveal' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, DisguiseGameplayEffectBeforeReveal) == 0x000270, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::DisguiseGameplayEffectBeforeReveal' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, DisguiseGameplayEffectAfterReveal) == 0x000280, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::DisguiseGameplayEffectAfterReveal' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, DisguiseInventory) == 0x000290, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::DisguiseInventory' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, DisguiseLootInfo) == 0x0002A0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::DisguiseLootInfo' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, DisguiseConversationComponent) == 0x0002B0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::DisguiseConversationComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAffiliation, OverrideTeamIndex) == 0x0002B8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAffiliation::OverrideTeamIndex' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_AIBotAnalytic final : public UFortAthenaAISpawnerDataComponent_AnalyticBase
{
public:
	uint8                                         bUseDescriptorTagSuffix : 1;
	uint8                                         Pad_61[0x7];
	class FString                                 BotIDSuffix;
	TArray<struct FScalableFloat>                 IdleDetectionBucketsCutoffs;
	TArray<struct FScalableFloat>                 DamageDistanceBuckets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIBotAnalytic">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIBotAnalytic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIBotAnalytic>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIBotAnalytic) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIBotAnalytic");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIBotAnalytic) == 0x000098, "Wrong size on UFortAthenaAISpawnerDataComponent_AIBotAnalytic");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAnalytic, BotIDSuffix) == 0x000068, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAnalytic::BotIDSuffix' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAnalytic, IdleDetectionBucketsCutoffs) == 0x000078, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAnalytic::IdleDetectionBucketsCutoffs' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotAnalytic, DamageDistanceBuckets) == 0x000088, "Member 'UFortAthenaAISpawnerDataComponent_AIBotAnalytic::DamageDistanceBuckets' has a wrong offset!");

class UDespawnExpiredPawnComponent final : public TObjectBasedCycleFixup<class UFortPawnComponent, 0x0080, 0x08>
{
public:
	void AddDespawnRift(class ABuildingRift* NewRift);
	void DespawnExpired();
	TArray<class ABuildingRift*> GetDespawnRifts();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DespawnExpiredPawnComponent">();
	}
	static class UDespawnExpiredPawnComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDespawnExpiredPawnComponent>();
	}
};
static_assert(alignof(UDespawnExpiredPawnComponent) == 0x000008, "Wrong alignment on UDespawnExpiredPawnComponent");
static_assert(sizeof(UDespawnExpiredPawnComponent) == 0x0000A8, "Wrong size on UDespawnExpiredPawnComponent");

class UFortAthenaAIRuntimeParameters_BehaviorTreeControl final : public UFortAthenaAIRuntimeParameters
{
public:
	uint32                                        BehaviorTreeControls;
	uint8                                         Pad_34[0x4];

public:
	void DisableBehaviorTreeBranch(const EBehaviorTreeBranches Behavior);
	void EnableBehaviorTreeBranch(const EBehaviorTreeBranches Behavior);

	bool IsBehaviorTreeBranchActive(const EBehaviorTreeBranches Behavior) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_BehaviorTreeControl">();
	}
	static class UFortAthenaAIRuntimeParameters_BehaviorTreeControl* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_BehaviorTreeControl>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_BehaviorTreeControl) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_BehaviorTreeControl");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_BehaviorTreeControl) == 0x000038, "Wrong size on UFortAthenaAIRuntimeParameters_BehaviorTreeControl");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_BehaviorTreeControl, BehaviorTreeControls) == 0x000030, "Member 'UFortAthenaAIRuntimeParameters_BehaviorTreeControl::BehaviorTreeControls' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_ReviveBehavior final : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                         bAllowReviveSquadmates : 1;
	uint8                                         bAllowReviveSameFactionNPCs : 1;
	uint8                                         bAllowReviveConverter : 1;
	uint8                                         bAllowReviveConverterSquadmates : 1;
	uint8                                         bUseReviveToken : 1;
	uint8                                         Pad_31[0x3];
	float                                         MaxDistanceToRevive;
	float                                         MaxDistanceToReviveHumanPlayer;
	uint8                                         Pad_3C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_ReviveBehavior">();
	}
	static class UFortAthenaAIRuntimeParameters_ReviveBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_ReviveBehavior>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_ReviveBehavior) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_ReviveBehavior");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_ReviveBehavior) == 0x000040, "Wrong size on UFortAthenaAIRuntimeParameters_ReviveBehavior");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_ReviveBehavior, MaxDistanceToRevive) == 0x000034, "Member 'UFortAthenaAIRuntimeParameters_ReviveBehavior::MaxDistanceToRevive' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_ReviveBehavior, MaxDistanceToReviveHumanPlayer) == 0x000038, "Member 'UFortAthenaAIRuntimeParameters_ReviveBehavior::MaxDistanceToReviveHumanPlayer' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_DBNOBehavior final : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                         bDieWhenAllAlliesAreDBNO : 1;
	uint8                                         Pad_31[0x3];
	float                                         AliveAlliesMaxRangeSqr;
	float                                         SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat;
	uint8                                         Pad_3C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_DBNOBehavior">();
	}
	static class UFortAthenaAIRuntimeParameters_DBNOBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_DBNOBehavior>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_DBNOBehavior) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_DBNOBehavior");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_DBNOBehavior) == 0x000040, "Wrong size on UFortAthenaAIRuntimeParameters_DBNOBehavior");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_DBNOBehavior, AliveAlliesMaxRangeSqr) == 0x000034, "Member 'UFortAthenaAIRuntimeParameters_DBNOBehavior::AliveAlliesMaxRangeSqr' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_DBNOBehavior, SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat) == 0x000038, "Member 'UFortAthenaAIRuntimeParameters_DBNOBehavior::SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_NPCBehavior final : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                         bSupportsHolsteredWeapon : 1;
	uint8                                         Pad_31[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_NPCBehavior">();
	}
	static class UFortAthenaAIRuntimeParameters_NPCBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_NPCBehavior>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_NPCBehavior) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_NPCBehavior");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_NPCBehavior) == 0x000038, "Wrong size on UFortAthenaAIRuntimeParameters_NPCBehavior");

class UFortAthenaAIRuntimeParameters_Behavior final : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                         bSurfaceTypeCheckEnabled : 1;
	uint8                                         Pad_31[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_Behavior">();
	}
	static class UFortAthenaAIRuntimeParameters_Behavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_Behavior>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_Behavior) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_Behavior");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_Behavior) == 0x000038, "Wrong size on UFortAthenaAIRuntimeParameters_Behavior");

class UFortAthenaAISpawnerDataComponent_AIBotBehavior final : public UFortAthenaAISpawnerDataComponent_Behavior
{
public:
	uint32                                        BehaviorTreeControls;
	uint8                                         bCanUseFallbackPatrolAround : 1;
	uint8                                         bAllowReviveSquadmates : 1;
	uint8                                         bAllowReviveSameFactionNPCs : 1;
	uint8                                         Pad_3D[0x3];
	struct FScalableFloat                         AllowReviveConverter;
	struct FScalableFloat                         AllowReviveConverterSquadmates;
	uint8                                         bUseReviveToken : 1;
	uint8                                         Pad_91[0x7];
	struct FScalableFloat                         MaxDistanceToRevive;
	struct FScalableFloat                         MaxDistanceToReviveHumanPlayer;
	struct FScalableFloat                         DieWhenAllAlliesAreDBNO;
	struct FScalableFloat                         AliveAlliesMaxRange;
	struct FScalableFloat                         SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat;
	struct FScalableFloat                         SupportsHolsteredWeapon;
	struct FScalableFloat                         SurfaceTypeCheckEnabled;
	struct FScalableFloat                         bShouldResetAggressivePlayStyleOnUnaware;
	struct FScalableFloat                         TimeToKeepTrackOfDamagingActorsForAggressivePlayStyle;
	struct FScalableFloat                         TimeToIgnoreDamagingActorsWhenBeingControlled;
	struct FScalableFloat                         PauseBehaviorOnSpawnDuration;
	struct FScalableFloat                         bShouldBeInvulnerableDuringPause;

public:
	void DisableBehaviorTreeBranch(const EBehaviorTreeBranches Behavior);
	void EnableBehaviorTreeBranch(const EBehaviorTreeBranches Behavior);

	bool IsBehaviorTreeBranchActive(const EBehaviorTreeBranches Behavior) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIBotBehavior">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIBotBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIBotBehavior>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIBotBehavior) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIBotBehavior");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIBotBehavior) == 0x000278, "Wrong size on UFortAthenaAISpawnerDataComponent_AIBotBehavior");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, BehaviorTreeControls) == 0x000038, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::BehaviorTreeControls' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, AllowReviveConverter) == 0x000040, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::AllowReviveConverter' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, AllowReviveConverterSquadmates) == 0x000068, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::AllowReviveConverterSquadmates' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, MaxDistanceToRevive) == 0x000098, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::MaxDistanceToRevive' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, MaxDistanceToReviveHumanPlayer) == 0x0000C0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::MaxDistanceToReviveHumanPlayer' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, DieWhenAllAlliesAreDBNO) == 0x0000E8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::DieWhenAllAlliesAreDBNO' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, AliveAlliesMaxRange) == 0x000110, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::AliveAlliesMaxRange' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat) == 0x000138, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, SupportsHolsteredWeapon) == 0x000160, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::SupportsHolsteredWeapon' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, SurfaceTypeCheckEnabled) == 0x000188, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::SurfaceTypeCheckEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, bShouldResetAggressivePlayStyleOnUnaware) == 0x0001B0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::bShouldResetAggressivePlayStyleOnUnaware' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, TimeToKeepTrackOfDamagingActorsForAggressivePlayStyle) == 0x0001D8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::TimeToKeepTrackOfDamagingActorsForAggressivePlayStyle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, TimeToIgnoreDamagingActorsWhenBeingControlled) == 0x000200, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::TimeToIgnoreDamagingActorsWhenBeingControlled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, PauseBehaviorOnSpawnDuration) == 0x000228, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::PauseBehaviorOnSpawnDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotBehavior, bShouldBeInvulnerableDuringPause) == 0x000250, "Member 'UFortAthenaAISpawnerDataComponent_AIBotBehavior::bShouldBeInvulnerableDuringPause' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter final : public UFortAthenaAISpawnerDataComponent_ChanceEncounterBase
{
public:
	struct FScalableFloat                         PassiveHealerEnable;
	TSubclassOf<class UFortPawnComponent_PassiveHealer> PassiveHealerComponentClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIBotChanceEncounter">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter) == 0x000060, "Wrong size on UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter, PassiveHealerEnable) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter::PassiveHealerEnable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter, PassiveHealerComponentClass) == 0x000058, "Member 'UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter::PassiveHealerComponentClass' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_AIBotLoopSettings final : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                         bSpawnOutsideTheLoop : 1;
	uint8                                         bRespawnOustideTheLoop : 1;
	uint8                                         bRemoveInvulnerabilityOutsideSafeZone : 1;
	uint8                                         bDisableSpecialActorComponentUntilRespawn : 1;
	uint8                                         Pad_31[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_AIBotLoopSettings">();
	}
	static class UFortAthenaAIRuntimeParameters_AIBotLoopSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_AIBotLoopSettings>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_AIBotLoopSettings) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_AIBotLoopSettings");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_AIBotLoopSettings) == 0x000038, "Wrong size on UFortAthenaAIRuntimeParameters_AIBotLoopSettings");

class UFortAthenaAIRuntimeParameters_Conversation final : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                         bEnterBTTaskConversationIfPlayerAround : 1;
	uint8                                         bCanConverseWhenConverted : 1;
	uint8                                         Pad_31[0x3];
	float                                         EnterBTTaskConversationIfPlayerAroundDistSqr;
	float                                         WaitTimeWhileNotInConversationState;
	float                                         SecondsToDenyActorToWaitForConversation;
	TArray<class UAthenaDanceItemDefinition*>     GreetingEmotes;
	float                                         GreetingEmoteMaxDuration;
	uint8                                         Pad_54[0x4];
	class UFortTandemCharacterData*               CharacterData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_Conversation">();
	}
	static class UFortAthenaAIRuntimeParameters_Conversation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_Conversation>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_Conversation) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_Conversation");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_Conversation) == 0x000060, "Wrong size on UFortAthenaAIRuntimeParameters_Conversation");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Conversation, EnterBTTaskConversationIfPlayerAroundDistSqr) == 0x000034, "Member 'UFortAthenaAIRuntimeParameters_Conversation::EnterBTTaskConversationIfPlayerAroundDistSqr' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Conversation, WaitTimeWhileNotInConversationState) == 0x000038, "Member 'UFortAthenaAIRuntimeParameters_Conversation::WaitTimeWhileNotInConversationState' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Conversation, SecondsToDenyActorToWaitForConversation) == 0x00003C, "Member 'UFortAthenaAIRuntimeParameters_Conversation::SecondsToDenyActorToWaitForConversation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Conversation, GreetingEmotes) == 0x000040, "Member 'UFortAthenaAIRuntimeParameters_Conversation::GreetingEmotes' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Conversation, GreetingEmoteMaxDuration) == 0x000050, "Member 'UFortAthenaAIRuntimeParameters_Conversation::GreetingEmoteMaxDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Conversation, CharacterData) == 0x000058, "Member 'UFortAthenaAIRuntimeParameters_Conversation::CharacterData' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_AIBotConversation final : public UFortAthenaAISpawnerDataComponent_ConversationBase
{
public:
	TSubclassOf<class UFortNPCConversationParticipantComponent> ConversationComponentClass;
	struct FGameplayTag                           ConversationEntryTag;
	struct FGameplayTag                           InteractorParticipantTag;
	struct FGameplayTag                           SelfParticipantTag;
	uint8                                         Pad_44[0x4];
	struct FScalableFloat                         EnterBTTaskConversationIfPlayerAround;
	struct FScalableFloat                         EnterBTTaskConversationIfPlayerAroundDist;
	struct FScalableFloat                         WaitTimeWhileNotInConversationState;
	struct FScalableFloat                         SecondsToDenyActorToWaitForConversation;
	TArray<class UAthenaDanceItemDefinition*>     GreetingEmotes;
	struct FScalableFloat                         GreetingEmoteMaxDuration;
	class UFortTandemCharacterData*               CharacterData;
	class FName                                   ConversationInteractionCollisionProfile;
	uint8                                         Pad_12C[0x4];
	struct FVector                                ConversationInteractionBoxExtent;
	struct FVector                                ConversationInteractionBoxOffset;
	struct FScalableFloat                         SpawnOutOfTheLoop;
	struct FScalableFloat                         RespawnOutsideTheLoop;
	struct FScalableFloat                         RemoveInvulnerabilityOutsideSafeZone;
	TSubclassOf<class UFortAthenaNPCLoopStateComponent> NPCLoopStateComponentClass;
	struct FScalableFloat                         UseSpecialActorComponent;
	TSubclassOf<class UAthenaSpecialActorComponent> SpecialActorComponentClass;
	struct FScalableFloat                         BlockSpecialActorUntilOutsideTheLoop;
	bool                                          bCanConverseWhenConverted;
	uint8                                         Pad_239[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIBotConversation">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIBotConversation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIBotConversation>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIBotConversation) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIBotConversation");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIBotConversation) == 0x000240, "Wrong size on UFortAthenaAISpawnerDataComponent_AIBotConversation");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, ConversationComponentClass) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::ConversationComponentClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, ConversationEntryTag) == 0x000038, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::ConversationEntryTag' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, InteractorParticipantTag) == 0x00003C, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::InteractorParticipantTag' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, SelfParticipantTag) == 0x000040, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::SelfParticipantTag' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, EnterBTTaskConversationIfPlayerAround) == 0x000048, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::EnterBTTaskConversationIfPlayerAround' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, EnterBTTaskConversationIfPlayerAroundDist) == 0x000070, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::EnterBTTaskConversationIfPlayerAroundDist' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, WaitTimeWhileNotInConversationState) == 0x000098, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::WaitTimeWhileNotInConversationState' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, SecondsToDenyActorToWaitForConversation) == 0x0000C0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::SecondsToDenyActorToWaitForConversation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, GreetingEmotes) == 0x0000E8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::GreetingEmotes' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, GreetingEmoteMaxDuration) == 0x0000F8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::GreetingEmoteMaxDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, CharacterData) == 0x000120, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::CharacterData' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, ConversationInteractionCollisionProfile) == 0x000128, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::ConversationInteractionCollisionProfile' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, ConversationInteractionBoxExtent) == 0x000130, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::ConversationInteractionBoxExtent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, ConversationInteractionBoxOffset) == 0x000148, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::ConversationInteractionBoxOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, SpawnOutOfTheLoop) == 0x000160, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::SpawnOutOfTheLoop' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, RespawnOutsideTheLoop) == 0x000188, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::RespawnOutsideTheLoop' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, RemoveInvulnerabilityOutsideSafeZone) == 0x0001B0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::RemoveInvulnerabilityOutsideSafeZone' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, NPCLoopStateComponentClass) == 0x0001D8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::NPCLoopStateComponentClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, UseSpecialActorComponent) == 0x0001E0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::UseSpecialActorComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, SpecialActorComponentClass) == 0x000208, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::SpecialActorComponentClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, BlockSpecialActorUntilOutsideTheLoop) == 0x000210, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::BlockSpecialActorUntilOutsideTheLoop' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotConversation, bCanConverseWhenConverted) == 0x000238, "Member 'UFortAthenaAISpawnerDataComponent_AIBotConversation::bCanConverseWhenConverted' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_AIBotDebug final : public UFortAthenaAISpawnerDataComponent_DebugBase
{
public:
	struct FDebugMinimapData                      DebugMinimapData;
	TArray<class FString>                         EditorConsoleCommands;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIBotDebug">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIBotDebug* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIBotDebug>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIBotDebug) == 0x000010, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIBotDebug");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIBotDebug) == 0x0001F0, "Wrong size on UFortAthenaAISpawnerDataComponent_AIBotDebug");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotDebug, DebugMinimapData) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_AIBotDebug::DebugMinimapData' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotDebug, EditorConsoleCommands) == 0x0001E0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotDebug::EditorConsoleCommands' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_AIBotConvert final : public UFortAthenaAIRuntimeParameters_AIConvert
{
public:
	uint8                                         bShouldLeashFollowConverter : 1;
	uint8                                         bShouldScanAroundWhenWaiting : 1;
	uint8                                         bFollowingBehaviorEnabled : 1;
	uint8                                         bFollowerCanUseDBNO : 1;
	uint8                                         bMimicBehaviorEnabled : 1;
	uint8                                         bShouldTeleportTowardsConverter : 1;
	uint8                                         bCanDanceWithConverter : 1;
	uint8                                         Pad_109[0x3];
	float                                         SkillLevelOverride;
	float                                         PreConversionSkillLevel;
	float                                         InnerLeashRadius;
	float                                         OuterLeashRadius;
	uint8                                         Pad_11C[0x4];
	class UFortAthenaAIRuntimeParameters_Leash*   PreConversionLeashParams;
	float                                         LeashFollowActorUpdateRate;
	uint8                                         Pad_12C[0x4];
	struct FVector                                LeashFollowActorLocalOffset;
	float                                         FollowingBehaviorRadiusSqr;
	float                                         FollowingBehaviorRadius;
	float                                         FollowingBehaviorUrgenceRadiusSqr;
	float                                         FollowingBehaviorUrgenceRadius;
	float                                         FollowingBehaviorBlockedSightAngleRad;
	float                                         FollowingBehaviorBlockedSightExitAngleRad;
	float                                         FollowingBehaviorBlockedSightExitDistMin;
	float                                         MimicBehaviorRadiusSqr;
	float                                         MimicBehaviorRadius;
	float                                         TeleportTowardsConverterDistanceSq;
	float                                         TeleportTowardsConverterInCombatDistanceSq;
	float                                         MinDistanceFromConverterWhenTeleported;
	float                                         MaxDistanceFromConverterWhenTeleported;
	uint8                                         Pad_17C[0x4];
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> ConvertedSkillSetClasses;
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> PreConversionSkillSetClasses;
	uint8                                         Pad_1A0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_AIBotConvert">();
	}
	static class UFortAthenaAIRuntimeParameters_AIBotConvert* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_AIBotConvert>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_AIBotConvert) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_AIBotConvert");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_AIBotConvert) == 0x0001B0, "Wrong size on UFortAthenaAIRuntimeParameters_AIBotConvert");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, SkillLevelOverride) == 0x00010C, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::SkillLevelOverride' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, PreConversionSkillLevel) == 0x000110, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::PreConversionSkillLevel' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, InnerLeashRadius) == 0x000114, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::InnerLeashRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, OuterLeashRadius) == 0x000118, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::OuterLeashRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, PreConversionLeashParams) == 0x000120, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::PreConversionLeashParams' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, LeashFollowActorUpdateRate) == 0x000128, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::LeashFollowActorUpdateRate' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, LeashFollowActorLocalOffset) == 0x000130, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::LeashFollowActorLocalOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, FollowingBehaviorRadiusSqr) == 0x000148, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::FollowingBehaviorRadiusSqr' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, FollowingBehaviorRadius) == 0x00014C, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::FollowingBehaviorRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, FollowingBehaviorUrgenceRadiusSqr) == 0x000150, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::FollowingBehaviorUrgenceRadiusSqr' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, FollowingBehaviorUrgenceRadius) == 0x000154, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::FollowingBehaviorUrgenceRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, FollowingBehaviorBlockedSightAngleRad) == 0x000158, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::FollowingBehaviorBlockedSightAngleRad' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, FollowingBehaviorBlockedSightExitAngleRad) == 0x00015C, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::FollowingBehaviorBlockedSightExitAngleRad' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, FollowingBehaviorBlockedSightExitDistMin) == 0x000160, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::FollowingBehaviorBlockedSightExitDistMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, MimicBehaviorRadiusSqr) == 0x000164, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::MimicBehaviorRadiusSqr' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, MimicBehaviorRadius) == 0x000168, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::MimicBehaviorRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, TeleportTowardsConverterDistanceSq) == 0x00016C, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::TeleportTowardsConverterDistanceSq' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, TeleportTowardsConverterInCombatDistanceSq) == 0x000170, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::TeleportTowardsConverterInCombatDistanceSq' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, MinDistanceFromConverterWhenTeleported) == 0x000174, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::MinDistanceFromConverterWhenTeleported' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, MaxDistanceFromConverterWhenTeleported) == 0x000178, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::MaxDistanceFromConverterWhenTeleported' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, ConvertedSkillSetClasses) == 0x000180, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::ConvertedSkillSetClasses' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotConvert, PreConversionSkillSetClasses) == 0x000190, "Member 'UFortAthenaAIRuntimeParameters_AIBotConvert::PreConversionSkillSetClasses' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_AIBotRespawn final : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                         bCanRespawnOnDeath : 1;
	uint8                                         bRespawnOnDeathLocation : 1;
	uint8                                         Pad_31[0x3];
	float                                         RespawnTime;
	class UFortAthenaAISpawnerDataComponentList*  AISpawnerDataComponentList;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_AIBotRespawn">();
	}
	static class UFortAthenaAIRuntimeParameters_AIBotRespawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_AIBotRespawn>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_AIBotRespawn) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_AIBotRespawn");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_AIBotRespawn) == 0x000040, "Wrong size on UFortAthenaAIRuntimeParameters_AIBotRespawn");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotRespawn, RespawnTime) == 0x000034, "Member 'UFortAthenaAIRuntimeParameters_AIBotRespawn::RespawnTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_AIBotRespawn, AISpawnerDataComponentList) == 0x000038, "Member 'UFortAthenaAIRuntimeParameters_AIBotRespawn::AISpawnerDataComponentList' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_AIBotGameplay final : public UFortAthenaAISpawnerDataComponent_GameplayBase
{
public:
	class UFortBotNameSettings*                   NameSettings;
	uint8                                         bRequiresUniqueNetId : 1;
	uint8                                         Pad_2D1[0x7];
	struct FScalableFloat                         CanRespawnOnDeath;
	struct FScalableFloat                         RespawnOnDeathLocation;
	struct FScalableFloat                         RespawnTime;
	float                                         PawnCullDistanceAfterPlayerAggroMode;
	EReachLocationValidationMode                  ReachLocationValidationMode;
	uint8                                         Pad_355[0x3];
	struct FVector                                LeashLocation;
	float                                         LeashInnerRadius;
	float                                         LeashOuterRadius;
	bool                                          bCheckForReachabilityOnRandomLocationGeneration;
	ELeashReturnLocationMode                      LeashReturnLocationMode;
	uint8                                         Pad_37A[0x6];
	class AFortAthenaPatrolPath*                  AssociatedPatrolPath;
	bool                                          bCanInvestigateWithMeleeWeapon;
	bool                                          bApplyMutatorsHealthAndShieldModifiers;
	bool                                          bSupportsTethering;
	bool                                          bEnableRenderCustomDepth;
	bool                                          bDisableGiveWeaponCheat;
	bool                                          bDisableGiveMaterialsCheat;
	uint8                                         Pad_38E[0x2];
	struct FScalableFloat                         InnerLeashRadius;
	struct FScalableFloat                         OuterLeashRadius;
	struct FScalableFloat                         ShouldLeashFollowConverter;
	struct FScalableFloat                         LeashFollowActorUpdateRate;
	struct FVector                                LeashFollowActorLocalOffset;
	struct FScalableFloat                         SkillLevelOverride;
	struct FScalableFloat                         ShouldScanAroundWhenWaiting;
	struct FScalableFloat                         ShouldTeleportTowardsConverter;
	struct FScalableFloat                         FollowingBehaviorEnabled;
	struct FScalableFloat                         FollowerCanUseDBNO;
	struct FScalableFloat                         FollowingBehaviorRadius;
	struct FScalableFloat                         FollowingBehaviorUrgenceRadius;
	struct FScalableFloat                         FollowingBehaviorBlockedSightAngle;
	struct FScalableFloat                         FollowingBehaviorBlockedSightExitAngle;
	struct FScalableFloat                         FollowingBehaviorBlockedSightExitDistMin;
	struct FScalableFloat                         MimicBehaviorEnabled;
	struct FScalableFloat                         MimicBehaviorRadius;
	struct FScalableFloat                         CanDanceWithConverter;
	struct FScalableFloat                         TeleportTowardsConverterDistance;
	struct FScalableFloat                         TeleportTowardsConverterInCombatDistance;
	struct FScalableFloat                         MinDistanceFromConverterWhenTeleported;
	struct FScalableFloat                         MaxDistanceFromConverterWhenTeleported;
	TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> ConvertedSkillSetClasses;
	TSubclassOf<class UFortPawnComponent_AIBotPingCommand> PingCommandComponentClass;
	uint8                                         Pad_708[0x8];

public:
	void SetAssociatedPatrolPath(class AFortAthenaPatrolPath* InAssociatedPatrolPath);
	void SetLeashInnerRadius(const float InLeashInnerRadius);
	void SetLeashLocation(const struct FVector& InLeashLocation);
	void SetLeashOuterRadius(const float InLeashOuterRadius);
	void SetNameSettings(const EBotNamingMode InNamingMode, const class FString& InName, const bool bInAddPlayerIDSuffix);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIBotGameplay">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIBotGameplay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIBotGameplay>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIBotGameplay) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIBotGameplay");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIBotGameplay) == 0x000710, "Wrong size on UFortAthenaAISpawnerDataComponent_AIBotGameplay");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, NameSettings) == 0x0002C8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::NameSettings' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, CanRespawnOnDeath) == 0x0002D8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::CanRespawnOnDeath' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, RespawnOnDeathLocation) == 0x000300, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::RespawnOnDeathLocation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, RespawnTime) == 0x000328, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::RespawnTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, PawnCullDistanceAfterPlayerAggroMode) == 0x000350, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::PawnCullDistanceAfterPlayerAggroMode' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, ReachLocationValidationMode) == 0x000354, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::ReachLocationValidationMode' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, LeashLocation) == 0x000358, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::LeashLocation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, LeashInnerRadius) == 0x000370, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::LeashInnerRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, LeashOuterRadius) == 0x000374, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::LeashOuterRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, bCheckForReachabilityOnRandomLocationGeneration) == 0x000378, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::bCheckForReachabilityOnRandomLocationGeneration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, LeashReturnLocationMode) == 0x000379, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::LeashReturnLocationMode' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, AssociatedPatrolPath) == 0x000380, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::AssociatedPatrolPath' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, bCanInvestigateWithMeleeWeapon) == 0x000388, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::bCanInvestigateWithMeleeWeapon' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, bApplyMutatorsHealthAndShieldModifiers) == 0x000389, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::bApplyMutatorsHealthAndShieldModifiers' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, bSupportsTethering) == 0x00038A, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::bSupportsTethering' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, bEnableRenderCustomDepth) == 0x00038B, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::bEnableRenderCustomDepth' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, bDisableGiveWeaponCheat) == 0x00038C, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::bDisableGiveWeaponCheat' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, bDisableGiveMaterialsCheat) == 0x00038D, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::bDisableGiveMaterialsCheat' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, InnerLeashRadius) == 0x000390, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::InnerLeashRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, OuterLeashRadius) == 0x0003B8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::OuterLeashRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, ShouldLeashFollowConverter) == 0x0003E0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::ShouldLeashFollowConverter' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, LeashFollowActorUpdateRate) == 0x000408, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::LeashFollowActorUpdateRate' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, LeashFollowActorLocalOffset) == 0x000430, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::LeashFollowActorLocalOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, SkillLevelOverride) == 0x000448, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::SkillLevelOverride' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, ShouldScanAroundWhenWaiting) == 0x000470, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::ShouldScanAroundWhenWaiting' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, ShouldTeleportTowardsConverter) == 0x000498, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::ShouldTeleportTowardsConverter' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, FollowingBehaviorEnabled) == 0x0004C0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::FollowingBehaviorEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, FollowerCanUseDBNO) == 0x0004E8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::FollowerCanUseDBNO' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, FollowingBehaviorRadius) == 0x000510, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::FollowingBehaviorRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, FollowingBehaviorUrgenceRadius) == 0x000538, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::FollowingBehaviorUrgenceRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, FollowingBehaviorBlockedSightAngle) == 0x000560, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::FollowingBehaviorBlockedSightAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, FollowingBehaviorBlockedSightExitAngle) == 0x000588, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::FollowingBehaviorBlockedSightExitAngle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, FollowingBehaviorBlockedSightExitDistMin) == 0x0005B0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::FollowingBehaviorBlockedSightExitDistMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, MimicBehaviorEnabled) == 0x0005D8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::MimicBehaviorEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, MimicBehaviorRadius) == 0x000600, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::MimicBehaviorRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, CanDanceWithConverter) == 0x000628, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::CanDanceWithConverter' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, TeleportTowardsConverterDistance) == 0x000650, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::TeleportTowardsConverterDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, TeleportTowardsConverterInCombatDistance) == 0x000678, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::TeleportTowardsConverterInCombatDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, MinDistanceFromConverterWhenTeleported) == 0x0006A0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::MinDistanceFromConverterWhenTeleported' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, MaxDistanceFromConverterWhenTeleported) == 0x0006C8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::MaxDistanceFromConverterWhenTeleported' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, ConvertedSkillSetClasses) == 0x0006F0, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::ConvertedSkillSetClasses' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotGameplay, PingCommandComponentClass) == 0x000700, "Member 'UFortAthenaAISpawnerDataComponent_AIBotGameplay::PingCommandComponentClass' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase final : public UFortAthenaAISpawnerDataComponent_GameplayAbilityBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase) == 0x000070, "Wrong size on UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase");

class UFortAthenaAISpawnerDataComponent_AIBotInventory final : public UFortAthenaAISpawnerDataComponent_InventoryBase
{
public:
	uint8                                         bItemsToGiveInEditorWhenCustomizationIsEnabled : 1;
	uint8                                         Pad_B1[0x7];
	TArray<struct FItemAndCount>                  EditorOnlyItems;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_AIBotInventory">();
	}
	static class UFortAthenaAISpawnerDataComponent_AIBotInventory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_AIBotInventory>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_AIBotInventory) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_AIBotInventory");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_AIBotInventory) == 0x0000C8, "Wrong size on UFortAthenaAISpawnerDataComponent_AIBotInventory");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_AIBotInventory, EditorOnlyItems) == 0x0000B8, "Member 'UFortAthenaAISpawnerDataComponent_AIBotInventory::EditorOnlyItems' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_PlayerBotSkillset final : public UFortAthenaAISpawnerDataComponent_AIBotSkillset
{
public:
	TSubclassOf<class UFortAthenaAIBotWarmupSkillSet> WarmUpSkillSet;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_PlayerBotSkillset">();
	}
	static class UFortAthenaAISpawnerDataComponent_PlayerBotSkillset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_PlayerBotSkillset>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_PlayerBotSkillset) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_PlayerBotSkillset");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_PlayerBotSkillset) == 0x000128, "Wrong size on UFortAthenaAISpawnerDataComponent_PlayerBotSkillset");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_PlayerBotSkillset, WarmUpSkillSet) == 0x000120, "Member 'UFortAthenaAISpawnerDataComponent_PlayerBotSkillset::WarmUpSkillSet' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_CosmeticLibrary final : public UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase
{
public:
	TArray<TSoftObjectPtr<class UFortAthenaAIBotCosmeticLibraryData>> CosmeticLibraries;
	struct FScalableFloat                         DefaultCosmeticLibraryWeight;
	struct FGameplayTag                           PredefinedCosmeticSetTag;
	uint8                                         Pad_7C[0x4];
	struct FScalableFloat                         EmotesMaxCount;
	struct FScalableFloat                         bUseFixedSeed;
	struct FScalableFloat                         FixedSeed;

public:
	class UFortAthenaAIBotCosmeticLibraryData* GetAICosmeticLibraryData() const;
	int32 GetAICosmeticLibraryDataIndex() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_CosmeticLibrary">();
	}
	static class UFortAthenaAISpawnerDataComponent_CosmeticLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_CosmeticLibrary>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_CosmeticLibrary) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_CosmeticLibrary");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_CosmeticLibrary) == 0x0000F8, "Wrong size on UFortAthenaAISpawnerDataComponent_CosmeticLibrary");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CosmeticLibrary, CosmeticLibraries) == 0x000040, "Member 'UFortAthenaAISpawnerDataComponent_CosmeticLibrary::CosmeticLibraries' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CosmeticLibrary, DefaultCosmeticLibraryWeight) == 0x000050, "Member 'UFortAthenaAISpawnerDataComponent_CosmeticLibrary::DefaultCosmeticLibraryWeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CosmeticLibrary, PredefinedCosmeticSetTag) == 0x000078, "Member 'UFortAthenaAISpawnerDataComponent_CosmeticLibrary::PredefinedCosmeticSetTag' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CosmeticLibrary, EmotesMaxCount) == 0x000080, "Member 'UFortAthenaAISpawnerDataComponent_CosmeticLibrary::EmotesMaxCount' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CosmeticLibrary, bUseFixedSeed) == 0x0000A8, "Member 'UFortAthenaAISpawnerDataComponent_CosmeticLibrary::bUseFixedSeed' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CosmeticLibrary, FixedSeed) == 0x0000D0, "Member 'UFortAthenaAISpawnerDataComponent_CosmeticLibrary::FixedSeed' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_CoverBase final : public UFortAthenaAISpawnerDataComponent
{
public:
	TSubclassOf<class UNavigationQueryFilter>     CoverPositionFilterClass;
	struct FVector                                CoverBoxExtent;
	float                                         CoverOffset;
	uint8                                         Pad_54[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_CoverBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_CoverBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_CoverBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_CoverBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_CoverBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_CoverBase) == 0x000058, "Wrong size on UFortAthenaAISpawnerDataComponent_CoverBase");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CoverBase, CoverPositionFilterClass) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_CoverBase::CoverPositionFilterClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CoverBase, CoverBoxExtent) == 0x000038, "Member 'UFortAthenaAISpawnerDataComponent_CoverBase::CoverBoxExtent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_CoverBase, CoverOffset) == 0x000050, "Member 'UFortAthenaAISpawnerDataComponent_CoverBase::CoverOffset' has a wrong offset!");

class UFortAthenaAIRuntimeParameters_Inventory final : public UFortAthenaAIRuntimeParameters
{
public:
	uint8                                         bShouldDropCurrencyOnDeath : 1;
	uint8                                         bDefaultInventoryIgnoresRestrictions : 1;
	uint8                                         bSkipInventoryInitialization : 1;
	uint8                                         Pad_31[0x3];
	class FName                                   CurrencyPayoutRowName;
	uint8                                         bDeathTagsCanBlockLootDrop : 1;
	uint8                                         Pad_39[0x7];
	struct FDataTableRowHandle                    LootInfo;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIRuntimeParameters_Inventory">();
	}
	static class UFortAthenaAIRuntimeParameters_Inventory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIRuntimeParameters_Inventory>();
	}
};
static_assert(alignof(UFortAthenaAIRuntimeParameters_Inventory) == 0x000008, "Wrong alignment on UFortAthenaAIRuntimeParameters_Inventory");
static_assert(sizeof(UFortAthenaAIRuntimeParameters_Inventory) == 0x000050, "Wrong size on UFortAthenaAIRuntimeParameters_Inventory");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Inventory, CurrencyPayoutRowName) == 0x000034, "Member 'UFortAthenaAIRuntimeParameters_Inventory::CurrencyPayoutRowName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIRuntimeParameters_Inventory, LootInfo) == 0x000040, "Member 'UFortAthenaAIRuntimeParameters_Inventory::LootInfo' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_RandomInventory final : public UFortAthenaAISpawnerDataComponent_InventoryBase
{
public:
	TArray<struct FWeightedAIInventoryLoadout>    Loadouts;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_RandomInventory">();
	}
	static class UFortAthenaAISpawnerDataComponent_RandomInventory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_RandomInventory>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_RandomInventory) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_RandomInventory");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_RandomInventory) == 0x0000C0, "Wrong size on UFortAthenaAISpawnerDataComponent_RandomInventory");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_RandomInventory, Loadouts) == 0x0000B0, "Member 'UFortAthenaAISpawnerDataComponent_RandomInventory::Loadouts' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_SmartObjectBase final : public UFortAthenaAISpawnerDataComponent
{
public:
	struct FScalableFloat                         Enabled;
	struct FScalableFloat                         ChooseClosestSmartObject;
	struct FScalableFloat                         UnreachableBanDuration;
	struct FScalableFloat                         SelectedSmartObjectExpirationDelay;
	struct FScalableFloat                         GlobalSmartObjectCooldownOnFinished;
	struct FScalableFloat                         GlobalSmartObjectCooldownOnInterrupted;
	TArray<TSubclassOf<class UFortAthenaAISmartObjectActivity>> SmartObjectActivitiesCombined;
	TArray<TSubclassOf<class UFortAthenaAISmartObjectActivity>> SmartObjectActivitiesToAdd;
	TArray<TSubclassOf<class UFortAthenaAISmartObjectActivity>> SmartObjectActivitiesToRemove;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_SmartObjectBase">();
	}
	static class UFortAthenaAISpawnerDataComponent_SmartObjectBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_SmartObjectBase>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_SmartObjectBase) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_SmartObjectBase");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_SmartObjectBase) == 0x000150, "Wrong size on UFortAthenaAISpawnerDataComponent_SmartObjectBase");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SmartObjectBase, Enabled) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_SmartObjectBase::Enabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SmartObjectBase, ChooseClosestSmartObject) == 0x000058, "Member 'UFortAthenaAISpawnerDataComponent_SmartObjectBase::ChooseClosestSmartObject' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SmartObjectBase, UnreachableBanDuration) == 0x000080, "Member 'UFortAthenaAISpawnerDataComponent_SmartObjectBase::UnreachableBanDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SmartObjectBase, SelectedSmartObjectExpirationDelay) == 0x0000A8, "Member 'UFortAthenaAISpawnerDataComponent_SmartObjectBase::SelectedSmartObjectExpirationDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SmartObjectBase, GlobalSmartObjectCooldownOnFinished) == 0x0000D0, "Member 'UFortAthenaAISpawnerDataComponent_SmartObjectBase::GlobalSmartObjectCooldownOnFinished' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SmartObjectBase, GlobalSmartObjectCooldownOnInterrupted) == 0x0000F8, "Member 'UFortAthenaAISpawnerDataComponent_SmartObjectBase::GlobalSmartObjectCooldownOnInterrupted' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SmartObjectBase, SmartObjectActivitiesCombined) == 0x000120, "Member 'UFortAthenaAISpawnerDataComponent_SmartObjectBase::SmartObjectActivitiesCombined' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SmartObjectBase, SmartObjectActivitiesToAdd) == 0x000130, "Member 'UFortAthenaAISpawnerDataComponent_SmartObjectBase::SmartObjectActivitiesToAdd' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SmartObjectBase, SmartObjectActivitiesToRemove) == 0x000140, "Member 'UFortAthenaAISpawnerDataComponent_SmartObjectBase::SmartObjectActivitiesToRemove' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_SpawnParams final : public UFortAthenaAISpawnerDataComponent_SpawnParamsBase
{
public:
	TSubclassOf<class APawn>                      PawnClass;
	TSubclassOf<class AAIController>              AIControllerClass;
	struct FDataTableRowHandle                    PawnStatHandle;
	TArray<TSubclassOf<class UFortAthenaAISpawnerData>> SpawnerDataSpawnedAsChildren;
	uint8                                         bSpawnInAir : 1;
	uint8                                         bSetSkyDivingFromBus : 1;
	uint8                                         Pad_61[0x3];
	float                                         InAirSpawnTraceStartHeight;
	float                                         InAirSpawnTraceEndHeight;
	float                                         InAirSpawnTraceSphereRadius;
	float                                         SpawnTracePadding;
	uint8                                         bCheckForOverlaps : 1;
	uint8                                         bAddPOILocationTagsOnSpawn : 1;
	uint8                                         Pad_75[0x3];
	bool                                          bSetPlayerPawnAttributesWithThisStatHandle;
	uint8                                         Pad_79[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_SpawnParams">();
	}
	static class UFortAthenaAISpawnerDataComponent_SpawnParams* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_SpawnParams>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_SpawnParams) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_SpawnParams");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_SpawnParams) == 0x000080, "Wrong size on UFortAthenaAISpawnerDataComponent_SpawnParams");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SpawnParams, PawnClass) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_SpawnParams::PawnClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SpawnParams, AIControllerClass) == 0x000038, "Member 'UFortAthenaAISpawnerDataComponent_SpawnParams::AIControllerClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SpawnParams, PawnStatHandle) == 0x000040, "Member 'UFortAthenaAISpawnerDataComponent_SpawnParams::PawnStatHandle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SpawnParams, SpawnerDataSpawnedAsChildren) == 0x000050, "Member 'UFortAthenaAISpawnerDataComponent_SpawnParams::SpawnerDataSpawnedAsChildren' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SpawnParams, InAirSpawnTraceStartHeight) == 0x000064, "Member 'UFortAthenaAISpawnerDataComponent_SpawnParams::InAirSpawnTraceStartHeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SpawnParams, InAirSpawnTraceEndHeight) == 0x000068, "Member 'UFortAthenaAISpawnerDataComponent_SpawnParams::InAirSpawnTraceEndHeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SpawnParams, InAirSpawnTraceSphereRadius) == 0x00006C, "Member 'UFortAthenaAISpawnerDataComponent_SpawnParams::InAirSpawnTraceSphereRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SpawnParams, SpawnTracePadding) == 0x000070, "Member 'UFortAthenaAISpawnerDataComponent_SpawnParams::SpawnTracePadding' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_SpawnParams, bSetPlayerPawnAttributesWithThisStatHandle) == 0x000078, "Member 'UFortAthenaAISpawnerDataComponent_SpawnParams::bSetPlayerPawnAttributesWithThisStatHandle' has a wrong offset!");

class UFortAthenaBTTask_DynamicBlueprint final : public UBTTaskNode
{
public:
	class FName                                   DynamicBlueprintStatusKeyName;
	class FName                                   DynamicBlueprintActorKeyName;
	uint8                                         Pad_78[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_DynamicBlueprint">();
	}
	static class UFortAthenaBTTask_DynamicBlueprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_DynamicBlueprint>();
	}
};
static_assert(alignof(UFortAthenaBTTask_DynamicBlueprint) == 0x000008, "Wrong alignment on UFortAthenaBTTask_DynamicBlueprint");
static_assert(sizeof(UFortAthenaBTTask_DynamicBlueprint) == 0x000080, "Wrong size on UFortAthenaBTTask_DynamicBlueprint");
static_assert(offsetof(UFortAthenaBTTask_DynamicBlueprint, DynamicBlueprintStatusKeyName) == 0x000070, "Member 'UFortAthenaBTTask_DynamicBlueprint::DynamicBlueprintStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_DynamicBlueprint, DynamicBlueprintActorKeyName) == 0x000074, "Member 'UFortAthenaBTTask_DynamicBlueprint::DynamicBlueprintActorKeyName' has a wrong offset!");

class UFortAthenaNavArea_Water final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaNavArea_Water">();
	}
	static class UFortAthenaNavArea_Water* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaNavArea_Water>();
	}
};
static_assert(alignof(UFortAthenaNavArea_Water) == 0x000008, "Wrong alignment on UFortAthenaNavArea_Water");
static_assert(sizeof(UFortAthenaNavArea_Water) == 0x000050, "Wrong size on UFortAthenaNavArea_Water");

class UFortAthenaNpcPatrollingComponent final : public UActorComponent
{
public:
	class AAIController*                          CachedAIController;
	TMulticastInlineDelegate<void()>              OnStartPatrollingEvent;
	TMulticastInlineDelegate<void()>              OnStopPatrollingEvent;
	class AFortAthenaPatrolPath*                  PatrolPath;
	uint8                                         Pad_D0[0x28];

public:
	bool FindAndSetDynamicPatrolPath(const struct FFortAthenaAIObjectTrackerQuery& FindQuery, const bool bOrientationAlreadyRandomized, const bool bExcludeCurrentlyUsedPatrolPath);
	void RemovePatrolPath();
	void SelectNextPatrolPoint();
	void SetPatrolPath(class AFortAthenaPatrolPath* NewPatrolPath, const bool bOrientationAlreadyRandomized);
	void UpdateCurrentDestinationToNearestNextPoint();

	class AFortAthenaPatrolPoint* GetCurrentPatrolPoint() const;
	const class AFortAthenaPatrolPath* GetPatrolPath() const;
	int32 GetPatrolPointsCount() const;
	bool IsCurrentPatrolPointAnEndPoint() const;
	bool IsPatrollingEnable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaNpcPatrollingComponent">();
	}
	static class UFortAthenaNpcPatrollingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaNpcPatrollingComponent>();
	}
};
static_assert(alignof(UFortAthenaNpcPatrollingComponent) == 0x000008, "Wrong alignment on UFortAthenaNpcPatrollingComponent");
static_assert(sizeof(UFortAthenaNpcPatrollingComponent) == 0x0000F8, "Wrong size on UFortAthenaNpcPatrollingComponent");
static_assert(offsetof(UFortAthenaNpcPatrollingComponent, CachedAIController) == 0x0000A0, "Member 'UFortAthenaNpcPatrollingComponent::CachedAIController' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcPatrollingComponent, OnStartPatrollingEvent) == 0x0000A8, "Member 'UFortAthenaNpcPatrollingComponent::OnStartPatrollingEvent' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcPatrollingComponent, OnStopPatrollingEvent) == 0x0000B8, "Member 'UFortAthenaNpcPatrollingComponent::OnStopPatrollingEvent' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcPatrollingComponent, PatrolPath) == 0x0000C8, "Member 'UFortAthenaNpcPatrollingComponent::PatrolPath' has a wrong offset!");

class UPatrolPointRenderingComponent final : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PatrolPointRenderingComponent">();
	}
	static class UPatrolPointRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPatrolPointRenderingComponent>();
	}
};
static_assert(alignof(UPatrolPointRenderingComponent) == 0x000010, "Wrong alignment on UPatrolPointRenderingComponent");
static_assert(sizeof(UPatrolPointRenderingComponent) == 0x000570, "Wrong size on UPatrolPointRenderingComponent");

class IFortAthenaTrackableAIObjectInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaTrackableAIObjectInterface">();
	}
	static class IFortAthenaTrackableAIObjectInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortAthenaTrackableAIObjectInterface>();
	}
};
static_assert(alignof(IFortAthenaTrackableAIObjectInterface) == 0x000008, "Wrong alignment on IFortAthenaTrackableAIObjectInterface");
static_assert(sizeof(IFortAthenaTrackableAIObjectInterface) == 0x000028, "Wrong size on IFortAthenaTrackableAIObjectInterface");

class UAthenaPhysicsAIPerceptionStimuliSourceComponent final : public UAthenaAIPerceptionStimuliSourceComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaPhysicsAIPerceptionStimuliSourceComponent">();
	}
	static class UAthenaPhysicsAIPerceptionStimuliSourceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaPhysicsAIPerceptionStimuliSourceComponent>();
	}
};
static_assert(alignof(UAthenaPhysicsAIPerceptionStimuliSourceComponent) == 0x000008, "Wrong alignment on UAthenaPhysicsAIPerceptionStimuliSourceComponent");
static_assert(sizeof(UAthenaPhysicsAIPerceptionStimuliSourceComponent) == 0x0000B8, "Wrong size on UAthenaPhysicsAIPerceptionStimuliSourceComponent");

class UFortCollisionResponseSwapperComponent final : public UActorComponent
{
public:
	class UPrimitiveComponent*                    CollisionPrimitiveComponent;
	class UPrimitiveComponent*                    OverlapPrimitiveComponent;
	uint8                                         Pad_B0[0x28];
	TArray<class AFortPawn*>                      PawnsListenedTo;
	uint8                                         Pad_E8[0x8];
	struct FScalableFloat                         VisibilityModifiedTime;
	ECollisionResponse                            NewCollisionResponse;
	uint8                                         Pad_119[0x7];

public:
	void HandleBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void HandleEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void RegisterCallbacksForOverlap(class UPrimitiveComponent* InCollisionPrimitiveComponent, class UPrimitiveComponent* InOverlapPrimitiveComponent);
	void RestoreCollisionResponses();
	void UnregisterCallbacksForOverlap();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollisionResponseSwapperComponent">();
	}
	static class UFortCollisionResponseSwapperComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollisionResponseSwapperComponent>();
	}
};
static_assert(alignof(UFortCollisionResponseSwapperComponent) == 0x000008, "Wrong alignment on UFortCollisionResponseSwapperComponent");
static_assert(sizeof(UFortCollisionResponseSwapperComponent) == 0x000120, "Wrong size on UFortCollisionResponseSwapperComponent");
static_assert(offsetof(UFortCollisionResponseSwapperComponent, CollisionPrimitiveComponent) == 0x0000A0, "Member 'UFortCollisionResponseSwapperComponent::CollisionPrimitiveComponent' has a wrong offset!");
static_assert(offsetof(UFortCollisionResponseSwapperComponent, OverlapPrimitiveComponent) == 0x0000A8, "Member 'UFortCollisionResponseSwapperComponent::OverlapPrimitiveComponent' has a wrong offset!");
static_assert(offsetof(UFortCollisionResponseSwapperComponent, PawnsListenedTo) == 0x0000D8, "Member 'UFortCollisionResponseSwapperComponent::PawnsListenedTo' has a wrong offset!");
static_assert(offsetof(UFortCollisionResponseSwapperComponent, VisibilityModifiedTime) == 0x0000F0, "Member 'UFortCollisionResponseSwapperComponent::VisibilityModifiedTime' has a wrong offset!");
static_assert(offsetof(UFortCollisionResponseSwapperComponent, NewCollisionResponse) == 0x000118, "Member 'UFortCollisionResponseSwapperComponent::NewCollisionResponse' has a wrong offset!");

class UFortAthenaAIPerk_Bunker final : public UFortAIPerkBase
{
public:
	struct FScalableFloat                         OddsToBeUsedAgainstUnknownThreat;
	struct FScalableFloat                         OddsToUseRoofBuilding;
	struct FScalableFloat                         OddsToBuildForwardRamp;
	struct FScalableFloat                         InitialBuildDelay;
	struct FScalableFloat                         SamePieceBuildDelay;
	struct FScalableFloat                         SamePieceBuildDelayRandomDeviation;
	struct FScalableFloat                         DifferentPieceBuildDelay;
	struct FScalableFloat                         DifferentPieceBuildDelayRandomDeviation;
	struct FScalableFloat                         OddsToSelectRandomMaterial;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIPerk_Bunker">();
	}
	static class UFortAthenaAIPerk_Bunker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIPerk_Bunker>();
	}
};
static_assert(alignof(UFortAthenaAIPerk_Bunker) == 0x000008, "Wrong alignment on UFortAthenaAIPerk_Bunker");
static_assert(sizeof(UFortAthenaAIPerk_Bunker) == 0x0002D0, "Wrong size on UFortAthenaAIPerk_Bunker");
static_assert(offsetof(UFortAthenaAIPerk_Bunker, OddsToBeUsedAgainstUnknownThreat) == 0x000168, "Member 'UFortAthenaAIPerk_Bunker::OddsToBeUsedAgainstUnknownThreat' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIPerk_Bunker, OddsToUseRoofBuilding) == 0x000190, "Member 'UFortAthenaAIPerk_Bunker::OddsToUseRoofBuilding' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIPerk_Bunker, OddsToBuildForwardRamp) == 0x0001B8, "Member 'UFortAthenaAIPerk_Bunker::OddsToBuildForwardRamp' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIPerk_Bunker, InitialBuildDelay) == 0x0001E0, "Member 'UFortAthenaAIPerk_Bunker::InitialBuildDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIPerk_Bunker, SamePieceBuildDelay) == 0x000208, "Member 'UFortAthenaAIPerk_Bunker::SamePieceBuildDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIPerk_Bunker, SamePieceBuildDelayRandomDeviation) == 0x000230, "Member 'UFortAthenaAIPerk_Bunker::SamePieceBuildDelayRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIPerk_Bunker, DifferentPieceBuildDelay) == 0x000258, "Member 'UFortAthenaAIPerk_Bunker::DifferentPieceBuildDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIPerk_Bunker, DifferentPieceBuildDelayRandomDeviation) == 0x000280, "Member 'UFortAthenaAIPerk_Bunker::DifferentPieceBuildDelayRandomDeviation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIPerk_Bunker, OddsToSelectRandomMaterial) == 0x0002A8, "Member 'UFortAthenaAIPerk_Bunker::OddsToSelectRandomMaterial' has a wrong offset!");

class UAthenaAIBotDebugMiniMapIndicator final : public TObjectBasedCycleFixup<class UFortMiniMapIndicator, 0x0118, 0x08>
{
public:
	TArray<struct FBotDebugInfo>                  BotDebugInfoList;
	struct FSlateBrush                            DebugMinimapIconBrush;
	uint8                                         Pad_210[0x60];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIBotDebugMiniMapIndicator">();
	}
	static class UAthenaAIBotDebugMiniMapIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIBotDebugMiniMapIndicator>();
	}
};
static_assert(alignof(UAthenaAIBotDebugMiniMapIndicator) == 0x000010, "Wrong alignment on UAthenaAIBotDebugMiniMapIndicator");
static_assert(sizeof(UAthenaAIBotDebugMiniMapIndicator) == 0x000270, "Wrong size on UAthenaAIBotDebugMiniMapIndicator");
static_assert(offsetof(UAthenaAIBotDebugMiniMapIndicator, BotDebugInfoList) == 0x000140, "Member 'UAthenaAIBotDebugMiniMapIndicator::BotDebugInfoList' has a wrong offset!");
static_assert(offsetof(UAthenaAIBotDebugMiniMapIndicator, DebugMinimapIconBrush) == 0x000150, "Member 'UAthenaAIBotDebugMiniMapIndicator::DebugMinimapIconBrush' has a wrong offset!");

class alignas(0x10) UAthenaAIPopulationTracker final : public UAISubsystem
{
public:
	TMulticastInlineDelegate<void(class AController* KilledController, bool bIsABot, class AFortPawn* KilledAIPawn, class AFortPlayerPawn* KilledPlayerPawn, class AController* KillerController)> OnAIPawnDied;
	TMulticastInlineDelegate<void(class AFortPawn* DestroyedPawn)> OnAIPawnDestroyed;
	TMulticastInlineDelegate<void(class AController* SpawnedController, bool bIsABot, class AFortPawn* FortAIPawn, class AFortPlayerPawn* PlayerPawn)> OnAIPawnSpawned;
	uint8                                         Pad_68[0x60];
	TArray<class AController*>                    AIList;
	class AFortGameModeAthena*                    CachedGameMode;
	uint8                                         Pad_E0[0x90];

public:
	void OnAgentGameOver(class AFortAthenaAIBotController* AIBotController, class AFortPawn* Pawn, class AController* Instigator);
	void OnAISpawned(class APawn* Pawn, const int32 RequestID);
	void OnFortPawnDestroyed(class AActor* DestroyedActor);
	void OnFortPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);

	TArray<class AController*> GetAIMatchingQuery(const struct FGameplayTagQuery& TagQuery) const;
	struct FAIPopulationCountSnapshot GetAIPopulationTrackerCount() const;
	int32 GetNumAIPawn() const;
	int32 GetNumNonAthenaParticipantBots() const;
	int32 GetNumPlayerBots() const;
	int32 GetNumTotalBots() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIPopulationTracker">();
	}
	static class UAthenaAIPopulationTracker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIPopulationTracker>();
	}
};
static_assert(alignof(UAthenaAIPopulationTracker) == 0x000010, "Wrong alignment on UAthenaAIPopulationTracker");
static_assert(sizeof(UAthenaAIPopulationTracker) == 0x000170, "Wrong size on UAthenaAIPopulationTracker");
static_assert(offsetof(UAthenaAIPopulationTracker, OnAIPawnDied) == 0x000038, "Member 'UAthenaAIPopulationTracker::OnAIPawnDied' has a wrong offset!");
static_assert(offsetof(UAthenaAIPopulationTracker, OnAIPawnDestroyed) == 0x000048, "Member 'UAthenaAIPopulationTracker::OnAIPawnDestroyed' has a wrong offset!");
static_assert(offsetof(UAthenaAIPopulationTracker, OnAIPawnSpawned) == 0x000058, "Member 'UAthenaAIPopulationTracker::OnAIPawnSpawned' has a wrong offset!");
static_assert(offsetof(UAthenaAIPopulationTracker, AIList) == 0x0000C8, "Member 'UAthenaAIPopulationTracker::AIList' has a wrong offset!");
static_assert(offsetof(UAthenaAIPopulationTracker, CachedGameMode) == 0x0000D8, "Member 'UAthenaAIPopulationTracker::CachedGameMode' has a wrong offset!");

class UAthenaAIServiceCover final : public UAthenaAIService
{
public:
	TSubclassOf<class UNavigationQueryFilter>     CoverPositionFilterClass;
	uint8                                         Pad_80[0x28];

public:
	static class UAthenaAIServiceCover* GetAthenaAIServiceCover(const class UObject* WorldContextObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIServiceCover">();
	}
	static class UAthenaAIServiceCover* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIServiceCover>();
	}
};
static_assert(alignof(UAthenaAIServiceCover) == 0x000008, "Wrong alignment on UAthenaAIServiceCover");
static_assert(sizeof(UAthenaAIServiceCover) == 0x0000A8, "Wrong size on UAthenaAIServiceCover");
static_assert(offsetof(UAthenaAIServiceCover, CoverPositionFilterClass) == 0x000078, "Member 'UAthenaAIServiceCover::CoverPositionFilterClass' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) UAthenaAIServiceCreativePlayerBots : public UAthenaAIServicePlayerBots
{
public:
	TMulticastInlineDelegate<void()>              OnMinigameBotsReady;
	TWeakObjectPtr<class AFortMinigame>           CachedMinigame;
	uint8                                         Pad_1250[0x8];
	TMap<class AActor*, class APlayerController*> HiringHistory;
	uint8                                         Pad_12A8[0x10];

public:
	void AddHiringHistory(class AActor* HiredOwner, class APlayerController* HiringPlayer);
	void ClearHiringHistory(class AActor* HiredOwner);
	void OnFinishedAddingMinigamePlayer(const struct FUniqueNetIdRepl& UniqueNetId, bool bIsLocalPlayer);
	void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState);

	const class APlayerController* GetLastHiringPlayer(const class AActor* HiredOwner) const;
	bool IsMinigameBotSpawningRequired() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIServiceCreativePlayerBots">();
	}
	static class UAthenaAIServiceCreativePlayerBots* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIServiceCreativePlayerBots>();
	}
};
#pragma pack(pop)
static_assert(alignof(UAthenaAIServiceCreativePlayerBots) == 0x000010, "Wrong alignment on UAthenaAIServiceCreativePlayerBots");
static_assert(sizeof(UAthenaAIServiceCreativePlayerBots) == 0x0012C0, "Wrong size on UAthenaAIServiceCreativePlayerBots");
static_assert(offsetof(UAthenaAIServiceCreativePlayerBots, OnMinigameBotsReady) == 0x001238, "Member 'UAthenaAIServiceCreativePlayerBots::OnMinigameBotsReady' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceCreativePlayerBots, CachedMinigame) == 0x001248, "Member 'UAthenaAIServiceCreativePlayerBots::CachedMinigame' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceCreativePlayerBots, HiringHistory) == 0x001258, "Member 'UAthenaAIServiceCreativePlayerBots::HiringHistory' has a wrong offset!");

class alignas(0x10) UAthenaAIServiceLoot final : public UAthenaAIService
{
public:
	struct FVector                                LootOctreeCenter;
	struct FScalableFloat                         LootOctreeRadius;
	struct FScalableFloat                         SupplyDropStatusUpdateRate;
	struct FScalableFloat                         RemoveInvalidChestFromOctreeProbability;
	struct FScalableFloat                         MovingLootTrackingEnabled;
	struct FScalableFloat                         MovingLootUpdateRate;
	struct FScalableFloat                         MovingLootOctreeUpdateDistanceThreshold;
	TArray<TSubclassOf<class ABuildingProp>>      HarvestableActorClassList;
	struct FScalableFloat                         LootClusteringEnabled;
	struct FScalableFloat                         LootClusteringNeighborDistanceMax;
	struct FScalableFloat                         LootClusteringNeighborhoodCountMin;
	class UDataRegistry*                          LootClusteringItemWeightDataRegistry;
	struct FScalableFloat                         LootClusteringDefaultWeight;
	struct FScalableFloat                         LootClusteringExpandByBoxX;
	struct FScalableFloat                         LootClusteringExpandByBoxY;
	struct FScalableFloat                         LootClusteringExpandByBoxZ;
	uint8                                         Pad_2B0[0x210];
	TMap<TWeakObjectPtr<class AFortPickup>, struct FMovingLootInfo> MovingLoots;
	uint8                                         Pad_510[0x8];
	TArray<struct FCachedSupplyDrop>              CachedSupplyDrops;
	class UFortWorldItem*                         CachedWorldItem;
	class UDataTable*                             BotBuildingContainerExcludeListDataTable;
	uint8                                         Pad_538[0x60];
	TArray<struct FFortBotClusterLootWeightDataTableRow> CachedLootClusteringItemWeightTable;
	uint8                                         Pad_5A8[0x8];

public:
	void K2_AddGameplayTagToLoot(const class AActor* LootActor, const struct FGameplayTag& GameplayTag);
	void K2_RemoveGameplayTagFromLoot(const class AActor* LootActor, const struct FGameplayTag& GameplayTag);
	void OnGamePhaseStepChanged(const TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
	void UpdateMovingLoots();
	void UpdateSupplyDropStatus();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIServiceLoot">();
	}
	static class UAthenaAIServiceLoot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIServiceLoot>();
	}
};
static_assert(alignof(UAthenaAIServiceLoot) == 0x000010, "Wrong alignment on UAthenaAIServiceLoot");
static_assert(sizeof(UAthenaAIServiceLoot) == 0x0005B0, "Wrong size on UAthenaAIServiceLoot");
static_assert(offsetof(UAthenaAIServiceLoot, LootOctreeCenter) == 0x000078, "Member 'UAthenaAIServiceLoot::LootOctreeCenter' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, LootOctreeRadius) == 0x000090, "Member 'UAthenaAIServiceLoot::LootOctreeRadius' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, SupplyDropStatusUpdateRate) == 0x0000B8, "Member 'UAthenaAIServiceLoot::SupplyDropStatusUpdateRate' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, RemoveInvalidChestFromOctreeProbability) == 0x0000E0, "Member 'UAthenaAIServiceLoot::RemoveInvalidChestFromOctreeProbability' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, MovingLootTrackingEnabled) == 0x000108, "Member 'UAthenaAIServiceLoot::MovingLootTrackingEnabled' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, MovingLootUpdateRate) == 0x000130, "Member 'UAthenaAIServiceLoot::MovingLootUpdateRate' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, MovingLootOctreeUpdateDistanceThreshold) == 0x000158, "Member 'UAthenaAIServiceLoot::MovingLootOctreeUpdateDistanceThreshold' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, HarvestableActorClassList) == 0x000180, "Member 'UAthenaAIServiceLoot::HarvestableActorClassList' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, LootClusteringEnabled) == 0x000190, "Member 'UAthenaAIServiceLoot::LootClusteringEnabled' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, LootClusteringNeighborDistanceMax) == 0x0001B8, "Member 'UAthenaAIServiceLoot::LootClusteringNeighborDistanceMax' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, LootClusteringNeighborhoodCountMin) == 0x0001E0, "Member 'UAthenaAIServiceLoot::LootClusteringNeighborhoodCountMin' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, LootClusteringItemWeightDataRegistry) == 0x000208, "Member 'UAthenaAIServiceLoot::LootClusteringItemWeightDataRegistry' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, LootClusteringDefaultWeight) == 0x000210, "Member 'UAthenaAIServiceLoot::LootClusteringDefaultWeight' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, LootClusteringExpandByBoxX) == 0x000238, "Member 'UAthenaAIServiceLoot::LootClusteringExpandByBoxX' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, LootClusteringExpandByBoxY) == 0x000260, "Member 'UAthenaAIServiceLoot::LootClusteringExpandByBoxY' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, LootClusteringExpandByBoxZ) == 0x000288, "Member 'UAthenaAIServiceLoot::LootClusteringExpandByBoxZ' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, MovingLoots) == 0x0004C0, "Member 'UAthenaAIServiceLoot::MovingLoots' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, CachedSupplyDrops) == 0x000518, "Member 'UAthenaAIServiceLoot::CachedSupplyDrops' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, CachedWorldItem) == 0x000528, "Member 'UAthenaAIServiceLoot::CachedWorldItem' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, BotBuildingContainerExcludeListDataTable) == 0x000530, "Member 'UAthenaAIServiceLoot::BotBuildingContainerExcludeListDataTable' has a wrong offset!");
static_assert(offsetof(UAthenaAIServiceLoot, CachedLootClusteringItemWeightTable) == 0x000598, "Member 'UAthenaAIServiceLoot::CachedLootClusteringItemWeightTable' has a wrong offset!");

class UCacheSafeZoneLocation final : public UObject
{
public:
	uint8                                         Pad_28[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CacheSafeZoneLocation">();
	}
	static class UCacheSafeZoneLocation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCacheSafeZoneLocation>();
	}
};
static_assert(alignof(UCacheSafeZoneLocation) == 0x000008, "Wrong alignment on UCacheSafeZoneLocation");
static_assert(sizeof(UCacheSafeZoneLocation) == 0x000060, "Wrong size on UCacheSafeZoneLocation");

class UAthenaAIServiceZoneManager final : public UAthenaAIService
{
public:
	TArray<struct FAthenaAITrackedZone>           TrackedZones;

public:
	static class UAthenaAIServiceZoneManager* GetAthenaAIServiceZoneManager(const class UObject* WorldContextObject);

	void OnZoneDestroyed(class AActor* Actor);
	void RegisterDangerZone(class AActor* Actor, const float Radius);
	void RegisterOccluder(class AActor* OccluderActor, const float SphereRadius);
	void UnregisterDangerZone(class AActor* Actor);
	void UnregisterOccluder(class AActor* OccluderActor);

	bool IsInDangerZone(const struct FVector& Location) const;
	bool IsLOFOccluded(const struct FVector& StartLocation, const struct FVector& EndLocation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIServiceZoneManager">();
	}
	static class UAthenaAIServiceZoneManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIServiceZoneManager>();
	}
};
static_assert(alignof(UAthenaAIServiceZoneManager) == 0x000008, "Wrong alignment on UAthenaAIServiceZoneManager");
static_assert(sizeof(UAthenaAIServiceZoneManager) == 0x000088, "Wrong size on UAthenaAIServiceZoneManager");
static_assert(offsetof(UAthenaAIServiceZoneManager, TrackedZones) == 0x000078, "Member 'UAthenaAIServiceZoneManager::TrackedZones' has a wrong offset!");

class UAthenaAIVehicleAvoidanceManager final : public UAISubsystem
{
public:
	uint8                                         Pad_38[0x4C];
	float                                         TimeToRefreshTree;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIVehicleAvoidanceManager">();
	}
	static class UAthenaAIVehicleAvoidanceManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIVehicleAvoidanceManager>();
	}
};
static_assert(alignof(UAthenaAIVehicleAvoidanceManager) == 0x000008, "Wrong alignment on UAthenaAIVehicleAvoidanceManager");
static_assert(sizeof(UAthenaAIVehicleAvoidanceManager) == 0x000088, "Wrong size on UAthenaAIVehicleAvoidanceManager");
static_assert(offsetof(UAthenaAIVehicleAvoidanceManager, TimeToRefreshTree) == 0x000084, "Member 'UAthenaAIVehicleAvoidanceManager::TimeToRefreshTree' has a wrong offset!");

}
