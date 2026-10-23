#pragma once

#include "Basic.hpp"

#include "BattlePassBase_classes.hpp"

namespace SDK
{

class UBP_CurrencyCounter_C final : public UFortBattlePassResourceCounter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CurrencyCounter_C">();
	}
	static class UBP_CurrencyCounter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CurrencyCounter_C>();
	}
};
static_assert(alignof(UBP_CurrencyCounter_C) == 0x000008, "Wrong alignment on UBP_CurrencyCounter_C");
static_assert(sizeof(UBP_CurrencyCounter_C) == 0x0002B0, "Wrong size on UBP_CurrencyCounter_C");

}
