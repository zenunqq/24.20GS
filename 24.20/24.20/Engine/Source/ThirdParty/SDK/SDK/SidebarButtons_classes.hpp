#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarButtons_C final : public UFortSidebarButtons
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void Construct();
	void ExecuteUbergraph_SidebarButtons(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarButtons_C">();
	}
	static class USidebarButtons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarButtons_C>();
	}
};
static_assert(alignof(USidebarButtons_C) == 0x000008, "Wrong alignment on USidebarButtons_C");
static_assert(sizeof(USidebarButtons_C) == 0x0003B8, "Wrong size on USidebarButtons_C");
static_assert(offsetof(USidebarButtons_C, UberGraphFrame) == 0x0003B0, "Member 'USidebarButtons_C::UberGraphFrame' has a wrong offset!");

}
