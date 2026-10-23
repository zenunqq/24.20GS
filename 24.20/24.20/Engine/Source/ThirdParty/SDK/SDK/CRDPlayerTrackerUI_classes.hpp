#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCRDPlayerTrackerUIComponent final : public UActorComponent
{
public:
	class UCRDPlayerTrackerWidget*                SpawnedWidget;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CRDPlayerTrackerUIComponent">();
	}
	static class UCRDPlayerTrackerUIComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCRDPlayerTrackerUIComponent>();
	}
};
static_assert(alignof(UCRDPlayerTrackerUIComponent) == 0x000008, "Wrong alignment on UCRDPlayerTrackerUIComponent");
static_assert(sizeof(UCRDPlayerTrackerUIComponent) == 0x0000A8, "Wrong size on UCRDPlayerTrackerUIComponent");
static_assert(offsetof(UCRDPlayerTrackerUIComponent, SpawnedWidget) == 0x0000A0, "Member 'UCRDPlayerTrackerUIComponent::SpawnedWidget' has a wrong offset!");

class UCRDPlayerTrackerWidget final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2D0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CRDPlayerTrackerWidget">();
	}
	static class UCRDPlayerTrackerWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCRDPlayerTrackerWidget>();
	}
};
static_assert(alignof(UCRDPlayerTrackerWidget) == 0x000008, "Wrong alignment on UCRDPlayerTrackerWidget");
static_assert(sizeof(UCRDPlayerTrackerWidget) == 0x0002E0, "Wrong size on UCRDPlayerTrackerWidget");

}
