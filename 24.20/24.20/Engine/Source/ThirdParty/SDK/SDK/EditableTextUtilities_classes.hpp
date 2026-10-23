#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UEditableTextUtilities_C final : public UBlueprintFunctionLibrary
{
public:
	static void CheckIfNeedsTrimming(const class FText& Text, int32 Limit, class UObject* __WorldContext, class FText* TrimmedText, bool* WasTrimmed);
	static void LimitTextLength(class UWidget* EditableTextWidget, int32 Length, class UObject* __WorldContext, bool* WasTrimmed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EditableTextUtilities_C">();
	}
	static class UEditableTextUtilities_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableTextUtilities_C>();
	}
};
static_assert(alignof(UEditableTextUtilities_C) == 0x000008, "Wrong alignment on UEditableTextUtilities_C");
static_assert(sizeof(UEditableTextUtilities_C) == 0x000028, "Wrong size on UEditableTextUtilities_C");

}
