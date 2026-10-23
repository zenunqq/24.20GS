#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UHandlerComponentFactory : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HandlerComponentFactory">();
	}
	static class UHandlerComponentFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHandlerComponentFactory>();
	}
};
static_assert(alignof(UHandlerComponentFactory) == 0x000008, "Wrong alignment on UHandlerComponentFactory");
static_assert(sizeof(UHandlerComponentFactory) == 0x000028, "Wrong size on UHandlerComponentFactory");

class UPacketHandlerProfileConfig final : public UObject
{
public:
	TArray<class FString>                         Components;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PacketHandlerProfileConfig">();
	}
	static class UPacketHandlerProfileConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPacketHandlerProfileConfig>();
	}
};
static_assert(alignof(UPacketHandlerProfileConfig) == 0x000008, "Wrong alignment on UPacketHandlerProfileConfig");
static_assert(sizeof(UPacketHandlerProfileConfig) == 0x000038, "Wrong size on UPacketHandlerProfileConfig");
static_assert(offsetof(UPacketHandlerProfileConfig, Components) == 0x000028, "Member 'UPacketHandlerProfileConfig::Components' has a wrong offset!");

}
