#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GrindRailRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortGrindRail_GetConnectionForGrinding final
{
public:
	float                                         DistanceToTravel;
	float                                         CurrentDistanceAlongSpline;
	float                                         NextDistanceOnRail;
	float                                         RightLeanValue;
	bool                                          bNewRail;
	uint8                                         Pad_11[0x3];
	float                                         DistanceAlongNewRail;
	class AFortGrindRail*                         TheNewRail;
	bool                                          bNewRailReverseDirection;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FortGrindRail_GetConnectionForGrinding) == 0x000008, "Wrong alignment on FortGrindRail_GetConnectionForGrinding");
static_assert(sizeof(FortGrindRail_GetConnectionForGrinding) == 0x000028, "Wrong size on FortGrindRail_GetConnectionForGrinding");
static_assert(offsetof(FortGrindRail_GetConnectionForGrinding, DistanceToTravel) == 0x000000, "Member 'FortGrindRail_GetConnectionForGrinding::DistanceToTravel' has a wrong offset!");
static_assert(offsetof(FortGrindRail_GetConnectionForGrinding, CurrentDistanceAlongSpline) == 0x000004, "Member 'FortGrindRail_GetConnectionForGrinding::CurrentDistanceAlongSpline' has a wrong offset!");
static_assert(offsetof(FortGrindRail_GetConnectionForGrinding, NextDistanceOnRail) == 0x000008, "Member 'FortGrindRail_GetConnectionForGrinding::NextDistanceOnRail' has a wrong offset!");
static_assert(offsetof(FortGrindRail_GetConnectionForGrinding, RightLeanValue) == 0x00000C, "Member 'FortGrindRail_GetConnectionForGrinding::RightLeanValue' has a wrong offset!");
static_assert(offsetof(FortGrindRail_GetConnectionForGrinding, bNewRail) == 0x000010, "Member 'FortGrindRail_GetConnectionForGrinding::bNewRail' has a wrong offset!");
static_assert(offsetof(FortGrindRail_GetConnectionForGrinding, DistanceAlongNewRail) == 0x000014, "Member 'FortGrindRail_GetConnectionForGrinding::DistanceAlongNewRail' has a wrong offset!");
static_assert(offsetof(FortGrindRail_GetConnectionForGrinding, TheNewRail) == 0x000018, "Member 'FortGrindRail_GetConnectionForGrinding::TheNewRail' has a wrong offset!");
static_assert(offsetof(FortGrindRail_GetConnectionForGrinding, bNewRailReverseDirection) == 0x000020, "Member 'FortGrindRail_GetConnectionForGrinding::bNewRailReverseDirection' has a wrong offset!");

struct FortGrindRail_IsTipCapped final
{
public:
	bool                                          bStartTip;
	bool                                          ReturnValue;
};
static_assert(alignof(FortGrindRail_IsTipCapped) == 0x000001, "Wrong alignment on FortGrindRail_IsTipCapped");
static_assert(sizeof(FortGrindRail_IsTipCapped) == 0x000002, "Wrong size on FortGrindRail_IsTipCapped");
static_assert(offsetof(FortGrindRail_IsTipCapped, bStartTip) == 0x000000, "Member 'FortGrindRail_IsTipCapped::bStartTip' has a wrong offset!");
static_assert(offsetof(FortGrindRail_IsTipCapped, ReturnValue) == 0x000001, "Member 'FortGrindRail_IsTipCapped::ReturnValue' has a wrong offset!");

struct FortGrindRail_IsTipConnected final
{
public:
	bool                                          bStartTip;
	bool                                          ReturnValue;
};
static_assert(alignof(FortGrindRail_IsTipConnected) == 0x000001, "Wrong alignment on FortGrindRail_IsTipConnected");
static_assert(sizeof(FortGrindRail_IsTipConnected) == 0x000002, "Wrong size on FortGrindRail_IsTipConnected");
static_assert(offsetof(FortGrindRail_IsTipConnected, bStartTip) == 0x000000, "Member 'FortGrindRail_IsTipConnected::bStartTip' has a wrong offset!");
static_assert(offsetof(FortGrindRail_IsTipConnected, ReturnValue) == 0x000001, "Member 'FortGrindRail_IsTipConnected::ReturnValue' has a wrong offset!");

struct FortGrindRail_NativeGetNextPositionToGrind final
{
public:
	float                                         DistanceToTravel;
	float                                         CurrentDistanceAlongSpline;
	float                                         RightLeanValue;
	uint8                                         Pad_C[0x4];
	struct FVector                                OutNextLocation;
	bool                                          bGotToEnd;
	uint8                                         Pad_29[0x3];
	float                                         NextLocationOnRail;
	EGrindRailBoosterMode                         BoosterMode;
	bool                                          bHitObstacle;
	bool                                          bNewRail;
	uint8                                         Pad_33[0x1];
	float                                         DistanceAlongNewRail;
	class AFortGrindRail*                         TheNewRail;
	bool                                          bNewRailReverseDirection;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(FortGrindRail_NativeGetNextPositionToGrind) == 0x000008, "Wrong alignment on FortGrindRail_NativeGetNextPositionToGrind");
