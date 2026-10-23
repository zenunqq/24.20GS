#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ModularGameplay_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "ScoutDroneUI_structs.hpp"
#include "DynamicUI_classes.hpp"

namespace SDK
{

class UFortMobileActionButtonBehaviorExtension_ScoutDroneUse final : public UFortMobileActionButtonBehaviorExtension
{
public:
	struct FGameplayTagContainer                  ContextTagToCheck;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileActionButtonBehaviorExtension_ScoutDroneUse">();
	}
	static class UFortMobileActionButtonBehaviorExtension_ScoutDroneUse* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileActionButtonBehaviorExtension_ScoutDroneUse>();
	}
};
static_assert(alignof(UFortMobileActionButtonBehaviorExtension_ScoutDroneUse) == 0x000008, "Wrong alignment on UFortMobileActionButtonBehaviorExtension_ScoutDroneUse");
static_assert(sizeof(UFortMobileActionButtonBehaviorExtension_ScoutDroneUse) == 0x000090, "Wrong size on UFortMobileActionButtonBehaviorExtension_ScoutDroneUse");
static_assert(offsetof(UFortMobileActionButtonBehaviorExtension_ScoutDroneUse, ContextTagToCheck) == 0x000070, "Member 'UFortMobileActionButtonBehaviorExtension_ScoutDroneUse::ContextTagToCheck' has a wrong offset!");

class UFortMobileButtonBehaviorComponent_ScoutDronePickupItems final : public UFortMobileButtonBehaviorComponent_Visibility
{
public:
	struct FGameplayTagContainer                  HoldingItemsTags;
	TWeakObjectPtr<class UFortControllerComponent_Interaction> InteractionComponent;
	uint8                                         Pad_70[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileButtonBehaviorComponent_ScoutDronePickupItems">();
	}
	static class UFortMobileButtonBehaviorComponent_ScoutDronePickupItems* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileButtonBehaviorComponent_ScoutDronePickupItems>();
	}
};
static_assert(alignof(UFortMobileButtonBehaviorComponent_ScoutDronePickupItems) == 0x000008, "Wrong alignment on UFortMobileButtonBehaviorComponent_ScoutDronePickupItems");
static_assert(sizeof(UFortMobileButtonBehaviorComponent_ScoutDronePickupItems) == 0x000078, "Wrong size on UFortMobileButtonBehaviorComponent_ScoutDronePickupItems");
static_assert(offsetof(UFortMobileButtonBehaviorComponent_ScoutDronePickupItems, HoldingItemsTags) == 0x000048, "Member 'UFortMobileButtonBehaviorComponent_ScoutDronePickupItems::HoldingItemsTags' has a wrong offset!");
static_assert(offsetof(UFortMobileButtonBehaviorComponent_ScoutDronePickupItems, InteractionComponent) == 0x000068, "Member 'UFortMobileButtonBehaviorComponent_ScoutDronePickupItems::InteractionComponent' has a wrong offset!");

class UDronePickUpIndicatorComponent final : public UGameFrameworkComponent
{
public:
	TSubclassOf<class UFortActorIndicatorWidget>  ItemIndicatorType;
	TSubclassOf<class UFortActorIndicatorWidget>  DbnoIndicatorType;
	struct FUserWidgetPool                        IndicatorPool;
	uint8                                         Pad_138[0x20];

public:
	void Init(class AFortScoutDrone* Drone);
	void OnDroneDestroyed(class AActor* DestroyedActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DronePickUpIndicatorComponent">();
	}
	static class UDronePickUpIndicatorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDronePickUpIndicatorComponent>();
	}
};
static_assert(alignof(UDronePickUpIndicatorComponent) == 0x000008, "Wrong alignment on UDronePickUpIndicatorComponent");
static_assert(sizeof(UDronePickUpIndicatorComponent) == 0x000158, "Wrong size on UDronePickUpIndicatorComponent");
static_assert(offsetof(UDronePickUpIndicatorComponent, ItemIndicatorType) == 0x0000A0, "Member 'UDronePickUpIndicatorComponent::ItemIndicatorType' has a wrong offset!");
static_assert(offsetof(UDronePickUpIndicatorComponent, DbnoIndicatorType) == 0x0000A8, "Member 'UDronePickUpIndicatorComponent::DbnoIndicatorType' has a wrong offset!");
static_assert(offsetof(UDronePickUpIndicatorComponent, IndicatorPool) == 0x0000B0, "Member 'UDronePickUpIndicatorComponent::IndicatorPool' has a wrong offset!");

