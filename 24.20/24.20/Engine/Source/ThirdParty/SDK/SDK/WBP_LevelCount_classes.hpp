#pragma once

#include "Basic.hpp"

#include "BattlePassBase_classes.hpp"

namespace SDK
{

class UWBP_LevelCount_C final : public UFortBattlePassLevelCount
{
public:
	class UBPS24_BattlePassDynamicIcon_C*         WBP_BattlePassDynamicIcon;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LevelCount_C">();
	}
	static class UWBP_LevelCount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LevelCount_C>();
	}
};
static_assert(alignof(UWBP_LevelCount_C) == 0x000008, "Wrong alignment on UWBP_LevelCount_C");
static_assert(sizeof(UWBP_LevelCount_C) == 0x000280, "Wrong size on UWBP_LevelCount_C");
static_assert(offsetof(UWBP_LevelCount_C, WBP_BattlePassDynamicIcon) == 0x000278, "Member 'UWBP_LevelCount_C::WBP_BattlePassDynamicIcon' has a wrong offset!");

}
