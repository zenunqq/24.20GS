#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class ULeavePlatformPartyButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;
	class UCommonTextBlock*                       CommonTextBlock_41;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_LeavePlatformPartyButton(int32 EntryPoint);
	void SetText(const class FText& New_Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LeavePlatformPartyButton_C">();
	}
	static class ULeavePlatformPartyButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeavePlatformPartyButton_C>();
	}
};
static_assert(alignof(ULeavePlatformPartyButton_C) == 0x000010, "Wrong alignment on ULeavePlatformPartyButton_C");
static_assert(sizeof(ULeavePlatformPartyButton_C) == 0x001450, "Wrong size on ULeavePlatformPartyButton_C");
static_assert(offsetof(ULeavePlatformPartyButton_C, UberGraphFrame) == 0x001430, "Member 'ULeavePlatformPartyButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULeavePlatformPartyButton_C, OnHover) == 0x001438, "Member 'ULeavePlatformPartyButton_C::OnHover' has a wrong offset!");
static_assert(offsetof(ULeavePlatformPartyButton_C, CommonTextBlock_41) == 0x001440, "Member 'ULeavePlatformPartyButton_C::CommonTextBlock_41' has a wrong offset!");

}
