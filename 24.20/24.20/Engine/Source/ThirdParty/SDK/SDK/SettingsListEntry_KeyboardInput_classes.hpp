#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USettingsListEntry_KeyboardInput_C final : public UFortSettingsListEntrySetting_KeyboardInput
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;

public:
	void ExecuteUbergraph_SettingsListEntry_KeyboardInput(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnUpdateKeyText(const class FText& PrimaryKeyText, const class FText& SecondaryKeyText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsListEntry_KeyboardInput_C">();
	}
	static class USettingsListEntry_KeyboardInput_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsListEntry_KeyboardInput_C>();
	}
};
static_assert(alignof(USettingsListEntry_KeyboardInput_C) == 0x000008, "Wrong alignment on USettingsListEntry_KeyboardInput_C");
static_assert(sizeof(USettingsListEntry_KeyboardInput_C) == 0x000320, "Wrong size on USettingsListEntry_KeyboardInput_C");
static_assert(offsetof(USettingsListEntry_KeyboardInput_C, UberGraphFrame) == 0x000310, "Member 'USettingsListEntry_KeyboardInput_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USettingsListEntry_KeyboardInput_C, OnHover) == 0x000318, "Member 'USettingsListEntry_KeyboardInput_C::OnHover' has a wrong offset!");

}
