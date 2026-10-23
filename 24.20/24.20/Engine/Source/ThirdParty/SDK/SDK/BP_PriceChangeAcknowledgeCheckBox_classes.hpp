#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class UBP_PriceChangeAcknowledgeCheckBox_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover;
	class UWidgetAnimation*                       Check;
	class UWidgetAnimation*                       burst;
	class UHorizontalBox*                         HB_BundleText;
	class UImage*                                 Image_Check;
	class UImage*                                 Image_Checkbox;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PriceChangeAcknowledgeCheckBox_C">();
	}
	static class UBP_PriceChangeAcknowledgeCheckBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PriceChangeAcknowledgeCheckBox_C>();
	}
};
static_assert(alignof(UBP_PriceChangeAcknowledgeCheckBox_C) == 0x000010, "Wrong alignment on UBP_PriceChangeAcknowledgeCheckBox_C");
static_assert(sizeof(UBP_PriceChangeAcknowledgeCheckBox_C) == 0x001420, "Wrong size on UBP_PriceChangeAcknowledgeCheckBox_C");
static_assert(offsetof(UBP_PriceChangeAcknowledgeCheckBox_C, UberGraphFrame) == 0x0013E0, "Member 'UBP_PriceChangeAcknowledgeCheckBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PriceChangeAcknowledgeCheckBox_C, Hover) == 0x0013E8, "Member 'UBP_PriceChangeAcknowledgeCheckBox_C::Hover' has a wrong offset!");
static_assert(offsetof(UBP_PriceChangeAcknowledgeCheckBox_C, Check) == 0x0013F0, "Member 'UBP_PriceChangeAcknowledgeCheckBox_C::Check' has a wrong offset!");
static_assert(offsetof(UBP_PriceChangeAcknowledgeCheckBox_C, burst) == 0x0013F8, "Member 'UBP_PriceChangeAcknowledgeCheckBox_C::burst' has a wrong offset!");
static_assert(offsetof(UBP_PriceChangeAcknowledgeCheckBox_C, HB_BundleText) == 0x001400, "Member 'UBP_PriceChangeAcknowledgeCheckBox_C::HB_BundleText' has a wrong offset!");
static_assert(offsetof(UBP_PriceChangeAcknowledgeCheckBox_C, Image_Check) == 0x001408, "Member 'UBP_PriceChangeAcknowledgeCheckBox_C::Image_Check' has a wrong offset!");
static_assert(offsetof(UBP_PriceChangeAcknowledgeCheckBox_C, Image_Checkbox) == 0x001410, "Member 'UBP_PriceChangeAcknowledgeCheckBox_C::Image_Checkbox' has a wrong offset!");

}