static_assert(sizeof(FortGrindRail_NativeGetNextPositionToGrind) == 0x000048, "Wrong size on FortGrindRail_NativeGetNextPositionToGrind");
static_assert(offsetof(FortGrindRail_NativeGetNextPositionToGrind, DistanceToTravel) == 0x000000, "Member 'FortGrindRail_NativeGetNextPositionToGrind::DistanceToTravel' has a wrong offset!");
static_assert(offsetof(FortGrindRail_NativeGetNextPositionToGrind, CurrentDistanceAlongSpline) == 0x000004, "Member 'FortGrindRail_NativeGetNextPositionToGrind::CurrentDistanceAlongSpline' has a wrong offset!");
static_assert(offsetof(FortGrindRail_NativeGetNextPositionToGrind, RightLeanValue) == 0x000008, "Member 'FortGrindRail_NativeGetNextPositionToGrind::RightLeanValue' has a wrong offset!");
static_assert(offsetof(FortGrindRail_NativeGetNextPositionToGrind, OutNextLocation) == 0x000010, "Member 'FortGrindRail_NativeGetNextPositionToGrind::OutNextLocation' has a wrong offset!");
static_assert(offsetof(FortGrindRail_NativeGetNextPositionToGrind, bGotToEnd) == 0x000028, "Member 'FortGrindRail_NativeGetNextPositionToGrind::bGotToEnd' has a wrong offset!");
static_assert(offsetof(FortGrindRail_NativeGetNextPositionToGrind, NextLocationOnRail) == 0x00002C, "Member 'FortGrindRail_NativeGetNextPositionToGrind::NextLocationOnRail' has a wrong offset!");
static_assert(offsetof(FortGrindRail_NativeGetNextPositionToGrind, BoosterMode) == 0x000030, "Member 'FortGrindRail_NativeGetNextPositionToGrind::BoosterMode' has a wrong offset!");
static_assert(offsetof(FortGrindRail_NativeGetNextPositionToGrind, bHitObstacle) == 0x000031, "Member 'FortGrindRail_NativeGetNextPositionToGrind::bHitObstacle' has a wrong offset!");
static_assert(offsetof(FortGrindRail_NativeGetNextPositionToGrind, bNewRail) == 0x000032, "Member 'FortGrindRail_NativeGetNextPositionToGrind::bNewRail' has a wrong offset!");
static_assert(offsetof(FortGrindRail_NativeGetNextPositionToGrind, DistanceAlongNewRail) == 0x000034, "Member 'FortGrindRail_NativeGetNextPositionToGrind::DistanceAlongNewRail' has a wrong offset!");
static_assert(offsetof(FortGrindRail_NativeGetNextPositionToGrind, TheNewRail) == 0x000038, "Member 'FortGrindRail_NativeGetNextPositionToGrind::TheNewRail' has a wrong offset!");
static_assert(offsetof(FortGrindRail_NativeGetNextPositionToGrind, bNewRailReverseDirection) == 0x000040, "Member 'FortGrindRail_NativeGetNextPositionToGrind::bNewRailReverseDirection' has a wrong offset!");

struct FortGrindRail_OnPlaylistDataReady final
{
public:
	class AFortGameStateAthena*                   GameState;
	const class UFortPlaylist*                    Playlist;
	struct FGameplayTagContainer                  PlaylistContextTags;
};
static_assert(alignof(FortGrindRail_OnPlaylistDataReady) == 0x000008, "Wrong alignment on FortGrindRail_OnPlaylistDataReady");
static_assert(sizeof(FortGrindRail_OnPlaylistDataReady) == 0x000030, "Wrong size on FortGrindRail_OnPlaylistDataReady");
static_assert(offsetof(FortGrindRail_OnPlaylistDataReady, GameState) == 0x000000, "Member 'FortGrindRail_OnPlaylistDataReady::GameState' has a wrong offset!");
static_assert(offsetof(FortGrindRail_OnPlaylistDataReady, Playlist) == 0x000008, "Member 'FortGrindRail_OnPlaylistDataReady::Playlist' has a wrong offset!");
static_assert(offsetof(FortGrindRail_OnPlaylistDataReady, PlaylistContextTags) == 0x000010, "Member 'FortGrindRail_OnPlaylistDataReady::PlaylistContextTags' has a wrong offset!");

struct FortGrindRail_SetupMeshInfo final
{
public:
	class USplineMeshComponent*                   SplineMeshComponent;
	int32                                         StartIndex;
	int32                                         EndIndex;
	float                                         StartDistance;
	float                                         EndDistance;
};
static_assert(alignof(FortGrindRail_SetupMeshInfo) == 0x000008, "Wrong alignment on FortGrindRail_SetupMeshInfo");
static_assert(sizeof(FortGrindRail_SetupMeshInfo) == 0x000018, "Wrong size on FortGrindRail_SetupMeshInfo");
static_assert(offsetof(FortGrindRail_SetupMeshInfo, SplineMeshComponent) == 0x000000, "Member 'FortGrindRail_SetupMeshInfo::SplineMeshComponent' has a wrong offset!");
static_assert(offsetof(FortGrindRail_SetupMeshInfo, StartIndex) == 0x000008, "Member 'FortGrindRail_SetupMeshInfo::StartIndex' has a wrong offset!");
static_assert(offsetof(FortGrindRail_SetupMeshInfo, EndIndex) == 0x00000C, "Member 'FortGrindRail_SetupMeshInfo::EndIndex' has a wrong offset!");
static_assert(offsetof(FortGrindRail_SetupMeshInfo, StartDistance) == 0x000010, "Member 'FortGrindRail_SetupMeshInfo::StartDistance' has a wrong offset!");
static_assert(offsetof(FortGrindRail_SetupMeshInfo, EndDistance) == 0x000014, "Member 'FortGrindRail_SetupMeshInfo::EndDistance' has a wrong offset!");

struct FortGrindRailLayerAnimInstance_AnimNotify_EntryEnter final
{
public:
	const class UAnimNotify*                      Notify;
};
static_assert(alignof(FortGrindRailLayerAnimInstance_AnimNotify_EntryEnter) == 0x000008, "Wrong alignment on FortGrindRailLayerAnimInstance_AnimNotify_EntryEnter");
static_assert(sizeof(FortGrindRailLayerAnimInstance_AnimNotify_EntryEnter) == 0x000008, "Wrong size on FortGrindRailLayerAnimInstance_AnimNotify_EntryEnter");
static_assert(offsetof(FortGrindRailLayerAnimInstance_AnimNotify_EntryEnter, Notify) == 0x000000, "Member 'FortGrindRailLayerAnimInstance_AnimNotify_EntryEnter::Notify' has a wrong offset!");

