#pragma once

#include "Basic.hpp"

#include "B_Prj_Athena_FragGrenade_classes.hpp"
#include "B_Prj_Athena_FragGrenade_parameters.hpp"

namespace SDK
{

void AB_Prj_Athena_FragGrenade_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent_0, bool bIsFirstBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_FragGrenade_C", "BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature");

	Params::B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature Parms{};

	Parms.WaterBody = WaterBody;
	Parms.WaterInteractionComponent_0 = WaterInteractionComponent_0;
	Parms.bIsFirstBody = bIsFirstBody;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Prj_Athena_FragGrenade_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent_0, bool bIsLastBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_FragGrenade_C", "BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature");

	Params::B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature Parms{};

	Parms.WaterBody = WaterBody;
	Parms.WaterInteractionComponent_0 = WaterInteractionComponent_0;
	Parms.bIsLastBody = bIsLastBody;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Prj_Athena_FragGrenade_C::ExecuteUbergraph_B_Prj_Athena_FragGrenade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_FragGrenade_C", "ExecuteUbergraph_B_Prj_Athena_FragGrenade");

	Params::B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Prj_Athena_FragGrenade_C::FuseEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_FragGrenade_C", "FuseEnded");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Athena_FragGrenade_C::OnBounce(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_FragGrenade_C", "OnBounce");

	Params::B_Prj_Athena_FragGrenade_C_OnBounce Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Prj_Athena_FragGrenade_C::OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_FragGrenade_C", "OnExploded");

	Params::B_Prj_Athena_FragGrenade_C_OnExploded Parms{};

	Parms.HitActors = std::move(HitActors);
	Parms.HitResults = std::move(HitResults);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Prj_Athena_FragGrenade_C::Pre_Explo_Audio_Tell()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_FragGrenade_C", "Pre Explo Audio Tell");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Athena_FragGrenade_C::PreExploWarning__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_FragGrenade_C", "PreExploWarning__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Athena_FragGrenade_C::PreExploWarning__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_FragGrenade_C", "PreExploWarning__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Athena_FragGrenade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_FragGrenade_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
