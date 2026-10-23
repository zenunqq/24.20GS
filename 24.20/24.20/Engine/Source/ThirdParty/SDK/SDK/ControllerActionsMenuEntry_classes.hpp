#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UControllerActionsMenuEntry_C final : public UFortControllerActionsMenuEntry
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ControllerActionsMenuEntry_C">();
	}
	static class UControllerActionsMenuEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControllerActionsMenuEntry_C>();
	}
};
static_assert(alignof(UControllerActionsMenuEntry_C) == 0x000010, "Wrong alignment on UControllerActionsMenuEntry_C");
static_assert(sizeof(UControllerActionsMenuEntry_C) == 0x001440, "Wrong size on UControllerActionsMenuEntry_C");

}
