#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Slate_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BattlePassBase_structs.hpp"
#include "BattlePassBase_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBPS24_LandingPageButton_C final : public UBattlePassLandingPageButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected_StateForceOnOpen;
	class UWidgetAnimation*                       UnSelected_PC_Background;
	class UWidgetAnimation*                       Selected_PC_BottomBar;
	class UWidgetAnimation*                       burst;
	class UWidgetAnimation*                       Selected_ALL;
	class UImage*                                 Image_Background;
	class UImage*                                 Image_Disabled;
	class UImage*                                 Image_Lock_Purple;
	class UImage*                                 Image_PriceBg;
	class UImage*                                 Image_selected_LR;
	class UImage*                                 Image_selected_TB;
	class USizeBox*                               InputActionBox;
	class UOverlay*                               Overlay_InputAction;
	class UCommonRichTextBlock*                   RichText_Hover;
	class UCommonRichTextBlock*                   RichText_Title;
	class UImage*                                 ShadowGradient;
	class UWBP_Violator_C*                        WBP_Violator;
	ETextJustify                                  TileTextJustification;
	uint8                                         Pad_16F1[0x7];
	class UMaterialInterface*                     Material;
	struct FVector2D                              In_Size;
	class FText                                   Empty_text;
	bool                                          IsDisabled;
	uint8                                         Pad_1729[0x7];
	TMulticastInlineDelegate<void(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, const class FString& ButtonID)> OnShowButtonDetails;
	bool                                          HasExtraLock;
	uint8                                         Pad_1741[0x7];
	class FText                                   TileTextHover;
	bool                                          IsSelected;
	uint8                                         Pad_1761[0x7];
	class FString                                 ButtonID;
	TArray<class UWidget*>                        LandingPageButtons;
	class UWidgetAnimation*                       HoverAnimToUse;
	class UWidgetAnimation*                       UnHoverAnimToUse;
	bool                                          UnHoveredWithMouse;
	bool                                          ForcedUnHover;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void Construct();
	void ConvertWhiteTextToHoveredColor(bool Hover);
	void Destruct();
	class UWidgetAnimation* DetermineSelectedAnim(bool Hover);
	void ExecuteUbergraph_BPS24_LandingPageButton(int32 EntryPoint);
	void ForceUnHover();
	void InputChanged(ECommonInputType bNewInputType);
	void IsCompetingButtonSelected(bool* Return);
	void OnDisplayDetailsUpdated(const struct FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails);
	void OnInitialized();
	void OnSetTileImageMaterial(class UMaterialInstance* Material_0);
	void OnShowDisplayDetails();
	void OnSubscriptionTextureLoaded(class UTexture2D* Texture);
	void Play_intro();
	void PreConstruct(bool IsDesignTime);
	void SetExtraLock(bool ExtraLock);
	void UnHoverOtherLandingPageButtons();
	void UpdateDisplayBehaviorFromData(const struct FBattlePassLandingPageButtonDisplayBehaviorData& BehaviorData);
	void UpdateStatusIcons();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_LandingPageButton_C">();
	}
	static class UBPS24_LandingPageButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_LandingPageButton_C>();
	}
};
static_assert(alignof(UBPS24_LandingPageButton_C) == 0x000010, "Wrong alignment on UBPS24_LandingPageButton_C");
static_assert(sizeof(UBPS24_LandingPageButton_C) == 0x0017A0, "Wrong size on UBPS24_LandingPageButton_C");
static_assert(offsetof(UBPS24_LandingPageButton_C, UberGraphFrame) == 0x001660, "Member 'UBPS24_LandingPageButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, Selected_StateForceOnOpen) == 0x001668, "Member 'UBPS24_LandingPageButton_C::Selected_StateForceOnOpen' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, UnSelected_PC_Background) == 0x001670, "Member 'UBPS24_LandingPageButton_C::UnSelected_PC_Background' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, Selected_PC_BottomBar) == 0x001678, "Member 'UBPS24_LandingPageButton_C::Selected_PC_BottomBar' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, burst) == 0x001680, "Member 'UBPS24_LandingPageButton_C::burst' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, Selected_ALL) == 0x001688, "Member 'UBPS24_LandingPageButton_C::Selected_ALL' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, Image_Background) == 0x001690, "Member 'UBPS24_LandingPageButton_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, Image_Disabled) == 0x001698, "Member 'UBPS24_LandingPageButton_C::Image_Disabled' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, Image_Lock_Purple) == 0x0016A0, "Member 'UBPS24_LandingPageButton_C::Image_Lock_Purple' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, Image_PriceBg) == 0x0016A8, "Member 'UBPS24_LandingPageButton_C::Image_PriceBg' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, Image_selected_LR) == 0x0016B0, "Member 'UBPS24_LandingPageButton_C::Image_selected_LR' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, Image_selected_TB) == 0x0016B8, "Member 'UBPS24_LandingPageButton_C::Image_selected_TB' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, InputActionBox) == 0x0016C0, "Member 'UBPS24_LandingPageButton_C::InputActionBox' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, Overlay_InputAction) == 0x0016C8, "Member 'UBPS24_LandingPageButton_C::Overlay_InputAction' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, RichText_Hover) == 0x0016D0, "Member 'UBPS24_LandingPageButton_C::RichText_Hover' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, RichText_Title) == 0x0016D8, "Member 'UBPS24_LandingPageButton_C::RichText_Title' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, ShadowGradient) == 0x0016E0, "Member 'UBPS24_LandingPageButton_C::ShadowGradient' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, WBP_Violator) == 0x0016E8, "Member 'UBPS24_LandingPageButton_C::WBP_Violator' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, TileTextJustification) == 0x0016F0, "Member 'UBPS24_LandingPageButton_C::TileTextJustification' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, Material) == 0x0016F8, "Member 'UBPS24_LandingPageButton_C::Material' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, In_Size) == 0x001700, "Member 'UBPS24_LandingPageButton_C::In_Size' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, Empty_text) == 0x001710, "Member 'UBPS24_LandingPageButton_C::Empty_text' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, IsDisabled) == 0x001728, "Member 'UBPS24_LandingPageButton_C::IsDisabled' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, OnShowButtonDetails) == 0x001730, "Member 'UBPS24_LandingPageButton_C::OnShowButtonDetails' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, HasExtraLock) == 0x001740, "Member 'UBPS24_LandingPageButton_C::HasExtraLock' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, TileTextHover) == 0x001748, "Member 'UBPS24_LandingPageButton_C::TileTextHover' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, IsSelected) == 0x001760, "Member 'UBPS24_LandingPageButton_C::IsSelected' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, ButtonID) == 0x001768, "Member 'UBPS24_LandingPageButton_C::ButtonID' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, LandingPageButtons) == 0x001778, "Member 'UBPS24_LandingPageButton_C::LandingPageButtons' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, HoverAnimToUse) == 0x001788, "Member 'UBPS24_LandingPageButton_C::HoverAnimToUse' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, UnHoverAnimToUse) == 0x001790, "Member 'UBPS24_LandingPageButton_C::UnHoverAnimToUse' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, UnHoveredWithMouse) == 0x001798, "Member 'UBPS24_LandingPageButton_C::UnHoveredWithMouse' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPageButton_C, ForcedUnHover) == 0x001799, "Member 'UBPS24_LandingPageButton_C::ForcedUnHover' has a wrong offset!");

}
