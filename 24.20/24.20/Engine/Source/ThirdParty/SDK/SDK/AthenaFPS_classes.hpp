#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaFPS_C final : public UFortHUDElementWidget
{
public:
	class UAthenaFPSTicker_C*                     AthenaFPSTicker;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaFPS_C">();
	}
	static class UAthenaFPS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaFPS_C>();
	}
};
static_assert(alignof(UAthenaFPS_C) == 0x000008, "Wrong alignment on UAthenaFPS_C");
static_assert(sizeof(UAthenaFPS_C) == 0x0002D8, "Wrong size on UAthenaFPS_C");
static_assert(offsetof(UAthenaFPS_C, AthenaFPSTicker) == 0x0002D0, "Member 'UAthenaFPS_C::AthenaFPSTicker' has a wrong offset!");

}
