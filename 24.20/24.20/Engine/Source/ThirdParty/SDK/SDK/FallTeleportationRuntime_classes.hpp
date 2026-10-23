#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UFortFallTeleportSpawnerComponent final : public UActorComponent
{
public:
	TSoftClassPtr<class UClass>                   PlayerPawnReceiverClass;
	TSubclassOf<class UFortFallTeleportComponentBase> ComponentToAddClass;
	struct FScalableFloat                         TeleportEnabled;
	struct FScalableFloat                         RemoveComponentRequestTimeOffset;
	uint8                                         Pad_120[0x30];

public:
	void HandleGamePhaseChanged(EAthenaGamePhase GamePhase);
	void HandleWarmupCountdownEndTimeUpdated(float NewEndTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortFallTeleportSpawnerComponent">();
	}
	static class UFortFallTeleportSpawnerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortFallTeleportSpawnerComponent>();
	}
};
static_assert(alignof(UFortFallTeleportSpawnerComponent) == 0x000008, "Wrong alignment on UFortFallTeleportSpawnerComponent");
static_assert(sizeof(UFortFallTeleportSpawnerComponent) == 0x000150, "Wrong size on UFortFallTeleportSpawnerComponent");
static_assert(offsetof(UFortFallTeleportSpawnerComponent, PlayerPawnReceiverClass) == 0x0000A0, "Member 'UFortFallTeleportSpawnerComponent::PlayerPawnReceiverClass' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportSpawnerComponent, ComponentToAddClass) == 0x0000C8, "Member 'UFortFallTeleportSpawnerComponent::ComponentToAddClass' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportSpawnerComponent, TeleportEnabled) == 0x0000D0, "Member 'UFortFallTeleportSpawnerComponent::TeleportEnabled' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportSpawnerComponent, RemoveComponentRequestTimeOffset) == 0x0000F8, "Member 'UFortFallTeleportSpawnerComponent::RemoveComponentRequestTimeOffset' has a wrong offset!");

class UFortFallTeleportCheatManager final : public UChildCheatManager
{
public:
	void EnableFallTeleportationIndefinitely();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortFallTeleportCheatManager">();
	}
	static class UFortFallTeleportCheatManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortFallTeleportCheatManager>();
	}
};
static_assert(alignof(UFortFallTeleportCheatManager) == 0x000008, "Wrong alignment on UFortFallTeleportCheatManager");
static_assert(sizeof(UFortFallTeleportCheatManager) == 0x000028, "Wrong size on UFortFallTeleportCheatManager");

class UFortFallTeleportComponentBase final : public UActorComponent
{
public:
	struct FScalableFloat                         TeleportEnabled;
	struct FScalableFloat                         ContinuousTeleportUpdateEnabled;
	struct FScalableFloat                         ForceTeleportZHeight;
	struct FScalableFloat                         SphereTraceRadius;
	float                                         WalkingLocationUpdateRate;
	float                                         ZHeightThresholdCheckRate;
	float                                         TeleportZModifier;
	float                                         DistanceFromPawnToTraceLocation;
	TArray<TSubclassOf<class AActor>>             TeleportOnBlocklist;
	class FName                                   NoTeleportActorTag;
	uint8                                         Pad_164[0x4];
	struct FVector                                SafeManualLocation;
	TSubclassOf<class UGameplayEffect>            TeleportGEClass;
	struct FVector                                TeleportLocation;
	struct FVector                                FallbackLocation;
	bool                                          bValidFallbackLocation;
	bool                                          bTeleporting;
	uint8                                         Pad_1BA[0x2];
	int32                                         TeleportLimitBeforeFail;
	int32                                         TeleportCount;
	uint8                                         Pad_1C4[0x4];
	class AFortPlayerPawnAthena*                  OwningPawn;
	uint8                                         Pad_1D0[0x20];

public:
	void UpdateLastGroundLocation(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);

	bool IsTeleportLocationValid(const struct FVector& LocationToTest) const;
	bool IsValidActorToTeleportOn(class AActor* ActorToTeleportOn) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortFallTeleportComponentBase">();
	}
	static class UFortFallTeleportComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortFallTeleportComponentBase>();
	}
};
static_assert(alignof(UFortFallTeleportComponentBase) == 0x000008, "Wrong alignment on UFortFallTeleportComponentBase");
static_assert(sizeof(UFortFallTeleportComponentBase) == 0x0001F0, "Wrong size on UFortFallTeleportComponentBase");
static_assert(offsetof(UFortFallTeleportComponentBase, TeleportEnabled) == 0x0000A0, "Member 'UFortFallTeleportComponentBase::TeleportEnabled' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, ContinuousTeleportUpdateEnabled) == 0x0000C8, "Member 'UFortFallTeleportComponentBase::ContinuousTeleportUpdateEnabled' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, ForceTeleportZHeight) == 0x0000F0, "Member 'UFortFallTeleportComponentBase::ForceTeleportZHeight' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, SphereTraceRadius) == 0x000118, "Member 'UFortFallTeleportComponentBase::SphereTraceRadius' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, WalkingLocationUpdateRate) == 0x000140, "Member 'UFortFallTeleportComponentBase::WalkingLocationUpdateRate' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, ZHeightThresholdCheckRate) == 0x000144, "Member 'UFortFallTeleportComponentBase::ZHeightThresholdCheckRate' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, TeleportZModifier) == 0x000148, "Member 'UFortFallTeleportComponentBase::TeleportZModifier' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, DistanceFromPawnToTraceLocation) == 0x00014C, "Member 'UFortFallTeleportComponentBase::DistanceFromPawnToTraceLocation' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, TeleportOnBlocklist) == 0x000150, "Member 'UFortFallTeleportComponentBase::TeleportOnBlocklist' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, NoTeleportActorTag) == 0x000160, "Member 'UFortFallTeleportComponentBase::NoTeleportActorTag' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, SafeManualLocation) == 0x000168, "Member 'UFortFallTeleportComponentBase::SafeManualLocation' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, TeleportGEClass) == 0x000180, "Member 'UFortFallTeleportComponentBase::TeleportGEClass' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, TeleportLocation) == 0x000188, "Member 'UFortFallTeleportComponentBase::TeleportLocation' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, FallbackLocation) == 0x0001A0, "Member 'UFortFallTeleportComponentBase::FallbackLocation' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, bValidFallbackLocation) == 0x0001B8, "Member 'UFortFallTeleportComponentBase::bValidFallbackLocation' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, bTeleporting) == 0x0001B9, "Member 'UFortFallTeleportComponentBase::bTeleporting' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, TeleportLimitBeforeFail) == 0x0001BC, "Member 'UFortFallTeleportComponentBase::TeleportLimitBeforeFail' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, TeleportCount) == 0x0001C0, "Member 'UFortFallTeleportComponentBase::TeleportCount' has a wrong offset!");
static_assert(offsetof(UFortFallTeleportComponentBase, OwningPawn) == 0x0001C8, "Member 'UFortFallTeleportComponentBase::OwningPawn' has a wrong offset!");

}
