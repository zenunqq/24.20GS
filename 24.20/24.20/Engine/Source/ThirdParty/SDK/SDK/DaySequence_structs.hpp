#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EDayNightCycleMode : uint8
{
	Default                                  = 0,
	FixedTime                                = 1,
	StartAtSpecifiedTime                     = 2,
	RandomFixedTime                          = 3,
	RandomStartTime                          = 4,
	EDayNightCycleMode_MAX                   = 5,
};

struct FDaySequenceAssetData final
{
public:
	class UDaySequence*                           Sequence;
	int32                                         Bias;
	bool                                          bMuted;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FDaySequenceAssetData) == 0x000008, "Wrong alignment on FDaySequenceAssetData");
static_assert(sizeof(FDaySequenceAssetData) == 0x000010, "Wrong size on FDaySequenceAssetData");
static_assert(offsetof(FDaySequenceAssetData, Sequence) == 0x000000, "Member 'FDaySequenceAssetData::Sequence' has a wrong offset!");
static_assert(offsetof(FDaySequenceAssetData, Bias) == 0x000008, "Member 'FDaySequenceAssetData::Bias' has a wrong offset!");
static_assert(offsetof(FDaySequenceAssetData, bMuted) == 0x00000C, "Member 'FDaySequenceAssetData::bMuted' has a wrong offset!");

struct FDaySequenceBindingReference final
{
public:
	TSoftObjectPtr<class UObject>                 ExternalObjectPath;
	class FString                                 ObjectPath;
};
static_assert(alignof(FDaySequenceBindingReference) == 0x000008, "Wrong alignment on FDaySequenceBindingReference");
static_assert(sizeof(FDaySequenceBindingReference) == 0x000038, "Wrong size on FDaySequenceBindingReference");
static_assert(offsetof(FDaySequenceBindingReference, ExternalObjectPath) == 0x000000, "Member 'FDaySequenceBindingReference::ExternalObjectPath' has a wrong offset!");
static_assert(offsetof(FDaySequenceBindingReference, ObjectPath) == 0x000028, "Member 'FDaySequenceBindingReference::ObjectPath' has a wrong offset!");

struct FDaySequenceBindingReferenceArray final
{
public:
	TArray<struct FDaySequenceBindingReference>   References;
};
static_assert(alignof(FDaySequenceBindingReferenceArray) == 0x000008, "Wrong alignment on FDaySequenceBindingReferenceArray");
static_assert(sizeof(FDaySequenceBindingReferenceArray) == 0x000010, "Wrong size on FDaySequenceBindingReferenceArray");
static_assert(offsetof(FDaySequenceBindingReferenceArray, References) == 0x000000, "Member 'FDaySequenceBindingReferenceArray::References' has a wrong offset!");

struct FDaySequenceBindingReferences final
{
public:
	TMap<struct FGuid, struct FDaySequenceBindingReferenceArray> BindingIdToReferences;
	TSet<struct FGuid>                            AnimSequenceInstances;
};
static_assert(alignof(FDaySequenceBindingReferences) == 0x000008, "Wrong alignment on FDaySequenceBindingReferences");
static_assert(sizeof(FDaySequenceBindingReferences) == 0x0000A0, "Wrong size on FDaySequenceBindingReferences");
static_assert(offsetof(FDaySequenceBindingReferences, BindingIdToReferences) == 0x000000, "Member 'FDaySequenceBindingReferences::BindingIdToReferences' has a wrong offset!");
static_assert(offsetof(FDaySequenceBindingReferences, AnimSequenceInstances) == 0x000050, "Member 'FDaySequenceBindingReferences::AnimSequenceInstances' has a wrong offset!");

}
