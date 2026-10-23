#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct EntityDynamicActivationComponent_OnEnabledChanged final
{
public:
	bool                                          bIsEnabled;
};
static_assert(alignof(EntityDynamicActivationComponent_OnEnabledChanged) == 0x000001, "Wrong alignment on EntityDynamicActivationComponent_OnEnabledChanged");
static_assert(sizeof(EntityDynamicActivationComponent_OnEnabledChanged) == 0x000001, "Wrong size on EntityDynamicActivationComponent_OnEnabledChanged");
static_assert(offsetof(EntityDynamicActivationComponent_OnEnabledChanged, bIsEnabled) == 0x000000, "Member 'EntityDynamicActivationComponent_OnEnabledChanged::bIsEnabled' has a wrong offset!");

struct EntityActorCollisionComponent_OnEnabledChanged final
{
public:
	bool                                          bIsEnabled;
};
static_assert(alignof(EntityActorCollisionComponent_OnEnabledChanged) == 0x000001, "Wrong alignment on EntityActorCollisionComponent_OnEnabledChanged");
static_assert(sizeof(EntityActorCollisionComponent_OnEnabledChanged) == 0x000001, "Wrong size on EntityActorCollisionComponent_OnEnabledChanged");
static_assert(offsetof(EntityActorCollisionComponent_OnEnabledChanged, bIsEnabled) == 0x000000, "Member 'EntityActorCollisionComponent_OnEnabledChanged::bIsEnabled' has a wrong offset!");

struct EntityActorCollisionComponent_OnNativeComponentBeginOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	bool                                          bFromSweep;
	uint8                                         Pad_1D[0x3];
	struct FHitResult                             SweepResult;
};
static_assert(alignof(EntityActorCollisionComponent_OnNativeComponentBeginOverlap) == 0x000008, "Wrong alignment on EntityActorCollisionComponent_OnNativeComponentBeginOverlap");
static_assert(sizeof(EntityActorCollisionComponent_OnNativeComponentBeginOverlap) == 0x000100, "Wrong size on EntityActorCollisionComponent_OnNativeComponentBeginOverlap");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentBeginOverlap, OverlappedComponent) == 0x000000, "Member 'EntityActorCollisionComponent_OnNativeComponentBeginOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentBeginOverlap, OtherActor) == 0x000008, "Member 'EntityActorCollisionComponent_OnNativeComponentBeginOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentBeginOverlap, OtherComp) == 0x000010, "Member 'EntityActorCollisionComponent_OnNativeComponentBeginOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentBeginOverlap, OtherBodyIndex) == 0x000018, "Member 'EntityActorCollisionComponent_OnNativeComponentBeginOverlap::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentBeginOverlap, bFromSweep) == 0x00001C, "Member 'EntityActorCollisionComponent_OnNativeComponentBeginOverlap::bFromSweep' has a wrong offset!");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentBeginOverlap, SweepResult) == 0x000020, "Member 'EntityActorCollisionComponent_OnNativeComponentBeginOverlap::SweepResult' has a wrong offset!");

struct EntityActorCollisionComponent_OnNativeComponentEndOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(EntityActorCollisionComponent_OnNativeComponentEndOverlap) == 0x000008, "Wrong alignment on EntityActorCollisionComponent_OnNativeComponentEndOverlap");
static_assert(sizeof(EntityActorCollisionComponent_OnNativeComponentEndOverlap) == 0x000020, "Wrong size on EntityActorCollisionComponent_OnNativeComponentEndOverlap");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentEndOverlap, OverlappedComponent) == 0x000000, "Member 'EntityActorCollisionComponent_OnNativeComponentEndOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentEndOverlap, OtherActor) == 0x000008, "Member 'EntityActorCollisionComponent_OnNativeComponentEndOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentEndOverlap, OtherComp) == 0x000010, "Member 'EntityActorCollisionComponent_OnNativeComponentEndOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentEndOverlap, OtherBodyIndex) == 0x000018, "Member 'EntityActorCollisionComponent_OnNativeComponentEndOverlap::OtherBodyIndex' has a wrong offset!");

