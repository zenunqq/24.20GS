#pragma once

#include "Basic.hpp"

#include "NetCore_structs.hpp"

namespace SDK
{

struct FMediaTimeEventItem final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	class FString                                 EventName;
	int64                                         Time;
	class FString                                 Parameter;
};
static_assert(alignof(FMediaTimeEventItem) == 0x000008, "Wrong alignment on FMediaTimeEventItem");
static_assert(sizeof(FMediaTimeEventItem) == 0x000038, "Wrong size on FMediaTimeEventItem");
static_assert(offsetof(FMediaTimeEventItem, EventName) == 0x000010, "Member 'FMediaTimeEventItem::EventName' has a wrong offset!");
static_assert(offsetof(FMediaTimeEventItem, Time) == 0x000020, "Member 'FMediaTimeEventItem::Time' has a wrong offset!");
static_assert(offsetof(FMediaTimeEventItem, Parameter) == 0x000028, "Member 'FMediaTimeEventItem::Parameter' has a wrong offset!");

struct FMediaTimeEventArray final : public FFastArraySerializer
{
public:
	TArray<struct FMediaTimeEventItem>            Items;
};
static_assert(alignof(FMediaTimeEventArray) == 0x000008, "Wrong alignment on FMediaTimeEventArray");
static_assert(sizeof(FMediaTimeEventArray) == 0x000118, "Wrong size on FMediaTimeEventArray");
static_assert(offsetof(FMediaTimeEventArray, Items) == 0x000108, "Member 'FMediaTimeEventArray::Items' has a wrong offset!");

}
