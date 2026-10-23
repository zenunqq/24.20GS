#pragma once

#include "Basic.hpp"

#include "WB_AudioAnalysis_FloatGraph_classes.hpp"
#include "WB_AudioAnalysis_FloatGraph_parameters.hpp"

namespace SDK
{

void UWB_AudioAnalysis_FloatGraph_C::calcWidgetSize(const struct FGeometry& geom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AudioAnalysis_FloatGraph_C", "calcWidgetSize");

	Params::WB_AudioAnalysis_FloatGraph_C_calcWidgetSize Parms{};

	Parms.geom = std::move(geom);

	UObject::ProcessEvent(Func, &Parms);
}

void UWB_AudioAnalysis_FloatGraph_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AudioAnalysis_FloatGraph_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWB_AudioAnalysis_FloatGraph_C::ExecuteUbergraph_WB_AudioAnalysis_FloatGraph(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AudioAnalysis_FloatGraph_C", "ExecuteUbergraph_WB_AudioAnalysis_FloatGraph");

	Params::WB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWB_AudioAnalysis_FloatGraph_C::Initialize_MPC(class FName Parameter_0, class UMaterialParameterCollection* Collection_0, int32 VectorIndex_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AudioAnalysis_FloatGraph_C", "Initialize MPC");

	Params::WB_AudioAnalysis_FloatGraph_C_Initialize_MPC Parms{};

	Parms.Parameter_0 = Parameter_0;
	Parms.Collection_0 = Collection_0;
	Parms.VectorIndex_0 = VectorIndex_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UWB_AudioAnalysis_FloatGraph_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AudioAnalysis_FloatGraph_C", "PreConstruct");

	Params::WB_AudioAnalysis_FloatGraph_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UWB_AudioAnalysis_FloatGraph_C::Set_Value(double Value_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AudioAnalysis_FloatGraph_C", "Set Value");

	Params::WB_AudioAnalysis_FloatGraph_C_Set_Value Parms{};

	Parms.Value_0 = Value_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UWB_AudioAnalysis_FloatGraph_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AudioAnalysis_FloatGraph_C", "Tick");

	Params::WB_AudioAnalysis_FloatGraph_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UWB_AudioAnalysis_FloatGraph_C::OnPaint(struct FPaintContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AudioAnalysis_FloatGraph_C", "OnPaint");

	Params::WB_AudioAnalysis_FloatGraph_C_OnPaint Parms{};

	Parms.Context = std::move(Context);

	UObject::ProcessEvent(Func, &Parms);

	Context = std::move(Parms.Context);
}

}
