#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UClientPilotBlackboard : public UObject
{
public:
	uint8                                         Pad_28[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClientPilotBlackboard">();
	}
	static class UClientPilotBlackboard* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClientPilotBlackboard>();
	}
};
static_assert(alignof(UClientPilotBlackboard) == 0x000008, "Wrong alignment on UClientPilotBlackboard");
static_assert(sizeof(UClientPilotBlackboard) == 0x000078, "Wrong size on UClientPilotBlackboard");

class UClientPilotBlackboardManager final : public UObject
{
public:
	class UClientPilotBlackboard*                 PilotBlackboard;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClientPilotBlackboardManager">();
	}
	static class UClientPilotBlackboardManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClientPilotBlackboardManager>();
	}
};
static_assert(alignof(UClientPilotBlackboardManager) == 0x000008, "Wrong alignment on UClientPilotBlackboardManager");
static_assert(sizeof(UClientPilotBlackboardManager) == 0x000030, "Wrong size on UClientPilotBlackboardManager");
static_assert(offsetof(UClientPilotBlackboardManager, PilotBlackboard) == 0x000028, "Member 'UClientPilotBlackboardManager::PilotBlackboard' has a wrong offset!");

class UClientPilotComponent : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClientPilotComponent">();
	}
	static class UClientPilotComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClientPilotComponent>();
	}
};
static_assert(alignof(UClientPilotComponent) == 0x000008, "Wrong alignment on UClientPilotComponent");
static_assert(sizeof(UClientPilotComponent) == 0x000028, "Wrong size on UClientPilotComponent");

}
