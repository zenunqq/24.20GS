#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UCategoryButton_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       PulseWarningIcon;
	class UWidgetAnimation*                       Reset;
	class UWidgetAnimation*                       Dim;
	class UWidgetAnimation*                       OnSelect;
	class UWidgetAnimation*                       OnWarning;
	class UWidgetAnimation*                       OnHover;
	class UDiamondStatePip_C*                     DiamondStatePip;
	class USizeBox*                               DisabledIcon;
	class UImage*                                 Image_Dim;
	class UNamedSlot*                             NamedSlot_Icon;
	class USafeZone*                              SafeZone;
	class UCommonTextBlock*                       Text_Title;
	bool                                          IsSelected;
	bool                                          Is_Hovered;
	bool                                          IsWarningOn;
	uint8                                         Pad_144B[0x5];
	class FText                                   Warning_Message;
	class FText                                   TitleText;
	bool                                          Pad_Left;
	bool                                          Pad_Right;

public:
	void BP_OnClicked();
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_CategoryButton(int32 EntryPoint);
	void PlayClickedEvents();
	void PreConstruct(bool IsDesignTime);
	void ResetState();
	void SetHovered(bool IsHovered_0);
	void SetSafeZonePadding(bool Pad_Left_0, bool Pad_Right_0);
	void SetSelected(bool IsSelected_0);
	void SetTitleText(const class FText& TitleText_0);
	void SetWarningStatus(bool WarningOn, const class FText& WarningMessage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CategoryButton_C">();
	}
	static class UCategoryButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCategoryButton_C>();
	}
};
static_assert(alignof(UCategoryButton_C) == 0x000010, "Wrong alignment on UCategoryButton_C");
static_assert(sizeof(UCategoryButton_C) == 0x001490, "Wrong size on UCategoryButton_C");
static_assert(offsetof(UCategoryButton_C, UberGraphFrame) == 0x0013E0, "Member 'UCategoryButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, PulseWarningIcon) == 0x0013E8, "Member 'UCategoryButton_C::PulseWarningIcon' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, Reset) == 0x0013F0, "Member 'UCategoryButton_C::Reset' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, Dim) == 0x0013F8, "Member 'UCategoryButton_C::Dim' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, OnSelect) == 0x001400, "Member 'UCategoryButton_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, OnWarning) == 0x001408, "Member 'UCategoryButton_C::OnWarning' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, OnHover) == 0x001410, "Member 'UCategoryButton_C::OnHover' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, DiamondStatePip) == 0x001418, "Member 'UCategoryButton_C::DiamondStatePip' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, DisabledIcon) == 0x001420, "Member 'UCategoryButton_C::DisabledIcon' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, Image_Dim) == 0x001428, "Member 'UCategoryButton_C::Image_Dim' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, NamedSlot_Icon) == 0x001430, "Member 'UCategoryButton_C::NamedSlot_Icon' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, SafeZone) == 0x001438, "Member 'UCategoryButton_C::SafeZone' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, Text_Title) == 0x001440, "Member 'UCategoryButton_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, IsSelected) == 0x001448, "Member 'UCategoryButton_C::IsSelected' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, Is_Hovered) == 0x001449, "Member 'UCategoryButton_C::Is_Hovered' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, IsWarningOn) == 0x00144A, "Member 'UCategoryButton_C::IsWarningOn' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, Warning_Message) == 0x001450, "Member 'UCategoryButton_C::Warning_Message' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, TitleText) == 0x001468, "Member 'UCategoryButton_C::TitleText' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, Pad_Left) == 0x001480, "Member 'UCategoryButton_C::Pad_Left' has a wrong offset!");
static_assert(offsetof(UCategoryButton_C, Pad_Right) == 0x001481, "Member 'UCategoryButton_C::Pad_Right' has a wrong offset!");

}
