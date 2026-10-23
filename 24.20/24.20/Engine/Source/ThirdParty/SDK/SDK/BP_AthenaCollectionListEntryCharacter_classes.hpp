#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBP_AthenaCollectionListEntryCharacter_C final : public UAthenaCollectionListEntryCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Select;
	class UWidgetAnimation*                       Hover;
	class UBorder*                                Border_Number;
	class UCommonBorder*                          HighScore;
	class UCommonTextBlock*                       HighScoreText;
	class UImage*                                 Image_Selected;
	class UFortVisualAttachment*                  ItemNameAttachment;
	class UCommonBorder*                          NewBang;
	class USizeBox*                               SizeBox_28;
	struct FLinearColor                           CompleteBorderColor;
	struct FLinearColor                           NewLocationBorderColor;
	class FText                                   CompleteText;
	class FText                                   NewLocationText;
	struct FSlateColor                            CompleteTextColor;
	struct FSlateColor                            NewLocationTextColor;
	bool                                          Hovered;
	bool                                          Selected;
	bool                                          HighScoreAllowed;

public:
	void BP_OnCollectionStateSet(EFortCollectedState CollectedState);
	void BP_OnDeselected();
	void BP_OnEntryImageSet();
	void BP_OnEntryReset();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_BP_AthenaCollectionListEntryCharacter(int32 EntryPoint);
	void Update_Hover_Parameter();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AthenaCollectionListEntryCharacter_C">();
	}
	static class UBP_AthenaCollectionListEntryCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AthenaCollectionListEntryCharacter_C>();
	}
};
static_assert(alignof(UBP_AthenaCollectionListEntryCharacter_C) == 0x000010, "Wrong alignment on UBP_AthenaCollectionListEntryCharacter_C");
static_assert(sizeof(UBP_AthenaCollectionListEntryCharacter_C) == 0x0015B0, "Wrong size on UBP_AthenaCollectionListEntryCharacter_C");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, UberGraphFrame) == 0x0014E0, "Member 'UBP_AthenaCollectionListEntryCharacter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, Select) == 0x0014E8, "Member 'UBP_AthenaCollectionListEntryCharacter_C::Select' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, Hover) == 0x0014F0, "Member 'UBP_AthenaCollectionListEntryCharacter_C::Hover' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, Border_Number) == 0x0014F8, "Member 'UBP_AthenaCollectionListEntryCharacter_C::Border_Number' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, HighScore) == 0x001500, "Member 'UBP_AthenaCollectionListEntryCharacter_C::HighScore' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, HighScoreText) == 0x001508, "Member 'UBP_AthenaCollectionListEntryCharacter_C::HighScoreText' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, Image_Selected) == 0x001510, "Member 'UBP_AthenaCollectionListEntryCharacter_C::Image_Selected' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, ItemNameAttachment) == 0x001518, "Member 'UBP_AthenaCollectionListEntryCharacter_C::ItemNameAttachment' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, NewBang) == 0x001520, "Member 'UBP_AthenaCollectionListEntryCharacter_C::NewBang' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, SizeBox_28) == 0x001528, "Member 'UBP_AthenaCollectionListEntryCharacter_C::SizeBox_28' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, CompleteBorderColor) == 0x001530, "Member 'UBP_AthenaCollectionListEntryCharacter_C::CompleteBorderColor' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, NewLocationBorderColor) == 0x001540, "Member 'UBP_AthenaCollectionListEntryCharacter_C::NewLocationBorderColor' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, CompleteText) == 0x001550, "Member 'UBP_AthenaCollectionListEntryCharacter_C::CompleteText' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, NewLocationText) == 0x001568, "Member 'UBP_AthenaCollectionListEntryCharacter_C::NewLocationText' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, CompleteTextColor) == 0x001580, "Member 'UBP_AthenaCollectionListEntryCharacter_C::CompleteTextColor' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, NewLocationTextColor) == 0x001594, "Member 'UBP_AthenaCollectionListEntryCharacter_C::NewLocationTextColor' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, Hovered) == 0x0015A8, "Member 'UBP_AthenaCollectionListEntryCharacter_C::Hovered' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, Selected) == 0x0015A9, "Member 'UBP_AthenaCollectionListEntryCharacter_C::Selected' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionListEntryCharacter_C, HighScoreAllowed) == 0x0015AA, "Member 'UBP_AthenaCollectionListEntryCharacter_C::HighScoreAllowed' has a wrong offset!");

}
