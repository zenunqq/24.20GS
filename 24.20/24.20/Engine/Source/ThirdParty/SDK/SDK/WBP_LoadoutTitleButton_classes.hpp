#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class UWBP_LoadoutTitleButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       PresetQuickNameFocused;
	class UAthenaItemShopTileImage*               Icon_LoadoutEdit;
	class UCommonTextBlock*                       LoadoutText;

public:
	void BP_OnFocusLost();
	void BP_OnFocusReceived();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_WBP_LoadoutTitleButton(int32 EntryPoint);
	void Set_Text(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LoadoutTitleButton_C">();
	}
	static class UWBP_LoadoutTitleButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LoadoutTitleButton_C>();
	}
};
static_assert(alignof(UWBP_LoadoutTitleButton_C) == 0x000010, "Wrong alignment on UWBP_LoadoutTitleButton_C");
static_assert(sizeof(UWBP_LoadoutTitleButton_C) == 0x001450, "Wrong size on UWBP_LoadoutTitleButton_C");
static_assert(offsetof(UWBP_LoadoutTitleButton_C, UberGraphFrame) == 0x001430, "Member 'UWBP_LoadoutTitleButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_LoadoutTitleButton_C, PresetQuickNameFocused) == 0x001438, "Member 'UWBP_LoadoutTitleButton_C::PresetQuickNameFocused' has a wrong offset!");
static_assert(offsetof(UWBP_LoadoutTitleButton_C, Icon_LoadoutEdit) == 0x001440, "Member 'UWBP_LoadoutTitleButton_C::Icon_LoadoutEdit' has a wrong offset!");
static_assert(offsetof(UWBP_LoadoutTitleButton_C, LoadoutText) == 0x001448, "Member 'UWBP_LoadoutTitleButton_C::LoadoutText' has a wrong offset!");

}
