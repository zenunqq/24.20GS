#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UTournamentDateEntry_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonBorder*                          CommonBorder_DateContent;
	class UCommonTextBlock*                       CommonTextBlock_Date;
	class UCommonTextBlock*                       CommonTextBlock_Time;
	class UCommonTextBlock*                       CommonTextBlock_Title;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_EntryType;
	class UImage*                                 Image_Strkethrough;
	bool                                          isTitle;
	uint8                                         Pad_751[0x7];
	class FText                                   Title;

public:
	void RefreshDataBP();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TournamentDateEntry(int32 EntryPoint);
	void EventColor(const struct FFortTournamentDisplayInfo& showdownData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TournamentDateEntry_C">();
	}
	static class UTournamentDateEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTournamentDateEntry_C>();
	}
};
static_assert(alignof(UTournamentDateEntry_C) == 0x000008, "Wrong alignment on UTournamentDateEntry_C");
static_assert(sizeof(UTournamentDateEntry_C) == 0x000770, "Wrong size on UTournamentDateEntry_C");
static_assert(offsetof(UTournamentDateEntry_C, UberGraphFrame) == 0x000718, "Member 'UTournamentDateEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, CommonBorder_DateContent) == 0x000720, "Member 'UTournamentDateEntry_C::CommonBorder_DateContent' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, CommonTextBlock_Date) == 0x000728, "Member 'UTournamentDateEntry_C::CommonTextBlock_Date' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, CommonTextBlock_Time) == 0x000730, "Member 'UTournamentDateEntry_C::CommonTextBlock_Time' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, CommonTextBlock_Title) == 0x000738, "Member 'UTournamentDateEntry_C::CommonTextBlock_Title' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, CommonWidgetSwitcher_EntryType) == 0x000740, "Member 'UTournamentDateEntry_C::CommonWidgetSwitcher_EntryType' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, Image_Strkethrough) == 0x000748, "Member 'UTournamentDateEntry_C::Image_Strkethrough' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, isTitle) == 0x000750, "Member 'UTournamentDateEntry_C::isTitle' has a wrong offset!");
static_assert(offsetof(UTournamentDateEntry_C, Title) == 0x000758, "Member 'UTournamentDateEntry_C::Title' has a wrong offset!");

}
