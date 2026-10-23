#pragma once

#include "Basic.hpp"

#include "SupplyDropRadioRuntime_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BuildingGameplayActorSupplyDropRadio_HandleMoveIgnoredActorEndPlay final
{
public:
	class AActor*                                 EndPlayActor;
	EEndPlayReason                                Reason;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(BuildingGameplayActorSupplyDropRadio_HandleMoveIgnoredActorEndPlay) == 0x000008, "Wrong alignment on BuildingGameplayActorSupplyDropRadio_HandleMoveIgnoredActorEndPlay");
static_assert(sizeof(BuildingGameplayActorSupplyDropRadio_HandleMoveIgnoredActorEndPlay) == 0x000010, "Wrong size on BuildingGameplayActorSupplyDropRadio_HandleMoveIgnoredActorEndPlay");
static_assert(offsetof(BuildingGameplayActorSupplyDropRadio_HandleMoveIgnoredActorEndPlay, EndPlayActor) == 0x000000, "Member 'BuildingGameplayActorSupplyDropRadio_HandleMoveIgnoredActorEndPlay::EndPlayActor' has a wrong offset!");
static_assert(offsetof(BuildingGameplayActorSupplyDropRadio_HandleMoveIgnoredActorEndPlay, Reason) == 0x000008, "Member 'BuildingGameplayActorSupplyDropRadio_HandleMoveIgnoredActorEndPlay::Reason' has a wrong offset!");

struct BuildingGameplayActorSupplyDropRadio_SetBalloonState final
{
public:
	ESupplyDropRadioBalloonState                  InBalloonState;
};
static_assert(alignof(BuildingGameplayActorSupplyDropRadio_SetBalloonState) == 0x000001, "Wrong alignment on BuildingGameplayActorSupplyDropRadio_SetBalloonState");
static_assert(sizeof(BuildingGameplayActorSupplyDropRadio_SetBalloonState) == 0x000001, "Wrong size on BuildingGameplayActorSupplyDropRadio_SetBalloonState");
static_assert(offsetof(BuildingGameplayActorSupplyDropRadio_SetBalloonState, InBalloonState) == 0x000000, "Member 'BuildingGameplayActorSupplyDropRadio_SetBalloonState::InBalloonState' has a wrong offset!");

struct BuildingGameplayActorSupplyDropRadio_SetGravityMultiplier final
{
public:
	float                                         InGravityMultiplier;
};
static_assert(alignof(BuildingGameplayActorSupplyDropRadio_SetGravityMultiplier) == 0x000004, "Wrong alignment on BuildingGameplayActorSupplyDropRadio_SetGravityMultiplier");
static_assert(sizeof(BuildingGameplayActorSupplyDropRadio_SetGravityMultiplier) == 0x000004, "Wrong size on BuildingGameplayActorSupplyDropRadio_SetGravityMultiplier");
static_assert(offsetof(BuildingGameplayActorSupplyDropRadio_SetGravityMultiplier, InGravityMultiplier) == 0x000000, "Member 'BuildingGameplayActorSupplyDropRadio_SetGravityMultiplier::InGravityMultiplier' has a wrong offset!");

struct BuildingGameplayActorSupplyDropRadio_UpdateGroundInfo final
{
public:
	bool                                          bValidBlock;
	uint8                                         Pad_1[0x7];
	struct FHitResult                             MovementHitResult;
};
static_assert(alignof(BuildingGameplayActorSupplyDropRadio_UpdateGroundInfo) == 0x000008, "Wrong alignment on BuildingGameplayActorSupplyDropRadio_UpdateGroundInfo");
static_assert(sizeof(BuildingGameplayActorSupplyDropRadio_UpdateGroundInfo) == 0x0000E8, "Wrong size on BuildingGameplayActorSupplyDropRadio_UpdateGroundInfo");
static_assert(offsetof(BuildingGameplayActorSupplyDropRadio_UpdateGroundInfo, bValidBlock) == 0x000000, "Member 'BuildingGameplayActorSupplyDropRadio_UpdateGroundInfo::bValidBlock' has a wrong offset!");
static_assert(offsetof(BuildingGameplayActorSupplyDropRadio_UpdateGroundInfo, MovementHitResult) == 0x000008, "Member 'BuildingGameplayActorSupplyDropRadio_UpdateGroundInfo::MovementHitResult' has a wrong offset!");

