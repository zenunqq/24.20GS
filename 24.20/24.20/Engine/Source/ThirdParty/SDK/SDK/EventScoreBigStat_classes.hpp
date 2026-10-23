#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UEventScoreBigStat_C final : public UUserWidget
{
public:
	class UCommonBorder*                          CommonBorder_GoalScore;
	class URichTextBlock*                         RichTextBlock_GoalScore;
	class UCommonTextBlock*                       StatLabelText;
	class UCommonTextBlock*                       StatValueText;

public:
	void SetData(const class FText& Label, int32 Value, int32 ValueContext, const class FText& FormatterText, const struct FFortTournamentDisplayInfo& Tournament_Display_Info);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventScoreBigStat_C">();
	}
	static class UEventScoreBigStat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventScoreBigStat_C>();
	}
};
static_assert(alignof(UEventScoreBigStat_C) == 0x000008, "Wrong alignment on UEventScoreBigStat_C");
static_assert(sizeof(UEventScoreBigStat_C) == 0x000288, "Wrong size on UEventScoreBigStat_C");
static_assert(offsetof(UEventScoreBigStat_C, CommonBorder_GoalScore) == 0x000268, "Member 'UEventScoreBigStat_C::CommonBorder_GoalScore' has a wrong offset!");
static_assert(offsetof(UEventScoreBigStat_C, RichTextBlock_GoalScore) == 0x000270, "Member 'UEventScoreBigStat_C::RichTextBlock_GoalScore' has a wrong offset!");
static_assert(offsetof(UEventScoreBigStat_C, StatLabelText) == 0x000278, "Member 'UEventScoreBigStat_C::StatLabelText' has a wrong offset!");
static_assert(offsetof(UEventScoreBigStat_C, StatValueText) == 0x000280, "Member 'UEventScoreBigStat_C::StatValueText' has a wrong offset!");

}
