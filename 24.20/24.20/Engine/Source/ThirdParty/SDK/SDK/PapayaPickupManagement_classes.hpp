#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UPapayaPickupManagement_C final : public UFortGameStateComponent_PickupManagement
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PapayaPickupManagement_C">();
	}
	static class UPapayaPickupManagement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPapayaPickupManagement_C>();
	}
};
static_assert(alignof(UPapayaPickupManagement_C) == 0x000008, "Wrong alignment on UPapayaPickupManagement_C");
static_assert(sizeof(UPapayaPickupManagement_C) == 0x000158, "Wrong size on UPapayaPickupManagement_C");

}
