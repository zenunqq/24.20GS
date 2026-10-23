#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBP_AthenaCollectionPlayerProgressTrack_C final : public UAthenaCollectionPlayerProgressContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UUniformGridPanel*                      GridPanel_Friends;
	class UImage*                                 Image_RaceTrack;
	class UImage*                                 Image_SetMaxnumber;
	class UCommonTextBlock*                       Text_Title;
	class FText                                   Title_Text;

public:
	void BP_OnPlayerProgressContainerReset();
	void BP_OnPlayerProgressEntriesCreated(const TArray<class UAthenaCollectionPlayerProgress*>& PlayerProgressEntries, int32 NumToCollect);
	void Construct();
	void ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack(int32 EntryPoint);
	void PlayIntro();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AthenaCollectionPlayerProgressTrack_C">();
	}
	static class UBP_AthenaCollectionPlayerProgressTrack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AthenaCollectionPlayerProgressTrack_C>();
	}
};
static_assert(alignof(UBP_AthenaCollectionPlayerProgressTrack_C) == 0x000008, "Wrong alignment on UBP_AthenaCollectionPlayerProgressTrack_C");
static_assert(sizeof(UBP_AthenaCollectionPlayerProgressTrack_C) == 0x000318, "Wrong size on UBP_AthenaCollectionPlayerProgressTrack_C");
static_assert(offsetof(UBP_AthenaCollectionPlayerProgressTrack_C, UberGraphFrame) == 0x0002D0, "Member 'UBP_AthenaCollectionPlayerProgressTrack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionPlayerProgressTrack_C, Intro) == 0x0002D8, "Member 'UBP_AthenaCollectionPlayerProgressTrack_C::Intro' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionPlayerProgressTrack_C, GridPanel_Friends) == 0x0002E0, "Member 'UBP_AthenaCollectionPlayerProgressTrack_C::GridPanel_Friends' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionPlayerProgressTrack_C, Image_RaceTrack) == 0x0002E8, "Member 'UBP_AthenaCollectionPlayerProgressTrack_C::Image_RaceTrack' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionPlayerProgressTrack_C, Image_SetMaxnumber) == 0x0002F0, "Member 'UBP_AthenaCollectionPlayerProgressTrack_C::Image_SetMaxnumber' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionPlayerProgressTrack_C, Text_Title) == 0x0002F8, "Member 'UBP_AthenaCollectionPlayerProgressTrack_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionPlayerProgressTrack_C, Title_Text) == 0x000300, "Member 'UBP_AthenaCollectionPlayerProgressTrack_C::Title_Text' has a wrong offset!");

}
