#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UVerseAgent : public UObject
{
public:
	TWeakObjectPtr<class AController>             Controller;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseAgent">();
	}
	static class UVerseAgent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseAgent>();
	}
};
static_assert(alignof(UVerseAgent) == 0x000008, "Wrong alignment on UVerseAgent");
static_assert(sizeof(UVerseAgent) == 0x000030, "Wrong size on UVerseAgent");
static_assert(offsetof(UVerseAgent, Controller) == 0x000028, "Member 'UVerseAgent::Controller' has a wrong offset!");

class UVerseTeam : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseTeam">();
	}
	static class UVerseTeam* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseTeam>();
	}
};
static_assert(alignof(UVerseTeam) == 0x000008, "Wrong alignment on UVerseTeam");
static_assert(sizeof(UVerseTeam) == 0x000028, "Wrong size on UVerseTeam");

class UVerseSimulationSubsystem final : public UWorldSubsystem
{
public:
	TMap<TWeakObjectPtr<class AController>, class UVerseAgent*> TrackedAgents;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseSimulationSubsystem">();
	}
	static class UVerseSimulationSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseSimulationSubsystem>();
	}
};
static_assert(alignof(UVerseSimulationSubsystem) == 0x000008, "Wrong alignment on UVerseSimulationSubsystem");
static_assert(sizeof(UVerseSimulationSubsystem) == 0x000080, "Wrong size on UVerseSimulationSubsystem");
static_assert(offsetof(UVerseSimulationSubsystem, TrackedAgents) == 0x000030, "Member 'UVerseSimulationSubsystem::TrackedAgents' has a wrong offset!");

}
