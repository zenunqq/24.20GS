#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FOverlayItem final
{
public:
	struct FTimespan                              StartTime;
	struct FTimespan                              EndTime;
	class FString                                 Text;
	struct FVector2D                              Position;
};
static_assert(alignof(FOverlayItem) == 0x000008, "Wrong alignment on FOverlayItem");
static_assert(sizeof(FOverlayItem) == 0x000030, "Wrong size on FOverlayItem");
static_assert(offsetof(FOverlayItem, StartTime) == 0x000000, "Member 'FOverlayItem::StartTime' has a wrong offset!");
static_assert(offsetof(FOverlayItem, EndTime) == 0x000008, "Member 'FOverlayItem::EndTime' has a wrong offset!");
static_assert(offsetof(FOverlayItem, Text) == 0x000010, "Member 'FOverlayItem::Text' has a wrong offset!");
static_assert(offsetof(FOverlayItem, Position) == 0x000020, "Member 'FOverlayItem::Position' has a wrong offset!");

}
