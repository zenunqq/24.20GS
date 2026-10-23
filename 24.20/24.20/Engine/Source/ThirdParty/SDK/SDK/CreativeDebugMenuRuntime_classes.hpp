#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UFortControllerComponent_CreativeDebugger final : public UFortControllerComponent
{
public:
	uint8                                         Pad_A8[0x8];
	struct FScalableFloat                         DebuggerEnabledByDataRegistry;
	struct FScalableFloat                         NavigationMeshEnabledByDataRegistry;
	struct FScalableFloat                         NavigationPathsEnabledByDataRegistry;
	struct FScalableFloat                         GhostModeEnabledByDataRegistry;
	struct FScalableFloat                         InvincibilityEnabledByDataRegistry;
	TSubclassOf<class UFortControllerComponent_AIDebugger> AIDebuggerClass;
	uint8                                         Pad_180[0x10];

public:
	void OnMutatorUpdated();
	void OnPlayerSpawned(class AFortPlayerController* PC);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortControllerComponent_CreativeDebugger">();
	}
	static class UFortControllerComponent_CreativeDebugger* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortControllerComponent_CreativeDebugger>();
	}
};
static_assert(alignof(UFortControllerComponent_CreativeDebugger) == 0x000008, "Wrong alignment on UFortControllerComponent_CreativeDebugger");
static_assert(sizeof(UFortControllerComponent_CreativeDebugger) == 0x000190, "Wrong size on UFortControllerComponent_CreativeDebugger");
static_assert(offsetof(UFortControllerComponent_CreativeDebugger, DebuggerEnabledByDataRegistry) == 0x0000B0, "Member 'UFortControllerComponent_CreativeDebugger::DebuggerEnabledByDataRegistry' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_CreativeDebugger, NavigationMeshEnabledByDataRegistry) == 0x0000D8, "Member 'UFortControllerComponent_CreativeDebugger::NavigationMeshEnabledByDataRegistry' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_CreativeDebugger, NavigationPathsEnabledByDataRegistry) == 0x000100, "Member 'UFortControllerComponent_CreativeDebugger::NavigationPathsEnabledByDataRegistry' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_CreativeDebugger, GhostModeEnabledByDataRegistry) == 0x000128, "Member 'UFortControllerComponent_CreativeDebugger::GhostModeEnabledByDataRegistry' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_CreativeDebugger, InvincibilityEnabledByDataRegistry) == 0x000150, "Member 'UFortControllerComponent_CreativeDebugger::InvincibilityEnabledByDataRegistry' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_CreativeDebugger, AIDebuggerClass) == 0x000178, "Member 'UFortControllerComponent_CreativeDebugger::AIDebuggerClass' has a wrong offset!");

}
