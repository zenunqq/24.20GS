#pragma once

#include "Basic.hpp"

#include "ButtonStyle_Base_classes.hpp"

namespace SDK
{

class UItemManagementTileButtonStyle_AthenaLocker_BuiltInEmote_C final : public UButtonStyle_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemManagementTileButtonStyle-AthenaLocker-BuiltInEmote_C">();
	}
	static class UItemManagementTileButtonStyle_AthenaLocker_BuiltInEmote_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemManagementTileButtonStyle_AthenaLocker_BuiltInEmote_C>();
	}
};
static_assert(alignof(UItemManagementTileButtonStyle_AthenaLocker_BuiltInEmote_C) == 0x000010, "Wrong alignment on UItemManagementTileButtonStyle_AthenaLocker_BuiltInEmote_C");
static_assert(sizeof(UItemManagementTileButtonStyle_AthenaLocker_BuiltInEmote_C) == 0x000730, "Wrong size on UItemManagementTileButtonStyle_AthenaLocker_BuiltInEmote_C");

}