struct EntityActorCollisionComponent_OnNativeComponentHit final
{
public:
	class UPrimitiveComponent*                    HitComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	struct FVector                                NormalImpulse;
	struct FHitResult                             Hit;
};
static_assert(alignof(EntityActorCollisionComponent_OnNativeComponentHit) == 0x000008, "Wrong alignment on EntityActorCollisionComponent_OnNativeComponentHit");
static_assert(sizeof(EntityActorCollisionComponent_OnNativeComponentHit) == 0x000110, "Wrong size on EntityActorCollisionComponent_OnNativeComponentHit");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentHit, HitComponent) == 0x000000, "Member 'EntityActorCollisionComponent_OnNativeComponentHit::HitComponent' has a wrong offset!");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentHit, OtherActor) == 0x000008, "Member 'EntityActorCollisionComponent_OnNativeComponentHit::OtherActor' has a wrong offset!");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentHit, OtherComp) == 0x000010, "Member 'EntityActorCollisionComponent_OnNativeComponentHit::OtherComp' has a wrong offset!");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentHit, NormalImpulse) == 0x000018, "Member 'EntityActorCollisionComponent_OnNativeComponentHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(EntityActorCollisionComponent_OnNativeComponentHit, Hit) == 0x000030, "Member 'EntityActorCollisionComponent_OnNativeComponentHit::Hit' has a wrong offset!");

struct EntityActorTextDisplayComponent_GetHorizontalAlignment final
{
public:
	EHorizTextAligment                            ReturnValue;
};
static_assert(alignof(EntityActorTextDisplayComponent_GetHorizontalAlignment) == 0x000001, "Wrong alignment on EntityActorTextDisplayComponent_GetHorizontalAlignment");
static_assert(sizeof(EntityActorTextDisplayComponent_GetHorizontalAlignment) == 0x000001, "Wrong size on EntityActorTextDisplayComponent_GetHorizontalAlignment");
static_assert(offsetof(EntityActorTextDisplayComponent_GetHorizontalAlignment, ReturnValue) == 0x000000, "Member 'EntityActorTextDisplayComponent_GetHorizontalAlignment::ReturnValue' has a wrong offset!");

struct EntityActorTextDisplayComponent_GetRelativeLocation final
{
public:
	struct FVector                                ReturnValue;
};
static_assert(alignof(EntityActorTextDisplayComponent_GetRelativeLocation) == 0x000008, "Wrong alignment on EntityActorTextDisplayComponent_GetRelativeLocation");
static_assert(sizeof(EntityActorTextDisplayComponent_GetRelativeLocation) == 0x000018, "Wrong size on EntityActorTextDisplayComponent_GetRelativeLocation");
static_assert(offsetof(EntityActorTextDisplayComponent_GetRelativeLocation, ReturnValue) == 0x000000, "Member 'EntityActorTextDisplayComponent_GetRelativeLocation::ReturnValue' has a wrong offset!");

struct EntityActorTextDisplayComponent_GetVerticalAlignment final
{
public:
	EVerticalTextAligment                         ReturnValue;
};
static_assert(alignof(EntityActorTextDisplayComponent_GetVerticalAlignment) == 0x000001, "Wrong alignment on EntityActorTextDisplayComponent_GetVerticalAlignment");
static_assert(sizeof(EntityActorTextDisplayComponent_GetVerticalAlignment) == 0x000001, "Wrong size on EntityActorTextDisplayComponent_GetVerticalAlignment");
static_assert(offsetof(EntityActorTextDisplayComponent_GetVerticalAlignment, ReturnValue) == 0x000000, "Member 'EntityActorTextDisplayComponent_GetVerticalAlignment::ReturnValue' has a wrong offset!");

struct EntityActorTextDisplayComponent_SetHorizontalAlignment final
{
public:
	EHorizTextAligment                            Value;
};
static_assert(alignof(EntityActorTextDisplayComponent_SetHorizontalAlignment) == 0x000001, "Wrong alignment on EntityActorTextDisplayComponent_SetHorizontalAlignment");
static_assert(sizeof(EntityActorTextDisplayComponent_SetHorizontalAlignment) == 0x000001, "Wrong size on EntityActorTextDisplayComponent_SetHorizontalAlignment");
static_assert(offsetof(EntityActorTextDisplayComponent_SetHorizontalAlignment, Value) == 0x000000, "Member 'EntityActorTextDisplayComponent_SetHorizontalAlignment::Value' has a wrong offset!");

struct EntityActorTextDisplayComponent_SetRelativeLocation final
{
public:
	struct FVector                                RelativeLocation;
};
static_assert(alignof(EntityActorTextDisplayComponent_SetRelativeLocation) == 0x000008, "Wrong alignment on EntityActorTextDisplayComponent_SetRelativeLocation");
static_assert(sizeof(EntityActorTextDisplayComponent_SetRelativeLocation) == 0x000018, "Wrong size on EntityActorTextDisplayComponent_SetRelativeLocation");
static_assert(offsetof(EntityActorTextDisplayComponent_SetRelativeLocation, RelativeLocation) == 0x000000, "Member 'EntityActorTextDisplayComponent_SetRelativeLocation::RelativeLocation' has a wrong offset!");

