#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UCurrencyListObject_C final : public UObject
{
public:
	struct FCurrencyData                          Data;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CurrencyListObject_C">();
	}
	static class UCurrencyListObject_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurrencyListObject_C>();
	}
};
static_assert(alignof(UCurrencyListObject_C) == 0x000008, "Wrong alignment on UCurrencyListObject_C");
static_assert(sizeof(UCurrencyListObject_C) == 0x000078, "Wrong size on UCurrencyListObject_C");
static_assert(offsetof(UCurrencyListObject_C, Data) == 0x000028, "Member 'UCurrencyListObject_C::Data' has a wrong offset!");

}
