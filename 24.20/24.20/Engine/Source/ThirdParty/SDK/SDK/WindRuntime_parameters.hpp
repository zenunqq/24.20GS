#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct WindCheatManager_InflateBalloonOnSelf final
{
public:
	int32                                         NumBalloons;
};
static_assert(alignof(WindCheatManager_InflateBalloonOnSelf) == 0x000004, "Wrong alignment on WindCheatManager_InflateBalloonOnSelf");
static_assert(sizeof(WindCheatManager_InflateBalloonOnSelf) == 0x000004, "Wrong size on WindCheatManager_InflateBalloonOnSelf");
static_assert(offsetof(WindCheatManager_InflateBalloonOnSelf, NumBalloons) == 0x000000, "Member 'WindCheatManager_InflateBalloonOnSelf::NumBalloons' has a wrong offset!");

struct WindCheatManager_ReleaseBalloonOnSelf final
{
public:
	int32                                         NumBalloons;
};
static_assert(alignof(WindCheatManager_ReleaseBalloonOnSelf) == 0x000004, "Wrong alignment on WindCheatManager_ReleaseBalloonOnSelf");
static_assert(sizeof(WindCheatManager_ReleaseBalloonOnSelf) == 0x000004, "Wrong size on WindCheatManager_ReleaseBalloonOnSelf");
static_assert(offsetof(WindCheatManager_ReleaseBalloonOnSelf, NumBalloons) == 0x000000, "Member 'WindCheatManager_ReleaseBalloonOnSelf::NumBalloons' has a wrong offset!");

struct WindField_AddCollider final
{
public:
	class UShapeComponent*                        ShapeComponent;
};
static_assert(alignof(WindField_AddCollider) == 0x000008, "Wrong alignment on WindField_AddCollider");
static_assert(sizeof(WindField_AddCollider) == 0x000008, "Wrong size on WindField_AddCollider");
static_assert(offsetof(WindField_AddCollider, ShapeComponent) == 0x000000, "Member 'WindField_AddCollider::ShapeComponent' has a wrong offset!");

struct WindField_AddIgnoredActor final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(WindField_AddIgnoredActor) == 0x000008, "Wrong alignment on WindField_AddIgnoredActor");
static_assert(sizeof(WindField_AddIgnoredActor) == 0x000008, "Wrong size on WindField_AddIgnoredActor");
static_assert(offsetof(WindField_AddIgnoredActor, Actor) == 0x000000, "Member 'WindField_AddIgnoredActor::Actor' has a wrong offset!");

