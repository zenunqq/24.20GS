#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UInvisibleCursorWidget_C final : public UUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InvisibleCursorWidget_C">();
	}
	static class UInvisibleCursorWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInvisibleCursorWidget_C>();
	}
};
static_assert(alignof(UInvisibleCursorWidget_C) == 0x000008, "Wrong alignment on UInvisibleCursorWidget_C");
static_assert(sizeof(UInvisibleCursorWidget_C) == 0x000268, "Wrong size on UInvisibleCursorWidget_C");

}
