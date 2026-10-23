#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaMainStatTile_C final : public UFortProfileStatsMainTile
{
public:
	class UImage*                                 Glow;

public:
	void SetStatValue(const class FText& StatValueAsText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMainStatTile_C">();
	}
	static class UAthenaMainStatTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMainStatTile_C>();
	}
};
static_assert(alignof(UAthenaMainStatTile_C) == 0x000008, "Wrong alignment on UAthenaMainStatTile_C");
static_assert(sizeof(UAthenaMainStatTile_C) == 0x0002B0, "Wrong size on UAthenaMainStatTile_C");
static_assert(offsetof(UAthenaMainStatTile_C, Glow) == 0x0002A8, "Member 'UAthenaMainStatTile_C::Glow' has a wrong offset!");

}
