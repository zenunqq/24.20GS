#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCosmeticLoadoutScreen_C final : public UFortCosmeticLoadoutScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UVerticalBox*                           LeftSideButtons;
	class UImage*                                 Panel;
	class UCommonTextBlock*                       PresetHeader;
	class USafeZone*                              SafeZone_BackButton;
	class USafeZone*                              SafeZone_CloseButton;
	class UCommonTextBlock*                       SaveSubHeader;
	class USizeBox*                               SizeBox_Mobile;
	class FText                                   BrowseHeaderText;
	class FText                                   SaveHeaderText;
	class FText                                   ApplyButtonText;
	class FText                                   SaveButtonText;

public:
	void BP_OnActivated();
	void ExecuteUbergraph_CosmeticLoadoutScreen(int32 EntryPoint);
	void OnFlavorForScreenMode(EFortCosmeticLoadoutScreenMode NewMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CosmeticLoadoutScreen_C">();
	}
	static class UCosmeticLoadoutScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCosmeticLoadoutScreen_C>();
	}
};
static_assert(alignof(UCosmeticLoadoutScreen_C) == 0x000008, "Wrong alignment on UCosmeticLoadoutScreen_C");
static_assert(sizeof(UCosmeticLoadoutScreen_C) == 0x0006D8, "Wrong size on UCosmeticLoadoutScreen_C");
static_assert(offsetof(UCosmeticLoadoutScreen_C, UberGraphFrame) == 0x000630, "Member 'UCosmeticLoadoutScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutScreen_C, Intro) == 0x000638, "Member 'UCosmeticLoadoutScreen_C::Intro' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutScreen_C, LeftSideButtons) == 0x000640, "Member 'UCosmeticLoadoutScreen_C::LeftSideButtons' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutScreen_C, Panel) == 0x000648, "Member 'UCosmeticLoadoutScreen_C::Panel' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutScreen_C, PresetHeader) == 0x000650, "Member 'UCosmeticLoadoutScreen_C::PresetHeader' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutScreen_C, SafeZone_BackButton) == 0x000658, "Member 'UCosmeticLoadoutScreen_C::SafeZone_BackButton' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutScreen_C, SafeZone_CloseButton) == 0x000660, "Member 'UCosmeticLoadoutScreen_C::SafeZone_CloseButton' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutScreen_C, SaveSubHeader) == 0x000668, "Member 'UCosmeticLoadoutScreen_C::SaveSubHeader' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutScreen_C, SizeBox_Mobile) == 0x000670, "Member 'UCosmeticLoadoutScreen_C::SizeBox_Mobile' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutScreen_C, BrowseHeaderText) == 0x000678, "Member 'UCosmeticLoadoutScreen_C::BrowseHeaderText' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutScreen_C, SaveHeaderText) == 0x000690, "Member 'UCosmeticLoadoutScreen_C::SaveHeaderText' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutScreen_C, ApplyButtonText) == 0x0006A8, "Member 'UCosmeticLoadoutScreen_C::ApplyButtonText' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutScreen_C, SaveButtonText) == 0x0006C0, "Member 'UCosmeticLoadoutScreen_C::SaveButtonText' has a wrong offset!");

}
