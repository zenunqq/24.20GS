#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBladesMenu_XpBar_C final : public UFortSeasonDataWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Backing_Color;
	class UImage*                                 Backing_Darken;
	class UImage*                                 Backing_Outline;
	class UImage*                                 Image_108;
	class UImage*                                 Image_198;
	class UImage*                                 Image_355;
	class UImage*                                 Image_480;
	class UImage*                                 Image_RaceTrack;
	class UBorder*                                RestedXPTextBox;
	class UCommonRichTextBlock*                   RichText_CurrentLevel;
	class UCommonRichTextBlock*                   RichText_Level;
	int32                                         Max_BPLevel_for_Rewards;

public:
	void ExecuteUbergraph_BladesMenu_XpBar(int32 EntryPoint);
	void OnLevelChanged();
	void OnProgressUpdated();
	void OnSuperCharged();
	void OnUpdatedRestedState(const bool bIsRested);
	void Update_Text();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BladesMenu_XpBar_C">();
	}
	static class UBladesMenu_XpBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBladesMenu_XpBar_C>();
	}
};
static_assert(alignof(UBladesMenu_XpBar_C) == 0x000008, "Wrong alignment on UBladesMenu_XpBar_C");
static_assert(sizeof(UBladesMenu_XpBar_C) == 0x0002F8, "Wrong size on UBladesMenu_XpBar_C");
static_assert(offsetof(UBladesMenu_XpBar_C, UberGraphFrame) == 0x000290, "Member 'UBladesMenu_XpBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBladesMenu_XpBar_C, Backing_Color) == 0x000298, "Member 'UBladesMenu_XpBar_C::Backing_Color' has a wrong offset!");
static_assert(offsetof(UBladesMenu_XpBar_C, Backing_Darken) == 0x0002A0, "Member 'UBladesMenu_XpBar_C::Backing_Darken' has a wrong offset!");
static_assert(offsetof(UBladesMenu_XpBar_C, Backing_Outline) == 0x0002A8, "Member 'UBladesMenu_XpBar_C::Backing_Outline' has a wrong offset!");
static_assert(offsetof(UBladesMenu_XpBar_C, Image_108) == 0x0002B0, "Member 'UBladesMenu_XpBar_C::Image_108' has a wrong offset!");
static_assert(offsetof(UBladesMenu_XpBar_C, Image_198) == 0x0002B8, "Member 'UBladesMenu_XpBar_C::Image_198' has a wrong offset!");
static_assert(offsetof(UBladesMenu_XpBar_C, Image_355) == 0x0002C0, "Member 'UBladesMenu_XpBar_C::Image_355' has a wrong offset!");
static_assert(offsetof(UBladesMenu_XpBar_C, Image_480) == 0x0002C8, "Member 'UBladesMenu_XpBar_C::Image_480' has a wrong offset!");
static_assert(offsetof(UBladesMenu_XpBar_C, Image_RaceTrack) == 0x0002D0, "Member 'UBladesMenu_XpBar_C::Image_RaceTrack' has a wrong offset!");
static_assert(offsetof(UBladesMenu_XpBar_C, RestedXPTextBox) == 0x0002D8, "Member 'UBladesMenu_XpBar_C::RestedXPTextBox' has a wrong offset!");
static_assert(offsetof(UBladesMenu_XpBar_C, RichText_CurrentLevel) == 0x0002E0, "Member 'UBladesMenu_XpBar_C::RichText_CurrentLevel' has a wrong offset!");
static_assert(offsetof(UBladesMenu_XpBar_C, RichText_Level) == 0x0002E8, "Member 'UBladesMenu_XpBar_C::RichText_Level' has a wrong offset!");
static_assert(offsetof(UBladesMenu_XpBar_C, Max_BPLevel_for_Rewards) == 0x0002F0, "Member 'UBladesMenu_XpBar_C::Max_BPLevel_for_Rewards' has a wrong offset!");

}
