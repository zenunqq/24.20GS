#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class IForwardingChannelFactory final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ForwardingChannelFactory">();
	}
	static class IForwardingChannelFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<IForwardingChannelFactory>();
	}
};
static_assert(alignof(IForwardingChannelFactory) == 0x000008, "Wrong alignment on IForwardingChannelFactory");
static_assert(sizeof(IForwardingChannelFactory) == 0x000028, "Wrong size on IForwardingChannelFactory");

class UForwardingChannelsSubsystem final : public UGameInstanceSubsystem
{
public:
	TArray<TScriptInterface<class IForwardingChannelFactory>> ForwardingChannelFactories;
	uint8                                         Pad_40[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ForwardingChannelsSubsystem">();
	}
	static class UForwardingChannelsSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UForwardingChannelsSubsystem>();
	}
};
static_assert(alignof(UForwardingChannelsSubsystem) == 0x000008, "Wrong alignment on UForwardingChannelsSubsystem");
static_assert(sizeof(UForwardingChannelsSubsystem) == 0x000098, "Wrong size on UForwardingChannelsSubsystem");
static_assert(offsetof(UForwardingChannelsSubsystem, ForwardingChannelFactories) == 0x000030, "Member 'UForwardingChannelsSubsystem::ForwardingChannelFactories' has a wrong offset!");

}
