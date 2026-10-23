#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UUIManager_Startup_C final : public UFortUIManager_Startup
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIManager_Startup_C">();
	}
	static class UUIManager_Startup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIManager_Startup_C>();
	}
};
static_assert(alignof(UUIManager_Startup_C) == 0x000010, "Wrong alignment on UUIManager_Startup_C");
static_assert(sizeof(UUIManager_Startup_C) == 0x000220, "Wrong size on UUIManager_Startup_C");

}
