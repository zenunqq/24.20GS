#pragma once

#include "Basic.hpp"

#include "AthenaMapNavigableIconStackOfChallenges_classes.hpp"
#include "AthenaMapNavigableIconStackOfChallenges_parameters.hpp"

namespace SDK
{

void UAthenaMapNavigableIconStackOfChallenges_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMapNavigableIconStackOfChallenges_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMapNavigableIconStackOfChallenges_C::ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges");

	Params::AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfChallenges_C::OnBeginIntroAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnBeginIntroAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMapNavigableIconStackOfChallenges_C::OnChallengeIconOverriden(const class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnChallengeIconOverriden");

	Params::AthenaMapNavigableIconStackOfChallenges_C_OnChallengeIconOverriden Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfChallenges_C::OnChallengeReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnChallengeReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMapNavigableIconStackOfChallenges_C::OnChallengeSet(bool bIsComplete, bool bIsLocked, bool bHasIconOverride, float Progress, bool bShouldShowBang, bool bIsPinned, bool bChallengeSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnChallengeSet");

	Params::AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet Parms{};

	Parms.bIsComplete = bIsComplete;
	Parms.bIsLocked = bIsLocked;
	Parms.bHasIconOverride = bHasIconOverride;
	Parms.Progress = Progress;
	Parms.bShouldShowBang = bShouldShowBang;
	Parms.bIsPinned = bIsPinned;
	Parms.bChallengeSelected = bChallengeSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfChallenges_C::OnChangeBangVisibility(bool bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnChangeBangVisibility");

	Params::AthenaMapNavigableIconStackOfChallenges_C_OnChangeBangVisibility Parms{};

	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfChallenges_C::OnChangedStackData(int32 NewStackCount, int32 NonCompletedCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnChangedStackData");

	Params::AthenaMapNavigableIconStackOfChallenges_C_OnChangedStackData Parms{};

	Parms.NewStackCount = NewStackCount;
	Parms.NonCompletedCount = NonCompletedCount;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfChallenges_C::OnChangingStackIndexAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnChangingStackIndexAnimFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMapNavigableIconStackOfChallenges_C::OnHovered(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnHovered");

	Params::AthenaMapNavigableIconStackOfChallenges_C_OnHovered Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfChallenges_C::OnSelected(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnSelected");

	Params::AthenaMapNavigableIconStackOfChallenges_C_OnSelected Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfChallenges_C::OnSetHasLocation(bool bHasLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnSetHasLocation");

	Params::AthenaMapNavigableIconStackOfChallenges_C_OnSetHasLocation Parms{};

	Parms.bHasLocation = bHasLocation;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfChallenges_C::OnSetIsInGame(bool bIsInGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnSetIsInGame");

	Params::AthenaMapNavigableIconStackOfChallenges_C_OnSetIsInGame Parms{};

	Parms.bIsInGame = bIsInGame;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfChallenges_C::OnUnhovered(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnUnhovered");

	Params::AthenaMapNavigableIconStackOfChallenges_C_OnUnhovered Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfChallenges_C::OnUnselected(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnUnselected");

	Params::AthenaMapNavigableIconStackOfChallenges_C_OnUnselected Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfChallenges_C::SetAnywhereState(bool bIsAnytimeChallenge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "SetAnywhereState");

	Params::AthenaMapNavigableIconStackOfChallenges_C_SetAnywhereState Parms{};

	Parms.bIsAnytimeChallenge = bIsAnytimeChallenge;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfChallenges_C::SetMaterialState(bool Complete, bool Locked, bool HasIconOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "SetMaterialState");

	Params::AthenaMapNavigableIconStackOfChallenges_C_SetMaterialState Parms{};

	Parms.Complete = Complete;
	Parms.Locked = Locked;
	Parms.HasIconOverride = HasIconOverride;

	UObject::ProcessEvent(Func, &Parms);
}

}
