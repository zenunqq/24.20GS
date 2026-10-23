#pragma once

#include "Basic.hpp"

#include "BattlePassBase_classes.hpp"

namespace SDK
{

class UBP_SeasonalResourceCounter_C final : public UFortBattlePassResourceCounter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SeasonalResourceCounter_C">();
	}
	static class UBP_SeasonalResourceCounter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SeasonalResourceCounter_C>();
	}
};
static_assert(alignof(UBP_SeasonalResourceCounter_C) == 0x000008, "Wrong alignment on UBP_SeasonalResourceCounter_C");
static_assert(sizeof(UBP_SeasonalResourceCounter_C) == 0x0002B0, "Wrong size on UBP_SeasonalResourceCounter_C");

}