struct BuildingGameplayActorSupplyDropRadio_GetBalloonState final
{
public:
	ESupplyDropRadioBalloonState                  ReturnValue;
};
static_assert(alignof(BuildingGameplayActorSupplyDropRadio_GetBalloonState) == 0x000001, "Wrong alignment on BuildingGameplayActorSupplyDropRadio_GetBalloonState");
static_assert(sizeof(BuildingGameplayActorSupplyDropRadio_GetBalloonState) == 0x000001, "Wrong size on BuildingGameplayActorSupplyDropRadio_GetBalloonState");
static_assert(offsetof(BuildingGameplayActorSupplyDropRadio_GetBalloonState, ReturnValue) == 0x000000, "Member 'BuildingGameplayActorSupplyDropRadio_GetBalloonState::ReturnValue' has a wrong offset!");

struct BuildingGameplayActorSupplyDropRadio_GetGravityZ final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(BuildingGameplayActorSupplyDropRadio_GetGravityZ) == 0x000004, "Wrong alignment on BuildingGameplayActorSupplyDropRadio_GetGravityZ");
static_assert(sizeof(BuildingGameplayActorSupplyDropRadio_GetGravityZ) == 0x000004, "Wrong size on BuildingGameplayActorSupplyDropRadio_GetGravityZ");
static_assert(offsetof(BuildingGameplayActorSupplyDropRadio_GetGravityZ, ReturnValue) == 0x000000, "Member 'BuildingGameplayActorSupplyDropRadio_GetGravityZ::ReturnValue' has a wrong offset!");

struct BuildingGameplayActorSupplyDropRadio_GetHighestAttachParent final
{
public:
	const class AActor*                           InActor;
	class AActor*                                 ReturnValue;
};
static_assert(alignof(BuildingGameplayActorSupplyDropRadio_GetHighestAttachParent) == 0x000008, "Wrong alignment on BuildingGameplayActorSupplyDropRadio_GetHighestAttachParent");
static_assert(sizeof(BuildingGameplayActorSupplyDropRadio_GetHighestAttachParent) == 0x000010, "Wrong size on BuildingGameplayActorSupplyDropRadio_GetHighestAttachParent");
static_assert(offsetof(BuildingGameplayActorSupplyDropRadio_GetHighestAttachParent, InActor) == 0x000000, "Member 'BuildingGameplayActorSupplyDropRadio_GetHighestAttachParent::InActor' has a wrong offset!");
static_assert(offsetof(BuildingGameplayActorSupplyDropRadio_GetHighestAttachParent, ReturnValue) == 0x000008, "Member 'BuildingGameplayActorSupplyDropRadio_GetHighestAttachParent::ReturnValue' has a wrong offset!");

struct BuildingGameplayActorSupplyDropRadio_GetRootCollisionComponent final
{
public:
	class UBoxComponent*                          ReturnValue;
};
static_assert(alignof(BuildingGameplayActorSupplyDropRadio_GetRootCollisionComponent) == 0x000008, "Wrong alignment on BuildingGameplayActorSupplyDropRadio_GetRootCollisionComponent");
static_assert(sizeof(BuildingGameplayActorSupplyDropRadio_GetRootCollisionComponent) == 0x000008, "Wrong size on BuildingGameplayActorSupplyDropRadio_GetRootCollisionComponent");
static_assert(offsetof(BuildingGameplayActorSupplyDropRadio_GetRootCollisionComponent, ReturnValue) == 0x000000, "Member 'BuildingGameplayActorSupplyDropRadio_GetRootCollisionComponent::ReturnValue' has a wrong offset!");

struct BuildingGameplayActorSupplyDropRadio_IsGrounded final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BuildingGameplayActorSupplyDropRadio_IsGrounded) == 0x000001, "Wrong alignment on BuildingGameplayActorSupplyDropRadio_IsGrounded");
static_assert(sizeof(BuildingGameplayActorSupplyDropRadio_IsGrounded) == 0x000001, "Wrong size on BuildingGameplayActorSupplyDropRadio_IsGrounded");
static_assert(offsetof(BuildingGameplayActorSupplyDropRadio_IsGrounded, ReturnValue) == 0x000000, "Member 'BuildingGameplayActorSupplyDropRadio_IsGrounded::ReturnValue' has a wrong offset!");

