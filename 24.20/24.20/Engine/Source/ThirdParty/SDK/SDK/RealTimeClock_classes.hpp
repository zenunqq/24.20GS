#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class URealTimeClockBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FDateTime AddTimeToDate(const struct FDateTime& DateTime, const struct FTimespan& Timespan);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RealTimeClockBlueprintLibrary">();
	}
	static class URealTimeClockBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<URealTimeClockBlueprintLibrary>();
	}
};
static_assert(alignof(URealTimeClockBlueprintLibrary) == 0x000008, "Wrong alignment on URealTimeClockBlueprintLibrary");
static_assert(sizeof(URealTimeClockBlueprintLibrary) == 0x000028, "Wrong size on URealTimeClockBlueprintLibrary");

}
