#pragma once

#include "Basic.hpp"

#include "CRD_ClassSelectorUI_classes.hpp"
#include "CRD_ClassSelectorUI_parameters.hpp"

namespace SDK
{

void UCreativeClassSelectorButton::SetButtonText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeClassSelectorButton", "SetButtonText");

	Params::CreativeClassSelectorButton_SetButtonText Parms{};

	Parms.InText = std::move(InText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClassSelectorTeamTile::OnPlayerCountSet(int32 NewPlayerCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassSelectorTeamTile", "OnPlayerCountSet");

	Params::ClassSelectorTeamTile_OnPlayerCountSet Parms{};

	Parms.NewPlayerCount = NewPlayerCount;

	UObject::ProcessEvent(Func, &Parms);
}

void UClassSelectorTeamTile::OnTeamColorIndexSet(int32 TeamColorIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassSelectorTeamTile", "OnTeamColorIndexSet");

	Params::ClassSelectorTeamTile_OnTeamColorIndexSet Parms{};

	Parms.TeamColorIndex = TeamColorIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UClassSelectorTeamTile::OnTeamIconSet(const struct FCreativeIconOption& NewTeamIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassSelectorTeamTile", "OnTeamIconSet");

	Params::ClassSelectorTeamTile_OnTeamIconSet Parms{};

	Parms.NewTeamIcon = std::move(NewTeamIcon);

	UObject::ProcessEvent(Func, &Parms);
}

void UClassSelectorTeamTile::OnTeamSet(const struct FMinigameTeam& NewTeamData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassSelectorTeamTile", "OnTeamSet");

	Params::ClassSelectorTeamTile_OnTeamSet Parms{};

	Parms.NewTeamData = std::move(NewTeamData);

	UObject::ProcessEvent(Func, &Parms);
}

void UCreativeClassEntry::OnBrowsingLoadout(const bool bBrowsingLoadout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeClassEntry", "OnBrowsingLoadout");

	Params::CreativeClassEntry_OnBrowsingLoadout Parms{};

	Parms.bBrowsingLoadout = bBrowsingLoadout;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreativeClassEntry::OnClassEntryDataSet(const bool bIsCurrentClass, const bool bIsPendingClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeClassEntry", "OnClassEntryDataSet");

	Params::CreativeClassEntry_OnClassEntryDataSet Parms{};

	Parms.bIsCurrentClass = bIsCurrentClass;
	Parms.bIsPendingClass = bIsPendingClass;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreativeClassSelector::HandleMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeClassSelector", "HandleMinigameStateChanged");

	Params::CreativeClassSelector_HandleMinigameStateChanged Parms{};

	Parms.Minigame = Minigame;
	Parms.MinigameState = MinigameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCreativeClassSelector::OnClassSelectionChanged(const class FText& NewClassName, const class FText& NewClassDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeClassSelector", "OnClassSelectionChanged");

	Params::CreativeClassSelector_OnClassSelectionChanged Parms{};

	Parms.NewClassName = std::move(NewClassName);
	Parms.NewClassDescription = std::move(NewClassDescription);

	UObject::ProcessEvent(Func, &Parms);
}

void UCreativeClassSelector::OnClassSelectorUIPopulated(const bool bHasValidData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeClassSelector", "OnClassSelectorUIPopulated");

	Params::CreativeClassSelector_OnClassSelectorUIPopulated Parms{};

	Parms.bHasValidData = bHasValidData;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreativeClassSelector::OnLoadoutCommitted(const class FText& NewClassName, const class FText& NewTeamName, const bool bNewLoadout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeClassSelector", "OnLoadoutCommitted");

	Params::CreativeClassSelector_OnLoadoutCommitted Parms{};

	Parms.NewClassName = std::move(NewClassName);
	Parms.NewTeamName = std::move(NewTeamName);
	Parms.bNewLoadout = bNewLoadout;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreativeClassSelector::OnTimerCountdown(const int32 RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeClassSelector", "OnTimerCountdown");

	Params::CreativeClassSelector_OnTimerCountdown Parms{};

	Parms.RemainingTime = RemainingTime;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* UCreativeClassSelector::GetFirstLoadoutItem() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeClassSelector", "GetFirstLoadoutItem");

	Params::CreativeClassSelector_GetFirstLoadoutItem Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCreativeClassSelectorMapTab::OnTabAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeClassSelectorMapTab", "OnTabAdded");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreativeClassSelectorMapTab::SetTabName(const class FText& TabName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeClassSelectorMapTab", "SetTabName");

	Params::CreativeClassSelectorMapTab_SetTabName Parms{};

	Parms.TabName = std::move(TabName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
