#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FAnalyticsEventAttr final
{
public:
	class FString                                 Name;
	class FString                                 Value;
};
static_assert(alignof(FAnalyticsEventAttr) == 0x000008, "Wrong alignment on FAnalyticsEventAttr");
static_assert(sizeof(FAnalyticsEventAttr) == 0x000020, "Wrong size on FAnalyticsEventAttr");
static_assert(offsetof(FAnalyticsEventAttr, Name) == 0x000000, "Member 'FAnalyticsEventAttr::Name' has a wrong offset!");
static_assert(offsetof(FAnalyticsEventAttr, Value) == 0x000010, "Member 'FAnalyticsEventAttr::Value' has a wrong offset!");

}
