#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct CreativeClassSelectorButton_SetButtonText final
{
public:
	class FText                                   InText;
};
static_assert(alignof(CreativeClassSelectorButton_SetButtonText) == 0x000008, "Wrong alignment on CreativeClassSelectorButton_SetButtonText");
static_assert(sizeof(CreativeClassSelectorButton_SetButtonText) == 0x000018, "Wrong size on CreativeClassSelectorButton_SetButtonText");
static_assert(offsetof(CreativeClassSelectorButton_SetButtonText, InText) == 0x000000, "Member 'CreativeClassSelectorButton_SetButtonText::InText' has a wrong offset!");

struct ClassSelectorTeamTile_OnPlayerCountSet final
{
public:
	int32                                         NewPlayerCount;
};
static_assert(alignof(ClassSelectorTeamTile_OnPlayerCountSet) == 0x000004, "Wrong alignment on ClassSelectorTeamTile_OnPlayerCountSet");
static_assert(sizeof(ClassSelectorTeamTile_OnPlayerCountSet) == 0x000004, "Wrong size on ClassSelectorTeamTile_OnPlayerCountSet");
static_assert(offsetof(ClassSelectorTeamTile_OnPlayerCountSet, NewPlayerCount) == 0x000000, "Member 'ClassSelectorTeamTile_OnPlayerCountSet::NewPlayerCount' has a wrong offset!");

struct ClassSelectorTeamTile_OnTeamColorIndexSet final
{
public:
	int32                                         TeamColorIndex;
};
static_assert(alignof(ClassSelectorTeamTile_OnTeamColorIndexSet) == 0x000004, "Wrong alignment on ClassSelectorTeamTile_OnTeamColorIndexSet");
static_assert(sizeof(ClassSelectorTeamTile_OnTeamColorIndexSet) == 0x000004, "Wrong size on ClassSelectorTeamTile_OnTeamColorIndexSet");
static_assert(offsetof(ClassSelectorTeamTile_OnTeamColorIndexSet, TeamColorIndex) == 0x000000, "Member 'ClassSelectorTeamTile_OnTeamColorIndexSet::TeamColorIndex' has a wrong offset!");

struct ClassSelectorTeamTile_OnTeamIconSet final
{
public:
	struct FCreativeIconOption                    NewTeamIcon;
};
static_assert(alignof(ClassSelectorTeamTile_OnTeamIconSet) == 0x000008, "Wrong alignment on ClassSelectorTeamTile_OnTeamIconSet");
static_assert(sizeof(ClassSelectorTeamTile_OnTeamIconSet) == 0x000050, "Wrong size on ClassSelectorTeamTile_OnTeamIconSet");
static_assert(offsetof(ClassSelectorTeamTile_OnTeamIconSet, NewTeamIcon) == 0x000000, "Member 'ClassSelectorTeamTile_OnTeamIconSet::NewTeamIcon' has a wrong offset!");

struct ClassSelectorTeamTile_OnTeamSet final
{
public:
	struct FMinigameTeam                          NewTeamData;
};
static_assert(alignof(ClassSelectorTeamTile_OnTeamSet) == 0x000008, "Wrong alignment on ClassSelectorTeamTile_OnTeamSet");
static_assert(sizeof(ClassSelectorTeamTile_OnTeamSet) == 0x000090, "Wrong size on ClassSelectorTeamTile_OnTeamSet");
static_assert(offsetof(ClassSelectorTeamTile_OnTeamSet, NewTeamData) == 0x000000, "Member 'ClassSelectorTeamTile_OnTeamSet::NewTeamData' has a wrong offset!");

struct CreativeClassEntry_OnBrowsingLoadout final
{
public:
	bool                                          bBrowsingLoadout;
};
static_assert(alignof(CreativeClassEntry_OnBrowsingLoadout) == 0x000001, "Wrong alignment on CreativeClassEntry_OnBrowsingLoadout");
static_assert(sizeof(CreativeClassEntry_OnBrowsingLoadout) == 0x000001, "Wrong size on CreativeClassEntry_OnBrowsingLoadout");
static_assert(offsetof(CreativeClassEntry_OnBrowsingLoadout, bBrowsingLoadout) == 0x000000, "Member 'CreativeClassEntry_OnBrowsingLoadout::bBrowsingLoadout' has a wrong offset!");

struct CreativeClassEntry_OnClassEntryDataSet final
{
public:
	bool                                          bIsCurrentClass;
	bool                                          bIsPendingClass;
};
static_assert(alignof(CreativeClassEntry_OnClassEntryDataSet) == 0x000001, "Wrong alignment on CreativeClassEntry_OnClassEntryDataSet");
static_assert(sizeof(CreativeClassEntry_OnClassEntryDataSet) == 0x000002, "Wrong size on CreativeClassEntry_OnClassEntryDataSet");
static_assert(offsetof(CreativeClassEntry_OnClassEntryDataSet, bIsCurrentClass) == 0x000000, "Member 'CreativeClassEntry_OnClassEntryDataSet::bIsCurrentClass' has a wrong offset!");
static_assert(offsetof(CreativeClassEntry_OnClassEntryDataSet, bIsPendingClass) == 0x000001, "Member 'CreativeClassEntry_OnClassEntryDataSet::bIsPendingClass' has a wrong offset!");

struct CreativeClassSelector_HandleMinigameStateChanged final
{
public:
	class AFortMinigame*                          Minigame;
	EFortMinigameState                            MinigameState;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(CreativeClassSelector_HandleMinigameStateChanged) == 0x000008, "Wrong alignment on CreativeClassSelector_HandleMinigameStateChanged");
