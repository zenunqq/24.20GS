#pragma once

#include "Basic.hpp"

#include "BP_Frontend_ShopBG_classes.hpp"
#include "BP_Frontend_ShopBG_parameters.hpp"

namespace SDK
{

void ABP_Frontend_ShopBG_C::SetDynamicEnvironmentEvent(const class FString& InPresetEnvName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "SetDynamicEnvironmentEvent");

	Params::BP_Frontend_ShopBG_C_SetDynamicEnvironmentEvent Parms{};

	Parms.InPresetEnvName = std::move(InPresetEnvName);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_Frontend_ShopBG_C::SetDynamicBG(class UTexture* InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "SetDynamicBG");

	Params::BP_Frontend_ShopBG_C_SetDynamicBG Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_Frontend_ShopBG_C::HandleItemShopEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "HandleItemShopEntered");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_Frontend_ShopBG_C::ResetDonut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "ResetDonut");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_Frontend_ShopBG_C::ExecuteUbergraph_BP_Frontend_ShopBG(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "ExecuteUbergraph_BP_Frontend_ShopBG");

	Params::BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_Frontend_ShopBG_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_Frontend_ShopBG_C::EnableDynamicShopBG()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "EnableDynamicShopBG");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_Frontend_ShopBG_C::HandleStoreEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "HandleStoreEntered");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_Frontend_ShopBG_C::DebugShopBG()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "DebugShopBG");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_Frontend_ShopBG_C::HandleRequestHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "HandleRequestHide");

	UObject::ProcessEvent(Func, nullptr);
}

}
