#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UStormCallerComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x20];

public:
	void ApplyPOINamesToDataRegistry(const class UPlaylistUserOptions* UserOptions, const struct FGameplayTag& GameplayTagForPOI, const class FText& MapCenterText, const class FText& RandomText);
	void ApplySavedPoiOptions(const TArray<class FString>& PoiSavedOptionKeys, const TArray<class FText>& PoiSavedOptionName, class UFortActorOptionsComponent* ToyOptionsComponent);
	class AFortPoiVolume* GetPoiVolumeFromOptionIndex(int32 OptionIndex);
	void SpawnInitialSafeZone();
	void UpdatePoiSavedOptions(TArray<class FString>& InOutPoiSavedOptionKeys, TArray<class FText>& InOutPoiSavedOptionNames, const class UPlaylistUserOptions* UserOptions, const struct FGameplayTag& GameplayTagForPOI);

	const TArray<struct FVector4> GetSafeZoneLocationBlockList() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StormCallerComponent">();
	}
	static class UStormCallerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStormCallerComponent>();
	}
};
static_assert(alignof(UStormCallerComponent) == 0x000008, "Wrong alignment on UStormCallerComponent");
static_assert(sizeof(UStormCallerComponent) == 0x0000C0, "Wrong size on UStormCallerComponent");

}
