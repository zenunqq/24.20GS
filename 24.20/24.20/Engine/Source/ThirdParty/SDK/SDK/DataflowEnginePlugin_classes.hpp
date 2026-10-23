#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class ADataflowActor final : public AActor
{
public:
	class UDataflowComponent*                     DataflowComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataflowActor">();
	}
	static class ADataflowActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADataflowActor>();
	}
};
static_assert(alignof(ADataflowActor) == 0x000008, "Wrong alignment on ADataflowActor");
static_assert(sizeof(ADataflowActor) == 0x000290, "Wrong size on ADataflowActor");
static_assert(offsetof(ADataflowActor, DataflowComponent) == 0x000288, "Member 'ADataflowActor::DataflowComponent' has a wrong offset!");

class UDataflowComponent final : public UPrimitiveComponent
{
public:
	uint8                                         Pad_568[0x148];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataflowComponent">();
	}
	static class UDataflowComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflowComponent>();
	}
};
static_assert(alignof(UDataflowComponent) == 0x000010, "Wrong alignment on UDataflowComponent");
static_assert(sizeof(UDataflowComponent) == 0x0006B0, "Wrong size on UDataflowComponent");

}
