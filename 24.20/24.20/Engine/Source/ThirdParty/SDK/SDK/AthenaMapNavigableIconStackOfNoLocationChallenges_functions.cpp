#pragma once

#include "Basic.hpp"

#include "AthenaMapNavigableIconStackOfNoLocationChallenges_classes.hpp"
#include "AthenaMapNavigableIconStackOfNoLocationChallenges_parameters.hpp"

namespace SDK
{

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::ExecuteUbergraph_AthenaMapNavigableIconStackOfNoLocationChallenges(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "ExecuteUbergraph_AthenaMapNavigableIconStackOfNoLocationChallenges");

	Params::AthenaMapNavigableIconStackOfNoLocationChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfNoLocationChallenges Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnBeginIntroAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "OnBeginIntroAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnChallengeIconOverriden(const class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "OnChallengeIconOverriden");

	Params::AthenaMapNavigableIconStackOfNoLocationChallenges_C_OnChallengeIconOverriden Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnChallengeReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "OnChallengeReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnChallengeSet(bool bIsComplete, bool bIsLocked, bool bHasIconOverride, float Progress, bool bShouldShowBang, bool bIsPinned, bool bChallengeSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "OnChallengeSet");

	Params::AthenaMapNavigableIconStackOfNoLocationChallenges_C_OnChallengeSet Parms{};

	Parms.bIsComplete = bIsComplete;
	Parms.bIsLocked = bIsLocked;
	Parms.bHasIconOverride = bHasIconOverride;
	Parms.Progress = Progress;
	Parms.bShouldShowBang = bShouldShowBang;
	Parms.bIsPinned = bIsPinned;
	Parms.bChallengeSelected = bChallengeSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnChangeBangVisibility(bool bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "OnChangeBangVisibility");

	Params::AthenaMapNavigableIconStackOfNoLocationChallenges_C_OnChangeBangVisibility Parms{};

	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnChangedStackData(int32 NewStackCount, int32 NonCompletedCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "OnChangedStackData");

	Params::AthenaMapNavigableIconStackOfNoLocationChallenges_C_OnChangedStackData Parms{};

	Parms.NewStackCount = NewStackCount;
	Parms.NonCompletedCount = NonCompletedCount;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnHovered(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "OnHovered");

	Params::AthenaMapNavigableIconStackOfNoLocationChallenges_C_OnHovered Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnSelected(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "OnSelected");

	Params::AthenaMapNavigableIconStackOfNoLocationChallenges_C_OnSelected Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnSetChallengesInfo(int32 ChallengesNum, int32 CountOfCompletedChallenges)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "OnSetChallengesInfo");

	Params::AthenaMapNavigableIconStackOfNoLocationChallenges_C_OnSetChallengesInfo Parms{};

	Parms.ChallengesNum = ChallengesNum;
	Parms.CountOfCompletedChallenges = CountOfCompletedChallenges;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnSetHasLocation(bool bHasLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "OnSetHasLocation");

	Params::AthenaMapNavigableIconStackOfNoLocationChallenges_C_OnSetHasLocation Parms{};

	Parms.bHasLocation = bHasLocation;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnSetIsInGame(bool bIsInGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "OnSetIsInGame");

	Params::AthenaMapNavigableIconStackOfNoLocationChallenges_C_OnSetIsInGame Parms{};

	Parms.bIsInGame = bIsInGame;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnUnhovered(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "OnUnhovered");

	Params::AthenaMapNavigableIconStackOfNoLocationChallenges_C_OnUnhovered Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnUnselected(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "OnUnselected");

	Params::AthenaMapNavigableIconStackOfNoLocationChallenges_C_OnUnselected Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::SetAnywhereState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "SetAnywhereState");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMapNavigableIconStackOfNoLocationChallenges_C::SetMaterialState(bool Completed, bool Lock, bool HasIconOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfNoLocationChallenges_C", "SetMaterialState");

	Params::AthenaMapNavigableIconStackOfNoLocationChallenges_C_SetMaterialState Parms{};

	Parms.Completed = Completed;
	Parms.Lock = Lock;
	Parms.HasIconOverride = HasIconOverride;

	UObject::ProcessEvent(Func, &Parms);
}

}
