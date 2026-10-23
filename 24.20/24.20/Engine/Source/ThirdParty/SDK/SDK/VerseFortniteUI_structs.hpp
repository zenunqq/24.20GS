#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FVerseFortniteUIPresenterElement final
{
public:
	class UVerseFortniteUINamedSlot*              SlotWidget;
	class UWidget*                                UMGWidget;
	uint8                                         Pad_10[0x10];
};
static_assert(alignof(FVerseFortniteUIPresenterElement) == 0x000008, "Wrong alignment on FVerseFortniteUIPresenterElement");
static_assert(sizeof(FVerseFortniteUIPresenterElement) == 0x000020, "Wrong size on FVerseFortniteUIPresenterElement");
static_assert(offsetof(FVerseFortniteUIPresenterElement, SlotWidget) == 0x000000, "Member 'FVerseFortniteUIPresenterElement::SlotWidget' has a wrong offset!");
static_assert(offsetof(FVerseFortniteUIPresenterElement, UMGWidget) == 0x000008, "Member 'FVerseFortniteUIPresenterElement::UMGWidget' has a wrong offset!");

struct FVerseFortniteUIFrameworkSliderValue final
{
public:
	float                                         Value;
	int32                                         SentID;
};
static_assert(alignof(FVerseFortniteUIFrameworkSliderValue) == 0x000004, "Wrong alignment on FVerseFortniteUIFrameworkSliderValue");
static_assert(sizeof(FVerseFortniteUIFrameworkSliderValue) == 0x000008, "Wrong size on FVerseFortniteUIFrameworkSliderValue");
static_assert(offsetof(FVerseFortniteUIFrameworkSliderValue, Value) == 0x000000, "Member 'FVerseFortniteUIFrameworkSliderValue::Value' has a wrong offset!");
static_assert(offsetof(FVerseFortniteUIFrameworkSliderValue, SentID) == 0x000004, "Member 'FVerseFortniteUIFrameworkSliderValue::SentID' has a wrong offset!");

}
