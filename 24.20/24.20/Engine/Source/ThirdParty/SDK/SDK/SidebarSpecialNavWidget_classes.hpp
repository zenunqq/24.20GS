#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarSpecialNavWidget_C final : public UFortSidebarSpecialNavWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_SidebarSpecialNavWidget(int32 EntryPoint);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSpecialNavWidget_C">();
	}
	static class USidebarSpecialNavWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSpecialNavWidget_C>();
	}
};
static_assert(alignof(USidebarSpecialNavWidget_C) == 0x000008, "Wrong alignment on USidebarSpecialNavWidget_C");
static_assert(sizeof(USidebarSpecialNavWidget_C) == 0x0003C8, "Wrong size on USidebarSpecialNavWidget_C");
static_assert(offsetof(USidebarSpecialNavWidget_C, UberGraphFrame) == 0x0003C0, "Member 'USidebarSpecialNavWidget_C::UberGraphFrame' has a wrong offset!");

}
