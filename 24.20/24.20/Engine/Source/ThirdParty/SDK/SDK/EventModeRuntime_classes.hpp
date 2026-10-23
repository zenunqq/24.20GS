#pragma once

#include "Basic.hpp"

#include "EventModeRuntime_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "ModularGameplay_classes.hpp"

namespace SDK
{

class UFortGameFrameworkComponent_EventMode : public UGameFrameworkComponent
{
public:
	uint8                                         Pad_A0[0x60];
	TSoftObjectPtr<class UFortWeaponItemDefinition> ActivatorAsset;
	TArray<struct FUIExtension>                   UIExtensions;
	TMap<struct FGameplayTag, TSoftClassPtr<class UClass>> TaggedUIExtensions;
	TArray<struct FEventModeFocusActor>           FocusActors;
	uint8                                         Pad_198[0x8];
	class UInputComponent*                        InputComponent;
	TArray<struct FEventModeWidgetCachedData>     CachedWidgetData;
	TSoftObjectPtr<class AActor>                  CurrentlyFocusedActor;
	uint8                                         Pad_1E0[0x40];

public:
	void OnEnterVehicle();
	void OnExitVehicle();
	void OnPlayerPawnPossessed(class APawn* PossessedPawn);

	bool GetIsEventModeActive() const;
	bool GetIsFocusAvailable() const;
	bool GetIsFocusing() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameFrameworkComponent_EventMode">();
	}
	static class UFortGameFrameworkComponent_EventMode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameFrameworkComponent_EventMode>();
	}
};
static_assert(alignof(UFortGameFrameworkComponent_EventMode) == 0x000008, "Wrong alignment on UFortGameFrameworkComponent_EventMode");
static_assert(sizeof(UFortGameFrameworkComponent_EventMode) == 0x000220, "Wrong size on UFortGameFrameworkComponent_EventMode");
static_assert(offsetof(UFortGameFrameworkComponent_EventMode, ActivatorAsset) == 0x000100, "Member 'UFortGameFrameworkComponent_EventMode::ActivatorAsset' has a wrong offset!");
static_assert(offsetof(UFortGameFrameworkComponent_EventMode, UIExtensions) == 0x000128, "Member 'UFortGameFrameworkComponent_EventMode::UIExtensions' has a wrong offset!");
static_assert(offsetof(UFortGameFrameworkComponent_EventMode, TaggedUIExtensions) == 0x000138, "Member 'UFortGameFrameworkComponent_EventMode::TaggedUIExtensions' has a wrong offset!");
static_assert(offsetof(UFortGameFrameworkComponent_EventMode, FocusActors) == 0x000188, "Member 'UFortGameFrameworkComponent_EventMode::FocusActors' has a wrong offset!");
static_assert(offsetof(UFortGameFrameworkComponent_EventMode, InputComponent) == 0x0001A0, "Member 'UFortGameFrameworkComponent_EventMode::InputComponent' has a wrong offset!");
static_assert(offsetof(UFortGameFrameworkComponent_EventMode, CachedWidgetData) == 0x0001A8, "Member 'UFortGameFrameworkComponent_EventMode::CachedWidgetData' has a wrong offset!");
static_assert(offsetof(UFortGameFrameworkComponent_EventMode, CurrentlyFocusedActor) == 0x0001B8, "Member 'UFortGameFrameworkComponent_EventMode::CurrentlyFocusedActor' has a wrong offset!");

class AFortWeapon_EventMode final : public AFortWeapon
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortWeapon_EventMode">();
	}
	static class AFortWeapon_EventMode* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortWeapon_EventMode>();
	}
};
static_assert(alignof(AFortWeapon_EventMode) == 0x000008, "Wrong alignment on AFortWeapon_EventMode");
static_assert(sizeof(AFortWeapon_EventMode) == 0x0010A0, "Wrong size on AFortWeapon_EventMode");

}