struct BuildingGameplayActorSupplyDropRadio_IsMoving final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BuildingGameplayActorSupplyDropRadio_IsMoving) == 0x000001, "Wrong alignment on BuildingGameplayActorSupplyDropRadio_IsMoving");
static_assert(sizeof(BuildingGameplayActorSupplyDropRadio_IsMoving) == 0x000001, "Wrong size on BuildingGameplayActorSupplyDropRadio_IsMoving");
static_assert(offsetof(BuildingGameplayActorSupplyDropRadio_IsMoving, ReturnValue) == 0x000000, "Member 'BuildingGameplayActorSupplyDropRadio_IsMoving::ReturnValue' has a wrong offset!");

struct FortSupplyDropRadioAttachActorComponent_SetOwningActorNetCullDistance final
{
public:
	float                                         DistanceSquared;
};
static_assert(alignof(FortSupplyDropRadioAttachActorComponent_SetOwningActorNetCullDistance) == 0x000004, "Wrong alignment on FortSupplyDropRadioAttachActorComponent_SetOwningActorNetCullDistance");
static_assert(sizeof(FortSupplyDropRadioAttachActorComponent_SetOwningActorNetCullDistance) == 0x000004, "Wrong size on FortSupplyDropRadioAttachActorComponent_SetOwningActorNetCullDistance");
static_assert(offsetof(FortSupplyDropRadioAttachActorComponent_SetOwningActorNetCullDistance, DistanceSquared) == 0x000000, "Member 'FortSupplyDropRadioAttachActorComponent_SetOwningActorNetCullDistance::DistanceSquared' has a wrong offset!");

struct FortSupplyDropRadioBlueprintLibrary_SetMoveShouldAbortConversation final
{
public:
	class AFortPlayerControllerGameplay*          PlayerController;
	bool                                          bNewMoveAbortConversation;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortSupplyDropRadioBlueprintLibrary_SetMoveShouldAbortConversation) == 0x000008, "Wrong alignment on FortSupplyDropRadioBlueprintLibrary_SetMoveShouldAbortConversation");
static_assert(sizeof(FortSupplyDropRadioBlueprintLibrary_SetMoveShouldAbortConversation) == 0x000010, "Wrong size on FortSupplyDropRadioBlueprintLibrary_SetMoveShouldAbortConversation");
static_assert(offsetof(FortSupplyDropRadioBlueprintLibrary_SetMoveShouldAbortConversation, PlayerController) == 0x000000, "Member 'FortSupplyDropRadioBlueprintLibrary_SetMoveShouldAbortConversation::PlayerController' has a wrong offset!");
static_assert(offsetof(FortSupplyDropRadioBlueprintLibrary_SetMoveShouldAbortConversation, bNewMoveAbortConversation) == 0x000008, "Member 'FortSupplyDropRadioBlueprintLibrary_SetMoveShouldAbortConversation::bNewMoveAbortConversation' has a wrong offset!");

struct FortSupplyDropRadioBlueprintLibrary_StopCurrentConversation final
{
public:
	class AFortPlayerControllerGameplay*          PlayerController;
};
static_assert(alignof(FortSupplyDropRadioBlueprintLibrary_StopCurrentConversation) == 0x000008, "Wrong alignment on FortSupplyDropRadioBlueprintLibrary_StopCurrentConversation");
static_assert(sizeof(FortSupplyDropRadioBlueprintLibrary_StopCurrentConversation) == 0x000008, "Wrong size on FortSupplyDropRadioBlueprintLibrary_StopCurrentConversation");
static_assert(offsetof(FortSupplyDropRadioBlueprintLibrary_StopCurrentConversation, PlayerController) == 0x000000, "Member 'FortSupplyDropRadioBlueprintLibrary_StopCurrentConversation::PlayerController' has a wrong offset!");

}
