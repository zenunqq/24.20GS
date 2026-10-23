#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UBP_LocalPlayerBannerEditor_C final : public UFortPlayerProfileBannerEditor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWBP_UIKit_Button_Regular_C*            ApplyButton;
	class UIconTextButton_C*                      Button_LeftTab;
	class UIconTextButton_C*                      Button_RightTab;
	class UCommonTextBlock*                       CategoryText;
	class UCloseButton_C*                         CloseButton_Mobile;
	class UNormalBangWrapper_C*                   ColorBangWrapper;
	class UCommonTileView*                        CommonTileView_0;
	class UIconTextButton_C*                      EditColorButton;
	class UCommonTextBlock*                       FoundersNoteText;
	class UPlayerBanner_C*                        HomebaseBanner;
	class UImage*                                 HomebaseImage;
	class UNormalBangWrapper_C*                   IconBangWrapper;
	class UIconTextButton_C*                      LeftArrowButton;
	class UNormalBangWrapper_C*                   LeftCategoryBang;
	class UCommonActionWidget*                    LeftTriggerAction;
	class UIconTextButton_C*                      RightArrowButton;
	class UNormalBangWrapper_C*                   RightCategoryBang;
	class UCommonActionWidget*                    RightTriggerAction;
	TMulticastInlineDelegate<void(class FName IconId, class FName ColorId)> CloseBannerEditor;
	int32                                         IconCategoryIndex;
	int32                                         ColorCategoryIndex;
	class FName                                   CurrentCategory;
	bool                                          bViewingIcons;
	bool                                          bPickingTile;
	uint8                                         Pad_38E[0x2];
	class FName                                   TempChosenIcon;
	class FName                                   TempChosenColor;
	class UCommonButtonGroupLegacy*               ButtonGroup;
	struct FTimerHandle                           UpdateBangTimerHandle;
	bool                                          bIsActiveWidget;

