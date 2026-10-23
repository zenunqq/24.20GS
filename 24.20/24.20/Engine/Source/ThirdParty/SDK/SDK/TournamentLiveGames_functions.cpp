#pragma once

#include "Basic.hpp"

#include "TournamentLiveGames_classes.hpp"
#include "TournamentLiveGames_parameters.hpp"

namespace SDK
{

void UTournamentLiveGames_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGames_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::TournamentLiveGames_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentLiveGames_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGames_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::TournamentLiveGames_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentLiveGames_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGames_C", "EventColorize");

	Params::TournamentLiveGames_C_EventColorize Parms{};

	Parms.TournamentDisplayInfo = std::move(TournamentDisplayInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentLiveGames_C::ExecuteUbergraph_TournamentLiveGames(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGames_C", "ExecuteUbergraph_TournamentLiveGames");

	Params::TournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentLiveGames_C::HandleViewLiveGames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGames_C", "HandleViewLiveGames");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentLiveGames_C::Init(const class FString& TournamentId, const class FString& EventId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGames_C", "Init");

	Params::TournamentLiveGames_C_Init Parms{};

	Parms.TournamentId = std::move(TournamentId);
	Parms.EventId = std::move(EventId);

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentLiveGames_C::NotifyLoadingMoreGames(bool bIsLoading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGames_C", "NotifyLoadingMoreGames");

	Params::TournamentLiveGames_C_NotifyLoadingMoreGames Parms{};

	Parms.bIsLoading = bIsLoading;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentLiveGames_C::NotifyNoLiveGames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGames_C", "NotifyNoLiveGames");

	UObject::ProcessEvent(Func, nullptr);
}

}
