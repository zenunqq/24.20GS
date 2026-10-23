#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayerAugmentsUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UWBP_Augment_CollectionListEntry_C final : public UFortPlayerAugmentCollectionListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Select;
	class UWidgetAnimation*                       Hover;
	class UCommonBorder*                          Border_HighScore;
	class UCommonBorder*                          Border_NewBang;
	class UBorder*                                Border_Number;
	class UImage*                                 Image_Selected;
	class UFortVisualAttachment*                  ItemNameAttachment;
	class USizeBox*                               SizeBox_Root;
	class UCommonTextBlock*                       Text_HighScore;
	struct FLinearColor                           CompleteBorderColor;
	struct FLinearColor                           NewLocationBorderColor;
	class FText                                   CompleteText;
	class FText                                   NewLocationText;
	struct FSlateColor                            CompleteTextColor;
	struct FSlateColor                            NewLocationTextColor;
	bool                                          Hovered;
	bool                                          Selected;

public:
	void BP_OnCollectionStateSet(EFortCollectedState CollectedState);
	void BP_OnDeselected();
	void BP_OnEntryImageSet();
	void BP_OnEntryReset();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_WBP_Augment_CollectionListEntry(int32 EntryPoint);
	void Update_Hover_Parameter();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Augment_CollectionListEntry_C">();
	}
	static class UWBP_Augment_CollectionListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Augment_CollectionListEntry_C>();
	}
};
static_assert(alignof(UWBP_Augment_CollectionListEntry_C) == 0x000010, "Wrong alignment on UWBP_Augment_CollectionListEntry_C");
static_assert(sizeof(UWBP_Augment_CollectionListEntry_C) == 0x0015A0, "Wrong size on UWBP_Augment_CollectionListEntry_C");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, UberGraphFrame) == 0x0014D0, "Member 'UWBP_Augment_CollectionListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, Select) == 0x0014D8, "Member 'UWBP_Augment_CollectionListEntry_C::Select' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, Hover) == 0x0014E0, "Member 'UWBP_Augment_CollectionListEntry_C::Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, Border_HighScore) == 0x0014E8, "Member 'UWBP_Augment_CollectionListEntry_C::Border_HighScore' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, Border_NewBang) == 0x0014F0, "Member 'UWBP_Augment_CollectionListEntry_C::Border_NewBang' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, Border_Number) == 0x0014F8, "Member 'UWBP_Augment_CollectionListEntry_C::Border_Number' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, Image_Selected) == 0x001500, "Member 'UWBP_Augment_CollectionListEntry_C::Image_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, ItemNameAttachment) == 0x001508, "Member 'UWBP_Augment_CollectionListEntry_C::ItemNameAttachment' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, SizeBox_Root) == 0x001510, "Member 'UWBP_Augment_CollectionListEntry_C::SizeBox_Root' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, Text_HighScore) == 0x001518, "Member 'UWBP_Augment_CollectionListEntry_C::Text_HighScore' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, CompleteBorderColor) == 0x001520, "Member 'UWBP_Augment_CollectionListEntry_C::CompleteBorderColor' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, NewLocationBorderColor) == 0x001530, "Member 'UWBP_Augment_CollectionListEntry_C::NewLocationBorderColor' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, CompleteText) == 0x001540, "Member 'UWBP_Augment_CollectionListEntry_C::CompleteText' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, NewLocationText) == 0x001558, "Member 'UWBP_Augment_CollectionListEntry_C::NewLocationText' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, CompleteTextColor) == 0x001570, "Member 'UWBP_Augment_CollectionListEntry_C::CompleteTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, NewLocationTextColor) == 0x001584, "Member 'UWBP_Augment_CollectionListEntry_C::NewLocationTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, Hovered) == 0x001598, "Member 'UWBP_Augment_CollectionListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionListEntry_C, Selected) == 0x001599, "Member 'UWBP_Augment_CollectionListEntry_C::Selected' has a wrong offset!");

}
