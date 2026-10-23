#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UBlueprintContextBase : public USubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlueprintContextBase">();
	}
	static class UBlueprintContextBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprintContextBase>();
	}
};
static_assert(alignof(UBlueprintContextBase) == 0x000008, "Wrong alignment on UBlueprintContextBase");
static_assert(sizeof(UBlueprintContextBase) == 0x000030, "Wrong size on UBlueprintContextBase");

class UBlueprintContextLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class USubsystem* GetContext(class UObject* ContextObject, TSubclassOf<class USubsystem> Class_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlueprintContextLibrary">();
	}
	static class UBlueprintContextLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprintContextLibrary>();
	}
};
static_assert(alignof(UBlueprintContextLibrary) == 0x000008, "Wrong alignment on UBlueprintContextLibrary");
static_assert(sizeof(UBlueprintContextLibrary) == 0x000028, "Wrong size on UBlueprintContextLibrary");

}
