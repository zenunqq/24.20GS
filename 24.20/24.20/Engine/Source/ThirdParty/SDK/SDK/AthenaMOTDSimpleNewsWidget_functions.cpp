#pragma once

#include "Basic.hpp"

#include "AthenaMOTDSimpleNewsWidget_classes.hpp"
#include "AthenaMOTDSimpleNewsWidget_parameters.hpp"

namespace SDK
{

void UAthenaMOTDSimpleNewsWidget_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDSimpleNewsWidget_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDSimpleNewsWidget_C::ExecuteUbergraph_AthenaMOTDSimpleNewsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDSimpleNewsWidget_C", "ExecuteUbergraph_AthenaMOTDSimpleNewsWidget");

	Params::AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDSimpleNewsWidget_C::OnPopulateNews(const struct FAthenaMOTDBase& NewsEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDSimpleNewsWidget_C", "OnPopulateNews");

	Params::AthenaMOTDSimpleNewsWidget_C_OnPopulateNews Parms{};

	Parms.NewsEntry = std::move(NewsEntry);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDSimpleNewsWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDSimpleNewsWidget_C", "PreConstruct");

	Params::AthenaMOTDSimpleNewsWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDSimpleNewsWidget_C::SetDynamicColors(const struct FColor& Dark, const struct FColor& Light)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDSimpleNewsWidget_C", "SetDynamicColors");

	Params::AthenaMOTDSimpleNewsWidget_C_SetDynamicColors Parms{};

	Parms.Dark = std::move(Dark);
	Parms.Light = std::move(Light);

	UObject::ProcessEvent(Func, &Parms);
}

}
