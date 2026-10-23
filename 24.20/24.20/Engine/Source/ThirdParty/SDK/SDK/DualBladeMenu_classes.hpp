#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UDualBladeMenu_C final : public UFortDualBladeMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UOverlay*                               MainOverlay;
	class UOverlay*                               Overlay_xp;

public:
	void ExecuteUbergraph_DualBladeMenu(int32 EntryPoint);
	void OnFullScreenWidgetCreated(class UWidget* NewWidget);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DualBladeMenu_C">();
	}
	static class UDualBladeMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDualBladeMenu_C>();
	}
};
static_assert(alignof(UDualBladeMenu_C) == 0x000008, "Wrong alignment on UDualBladeMenu_C");
static_assert(sizeof(UDualBladeMenu_C) == 0x000420, "Wrong size on UDualBladeMenu_C");
static_assert(offsetof(UDualBladeMenu_C, UberGraphFrame) == 0x000408, "Member 'UDualBladeMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDualBladeMenu_C, MainOverlay) == 0x000410, "Member 'UDualBladeMenu_C::MainOverlay' has a wrong offset!");
static_assert(offsetof(UDualBladeMenu_C, Overlay_xp) == 0x000418, "Member 'UDualBladeMenu_C::Overlay_xp' has a wrong offset!");

}
