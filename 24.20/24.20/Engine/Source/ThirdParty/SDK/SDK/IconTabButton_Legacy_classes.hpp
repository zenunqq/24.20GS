#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UIconTabButton_Legacy_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UNormalBangWrapper_C*                   BangWrapper;
	class UCommonTextBlock*                       CenterButtonTextWidget;
	class UHorizontalBox*                         ContentHB;
	class UImage*                                 LeftSideImage;
	class USizeBox*                               SizeBoxShell;
	class FText                                   ButtonText;
	uint8                                         Pad_1478[0x8];
	struct FSlateBrush                            IconBrush;
	bool                                          UseText;
	uint8                                         Pad_1541[0x3];
	struct FLinearColor                           SelectedIconTint;
	struct FLinearColor                           DeselectedIconTint;
	struct FLinearColor                           HoveredIconTint;
	bool                                          bBangEnabled;
	bool                                          ChangeIconColorWhenSelected;
	uint8                                         Pad_1576[0x2];
	struct FSlateColor                            SelectedIconColor;
	struct FSlateColor                            UnSelectedIconColor;

public:
	void BP_OnDeselected();
	void BP_OnDisabled();
	void BP_OnEnabled();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_IconTabButton_Legacy(int32 EntryPoint);
	void OnCurrentTextStyleChanged();
	void Play_Hover_Sound();
	void PreConstruct(bool IsDesignTime);
	void Set_Icon(const struct FSlateBrush& IconBrush_0);
	void Set_Text(const class FText& ButtonText_0);
	void SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, const struct FSlateColor& SelectedColor, const struct FSlateColor& UnselectedColor);
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void ShowText();
	void Update_Bang_State(bool bBangEnabled_0, int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconTabButton_Legacy_C">();
	}
	static class UIconTabButton_Legacy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconTabButton_Legacy_C>();
	}
};
static_assert(alignof(UIconTabButton_Legacy_C) == 0x000010, "Wrong alignment on UIconTabButton_Legacy_C");
static_assert(sizeof(UIconTabButton_Legacy_C) == 0x0015A0, "Wrong size on UIconTabButton_Legacy_C");
static_assert(offsetof(UIconTabButton_Legacy_C, UberGraphFrame) == 0x001430, "Member 'UIconTabButton_Legacy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, BangWrapper) == 0x001438, "Member 'UIconTabButton_Legacy_C::BangWrapper' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, CenterButtonTextWidget) == 0x001440, "Member 'UIconTabButton_Legacy_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, ContentHB) == 0x001448, "Member 'UIconTabButton_Legacy_C::ContentHB' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, LeftSideImage) == 0x001450, "Member 'UIconTabButton_Legacy_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, SizeBoxShell) == 0x001458, "Member 'UIconTabButton_Legacy_C::SizeBoxShell' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, ButtonText) == 0x001460, "Member 'UIconTabButton_Legacy_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, IconBrush) == 0x001480, "Member 'UIconTabButton_Legacy_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, UseText) == 0x001540, "Member 'UIconTabButton_Legacy_C::UseText' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, SelectedIconTint) == 0x001544, "Member 'UIconTabButton_Legacy_C::SelectedIconTint' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, DeselectedIconTint) == 0x001554, "Member 'UIconTabButton_Legacy_C::DeselectedIconTint' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, HoveredIconTint) == 0x001564, "Member 'UIconTabButton_Legacy_C::HoveredIconTint' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, bBangEnabled) == 0x001574, "Member 'UIconTabButton_Legacy_C::bBangEnabled' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, ChangeIconColorWhenSelected) == 0x001575, "Member 'UIconTabButton_Legacy_C::ChangeIconColorWhenSelected' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, SelectedIconColor) == 0x001578, "Member 'UIconTabButton_Legacy_C::SelectedIconColor' has a wrong offset!");
static_assert(offsetof(UIconTabButton_Legacy_C, UnSelectedIconColor) == 0x00158C, "Member 'UIconTabButton_Legacy_C::UnSelectedIconColor' has a wrong offset!");

}
