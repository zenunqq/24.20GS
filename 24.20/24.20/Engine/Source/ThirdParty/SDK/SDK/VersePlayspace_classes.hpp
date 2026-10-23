#pragma once

#include "Basic.hpp"

#include "PlayspaceSystem_classes.hpp"

namespace SDK
{

class UPlayspaceComponentVerseWrapper final : public UPlayspaceComponent
{
public:
	uint8                                         Pad_A0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceComponentVerseWrapper">();
	}
	static class UPlayspaceComponentVerseWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceComponentVerseWrapper>();
	}
};
static_assert(alignof(UPlayspaceComponentVerseWrapper) == 0x000008, "Wrong alignment on UPlayspaceComponentVerseWrapper");
static_assert(sizeof(UPlayspaceComponentVerseWrapper) == 0x0000A8, "Wrong size on UPlayspaceComponentVerseWrapper");

class UPlayspaceConfigComponent final : public UPlayspaceComponent
{
public:
	TSubclassOf<class UEntityActorPlayerComponent> PlayerComponentClass;
	uint8                                         Pad_A8[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceConfigComponent">();
	}
	static class UPlayspaceConfigComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceConfigComponent>();
	}
};
static_assert(alignof(UPlayspaceConfigComponent) == 0x000008, "Wrong alignment on UPlayspaceConfigComponent");
static_assert(sizeof(UPlayspaceConfigComponent) == 0x0000C0, "Wrong size on UPlayspaceConfigComponent");
static_assert(offsetof(UPlayspaceConfigComponent, PlayerComponentClass) == 0x0000A0, "Member 'UPlayspaceConfigComponent::PlayerComponentClass' has a wrong offset!");

}