struct FortGrindRailLayerAnimInstance_AnimNotify_EntryExit final
{
public:
	const class UAnimNotify*                      Notify;
};
static_assert(alignof(FortGrindRailLayerAnimInstance_AnimNotify_EntryExit) == 0x000008, "Wrong alignment on FortGrindRailLayerAnimInstance_AnimNotify_EntryExit");
static_assert(sizeof(FortGrindRailLayerAnimInstance_AnimNotify_EntryExit) == 0x000008, "Wrong size on FortGrindRailLayerAnimInstance_AnimNotify_EntryExit");
static_assert(offsetof(FortGrindRailLayerAnimInstance_AnimNotify_EntryExit, Notify) == 0x000000, "Member 'FortGrindRailLayerAnimInstance_AnimNotify_EntryExit::Notify' has a wrong offset!");

struct FortGrindRailLayerAnimInstance_AnimNotify_IdleEnter final
{
public:
	const class UAnimNotify*                      Notify;
};
static_assert(alignof(FortGrindRailLayerAnimInstance_AnimNotify_IdleEnter) == 0x000008, "Wrong alignment on FortGrindRailLayerAnimInstance_AnimNotify_IdleEnter");
static_assert(sizeof(FortGrindRailLayerAnimInstance_AnimNotify_IdleEnter) == 0x000008, "Wrong size on FortGrindRailLayerAnimInstance_AnimNotify_IdleEnter");
static_assert(offsetof(FortGrindRailLayerAnimInstance_AnimNotify_IdleEnter, Notify) == 0x000000, "Member 'FortGrindRailLayerAnimInstance_AnimNotify_IdleEnter::Notify' has a wrong offset!");

struct FortGrindRailLayerAnimInstance_HandleBegunGrinding final
{
public:
	bool                                          bWasAlreadyGrinding;
	bool                                          bWasJumpingFromRail;
	bool                                          bFromInteraction;
	uint8                                         Pad_3[0x5];
	struct FVector                                PreviousPlayerLocation;
};
static_assert(alignof(FortGrindRailLayerAnimInstance_HandleBegunGrinding) == 0x000008, "Wrong alignment on FortGrindRailLayerAnimInstance_HandleBegunGrinding");
static_assert(sizeof(FortGrindRailLayerAnimInstance_HandleBegunGrinding) == 0x000020, "Wrong size on FortGrindRailLayerAnimInstance_HandleBegunGrinding");
static_assert(offsetof(FortGrindRailLayerAnimInstance_HandleBegunGrinding, bWasAlreadyGrinding) == 0x000000, "Member 'FortGrindRailLayerAnimInstance_HandleBegunGrinding::bWasAlreadyGrinding' has a wrong offset!");
static_assert(offsetof(FortGrindRailLayerAnimInstance_HandleBegunGrinding, bWasJumpingFromRail) == 0x000001, "Member 'FortGrindRailLayerAnimInstance_HandleBegunGrinding::bWasJumpingFromRail' has a wrong offset!");
static_assert(offsetof(FortGrindRailLayerAnimInstance_HandleBegunGrinding, bFromInteraction) == 0x000002, "Member 'FortGrindRailLayerAnimInstance_HandleBegunGrinding::bFromInteraction' has a wrong offset!");
static_assert(offsetof(FortGrindRailLayerAnimInstance_HandleBegunGrinding, PreviousPlayerLocation) == 0x000008, "Member 'FortGrindRailLayerAnimInstance_HandleBegunGrinding::PreviousPlayerLocation' has a wrong offset!");

struct FortGameplayCueNotifyLoop_Grinding_CacheReferences final
{
public:
	class UAudioComponent*                        InAudioComponent;
	class UFXSystemComponent*                     InEffectsComponent;
	class AFortPlayerPawn*                        InPlayerPawn;
	class UFortPawnComponent_GrindRail*           InGrindComponent;
};
static_assert(alignof(FortGameplayCueNotifyLoop_Grinding_CacheReferences) == 0x000008, "Wrong alignment on FortGameplayCueNotifyLoop_Grinding_CacheReferences");
static_assert(sizeof(FortGameplayCueNotifyLoop_Grinding_CacheReferences) == 0x000020, "Wrong size on FortGameplayCueNotifyLoop_Grinding_CacheReferences");
static_assert(offsetof(FortGameplayCueNotifyLoop_Grinding_CacheReferences, InAudioComponent) == 0x000000, "Member 'FortGameplayCueNotifyLoop_Grinding_CacheReferences::InAudioComponent' has a wrong offset!");
static_assert(offsetof(FortGameplayCueNotifyLoop_Grinding_CacheReferences, InEffectsComponent) == 0x000008, "Member 'FortGameplayCueNotifyLoop_Grinding_CacheReferences::InEffectsComponent' has a wrong offset!");
static_assert(offsetof(FortGameplayCueNotifyLoop_Grinding_CacheReferences, InPlayerPawn) == 0x000010, "Member 'FortGameplayCueNotifyLoop_Grinding_CacheReferences::InPlayerPawn' has a wrong offset!");
static_assert(offsetof(FortGameplayCueNotifyLoop_Grinding_CacheReferences, InGrindComponent) == 0x000018, "Member 'FortGameplayCueNotifyLoop_Grinding_CacheReferences::InGrindComponent' has a wrong offset!");

