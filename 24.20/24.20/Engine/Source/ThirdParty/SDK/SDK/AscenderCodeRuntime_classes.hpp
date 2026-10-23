#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class AFortAscenderZipline final : public AFortAthenaSplineZipline
{
public:
	TMulticastInlineDelegate<void()>              OnAscenderSetupComplete;
	class FName                                   SplineTopAttachPointName;
	bool                                          bAutoFindSplineEndLocation;
	uint8                                         Pad_D55[0x3];
	float                                         SplineOffsetFromGround;
	float                                         CableOffsetFromSplineEnd;
	float                                         SplineLength;
	uint8                                         Pad_D64[0x4];
	class UStaticMesh*                            SplineStaticMesh;
	ESplineMeshAxis                               MeshForwardAxis;
	bool                                          bHandleReturning;
	uint8                                         Pad_D72[0x2];
	float                                         HandleReturnSpeed;
	bool                                          bCableDropping;
	uint8                                         Pad_D79[0x3];
	float                                         CableDropSpeed;
	float                                         YawRotationOffsetWhileUsingHandle;
	float                                         YawRotationOffsetWhileSlidingDown;
	bool                                          bUseComplexSplineCollision;
	uint8                                         Pad_D89[0x3];
	float                                         SimpleSplineCollisionRadius;
	float                                         SimpleSplineCollisionHeightExtension;
	uint8                                         Pad_D94[0x4];
	struct FScalableFloat                         DescendMinDistanceFromBottom;
	struct FScalableFloat                         AscendReachedEndHorizontalLaunchSpeed;
	struct FScalableFloat                         AscendReachedEndVerticalLaunchSpeed;
	struct FScalableFloat                         AscendJumpedOffHorizontalLaunchSpeed;
	struct FScalableFloat                         AscendJumpedOffVerticalLaunchSpeed;
	struct FScalableFloat                         DescendReachedEndHorizontalLaunchSpeed;
	struct FScalableFloat                         DescendReachedEndVerticalLaunchSpeed;
	struct FScalableFloat                         DescendJumpedOffHorizontalLaunchSpeed;
	struct FScalableFloat                         DescendJumpedOffVerticalLaunchSpeed;
	struct FScalableFloat                         HandleActorHitPlayerHorizontalLaunchSpeed;
	struct FScalableFloat                         HandleActorHitPlayerVerticalLaunchSpeed;
	struct FVector                                HandleDestroyBuildingsOverlapExtents;
	struct FVector                                PlayerDestroyBuildingsOverlapExtents;
	struct FVector                                InitialSplineEndLocation;
	struct FVector                                CurrentSplineEndLocation;
	struct FVector                                TargetSplineEndLocation;
	struct FVector                                CurrentHandleLocation;
	TWeakObjectPtr<class UPrimitiveComponent>     CurrentInteractComponent;
	TWeakObjectPtr<class AFortPlayerPawn>         PawnUsingHandle;
	TWeakObjectPtr<class AFortPlayerPawn>         PreviousPawnUsingHandle;
	class USplineMeshComponent*                   SplineMesh;
	class UCapsuleComponent*                      SimpleSplineMeshCollision;
	TWeakObjectPtr<class ABuildingActor>          FloorActor;
	TArray<TWeakObjectPtr<class AFortPlayerPawn>> RotationLockedPawns;
	uint8                                         Pad_1020[0x68];
	class UFortLinkToActorComponent*              LinkToActorComponent;

public:
	void BP_HandlePlayerStartedUsingHandle(class AFortPlayerPawn* Player);
	void BP_HandlePlayerStoppedUsingHandle(class AFortPlayerPawn* Player);
	void BP_HandleStartedLoweringCable();
	void BP_HandleStartedLoweringHandle();
	void BP_HandleStoppedLoweringCable();
	void BP_HandleStoppedLoweringHandle();
	void BP_HandleUpdatedLoweringCable();
	void BP_HandleUpdatedLoweringHandle();
	void HandleFloorActorDestroyed(class AActor* Actor);
	void HandleFloorActorHealthChanged();
	void HandlePawnUsingHandleDied(class AFortPawn* DeadPawn);
	void OnRep_InitialSplineEndLocation();
	void OnRep_PawnUsingHandle();
	void OnRep_TargetSplineEndLocation();
	void SetupAscender(const bool bFromConstruction, const bool bFromReplication);

	void ApplyStructureDamage(class ABuildingSMActor* BuildingActor, class AActor* DamageSource) const;
	class UPrimitiveComponent* GetHandleComponent() const;
	class UPrimitiveComponent* GetInteractComponentOverride(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent) const;
	class AFortPlayerPawn* GetPawnUsingHandle() const;
	class UPrimitiveComponent* GetTopComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAscenderZipline">();
	}
	static class AFortAscenderZipline* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAscenderZipline>();
	}
};
static_assert(alignof(AFortAscenderZipline) == 0x000008, "Wrong alignment on AFortAscenderZipline");
static_assert(sizeof(AFortAscenderZipline) == 0x001090, "Wrong size on AFortAscenderZipline");
static_assert(offsetof(AFortAscenderZipline, OnAscenderSetupComplete) == 0x000D40, "Member 'AFortAscenderZipline::OnAscenderSetupComplete' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, SplineTopAttachPointName) == 0x000D50, "Member 'AFortAscenderZipline::SplineTopAttachPointName' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, bAutoFindSplineEndLocation) == 0x000D54, "Member 'AFortAscenderZipline::bAutoFindSplineEndLocation' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, SplineOffsetFromGround) == 0x000D58, "Member 'AFortAscenderZipline::SplineOffsetFromGround' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, CableOffsetFromSplineEnd) == 0x000D5C, "Member 'AFortAscenderZipline::CableOffsetFromSplineEnd' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, SplineLength) == 0x000D60, "Member 'AFortAscenderZipline::SplineLength' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, SplineStaticMesh) == 0x000D68, "Member 'AFortAscenderZipline::SplineStaticMesh' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, MeshForwardAxis) == 0x000D70, "Member 'AFortAscenderZipline::MeshForwardAxis' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, bHandleReturning) == 0x000D71, "Member 'AFortAscenderZipline::bHandleReturning' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, HandleReturnSpeed) == 0x000D74, "Member 'AFortAscenderZipline::HandleReturnSpeed' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, bCableDropping) == 0x000D78, "Member 'AFortAscenderZipline::bCableDropping' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, CableDropSpeed) == 0x000D7C, "Member 'AFortAscenderZipline::CableDropSpeed' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, YawRotationOffsetWhileUsingHandle) == 0x000D80, "Member 'AFortAscenderZipline::YawRotationOffsetWhileUsingHandle' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, YawRotationOffsetWhileSlidingDown) == 0x000D84, "Member 'AFortAscenderZipline::YawRotationOffsetWhileSlidingDown' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, bUseComplexSplineCollision) == 0x000D88, "Member 'AFortAscenderZipline::bUseComplexSplineCollision' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, SimpleSplineCollisionRadius) == 0x000D8C, "Member 'AFortAscenderZipline::SimpleSplineCollisionRadius' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, SimpleSplineCollisionHeightExtension) == 0x000D90, "Member 'AFortAscenderZipline::SimpleSplineCollisionHeightExtension' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, DescendMinDistanceFromBottom) == 0x000D98, "Member 'AFortAscenderZipline::DescendMinDistanceFromBottom' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, AscendReachedEndHorizontalLaunchSpeed) == 0x000DC0, "Member 'AFortAscenderZipline::AscendReachedEndHorizontalLaunchSpeed' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, AscendReachedEndVerticalLaunchSpeed) == 0x000DE8, "Member 'AFortAscenderZipline::AscendReachedEndVerticalLaunchSpeed' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, AscendJumpedOffHorizontalLaunchSpeed) == 0x000E10, "Member 'AFortAscenderZipline::AscendJumpedOffHorizontalLaunchSpeed' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, AscendJumpedOffVerticalLaunchSpeed) == 0x000E38, "Member 'AFortAscenderZipline::AscendJumpedOffVerticalLaunchSpeed' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, DescendReachedEndHorizontalLaunchSpeed) == 0x000E60, "Member 'AFortAscenderZipline::DescendReachedEndHorizontalLaunchSpeed' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, DescendReachedEndVerticalLaunchSpeed) == 0x000E88, "Member 'AFortAscenderZipline::DescendReachedEndVerticalLaunchSpeed' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, DescendJumpedOffHorizontalLaunchSpeed) == 0x000EB0, "Member 'AFortAscenderZipline::DescendJumpedOffHorizontalLaunchSpeed' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, DescendJumpedOffVerticalLaunchSpeed) == 0x000ED8, "Member 'AFortAscenderZipline::DescendJumpedOffVerticalLaunchSpeed' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, HandleActorHitPlayerHorizontalLaunchSpeed) == 0x000F00, "Member 'AFortAscenderZipline::HandleActorHitPlayerHorizontalLaunchSpeed' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, HandleActorHitPlayerVerticalLaunchSpeed) == 0x000F28, "Member 'AFortAscenderZipline::HandleActorHitPlayerVerticalLaunchSpeed' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, HandleDestroyBuildingsOverlapExtents) == 0x000F50, "Member 'AFortAscenderZipline::HandleDestroyBuildingsOverlapExtents' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, PlayerDestroyBuildingsOverlapExtents) == 0x000F68, "Member 'AFortAscenderZipline::PlayerDestroyBuildingsOverlapExtents' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, InitialSplineEndLocation) == 0x000F80, "Member 'AFortAscenderZipline::InitialSplineEndLocation' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, CurrentSplineEndLocation) == 0x000F98, "Member 'AFortAscenderZipline::CurrentSplineEndLocation' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, TargetSplineEndLocation) == 0x000FB0, "Member 'AFortAscenderZipline::TargetSplineEndLocation' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, CurrentHandleLocation) == 0x000FC8, "Member 'AFortAscenderZipline::CurrentHandleLocation' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, CurrentInteractComponent) == 0x000FE0, "Member 'AFortAscenderZipline::CurrentInteractComponent' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, PawnUsingHandle) == 0x000FE8, "Member 'AFortAscenderZipline::PawnUsingHandle' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, PreviousPawnUsingHandle) == 0x000FF0, "Member 'AFortAscenderZipline::PreviousPawnUsingHandle' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, SplineMesh) == 0x000FF8, "Member 'AFortAscenderZipline::SplineMesh' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, SimpleSplineMeshCollision) == 0x001000, "Member 'AFortAscenderZipline::SimpleSplineMeshCollision' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, FloorActor) == 0x001008, "Member 'AFortAscenderZipline::FloorActor' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, RotationLockedPawns) == 0x001010, "Member 'AFortAscenderZipline::RotationLockedPawns' has a wrong offset!");
static_assert(offsetof(AFortAscenderZipline, LinkToActorComponent) == 0x001088, "Member 'AFortAscenderZipline::LinkToActorComponent' has a wrong offset!");

}