public:
	void Apply_Chosen_Item();
	void Attempt_Leave_Picker(bool* Left);
	void BannerTileBangUpdated_Event_0();
	void BndEvt__BP_LocalPlayerBannerEditor_ApplyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__BP_LocalPlayerBannerEditor_Button_CloseEditorButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__BP_LocalPlayerBannerEditor_Button_EditIcon_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__BP_LocalPlayerBannerEditor_Button_LeftTab_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__BP_LocalPlayerBannerEditor_Button_RightTab_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__BP_LocalPlayerBannerEditor_EditColorButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__CloseButton_97_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void Construct();
	void Decrement_Color_Category_Index();
	void Decrement_Icon_Category_Index();
	void ExecuteUbergraph_BP_LocalPlayerBannerEditor(int32 EntryPoint);
	void FoundsPackTextUpdate();
	int32 Get_Next_Color_Category_Index();
	int32 Get_Next_Icon_Category_Index();
	int32 Get_Prev_Color_Category_Index();
	int32 Get_Prev_Icon_Category_Index();
	void Handle_Bang_State_Changed();
	void HandleInputMethodChanged(ECommonInputType InputType);
	void Increment_Color_Category_Index();
	void Increment_Icon_Category_Index();
	void IsActiveWidget(bool* IsActivated);
	void Navigate_to_Chosen_Color();
	void Navigate_to_Chosen_Icon();
	void Next_Category();
	void OnShowNextCategory();
	void OnShowPreviousCategory();
	void OnWidgetActivated();
	void OnWidgetDeactivated();
	void Previous_Category();
	void Refresh_Apply_Button_State();
	void RefreshBannerEditor();
	void Reset_Color_Category_Index();
	void Reset_for_Keyboard_and_Mouse();
	void Reset_Icon_Category_Index();
	void Reset_Pickers_and_Views();
	void Set_Current_Category(class FName CurrentCategory_0);
	void Set_Picking_Tile_State(bool bPickingTile_0);
	void Setup_Tileview_For_Colorswatches(class FName& CategoryRowName);
	void Setup_Tileview_For_Icons(class FName CategoryRowName);
	void Update_Bang_States();
	void Update_Banner_Color_Tileview(class FName CurrentCategory_0);
	void Update_Banner_Icon_Tileview(class FName CurrentCategory_0);
	void Update_Category_Navigation_Visibility();
	void Update_Color_Button_Bang_State();
	void Update_Icon_Button_Bang_State();
	void Update_Left_Color_Category_Button_Bang_State();
	void Update_Left_Icon_Category_Button_Bang_State();
	void Update_Right_Color_Category_Button_Bang_State();
	void Update_Right_Icon_Category_Button_Bang_State();
	void Update_Temp_State_On_Item_Selected(class UObject* Item);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LocalPlayerBannerEditor_C">();
	}
	static class UBP_LocalPlayerBannerEditor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LocalPlayerBannerEditor_C>();
	}
};
static_assert(alignof(UBP_LocalPlayerBannerEditor_C) == 0x000008, "Wrong alignment on UBP_LocalPlayerBannerEditor_C");
static_assert(sizeof(UBP_LocalPlayerBannerEditor_C) == 0x0003B0, "Wrong size on UBP_LocalPlayerBannerEditor_C");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, UberGraphFrame) == 0x0002D8, "Member 'UBP_LocalPlayerBannerEditor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, ApplyButton) == 0x0002E0, "Member 'UBP_LocalPlayerBannerEditor_C::ApplyButton' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, Button_LeftTab) == 0x0002E8, "Member 'UBP_LocalPlayerBannerEditor_C::Button_LeftTab' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, Button_RightTab) == 0x0002F0, "Member 'UBP_LocalPlayerBannerEditor_C::Button_RightTab' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, CategoryText) == 0x0002F8, "Member 'UBP_LocalPlayerBannerEditor_C::CategoryText' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, CloseButton_Mobile) == 0x000300, "Member 'UBP_LocalPlayerBannerEditor_C::CloseButton_Mobile' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, ColorBangWrapper) == 0x000308, "Member 'UBP_LocalPlayerBannerEditor_C::ColorBangWrapper' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, CommonTileView_0) == 0x000310, "Member 'UBP_LocalPlayerBannerEditor_C::CommonTileView_0' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, EditColorButton) == 0x000318, "Member 'UBP_LocalPlayerBannerEditor_C::EditColorButton' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, FoundersNoteText) == 0x000320, "Member 'UBP_LocalPlayerBannerEditor_C::FoundersNoteText' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, HomebaseBanner) == 0x000328, "Member 'UBP_LocalPlayerBannerEditor_C::HomebaseBanner' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, HomebaseImage) == 0x000330, "Member 'UBP_LocalPlayerBannerEditor_C::HomebaseImage' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, IconBangWrapper) == 0x000338, "Member 'UBP_LocalPlayerBannerEditor_C::IconBangWrapper' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, LeftArrowButton) == 0x000340, "Member 'UBP_LocalPlayerBannerEditor_C::LeftArrowButton' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, LeftCategoryBang) == 0x000348, "Member 'UBP_LocalPlayerBannerEditor_C::LeftCategoryBang' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, LeftTriggerAction) == 0x000350, "Member 'UBP_LocalPlayerBannerEditor_C::LeftTriggerAction' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, RightArrowButton) == 0x000358, "Member 'UBP_LocalPlayerBannerEditor_C::RightArrowButton' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, RightCategoryBang) == 0x000360, "Member 'UBP_LocalPlayerBannerEditor_C::RightCategoryBang' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, RightTriggerAction) == 0x000368, "Member 'UBP_LocalPlayerBannerEditor_C::RightTriggerAction' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, CloseBannerEditor) == 0x000370, "Member 'UBP_LocalPlayerBannerEditor_C::CloseBannerEditor' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, IconCategoryIndex) == 0x000380, "Member 'UBP_LocalPlayerBannerEditor_C::IconCategoryIndex' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, ColorCategoryIndex) == 0x000384, "Member 'UBP_LocalPlayerBannerEditor_C::ColorCategoryIndex' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, CurrentCategory) == 0x000388, "Member 'UBP_LocalPlayerBannerEditor_C::CurrentCategory' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, bViewingIcons) == 0x00038C, "Member 'UBP_LocalPlayerBannerEditor_C::bViewingIcons' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, bPickingTile) == 0x00038D, "Member 'UBP_LocalPlayerBannerEditor_C::bPickingTile' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, TempChosenIcon) == 0x000390, "Member 'UBP_LocalPlayerBannerEditor_C::TempChosenIcon' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, TempChosenColor) == 0x000394, "Member 'UBP_LocalPlayerBannerEditor_C::TempChosenColor' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, ButtonGroup) == 0x000398, "Member 'UBP_LocalPlayerBannerEditor_C::ButtonGroup' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, UpdateBangTimerHandle) == 0x0003A0, "Member 'UBP_LocalPlayerBannerEditor_C::UpdateBangTimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, bIsActiveWidget) == 0x0003A8, "Member 'UBP_LocalPlayerBannerEditor_C::bIsActiveWidget' has a wrong offset!");

}
