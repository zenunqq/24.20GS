#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UUIManager_Athena_C final : public UFortUIManager_Athena
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIManager_Athena_C">();
	}
	static class UUIManager_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIManager_Athena_C>();
	}
};
static_assert(alignof(UUIManager_Athena_C) == 0x000010, "Wrong alignment on UUIManager_Athena_C");
static_assert(sizeof(UUIManager_Athena_C) == 0x000240, "Wrong size on UUIManager_Athena_C");

}
