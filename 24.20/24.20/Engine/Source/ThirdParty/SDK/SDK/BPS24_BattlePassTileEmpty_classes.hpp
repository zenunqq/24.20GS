#pragma once

#include "Basic.hpp"

#include "BattlePassBase_classes.hpp"

namespace SDK
{

class UBPS24_BattlePassTileEmpty_C final : public UFortBattlePassTileBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_BattlePassTileEmpty_C">();
	}
	static class UBPS24_BattlePassTileEmpty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_BattlePassTileEmpty_C>();
	}
};
static_assert(alignof(UBPS24_BattlePassTileEmpty_C) == 0x000010, "Wrong alignment on UBPS24_BattlePassTileEmpty_C");
static_assert(sizeof(UBPS24_BattlePassTileEmpty_C) == 0x001540, "Wrong size on UBPS24_BattlePassTileEmpty_C");

}
