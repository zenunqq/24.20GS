#pragma once

#include "Basic.hpp"

#include "QualityModeSelectTile_classes.hpp"
#include "QualityModeSelectTile_parameters.hpp"

namespace SDK
{

void UQualityModeSelectTile_C::ExecuteUbergraph_QualityModeSelectTile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QualityModeSelectTile_C", "ExecuteUbergraph_QualityModeSelectTile");

	Params::QualityModeSelectTile_C_ExecuteUbergraph_QualityModeSelectTile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UQualityModeSelectTile_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QualityModeSelectTile_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}

void UQualityModeSelectTile_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QualityModeSelectTile_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UQualityModeSelectTile_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QualityModeSelectTile_C", "PreConstruct");

	Params::QualityModeSelectTile_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UQualityModeSelectTile_C::OnSizeInfoReceived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QualityModeSelectTile_C", "OnSizeInfoReceived");

	UObject::ProcessEvent(Func, nullptr);
}

void UQualityModeSelectTile_C::OnSelectedStateChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QualityModeSelectTile_C", "OnSelectedStateChanged");

	Params::QualityModeSelectTile_C_OnSelectedStateChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}
