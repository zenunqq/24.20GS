#pragma once

#include "Basic.hpp"

#include "NetCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EThrowingToyItemRemovedReason : uint8
{
	None                                     = 0,
	ManuallyDropped                          = 1,
	DeviceForcedDropped                      = 2,
	DeviceForcedDeleted                      = 3,
	EThrowingToyItemRemovedReason_MAX        = 4,
};

struct FThrowingToyData final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	class AActor*                                 ThrowingToy;
	struct FGuid                                  WorldItemGuid;
};
static_assert(alignof(FThrowingToyData) == 0x000008, "Wrong alignment on FThrowingToyData");
static_assert(sizeof(FThrowingToyData) == 0x000028, "Wrong size on FThrowingToyData");
static_assert(offsetof(FThrowingToyData, ThrowingToy) == 0x000010, "Member 'FThrowingToyData::ThrowingToy' has a wrong offset!");
static_assert(offsetof(FThrowingToyData, WorldItemGuid) == 0x000018, "Member 'FThrowingToyData::WorldItemGuid' has a wrong offset!");

struct FThrowingToyDataArray final : public FFastArraySerializer
{
public:
	TArray<struct FThrowingToyData>               Entries;
};
static_assert(alignof(FThrowingToyDataArray) == 0x000008, "Wrong alignment on FThrowingToyDataArray");
static_assert(sizeof(FThrowingToyDataArray) == 0x000118, "Wrong size on FThrowingToyDataArray");
static_assert(offsetof(FThrowingToyDataArray, Entries) == 0x000108, "Member 'FThrowingToyDataArray::Entries' has a wrong offset!");

}
