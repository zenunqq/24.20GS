#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaCustomizationSlotButtonWrapper_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Populate;
	class UAthenaCustomizationSlotButton_C*       SlotButton;
	class FText                                   BannerDisplayName;
	EAthenaCustomizationCategory                  CustomizationType;
	uint8                                         Pad_2C1[0x7];
	TMulticastInlineDelegate<void(class UCommonButtonLegacy* Button, const struct FAthenaCustomizationParams& CustomizationParams)> OnSlotClicked;
	TMulticastInlineDelegate<void(class UAthenaCustomizationSlotButtonWrapper_C* ButtonWrapper, EAthenaCustomizationCategory CustomizationType, class FText BannerLabel, class FText CustomizationDescription, int32 SubslotIndex)> OnSlotHovered;
	class FText                                   CategoryDescription;
	TMulticastInlineDelegate<void()>              OnSlotUnhovered;
	int32                                         SubslotIndex;
	bool                                          bAllowUnownedItems;
	bool                                          bOneItemPerSlot;
	uint8                                         Pad_316[0x2];
	class UMaterialInstance*                      OverrideSlotImage;
	struct FGameplayTag                           RequiredSlotTag;
	uint8                                         Pad_324[0x4];
	double                                        SlottedItemCardWidth;
	TSoftObjectPtr<class UTexture2D>              emptytexture;

public:
	void AnimPopulateInternal(int32 ButtonIndex);
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void Construct();
	void ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper(int32 EntryPoint);
	void GetCustomizationSlotActiveState(bool* bCosmeticAvaialble, bool* bActive);
	void ResetPopulateAnimVisual();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationSlotButtonWrapper_C">();
	}
	static class UAthenaCustomizationSlotButtonWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationSlotButtonWrapper_C>();
	}
};
static_assert(alignof(UAthenaCustomizationSlotButtonWrapper_C) == 0x000008, "Wrong alignment on UAthenaCustomizationSlotButtonWrapper_C");
static_assert(sizeof(UAthenaCustomizationSlotButtonWrapper_C) == 0x000358, "Wrong size on UAthenaCustomizationSlotButtonWrapper_C");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, UberGraphFrame) == 0x000290, "Member 'UAthenaCustomizationSlotButtonWrapper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, Populate) == 0x000298, "Member 'UAthenaCustomizationSlotButtonWrapper_C::Populate' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, SlotButton) == 0x0002A0, "Member 'UAthenaCustomizationSlotButtonWrapper_C::SlotButton' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, BannerDisplayName) == 0x0002A8, "Member 'UAthenaCustomizationSlotButtonWrapper_C::BannerDisplayName' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, CustomizationType) == 0x0002C0, "Member 'UAthenaCustomizationSlotButtonWrapper_C::CustomizationType' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, OnSlotClicked) == 0x0002C8, "Member 'UAthenaCustomizationSlotButtonWrapper_C::OnSlotClicked' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, OnSlotHovered) == 0x0002D8, "Member 'UAthenaCustomizationSlotButtonWrapper_C::OnSlotHovered' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, CategoryDescription) == 0x0002E8, "Member 'UAthenaCustomizationSlotButtonWrapper_C::CategoryDescription' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, OnSlotUnhovered) == 0x000300, "Member 'UAthenaCustomizationSlotButtonWrapper_C::OnSlotUnhovered' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, SubslotIndex) == 0x000310, "Member 'UAthenaCustomizationSlotButtonWrapper_C::SubslotIndex' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, bAllowUnownedItems) == 0x000314, "Member 'UAthenaCustomizationSlotButtonWrapper_C::bAllowUnownedItems' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, bOneItemPerSlot) == 0x000315, "Member 'UAthenaCustomizationSlotButtonWrapper_C::bOneItemPerSlot' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, OverrideSlotImage) == 0x000318, "Member 'UAthenaCustomizationSlotButtonWrapper_C::OverrideSlotImage' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, RequiredSlotTag) == 0x000320, "Member 'UAthenaCustomizationSlotButtonWrapper_C::RequiredSlotTag' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, SlottedItemCardWidth) == 0x000328, "Member 'UAthenaCustomizationSlotButtonWrapper_C::SlottedItemCardWidth' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButtonWrapper_C, emptytexture) == 0x000330, "Member 'UAthenaCustomizationSlotButtonWrapper_C::emptytexture' has a wrong offset!");

}
