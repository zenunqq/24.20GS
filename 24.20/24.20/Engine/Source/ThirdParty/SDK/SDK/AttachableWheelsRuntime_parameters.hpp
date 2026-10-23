#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AttachableWheelsRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct AttachableWheel_AttachInPlace final
{
public:
	class UPrimitiveComponent*                    InComponent;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(AttachableWheel_AttachInPlace) == 0x000008, "Wrong alignment on AttachableWheel_AttachInPlace");
static_assert(sizeof(AttachableWheel_AttachInPlace) == 0x000010, "Wrong size on AttachableWheel_AttachInPlace");
static_assert(offsetof(AttachableWheel_AttachInPlace, InComponent) == 0x000000, "Member 'AttachableWheel_AttachInPlace::InComponent' has a wrong offset!");
static_assert(offsetof(AttachableWheel_AttachInPlace, ReturnValue) == 0x000008, "Member 'AttachableWheel_AttachInPlace::ReturnValue' has a wrong offset!");

struct AttachableWheel_AttachTo final
{
public:
	class UPrimitiveComponent*                    InComponent;
	struct FVector                                WorldLocation;
	struct FVector                                AxleDirection;
	bool                                          ReturnValue;
	uint8                                         Pad_39[0x7];
};
static_assert(alignof(AttachableWheel_AttachTo) == 0x000008, "Wrong alignment on AttachableWheel_AttachTo");
static_assert(sizeof(AttachableWheel_AttachTo) == 0x000040, "Wrong size on AttachableWheel_AttachTo");
static_assert(offsetof(AttachableWheel_AttachTo, InComponent) == 0x000000, "Member 'AttachableWheel_AttachTo::InComponent' has a wrong offset!");
static_assert(offsetof(AttachableWheel_AttachTo, WorldLocation) == 0x000008, "Member 'AttachableWheel_AttachTo::WorldLocation' has a wrong offset!");
static_assert(offsetof(AttachableWheel_AttachTo, AxleDirection) == 0x000020, "Member 'AttachableWheel_AttachTo::AxleDirection' has a wrong offset!");
static_assert(offsetof(AttachableWheel_AttachTo, ReturnValue) == 0x000038, "Member 'AttachableWheel_AttachTo::ReturnValue' has a wrong offset!");

struct AttachableWheel_DetachFrom final
{
public:
	class UPrimitiveComponent*                    InComponent;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(AttachableWheel_DetachFrom) == 0x000008, "Wrong alignment on AttachableWheel_DetachFrom");
static_assert(sizeof(AttachableWheel_DetachFrom) == 0x000010, "Wrong size on AttachableWheel_DetachFrom");
static_assert(offsetof(AttachableWheel_DetachFrom, InComponent) == 0x000000, "Member 'AttachableWheel_DetachFrom::InComponent' has a wrong offset!");
static_assert(offsetof(AttachableWheel_DetachFrom, ReturnValue) == 0x000008, "Member 'AttachableWheel_DetachFrom::ReturnValue' has a wrong offset!");

struct AttachableWheel_OnAttached final
{
public:
	class UPrimitiveComponent*                    AttachedComponent;
};
static_assert(alignof(AttachableWheel_OnAttached) == 0x000008, "Wrong alignment on AttachableWheel_OnAttached");
static_assert(sizeof(AttachableWheel_OnAttached) == 0x000008, "Wrong size on AttachableWheel_OnAttached");
static_assert(offsetof(AttachableWheel_OnAttached, AttachedComponent) == 0x000000, "Member 'AttachableWheel_OnAttached::AttachedComponent' has a wrong offset!");

struct AttachableWheel_OnDetached final
{
public:
	class UPrimitiveComponent*                    DetachedComponent;
};
static_assert(alignof(AttachableWheel_OnDetached) == 0x000008, "Wrong alignment on AttachableWheel_OnDetached");
static_assert(sizeof(AttachableWheel_OnDetached) == 0x000008, "Wrong size on AttachableWheel_OnDetached");
static_assert(offsetof(AttachableWheel_OnDetached, DetachedComponent) == 0x000000, "Member 'AttachableWheel_OnDetached::DetachedComponent' has a wrong offset!");

struct AttachableWheel_OnPhysicsStateChanged final
{
public:
	class UPrimitiveComponent*                    PrimitiveComponent;
	EComponentPhysicsStateChange                  StateChange;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(AttachableWheel_OnPhysicsStateChanged) == 0x000008, "Wrong alignment on AttachableWheel_OnPhysicsStateChanged");
static_assert(sizeof(AttachableWheel_OnPhysicsStateChanged) == 0x000010, "Wrong size on AttachableWheel_OnPhysicsStateChanged");
static_assert(offsetof(AttachableWheel_OnPhysicsStateChanged, PrimitiveComponent) == 0x000000, "Member 'AttachableWheel_OnPhysicsStateChanged::PrimitiveComponent' has a wrong offset!");
static_assert(offsetof(AttachableWheel_OnPhysicsStateChanged, StateChange) == 0x000008, "Member 'AttachableWheel_OnPhysicsStateChanged::StateChange' has a wrong offset!");

