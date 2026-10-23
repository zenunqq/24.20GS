#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UMidmatchRiftPoiCheatManager final : public UChildCheatManager
{
public:
	void MidmatchRiftPoiSpawnFurthestFromPawnLocation();
	void MidmatchRiftPoiSpawnNearestToPawnLocation();
	void SpawnMidmatchPoiFurthestLocation(const struct FVector& Location);
	void SpawnMidmatchPoiNearestLocation(const struct FVector& Location);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidmatchRiftPoiCheatManager">();
	}
	static class UMidmatchRiftPoiCheatManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMidmatchRiftPoiCheatManager>();
	}
};
static_assert(alignof(UMidmatchRiftPoiCheatManager) == 0x000008, "Wrong alignment on UMidmatchRiftPoiCheatManager");
static_assert(sizeof(UMidmatchRiftPoiCheatManager) == 0x000028, "Wrong size on UMidmatchRiftPoiCheatManager");

class AMidMatchRiftPoiManagerActor final : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	uint8                                         bCanBeMarked : 1;
	uint8                                         bBlockMarking : 1;
	uint8                                         Pad_291[0x7];
	struct FMarkedActorDisplayInfo                MarkerDisplay;
	struct FVector                                MarkerPositionOffset;
	bool                                          bDynamicLandBrushApplied;
	uint8                                         Pad_369[0x7];

public:
	void SetDynamicLandBrush(const struct FSlateBrush& LandIcon);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidMatchRiftPoiManagerActor">();
	}
	static class AMidMatchRiftPoiManagerActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMidMatchRiftPoiManagerActor>();
	}
};
static_assert(alignof(AMidMatchRiftPoiManagerActor) == 0x000008, "Wrong alignment on AMidMatchRiftPoiManagerActor");
static_assert(sizeof(AMidMatchRiftPoiManagerActor) == 0x000370, "Wrong size on AMidMatchRiftPoiManagerActor");
static_assert(offsetof(AMidMatchRiftPoiManagerActor, MarkerDisplay) == 0x000298, "Member 'AMidMatchRiftPoiManagerActor::MarkerDisplay' has a wrong offset!");
static_assert(offsetof(AMidMatchRiftPoiManagerActor, MarkerPositionOffset) == 0x000350, "Member 'AMidMatchRiftPoiManagerActor::MarkerPositionOffset' has a wrong offset!");
static_assert(offsetof(AMidMatchRiftPoiManagerActor, bDynamicLandBrushApplied) == 0x000368, "Member 'AMidMatchRiftPoiManagerActor::bDynamicLandBrushApplied' has a wrong offset!");

class AMidmatchRiftPoiSpawnIndicator final : public AActor
{
public:
	uint8                                         Pad_288[0x10];
	uint8                                         bCanBeMarked : 1;
	uint8                                         bBlockMarking : 1;
	uint8                                         Pad_299[0x7];
	struct FMarkedActorDisplayInfo                MarkerDisplay;
	struct FVector                                MarkerPositionOffset;

public:
	void TeleportVehicleActor(class AActor* VehicleActor, const struct FVector& TeleportLocation);

	bool IsActorInDataLayerInstance(const class AActor* Actor, const class UDataLayerInstance* DataLayerInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidmatchRiftPoiSpawnIndicator">();
	}
	static class AMidmatchRiftPoiSpawnIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMidmatchRiftPoiSpawnIndicator>();
	}
};
static_assert(alignof(AMidmatchRiftPoiSpawnIndicator) == 0x000008, "Wrong alignment on AMidmatchRiftPoiSpawnIndicator");
static_assert(sizeof(AMidmatchRiftPoiSpawnIndicator) == 0x000370, "Wrong size on AMidmatchRiftPoiSpawnIndicator");
static_assert(offsetof(AMidmatchRiftPoiSpawnIndicator, MarkerDisplay) == 0x0002A0, "Member 'AMidmatchRiftPoiSpawnIndicator::MarkerDisplay' has a wrong offset!");
static_assert(offsetof(AMidmatchRiftPoiSpawnIndicator, MarkerPositionOffset) == 0x000358, "Member 'AMidmatchRiftPoiSpawnIndicator::MarkerPositionOffset' has a wrong offset!");

}
