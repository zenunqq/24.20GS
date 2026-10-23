#pragma once

#include "Basic.hpp"

#include "SpecialEventGameplayUI_classes.hpp"
#include "SpecialEventGameplayUI_parameters.hpp"

namespace SDK
{

void UFortGameplayCinematicWidget::OnCinematicFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayCinematicWidget", "OnCinematicFinished");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayCinematicWidget::OnStartCinematic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayCinematicWidget", "OnStartCinematic");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortGameplayIntroPanelWidget::OnIntroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnIntroFinished");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayIntroPanelWidget::OnStartIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnStartIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortGameplayIntroPanelWidget::OnWaitingForMinTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnWaitingForMinTime");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortGameplayIntroPanelWidget::OnWaitingForPawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnWaitingForPawn");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortGameplayIntroPanelWidget::OnWaitingForReadyForGameplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnWaitingForReadyForGameplay");

	UObject::ProcessEvent(Func, nullptr);
}

void USpecialEventCursorWidget::BP_OnCursorModeChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, const struct FGameplayTag& NewCursorModeTag, const struct FGameplayTag& OldCursorModeTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventCursorWidget", "BP_OnCursorModeChanged");

	Params::SpecialEventCursorWidget_BP_OnCursorModeChanged Parms{};

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.NewCursorModeTag = std::move(NewCursorModeTag);
	Parms.OldCursorModeTag = std::move(OldCursorModeTag);

	UObject::ProcessEvent(Func, &Parms);
}

void USpecialEventCursorWidget::BP_OnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, const struct FGameplayTag& CursorModeTag, const bool bShouldBeVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventCursorWidget", "BP_OnDesiredVisibilityChanged");

	Params::SpecialEventCursorWidget_BP_OnDesiredVisibilityChanged Parms{};

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.CursorModeTag = std::move(CursorModeTag);
	Parms.bShouldBeVisible = bShouldBeVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void USpecialEventCursorWidget::OnCursorModeChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, const struct FGameplayTag& NewCursorModeTag, const struct FGameplayTag& OldCursorModeTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventCursorWidget", "OnCursorModeChanged");

	Params::SpecialEventCursorWidget_OnCursorModeChanged Parms{};

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.NewCursorModeTag = std::move(NewCursorModeTag);
	Parms.OldCursorModeTag = std::move(OldCursorModeTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USpecialEventCursorWidget::OnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, const struct FGameplayTag& CursorModeTag, const bool bShouldBeVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventCursorWidget", "OnDesiredVisibilityChanged");

	Params::SpecialEventCursorWidget_OnDesiredVisibilityChanged Parms{};

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.CursorModeTag = std::move(CursorModeTag);
	Parms.bShouldBeVisible = bShouldBeVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USpecialEventCursorWidget::OnViewportLocationChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, const struct FVector2D& NormalizedLocation, const struct FVector2D& ViewportLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventCursorWidget", "OnViewportLocationChanged");

	Params::SpecialEventCursorWidget_OnViewportLocationChanged Parms{};

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.NormalizedLocation = std::move(NormalizedLocation);
	Parms.ViewportLocation = std::move(ViewportLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FGameplayTagContainer USpecialEventCursorWidget::GetCursorModeTags() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventCursorWidget", "GetCursorModeTags");

	Params::SpecialEventCursorWidget_GetCursorModeTags Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AFortPlayerStateAthena* USpecialEventPlayerInfoWidget::GetRepresentedPlayerState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventPlayerInfoWidget", "GetRepresentedPlayerState");

	Params::SpecialEventPlayerInfoWidget_GetRepresentedPlayerState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USpecialEventUILibrary::HideFrontEndStateWidget(const class UObject* WorldContextObject, bool bNewlyHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SpecialEventUILibrary", "HideFrontEndStateWidget");

	Params::SpecialEventUILibrary_HideFrontEndStateWidget Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bNewlyHidden = bNewlyHidden;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
