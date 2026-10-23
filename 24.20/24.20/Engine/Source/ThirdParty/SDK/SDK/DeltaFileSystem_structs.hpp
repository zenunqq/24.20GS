#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FDeltaAction
{
public:
	struct FGuid                                  ActorGUID;
	struct FDateTime                              CommitTime;
	uint32                                        DataHash;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FDeltaAction) == 0x000008, "Wrong alignment on FDeltaAction");
static_assert(sizeof(FDeltaAction) == 0x000020, "Wrong size on FDeltaAction");
static_assert(offsetof(FDeltaAction, ActorGUID) == 0x000000, "Member 'FDeltaAction::ActorGUID' has a wrong offset!");
static_assert(offsetof(FDeltaAction, CommitTime) == 0x000010, "Member 'FDeltaAction::CommitTime' has a wrong offset!");
static_assert(offsetof(FDeltaAction, DataHash) == 0x000018, "Member 'FDeltaAction::DataHash' has a wrong offset!");

struct FAddAction final : public FDeltaAction
{
public:
	TSoftClassPtr<class UClass>                   ActorClass;
	class FString                                 JsonStringObjectForPropertyData;
	uint8                                         Pad_58[0x8];
	struct FTransform                             Transform;
};
static_assert(alignof(FAddAction) == 0x000010, "Wrong alignment on FAddAction");
static_assert(sizeof(FAddAction) == 0x0000C0, "Wrong size on FAddAction");
static_assert(offsetof(FAddAction, ActorClass) == 0x000020, "Member 'FAddAction::ActorClass' has a wrong offset!");
static_assert(offsetof(FAddAction, JsonStringObjectForPropertyData) == 0x000048, "Member 'FAddAction::JsonStringObjectForPropertyData' has a wrong offset!");
static_assert(offsetof(FAddAction, Transform) == 0x000060, "Member 'FAddAction::Transform' has a wrong offset!");

struct FUpdateAction final : public FDeltaAction
{
public:
	class FString                                 JsonStringObjectForPropertyData;
};
static_assert(alignof(FUpdateAction) == 0x000008, "Wrong alignment on FUpdateAction");
static_assert(sizeof(FUpdateAction) == 0x000030, "Wrong size on FUpdateAction");
static_assert(offsetof(FUpdateAction, JsonStringObjectForPropertyData) == 0x000020, "Member 'FUpdateAction::JsonStringObjectForPropertyData' has a wrong offset!");

struct FDeleteAction final : public FDeltaAction
{
public:
	class FString                                 ActorName;
	struct FTransform                             Transform;
};
static_assert(alignof(FDeleteAction) == 0x000010, "Wrong alignment on FDeleteAction");
static_assert(sizeof(FDeleteAction) == 0x000090, "Wrong size on FDeleteAction");
static_assert(offsetof(FDeleteAction, ActorName) == 0x000020, "Member 'FDeleteAction::ActorName' has a wrong offset!");
static_assert(offsetof(FDeleteAction, Transform) == 0x000030, "Member 'FDeleteAction::Transform' has a wrong offset!");

struct alignas(0x10) FDeltaTrackingHandles final
{
public:
	uint8                                         Pad_0[0x50];
};
static_assert(alignof(FDeltaTrackingHandles) == 0x000010, "Wrong alignment on FDeltaTrackingHandles");
static_assert(sizeof(FDeltaTrackingHandles) == 0x000050, "Wrong size on FDeltaTrackingHandles");

}
