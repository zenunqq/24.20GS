#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class UTextToggle_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ToggleOff;
	class UWidgetAnimation*                       ToggleOn;
	class UCommonTextBlock*                       CText_Off;
	class UCommonTextBlock*                       CText_On;
	bool                                          isOn;
	uint8                                         Pad_2B9[0x7];
	class FText                                   OffText;
	class FText                                   OnText;

public:
	void SwitchToggle();
	void SetToggleState(bool isOn_0);
	void Refresh();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TextToggle(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextToggle_C">();
	}
	static class UTextToggle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextToggle_C>();
	}
};
static_assert(alignof(UTextToggle_C) == 0x000008, "Wrong alignment on UTextToggle_C");
static_assert(sizeof(UTextToggle_C) == 0x0002F0, "Wrong size on UTextToggle_C");
static_assert(offsetof(UTextToggle_C, UberGraphFrame) == 0x000290, "Member 'UTextToggle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTextToggle_C, ToggleOff) == 0x000298, "Member 'UTextToggle_C::ToggleOff' has a wrong offset!");
static_assert(offsetof(UTextToggle_C, ToggleOn) == 0x0002A0, "Member 'UTextToggle_C::ToggleOn' has a wrong offset!");
static_assert(offsetof(UTextToggle_C, CText_Off) == 0x0002A8, "Member 'UTextToggle_C::CText_Off' has a wrong offset!");
static_assert(offsetof(UTextToggle_C, CText_On) == 0x0002B0, "Member 'UTextToggle_C::CText_On' has a wrong offset!");
static_assert(offsetof(UTextToggle_C, isOn) == 0x0002B8, "Member 'UTextToggle_C::isOn' has a wrong offset!");
static_assert(offsetof(UTextToggle_C, OffText) == 0x0002C0, "Member 'UTextToggle_C::OffText' has a wrong offset!");
static_assert(offsetof(UTextToggle_C, OnText) == 0x0002D8, "Member 'UTextToggle_C::OnText' has a wrong offset!");

}
