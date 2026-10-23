#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct RealTimeClockBlueprintLibrary_AddTimeToDate final
{
public:
	struct FDateTime                              DateTime;
	struct FTimespan                              Timespan;
	struct FDateTime                              ReturnValue;
};
static_assert(alignof(RealTimeClockBlueprintLibrary_AddTimeToDate) == 0x000008, "Wrong alignment on RealTimeClockBlueprintLibrary_AddTimeToDate");
static_assert(sizeof(RealTimeClockBlueprintLibrary_AddTimeToDate) == 0x000018, "Wrong size on RealTimeClockBlueprintLibrary_AddTimeToDate");
static_assert(offsetof(RealTimeClockBlueprintLibrary_AddTimeToDate, DateTime) == 0x000000, "Member 'RealTimeClockBlueprintLibrary_AddTimeToDate::DateTime' has a wrong offset!");
static_assert(offsetof(RealTimeClockBlueprintLibrary_AddTimeToDate, Timespan) == 0x000008, "Member 'RealTimeClockBlueprintLibrary_AddTimeToDate::Timespan' has a wrong offset!");
static_assert(offsetof(RealTimeClockBlueprintLibrary_AddTimeToDate, ReturnValue) == 0x000010, "Member 'RealTimeClockBlueprintLibrary_AddTimeToDate::ReturnValue' has a wrong offset!");

}
