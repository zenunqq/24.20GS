#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayerAugmentsUI_classes.hpp"

namespace SDK
{

class UWBP_Augment_CollectionScreen_C : public UFortPlayerAugmentCollectionScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UHorizontalBox*                         HorizontalBox_Loading;
	class UImage*                                 ProgressSpinner;
	class USpacer*                                Pusher_Categories;
	class UCommonTextBlock*                       TextMessage;
	class UCommonVisibilitySwitcher*              VisibilitySwitcher_Loading;
	class FText                                   ShowDetailsText;
	class FText                                   HideDetailsText;

public:
	void BP_OnActivated();
	void BP_OnFinishedLoading();
	void BP_OnStartedLoading();
	void ExecuteUbergraph_WBP_Augment_CollectionScreen(int32 EntryPoint);
	void PlayerProgressContainer_Event(class UWBP_Augments_CollectionPlayerProgressTrack_C* PlayerProgressContainer_0);
	void SequenceEvent__ENTRYPOINTWBP_Augment_CollectionScreen(class UWBP_Augments_CollectionPlayerProgressTrack_C* PlayerProgressContainer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Augment_CollectionScreen_C">();
	}
	static class UWBP_Augment_CollectionScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Augment_CollectionScreen_C>();
	}
};
static_assert(alignof(UWBP_Augment_CollectionScreen_C) == 0x000008, "Wrong alignment on UWBP_Augment_CollectionScreen_C");
static_assert(sizeof(UWBP_Augment_CollectionScreen_C) == 0x000710, "Wrong size on UWBP_Augment_CollectionScreen_C");
static_assert(offsetof(UWBP_Augment_CollectionScreen_C, UberGraphFrame) == 0x0006A8, "Member 'UWBP_Augment_CollectionScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreen_C, Intro) == 0x0006B0, "Member 'UWBP_Augment_CollectionScreen_C::Intro' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreen_C, HorizontalBox_Loading) == 0x0006B8, "Member 'UWBP_Augment_CollectionScreen_C::HorizontalBox_Loading' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreen_C, ProgressSpinner) == 0x0006C0, "Member 'UWBP_Augment_CollectionScreen_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreen_C, Pusher_Categories) == 0x0006C8, "Member 'UWBP_Augment_CollectionScreen_C::Pusher_Categories' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreen_C, TextMessage) == 0x0006D0, "Member 'UWBP_Augment_CollectionScreen_C::TextMessage' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreen_C, VisibilitySwitcher_Loading) == 0x0006D8, "Member 'UWBP_Augment_CollectionScreen_C::VisibilitySwitcher_Loading' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreen_C, ShowDetailsText) == 0x0006E0, "Member 'UWBP_Augment_CollectionScreen_C::ShowDetailsText' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreen_C, HideDetailsText) == 0x0006F8, "Member 'UWBP_Augment_CollectionScreen_C::HideDetailsText' has a wrong offset!");

}