struct FortGameplayCueNotifyLoop_Grinding_OnForwardChanged final
{
public:
	bool                                          bNewState;
};
static_assert(alignof(FortGameplayCueNotifyLoop_Grinding_OnForwardChanged) == 0x000001, "Wrong alignment on FortGameplayCueNotifyLoop_Grinding_OnForwardChanged");
static_assert(sizeof(FortGameplayCueNotifyLoop_Grinding_OnForwardChanged) == 0x000001, "Wrong size on FortGameplayCueNotifyLoop_Grinding_OnForwardChanged");
static_assert(offsetof(FortGameplayCueNotifyLoop_Grinding_OnForwardChanged, bNewState) == 0x000000, "Member 'FortGameplayCueNotifyLoop_Grinding_OnForwardChanged::bNewState' has a wrong offset!");

struct FortPawnComponent_GrindRail_AddMoveIgnoreActor final
{
public:
	class ABuildingActor*                         BuildingActor;
};
static_assert(alignof(FortPawnComponent_GrindRail_AddMoveIgnoreActor) == 0x000008, "Wrong alignment on FortPawnComponent_GrindRail_AddMoveIgnoreActor");
static_assert(sizeof(FortPawnComponent_GrindRail_AddMoveIgnoreActor) == 0x000008, "Wrong size on FortPawnComponent_GrindRail_AddMoveIgnoreActor");
static_assert(offsetof(FortPawnComponent_GrindRail_AddMoveIgnoreActor, BuildingActor) == 0x000000, "Member 'FortPawnComponent_GrindRail_AddMoveIgnoreActor::BuildingActor' has a wrong offset!");

struct FortPawnComponent_GrindRail_AttemptDestroyVehicleWhileGrinding final
{
public:
	class AFortAthenaVehicle*                     Vehicle;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortPawnComponent_GrindRail_AttemptDestroyVehicleWhileGrinding) == 0x000008, "Wrong alignment on FortPawnComponent_GrindRail_AttemptDestroyVehicleWhileGrinding");
static_assert(sizeof(FortPawnComponent_GrindRail_AttemptDestroyVehicleWhileGrinding) == 0x000010, "Wrong size on FortPawnComponent_GrindRail_AttemptDestroyVehicleWhileGrinding");
static_assert(offsetof(FortPawnComponent_GrindRail_AttemptDestroyVehicleWhileGrinding, Vehicle) == 0x000000, "Member 'FortPawnComponent_GrindRail_AttemptDestroyVehicleWhileGrinding::Vehicle' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_GrindRail_AttemptDestroyVehicleWhileGrinding, ReturnValue) == 0x000008, "Member 'FortPawnComponent_GrindRail_AttemptDestroyVehicleWhileGrinding::ReturnValue' has a wrong offset!");

struct FortPawnComponent_GrindRail_BeginGrinding final
{
public:
	class AFortGrindRail*                         GrindRail;
	float                                         OptionalStartDistance;
	bool                                          bFromInteraction;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FortPawnComponent_GrindRail_BeginGrinding) == 0x000008, "Wrong alignment on FortPawnComponent_GrindRail_BeginGrinding");
static_assert(sizeof(FortPawnComponent_GrindRail_BeginGrinding) == 0x000010, "Wrong size on FortPawnComponent_GrindRail_BeginGrinding");
static_assert(offsetof(FortPawnComponent_GrindRail_BeginGrinding, GrindRail) == 0x000000, "Member 'FortPawnComponent_GrindRail_BeginGrinding::GrindRail' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_GrindRail_BeginGrinding, OptionalStartDistance) == 0x000008, "Member 'FortPawnComponent_GrindRail_BeginGrinding::OptionalStartDistance' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_GrindRail_BeginGrinding, bFromInteraction) == 0x00000C, "Member 'FortPawnComponent_GrindRail_BeginGrinding::bFromInteraction' has a wrong offset!");

struct FortPawnComponent_GrindRail_CalculateVelocity final
{
public:
	float                                         DeltaTime;
	bool                                          bReplayingMovement;
	uint8                                         Pad_5[0x3];
	struct FVector                                OutVelocity;
};
static_assert(alignof(FortPawnComponent_GrindRail_CalculateVelocity) == 0x000008, "Wrong alignment on FortPawnComponent_GrindRail_CalculateVelocity");
static_assert(sizeof(FortPawnComponent_GrindRail_CalculateVelocity) == 0x000020, "Wrong size on FortPawnComponent_GrindRail_CalculateVelocity");
static_assert(offsetof(FortPawnComponent_GrindRail_CalculateVelocity, DeltaTime) == 0x000000, "Member 'FortPawnComponent_GrindRail_CalculateVelocity::DeltaTime' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_GrindRail_CalculateVelocity, bReplayingMovement) == 0x000004, "Member 'FortPawnComponent_GrindRail_CalculateVelocity::bReplayingMovement' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_GrindRail_CalculateVelocity, OutVelocity) == 0x000008, "Member 'FortPawnComponent_GrindRail_CalculateVelocity::OutVelocity' has a wrong offset!");

struct FortPawnComponent_GrindRail_CanBeginGrinding final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortPawnComponent_GrindRail_CanBeginGrinding) == 0x000001, "Wrong alignment on FortPawnComponent_GrindRail_CanBeginGrinding");
static_assert(sizeof(FortPawnComponent_GrindRail_CanBeginGrinding) == 0x000001, "Wrong size on FortPawnComponent_GrindRail_CanBeginGrinding");
static_assert(offsetof(FortPawnComponent_GrindRail_CanBeginGrinding, ReturnValue) == 0x000000, "Member 'FortPawnComponent_GrindRail_CanBeginGrinding::ReturnValue' has a wrong offset!");

