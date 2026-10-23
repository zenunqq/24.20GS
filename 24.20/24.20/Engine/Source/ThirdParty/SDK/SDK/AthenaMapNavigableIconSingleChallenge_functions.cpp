#pragma once

#include "Basic.hpp"

#include "AthenaMapNavigableIconSingleChallenge_classes.hpp"
#include "AthenaMapNavigableIconSingleChallenge_parameters.hpp"

namespace SDK
{

void UAthenaMapNavigableIconSingleChallenge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMapNavigableIconSingleChallenge_C::ExecuteUbergraph_AthenaMapNavigableIconSingleChallenge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "ExecuteUbergraph_AthenaMapNavigableIconSingleChallenge");

	Params::AthenaMapNavigableIconSingleChallenge_C_ExecuteUbergraph_AthenaMapNavigableIconSingleChallenge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconSingleChallenge_C::OnBeginIntroAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "OnBeginIntroAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMapNavigableIconSingleChallenge_C::OnChallengeIconOverriden(const class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "OnChallengeIconOverriden");

	Params::AthenaMapNavigableIconSingleChallenge_C_OnChallengeIconOverriden Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconSingleChallenge_C::OnChallengeReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "OnChallengeReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMapNavigableIconSingleChallenge_C::OnChallengeSet(bool bIsComplete, bool bIsLocked, bool bHasIconOverride, float Progress, bool bShouldShowBang, bool bIsPinned, bool bChallengeSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "OnChallengeSet");

	Params::AthenaMapNavigableIconSingleChallenge_C_OnChallengeSet Parms{};

	Parms.bIsComplete = bIsComplete;
	Parms.bIsLocked = bIsLocked;
	Parms.bHasIconOverride = bHasIconOverride;
	Parms.Progress = Progress;
	Parms.bShouldShowBang = bShouldShowBang;
	Parms.bIsPinned = bIsPinned;
	Parms.bChallengeSelected = bChallengeSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconSingleChallenge_C::OnChangeBangVisibility(bool bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "OnChangeBangVisibility");

	Params::AthenaMapNavigableIconSingleChallenge_C_OnChangeBangVisibility Parms{};

	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconSingleChallenge_C::OnHovered(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "OnHovered");

	Params::AthenaMapNavigableIconSingleChallenge_C_OnHovered Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconSingleChallenge_C::OnSelected(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "OnSelected");

	Params::AthenaMapNavigableIconSingleChallenge_C_OnSelected Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconSingleChallenge_C::OnSetHasLocation(bool bHasLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "OnSetHasLocation");

	Params::AthenaMapNavigableIconSingleChallenge_C_OnSetHasLocation Parms{};

	Parms.bHasLocation = bHasLocation;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconSingleChallenge_C::OnSetIsInGame(bool bIsInGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "OnSetIsInGame");

	Params::AthenaMapNavigableIconSingleChallenge_C_OnSetIsInGame Parms{};

	Parms.bIsInGame = bIsInGame;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconSingleChallenge_C::OnUnhovered(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "OnUnhovered");

	Params::AthenaMapNavigableIconSingleChallenge_C_OnUnhovered Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconSingleChallenge_C::OnUnselected(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "OnUnselected");

	Params::AthenaMapNavigableIconSingleChallenge_C_OnUnselected Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconSingleChallenge_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "PreConstruct");

	Params::AthenaMapNavigableIconSingleChallenge_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconSingleChallenge_C::SetMaterialState(bool Complete, bool Locked, bool HasIconOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "SetMaterialState");

	Params::AthenaMapNavigableIconSingleChallenge_C_SetMaterialState Parms{};

	Parms.Complete = Complete;
	Parms.Locked = Locked;
	Parms.HasIconOverride = HasIconOverride;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconSingleChallenge_C::SetPinnedMarker(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconSingleChallenge_C", "SetPinnedMarker");

	Params::AthenaMapNavigableIconSingleChallenge_C_SetPinnedMarker Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}