struct AttachableWheel_OnRep_AttachData final
{
public:
	struct FAttachableWheelAttachData             AttachDataPrev;
};
static_assert(alignof(AttachableWheel_OnRep_AttachData) == 0x000008, "Wrong alignment on AttachableWheel_OnRep_AttachData");
static_assert(sizeof(AttachableWheel_OnRep_AttachData) == 0x000058, "Wrong size on AttachableWheel_OnRep_AttachData");
static_assert(offsetof(AttachableWheel_OnRep_AttachData, AttachDataPrev) == 0x000000, "Member 'AttachableWheel_OnRep_AttachData::AttachDataPrev' has a wrong offset!");

struct AttachableWheel_GetAttachedComponent final
{
public:
	class UPrimitiveComponent*                    ReturnValue;
};
static_assert(alignof(AttachableWheel_GetAttachedComponent) == 0x000008, "Wrong alignment on AttachableWheel_GetAttachedComponent");
static_assert(sizeof(AttachableWheel_GetAttachedComponent) == 0x000008, "Wrong size on AttachableWheel_GetAttachedComponent");
static_assert(offsetof(AttachableWheel_GetAttachedComponent, ReturnValue) == 0x000000, "Member 'AttachableWheel_GetAttachedComponent::ReturnValue' has a wrong offset!");

struct AttachableWheel_GetWorldSpaceAttachData final
{
public:
	struct FAttachableWheelAttachData             OutAttachData;
	class UPrimitiveComponent*                    PrimitiveComponent;
	class FName                                   BodyName;
	bool                                          ReturnValue;
	uint8                                         Pad_65[0x3];
};
static_assert(alignof(AttachableWheel_GetWorldSpaceAttachData) == 0x000008, "Wrong alignment on AttachableWheel_GetWorldSpaceAttachData");
static_assert(sizeof(AttachableWheel_GetWorldSpaceAttachData) == 0x000068, "Wrong size on AttachableWheel_GetWorldSpaceAttachData");
static_assert(offsetof(AttachableWheel_GetWorldSpaceAttachData, OutAttachData) == 0x000000, "Member 'AttachableWheel_GetWorldSpaceAttachData::OutAttachData' has a wrong offset!");
static_assert(offsetof(AttachableWheel_GetWorldSpaceAttachData, PrimitiveComponent) == 0x000058, "Member 'AttachableWheel_GetWorldSpaceAttachData::PrimitiveComponent' has a wrong offset!");
static_assert(offsetof(AttachableWheel_GetWorldSpaceAttachData, BodyName) == 0x000060, "Member 'AttachableWheel_GetWorldSpaceAttachData::BodyName' has a wrong offset!");
static_assert(offsetof(AttachableWheel_GetWorldSpaceAttachData, ReturnValue) == 0x000064, "Member 'AttachableWheel_GetWorldSpaceAttachData::ReturnValue' has a wrong offset!");

struct AttachableWheelsComponent_DetachAllWheels final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(AttachableWheelsComponent_DetachAllWheels) == 0x000004, "Wrong alignment on AttachableWheelsComponent_DetachAllWheels");
static_assert(sizeof(AttachableWheelsComponent_DetachAllWheels) == 0x000004, "Wrong size on AttachableWheelsComponent_DetachAllWheels");
static_assert(offsetof(AttachableWheelsComponent_DetachAllWheels, ReturnValue) == 0x000000, "Member 'AttachableWheelsComponent_DetachAllWheels::ReturnValue' has a wrong offset!");

struct AttachableWheelsComponent_HandleWheelAttached_Internal final
{
public:
	class AAttachableWheel*                       AttachedWheel;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(AttachableWheelsComponent_HandleWheelAttached_Internal) == 0x000008, "Wrong alignment on AttachableWheelsComponent_HandleWheelAttached_Internal");
static_assert(sizeof(AttachableWheelsComponent_HandleWheelAttached_Internal) == 0x000010, "Wrong size on AttachableWheelsComponent_HandleWheelAttached_Internal");
static_assert(offsetof(AttachableWheelsComponent_HandleWheelAttached_Internal, AttachedWheel) == 0x000000, "Member 'AttachableWheelsComponent_HandleWheelAttached_Internal::AttachedWheel' has a wrong offset!");
static_assert(offsetof(AttachableWheelsComponent_HandleWheelAttached_Internal, ReturnValue) == 0x000008, "Member 'AttachableWheelsComponent_HandleWheelAttached_Internal::ReturnValue' has a wrong offset!");

struct AttachableWheelsComponent_HandleWheelDetached_Internal final
{
public:
	class AAttachableWheel*                       AttachedWheel;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(AttachableWheelsComponent_HandleWheelDetached_Internal) == 0x000008, "Wrong alignment on AttachableWheelsComponent_HandleWheelDetached_Internal");
