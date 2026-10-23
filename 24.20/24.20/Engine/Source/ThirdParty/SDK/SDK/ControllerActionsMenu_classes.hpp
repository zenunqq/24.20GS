#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UControllerActionsMenu_C final : public UFortControllerActionsMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void BP_OnActivated();
	void ExecuteUbergraph_ControllerActionsMenu(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ControllerActionsMenu_C">();
	}
	static class UControllerActionsMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControllerActionsMenu_C>();
	}
};
static_assert(alignof(UControllerActionsMenu_C) == 0x000008, "Wrong alignment on UControllerActionsMenu_C");
static_assert(sizeof(UControllerActionsMenu_C) == 0x000510, "Wrong size on UControllerActionsMenu_C");
static_assert(offsetof(UControllerActionsMenu_C, UberGraphFrame) == 0x000508, "Member 'UControllerActionsMenu_C::UberGraphFrame' has a wrong offset!");

}
