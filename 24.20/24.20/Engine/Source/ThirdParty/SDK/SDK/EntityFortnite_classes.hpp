#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "EntityActor_classes.hpp"
#include "EntityCore_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class IEntityFortniteInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityFortniteInterface">();
	}
	static class IEntityFortniteInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IEntityFortniteInterface>();
	}
};
static_assert(alignof(IEntityFortniteInterface) == 0x000008, "Wrong alignment on IEntityFortniteInterface");
static_assert(sizeof(IEntityFortniteInterface) == 0x000028, "Wrong size on IEntityFortniteInterface");

class UEntityFortnitePlayerComponent final : public UEntityActorPlayerComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityFortnitePlayerComponent">();
	}
	static class UEntityFortnitePlayerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityFortnitePlayerComponent>();
	}
};
static_assert(alignof(UEntityFortnitePlayerComponent) == 0x000008, "Wrong alignment on UEntityFortnitePlayerComponent");
static_assert(sizeof(UEntityFortnitePlayerComponent) == 0x0000E8, "Wrong size on UEntityFortnitePlayerComponent");

class UEntityFortniteStormControllerComponent : public UEntityComponent
{
public:
	TSubclassOf<class AEntityFortniteStormSpawner> StormSpawnerClass;
	class AEntityFortniteStormSpawner*            StormSpawner;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityFortniteStormControllerComponent">();
	}
	static class UEntityFortniteStormControllerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityFortniteStormControllerComponent>();
	}
};
static_assert(alignof(UEntityFortniteStormControllerComponent) == 0x000008, "Wrong alignment on UEntityFortniteStormControllerComponent");
static_assert(sizeof(UEntityFortniteStormControllerComponent) == 0x000070, "Wrong size on UEntityFortniteStormControllerComponent");
static_assert(offsetof(UEntityFortniteStormControllerComponent, StormSpawnerClass) == 0x000060, "Member 'UEntityFortniteStormControllerComponent::StormSpawnerClass' has a wrong offset!");
static_assert(offsetof(UEntityFortniteStormControllerComponent, StormSpawner) == 0x000068, "Member 'UEntityFortniteStormControllerComponent::StormSpawner' has a wrong offset!");

class AEntityFortniteStormSpawner final : public AActor
{
public:
	class USceneComponent*                        SceneComponent;

public:
	void Pause();
	void Start(const float StartRadius, const float BoundsRadius, const TArray<struct FEntityFortniteStormPhase>& Phases);
	void Stop();

	bool Exists() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityFortniteStormSpawner">();
	}
	static class AEntityFortniteStormSpawner* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEntityFortniteStormSpawner>();
	}
};
static_assert(alignof(AEntityFortniteStormSpawner) == 0x000008, "Wrong alignment on AEntityFortniteStormSpawner");
static_assert(sizeof(AEntityFortniteStormSpawner) == 0x000290, "Wrong size on AEntityFortniteStormSpawner");
static_assert(offsetof(AEntityFortniteStormSpawner, SceneComponent) == 0x000288, "Member 'AEntityFortniteStormSpawner::SceneComponent' has a wrong offset!");

}