struct WindField_OnBeginOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 Other;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	bool                                          bFromSweep;
	uint8                                         Pad_1D[0x3];
	struct FHitResult                             SweepResult;
};
static_assert(alignof(WindField_OnBeginOverlap) == 0x000008, "Wrong alignment on WindField_OnBeginOverlap");
static_assert(sizeof(WindField_OnBeginOverlap) == 0x000100, "Wrong size on WindField_OnBeginOverlap");
static_assert(offsetof(WindField_OnBeginOverlap, OverlappedComponent) == 0x000000, "Member 'WindField_OnBeginOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(WindField_OnBeginOverlap, Other) == 0x000008, "Member 'WindField_OnBeginOverlap::Other' has a wrong offset!");
static_assert(offsetof(WindField_OnBeginOverlap, OtherComp) == 0x000010, "Member 'WindField_OnBeginOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(WindField_OnBeginOverlap, OtherBodyIndex) == 0x000018, "Member 'WindField_OnBeginOverlap::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(WindField_OnBeginOverlap, bFromSweep) == 0x00001C, "Member 'WindField_OnBeginOverlap::bFromSweep' has a wrong offset!");
static_assert(offsetof(WindField_OnBeginOverlap, SweepResult) == 0x000020, "Member 'WindField_OnBeginOverlap::SweepResult' has a wrong offset!");

struct WindField_OnEndOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 Other;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(WindField_OnEndOverlap) == 0x000008, "Wrong alignment on WindField_OnEndOverlap");
static_assert(sizeof(WindField_OnEndOverlap) == 0x000020, "Wrong size on WindField_OnEndOverlap");
static_assert(offsetof(WindField_OnEndOverlap, OverlappedComponent) == 0x000000, "Member 'WindField_OnEndOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(WindField_OnEndOverlap, Other) == 0x000008, "Member 'WindField_OnEndOverlap::Other' has a wrong offset!");
static_assert(offsetof(WindField_OnEndOverlap, OtherComp) == 0x000010, "Member 'WindField_OnEndOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(WindField_OnEndOverlap, OtherBodyIndex) == 0x000018, "Member 'WindField_OnEndOverlap::OtherBodyIndex' has a wrong offset!");

struct WindField_RemoveCollider final
{
public:
	class UShapeComponent*                        ShapeComponent;
};
static_assert(alignof(WindField_RemoveCollider) == 0x000008, "Wrong alignment on WindField_RemoveCollider");
static_assert(sizeof(WindField_RemoveCollider) == 0x000008, "Wrong size on WindField_RemoveCollider");
static_assert(offsetof(WindField_RemoveCollider, ShapeComponent) == 0x000000, "Member 'WindField_RemoveCollider::ShapeComponent' has a wrong offset!");

struct WindField_RemoveIgnoredActor final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(WindField_RemoveIgnoredActor) == 0x000008, "Wrong alignment on WindField_RemoveIgnoredActor");
static_assert(sizeof(WindField_RemoveIgnoredActor) == 0x000008, "Wrong size on WindField_RemoveIgnoredActor");
static_assert(offsetof(WindField_RemoveIgnoredActor, Actor) == 0x000000, "Member 'WindField_RemoveIgnoredActor::Actor' has a wrong offset!");

struct WindField_SetActive final
{
public:
	bool                                          bInIsActive;
};
static_assert(alignof(WindField_SetActive) == 0x000001, "Wrong alignment on WindField_SetActive");
static_assert(sizeof(WindField_SetActive) == 0x000001, "Wrong size on WindField_SetActive");
static_assert(offsetof(WindField_SetActive, bInIsActive) == 0x000000, "Member 'WindField_SetActive::bInIsActive' has a wrong offset!");

struct WindSplineComponent_GetClosestActiveLocations final
{
public:
	struct FVector                                InTargetLocation;
	bool                                          bIsClosestPointActive;
	uint8                                         Pad_19[0x7];
	struct FVector                                ClosestPointOnSpline;
	TArray<struct FVector>                        ClosestActiveLocations;
};
static_assert(alignof(WindSplineComponent_GetClosestActiveLocations) == 0x000008, "Wrong alignment on WindSplineComponent_GetClosestActiveLocations");
static_assert(sizeof(WindSplineComponent_GetClosestActiveLocations) == 0x000048, "Wrong size on WindSplineComponent_GetClosestActiveLocations");
static_assert(offsetof(WindSplineComponent_GetClosestActiveLocations, InTargetLocation) == 0x000000, "Member 'WindSplineComponent_GetClosestActiveLocations::InTargetLocation' has a wrong offset!");
static_assert(offsetof(WindSplineComponent_GetClosestActiveLocations, bIsClosestPointActive) == 0x000018, "Member 'WindSplineComponent_GetClosestActiveLocations::bIsClosestPointActive' has a wrong offset!");
static_assert(offsetof(WindSplineComponent_GetClosestActiveLocations, ClosestPointOnSpline) == 0x000020, "Member 'WindSplineComponent_GetClosestActiveLocations::ClosestPointOnSpline' has a wrong offset!");
static_assert(offsetof(WindSplineComponent_GetClosestActiveLocations, ClosestActiveLocations) == 0x000038, "Member 'WindSplineComponent_GetClosestActiveLocations::ClosestActiveLocations' has a wrong offset!");

struct WindSplineComponent_GetTargetingRadius final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(WindSplineComponent_GetTargetingRadius) == 0x000004, "Wrong alignment on WindSplineComponent_GetTargetingRadius");
static_assert(sizeof(WindSplineComponent_GetTargetingRadius) == 0x000004, "Wrong size on WindSplineComponent_GetTargetingRadius");
static_assert(offsetof(WindSplineComponent_GetTargetingRadius, ReturnValue) == 0x000000, "Member 'WindSplineComponent_GetTargetingRadius::ReturnValue' has a wrong offset!");

struct WindSplineComponent_GetWindDataAtLocation final
{
public:
	struct FVector                                InTargetLocation;
	struct FVector                                OutDirection;
	float                                         OutAttenuation;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(WindSplineComponent_GetWindDataAtLocation) == 0x000008, "Wrong alignment on WindSplineComponent_GetWindDataAtLocation");
static_assert(sizeof(WindSplineComponent_GetWindDataAtLocation) == 0x000038, "Wrong size on WindSplineComponent_GetWindDataAtLocation");
static_assert(offsetof(WindSplineComponent_GetWindDataAtLocation, InTargetLocation) == 0x000000, "Member 'WindSplineComponent_GetWindDataAtLocation::InTargetLocation' has a wrong offset!");
static_assert(offsetof(WindSplineComponent_GetWindDataAtLocation, OutDirection) == 0x000018, "Member 'WindSplineComponent_GetWindDataAtLocation::OutDirection' has a wrong offset!");
static_assert(offsetof(WindSplineComponent_GetWindDataAtLocation, OutAttenuation) == 0x000030, "Member 'WindSplineComponent_GetWindDataAtLocation::OutAttenuation' has a wrong offset!");

}
