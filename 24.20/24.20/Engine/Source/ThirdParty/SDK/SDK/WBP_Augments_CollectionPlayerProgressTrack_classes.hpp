#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWBP_Augments_CollectionPlayerProgressTrack_C final : public UAthenaCollectionPlayerProgressContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UUniformGridPanel*                      GridPanel;
	class UImage*                                 Image_RaceTrack;
	class UImage*                                 Image_SetMaxnumber;
	class UCommonTextBlock*                       Text_Discovered;
	class UCommonTextBlock*                       Text_Title;
	class FText                                   Title_Text;

public:
	void BP_OnPlayerProgressContainerReset();
	void BP_OnPlayerProgressEntriesCreated(const TArray<class UAthenaCollectionPlayerProgress*>& PlayerProgressEntries, int32 NumToCollect);
	void BP_OverrideCategoryTitle(const class FText& OverrideTitle);
	void Construct();
	void ExecuteUbergraph_WBP_Augments_CollectionPlayerProgressTrack(int32 EntryPoint);
	void PlayIntro();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Augments_CollectionPlayerProgressTrack_C">();
	}
	static class UWBP_Augments_CollectionPlayerProgressTrack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Augments_CollectionPlayerProgressTrack_C>();
	}
};
static_assert(alignof(UWBP_Augments_CollectionPlayerProgressTrack_C) == 0x000008, "Wrong alignment on UWBP_Augments_CollectionPlayerProgressTrack_C");
static_assert(sizeof(UWBP_Augments_CollectionPlayerProgressTrack_C) == 0x000320, "Wrong size on UWBP_Augments_CollectionPlayerProgressTrack_C");
static_assert(offsetof(UWBP_Augments_CollectionPlayerProgressTrack_C, UberGraphFrame) == 0x0002D0, "Member 'UWBP_Augments_CollectionPlayerProgressTrack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_CollectionPlayerProgressTrack_C, Intro) == 0x0002D8, "Member 'UWBP_Augments_CollectionPlayerProgressTrack_C::Intro' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_CollectionPlayerProgressTrack_C, GridPanel) == 0x0002E0, "Member 'UWBP_Augments_CollectionPlayerProgressTrack_C::GridPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_CollectionPlayerProgressTrack_C, Image_RaceTrack) == 0x0002E8, "Member 'UWBP_Augments_CollectionPlayerProgressTrack_C::Image_RaceTrack' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_CollectionPlayerProgressTrack_C, Image_SetMaxnumber) == 0x0002F0, "Member 'UWBP_Augments_CollectionPlayerProgressTrack_C::Image_SetMaxnumber' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_CollectionPlayerProgressTrack_C, Text_Discovered) == 0x0002F8, "Member 'UWBP_Augments_CollectionPlayerProgressTrack_C::Text_Discovered' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_CollectionPlayerProgressTrack_C, Text_Title) == 0x000300, "Member 'UWBP_Augments_CollectionPlayerProgressTrack_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UWBP_Augments_CollectionPlayerProgressTrack_C, Title_Text) == 0x000308, "Member 'UWBP_Augments_CollectionPlayerProgressTrack_C::Title_Text' has a wrong offset!");

}
