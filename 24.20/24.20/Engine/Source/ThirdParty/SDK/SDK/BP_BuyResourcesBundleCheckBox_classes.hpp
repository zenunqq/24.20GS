#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePassBase_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBP_BuyResourcesBundleCheckBox_C final : public UFortBattlePassCheckBoxButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover;
	class UWidgetAnimation*                       Check;
	class UWidgetAnimation*                       burst;
	class UHorizontalBox*                         HB_BundleText;
	class UImage*                                 Image_Burst;
	class UImage*                                 Image_Check;
	class UImage*                                 Image_Checkbox;
	class UCommonRichTextBlock*                   Text_Default;
	class UCommonRichTextBlock*                   Text_OneTime;
	class UWidgetSwitcher*                        WidgetSwitcher_2;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_BP_BuyResourcesBundleCheckBox(int32 EntryPoint);
	void OnStateChanged(const bool bNewIsChecked);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuyResourcesBundleCheckBox_C">();
	}
	static class UBP_BuyResourcesBundleCheckBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BuyResourcesBundleCheckBox_C>();
	}
};
static_assert(alignof(UBP_BuyResourcesBundleCheckBox_C) == 0x000010, "Wrong alignment on UBP_BuyResourcesBundleCheckBox_C");
static_assert(sizeof(UBP_BuyResourcesBundleCheckBox_C) == 0x001450, "Wrong size on UBP_BuyResourcesBundleCheckBox_C");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, UberGraphFrame) == 0x0013F0, "Member 'UBP_BuyResourcesBundleCheckBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, Hover) == 0x0013F8, "Member 'UBP_BuyResourcesBundleCheckBox_C::Hover' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, Check) == 0x001400, "Member 'UBP_BuyResourcesBundleCheckBox_C::Check' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, burst) == 0x001408, "Member 'UBP_BuyResourcesBundleCheckBox_C::burst' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, HB_BundleText) == 0x001410, "Member 'UBP_BuyResourcesBundleCheckBox_C::HB_BundleText' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, Image_Burst) == 0x001418, "Member 'UBP_BuyResourcesBundleCheckBox_C::Image_Burst' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, Image_Check) == 0x001420, "Member 'UBP_BuyResourcesBundleCheckBox_C::Image_Check' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, Image_Checkbox) == 0x001428, "Member 'UBP_BuyResourcesBundleCheckBox_C::Image_Checkbox' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, Text_Default) == 0x001430, "Member 'UBP_BuyResourcesBundleCheckBox_C::Text_Default' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, Text_OneTime) == 0x001438, "Member 'UBP_BuyResourcesBundleCheckBox_C::Text_OneTime' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, WidgetSwitcher_2) == 0x001440, "Member 'UBP_BuyResourcesBundleCheckBox_C::WidgetSwitcher_2' has a wrong offset!");

}
