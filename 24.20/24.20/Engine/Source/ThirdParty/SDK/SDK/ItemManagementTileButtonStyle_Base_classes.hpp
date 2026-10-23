#pragma once

#include "Basic.hpp"

#include "ButtonStyle_Base_classes.hpp"

namespace SDK
{

class UItemManagementTileButtonStyle_Base_C final : public UButtonStyle_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemManagementTileButtonStyle-Base_C">();
	}
	static class UItemManagementTileButtonStyle_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemManagementTileButtonStyle_Base_C>();
	}
};
static_assert(alignof(UItemManagementTileButtonStyle_Base_C) == 0x000010, "Wrong alignment on UItemManagementTileButtonStyle_Base_C");
static_assert(sizeof(UItemManagementTileButtonStyle_Base_C) == 0x000730, "Wrong size on UItemManagementTileButtonStyle_Base_C");

}
