#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCareerScreen_C final : public UAthenaCareerScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetSwitcher*                        FeatDisplaySwitcher;
	class UCommonRichTextBlock*                   NoAchievementMessage;
	class UCommonTextBlock*                       SeasonHeadingTextLabel;
	class UWidgetSwitcher*                        Switcher;
	struct FDataTableRowHandle                    Input_ReplayCinematic;
	bool                                          AutoPlayVideo;
	uint8                                         Pad_5C9[0x7];
	class USoundBase*                             ReplayWhooshSound;
	class USoundBase*                             PageAppearSound;

public:
	void BP_OnActivated();
	void ExecuteUbergraph_CareerScreen(int32 EntryPoint);
	void OnInitialized();
	void PlayCinematic();
	void ReplayCinematic(bool* PassThrough);
	void ShowFeats(bool bHasCompletedFeats);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CareerScreen_C">();
	}
	static class UCareerScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCareerScreen_C>();
	}
};
static_assert(alignof(UCareerScreen_C) == 0x000008, "Wrong alignment on UCareerScreen_C");
static_assert(sizeof(UCareerScreen_C) == 0x0005E0, "Wrong size on UCareerScreen_C");
static_assert(offsetof(UCareerScreen_C, UberGraphFrame) == 0x000590, "Member 'UCareerScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, FeatDisplaySwitcher) == 0x000598, "Member 'UCareerScreen_C::FeatDisplaySwitcher' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, NoAchievementMessage) == 0x0005A0, "Member 'UCareerScreen_C::NoAchievementMessage' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, SeasonHeadingTextLabel) == 0x0005A8, "Member 'UCareerScreen_C::SeasonHeadingTextLabel' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, Switcher) == 0x0005B0, "Member 'UCareerScreen_C::Switcher' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, Input_ReplayCinematic) == 0x0005B8, "Member 'UCareerScreen_C::Input_ReplayCinematic' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, AutoPlayVideo) == 0x0005C8, "Member 'UCareerScreen_C::AutoPlayVideo' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, ReplayWhooshSound) == 0x0005D0, "Member 'UCareerScreen_C::ReplayWhooshSound' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, PageAppearSound) == 0x0005D8, "Member 'UCareerScreen_C::PageAppearSound' has a wrong offset!");

}
