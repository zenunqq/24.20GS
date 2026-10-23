#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UCRDPlayerTrackerComponent final : public UActorComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CRDPlayerTrackerComponent">();
	}
	static class UCRDPlayerTrackerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCRDPlayerTrackerComponent>();
	}
};
static_assert(alignof(UCRDPlayerTrackerComponent) == 0x000008, "Wrong alignment on UCRDPlayerTrackerComponent");
static_assert(sizeof(UCRDPlayerTrackerComponent) == 0x0000A0, "Wrong size on UCRDPlayerTrackerComponent");

class ACRDPlayerTrackerMarker final : public AActor
{
public:
	TSubclassOf<class UUserWidget>                WidgetClass;
	class UActorComponent*                        PlayerTrackerUIActorComponent;

public:
	class UUserWidget* CreatePlayerTrackerWidget(class AFortPlayerControllerGameplay* InFortPlayerControllerGameplay, class AFortPlayerStateAthena* AssociatedPSA);
	bool DestroyPlayerTrackerWidget(class AFortPlayerControllerGameplay* InFortPlayerControllerGameplay);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CRDPlayerTrackerMarker">();
	}
	static class ACRDPlayerTrackerMarker* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACRDPlayerTrackerMarker>();
	}
};
static_assert(alignof(ACRDPlayerTrackerMarker) == 0x000008, "Wrong alignment on ACRDPlayerTrackerMarker");
static_assert(sizeof(ACRDPlayerTrackerMarker) == 0x000298, "Wrong size on ACRDPlayerTrackerMarker");
static_assert(offsetof(ACRDPlayerTrackerMarker, WidgetClass) == 0x000288, "Member 'ACRDPlayerTrackerMarker::WidgetClass' has a wrong offset!");
static_assert(offsetof(ACRDPlayerTrackerMarker, PlayerTrackerUIActorComponent) == 0x000290, "Member 'ACRDPlayerTrackerMarker::PlayerTrackerUIActorComponent' has a wrong offset!");

}