static_assert(sizeof(CreativeClassSelector_HandleMinigameStateChanged) == 0x000010, "Wrong size on CreativeClassSelector_HandleMinigameStateChanged");
static_assert(offsetof(CreativeClassSelector_HandleMinigameStateChanged, Minigame) == 0x000000, "Member 'CreativeClassSelector_HandleMinigameStateChanged::Minigame' has a wrong offset!");
static_assert(offsetof(CreativeClassSelector_HandleMinigameStateChanged, MinigameState) == 0x000008, "Member 'CreativeClassSelector_HandleMinigameStateChanged::MinigameState' has a wrong offset!");

struct CreativeClassSelector_OnClassSelectionChanged final
{
public:
	class FText                                   NewClassName;
	class FText                                   NewClassDescription;
};
static_assert(alignof(CreativeClassSelector_OnClassSelectionChanged) == 0x000008, "Wrong alignment on CreativeClassSelector_OnClassSelectionChanged");
static_assert(sizeof(CreativeClassSelector_OnClassSelectionChanged) == 0x000030, "Wrong size on CreativeClassSelector_OnClassSelectionChanged");
static_assert(offsetof(CreativeClassSelector_OnClassSelectionChanged, NewClassName) == 0x000000, "Member 'CreativeClassSelector_OnClassSelectionChanged::NewClassName' has a wrong offset!");
static_assert(offsetof(CreativeClassSelector_OnClassSelectionChanged, NewClassDescription) == 0x000018, "Member 'CreativeClassSelector_OnClassSelectionChanged::NewClassDescription' has a wrong offset!");

struct CreativeClassSelector_OnClassSelectorUIPopulated final
{
public:
	bool                                          bHasValidData;
};
static_assert(alignof(CreativeClassSelector_OnClassSelectorUIPopulated) == 0x000001, "Wrong alignment on CreativeClassSelector_OnClassSelectorUIPopulated");
static_assert(sizeof(CreativeClassSelector_OnClassSelectorUIPopulated) == 0x000001, "Wrong size on CreativeClassSelector_OnClassSelectorUIPopulated");
static_assert(offsetof(CreativeClassSelector_OnClassSelectorUIPopulated, bHasValidData) == 0x000000, "Member 'CreativeClassSelector_OnClassSelectorUIPopulated::bHasValidData' has a wrong offset!");

struct CreativeClassSelector_OnLoadoutCommitted final
{
public:
	class FText                                   NewClassName;
	class FText                                   NewTeamName;
	bool                                          bNewLoadout;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(CreativeClassSelector_OnLoadoutCommitted) == 0x000008, "Wrong alignment on CreativeClassSelector_OnLoadoutCommitted");
static_assert(sizeof(CreativeClassSelector_OnLoadoutCommitted) == 0x000038, "Wrong size on CreativeClassSelector_OnLoadoutCommitted");
static_assert(offsetof(CreativeClassSelector_OnLoadoutCommitted, NewClassName) == 0x000000, "Member 'CreativeClassSelector_OnLoadoutCommitted::NewClassName' has a wrong offset!");
static_assert(offsetof(CreativeClassSelector_OnLoadoutCommitted, NewTeamName) == 0x000018, "Member 'CreativeClassSelector_OnLoadoutCommitted::NewTeamName' has a wrong offset!");
static_assert(offsetof(CreativeClassSelector_OnLoadoutCommitted, bNewLoadout) == 0x000030, "Member 'CreativeClassSelector_OnLoadoutCommitted::bNewLoadout' has a wrong offset!");

struct CreativeClassSelector_OnTimerCountdown final
{
public:
	int32                                         RemainingTime;
};
static_assert(alignof(CreativeClassSelector_OnTimerCountdown) == 0x000004, "Wrong alignment on CreativeClassSelector_OnTimerCountdown");
static_assert(sizeof(CreativeClassSelector_OnTimerCountdown) == 0x000004, "Wrong size on CreativeClassSelector_OnTimerCountdown");
static_assert(offsetof(CreativeClassSelector_OnTimerCountdown, RemainingTime) == 0x000000, "Member 'CreativeClassSelector_OnTimerCountdown::RemainingTime' has a wrong offset!");

struct CreativeClassSelector_GetFirstLoadoutItem final
{
public:
	class UWidget*                                ReturnValue;
};
static_assert(alignof(CreativeClassSelector_GetFirstLoadoutItem) == 0x000008, "Wrong alignment on CreativeClassSelector_GetFirstLoadoutItem");
static_assert(sizeof(CreativeClassSelector_GetFirstLoadoutItem) == 0x000008, "Wrong size on CreativeClassSelector_GetFirstLoadoutItem");
static_assert(offsetof(CreativeClassSelector_GetFirstLoadoutItem, ReturnValue) == 0x000000, "Member 'CreativeClassSelector_GetFirstLoadoutItem::ReturnValue' has a wrong offset!");

struct CreativeClassSelectorMapTab_SetTabName final
{
public:
	class FText                                   TabName;
};
static_assert(alignof(CreativeClassSelectorMapTab_SetTabName) == 0x000008, "Wrong alignment on CreativeClassSelectorMapTab_SetTabName");
static_assert(sizeof(CreativeClassSelectorMapTab_SetTabName) == 0x000018, "Wrong size on CreativeClassSelectorMapTab_SetTabName");
static_assert(offsetof(CreativeClassSelectorMapTab_SetTabName, TabName) == 0x000000, "Member 'CreativeClassSelectorMapTab_SetTabName::TabName' has a wrong offset!");

}
