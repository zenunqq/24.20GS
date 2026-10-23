#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UStormSicknessWarningWidgetBase final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2D0[0x40];
	struct FFortPrioritizedWidgetData             PrioritizationData;
	uint8                                         Pad_312[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StormSicknessWarningWidgetBase">();
	}
	static class UStormSicknessWarningWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStormSicknessWarningWidgetBase>();
	}
};
static_assert(alignof(UStormSicknessWarningWidgetBase) == 0x000008, "Wrong alignment on UStormSicknessWarningWidgetBase");
static_assert(sizeof(UStormSicknessWarningWidgetBase) == 0x000318, "Wrong size on UStormSicknessWarningWidgetBase");
static_assert(offsetof(UStormSicknessWarningWidgetBase, PrioritizationData) == 0x000310, "Member 'UStormSicknessWarningWidgetBase::PrioritizationData' has a wrong offset!");

}
