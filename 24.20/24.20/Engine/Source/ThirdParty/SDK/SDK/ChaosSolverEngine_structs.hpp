#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EClusterConnectionTypeEnum : uint8
{
	Chaos_PointImplicit                      = 0,
	Chaos_DelaunayTriangulation              = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_BoundsOverlapFilteredDelaunayTriangulation = 4,
	Chaos_None                               = 5,
	Chaos_EClsuterCreationParameters_Max     = 6,
	Chaos_MAX                                = 7,
};

struct FChaosPhysicsCollisionInfo final
{
public:
	class UPrimitiveComponent*                    Component;
	class UPrimitiveComponent*                    OtherComponent;
	struct FVector                                Location;
	struct FVector                                Normal;
	struct FVector                                AccumulatedImpulse;
	struct FVector                                Velocity;
	struct FVector                                OtherVelocity;
	struct FVector                                AngularVelocity;
	struct FVector                                OtherAngularVelocity;
	float                                         Mass;
	float                                         OtherMass;
};
static_assert(alignof(FChaosPhysicsCollisionInfo) == 0x000008, "Wrong alignment on FChaosPhysicsCollisionInfo");
static_assert(sizeof(FChaosPhysicsCollisionInfo) == 0x0000C0, "Wrong size on FChaosPhysicsCollisionInfo");
static_assert(offsetof(FChaosPhysicsCollisionInfo, Component) == 0x000000, "Member 'FChaosPhysicsCollisionInfo::Component' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherComponent) == 0x000008, "Member 'FChaosPhysicsCollisionInfo::OtherComponent' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, Location) == 0x000010, "Member 'FChaosPhysicsCollisionInfo::Location' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, Normal) == 0x000028, "Member 'FChaosPhysicsCollisionInfo::Normal' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, AccumulatedImpulse) == 0x000040, "Member 'FChaosPhysicsCollisionInfo::AccumulatedImpulse' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, Velocity) == 0x000058, "Member 'FChaosPhysicsCollisionInfo::Velocity' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherVelocity) == 0x000070, "Member 'FChaosPhysicsCollisionInfo::OtherVelocity' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, AngularVelocity) == 0x000088, "Member 'FChaosPhysicsCollisionInfo::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherAngularVelocity) == 0x0000A0, "Member 'FChaosPhysicsCollisionInfo::OtherAngularVelocity' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, Mass) == 0x0000B8, "Member 'FChaosPhysicsCollisionInfo::Mass' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherMass) == 0x0000BC, "Member 'FChaosPhysicsCollisionInfo::OtherMass' has a wrong offset!");

struct FChaosHandlerSet final
{
public:
	uint8                                         Pad_0[0x8];
	TSet<class UObject*>                          ChaosHandlers;
};
static_assert(alignof(FChaosHandlerSet) == 0x000008, "Wrong alignment on FChaosHandlerSet");
static_assert(sizeof(FChaosHandlerSet) == 0x000058, "Wrong size on FChaosHandlerSet");
static_assert(offsetof(FChaosHandlerSet, ChaosHandlers) == 0x000008, "Member 'FChaosHandlerSet::ChaosHandlers' has a wrong offset!");

struct FChaosRemovalEvent final
{
public:
	class UPrimitiveComponent*                    Component;
	struct FVector                                Location;
	float                                         Mass;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FChaosRemovalEvent) == 0x000008, "Wrong alignment on FChaosRemovalEvent");
static_assert(sizeof(FChaosRemovalEvent) == 0x000028, "Wrong size on FChaosRemovalEvent");
static_assert(offsetof(FChaosRemovalEvent, Component) == 0x000000, "Member 'FChaosRemovalEvent::Component' has a wrong offset!");
static_assert(offsetof(FChaosRemovalEvent, Location) == 0x000008, "Member 'FChaosRemovalEvent::Location' has a wrong offset!");
static_assert(offsetof(FChaosRemovalEvent, Mass) == 0x000020, "Member 'FChaosRemovalEvent::Mass' has a wrong offset!");

