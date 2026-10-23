#pragma once

#include "Basic.hpp"

#include "ProgressiveItemStateTitle_classes.hpp"
#include "ProgressiveItemStateTitle_parameters.hpp"

namespace SDK
{

void UProgressiveItemStateTitle_C::BP_OnSetHeaderInfo(const class FText& Subheading, const bool bSubscribed, const int32 UnlockedStages, const int32 MaxStages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemStateTitle_C", "BP_OnSetHeaderInfo");

	Params::ProgressiveItemStateTitle_C_BP_OnSetHeaderInfo Parms{};

	Parms.Subheading = std::move(Subheading);
	Parms.bSubscribed = bSubscribed;
	Parms.UnlockedStages = UnlockedStages;
	Parms.MaxStages = MaxStages;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemStateTitle_C::ExecuteUbergraph_ProgressiveItemStateTitle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemStateTitle_C", "ExecuteUbergraph_ProgressiveItemStateTitle");

	Params::ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemStateTitle_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemStateTitle_C", "PreConstruct");

	Params::ProgressiveItemStateTitle_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemStateTitle_C::Update_MultiBenefits_Tag(bool Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemStateTitle_C", "Update MultiBenefits Tag");

	Params::ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemStateTitle_C::Update_Stages_Tag(bool Subscribed, const int32 Current_Stage, const int32 Max_Stage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemStateTitle_C", "Update Stages Tag");

	Params::ProgressiveItemStateTitle_C_Update_Stages_Tag Parms{};

	Parms.Subscribed = Subscribed;
	Parms.Current_Stage = Current_Stage;
	Parms.Max_Stage = Max_Stage;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemStateTitle_C::Update_Subheading(const class FText& Text_0, bool Subscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemStateTitle_C", "Update Subheading");

	Params::ProgressiveItemStateTitle_C_Update_Subheading Parms{};

	Parms.Text_0 = std::move(Text_0);
	Parms.Subscribed = Subscribed;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemStateTitle_C::Update_Subscribed_Tag(bool Subscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemStateTitle_C", "Update Subscribed Tag");

	Params::ProgressiveItemStateTitle_C_Update_Subscribed_Tag Parms{};

	Parms.Subscribed = Subscribed;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemStateTitle_C::Update_Title_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemStateTitle_C", "Update Title Text");

	UObject::ProcessEvent(Func, nullptr);
}

}
