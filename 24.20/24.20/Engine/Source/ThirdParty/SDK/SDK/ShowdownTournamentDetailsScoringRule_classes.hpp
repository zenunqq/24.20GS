#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UShowdownTournamentDetailsScoringRule_C final : public UCommonUserWidget
{
public:
	class UCommonBorder*                          CommonBorder_BG;
	class UCommonBorder*                          CommonBorder_TextContainer;
	class UCommonLazyImage*                       RuleIcon;
	class UCommonTextBlock*                       RuleNameText;
	class UCommonTextBlock*                       RuleValueText;

public:
	void SetData(const struct FFortShowdownScoringRuleInfo& ScoreRule, const struct FFortTournamentDisplayInfo& TournamentDisplayInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownTournamentDetailsScoringRule_C">();
	}
	static class UShowdownTournamentDetailsScoringRule_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownTournamentDetailsScoringRule_C>();
	}
};
static_assert(alignof(UShowdownTournamentDetailsScoringRule_C) == 0x000008, "Wrong alignment on UShowdownTournamentDetailsScoringRule_C");
static_assert(sizeof(UShowdownTournamentDetailsScoringRule_C) == 0x0002B8, "Wrong size on UShowdownTournamentDetailsScoringRule_C");
static_assert(offsetof(UShowdownTournamentDetailsScoringRule_C, CommonBorder_BG) == 0x000290, "Member 'UShowdownTournamentDetailsScoringRule_C::CommonBorder_BG' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentDetailsScoringRule_C, CommonBorder_TextContainer) == 0x000298, "Member 'UShowdownTournamentDetailsScoringRule_C::CommonBorder_TextContainer' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentDetailsScoringRule_C, RuleIcon) == 0x0002A0, "Member 'UShowdownTournamentDetailsScoringRule_C::RuleIcon' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentDetailsScoringRule_C, RuleNameText) == 0x0002A8, "Member 'UShowdownTournamentDetailsScoringRule_C::RuleNameText' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentDetailsScoringRule_C, RuleValueText) == 0x0002B0, "Member 'UShowdownTournamentDetailsScoringRule_C::RuleValueText' has a wrong offset!");

}
