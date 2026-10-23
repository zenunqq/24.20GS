#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UArrowCursorWidget_C final : public UUserWidget
{
public:
	struct FSlateBrush GetBackground_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ArrowCursorWidget_C">();
	}
	static class UArrowCursorWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArrowCursorWidget_C>();
	}
};
static_assert(alignof(UArrowCursorWidget_C) == 0x000008, "Wrong alignment on UArrowCursorWidget_C");
static_assert(sizeof(UArrowCursorWidget_C) == 0x000268, "Wrong size on UArrowCursorWidget_C");

}
