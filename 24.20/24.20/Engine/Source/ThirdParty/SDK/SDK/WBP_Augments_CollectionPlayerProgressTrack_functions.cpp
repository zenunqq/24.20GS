#pragma once

#include "Basic.hpp"

#include "WBP_Augments_CollectionPlayerProgressTrack_classes.hpp"
#include "WBP_Augments_CollectionPlayerProgressTrack_parameters.hpp"

namespace SDK
{

void UWBP_Augments_CollectionPlayerProgressTrack_C::BP_OnPlayerProgressContainerReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_CollectionPlayerProgressTrack_C", "BP_OnPlayerProgressContainerReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augments_CollectionPlayerProgressTrack_C::BP_OnPlayerProgressEntriesCreated(const TArray<class UAthenaCollectionPlayerProgress*>& PlayerProgressEntries, int32 NumToCollect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_CollectionPlayerProgressTrack_C", "BP_OnPlayerProgressEntriesCreated");

	Params::WBP_Augments_CollectionPlayerProgressTrack_C_BP_OnPlayerProgressEntriesCreated Parms{};

	Parms.PlayerProgressEntries = std::move(PlayerProgressEntries);
	Parms.NumToCollect = NumToCollect;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augments_CollectionPlayerProgressTrack_C::BP_OverrideCategoryTitle(const class FText& OverrideTitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_CollectionPlayerProgressTrack_C", "BP_OverrideCategoryTitle");

	Params::WBP_Augments_CollectionPlayerProgressTrack_C_BP_OverrideCategoryTitle Parms{};

	Parms.OverrideTitle = std::move(OverrideTitle);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augments_CollectionPlayerProgressTrack_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_CollectionPlayerProgressTrack_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augments_CollectionPlayerProgressTrack_C::ExecuteUbergraph_WBP_Augments_CollectionPlayerProgressTrack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_CollectionPlayerProgressTrack_C", "ExecuteUbergraph_WBP_Augments_CollectionPlayerProgressTrack");

	Params::WBP_Augments_CollectionPlayerProgressTrack_C_ExecuteUbergraph_WBP_Augments_CollectionPlayerProgressTrack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augments_CollectionPlayerProgressTrack_C::PlayIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_CollectionPlayerProgressTrack_C", "PlayIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augments_CollectionPlayerProgressTrack_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_CollectionPlayerProgressTrack_C", "PreConstruct");

	Params::WBP_Augments_CollectionPlayerProgressTrack_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
