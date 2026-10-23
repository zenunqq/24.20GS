#pragma once

#include "Basic.hpp"

#include "AthenaBottomBarWidget_classes.hpp"
#include "AthenaBottomBarWidget_parameters.hpp"

namespace SDK
{

void UAthenaBottomBarWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBottomBarWidget_C", "PreConstruct");

	Params::AthenaBottomBarWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaBottomBarWidget_C::ExecuteUbergraph_AthenaBottomBarWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBottomBarWidget_C", "ExecuteUbergraph_AthenaBottomBarWidget");

	Params::AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaBottomBarWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBottomBarWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
