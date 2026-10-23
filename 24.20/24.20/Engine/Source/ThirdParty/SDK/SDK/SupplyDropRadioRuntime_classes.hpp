#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "SupplyDropRadioRuntime_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class ABuildingGameplayActorSupplyDropRadio final : public ABuildingGameplayActor
{
public:
	float                                         MinimumMovingSpeedThresholdSq;
	float                                         BalloonClosedGroundedFallSpeed;
	bool                                          bAutoOpen;
	uint8                                         Pad_A39[0x7];
	struct FGameplayTagContainer                  ForceOpenActorTags;
	struct FGameplayTagQuery                      IgnoreMovingCollisionWithActorTagQuery;
	float                                         InterpRateToBalloonOpenedFallSpeed;
	float                                         DistanceFromOriginalSpawnLocForBalloonOpen;
	ESupplyDropRadioBalloonState                  BalloonState;
	uint8                                         Pad_AB1[0x7];
	struct FHitResult                             WaterHitResult;
	bool                                          bMoving;
	uint8                                         Pad_B99[0x3];
	float                                         FallSpeed;
	float                                         BalloonOpenedFallSpeed;
	float                                         GravityMultiplier;
	struct FVector                                ServerLocation;
	float                                         ClientLocationCorrectionMaxDistSqWhenBalloonDisabled;
	float                                         ClientLocationCorrectionMaxDistSqWhenBalloonEnabled;
	struct FVector                                Velocity;
	struct FVector                                PreviousFrameVelocity;
	struct FVector                                OriginalServerSpawnLocation;

public:
	void HandleMoveIgnoredActorEndPlay(class AActor* EndPlayActor, EEndPlayReason Reason);
	void OnRep_BalloonState();
	void OnRep_DistanceFromOriginalSpawnLocForBalloonOpen();
	void OpenSupplyDrop();
	void SetBalloonState(const ESupplyDropRadioBalloonState InBalloonState);
	void SetGravityMultiplier(const float InGravityMultiplier);
	void UpdateGroundInfo(const bool bValidBlock, const struct FHitResult& MovementHitResult);

	ESupplyDropRadioBalloonState GetBalloonState() const;
	float GetGravityZ() const;
	class AActor* GetHighestAttachParent(const class AActor* InActor) const;
	class UBoxComponent* GetRootCollisionComponent() const;
	bool IsGrounded() const;
	bool IsMoving() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BuildingGameplayActorSupplyDropRadio">();
	}
	static class ABuildingGameplayActorSupplyDropRadio* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABuildingGameplayActorSupplyDropRadio>();
	}
};
static_assert(alignof(ABuildingGameplayActorSupplyDropRadio) == 0x000008, "Wrong alignment on ABuildingGameplayActorSupplyDropRadio");
static_assert(sizeof(ABuildingGameplayActorSupplyDropRadio) == 0x000C10, "Wrong size on ABuildingGameplayActorSupplyDropRadio");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, MinimumMovingSpeedThresholdSq) == 0x000A30, "Member 'ABuildingGameplayActorSupplyDropRadio::MinimumMovingSpeedThresholdSq' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, BalloonClosedGroundedFallSpeed) == 0x000A34, "Member 'ABuildingGameplayActorSupplyDropRadio::BalloonClosedGroundedFallSpeed' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, bAutoOpen) == 0x000A38, "Member 'ABuildingGameplayActorSupplyDropRadio::bAutoOpen' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, ForceOpenActorTags) == 0x000A40, "Member 'ABuildingGameplayActorSupplyDropRadio::ForceOpenActorTags' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, IgnoreMovingCollisionWithActorTagQuery) == 0x000A60, "Member 'ABuildingGameplayActorSupplyDropRadio::IgnoreMovingCollisionWithActorTagQuery' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, InterpRateToBalloonOpenedFallSpeed) == 0x000AA8, "Member 'ABuildingGameplayActorSupplyDropRadio::InterpRateToBalloonOpenedFallSpeed' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, DistanceFromOriginalSpawnLocForBalloonOpen) == 0x000AAC, "Member 'ABuildingGameplayActorSupplyDropRadio::DistanceFromOriginalSpawnLocForBalloonOpen' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, BalloonState) == 0x000AB0, "Member 'ABuildingGameplayActorSupplyDropRadio::BalloonState' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, WaterHitResult) == 0x000AB8, "Member 'ABuildingGameplayActorSupplyDropRadio::WaterHitResult' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, bMoving) == 0x000B98, "Member 'ABuildingGameplayActorSupplyDropRadio::bMoving' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, FallSpeed) == 0x000B9C, "Member 'ABuildingGameplayActorSupplyDropRadio::FallSpeed' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, BalloonOpenedFallSpeed) == 0x000BA0, "Member 'ABuildingGameplayActorSupplyDropRadio::BalloonOpenedFallSpeed' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, GravityMultiplier) == 0x000BA4, "Member 'ABuildingGameplayActorSupplyDropRadio::GravityMultiplier' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, ServerLocation) == 0x000BA8, "Member 'ABuildingGameplayActorSupplyDropRadio::ServerLocation' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, ClientLocationCorrectionMaxDistSqWhenBalloonDisabled) == 0x000BC0, "Member 'ABuildingGameplayActorSupplyDropRadio::ClientLocationCorrectionMaxDistSqWhenBalloonDisabled' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, ClientLocationCorrectionMaxDistSqWhenBalloonEnabled) == 0x000BC4, "Member 'ABuildingGameplayActorSupplyDropRadio::ClientLocationCorrectionMaxDistSqWhenBalloonEnabled' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, Velocity) == 0x000BC8, "Member 'ABuildingGameplayActorSupplyDropRadio::Velocity' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, PreviousFrameVelocity) == 0x000BE0, "Member 'ABuildingGameplayActorSupplyDropRadio::PreviousFrameVelocity' has a wrong offset!");
static_assert(offsetof(ABuildingGameplayActorSupplyDropRadio, OriginalServerSpawnLocation) == 0x000BF8, "Member 'ABuildingGameplayActorSupplyDropRadio::OriginalServerSpawnLocation' has a wrong offset!");

class UFortSupplyDropRadioAttachActorComponent final : public UActorComponent
{
public:
	void SetOwningActorNetCullDistance(const float DistanceSquared) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSupplyDropRadioAttachActorComponent">();
	}
	static class UFortSupplyDropRadioAttachActorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSupplyDropRadioAttachActorComponent>();
	}
};
static_assert(alignof(UFortSupplyDropRadioAttachActorComponent) == 0x000008, "Wrong alignment on UFortSupplyDropRadioAttachActorComponent");
static_assert(sizeof(UFortSupplyDropRadioAttachActorComponent) == 0x0000A0, "Wrong size on UFortSupplyDropRadioAttachActorComponent");

class UFortSupplyDropRadioBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void SetMoveShouldAbortConversation(class AFortPlayerControllerGameplay* PlayerController, const bool bNewMoveAbortConversation);
	static void StopCurrentConversation(class AFortPlayerControllerGameplay* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSupplyDropRadioBlueprintLibrary">();
	}
	static class UFortSupplyDropRadioBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSupplyDropRadioBlueprintLibrary>();
	}
};
static_assert(alignof(UFortSupplyDropRadioBlueprintLibrary) == 0x000008, "Wrong alignment on UFortSupplyDropRadioBlueprintLibrary");
static_assert(sizeof(UFortSupplyDropRadioBlueprintLibrary) == 0x000028, "Wrong size on UFortSupplyDropRadioBlueprintLibrary");

}