struct FortPawnComponent_GrindRail_EndGrinding final
{
public:
	bool                                          bSetEndMovementMode;
};
static_assert(alignof(FortPawnComponent_GrindRail_EndGrinding) == 0x000001, "Wrong alignment on FortPawnComponent_GrindRail_EndGrinding");
static_assert(sizeof(FortPawnComponent_GrindRail_EndGrinding) == 0x000001, "Wrong size on FortPawnComponent_GrindRail_EndGrinding");
static_assert(offsetof(FortPawnComponent_GrindRail_EndGrinding, bSetEndMovementMode) == 0x000000, "Member 'FortPawnComponent_GrindRail_EndGrinding::bSetEndMovementMode' has a wrong offset!");

struct FortPawnComponent_GrindRail_HandleHitWhenGrinding final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(FortPawnComponent_GrindRail_HandleHitWhenGrinding) == 0x000008, "Wrong alignment on FortPawnComponent_GrindRail_HandleHitWhenGrinding");
static_assert(sizeof(FortPawnComponent_GrindRail_HandleHitWhenGrinding) == 0x0000E0, "Wrong size on FortPawnComponent_GrindRail_HandleHitWhenGrinding");
static_assert(offsetof(FortPawnComponent_GrindRail_HandleHitWhenGrinding, Hit) == 0x000000, "Member 'FortPawnComponent_GrindRail_HandleHitWhenGrinding::Hit' has a wrong offset!");

struct FortPawnComponent_GrindRail_OnBaseMeshReady final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class USkeletalMeshComponent*                 MeshComponent;
};
static_assert(alignof(FortPawnComponent_GrindRail_OnBaseMeshReady) == 0x000008, "Wrong alignment on FortPawnComponent_GrindRail_OnBaseMeshReady");
static_assert(sizeof(FortPawnComponent_GrindRail_OnBaseMeshReady) == 0x000010, "Wrong size on FortPawnComponent_GrindRail_OnBaseMeshReady");
static_assert(offsetof(FortPawnComponent_GrindRail_OnBaseMeshReady, Pawn) == 0x000000, "Member 'FortPawnComponent_GrindRail_OnBaseMeshReady::Pawn' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_GrindRail_OnBaseMeshReady, MeshComponent) == 0x000008, "Member 'FortPawnComponent_GrindRail_OnBaseMeshReady::MeshComponent' has a wrong offset!");

struct FortPawnComponent_GrindRail_OnIgnoredBuildingEndPlay final
{
public:
	class AActor*                                 Actor;
	EEndPlayReason                                EndPlayReason;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortPawnComponent_GrindRail_OnIgnoredBuildingEndPlay) == 0x000008, "Wrong alignment on FortPawnComponent_GrindRail_OnIgnoredBuildingEndPlay");
