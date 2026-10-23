#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UNormalBangWrapper_C final : public UFortBangWrapper_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       IntroSuperBang;
	class UWidgetAnimation*                       Intro;
	class UWidgetAnimation*                       TutorialGlow;
	class USizeBox*                               BangBox;
	class USizeBox*                               BigBang;
	class USizeBox*                               BigBangCount;
	class UCommonTextBlock*                       CommonTextBlock_0;
	class UNamedSlot*                             Content;
	class UCommonTextBlock*                       CountText;
	class UWidgetSwitcher*                        ModeSwitcher;
	class USizeBox*                               SmallBang;
	class USizeBox*                               SmallBangCount;
	class USizeBox*                               SuperBang;
	class UCommonBorder*                          TutorialBorder;
	bool                                          UseSmallVersion;
	uint8                                         Pad_321[0x3];
	int32                                         Count;
	bool                                          bUseSuperBangNoCount;
	bool                                          ShouldSuppressBang;

public:
	void Adjust_Bang_Image_Translation(const struct FVector2D& Translation);
	void ExecuteUbergraph_NormalBangWrapper(int32 EntryPoint);
	void InitialReset();
	void OnBangStateChanged(bool bEnabled, int32 Count_0);
	void OnStartCallout(class FName TutorialObjectiveName, ETutorialType TutorialType);
	void OnStopCallout();
	void PreConstruct(bool IsDesignTime);
	void SetShouldSuppressBang(bool ShouldSuppressBang_0);
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void TriggerIntro();
	void TriggerReset();
	void Update_Bang_Icon_Version(int32 InCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NormalBangWrapper_C">();
	}
	static class UNormalBangWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNormalBangWrapper_C>();
	}
};
static_assert(alignof(UNormalBangWrapper_C) == 0x000008, "Wrong alignment on UNormalBangWrapper_C");
static_assert(sizeof(UNormalBangWrapper_C) == 0x000330, "Wrong size on UNormalBangWrapper_C");
static_assert(offsetof(UNormalBangWrapper_C, UberGraphFrame) == 0x0002A8, "Member 'UNormalBangWrapper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, IntroSuperBang) == 0x0002B0, "Member 'UNormalBangWrapper_C::IntroSuperBang' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, Intro) == 0x0002B8, "Member 'UNormalBangWrapper_C::Intro' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, TutorialGlow) == 0x0002C0, "Member 'UNormalBangWrapper_C::TutorialGlow' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, BangBox) == 0x0002C8, "Member 'UNormalBangWrapper_C::BangBox' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, BigBang) == 0x0002D0, "Member 'UNormalBangWrapper_C::BigBang' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, BigBangCount) == 0x0002D8, "Member 'UNormalBangWrapper_C::BigBangCount' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, CommonTextBlock_0) == 0x0002E0, "Member 'UNormalBangWrapper_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, Content) == 0x0002E8, "Member 'UNormalBangWrapper_C::Content' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, CountText) == 0x0002F0, "Member 'UNormalBangWrapper_C::CountText' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, ModeSwitcher) == 0x0002F8, "Member 'UNormalBangWrapper_C::ModeSwitcher' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, SmallBang) == 0x000300, "Member 'UNormalBangWrapper_C::SmallBang' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, SmallBangCount) == 0x000308, "Member 'UNormalBangWrapper_C::SmallBangCount' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, SuperBang) == 0x000310, "Member 'UNormalBangWrapper_C::SuperBang' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, TutorialBorder) == 0x000318, "Member 'UNormalBangWrapper_C::TutorialBorder' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, UseSmallVersion) == 0x000320, "Member 'UNormalBangWrapper_C::UseSmallVersion' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, Count) == 0x000324, "Member 'UNormalBangWrapper_C::Count' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, bUseSuperBangNoCount) == 0x000328, "Member 'UNormalBangWrapper_C::bUseSuperBangNoCount' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, ShouldSuppressBang) == 0x000329, "Member 'UNormalBangWrapper_C::ShouldSuppressBang' has a wrong offset!");

}
