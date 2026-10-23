#pragma once

#include "Basic.hpp"

#include "IconTextButton_classes.hpp"

namespace SDK
{

class UAthena_ConfirmationButton_C final : public UIconTextButton_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_ConfirmationButton_C">();
	}
	static class UAthena_ConfirmationButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_ConfirmationButton_C>();
	}
};
static_assert(alignof(UAthena_ConfirmationButton_C) == 0x000010, "Wrong alignment on UAthena_ConfirmationButton_C");
static_assert(sizeof(UAthena_ConfirmationButton_C) == 0x0015A0, "Wrong size on UAthena_ConfirmationButton_C");

}