static_assert(sizeof(FortPawnComponent_GrindRail_OnIgnoredBuildingEndPlay) == 0x000010, "Wrong size on FortPawnComponent_GrindRail_OnIgnoredBuildingEndPlay");
static_assert(offsetof(FortPawnComponent_GrindRail_OnIgnoredBuildingEndPlay, Actor) == 0x000000, "Member 'FortPawnComponent_GrindRail_OnIgnoredBuildingEndPlay::Actor' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_GrindRail_OnIgnoredBuildingEndPlay, EndPlayReason) == 0x000008, "Member 'FortPawnComponent_GrindRail_OnIgnoredBuildingEndPlay::EndPlayReason' has a wrong offset!");

struct FortPawnComponent_GrindRail_OnJumpInput final
{
public:
	bool                                          bPressed;
};
static_assert(alignof(FortPawnComponent_GrindRail_OnJumpInput) == 0x000001, "Wrong alignment on FortPawnComponent_GrindRail_OnJumpInput");
static_assert(sizeof(FortPawnComponent_GrindRail_OnJumpInput) == 0x000001, "Wrong size on FortPawnComponent_GrindRail_OnJumpInput");
static_assert(offsetof(FortPawnComponent_GrindRail_OnJumpInput, bPressed) == 0x000000, "Member 'FortPawnComponent_GrindRail_OnJumpInput::bPressed' has a wrong offset!");

struct FortPawnComponent_GrindRail_OnMovementModeChanged final
{
public:
	class ACharacter*                             InCharacter;
	EMovementMode                                 PrevMovementMode;
	uint8                                         PreviousCustomMode;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(FortPawnComponent_GrindRail_OnMovementModeChanged) == 0x000008, "Wrong alignment on FortPawnComponent_GrindRail_OnMovementModeChanged");
static_assert(sizeof(FortPawnComponent_GrindRail_OnMovementModeChanged) == 0x000010, "Wrong size on FortPawnComponent_GrindRail_OnMovementModeChanged");
static_assert(offsetof(FortPawnComponent_GrindRail_OnMovementModeChanged, InCharacter) == 0x000000, "Member 'FortPawnComponent_GrindRail_OnMovementModeChanged::InCharacter' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_GrindRail_OnMovementModeChanged, PrevMovementMode) == 0x000008, "Member 'FortPawnComponent_GrindRail_OnMovementModeChanged::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_GrindRail_OnMovementModeChanged, PreviousCustomMode) == 0x000009, "Member 'FortPawnComponent_GrindRail_OnMovementModeChanged::PreviousCustomMode' has a wrong offset!");

struct FortPawnComponent_GrindRail_OnRep_CurrentBoosterMode final
{
public:
	EGrindRailBoosterMode                         PreviousBoosterMode;
};
static_assert(alignof(FortPawnComponent_GrindRail_OnRep_CurrentBoosterMode) == 0x000001, "Wrong alignment on FortPawnComponent_GrindRail_OnRep_CurrentBoosterMode");
static_assert(sizeof(FortPawnComponent_GrindRail_OnRep_CurrentBoosterMode) == 0x000001, "Wrong size on FortPawnComponent_GrindRail_OnRep_CurrentBoosterMode");
static_assert(offsetof(FortPawnComponent_GrindRail_OnRep_CurrentBoosterMode, PreviousBoosterMode) == 0x000000, "Member 'FortPawnComponent_GrindRail_OnRep_CurrentBoosterMode::PreviousBoosterMode' has a wrong offset!");

struct FortPawnComponent_GrindRail_OnWalkingBaseChanged final
{
public:
	class AActor*                                 NewBase;
};
static_assert(alignof(FortPawnComponent_GrindRail_OnWalkingBaseChanged) == 0x000008, "Wrong alignment on FortPawnComponent_GrindRail_OnWalkingBaseChanged");
static_assert(sizeof(FortPawnComponent_GrindRail_OnWalkingBaseChanged) == 0x000008, "Wrong size on FortPawnComponent_GrindRail_OnWalkingBaseChanged");
static_assert(offsetof(FortPawnComponent_GrindRail_OnWalkingBaseChanged, NewBase) == 0x000000, "Member 'FortPawnComponent_GrindRail_OnWalkingBaseChanged::NewBase' has a wrong offset!");

struct FortPawnComponent_GrindRail_ServerUpdateWeaponHolstered final
{
public:
	bool                                          bNewHolstered;
	bool                                          bPlayEquipAnim;
};
static_assert(alignof(FortPawnComponent_GrindRail_ServerUpdateWeaponHolstered) == 0x000001, "Wrong alignment on FortPawnComponent_GrindRail_ServerUpdateWeaponHolstered");
static_assert(sizeof(FortPawnComponent_GrindRail_ServerUpdateWeaponHolstered) == 0x000002, "Wrong size on FortPawnComponent_GrindRail_ServerUpdateWeaponHolstered");
static_assert(offsetof(FortPawnComponent_GrindRail_ServerUpdateWeaponHolstered, bNewHolstered) == 0x000000, "Member 'FortPawnComponent_GrindRail_ServerUpdateWeaponHolstered::bNewHolstered' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_GrindRail_ServerUpdateWeaponHolstered, bPlayEquipAnim) == 0x000001, "Member 'FortPawnComponent_GrindRail_ServerUpdateWeaponHolstered::bPlayEquipAnim' has a wrong offset!");

struct FortPawnComponent_GrindRail_SetGrindBaseActor final
{
public:
	class AActor*                                 NewBaseActor;
};
static_assert(alignof(FortPawnComponent_GrindRail_SetGrindBaseActor) == 0x000008, "Wrong alignment on FortPawnComponent_GrindRail_SetGrindBaseActor");
static_assert(sizeof(FortPawnComponent_GrindRail_SetGrindBaseActor) == 0x000008, "Wrong size on FortPawnComponent_GrindRail_SetGrindBaseActor");
static_assert(offsetof(FortPawnComponent_GrindRail_SetGrindBaseActor, NewBaseActor) == 0x000000, "Member 'FortPawnComponent_GrindRail_SetGrindBaseActor::NewBaseActor' has a wrong offset!");

struct FortPawnComponent_GrindRail_SetGrindDistanceOnSpline final
{
public:
	float                                         NewDistanceOnSpline;
};
static_assert(alignof(FortPawnComponent_GrindRail_SetGrindDistanceOnSpline) == 0x000004, "Wrong alignment on FortPawnComponent_GrindRail_SetGrindDistanceOnSpline");
static_assert(sizeof(FortPawnComponent_GrindRail_SetGrindDistanceOnSpline) == 0x000004, "Wrong size on FortPawnComponent_GrindRail_SetGrindDistanceOnSpline");
static_assert(offsetof(FortPawnComponent_GrindRail_SetGrindDistanceOnSpline, NewDistanceOnSpline) == 0x000000, "Member 'FortPawnComponent_GrindRail_SetGrindDistanceOnSpline::NewDistanceOnSpline' has a wrong offset!");

struct FortPawnComponent_GrindRail_SetIsSprinting final
{
public:
	bool                                          bNewIsSprinting;
};
static_assert(alignof(FortPawnComponent_GrindRail_SetIsSprinting) == 0x000001, "Wrong alignment on FortPawnComponent_GrindRail_SetIsSprinting");
static_assert(sizeof(FortPawnComponent_GrindRail_SetIsSprinting) == 0x000001, "Wrong size on FortPawnComponent_GrindRail_SetIsSprinting");
static_assert(offsetof(FortPawnComponent_GrindRail_SetIsSprinting, bNewIsSprinting) == 0x000000, "Member 'FortPawnComponent_GrindRail_SetIsSprinting::bNewIsSprinting' has a wrong offset!");

struct FortPawnComponent_GrindRail_SetMovementStatus final
{
public:
	struct FVector                                NewStatus;
};
static_assert(alignof(FortPawnComponent_GrindRail_SetMovementStatus) == 0x000008, "Wrong alignment on FortPawnComponent_GrindRail_SetMovementStatus");
static_assert(sizeof(FortPawnComponent_GrindRail_SetMovementStatus) == 0x000018, "Wrong size on FortPawnComponent_GrindRail_SetMovementStatus");
static_assert(offsetof(FortPawnComponent_GrindRail_SetMovementStatus, NewStatus) == 0x000000, "Member 'FortPawnComponent_GrindRail_SetMovementStatus::NewStatus' has a wrong offset!");

struct FortPawnComponent_GrindRail_DrawDebugHUD final
{
public:
	class AHUD*                                   HUD;
	class UCanvas*                                Canvas;
};
static_assert(alignof(FortPawnComponent_GrindRail_DrawDebugHUD) == 0x000008, "Wrong alignment on FortPawnComponent_GrindRail_DrawDebugHUD");
static_assert(sizeof(FortPawnComponent_GrindRail_DrawDebugHUD) == 0x000010, "Wrong size on FortPawnComponent_GrindRail_DrawDebugHUD");
static_assert(offsetof(FortPawnComponent_GrindRail_DrawDebugHUD, HUD) == 0x000000, "Member 'FortPawnComponent_GrindRail_DrawDebugHUD::HUD' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_GrindRail_DrawDebugHUD, Canvas) == 0x000008, "Member 'FortPawnComponent_GrindRail_DrawDebugHUD::Canvas' has a wrong offset!");

struct FortPawnComponent_GrindRail_GetCameraOrientedLeanValues final
{
public:
	float                                         RawLeanForward;
	float                                         RawLeanRight;
	float                                         OrientedLeanForward;
	float                                         OrientedLeanRight;
};
static_assert(alignof(FortPawnComponent_GrindRail_GetCameraOrientedLeanValues) == 0x000004, "Wrong alignment on FortPawnComponent_GrindRail_GetCameraOrientedLeanValues");
static_assert(sizeof(FortPawnComponent_GrindRail_GetCameraOrientedLeanValues) == 0x000010, "Wrong size on FortPawnComponent_GrindRail_GetCameraOrientedLeanValues");
static_assert(offsetof(FortPawnComponent_GrindRail_GetCameraOrientedLeanValues, RawLeanForward) == 0x000000, "Member 'FortPawnComponent_GrindRail_GetCameraOrientedLeanValues::RawLeanForward' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_GrindRail_GetCameraOrientedLeanValues, RawLeanRight) == 0x000004, "Member 'FortPawnComponent_GrindRail_GetCameraOrientedLeanValues::RawLeanRight' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_GrindRail_GetCameraOrientedLeanValues, OrientedLeanForward) == 0x000008, "Member 'FortPawnComponent_GrindRail_GetCameraOrientedLeanValues::OrientedLeanForward' has a wrong offset!");
static_assert(offsetof(FortPawnComponent_GrindRail_GetCameraOrientedLeanValues, OrientedLeanRight) == 0x00000C, "Member 'FortPawnComponent_GrindRail_GetCameraOrientedLeanValues::OrientedLeanRight' has a wrong offset!");

struct FortPawnComponent_GrindRail_GetGrindBaseActor final
{
public:
	class AActor*                                 ReturnValue;
};
static_assert(alignof(FortPawnComponent_GrindRail_GetGrindBaseActor) == 0x000008, "Wrong alignment on FortPawnComponent_GrindRail_GetGrindBaseActor");
static_assert(sizeof(FortPawnComponent_GrindRail_GetGrindBaseActor) == 0x000008, "Wrong size on FortPawnComponent_GrindRail_GetGrindBaseActor");
static_assert(offsetof(FortPawnComponent_GrindRail_GetGrindBaseActor, ReturnValue) == 0x000000, "Member 'FortPawnComponent_GrindRail_GetGrindBaseActor::ReturnValue' has a wrong offset!");

struct FortPawnComponent_GrindRail_GetGrindDistanceOnSpline final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortPawnComponent_GrindRail_GetGrindDistanceOnSpline) == 0x000004, "Wrong alignment on FortPawnComponent_GrindRail_GetGrindDistanceOnSpline");
static_assert(sizeof(FortPawnComponent_GrindRail_GetGrindDistanceOnSpline) == 0x000004, "Wrong size on FortPawnComponent_GrindRail_GetGrindDistanceOnSpline");
static_assert(offsetof(FortPawnComponent_GrindRail_GetGrindDistanceOnSpline, ReturnValue) == 0x000000, "Member 'FortPawnComponent_GrindRail_GetGrindDistanceOnSpline::ReturnValue' has a wrong offset!");

struct FortPawnComponent_GrindRail_GetGrindRequestJump final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortPawnComponent_GrindRail_GetGrindRequestJump) == 0x000001, "Wrong alignment on FortPawnComponent_GrindRail_GetGrindRequestJump");
static_assert(sizeof(FortPawnComponent_GrindRail_GetGrindRequestJump) == 0x000001, "Wrong size on FortPawnComponent_GrindRail_GetGrindRequestJump");
static_assert(offsetof(FortPawnComponent_GrindRail_GetGrindRequestJump, ReturnValue) == 0x000000, "Member 'FortPawnComponent_GrindRail_GetGrindRequestJump::ReturnValue' has a wrong offset!");