struct EntityActorTextDisplayComponent_SetRelativeRotation final
{
public:
	struct FRotator                               RelativeRotation;
};
static_assert(alignof(EntityActorTextDisplayComponent_SetRelativeRotation) == 0x000008, "Wrong alignment on EntityActorTextDisplayComponent_SetRelativeRotation");
static_assert(sizeof(EntityActorTextDisplayComponent_SetRelativeRotation) == 0x000018, "Wrong size on EntityActorTextDisplayComponent_SetRelativeRotation");
static_assert(offsetof(EntityActorTextDisplayComponent_SetRelativeRotation, RelativeRotation) == 0x000000, "Member 'EntityActorTextDisplayComponent_SetRelativeRotation::RelativeRotation' has a wrong offset!");

struct EntityActorTextDisplayComponent_SetRelativeScale final
{
public:
	struct FVector                                RelativeScale;
};
static_assert(alignof(EntityActorTextDisplayComponent_SetRelativeScale) == 0x000008, "Wrong alignment on EntityActorTextDisplayComponent_SetRelativeScale");
static_assert(sizeof(EntityActorTextDisplayComponent_SetRelativeScale) == 0x000018, "Wrong size on EntityActorTextDisplayComponent_SetRelativeScale");
static_assert(offsetof(EntityActorTextDisplayComponent_SetRelativeScale, RelativeScale) == 0x000000, "Member 'EntityActorTextDisplayComponent_SetRelativeScale::RelativeScale' has a wrong offset!");

struct EntityActorTextDisplayComponent_SetText final
{
public:
	class FText                                   Text;
};
static_assert(alignof(EntityActorTextDisplayComponent_SetText) == 0x000008, "Wrong alignment on EntityActorTextDisplayComponent_SetText");
static_assert(sizeof(EntityActorTextDisplayComponent_SetText) == 0x000018, "Wrong size on EntityActorTextDisplayComponent_SetText");
static_assert(offsetof(EntityActorTextDisplayComponent_SetText, Text) == 0x000000, "Member 'EntityActorTextDisplayComponent_SetText::Text' has a wrong offset!");

struct EntityActorTextDisplayComponent_SetTextRenderColor final
{
public:
	struct FColor                                 Value;
};
static_assert(alignof(EntityActorTextDisplayComponent_SetTextRenderColor) == 0x000004, "Wrong alignment on EntityActorTextDisplayComponent_SetTextRenderColor");
static_assert(sizeof(EntityActorTextDisplayComponent_SetTextRenderColor) == 0x000004, "Wrong size on EntityActorTextDisplayComponent_SetTextRenderColor");
static_assert(offsetof(EntityActorTextDisplayComponent_SetTextRenderColor, Value) == 0x000000, "Member 'EntityActorTextDisplayComponent_SetTextRenderColor::Value' has a wrong offset!");

struct EntityActorTextDisplayComponent_SetVerticalAlignment final
{
public:
	EVerticalTextAligment                         Value;
};
static_assert(alignof(EntityActorTextDisplayComponent_SetVerticalAlignment) == 0x000001, "Wrong alignment on EntityActorTextDisplayComponent_SetVerticalAlignment");
static_assert(sizeof(EntityActorTextDisplayComponent_SetVerticalAlignment) == 0x000001, "Wrong size on EntityActorTextDisplayComponent_SetVerticalAlignment");
static_assert(offsetof(EntityActorTextDisplayComponent_SetVerticalAlignment, Value) == 0x000000, "Member 'EntityActorTextDisplayComponent_SetVerticalAlignment::Value' has a wrong offset!");

struct EntityActorTextDisplayComponent_SetWorldSize final
{
public:
	float                                         Value;
};
static_assert(alignof(EntityActorTextDisplayComponent_SetWorldSize) == 0x000004, "Wrong alignment on EntityActorTextDisplayComponent_SetWorldSize");
static_assert(sizeof(EntityActorTextDisplayComponent_SetWorldSize) == 0x000004, "Wrong size on EntityActorTextDisplayComponent_SetWorldSize");
static_assert(offsetof(EntityActorTextDisplayComponent_SetWorldSize, Value) == 0x000000, "Member 'EntityActorTextDisplayComponent_SetWorldSize::Value' has a wrong offset!");

struct EntityActorTextDisplayComponent_GetText final
{
public:
	class FText                                   ReturnValue;
};
static_assert(alignof(EntityActorTextDisplayComponent_GetText) == 0x000008, "Wrong alignment on EntityActorTextDisplayComponent_GetText");
static_assert(sizeof(EntityActorTextDisplayComponent_GetText) == 0x000018, "Wrong size on EntityActorTextDisplayComponent_GetText");
static_assert(offsetof(EntityActorTextDisplayComponent_GetText, ReturnValue) == 0x000000, "Member 'EntityActorTextDisplayComponent_GetText::ReturnValue' has a wrong offset!");