struct FChaosBreakEvent final
{
public:
	class UPrimitiveComponent*                    Component;
	struct FVector                                Location;
	struct FVector                                Velocity;
	struct FVector                                AngularVelocity;
	struct FVector                                Extents;
	float                                         Mass;
	int32                                         Index;
	bool                                          bFromCrumble;
	uint8                                         Pad_71[0x7];
};
static_assert(alignof(FChaosBreakEvent) == 0x000008, "Wrong alignment on FChaosBreakEvent");
static_assert(sizeof(FChaosBreakEvent) == 0x000078, "Wrong size on FChaosBreakEvent");
static_assert(offsetof(FChaosBreakEvent, Component) == 0x000000, "Member 'FChaosBreakEvent::Component' has a wrong offset!");
static_assert(offsetof(FChaosBreakEvent, Location) == 0x000008, "Member 'FChaosBreakEvent::Location' has a wrong offset!");
static_assert(offsetof(FChaosBreakEvent, Velocity) == 0x000020, "Member 'FChaosBreakEvent::Velocity' has a wrong offset!");
static_assert(offsetof(FChaosBreakEvent, AngularVelocity) == 0x000038, "Member 'FChaosBreakEvent::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FChaosBreakEvent, Extents) == 0x000050, "Member 'FChaosBreakEvent::Extents' has a wrong offset!");
static_assert(offsetof(FChaosBreakEvent, Mass) == 0x000068, "Member 'FChaosBreakEvent::Mass' has a wrong offset!");
static_assert(offsetof(FChaosBreakEvent, Index) == 0x00006C, "Member 'FChaosBreakEvent::Index' has a wrong offset!");
static_assert(offsetof(FChaosBreakEvent, bFromCrumble) == 0x000070, "Member 'FChaosBreakEvent::bFromCrumble' has a wrong offset!");

struct FChaosCrumblingEvent final
{
public:
	class UPrimitiveComponent*                    Component;
	struct FVector                                Location;
	struct FQuat                                  Orientation;
	struct FVector                                LinearVelocity;
	struct FVector                                AngularVelocity;
	float                                         Mass;
	uint8                                         Pad_74[0x4];
	struct FBox                                   LocalBounds;
	TArray<int32>                                 Children;
};
static_assert(alignof(FChaosCrumblingEvent) == 0x000010, "Wrong alignment on FChaosCrumblingEvent");
static_assert(sizeof(FChaosCrumblingEvent) == 0x0000C0, "Wrong size on FChaosCrumblingEvent");
static_assert(offsetof(FChaosCrumblingEvent, Component) == 0x000000, "Member 'FChaosCrumblingEvent::Component' has a wrong offset!");
static_assert(offsetof(FChaosCrumblingEvent, Location) == 0x000008, "Member 'FChaosCrumblingEvent::Location' has a wrong offset!");
static_assert(offsetof(FChaosCrumblingEvent, Orientation) == 0x000020, "Member 'FChaosCrumblingEvent::Orientation' has a wrong offset!");
static_assert(offsetof(FChaosCrumblingEvent, LinearVelocity) == 0x000040, "Member 'FChaosCrumblingEvent::LinearVelocity' has a wrong offset!");
static_assert(offsetof(FChaosCrumblingEvent, AngularVelocity) == 0x000058, "Member 'FChaosCrumblingEvent::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FChaosCrumblingEvent, Mass) == 0x000070, "Member 'FChaosCrumblingEvent::Mass' has a wrong offset!");
static_assert(offsetof(FChaosCrumblingEvent, LocalBounds) == 0x000078, "Member 'FChaosCrumblingEvent::LocalBounds' has a wrong offset!");
static_assert(offsetof(FChaosCrumblingEvent, Children) == 0x0000B0, "Member 'FChaosCrumblingEvent::Children' has a wrong offset!");

struct alignas(0x10) FBreakEventCallbackWrapper final
{
public:
	uint8                                         Pad_0[0x40];
};
static_assert(alignof(FBreakEventCallbackWrapper) == 0x000010, "Wrong alignment on FBreakEventCallbackWrapper");
static_assert(sizeof(FBreakEventCallbackWrapper) == 0x000040, "Wrong size on FBreakEventCallbackWrapper");

struct alignas(0x10) FRemovalEventCallbackWrapper final
{
public:
	uint8                                         Pad_0[0x40];
};
static_assert(alignof(FRemovalEventCallbackWrapper) == 0x000010, "Wrong alignment on FRemovalEventCallbackWrapper");
static_assert(sizeof(FRemovalEventCallbackWrapper) == 0x000040, "Wrong size on FRemovalEventCallbackWrapper");

struct alignas(0x10) FCrumblingEventCallbackWrapper final
{
public:
	uint8                                         Pad_0[0x40];
};
static_assert(alignof(FCrumblingEventCallbackWrapper) == 0x000010, "Wrong alignment on FCrumblingEventCallbackWrapper");
static_assert(sizeof(FCrumblingEventCallbackWrapper) == 0x000040, "Wrong size on FCrumblingEventCallbackWrapper");

struct FChaosDebugSubstepControl final
{
public:
	bool                                          bPause;
	bool                                          bSubstep;
	bool                                          bStep;
};
static_assert(alignof(FChaosDebugSubstepControl) == 0x000001, "Wrong alignment on FChaosDebugSubstepControl");
static_assert(sizeof(FChaosDebugSubstepControl) == 0x000003, "Wrong size on FChaosDebugSubstepControl");
static_assert(offsetof(FChaosDebugSubstepControl, bPause) == 0x000000, "Member 'FChaosDebugSubstepControl::bPause' has a wrong offset!");
static_assert(offsetof(FChaosDebugSubstepControl, bSubstep) == 0x000001, "Member 'FChaosDebugSubstepControl::bSubstep' has a wrong offset!");
static_assert(offsetof(FChaosDebugSubstepControl, bStep) == 0x000002, "Member 'FChaosDebugSubstepControl::bStep' has a wrong offset!");

}