struct FortPawnComponent_GrindRail_GetHorizontalSplineAngleDeltaDegrees final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortPawnComponent_GrindRail_GetHorizontalSplineAngleDeltaDegrees) == 0x000004, "Wrong alignment on FortPawnComponent_GrindRail_GetHorizontalSplineAngleDeltaDegrees");
static_assert(sizeof(FortPawnComponent_GrindRail_GetHorizontalSplineAngleDeltaDegrees) == 0x000004, "Wrong size on FortPawnComponent_GrindRail_GetHorizontalSplineAngleDeltaDegrees");
static_assert(offsetof(FortPawnComponent_GrindRail_GetHorizontalSplineAngleDeltaDegrees, ReturnValue) == 0x000000, "Member 'FortPawnComponent_GrindRail_GetHorizontalSplineAngleDeltaDegrees::ReturnValue' has a wrong offset!");

struct FortPawnComponent_GrindRail_GetLeanForwardSpeedNormalized final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortPawnComponent_GrindRail_GetLeanForwardSpeedNormalized) == 0x000004, "Wrong alignment on FortPawnComponent_GrindRail_GetLeanForwardSpeedNormalized");
static_assert(sizeof(FortPawnComponent_GrindRail_GetLeanForwardSpeedNormalized) == 0x000004, "Wrong size on FortPawnComponent_GrindRail_GetLeanForwardSpeedNormalized");
static_assert(offsetof(FortPawnComponent_GrindRail_GetLeanForwardSpeedNormalized, ReturnValue) == 0x000000, "Member 'FortPawnComponent_GrindRail_GetLeanForwardSpeedNormalized::ReturnValue' has a wrong offset!");

