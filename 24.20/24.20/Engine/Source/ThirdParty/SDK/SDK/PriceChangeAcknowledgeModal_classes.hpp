#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"

namespace SDK
{

class UPriceChangeAcknowledgeModal_C final : public UCrewPriceChangeAcknowledgeModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Dismiss;
	class UWidgetAnimation*                       ShowUp;
	class UPriceChangeAcknowledgeTextEntry_C*     BodyText_1;
	class UBorder*                                Border_Material_1;
	class UBP_PriceChangeAcknowledgeCheckBox_C*   BP_PriceChangeAcknowledgeCheckBox;
	class UCommonRichTextBlock*                   Column1Header;
	class UCommonRichTextBlock*                   Column2Header;
	class UCommonRichTextBlock*                   Column3Header;
	class USafeZone*                              ContentSZ;
	class UDynamicEntryBox*                       EntryBox_PriceChangeTable;
	class UAthenaScrollBox*                       ScrollBox_PriceChangeTable;
	class USizeBox*                               SizeBox_Height_1;
	class USizeBox*                               SizeBoxHeader;
	class UCommonRichTextBlock*                   Text_Check;
	class UCommonRichTextBlock*                   Text_MoreInfo;
	class UCommonTextBlock*                       Text_Title;
	class FText                                   Disabled_Reason;

public:
	void BndEvt__PriceChangeAcknowledgeModal_BP_PriceChangeAcknowledgeCheckBox_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BP_OnActivated();
	void ExecuteUbergraph_PriceChangeAcknowledgeModal(int32 EntryPoint);
	void On_Exit_Modal();
	void OnModalBackout();
	void OnSetPriceChangeAcknowledgeBodyTable(const TArray<struct FCrewTableRow>& PriceChangeByRegionRows);
	void OnSetPriceChangeAcknowledgeBodyText(const class FText& BodyText);
	void OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(const class FText& CancelSubscriptionButtonText);
	void OnSetPriceChangeAcknowledgeCheckboxText(const class FText& CheckboxText);
	void OnSetPriceChangeAcknowledgeConfirmButtonText(const class FText& ConfirmButtonText);
	void OnSetPriceChangeAcknowledgeMoreInfoText(const class FText& ConfirmButtonText);
	void OnSetPriceChangeAcknowledgeMoreInfoUrl(const class FText& MoreInfoUrl);
	void OnSetPriceChangeAcknowledgeTitle(const class FText& Title);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PriceChangeAcknowledgeModal_C">();
	}
	static class UPriceChangeAcknowledgeModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPriceChangeAcknowledgeModal_C>();
	}
};
static_assert(alignof(UPriceChangeAcknowledgeModal_C) == 0x000008, "Wrong alignment on UPriceChangeAcknowledgeModal_C");
static_assert(sizeof(UPriceChangeAcknowledgeModal_C) == 0x0005E8, "Wrong size on UPriceChangeAcknowledgeModal_C");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, UberGraphFrame) == 0x000548, "Member 'UPriceChangeAcknowledgeModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, Dismiss) == 0x000550, "Member 'UPriceChangeAcknowledgeModal_C::Dismiss' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, ShowUp) == 0x000558, "Member 'UPriceChangeAcknowledgeModal_C::ShowUp' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, BodyText_1) == 0x000560, "Member 'UPriceChangeAcknowledgeModal_C::BodyText_1' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, Border_Material_1) == 0x000568, "Member 'UPriceChangeAcknowledgeModal_C::Border_Material_1' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, BP_PriceChangeAcknowledgeCheckBox) == 0x000570, "Member 'UPriceChangeAcknowledgeModal_C::BP_PriceChangeAcknowledgeCheckBox' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, Column1Header) == 0x000578, "Member 'UPriceChangeAcknowledgeModal_C::Column1Header' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, Column2Header) == 0x000580, "Member 'UPriceChangeAcknowledgeModal_C::Column2Header' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, Column3Header) == 0x000588, "Member 'UPriceChangeAcknowledgeModal_C::Column3Header' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, ContentSZ) == 0x000590, "Member 'UPriceChangeAcknowledgeModal_C::ContentSZ' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, EntryBox_PriceChangeTable) == 0x000598, "Member 'UPriceChangeAcknowledgeModal_C::EntryBox_PriceChangeTable' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, ScrollBox_PriceChangeTable) == 0x0005A0, "Member 'UPriceChangeAcknowledgeModal_C::ScrollBox_PriceChangeTable' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, SizeBox_Height_1) == 0x0005A8, "Member 'UPriceChangeAcknowledgeModal_C::SizeBox_Height_1' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, SizeBoxHeader) == 0x0005B0, "Member 'UPriceChangeAcknowledgeModal_C::SizeBoxHeader' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, Text_Check) == 0x0005B8, "Member 'UPriceChangeAcknowledgeModal_C::Text_Check' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, Text_MoreInfo) == 0x0005C0, "Member 'UPriceChangeAcknowledgeModal_C::Text_MoreInfo' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, Text_Title) == 0x0005C8, "Member 'UPriceChangeAcknowledgeModal_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UPriceChangeAcknowledgeModal_C, Disabled_Reason) == 0x0005D0, "Member 'UPriceChangeAcknowledgeModal_C::Disabled_Reason' has a wrong offset!");

}
