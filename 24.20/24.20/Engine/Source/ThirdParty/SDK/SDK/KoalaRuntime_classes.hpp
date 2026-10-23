#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UFortContextualTutorial_GameplayEventKoala final : public UFortContextualTutorial_GameplayEvent
{
public:
	uint8                                         Pad_170[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortContextualTutorial_GameplayEventKoala">();
	}
	static class UFortContextualTutorial_GameplayEventKoala* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortContextualTutorial_GameplayEventKoala>();
	}
};
static_assert(alignof(UFortContextualTutorial_GameplayEventKoala) == 0x000008, "Wrong alignment on UFortContextualTutorial_GameplayEventKoala");
static_assert(sizeof(UFortContextualTutorial_GameplayEventKoala) == 0x000178, "Wrong size on UFortContextualTutorial_GameplayEventKoala");

class UKoalaAnalytics final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KoalaAnalytics">();
	}
	static class UKoalaAnalytics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKoalaAnalytics>();
	}
};
static_assert(alignof(UKoalaAnalytics) == 0x000008, "Wrong alignment on UKoalaAnalytics");
static_assert(sizeof(UKoalaAnalytics) == 0x000028, "Wrong size on UKoalaAnalytics");

class UKoalaGlobals final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KoalaGlobals">();
	}
	static class UKoalaGlobals* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKoalaGlobals>();
	}
};
static_assert(alignof(UKoalaGlobals) == 0x000008, "Wrong alignment on UKoalaGlobals");
static_assert(sizeof(UKoalaGlobals) == 0x000028, "Wrong size on UKoalaGlobals");

}
