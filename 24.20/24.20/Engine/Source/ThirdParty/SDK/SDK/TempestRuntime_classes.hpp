#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "TempestRuntime_structs.hpp"
#include "ModularGameplay_classes.hpp"

namespace SDK
{

class UFortAIControllerComponent_Tempest final : public UFortControllerComponent
{
public:
	class UFortTimeOfDayWeatherComponent*         WeatherComponent;
	uint8                                         Pad_B0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIControllerComponent_Tempest">();
	}
	static class UFortAIControllerComponent_Tempest* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIControllerComponent_Tempest>();
	}
};
static_assert(alignof(UFortAIControllerComponent_Tempest) == 0x000008, "Wrong alignment on UFortAIControllerComponent_Tempest");
static_assert(sizeof(UFortAIControllerComponent_Tempest) == 0x0000C0, "Wrong size on UFortAIControllerComponent_Tempest");
static_assert(offsetof(UFortAIControllerComponent_Tempest, WeatherComponent) == 0x0000A8, "Member 'UFortAIControllerComponent_Tempest::WeatherComponent' has a wrong offset!");

class UFortCheatManager_Tempest final : public UChildCheatManager
{
public:
	void EndTempestStorm(const class FString& StormName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCheatManager_Tempest">();
	}
	static class UFortCheatManager_Tempest* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCheatManager_Tempest>();
	}
};
static_assert(alignof(UFortCheatManager_Tempest) == 0x000008, "Wrong alignment on UFortCheatManager_Tempest");
static_assert(sizeof(UFortCheatManager_Tempest) == 0x000028, "Wrong size on UFortCheatManager_Tempest");

class UTempestMovementComponent final : public UGameFrameworkComponent
{
public:
	struct FTempestReplicatedMovementData         MovementData;
	TMulticastInlineDelegate<void()>              OnTempestMovementStuck;
	TMulticastInlineDelegate<void(bool bIsInSafeZone)> OnTempestSafeZoneStateChanged;
	ETempestMovementMode                          MovementMode;
	uint8                                         Pad_111[0x7];
	class UEnvQuery*                              FindNextMovementLocationQuery;
	class AFortAthenaPatrolPath*                  MovementPath;
	struct FScalableFloat                         MovementSpeed;
	struct FScalableFloat                         RotationSpeed;
	uint8                                         bShouldIgnoreZMovement : 1;
	uint8                                         bFloatOnWater : 1;
	uint8                                         Pad_179[0x7];
	struct FScalableFloat                         WaterTraceZOffset;
	uint8                                         Pad_1A8[0x8];

public:
	void OnRep_MovementData() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TempestMovementComponent">();
	}
	static class UTempestMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTempestMovementComponent>();
	}
};
static_assert(alignof(UTempestMovementComponent) == 0x000010, "Wrong alignment on UTempestMovementComponent");
static_assert(sizeof(UTempestMovementComponent) == 0x0001B0, "Wrong size on UTempestMovementComponent");
static_assert(offsetof(UTempestMovementComponent, MovementData) == 0x0000A0, "Member 'UTempestMovementComponent::MovementData' has a wrong offset!");
static_assert(offsetof(UTempestMovementComponent, OnTempestMovementStuck) == 0x0000F0, "Member 'UTempestMovementComponent::OnTempestMovementStuck' has a wrong offset!");
static_assert(offsetof(UTempestMovementComponent, OnTempestSafeZoneStateChanged) == 0x000100, "Member 'UTempestMovementComponent::OnTempestSafeZoneStateChanged' has a wrong offset!");
static_assert(offsetof(UTempestMovementComponent, MovementMode) == 0x000110, "Member 'UTempestMovementComponent::MovementMode' has a wrong offset!");
static_assert(offsetof(UTempestMovementComponent, FindNextMovementLocationQuery) == 0x000118, "Member 'UTempestMovementComponent::FindNextMovementLocationQuery' has a wrong offset!");
static_assert(offsetof(UTempestMovementComponent, MovementPath) == 0x000120, "Member 'UTempestMovementComponent::MovementPath' has a wrong offset!");
static_assert(offsetof(UTempestMovementComponent, MovementSpeed) == 0x000128, "Member 'UTempestMovementComponent::MovementSpeed' has a wrong offset!");
static_assert(offsetof(UTempestMovementComponent, RotationSpeed) == 0x000150, "Member 'UTempestMovementComponent::RotationSpeed' has a wrong offset!");
static_assert(offsetof(UTempestMovementComponent, WaterTraceZOffset) == 0x000180, "Member 'UTempestMovementComponent::WaterTraceZOffset' has a wrong offset!");

class alignas(0x10) UTempestStateMachineComponent final : public UGameFrameworkComponent
{
public:
	bool                                          bDestroyOnCompletion;
	uint8                                         Pad_A1[0x7];
	struct FScalableFloat                         FormationDuration;
	struct FScalableFloat                         ActiveDuration;
	struct FScalableFloat                         DissipationDuration;
	struct FTempestStateInfo                      CurrentStateInfo;
	uint8                                         Pad_12C[0x1C];
	TMulticastInlineDelegate<void(struct FTempestStateInfo& TempestStateInfo)> OnTempestStateChangedDelegate;
	uint8                                         Pad_158[0x18];

public:
	void ForceDissipate(const class FString& InDissipationReason);
	void OnRep_CurrentStateInfo();

	ETempestState GetCurrentState() const;
	float GetCurrentStateCompletionPercentage() const;
	struct FTempestStateInfo GetCurrentStateInfo() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TempestStateMachineComponent">();
	}
	static class UTempestStateMachineComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTempestStateMachineComponent>();
	}
};
static_assert(alignof(UTempestStateMachineComponent) == 0x000010, "Wrong alignment on UTempestStateMachineComponent");
static_assert(sizeof(UTempestStateMachineComponent) == 0x000170, "Wrong size on UTempestStateMachineComponent");
static_assert(offsetof(UTempestStateMachineComponent, bDestroyOnCompletion) == 0x0000A0, "Member 'UTempestStateMachineComponent::bDestroyOnCompletion' has a wrong offset!");
static_assert(offsetof(UTempestStateMachineComponent, FormationDuration) == 0x0000A8, "Member 'UTempestStateMachineComponent::FormationDuration' has a wrong offset!");
static_assert(offsetof(UTempestStateMachineComponent, ActiveDuration) == 0x0000D0, "Member 'UTempestStateMachineComponent::ActiveDuration' has a wrong offset!");
static_assert(offsetof(UTempestStateMachineComponent, DissipationDuration) == 0x0000F8, "Member 'UTempestStateMachineComponent::DissipationDuration' has a wrong offset!");
static_assert(offsetof(UTempestStateMachineComponent, CurrentStateInfo) == 0x000120, "Member 'UTempestStateMachineComponent::CurrentStateInfo' has a wrong offset!");
static_assert(offsetof(UTempestStateMachineComponent, OnTempestStateChangedDelegate) == 0x000148, "Member 'UTempestStateMachineComponent::OnTempestStateChangedDelegate' has a wrong offset!");

}
