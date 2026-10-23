#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct CableComponent_SetAttachEndTo final
{
public:
	class AActor*                                 Actor;
	class FName                                   ComponentProperty;
	class FName                                   SocketName;
};
static_assert(alignof(CableComponent_SetAttachEndTo) == 0x000008, "Wrong alignment on CableComponent_SetAttachEndTo");
static_assert(sizeof(CableComponent_SetAttachEndTo) == 0x000010, "Wrong size on CableComponent_SetAttachEndTo");
static_assert(offsetof(CableComponent_SetAttachEndTo, Actor) == 0x000000, "Member 'CableComponent_SetAttachEndTo::Actor' has a wrong offset!");
static_assert(offsetof(CableComponent_SetAttachEndTo, ComponentProperty) == 0x000008, "Member 'CableComponent_SetAttachEndTo::ComponentProperty' has a wrong offset!");
static_assert(offsetof(CableComponent_SetAttachEndTo, SocketName) == 0x00000C, "Member 'CableComponent_SetAttachEndTo::SocketName' has a wrong offset!");

struct CableComponent_SetAttachEndToComponent final
{
public:
	class USceneComponent*                        Component;
	class FName                                   SocketName;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(CableComponent_SetAttachEndToComponent) == 0x000008, "Wrong alignment on CableComponent_SetAttachEndToComponent");
static_assert(sizeof(CableComponent_SetAttachEndToComponent) == 0x000010, "Wrong size on CableComponent_SetAttachEndToComponent");
static_assert(offsetof(CableComponent_SetAttachEndToComponent, Component) == 0x000000, "Member 'CableComponent_SetAttachEndToComponent::Component' has a wrong offset!");
static_assert(offsetof(CableComponent_SetAttachEndToComponent, SocketName) == 0x000008, "Member 'CableComponent_SetAttachEndToComponent::SocketName' has a wrong offset!");

struct CableComponent_GetAttachedActor final
{
public:
	class AActor*                                 ReturnValue;
};
static_assert(alignof(CableComponent_GetAttachedActor) == 0x000008, "Wrong alignment on CableComponent_GetAttachedActor");
static_assert(sizeof(CableComponent_GetAttachedActor) == 0x000008, "Wrong size on CableComponent_GetAttachedActor");
static_assert(offsetof(CableComponent_GetAttachedActor, ReturnValue) == 0x000000, "Member 'CableComponent_GetAttachedActor::ReturnValue' has a wrong offset!");

struct CableComponent_GetAttachedComponent final
{
public:
	class USceneComponent*                        ReturnValue;
};
static_assert(alignof(CableComponent_GetAttachedComponent) == 0x000008, "Wrong alignment on CableComponent_GetAttachedComponent");
static_assert(sizeof(CableComponent_GetAttachedComponent) == 0x000008, "Wrong size on CableComponent_GetAttachedComponent");
static_assert(offsetof(CableComponent_GetAttachedComponent, ReturnValue) == 0x000000, "Member 'CableComponent_GetAttachedComponent::ReturnValue' has a wrong offset!");

struct CableComponent_GetCableParticleLocations final
{
public:
	TArray<struct FVector>                        Locations;
};
static_assert(alignof(CableComponent_GetCableParticleLocations) == 0x000008, "Wrong alignment on CableComponent_GetCableParticleLocations");
static_assert(sizeof(CableComponent_GetCableParticleLocations) == 0x000010, "Wrong size on CableComponent_GetCableParticleLocations");
static_assert(offsetof(CableComponent_GetCableParticleLocations, Locations) == 0x000000, "Member 'CableComponent_GetCableParticleLocations::Locations' has a wrong offset!");

}
