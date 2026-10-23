#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CharacterCollectionMapScreen_classes.hpp"

namespace SDK
{

class UBP_AthenaCollectionScreenMapCharacter_C final : public UAthenaCollectionScreenMapCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UHorizontalBox*                         HorizontalBox_Loading;
	class UImage*                                 Image_145;
	class UImage*                                 ProgressSpinner;
	class USafeZone*                              SafeZone_buttons;
	class USafeZone*                              SafeZone_screen;
	class UCommonTextBlock*                       TextMessage;
	class UCommonVisibilitySwitcher*              VisibilitySwitcher_Loading;
	class FText                                   ShowDetailsText;
	class FText                                   HideDetailsText;

public:
	void BP_OnActivated();
	void BP_OnFinishedLoading();
	void BP_OnStartedLoading();
	void Construct();
	void ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter(int32 EntryPoint);
	void PlayerProgressContainer_Event_0(class UBP_AthenaCollectionPlayerProgressTrack_C* PlayerProgressContainer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AthenaCollectionScreenMapCharacter_C">();
	}
	static class UBP_AthenaCollectionScreenMapCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AthenaCollectionScreenMapCharacter_C>();
	}
};
static_assert(alignof(UBP_AthenaCollectionScreenMapCharacter_C) == 0x000008, "Wrong alignment on UBP_AthenaCollectionScreenMapCharacter_C");
static_assert(sizeof(UBP_AthenaCollectionScreenMapCharacter_C) == 0x000798, "Wrong size on UBP_AthenaCollectionScreenMapCharacter_C");
static_assert(offsetof(UBP_AthenaCollectionScreenMapCharacter_C, UberGraphFrame) == 0x000720, "Member 'UBP_AthenaCollectionScreenMapCharacter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenMapCharacter_C, Intro) == 0x000728, "Member 'UBP_AthenaCollectionScreenMapCharacter_C::Intro' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenMapCharacter_C, HorizontalBox_Loading) == 0x000730, "Member 'UBP_AthenaCollectionScreenMapCharacter_C::HorizontalBox_Loading' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenMapCharacter_C, Image_145) == 0x000738, "Member 'UBP_AthenaCollectionScreenMapCharacter_C::Image_145' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenMapCharacter_C, ProgressSpinner) == 0x000740, "Member 'UBP_AthenaCollectionScreenMapCharacter_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenMapCharacter_C, SafeZone_buttons) == 0x000748, "Member 'UBP_AthenaCollectionScreenMapCharacter_C::SafeZone_buttons' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenMapCharacter_C, SafeZone_screen) == 0x000750, "Member 'UBP_AthenaCollectionScreenMapCharacter_C::SafeZone_screen' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenMapCharacter_C, TextMessage) == 0x000758, "Member 'UBP_AthenaCollectionScreenMapCharacter_C::TextMessage' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenMapCharacter_C, VisibilitySwitcher_Loading) == 0x000760, "Member 'UBP_AthenaCollectionScreenMapCharacter_C::VisibilitySwitcher_Loading' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenMapCharacter_C, ShowDetailsText) == 0x000768, "Member 'UBP_AthenaCollectionScreenMapCharacter_C::ShowDetailsText' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenMapCharacter_C, HideDetailsText) == 0x000780, "Member 'UBP_AthenaCollectionScreenMapCharacter_C::HideDetailsText' has a wrong offset!");

}
