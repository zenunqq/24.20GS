#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UTopRightWindowControlsWidget_C final : public UFortBladeMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USafeZone*                              SafeZone_Content;
	class Uwindowchromebuttons_C*                 windowchromebuttons;

public:
	void ExecuteUbergraph_TopRightWindowControlsWidget(int32 EntryPoint);
	void OnRefreshOptions();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TopRightWindowControlsWidget_C">();
	}
	static class UTopRightWindowControlsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTopRightWindowControlsWidget_C>();
	}
};
static_assert(alignof(UTopRightWindowControlsWidget_C) == 0x000008, "Wrong alignment on UTopRightWindowControlsWidget_C");
static_assert(sizeof(UTopRightWindowControlsWidget_C) == 0x0003E0, "Wrong size on UTopRightWindowControlsWidget_C");
static_assert(offsetof(UTopRightWindowControlsWidget_C, UberGraphFrame) == 0x0003C8, "Member 'UTopRightWindowControlsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTopRightWindowControlsWidget_C, SafeZone_Content) == 0x0003D0, "Member 'UTopRightWindowControlsWidget_C::SafeZone_Content' has a wrong offset!");
static_assert(offsetof(UTopRightWindowControlsWidget_C, windowchromebuttons) == 0x0003D8, "Member 'UTopRightWindowControlsWidget_C::windowchromebuttons' has a wrong offset!");

}
