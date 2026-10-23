#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBPS24_SeasonalDataWidget_C final : public UFortSeasonDataWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_392;
	class UImage*                                 Image_RaceTrack;
	class UCommonRichTextBlock*                   RichText_CurrentLevel;
	class UCommonRichTextBlock*                   RichText_Level;
	class UVerticalBox*                           VerticalBox_5stars;
	class UMaterialInterface*                     Bp_Material;
	TMulticastInlineDelegate<void()>              On_Bp_Owned;
	bool                                          OwnsBattlePass;
	uint8                                         Pad_2D9[0x3];
	int32                                         MaxBPLevelForRewards;
	float                                         Value;

public:
	void ExecuteUbergraph_BPS24_SeasonalDataWidget(int32 EntryPoint);
	void OnBattlePassOwned();
	void OnLevelChanged();
	void OnProgressUpdated();
	void OnSuperCharged();
	void PreConstruct(bool IsDesignTime);
	void UpdateText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_SeasonalDataWidget_C">();
	}
	static class UBPS24_SeasonalDataWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_SeasonalDataWidget_C>();
	}
};
static_assert(alignof(UBPS24_SeasonalDataWidget_C) == 0x000008, "Wrong alignment on UBPS24_SeasonalDataWidget_C");
static_assert(sizeof(UBPS24_SeasonalDataWidget_C) == 0x0002E8, "Wrong size on UBPS24_SeasonalDataWidget_C");
static_assert(offsetof(UBPS24_SeasonalDataWidget_C, UberGraphFrame) == 0x000290, "Member 'UBPS24_SeasonalDataWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPS24_SeasonalDataWidget_C, Image_392) == 0x000298, "Member 'UBPS24_SeasonalDataWidget_C::Image_392' has a wrong offset!");
static_assert(offsetof(UBPS24_SeasonalDataWidget_C, Image_RaceTrack) == 0x0002A0, "Member 'UBPS24_SeasonalDataWidget_C::Image_RaceTrack' has a wrong offset!");
static_assert(offsetof(UBPS24_SeasonalDataWidget_C, RichText_CurrentLevel) == 0x0002A8, "Member 'UBPS24_SeasonalDataWidget_C::RichText_CurrentLevel' has a wrong offset!");
static_assert(offsetof(UBPS24_SeasonalDataWidget_C, RichText_Level) == 0x0002B0, "Member 'UBPS24_SeasonalDataWidget_C::RichText_Level' has a wrong offset!");
static_assert(offsetof(UBPS24_SeasonalDataWidget_C, VerticalBox_5stars) == 0x0002B8, "Member 'UBPS24_SeasonalDataWidget_C::VerticalBox_5stars' has a wrong offset!");
static_assert(offsetof(UBPS24_SeasonalDataWidget_C, Bp_Material) == 0x0002C0, "Member 'UBPS24_SeasonalDataWidget_C::Bp_Material' has a wrong offset!");
static_assert(offsetof(UBPS24_SeasonalDataWidget_C, On_Bp_Owned) == 0x0002C8, "Member 'UBPS24_SeasonalDataWidget_C::On_Bp_Owned' has a wrong offset!");
static_assert(offsetof(UBPS24_SeasonalDataWidget_C, OwnsBattlePass) == 0x0002D8, "Member 'UBPS24_SeasonalDataWidget_C::OwnsBattlePass' has a wrong offset!");
static_assert(offsetof(UBPS24_SeasonalDataWidget_C, MaxBPLevelForRewards) == 0x0002DC, "Member 'UBPS24_SeasonalDataWidget_C::MaxBPLevelForRewards' has a wrong offset!");
static_assert(offsetof(UBPS24_SeasonalDataWidget_C, Value) == 0x0002E0, "Member 'UBPS24_SeasonalDataWidget_C::Value' has a wrong offset!");

}
