#pragma once

#include "Basic.hpp"

#include "EntityActor_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UVersePlayerUIEntityComponent : public UEntityActorPlayerComponent
{
public:
	class UUIFrameworkPlayerComponent*            UIFComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VersePlayerUIEntityComponent">();
	}
	static class UVersePlayerUIEntityComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVersePlayerUIEntityComponent>();
	}
};
static_assert(alignof(UVersePlayerUIEntityComponent) == 0x000008, "Wrong alignment on UVersePlayerUIEntityComponent");
static_assert(sizeof(UVersePlayerUIEntityComponent) == 0x0000F0, "Wrong size on UVersePlayerUIEntityComponent");
static_assert(offsetof(UVersePlayerUIEntityComponent, UIFComponent) == 0x0000E8, "Member 'UVersePlayerUIEntityComponent::UIFComponent' has a wrong offset!");

class UVerseWidgetNativeBase : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UUIFrameworkWidget*                     UIFWidgetInstance;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseWidgetNativeBase">();
	}
	static class UVerseWidgetNativeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseWidgetNativeBase>();
	}
};
static_assert(alignof(UVerseWidgetNativeBase) == 0x000008, "Wrong alignment on UVerseWidgetNativeBase");
static_assert(sizeof(UVerseWidgetNativeBase) == 0x000038, "Wrong size on UVerseWidgetNativeBase");
static_assert(offsetof(UVerseWidgetNativeBase, UIFWidgetInstance) == 0x000030, "Member 'UVerseWidgetNativeBase::UIFWidgetInstance' has a wrong offset!");

class UVerseUIWorldSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0xA0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseUIWorldSubsystem">();
	}
	static class UVerseUIWorldSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseUIWorldSubsystem>();
	}
};
static_assert(alignof(UVerseUIWorldSubsystem) == 0x000008, "Wrong alignment on UVerseUIWorldSubsystem");
static_assert(sizeof(UVerseUIWorldSubsystem) == 0x0000D0, "Wrong size on UVerseUIWorldSubsystem");

}
