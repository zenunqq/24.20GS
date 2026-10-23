#pragma once

#include "Basic.hpp"

#include "XpEverywhereUI_classes.hpp"
#include "XpEverywhereUI_parameters.hpp"

namespace SDK
{

void UXpEverywhereAccoladesWidget::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereAccoladesWidget", "CloseWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UXpEverywhereAccoladesWidget::OnEventAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereAccoladesWidget", "OnEventAdded");

	UObject::ProcessEvent(Func, nullptr);
}

void UXpEverywhereAccoladesWidget::OnStompedByOtherWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereAccoladesWidget", "OnStompedByOtherWidget");

	UObject::ProcessEvent(Func, nullptr);
}

void UXpEverywhereAccoladesWidget::OpenWidget(const class UFortAccoladeItemDefinition* AccoladeDef, const int32 XpValue, const class FText& DisplayName, const TSoftObjectPtr<class UTexture2D>& AccoladeLargePreviewImageOverride, const class FText& SimulatedName, const class FText& SimulatedText, const EFortSimulatedXPSize SimulatedXpSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereAccoladesWidget", "OpenWidget");

	Params::XpEverywhereAccoladesWidget_OpenWidget Parms{};

	Parms.AccoladeDef = AccoladeDef;
	Parms.XpValue = XpValue;
	Parms.DisplayName = std::move(DisplayName);
	Parms.AccoladeLargePreviewImageOverride = AccoladeLargePreviewImageOverride;
	Parms.SimulatedName = std::move(SimulatedName);
	Parms.SimulatedText = std::move(SimulatedText);
	Parms.SimulatedXpSize = SimulatedXpSize;

	UObject::ProcessEvent(Func, &Parms);
}

bool UXpEverywhereAccoladesWidget::HasMoreXPEvents() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereAccoladesWidget", "HasMoreXPEvents");

	Params::XpEverywhereAccoladesWidget_HasMoreXPEvents Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UXpEverywhereBar::DoneUpdatingXpBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereBar", "DoneUpdatingXpBar");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UXpEverywhereBar::OnXpBarInitialized(int32 CurrentXP, int32 CurrentLevel, int32 CurrentRemainingRestXP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereBar", "OnXpBarInitialized");

	Params::XpEverywhereBar_OnXpBarInitialized Parms{};

	Parms.CurrentXP = CurrentXP;
	Parms.CurrentLevel = CurrentLevel;
	Parms.CurrentRemainingRestXP = CurrentRemainingRestXP;

	UObject::ProcessEvent(Func, &Parms);
}

void UXpEverywhereBar::OnXpBarUpdated(int32 ShownXP, int32 ShownLevel, int32 NewDesiredXP, int32 NewDesiredLevel, int32 NewRemainingRestXP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereBar", "OnXpBarUpdated");

	Params::XpEverywhereBar_OnXpBarUpdated Parms{};

	Parms.ShownXP = ShownXP;
	Parms.ShownLevel = ShownLevel;
	Parms.NewDesiredXP = NewDesiredXP;
	Parms.NewDesiredLevel = NewDesiredLevel;
	Parms.NewRemainingRestXP = NewRemainingRestXP;

	UObject::ProcessEvent(Func, &Parms);
}

int32 UXpEverywhereBar::GetTotalXpRequiredForLevel(const int32 InLevel) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereBar", "GetTotalXpRequiredForLevel");

	Params::XpEverywhereBar_GetTotalXpRequiredForLevel Parms{};

	Parms.InLevel = InLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UXpEverywhereLevelUpWidget::DoneLevelingUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereLevelUpWidget", "DoneLevelingUp");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UXpEverywhereLevelUpWidget::OnShowWidget(const int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereLevelUpWidget", "OnShowWidget");

	Params::XpEverywhereLevelUpWidget_OnShowWidget Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}

void UXpEverywhereLevelUpWidget::DisplayLevelUpRewards() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereLevelUpWidget", "DisplayLevelUpRewards");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UXpEverywhereReticleWidget::ForwardEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereReticleWidget", "ForwardEvents");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UXpEverywhereReticleWidget::HandleProfileUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereReticleWidget", "HandleProfileUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UXpEverywhereReticleWidget::UpdateRestXP(int32 RestXpRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereReticleWidget", "UpdateRestXP");

	Params::XpEverywhereReticleWidget_UpdateRestXP Parms{};

	Parms.RestXpRemaining = RestXpRemaining;

	UObject::ProcessEvent(Func, &Parms);
}

void UXpEverywhereReticleWidget::UpdateXPAmount(int32 NewAmount, class USoundCue* Cue, const EFortSimulatedXPSize SimulatedXpSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereReticleWidget", "UpdateXPAmount");

	Params::XpEverywhereReticleWidget_UpdateXPAmount Parms{};

	Parms.NewAmount = NewAmount;
	Parms.Cue = Cue;
	Parms.SimulatedXpSize = SimulatedXpSize;

	UObject::ProcessEvent(Func, &Parms);
}

void UXpEverywhereReticleWidget::UpdateXPSource(const class FText& NewSourceText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereReticleWidget", "UpdateXPSource");

	Params::XpEverywhereReticleWidget_UpdateXPSource Parms{};

	Parms.NewSourceText = std::move(NewSourceText);

	UObject::ProcessEvent(Func, &Parms);
}

void UXpEverywhereRewardWidget::HandleNotificationUpdateFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpEverywhereRewardWidget", "HandleNotificationUpdateFinished");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
