#pragma once

#include "Basic.hpp"

#include "MASTER_TODM_classes.hpp"
#include "MASTER_TODM_parameters.hpp"

namespace SDK
{

void AMASTER_TODM_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void AMASTER_TODM_C::UpdateSSAO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "UpdateSSAO");

	UObject::ProcessEvent(Func, nullptr);
}

void AMASTER_TODM_C::StartStorm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "StartStorm");

	UObject::ProcessEvent(Func, nullptr);
}

void AMASTER_TODM_C::SetHeavySSAO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "SetHeavySSAO");

	UObject::ProcessEvent(Func, nullptr);
}

void AMASTER_TODM_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AMASTER_TODM_C::New_Storm_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "New Storm Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AMASTER_TODM_C::OnStormStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "OnStormStart");

	UObject::ProcessEvent(Func, nullptr);
}

void AMASTER_TODM_C::New_Storm_Timeline__FireOffRain__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "New Storm Timeline__FireOffRain__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AMASTER_TODM_C::OnStormEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "OnStormEnd");

	UObject::ProcessEvent(Func, nullptr);
}

void AMASTER_TODM_C::FlashLightning__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "FlashLightning__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AMASTER_TODM_C::New_Storm_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "New Storm Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AMASTER_TODM_C::ExecuteUbergraph_MASTER_TODM(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "ExecuteUbergraph_MASTER_TODM");

	Params::MASTER_TODM_C_ExecuteUbergraph_MASTER_TODM Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AMASTER_TODM_C::LightningStrike()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "LightningStrike");

	UObject::ProcessEvent(Func, nullptr);
}

void AMASTER_TODM_C::EnableHDRRendering()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "EnableHDRRendering");

	UObject::ProcessEvent(Func, nullptr);
}

void AMASTER_TODM_C::FlashLightning__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "FlashLightning__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AMASTER_TODM_C::EmptyTransform(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "EmptyTransform");

	Params::MASTER_TODM_C_EmptyTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);
}

void AMASTER_TODM_C::DisableLightAndFog(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MASTER_TODM_C", "DisableLightAndFog");

	Params::MASTER_TODM_C_DisableLightAndFog Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}
