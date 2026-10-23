#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFortHUDElementWrapper_C final : public UFortHUDElementWidget
{
public:
	class UNamedSlot*                             Content;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortHUDElementWrapper_C">();
	}
	static class UFortHUDElementWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHUDElementWrapper_C>();
	}
};
static_assert(alignof(UFortHUDElementWrapper_C) == 0x000008, "Wrong alignment on UFortHUDElementWrapper_C");
static_assert(sizeof(UFortHUDElementWrapper_C) == 0x0002D8, "Wrong size on UFortHUDElementWrapper_C");
static_assert(offsetof(UFortHUDElementWrapper_C, Content) == 0x0002D0, "Member 'UFortHUDElementWrapper_C::Content' has a wrong offset!");

}