class UScoutDroneHUD final : public UUserWidget
{
public:
	float                                         TimeToConfirmTargetCache;
	float                                         InitialHealth;
	struct FScalableFloat                         WarningRange;
	struct FScalableFloat                         SignalLossRange;
	struct FScalableFloat                         UpdateSignalInterval;
	struct FGameplayTag                           MarkAbilityTag;
	struct FGameplayTag                           DismissAbilityTag;
	struct FGameplayTag                           InteractAbilityTag;
	struct FGameplayTag                           PickUpAbilityTag;
	struct FGameplayTag                           PickUpTargetsChangedTag;
	struct FGameplayTag                           SpeedBoostAbilityTag;
	class UOverlay*                               Overlay_Health;
	class UOverlay*                               Overlay_EnergyLevel;
	class UOverlay*                               Overlay_Reticle;
	class UOverlay*                               Overlay_TetheringIndicator;
	float                                         MaxHealthCache;
	float                                         MaxEnergyCache;
	uint8                                         Pad_328[0x48];
	struct FTimerHandle                           SignalDataTimerHandle;
	TArray<struct FScoutDroneWidgetIdentifier>    HUDIdentifiers;

public:
	float GetTargetConfirmationTime();
	void OnDroneDismissAbilityUsed();
	void OnDroneEnergyChanged(float EnergyPercentage);
	void OnDroneHealthUpdated(float HealthPercentage, float CurrentHealth);
	void OnDroneInteractAbilityEnd();
	void OnDroneInteractAbilityUsed();
	void OnDroneMarkAbilityEnd();
	void OnDroneMarkAbilityUsed();
	void OnDronePickUpAbilityEnd();
	void OnDronePickUpAbilityUsed();
	void OnDronePickUpTargetsAvailable();
	void OnDronePickUpTargetsEmpty();
	void OnDroneSignalDataUpdated(float DistanceFromPlayer, float SignalPercentage);
	void OnDroneSpeedBoostAbilityEnd();
	void OnDroneSpeedBoostAbilityUsed();
	void OnOwningPlayerDamaged();
	void OnReticleChangeAbilityActivated(const struct FGameplayTag& UpdatedTag);
	void OnTargetingStatusChanged(const struct FScoutDroneStatusData& StatusData);

	class AFortScoutDrone* GetControlledDrone() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScoutDroneHUD">();
	}
	static class UScoutDroneHUD* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoutDroneHUD>();
	}
};
static_assert(alignof(UScoutDroneHUD) == 0x000008, "Wrong alignment on UScoutDroneHUD");
static_assert(sizeof(UScoutDroneHUD) == 0x000388, "Wrong size on UScoutDroneHUD");
static_assert(offsetof(UScoutDroneHUD, TimeToConfirmTargetCache) == 0x000268, "Member 'UScoutDroneHUD::TimeToConfirmTargetCache' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, InitialHealth) == 0x00026C, "Member 'UScoutDroneHUD::InitialHealth' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, WarningRange) == 0x000270, "Member 'UScoutDroneHUD::WarningRange' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, SignalLossRange) == 0x000298, "Member 'UScoutDroneHUD::SignalLossRange' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, UpdateSignalInterval) == 0x0002C0, "Member 'UScoutDroneHUD::UpdateSignalInterval' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, MarkAbilityTag) == 0x0002E8, "Member 'UScoutDroneHUD::MarkAbilityTag' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, DismissAbilityTag) == 0x0002EC, "Member 'UScoutDroneHUD::DismissAbilityTag' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, InteractAbilityTag) == 0x0002F0, "Member 'UScoutDroneHUD::InteractAbilityTag' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, PickUpAbilityTag) == 0x0002F4, "Member 'UScoutDroneHUD::PickUpAbilityTag' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, PickUpTargetsChangedTag) == 0x0002F8, "Member 'UScoutDroneHUD::PickUpTargetsChangedTag' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, SpeedBoostAbilityTag) == 0x0002FC, "Member 'UScoutDroneHUD::SpeedBoostAbilityTag' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, Overlay_Health) == 0x000300, "Member 'UScoutDroneHUD::Overlay_Health' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, Overlay_EnergyLevel) == 0x000308, "Member 'UScoutDroneHUD::Overlay_EnergyLevel' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, Overlay_Reticle) == 0x000310, "Member 'UScoutDroneHUD::Overlay_Reticle' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, Overlay_TetheringIndicator) == 0x000318, "Member 'UScoutDroneHUD::Overlay_TetheringIndicator' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, MaxHealthCache) == 0x000320, "Member 'UScoutDroneHUD::MaxHealthCache' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, MaxEnergyCache) == 0x000324, "Member 'UScoutDroneHUD::MaxEnergyCache' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, SignalDataTimerHandle) == 0x000370, "Member 'UScoutDroneHUD::SignalDataTimerHandle' has a wrong offset!");
static_assert(offsetof(UScoutDroneHUD, HUDIdentifiers) == 0x000378, "Member 'UScoutDroneHUD::HUDIdentifiers' has a wrong offset!");

class UScoutDroneTetherIndicator final : public UUserWidget
{
public:
	uint8                                         Pad_268[0x20];

public:
	void BP_OnEnterSignalLossRange();
	void BP_OnEnterWarningRange();
	void BP_OnExitWarningRange();
	void BP_WhileInWarningRange(float SignalIntensityPercentage);

	class AFortScoutDrone* GetControlledDrone() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScoutDroneTetherIndicator">();
	}
	static class UScoutDroneTetherIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoutDroneTetherIndicator>();
	}
};
static_assert(alignof(UScoutDroneTetherIndicator) == 0x000008, "Wrong alignment on UScoutDroneTetherIndicator");
static_assert(sizeof(UScoutDroneTetherIndicator) == 0x000288, "Wrong size on UScoutDroneTetherIndicator");

class AScoutDroneUIDirector final : public ADynamicUIDirectorBase
{
public:
	struct FGameplayTagContainer                  HUDTagsToHide;

public:
	void BP_OnScoutDroneDeployed();
	void BP_OnScoutDroneDismissed();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScoutDroneUIDirector">();
	}
	static class AScoutDroneUIDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<AScoutDroneUIDirector>();
	}
};
static_assert(alignof(AScoutDroneUIDirector) == 0x000008, "Wrong alignment on AScoutDroneUIDirector");
static_assert(sizeof(AScoutDroneUIDirector) == 0x0002D8, "Wrong size on AScoutDroneUIDirector");
static_assert(offsetof(AScoutDroneUIDirector, HUDTagsToHide) == 0x0002B8, "Member 'AScoutDroneUIDirector::HUDTagsToHide' has a wrong offset!");

}