struct FortPawnComponent_GrindRail_GetMovementStatus final
{
public:
	struct FVector                                ReturnValue;
};
static_assert(alignof(FortPawnComponent_GrindRail_GetMovementStatus) == 0x000008, "Wrong alignment on FortPawnComponent_GrindRail_GetMovementStatus");
static_assert(sizeof(FortPawnComponent_GrindRail_GetMovementStatus) == 0x000018, "Wrong size on FortPawnComponent_GrindRail_GetMovementStatus");
static_assert(offsetof(FortPawnComponent_GrindRail_GetMovementStatus, ReturnValue) == 0x000000, "Member 'FortPawnComponent_GrindRail_GetMovementStatus::ReturnValue' has a wrong offset!");

struct FortPawnComponent_GrindRail_GetSpeedHardCap final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortPawnComponent_GrindRail_GetSpeedHardCap) == 0x000004, "Wrong alignment on FortPawnComponent_GrindRail_GetSpeedHardCap");
static_assert(sizeof(FortPawnComponent_GrindRail_GetSpeedHardCap) == 0x000004, "Wrong size on FortPawnComponent_GrindRail_GetSpeedHardCap");
static_assert(offsetof(FortPawnComponent_GrindRail_GetSpeedHardCap, ReturnValue) == 0x000000, "Member 'FortPawnComponent_GrindRail_GetSpeedHardCap::ReturnValue' has a wrong offset!");

struct FortPawnComponent_GrindRail_GetWantsToGrind final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortPawnComponent_GrindRail_GetWantsToGrind) == 0x000001, "Wrong alignment on FortPawnComponent_GrindRail_GetWantsToGrind");
static_assert(sizeof(FortPawnComponent_GrindRail_GetWantsToGrind) == 0x000001, "Wrong size on FortPawnComponent_GrindRail_GetWantsToGrind");
static_assert(offsetof(FortPawnComponent_GrindRail_GetWantsToGrind, ReturnValue) == 0x000000, "Member 'FortPawnComponent_GrindRail_GetWantsToGrind::ReturnValue' has a wrong offset!");

struct FortPawnComponent_GrindRail_IsGrinding final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortPawnComponent_GrindRail_IsGrinding) == 0x000001, "Wrong alignment on FortPawnComponent_GrindRail_IsGrinding");
static_assert(sizeof(FortPawnComponent_GrindRail_IsGrinding) == 0x000001, "Wrong size on FortPawnComponent_GrindRail_IsGrinding");
static_assert(offsetof(FortPawnComponent_GrindRail_IsGrinding, ReturnValue) == 0x000000, "Member 'FortPawnComponent_GrindRail_IsGrinding::ReturnValue' has a wrong offset!");

struct FortPawnComponent_GrindRail_IsUsingToggleSprint final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortPawnComponent_GrindRail_IsUsingToggleSprint) == 0x000001, "Wrong alignment on FortPawnComponent_GrindRail_IsUsingToggleSprint");
static_assert(sizeof(FortPawnComponent_GrindRail_IsUsingToggleSprint) == 0x000001, "Wrong size on FortPawnComponent_GrindRail_IsUsingToggleSprint");
static_assert(offsetof(FortPawnComponent_GrindRail_IsUsingToggleSprint, ReturnValue) == 0x000000, "Member 'FortPawnComponent_GrindRail_IsUsingToggleSprint::ReturnValue' has a wrong offset!");

struct FortPawnComponent_GrindRail_IsWeaponActive final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortPawnComponent_GrindRail_IsWeaponActive) == 0x000001, "Wrong alignment on FortPawnComponent_GrindRail_IsWeaponActive");
static_assert(sizeof(FortPawnComponent_GrindRail_IsWeaponActive) == 0x000001, "Wrong size on FortPawnComponent_GrindRail_IsWeaponActive");
static_assert(offsetof(FortPawnComponent_GrindRail_IsWeaponActive, ReturnValue) == 0x000000, "Member 'FortPawnComponent_GrindRail_IsWeaponActive::ReturnValue' has a wrong offset!");

struct FortPawnComponent_GrindRail_IsWeaponADS final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortPawnComponent_GrindRail_IsWeaponADS) == 0x000001, "Wrong alignment on FortPawnComponent_GrindRail_IsWeaponADS");
static_assert(sizeof(FortPawnComponent_GrindRail_IsWeaponADS) == 0x000001, "Wrong size on FortPawnComponent_GrindRail_IsWeaponADS");
static_assert(offsetof(FortPawnComponent_GrindRail_IsWeaponADS, ReturnValue) == 0x000000, "Member 'FortPawnComponent_GrindRail_IsWeaponADS::ReturnValue' has a wrong offset!");

struct FortPawnComponent_GrindRail_NativeIsShooting final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortPawnComponent_GrindRail_NativeIsShooting) == 0x000001, "Wrong alignment on FortPawnComponent_GrindRail_NativeIsShooting");
static_assert(sizeof(FortPawnComponent_GrindRail_NativeIsShooting) == 0x000001, "Wrong size on FortPawnComponent_GrindRail_NativeIsShooting");
static_assert(offsetof(FortPawnComponent_GrindRail_NativeIsShooting, ReturnValue) == 0x000000, "Member 'FortPawnComponent_GrindRail_NativeIsShooting::ReturnValue' has a wrong offset!");

}
