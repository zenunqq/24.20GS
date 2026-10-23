#pragma once

#include "Basic.hpp"

#include "ThrowingToyRuntime_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UThrowingToyTrackerComponent final : public UActorComponent
{
public:
	struct FThrowingToyDataArray                  ThrowingToysData;
	uint8                                         Pad_1B8[0x8];

public:
	void AddThrowingToy(class AActor* ThrowingToyActor, const struct FGuid& WorldItemGuid);
	class AActor* GetAndReleaseThrowingToy(const struct FGuid& WorldItemGuid);
	EThrowingToyItemRemovedReason GetRecentThrowingToyItemRemovedReason();
	class AActor* GetThrowingToy(const struct FGuid& WorldItemGuid);
	void SetRecentThrowingToyItemRemovedReason(EThrowingToyItemRemovedReason RemovedReason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ThrowingToyTrackerComponent">();
	}
	static class UThrowingToyTrackerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UThrowingToyTrackerComponent>();
	}
};
static_assert(alignof(UThrowingToyTrackerComponent) == 0x000008, "Wrong alignment on UThrowingToyTrackerComponent");
static_assert(sizeof(UThrowingToyTrackerComponent) == 0x0001C0, "Wrong size on UThrowingToyTrackerComponent");
static_assert(offsetof(UThrowingToyTrackerComponent, ThrowingToysData) == 0x0000A0, "Member 'UThrowingToyTrackerComponent::ThrowingToysData' has a wrong offset!");

}
