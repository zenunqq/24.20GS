#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UQualityLevelSelectScreen_C final : public UFortQualityLevelSelectScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UQualityModeSelectTile_C*               Button_SelectHighQuality_1;
	class USafeZone*                              Footersafezone;
	class UImage*                                 Image_93;
	class UCommonAnimatedSwitcher*                OptionMessage;
	class UCommonTextBlock*                       Text_QualityLevelCalculated;
	class UCommonTextBlock*                       Text_QualityTitle;
	class UHorizontalBox*                         TilesRow;

public:
	void Construct();
	void ExecuteUbergraph_QualityLevelSelectScreen(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QualityLevelSelectScreen_C">();
	}
	static class UQualityLevelSelectScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQualityLevelSelectScreen_C>();
	}
};
static_assert(alignof(UQualityLevelSelectScreen_C) == 0x000008, "Wrong alignment on UQualityLevelSelectScreen_C");
static_assert(sizeof(UQualityLevelSelectScreen_C) == 0x0005C8, "Wrong size on UQualityLevelSelectScreen_C");
static_assert(offsetof(UQualityLevelSelectScreen_C, UberGraphFrame) == 0x000580, "Member 'UQualityLevelSelectScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQualityLevelSelectScreen_C, Intro) == 0x000588, "Member 'UQualityLevelSelectScreen_C::Intro' has a wrong offset!");
static_assert(offsetof(UQualityLevelSelectScreen_C, Button_SelectHighQuality_1) == 0x000590, "Member 'UQualityLevelSelectScreen_C::Button_SelectHighQuality_1' has a wrong offset!");
static_assert(offsetof(UQualityLevelSelectScreen_C, Footersafezone) == 0x000598, "Member 'UQualityLevelSelectScreen_C::Footersafezone' has a wrong offset!");
static_assert(offsetof(UQualityLevelSelectScreen_C, Image_93) == 0x0005A0, "Member 'UQualityLevelSelectScreen_C::Image_93' has a wrong offset!");
static_assert(offsetof(UQualityLevelSelectScreen_C, OptionMessage) == 0x0005A8, "Member 'UQualityLevelSelectScreen_C::OptionMessage' has a wrong offset!");
static_assert(offsetof(UQualityLevelSelectScreen_C, Text_QualityLevelCalculated) == 0x0005B0, "Member 'UQualityLevelSelectScreen_C::Text_QualityLevelCalculated' has a wrong offset!");
static_assert(offsetof(UQualityLevelSelectScreen_C, Text_QualityTitle) == 0x0005B8, "Member 'UQualityLevelSelectScreen_C::Text_QualityTitle' has a wrong offset!");
static_assert(offsetof(UQualityLevelSelectScreen_C, TilesRow) == 0x0005C0, "Member 'UQualityLevelSelectScreen_C::TilesRow' has a wrong offset!");

}
