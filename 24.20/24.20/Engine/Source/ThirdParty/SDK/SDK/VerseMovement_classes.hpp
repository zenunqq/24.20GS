#pragma once

#include "Basic.hpp"

#include "VerseMovement_structs.hpp"
#include "Engine_classes.hpp"
#include "EntityActor_classes.hpp"

namespace SDK
{

class UNetPhysicsMoveConfig final : public UDataAsset
{
public:
	TArray<struct FNetPhysicsMoveConfigEntry>     Entries;
	struct FNetPhysicsMoveLimits                  Limits;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetPhysicsMoveConfig">();
	}
	static class UNetPhysicsMoveConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetPhysicsMoveConfig>();
	}
};
static_assert(alignof(UNetPhysicsMoveConfig) == 0x000008, "Wrong alignment on UNetPhysicsMoveConfig");
static_assert(sizeof(UNetPhysicsMoveConfig) == 0x0000C0, "Wrong size on UNetPhysicsMoveConfig");
static_assert(offsetof(UNetPhysicsMoveConfig, Entries) == 0x000030, "Member 'UNetPhysicsMoveConfig::Entries' has a wrong offset!");
static_assert(offsetof(UNetPhysicsMoveConfig, Limits) == 0x000040, "Member 'UNetPhysicsMoveConfig::Limits' has a wrong offset!");

class UNetPhysicsMoveComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x58];
	class UNetPhysicsMoveConfig*                  MoveConfig;
	struct FNetPhysicsMoveObject                  SimOutput;
	uint8                                         Pad_101[0x7];
	class APlayerController*                      CachedPC;
	uint8                                         Pad_110[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetPhysicsMoveComponent">();
	}
	static class UNetPhysicsMoveComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetPhysicsMoveComponent>();
	}
};
static_assert(alignof(UNetPhysicsMoveComponent) == 0x000008, "Wrong alignment on UNetPhysicsMoveComponent");
static_assert(sizeof(UNetPhysicsMoveComponent) == 0x000118, "Wrong size on UNetPhysicsMoveComponent");
static_assert(offsetof(UNetPhysicsMoveComponent, MoveConfig) == 0x0000F8, "Member 'UNetPhysicsMoveComponent::MoveConfig' has a wrong offset!");
static_assert(offsetof(UNetPhysicsMoveComponent, SimOutput) == 0x000100, "Member 'UNetPhysicsMoveComponent::SimOutput' has a wrong offset!");
static_assert(offsetof(UNetPhysicsMoveComponent, CachedPC) == 0x000108, "Member 'UNetPhysicsMoveComponent::CachedPC' has a wrong offset!");

class UVerseMovementComponentBase : public UEntityActorComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseMovementComponentBase">();
	}
	static class UVerseMovementComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseMovementComponentBase>();
	}
};
static_assert(alignof(UVerseMovementComponentBase) == 0x000008, "Wrong alignment on UVerseMovementComponentBase");
static_assert(sizeof(UVerseMovementComponentBase) == 0x000090, "Wrong size on UVerseMovementComponentBase");

}
