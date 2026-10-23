#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UShowdownTournamentPosterBack_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       CommonTextBlock_EventDates;
	class UCommonTextBlock*                       CommonTextBlock_MetaDate;
	class UCommonTextBlock*                       CommonTextBlock_MetaTitle;
	class UCommonTextBlock*                       DateText;
	class UCommonTextBlock*                       FlavorText;
	class UImage*                                 Image_FooterWatermark;
	class UScaleBox*                              ScaleBoxTournamentTitle;
	class UShowdownPin_C*                         ShowdownPin;
	class USizeBox*                               SizeBox_Pin;
	class UCommonTextBlock*                       TitleLine1;
	class UCommonTextBlock*                       TitleLine2;
	class UTournamentDateEntry_C*                 TournamentDateEntry;
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_0;
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_1;
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_2;
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_3;
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_4;
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_5;
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_6;
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_7;
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_8;
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_9;
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_10;
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_11;
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_12;
	class UUniformGridPanel*                      UniformGridPanel_DateGrid;

public:
	void Construct();
	void EventColorize();
	void EventPopulateEventWindowData();
	void ExecuteUbergraph_ShowdownTournamentPosterBack(int32 EntryPoint);
	void GetTournamentDateText(class FText* TournamentDate);
	void RefreshDataBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownTournamentPosterBack_C">();
	}
	static class UShowdownTournamentPosterBack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownTournamentPosterBack_C>();
	}
};
static_assert(alignof(UShowdownTournamentPosterBack_C) == 0x000008, "Wrong alignment on UShowdownTournamentPosterBack_C");
static_assert(sizeof(UShowdownTournamentPosterBack_C) == 0x0007F0, "Wrong size on UShowdownTournamentPosterBack_C");
static_assert(offsetof(UShowdownTournamentPosterBack_C, UberGraphFrame) == 0x000718, "Member 'UShowdownTournamentPosterBack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, CommonTextBlock_EventDates) == 0x000720, "Member 'UShowdownTournamentPosterBack_C::CommonTextBlock_EventDates' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, CommonTextBlock_MetaDate) == 0x000728, "Member 'UShowdownTournamentPosterBack_C::CommonTextBlock_MetaDate' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, CommonTextBlock_MetaTitle) == 0x000730, "Member 'UShowdownTournamentPosterBack_C::CommonTextBlock_MetaTitle' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, DateText) == 0x000738, "Member 'UShowdownTournamentPosterBack_C::DateText' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, FlavorText) == 0x000740, "Member 'UShowdownTournamentPosterBack_C::FlavorText' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, Image_FooterWatermark) == 0x000748, "Member 'UShowdownTournamentPosterBack_C::Image_FooterWatermark' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, ScaleBoxTournamentTitle) == 0x000750, "Member 'UShowdownTournamentPosterBack_C::ScaleBoxTournamentTitle' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, ShowdownPin) == 0x000758, "Member 'UShowdownTournamentPosterBack_C::ShowdownPin' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, SizeBox_Pin) == 0x000760, "Member 'UShowdownTournamentPosterBack_C::SizeBox_Pin' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TitleLine1) == 0x000768, "Member 'UShowdownTournamentPosterBack_C::TitleLine1' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TitleLine2) == 0x000770, "Member 'UShowdownTournamentPosterBack_C::TitleLine2' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TournamentDateEntry) == 0x000778, "Member 'UShowdownTournamentPosterBack_C::TournamentDateEntry' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TournamentDateEntry_C_0) == 0x000780, "Member 'UShowdownTournamentPosterBack_C::TournamentDateEntry_C_0' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TournamentDateEntry_C_1) == 0x000788, "Member 'UShowdownTournamentPosterBack_C::TournamentDateEntry_C_1' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TournamentDateEntry_C_2) == 0x000790, "Member 'UShowdownTournamentPosterBack_C::TournamentDateEntry_C_2' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TournamentDateEntry_C_3) == 0x000798, "Member 'UShowdownTournamentPosterBack_C::TournamentDateEntry_C_3' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TournamentDateEntry_C_4) == 0x0007A0, "Member 'UShowdownTournamentPosterBack_C::TournamentDateEntry_C_4' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TournamentDateEntry_C_5) == 0x0007A8, "Member 'UShowdownTournamentPosterBack_C::TournamentDateEntry_C_5' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TournamentDateEntry_C_6) == 0x0007B0, "Member 'UShowdownTournamentPosterBack_C::TournamentDateEntry_C_6' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TournamentDateEntry_C_7) == 0x0007B8, "Member 'UShowdownTournamentPosterBack_C::TournamentDateEntry_C_7' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TournamentDateEntry_C_8) == 0x0007C0, "Member 'UShowdownTournamentPosterBack_C::TournamentDateEntry_C_8' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TournamentDateEntry_C_9) == 0x0007C8, "Member 'UShowdownTournamentPosterBack_C::TournamentDateEntry_C_9' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TournamentDateEntry_C_10) == 0x0007D0, "Member 'UShowdownTournamentPosterBack_C::TournamentDateEntry_C_10' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TournamentDateEntry_C_11) == 0x0007D8, "Member 'UShowdownTournamentPosterBack_C::TournamentDateEntry_C_11' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, TournamentDateEntry_C_12) == 0x0007E0, "Member 'UShowdownTournamentPosterBack_C::TournamentDateEntry_C_12' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterBack_C, UniformGridPanel_DateGrid) == 0x0007E8, "Member 'UShowdownTournamentPosterBack_C::UniformGridPanel_DateGrid' has a wrong offset!");

}
