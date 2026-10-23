#pragma once

#include "Basic.hpp"

#include "ShowdownTournamentPosterFront_classes.hpp"
#include "ShowdownTournamentPosterFront_parameters.hpp"

namespace SDK
{

void UShowdownTournamentPosterFront_C::BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownTournamentPosterFront_C::BP_ResetDetailView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "BP_ResetDetailView");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownTournamentPosterFront_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownTournamentPosterFront_C::ExecuteUbergraph_ShowdownTournamentPosterFront(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "ExecuteUbergraph_ShowdownTournamentPosterFront");

	Params::ShowdownTournamentPosterFront_C_ExecuteUbergraph_ShowdownTournamentPosterFront Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownTournamentPosterFront_C::GetTournamentDateText(class FText* TournamentDate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "GetTournamentDateText");

	Params::ShowdownTournamentPosterFront_C_GetTournamentDateText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TournamentDate != nullptr)
		*TournamentDate = std::move(Parms.TournamentDate);
}

void UShowdownTournamentPosterFront_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "PreConstruct");

	Params::ShowdownTournamentPosterFront_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownTournamentPosterFront_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

}