static_assert(sizeof(AttachableWheelsComponent_HandleWheelDetached_Internal) == 0x000010, "Wrong size on AttachableWheelsComponent_HandleWheelDetached_Internal");
static_assert(offsetof(AttachableWheelsComponent_HandleWheelDetached_Internal, AttachedWheel) == 0x000000, "Member 'AttachableWheelsComponent_HandleWheelDetached_Internal::AttachedWheel' has a wrong offset!");
static_assert(offsetof(AttachableWheelsComponent_HandleWheelDetached_Internal, ReturnValue) == 0x000008, "Member 'AttachableWheelsComponent_HandleWheelDetached_Internal::ReturnValue' has a wrong offset!");

struct AttachableWheelsComponent_OnWheelAttached final
{
public:
	class AAttachableWheel*                       AttachedWheel;
};
static_assert(alignof(AttachableWheelsComponent_OnWheelAttached) == 0x000008, "Wrong alignment on AttachableWheelsComponent_OnWheelAttached");
static_assert(sizeof(AttachableWheelsComponent_OnWheelAttached) == 0x000008, "Wrong size on AttachableWheelsComponent_OnWheelAttached");
static_assert(offsetof(AttachableWheelsComponent_OnWheelAttached, AttachedWheel) == 0x000000, "Member 'AttachableWheelsComponent_OnWheelAttached::AttachedWheel' has a wrong offset!");

struct AttachableWheelsComponent_OnWheelDetached final
{
public:
	class AAttachableWheel*                       AttachedWheel;
};
static_assert(alignof(AttachableWheelsComponent_OnWheelDetached) == 0x000008, "Wrong alignment on AttachableWheelsComponent_OnWheelDetached");
static_assert(sizeof(AttachableWheelsComponent_OnWheelDetached) == 0x000008, "Wrong size on AttachableWheelsComponent_OnWheelDetached");
static_assert(offsetof(AttachableWheelsComponent_OnWheelDetached, AttachedWheel) == 0x000000, "Member 'AttachableWheelsComponent_OnWheelDetached::AttachedWheel' has a wrong offset!");

struct AttachableWheelsComponent_GetAttachedWheelClosestOnAxis final
{
public:
	struct FVector                                Point;
	float                                         OutClosetDistanceToAxis;
	uint8                                         Pad_1C[0x4];
	struct FVector                                OutClosestPointOnAxis;
	struct FVector                                OutClosestAxis;
	class AAttachableWheel*                       ReturnValue;
};
static_assert(alignof(AttachableWheelsComponent_GetAttachedWheelClosestOnAxis) == 0x000008, "Wrong alignment on AttachableWheelsComponent_GetAttachedWheelClosestOnAxis");
static_assert(sizeof(AttachableWheelsComponent_GetAttachedWheelClosestOnAxis) == 0x000058, "Wrong size on AttachableWheelsComponent_GetAttachedWheelClosestOnAxis");
static_assert(offsetof(AttachableWheelsComponent_GetAttachedWheelClosestOnAxis, Point) == 0x000000, "Member 'AttachableWheelsComponent_GetAttachedWheelClosestOnAxis::Point' has a wrong offset!");
static_assert(offsetof(AttachableWheelsComponent_GetAttachedWheelClosestOnAxis, OutClosetDistanceToAxis) == 0x000018, "Member 'AttachableWheelsComponent_GetAttachedWheelClosestOnAxis::OutClosetDistanceToAxis' has a wrong offset!");
static_assert(offsetof(AttachableWheelsComponent_GetAttachedWheelClosestOnAxis, OutClosestPointOnAxis) == 0x000020, "Member 'AttachableWheelsComponent_GetAttachedWheelClosestOnAxis::OutClosestPointOnAxis' has a wrong offset!");
static_assert(offsetof(AttachableWheelsComponent_GetAttachedWheelClosestOnAxis, OutClosestAxis) == 0x000038, "Member 'AttachableWheelsComponent_GetAttachedWheelClosestOnAxis::OutClosestAxis' has a wrong offset!");
static_assert(offsetof(AttachableWheelsComponent_GetAttachedWheelClosestOnAxis, ReturnValue) == 0x000050, "Member 'AttachableWheelsComponent_GetAttachedWheelClosestOnAxis::ReturnValue' has a wrong offset!");

struct AttachableWheelsComponent_GetAttachedWheels final
{
public:
	TArray<class AAttachableWheel*>               ReturnValue;
};
static_assert(alignof(AttachableWheelsComponent_GetAttachedWheels) == 0x000008, "Wrong alignment on AttachableWheelsComponent_GetAttachedWheels");
static_assert(sizeof(AttachableWheelsComponent_GetAttachedWheels) == 0x000010, "Wrong size on AttachableWheelsComponent_GetAttachedWheels");
static_assert(offsetof(AttachableWheelsComponent_GetAttachedWheels, ReturnValue) == 0x000000, "Member 'AttachableWheelsComponent_GetAttachedWheels::ReturnValue' has a wrong offset!");

}