struct EntityActorTextDisplayComponent_GetTextRenderColor final
{
public:
	struct FColor                                 ReturnValue;
};
static_assert(alignof(EntityActorTextDisplayComponent_GetTextRenderColor) == 0x000004, "Wrong alignment on EntityActorTextDisplayComponent_GetTextRenderColor");
static_assert(sizeof(EntityActorTextDisplayComponent_GetTextRenderColor) == 0x000004, "Wrong size on EntityActorTextDisplayComponent_GetTextRenderColor");
static_assert(offsetof(EntityActorTextDisplayComponent_GetTextRenderColor, ReturnValue) == 0x000000, "Member 'EntityActorTextDisplayComponent_GetTextRenderColor::ReturnValue' has a wrong offset!");

struct EntityActorTextDisplayComponent_GetWorldSize final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(EntityActorTextDisplayComponent_GetWorldSize) == 0x000004, "Wrong alignment on EntityActorTextDisplayComponent_GetWorldSize");
static_assert(sizeof(EntityActorTextDisplayComponent_GetWorldSize) == 0x000004, "Wrong size on EntityActorTextDisplayComponent_GetWorldSize");
static_assert(offsetof(EntityActorTextDisplayComponent_GetWorldSize, ReturnValue) == 0x000000, "Member 'EntityActorTextDisplayComponent_GetWorldSize::ReturnValue' has a wrong offset!");

struct EntityActorPositionComponent_OnRootComponentChanged final
{
public:
	class USceneComponent*                        InRootComponent;
	bool                                          bIsRootComponent;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(EntityActorPositionComponent_OnRootComponentChanged) == 0x000008, "Wrong alignment on EntityActorPositionComponent_OnRootComponentChanged");
static_assert(sizeof(EntityActorPositionComponent_OnRootComponentChanged) == 0x000010, "Wrong size on EntityActorPositionComponent_OnRootComponentChanged");
static_assert(offsetof(EntityActorPositionComponent_OnRootComponentChanged, InRootComponent) == 0x000000, "Member 'EntityActorPositionComponent_OnRootComponentChanged::InRootComponent' has a wrong offset!");
static_assert(offsetof(EntityActorPositionComponent_OnRootComponentChanged, bIsRootComponent) == 0x000008, "Member 'EntityActorPositionComponent_OnRootComponentChanged::bIsRootComponent' has a wrong offset!");

struct EntityActorRotationComponent_OnRootComponentChanged final
{
public:
	class USceneComponent*                        InRootComponent;
	bool                                          bIsRootComponent;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(EntityActorRotationComponent_OnRootComponentChanged) == 0x000008, "Wrong alignment on EntityActorRotationComponent_OnRootComponentChanged");
static_assert(sizeof(EntityActorRotationComponent_OnRootComponentChanged) == 0x000010, "Wrong size on EntityActorRotationComponent_OnRootComponentChanged");
static_assert(offsetof(EntityActorRotationComponent_OnRootComponentChanged, InRootComponent) == 0x000000, "Member 'EntityActorRotationComponent_OnRootComponentChanged::InRootComponent' has a wrong offset!");
static_assert(offsetof(EntityActorRotationComponent_OnRootComponentChanged, bIsRootComponent) == 0x000008, "Member 'EntityActorRotationComponent_OnRootComponentChanged::bIsRootComponent' has a wrong offset!");

struct EntityActorScaleComponent_OnRootComponentChanged final
{
public:
	class USceneComponent*                        InRootComponent;
	bool                                          bIsRootComponent;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(EntityActorScaleComponent_OnRootComponentChanged) == 0x000008, "Wrong alignment on EntityActorScaleComponent_OnRootComponentChanged");
static_assert(sizeof(EntityActorScaleComponent_OnRootComponentChanged) == 0x000010, "Wrong size on EntityActorScaleComponent_OnRootComponentChanged");
static_assert(offsetof(EntityActorScaleComponent_OnRootComponentChanged, InRootComponent) == 0x000000, "Member 'EntityActorScaleComponent_OnRootComponentChanged::InRootComponent' has a wrong offset!");
static_assert(offsetof(EntityActorScaleComponent_OnRootComponentChanged, bIsRootComponent) == 0x000008, "Member 'EntityActorScaleComponent_OnRootComponentChanged::bIsRootComponent' has a wrong offset!");

}
