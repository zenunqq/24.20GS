#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FCDCInt final
{
public:
	int32                                         Data;
};
static_assert(alignof(FCDCInt) == 0x000004, "Wrong alignment on FCDCInt");
static_assert(sizeof(FCDCInt) == 0x000004, "Wrong size on FCDCInt");
static_assert(offsetof(FCDCInt, Data) == 0x000000, "Member 'FCDCInt::Data' has a wrong offset!");

struct FCDCStringFloatArrayMap final
{
public:
	TMap<class FString, struct FVector>           Data;
};
static_assert(alignof(FCDCStringFloatArrayMap) == 0x000008, "Wrong alignment on FCDCStringFloatArrayMap");
static_assert(sizeof(FCDCStringFloatArrayMap) == 0x000050, "Wrong size on FCDCStringFloatArrayMap");
static_assert(offsetof(FCDCStringFloatArrayMap, Data) == 0x000000, "Member 'FCDCStringFloatArrayMap::Data' has a wrong offset!");

struct FCDCLargeInt final
{
public:
	int64                                         Data;
};
static_assert(alignof(FCDCLargeInt) == 0x000008, "Wrong alignment on FCDCLargeInt");
static_assert(sizeof(FCDCLargeInt) == 0x000008, "Wrong size on FCDCLargeInt");
static_assert(offsetof(FCDCLargeInt, Data) == 0x000000, "Member 'FCDCLargeInt::Data' has a wrong offset!");

struct FCDCFloatArray final
{
public:
	TArray<float>                                 Data;
};
static_assert(alignof(FCDCFloatArray) == 0x000008, "Wrong alignment on FCDCFloatArray");
static_assert(sizeof(FCDCFloatArray) == 0x000010, "Wrong size on FCDCFloatArray");
static_assert(offsetof(FCDCFloatArray, Data) == 0x000000, "Member 'FCDCFloatArray::Data' has a wrong offset!");

struct FCDCStringStringMap final
{
public:
	TMap<class FString, class FString>            Data;
	TMap<class FString, int32>                    ExtraData;
};
static_assert(alignof(FCDCStringStringMap) == 0x000008, "Wrong alignment on FCDCStringStringMap");
static_assert(sizeof(FCDCStringStringMap) == 0x0000A0, "Wrong size on FCDCStringStringMap");
static_assert(offsetof(FCDCStringStringMap, Data) == 0x000000, "Member 'FCDCStringStringMap::Data' has a wrong offset!");
static_assert(offsetof(FCDCStringStringMap, ExtraData) == 0x000050, "Member 'FCDCStringStringMap::ExtraData' has a wrong offset!");

struct FCDCStringFloatMap final
{
public:
	TMap<class FString, float>                    Data;
};
static_assert(alignof(FCDCStringFloatMap) == 0x000008, "Wrong alignment on FCDCStringFloatMap");
static_assert(sizeof(FCDCStringFloatMap) == 0x000050, "Wrong size on FCDCStringFloatMap");
static_assert(offsetof(FCDCStringFloatMap, Data) == 0x000000, "Member 'FCDCStringFloatMap::Data' has a wrong offset!");

struct FCDCString final
{
public:
	class FString                                 Data;
};
static_assert(alignof(FCDCString) == 0x000008, "Wrong alignment on FCDCString");
static_assert(sizeof(FCDCString) == 0x000010, "Wrong size on FCDCString");
static_assert(offsetof(FCDCString, Data) == 0x000000, "Member 'FCDCString::Data' has a wrong offset!");

struct FCDCStringIntMap final
{
public:
	TMap<class FString, int32>                    Data;
};
static_assert(alignof(FCDCStringIntMap) == 0x000008, "Wrong alignment on FCDCStringIntMap");
static_assert(sizeof(FCDCStringIntMap) == 0x000050, "Wrong size on FCDCStringIntMap");
static_assert(offsetof(FCDCStringIntMap, Data) == 0x000000, "Member 'FCDCStringIntMap::Data' has a wrong offset!");

struct FCDCStringArray final
{
public:
	TArray<class FString>                         Data;
	int32                                         ExtraData;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FCDCStringArray) == 0x000008, "Wrong alignment on FCDCStringArray");
static_assert(sizeof(FCDCStringArray) == 0x000018, "Wrong size on FCDCStringArray");
static_assert(offsetof(FCDCStringArray, Data) == 0x000000, "Member 'FCDCStringArray::Data' has a wrong offset!");
static_assert(offsetof(FCDCStringArray, ExtraData) == 0x000010, "Member 'FCDCStringArray::ExtraData' has a wrong offset!");

struct FCreativeDataChannelEvent final
{
public:
	class FName                                   EventName;
	class FName                                   Parameters;
	class FName                                   TriggerCondition;
};
static_assert(alignof(FCreativeDataChannelEvent) == 0x000004, "Wrong alignment on FCreativeDataChannelEvent");
static_assert(sizeof(FCreativeDataChannelEvent) == 0x00000C, "Wrong size on FCreativeDataChannelEvent");
static_assert(offsetof(FCreativeDataChannelEvent, EventName) == 0x000000, "Member 'FCreativeDataChannelEvent::EventName' has a wrong offset!");
static_assert(offsetof(FCreativeDataChannelEvent, Parameters) == 0x000004, "Member 'FCreativeDataChannelEvent::Parameters' has a wrong offset!");
static_assert(offsetof(FCreativeDataChannelEvent, TriggerCondition) == 0x000008, "Member 'FCreativeDataChannelEvent::TriggerCondition' has a wrong offset!");

struct FCreativeDataChannelEvents final
{
public:
	TArray<struct FCreativeDataChannelEvent>      Events;
};
static_assert(alignof(FCreativeDataChannelEvents) == 0x000008, "Wrong alignment on FCreativeDataChannelEvents");
static_assert(sizeof(FCreativeDataChannelEvents) == 0x000010, "Wrong size on FCreativeDataChannelEvents");
static_assert(offsetof(FCreativeDataChannelEvents, Events) == 0x000000, "Member 'FCreativeDataChannelEvents::Events' has a wrong offset!");

}
