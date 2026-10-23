#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class IGameplayEventLegacyBroadcast final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayEventLegacyBroadcast">();
	}
	static class IGameplayEventLegacyBroadcast* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGameplayEventLegacyBroadcast>();
	}
};
static_assert(alignof(IGameplayEventLegacyBroadcast) == 0x000008, "Wrong alignment on IGameplayEventLegacyBroadcast");
static_assert(sizeof(IGameplayEventLegacyBroadcast) == 0x000028, "Wrong size on IGameplayEventLegacyBroadcast");

class UGameplayEventDescriptorLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool BroadcastEvent(const struct FGameplayEventDescriptor& EventDescriptor, class UObject* EventContext, const int32& Event, class UClass* EventRouterScope, class AActor* RouterContextActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayEventDescriptorLibrary">();
	}
	static class UGameplayEventDescriptorLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayEventDescriptorLibrary>();
	}
};
static_assert(alignof(UGameplayEventDescriptorLibrary) == 0x000008, "Wrong alignment on UGameplayEventDescriptorLibrary");
static_assert(sizeof(UGameplayEventDescriptorLibrary) == 0x000028, "Wrong size on UGameplayEventDescriptorLibrary");

}
