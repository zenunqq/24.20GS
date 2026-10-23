#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class Uwindowchromebuttons_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       FadeOut;
	class UWidgetAnimation*                       FadeIn;
	class UWindowTitleBarArea*                    WindowTitleBarArea_107;

public:
	void ExecuteUbergraph_windowchromebuttons(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"windowchromebuttons_C">();
	}
	static class Uwindowchromebuttons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Uwindowchromebuttons_C>();
	}
};
static_assert(alignof(Uwindowchromebuttons_C) == 0x000008, "Wrong alignment on Uwindowchromebuttons_C");
static_assert(sizeof(Uwindowchromebuttons_C) == 0x0002B0, "Wrong size on Uwindowchromebuttons_C");
static_assert(offsetof(Uwindowchromebuttons_C, UberGraphFrame) == 0x000290, "Member 'Uwindowchromebuttons_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Uwindowchromebuttons_C, FadeOut) == 0x000298, "Member 'Uwindowchromebuttons_C::FadeOut' has a wrong offset!");
static_assert(offsetof(Uwindowchromebuttons_C, FadeIn) == 0x0002A0, "Member 'Uwindowchromebuttons_C::FadeIn' has a wrong offset!");
static_assert(offsetof(Uwindowchromebuttons_C, WindowTitleBarArea_107) == 0x0002A8, "Member 'Uwindowchromebuttons_C::WindowTitleBarArea_107' has a wrong offset!");

}
