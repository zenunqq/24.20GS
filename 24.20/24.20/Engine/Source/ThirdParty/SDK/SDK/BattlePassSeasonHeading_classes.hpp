#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"

namespace SDK
{

class UBattlePassSeasonHeading_C final : public UBattlePassSeasonHeading
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UFortLazyImage*                         HeaderImage;
	class UImage*                                 Image_Glow;
	class UCommonRichTextBlock*                   Text_BattlePassTitle;
	TSoftObjectPtr<class UTexture2D>              BattlePassStarImage;

public:
	void EventPlayIntro();
	void ExecuteUbergraph_BattlePassSeasonHeading(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattlePassSeasonHeading_C">();
	}
	static class UBattlePassSeasonHeading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassSeasonHeading_C>();
	}
};
static_assert(alignof(UBattlePassSeasonHeading_C) == 0x000008, "Wrong alignment on UBattlePassSeasonHeading_C");
static_assert(sizeof(UBattlePassSeasonHeading_C) == 0x0002E8, "Wrong size on UBattlePassSeasonHeading_C");
static_assert(offsetof(UBattlePassSeasonHeading_C, UberGraphFrame) == 0x000298, "Member 'UBattlePassSeasonHeading_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattlePassSeasonHeading_C, Intro) == 0x0002A0, "Member 'UBattlePassSeasonHeading_C::Intro' has a wrong offset!");
static_assert(offsetof(UBattlePassSeasonHeading_C, HeaderImage) == 0x0002A8, "Member 'UBattlePassSeasonHeading_C::HeaderImage' has a wrong offset!");
static_assert(offsetof(UBattlePassSeasonHeading_C, Image_Glow) == 0x0002B0, "Member 'UBattlePassSeasonHeading_C::Image_Glow' has a wrong offset!");
static_assert(offsetof(UBattlePassSeasonHeading_C, Text_BattlePassTitle) == 0x0002B8, "Member 'UBattlePassSeasonHeading_C::Text_BattlePassTitle' has a wrong offset!");
static_assert(offsetof(UBattlePassSeasonHeading_C, BattlePassStarImage) == 0x0002C0, "Member 'UBattlePassSeasonHeading_C::BattlePassStarImage' has a wrong offset!");

}
