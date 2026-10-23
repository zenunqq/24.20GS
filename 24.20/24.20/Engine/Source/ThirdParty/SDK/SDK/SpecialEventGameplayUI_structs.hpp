#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FCinematicWidgetData final
{
public:
	class FName                                   WidgetEntryName;
	uint8                                         Pad_4[0x4];
	TSubclassOf<class UCommonActivatableWidget>   WidgetClass;
};
static_assert(alignof(FCinematicWidgetData) == 0x000008, "Wrong alignment on FCinematicWidgetData");
static_assert(sizeof(FCinematicWidgetData) == 0x000010, "Wrong size on FCinematicWidgetData");
static_assert(offsetof(FCinematicWidgetData, WidgetEntryName) == 0x000000, "Member 'FCinematicWidgetData::WidgetEntryName' has a wrong offset!");
static_assert(offsetof(FCinematicWidgetData, WidgetClass) == 0x000008, "Member 'FCinematicWidgetData::WidgetClass' has a wrong offset!");

}
