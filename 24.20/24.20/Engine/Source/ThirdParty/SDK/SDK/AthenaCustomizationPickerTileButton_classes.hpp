#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaCustomizationPickerTileButton_C final : public UAthenaCustomizationPickerTileButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unarchived;
	class UWidgetAnimation*                       archived;
	class UWidgetAnimation*                       OnHover;
	class UImage*                                 ExclusiveFill;
	class UOverlay*                               ExclusiveWarningOvr;
	class UFortLazyImage*                         Image_Archived;
	class UFortLazyImage*                         Image_Equipped;
	class UOverlay*                               NullItemOverlay;
	class UWidgetSwitcher*                        RootWidgetSwitcher;
	class UImage*                                 UnownedDampen;
	bool                                          IsSlottedSomewhere;
	uint8                                         Pad_14C9[0x7];
	TMulticastInlineDelegate<void(class UWidgetSwitcher* WidgetSwitcher)> PickedButtonHovered;
	bool                                          DisplayAsArchived;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_AthenaCustomizationPickerTileButton(int32 EntryPoint);
	void HandleEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot);
	void OnArchivedStatusUpdated(bool bShowAsArchived, bool bUseAnimations);
	void OnChangeOwnedState(bool bOwned);
	void OnEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnUpdateExclusiveWarning(bool bShouldWarn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationPickerTileButton_C">();
	}
	static class UAthenaCustomizationPickerTileButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationPickerTileButton_C>();
	}
};
static_assert(alignof(UAthenaCustomizationPickerTileButton_C) == 0x000010, "Wrong alignment on UAthenaCustomizationPickerTileButton_C");
static_assert(sizeof(UAthenaCustomizationPickerTileButton_C) == 0x0014F0, "Wrong size on UAthenaCustomizationPickerTileButton_C");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, UberGraphFrame) == 0x001470, "Member 'UAthenaCustomizationPickerTileButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, Unarchived) == 0x001478, "Member 'UAthenaCustomizationPickerTileButton_C::Unarchived' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, archived) == 0x001480, "Member 'UAthenaCustomizationPickerTileButton_C::archived' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, OnHover) == 0x001488, "Member 'UAthenaCustomizationPickerTileButton_C::OnHover' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, ExclusiveFill) == 0x001490, "Member 'UAthenaCustomizationPickerTileButton_C::ExclusiveFill' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, ExclusiveWarningOvr) == 0x001498, "Member 'UAthenaCustomizationPickerTileButton_C::ExclusiveWarningOvr' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, Image_Archived) == 0x0014A0, "Member 'UAthenaCustomizationPickerTileButton_C::Image_Archived' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, Image_Equipped) == 0x0014A8, "Member 'UAthenaCustomizationPickerTileButton_C::Image_Equipped' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, NullItemOverlay) == 0x0014B0, "Member 'UAthenaCustomizationPickerTileButton_C::NullItemOverlay' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, RootWidgetSwitcher) == 0x0014B8, "Member 'UAthenaCustomizationPickerTileButton_C::RootWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, UnownedDampen) == 0x0014C0, "Member 'UAthenaCustomizationPickerTileButton_C::UnownedDampen' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, IsSlottedSomewhere) == 0x0014C8, "Member 'UAthenaCustomizationPickerTileButton_C::IsSlottedSomewhere' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, PickedButtonHovered) == 0x0014D0, "Member 'UAthenaCustomizationPickerTileButton_C::PickedButtonHovered' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, DisplayAsArchived) == 0x0014E0, "Member 'UAthenaCustomizationPickerTileButton_C::DisplayAsArchived' has a wrong offset!");

}
