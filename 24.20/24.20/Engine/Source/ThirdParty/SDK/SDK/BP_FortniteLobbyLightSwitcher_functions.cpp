#pragma once

#include "Basic.hpp"

#include "BP_FortniteLobbyLightSwitcher_classes.hpp"
#include "BP_FortniteLobbyLightSwitcher_parameters.hpp"

namespace SDK
{

void ABP_FortniteLobbyLightSwitcher_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FortniteLobbyLightSwitcher_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FortniteLobbyLightSwitcher_C::UpdateSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "UpdateSettings");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FortniteLobbyLightSwitcher_C::ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "ExecuteUbergraph_BP_FortniteLobbyLightSwitcher");

	Params::BP_FortniteLobbyLightSwitcher_C_ExecuteUbergraph_BP_FortniteLobbyLightSwitcher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FortniteLobbyLightSwitcher_C::SetVisiblityofSceneLighting(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "SetVisiblityofSceneLighting");

	Params::BP_FortniteLobbyLightSwitcher_C_SetVisiblityofSceneLighting Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FortniteLobbyLightSwitcher_C::EnableLobbySetLighting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "EnableLobbySetLighting");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FortniteLobbyLightSwitcher_C::SetVisiblityofDetailSpecificMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "SetVisiblityofDetailSpecificMeshes");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FortniteLobbyLightSwitcher_C::DisableLobbySetLighting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "DisableLobbySetLighting");

	UObject::ProcessEvent(Func, nullptr);
}

}
