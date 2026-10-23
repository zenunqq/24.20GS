#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaCustomizationSlotButton_C final : public UAthenaCustomizationSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       QuickSaveConfirmation;
	class UWidgetAnimation*                       Modified;
	class UWidgetAnimation*                       WarningPulse;
	class UWidgetAnimation*                       OnBackedOutFromSelection;
	class UWidgetAnimation*                       OnConfirmedSelection;
	class UWidgetAnimation*                       OnSelected;
	class UWidgetAnimation*                       OnHover;
	class UImage*                                 ConfirmSelectionFlash;
	class UImage*                                 ConfirmSelectionShine;
	class UImage*                                 ExclusiveFill;
	class UOverlay*                               ExclusiveWarningOvr;
	class UFortLazyImage*                         Image_Archived;
	class UFortLazyImage*                         Image_empty;
	class UImage*                                 InactiveFilledSlot;
	class UImage*                                 QuickSaveShine;
	class UCommonTextBlock*                       Text_Plus;
	class FText                                   TooltipBody;
	class FText                                   TooltipHeader;
	bool                                          ShowSubTypeIcon;
	uint8                                         Pad_15B9[0x7];
	struct FSlateBrush                            SubTypeIcon;
	bool                                          bSuppressTooltip;
	uint8                                         Pad_1681[0x7];
	double                                        TypeIconVerticalOffset;
	class UMaterialInstanceDynamic*               ImageEmptyMID;
	double                                        WidthThreshold;
	bool                                          IsModified;

public:
	void Construct();
	void ExecuteUbergraph_AthenaCustomizationSlotButton(int32 EntryPoint);
	class FString GetSlotDebugName();
	void HandleActiveStateChanged(bool CosmeticAvailable, bool Active);
	void HandleWidthChanged(double Width);
	void OnArchivedStatusUpdated(bool bArchived);
	void OnCardImageAndWidthChanged(const TSoftObjectPtr<class UTexture2D>& Image, float Width);
	void OnCustomizationSlotActiveStateChanged(bool bInAttachableCosmeticAvailable, bool bInActive);
	void OnModifiedStatusUpdated(bool bIsModified);
	void OnUpdateExclusiveWarning(bool bShouldWarn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationSlotButton_C">();
	}
	static class UAthenaCustomizationSlotButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationSlotButton_C>();
	}
};
static_assert(alignof(UAthenaCustomizationSlotButton_C) == 0x000010, "Wrong alignment on UAthenaCustomizationSlotButton_C");
static_assert(sizeof(UAthenaCustomizationSlotButton_C) == 0x0016B0, "Wrong size on UAthenaCustomizationSlotButton_C");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, UberGraphFrame) == 0x001500, "Member 'UAthenaCustomizationSlotButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, QuickSaveConfirmation) == 0x001508, "Member 'UAthenaCustomizationSlotButton_C::QuickSaveConfirmation' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, Modified) == 0x001510, "Member 'UAthenaCustomizationSlotButton_C::Modified' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, WarningPulse) == 0x001518, "Member 'UAthenaCustomizationSlotButton_C::WarningPulse' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, OnBackedOutFromSelection) == 0x001520, "Member 'UAthenaCustomizationSlotButton_C::OnBackedOutFromSelection' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, OnConfirmedSelection) == 0x001528, "Member 'UAthenaCustomizationSlotButton_C::OnConfirmedSelection' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, OnSelected) == 0x001530, "Member 'UAthenaCustomizationSlotButton_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, OnHover) == 0x001538, "Member 'UAthenaCustomizationSlotButton_C::OnHover' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, ConfirmSelectionFlash) == 0x001540, "Member 'UAthenaCustomizationSlotButton_C::ConfirmSelectionFlash' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, ConfirmSelectionShine) == 0x001548, "Member 'UAthenaCustomizationSlotButton_C::ConfirmSelectionShine' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, ExclusiveFill) == 0x001550, "Member 'UAthenaCustomizationSlotButton_C::ExclusiveFill' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, ExclusiveWarningOvr) == 0x001558, "Member 'UAthenaCustomizationSlotButton_C::ExclusiveWarningOvr' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, Image_Archived) == 0x001560, "Member 'UAthenaCustomizationSlotButton_C::Image_Archived' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, Image_empty) == 0x001568, "Member 'UAthenaCustomizationSlotButton_C::Image_empty' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, InactiveFilledSlot) == 0x001570, "Member 'UAthenaCustomizationSlotButton_C::InactiveFilledSlot' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, QuickSaveShine) == 0x001578, "Member 'UAthenaCustomizationSlotButton_C::QuickSaveShine' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, Text_Plus) == 0x001580, "Member 'UAthenaCustomizationSlotButton_C::Text_Plus' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, TooltipBody) == 0x001588, "Member 'UAthenaCustomizationSlotButton_C::TooltipBody' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, TooltipHeader) == 0x0015A0, "Member 'UAthenaCustomizationSlotButton_C::TooltipHeader' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, ShowSubTypeIcon) == 0x0015B8, "Member 'UAthenaCustomizationSlotButton_C::ShowSubTypeIcon' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, SubTypeIcon) == 0x0015C0, "Member 'UAthenaCustomizationSlotButton_C::SubTypeIcon' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, bSuppressTooltip) == 0x001680, "Member 'UAthenaCustomizationSlotButton_C::bSuppressTooltip' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, TypeIconVerticalOffset) == 0x001688, "Member 'UAthenaCustomizationSlotButton_C::TypeIconVerticalOffset' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, ImageEmptyMID) == 0x001690, "Member 'UAthenaCustomizationSlotButton_C::ImageEmptyMID' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, WidthThreshold) == 0x001698, "Member 'UAthenaCustomizationSlotButton_C::WidthThreshold' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, IsModified) == 0x0016A0, "Member 'UAthenaCustomizationSlotButton_C::IsModified' has a wrong offset!");

}
