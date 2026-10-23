#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UEulaWidget_C final : public UFortEulaWidget
{
public:
	TMulticastInlineDelegate<void(bool Accepted)> OnEulaResponse;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EulaWidget_C">();
	}
	static class UEulaWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEulaWidget_C>();
	}
};
static_assert(alignof(UEulaWidget_C) == 0x000008, "Wrong alignment on UEulaWidget_C");
static_assert(sizeof(UEulaWidget_C) == 0x000550, "Wrong size on UEulaWidget_C");
static_assert(offsetof(UEulaWidget_C, OnEulaResponse) == 0x000540, "Member 'UEulaWidget_C::OnEulaResponse' has a wrong offset!");

}
