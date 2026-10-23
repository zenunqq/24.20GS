#pragma once

#include "Basic.hpp"

#include "ProgressiveItem_Tall_classes.hpp"
#include "ProgressiveItem_Tall_parameters.hpp"

namespace SDK
{

void UProgressiveItem_Tall_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItem_Tall_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItem_Tall_C::BP_OnInitializeSetInfo(const struct FProgressiveSetInfo& InSetInfo, const class FText& BottomText, const class FText& BottomSubtext, const bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "BP_OnInitializeSetInfo");

	Params::ProgressiveItem_Tall_C_BP_OnInitializeSetInfo Parms{};

	Parms.InSetInfo = std::move(InSetInfo);
	Parms.BottomText = std::move(BottomText);
	Parms.BottomSubtext = std::move(BottomSubtext);
	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItem_Tall_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItem_Tall_C::BP_OnTileMaterialLoaded(const bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "BP_OnTileMaterialLoaded");

	Params::ProgressiveItem_Tall_C_BP_OnTileMaterialLoaded Parms{};

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItem_Tall_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItem_Tall_C::ExecuteUbergraph_ProgressiveItem_Tall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "ExecuteUbergraph_ProgressiveItem_Tall");

	Params::ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItem_Tall_C::Play_intro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "Play intro");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItem_Tall_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "PreConstruct");

	Params::ProgressiveItem_Tall_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItem_Tall_C::UpdateCompletedState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "UpdateCompletedState");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItem_Tall_C::UpdateSubscribedState(bool bInSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "UpdateSubscribedState");

	Params::ProgressiveItem_Tall_C_UpdateSubscribedState Parms{};

	Parms.bInSubscribed = bInSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItem_Tall_C::UpdateVisualState(bool Selected_0, bool Subbed, bool Completed, bool Hovered_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "UpdateVisualState");

	Params::ProgressiveItem_Tall_C_UpdateVisualState Parms{};

	Parms.Selected_0 = Selected_0;
	Parms.Subbed = Subbed;
	Parms.Completed = Completed;
	Parms.Hovered_0 = Hovered_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
