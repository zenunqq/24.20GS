#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CommonInput_structs.hpp"

namespace SDK
{

class UWBP_ContentPurchaseBlocker_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USizeBox*                               SizeBox_Mobile;
	class UCommonTextBlock*                       Text_Description;
	class UCommonTextBlock*                       Text_Title;
	class UWBP_UIKit_Button_Loud_C*               WBP_UIKit_Button_Loud;
	class FText                                   Text_Details;
	int32                                         Max_Width;
	uint8                                         Pad_2AC[0x4];
	TSoftClassPtr<class UClass>                   ParentalControlsScreenClass;

public:
	void SetVisuals(int32 MaxWidth);
	void Set_Data(const class FText& InText);
	void PreConstruct(bool IsDesignTime);
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void Construct();
	void OnComplete_EDE27478404080C54EDC0D863BB58408(class UUserWidget* UserWidget);
	void BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_ContentPurchaseBlocker(int32 EntryPoint);
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ContentPurchaseBlocker_C">();
	}
	static class UWBP_ContentPurchaseBlocker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ContentPurchaseBlocker_C>();
	}
};
static_assert(alignof(UWBP_ContentPurchaseBlocker_C) == 0x000008, "Wrong alignment on UWBP_ContentPurchaseBlocker_C");
static_assert(sizeof(UWBP_ContentPurchaseBlocker_C) == 0x0002D8, "Wrong size on UWBP_ContentPurchaseBlocker_C");
static_assert(offsetof(UWBP_ContentPurchaseBlocker_C, UberGraphFrame) == 0x000268, "Member 'UWBP_ContentPurchaseBlocker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ContentPurchaseBlocker_C, SizeBox_Mobile) == 0x000270, "Member 'UWBP_ContentPurchaseBlocker_C::SizeBox_Mobile' has a wrong offset!");
static_assert(offsetof(UWBP_ContentPurchaseBlocker_C, Text_Description) == 0x000278, "Member 'UWBP_ContentPurchaseBlocker_C::Text_Description' has a wrong offset!");
static_assert(offsetof(UWBP_ContentPurchaseBlocker_C, Text_Title) == 0x000280, "Member 'UWBP_ContentPurchaseBlocker_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UWBP_ContentPurchaseBlocker_C, WBP_UIKit_Button_Loud) == 0x000288, "Member 'UWBP_ContentPurchaseBlocker_C::WBP_UIKit_Button_Loud' has a wrong offset!");
static_assert(offsetof(UWBP_ContentPurchaseBlocker_C, Text_Details) == 0x000290, "Member 'UWBP_ContentPurchaseBlocker_C::Text_Details' has a wrong offset!");
static_assert(offsetof(UWBP_ContentPurchaseBlocker_C, Max_Width) == 0x0002A8, "Member 'UWBP_ContentPurchaseBlocker_C::Max_Width' has a wrong offset!");
static_assert(offsetof(UWBP_ContentPurchaseBlocker_C, ParentalControlsScreenClass) == 0x0002B0, "Member 'UWBP_ContentPurchaseBlocker_C::ParentalControlsScreenClass' has a wrong offset!");

}
