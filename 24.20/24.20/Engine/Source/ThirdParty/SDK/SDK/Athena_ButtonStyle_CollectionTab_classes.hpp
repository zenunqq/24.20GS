#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UAthena_ButtonStyle_CollectionTab_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_ButtonStyle_CollectionTab_C">();
	}
	static class UAthena_ButtonStyle_CollectionTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_ButtonStyle_CollectionTab_C>();
	}
};
static_assert(alignof(UAthena_ButtonStyle_CollectionTab_C) == 0x000010, "Wrong alignment on UAthena_ButtonStyle_CollectionTab_C");
static_assert(sizeof(UAthena_ButtonStyle_CollectionTab_C) == 0x000730, "Wrong size on UAthena_ButtonStyle_CollectionTab_C");

}
