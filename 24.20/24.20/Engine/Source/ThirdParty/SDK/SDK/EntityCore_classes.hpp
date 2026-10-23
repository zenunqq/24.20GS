#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "EntityCore_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UEntityComponent : public UObject
{
public:
	uint8                                         Pad_28[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityComponent">();
	}
	static class UEntityComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityComponent>();
	}
};
static_assert(alignof(UEntityComponent) == 0x000008, "Wrong alignment on UEntityComponent");
static_assert(sizeof(UEntityComponent) == 0x000060, "Wrong size on UEntityComponent");

class UEntityDataBackedComponent : public UEntityComponent
{
public:
	uint8                                         Pad_60[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityDataBackedComponent">();
	}
	static class UEntityDataBackedComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityDataBackedComponent>();
	}
};
static_assert(alignof(UEntityDataBackedComponent) == 0x000008, "Wrong alignment on UEntityDataBackedComponent");
static_assert(sizeof(UEntityDataBackedComponent) == 0x000068, "Wrong size on UEntityDataBackedComponent");

class UEntityPositionComponent : public UEntityDataBackedComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityPositionComponent">();
	}
	static class UEntityPositionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityPositionComponent>();
	}
};
static_assert(alignof(UEntityPositionComponent) == 0x000008, "Wrong alignment on UEntityPositionComponent");
static_assert(sizeof(UEntityPositionComponent) == 0x000068, "Wrong size on UEntityPositionComponent");

class UEntityRotationComponent : public UEntityDataBackedComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityRotationComponent">();
	}
	static class UEntityRotationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityRotationComponent>();
	}
};
static_assert(alignof(UEntityRotationComponent) == 0x000008, "Wrong alignment on UEntityRotationComponent");
static_assert(sizeof(UEntityRotationComponent) == 0x000068, "Wrong size on UEntityRotationComponent");

class UEntityScaleComponent : public UEntityDataBackedComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityScaleComponent">();
	}
	static class UEntityScaleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityScaleComponent>();
	}
};
static_assert(alignof(UEntityScaleComponent) == 0x000008, "Wrong alignment on UEntityScaleComponent");
static_assert(sizeof(UEntityScaleComponent) == 0x000068, "Wrong size on UEntityScaleComponent");

class UEntityCoreDataBackedRelativePositionComponent final : public UEntityDataBackedComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityCoreDataBackedRelativePositionComponent">();
	}
	static class UEntityCoreDataBackedRelativePositionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityCoreDataBackedRelativePositionComponent>();
	}
};
static_assert(alignof(UEntityCoreDataBackedRelativePositionComponent) == 0x000008, "Wrong alignment on UEntityCoreDataBackedRelativePositionComponent");
static_assert(sizeof(UEntityCoreDataBackedRelativePositionComponent) == 0x000068, "Wrong size on UEntityCoreDataBackedRelativePositionComponent");

class UEntity final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class ULevel*                                 Level;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Entity">();
	}
	static class UEntity* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntity>();
	}
};
static_assert(alignof(UEntity) == 0x000008, "Wrong alignment on UEntity");
static_assert(sizeof(UEntity) == 0x000038, "Wrong size on UEntity");
static_assert(offsetof(UEntity, Level) == 0x000030, "Member 'UEntity::Level' has a wrong offset!");

class UEntityCoreSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x10];
	TMap<uint32, struct FEntityComponentContainer> ComponentMap;
	uint8                                         Pad_90[0x58];
	TArray<class UEntityComponent*>               ComponentArray;
	TMap<uint32, class UEntity*>                  Entities;
	uint8                                         Pad_148[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityCoreSubsystem">();
	}
	static class UEntityCoreSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityCoreSubsystem>();
	}
};
static_assert(alignof(UEntityCoreSubsystem) == 0x000008, "Wrong alignment on UEntityCoreSubsystem");
static_assert(sizeof(UEntityCoreSubsystem) == 0x0001A0, "Wrong size on UEntityCoreSubsystem");
static_assert(offsetof(UEntityCoreSubsystem, ComponentMap) == 0x000040, "Member 'UEntityCoreSubsystem::ComponentMap' has a wrong offset!");
static_assert(offsetof(UEntityCoreSubsystem, ComponentArray) == 0x0000E8, "Member 'UEntityCoreSubsystem::ComponentArray' has a wrong offset!");
static_assert(offsetof(UEntityCoreSubsystem, Entities) == 0x0000F8, "Member 'UEntityCoreSubsystem::Entities' has a wrong offset!");

class UEntityEnableableComponent : public UEntityComponent
{
public:
	uint8                                         IsEnabled : 1;
	uint8                                         LastIsEnabled : 1;
	uint8                                         Pad_61[0x1F];

public:
	void OnRep_Enabled();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityEnableableComponent">();
	}
	static class UEntityEnableableComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityEnableableComponent>();
	}
};
static_assert(alignof(UEntityEnableableComponent) == 0x000008, "Wrong alignment on UEntityEnableableComponent");
static_assert(sizeof(UEntityEnableableComponent) == 0x000080, "Wrong size on UEntityEnableableComponent");

class UEntityTickableComponent : public UEntityEnableableComponent
{
public:
	uint8                                         Pad_80[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityTickableComponent">();
	}
	static class UEntityTickableComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityTickableComponent>();
	}
};
static_assert(alignof(UEntityTickableComponent) == 0x000008, "Wrong alignment on UEntityTickableComponent");
static_assert(sizeof(UEntityTickableComponent) == 0x0000B8, "Wrong size on UEntityTickableComponent");

class UEntityScriptComponent : public UEntityTickableComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityScriptComponent">();
	}
	static class UEntityScriptComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityScriptComponent>();
	}
};
static_assert(alignof(UEntityScriptComponent) == 0x000008, "Wrong alignment on UEntityScriptComponent");
static_assert(sizeof(UEntityScriptComponent) == 0x0000B8, "Wrong size on UEntityScriptComponent");

}
