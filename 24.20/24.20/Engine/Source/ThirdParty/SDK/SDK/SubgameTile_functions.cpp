#pragma once

#include "Basic.hpp"

#include "SubgameTile_classes.hpp"
#include "SubgameTile_parameters.hpp"

namespace SDK
{

void USubgameTile_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameTile_C", "PreConstruct");

	Params::SubgameTile_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void USubgameTile_C::BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameTile_C", "BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void USubgameTile_C::ExecuteUbergraph_SubgameTile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameTile_C", "ExecuteUbergraph_SubgameTile");

	Params::SubgameTile_C_ExecuteUbergraph_SubgameTile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USubgameTile_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameTile_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USubgameTile_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameTile_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USubgameTile_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubgameTile_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

}
