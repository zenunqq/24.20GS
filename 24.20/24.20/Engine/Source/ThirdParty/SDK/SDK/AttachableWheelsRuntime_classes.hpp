#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AttachableWheelsRuntime_structs.hpp"

namespace SDK
{

class AAttachableWheel final : public AActor
{
public:
	class UStaticMeshComponent*                   WheelMeshComponent;
	struct FRotator                               WheelOrientation;
	float                                         WheelDistance;
	uint8                                         Pad_2AC[0x4];
	class UPhysicsConstraintComponent*            AxleConstraint;
	struct FAttachableWheelAttachData             AttachData;

public:
	bool AttachInPlace(class UPrimitiveComponent* InComponent);
	bool AttachTo(class UPrimitiveComponent* InComponent, const struct FVector& WorldLocation, const struct FVector& AxleDirection);
	void Detach();
	bool DetachFrom(class UPrimitiveComponent* InComponent);
	void OnAttached(class UPrimitiveComponent* AttachedComponent);
	void OnDetached(class UPrimitiveComponent* DetachedComponent);
	void OnPhysicsStateChanged(class UPrimitiveComponent* PrimitiveComponent, EComponentPhysicsStateChange StateChange);
	void OnRep_AttachData(const struct FAttachableWheelAttachData& AttachDataPrev);

	void DrawDebug() const;
	class UPrimitiveComponent* GetAttachedComponent() const;
	bool GetWorldSpaceAttachData(struct FAttachableWheelAttachData* OutAttachData, class UPrimitiveComponent* PrimitiveComponent, const class FName BodyName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AttachableWheel">();
	}
	static class AAttachableWheel* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAttachableWheel>();
	}
};
static_assert(alignof(AAttachableWheel) == 0x000008, "Wrong alignment on AAttachableWheel");
static_assert(sizeof(AAttachableWheel) == 0x000310, "Wrong size on AAttachableWheel");
static_assert(offsetof(AAttachableWheel, WheelMeshComponent) == 0x000288, "Member 'AAttachableWheel::WheelMeshComponent' has a wrong offset!");
static_assert(offsetof(AAttachableWheel, WheelOrientation) == 0x000290, "Member 'AAttachableWheel::WheelOrientation' has a wrong offset!");
static_assert(offsetof(AAttachableWheel, WheelDistance) == 0x0002A8, "Member 'AAttachableWheel::WheelDistance' has a wrong offset!");
static_assert(offsetof(AAttachableWheel, AxleConstraint) == 0x0002B0, "Member 'AAttachableWheel::AxleConstraint' has a wrong offset!");
static_assert(offsetof(AAttachableWheel, AttachData) == 0x0002B8, "Member 'AAttachableWheel::AttachData' has a wrong offset!");

class UAttachableWheelsComponent final : public UActorComponent
{
public:
	TSet<class AAttachableWheel*>                 AttachedWheels;

public:
	int32 DetachAllWheels();
	bool HandleWheelAttached_Internal(class AAttachableWheel* AttachedWheel);
	bool HandleWheelDetached_Internal(class AAttachableWheel* AttachedWheel);
	void OnWheelAttached(class AAttachableWheel* AttachedWheel);
	void OnWheelDetached(class AAttachableWheel* AttachedWheel);

	void DrawDebug() const;
	class AAttachableWheel* GetAttachedWheelClosestOnAxis(const struct FVector& Point, float* OutClosetDistanceToAxis, struct FVector* OutClosestPointOnAxis, struct FVector* OutClosestAxis) const;
	TArray<class AAttachableWheel*> GetAttachedWheels() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AttachableWheelsComponent">();
	}
	static class UAttachableWheelsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAttachableWheelsComponent>();
	}
};
static_assert(alignof(UAttachableWheelsComponent) == 0x000008, "Wrong alignment on UAttachableWheelsComponent");
static_assert(sizeof(UAttachableWheelsComponent) == 0x0000F0, "Wrong size on UAttachableWheelsComponent");
static_assert(offsetof(UAttachableWheelsComponent, AttachedWheels) == 0x0000A0, "Member 'UAttachableWheelsComponent::AttachedWheels' has a wrong offset!");

}
