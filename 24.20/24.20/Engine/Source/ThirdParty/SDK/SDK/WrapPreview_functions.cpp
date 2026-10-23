#pragma once

#include "Basic.hpp"

#include "WrapPreview_classes.hpp"
#include "WrapPreview_parameters.hpp"

namespace SDK
{

void AWrapPreview_C::UpdateSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapPreview_C", "UpdateSettings");

	UObject::ProcessEvent(Func, nullptr);
}

void AWrapPreview_C::UpdateLightingScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapPreview_C", "UpdateLightingScale");

	UObject::ProcessEvent(Func, nullptr);
}

void AWrapPreview_C::UpdateFloorVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapPreview_C", "UpdateFloorVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

void AWrapPreview_C::SwitchPCLighting(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapPreview_C", "SwitchPCLighting");

	Params::WrapPreview_C_SwitchPCLighting Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);
}

void AWrapPreview_C::OnUpdateFloorMaterial(bool bEnableAutotestBackground)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapPreview_C", "OnUpdateFloorMaterial");

	Params::WrapPreview_C_OnUpdateFloorMaterial Parms{};

	Parms.bEnableAutotestBackground = bEnableAutotestBackground;

	UObject::ProcessEvent(Func, &Parms);
}

void AWrapPreview_C::SwitchMobileLighting(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapPreview_C", "SwitchMobileLighting");

	Params::WrapPreview_C_SwitchMobileLighting Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}

void AWrapPreview_C::OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapPreview_C", "OnSetFloorMaterial");

	Params::WrapPreview_C_OnSetFloorMaterial Parms{};

	Parms.InMaterialInstance = InMaterialInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AWrapPreview_C::SwitchErebusLighting(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapPreview_C", "SwitchErebusLighting");

	Params::WrapPreview_C_SwitchErebusLighting Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);
}

void AWrapPreview_C::OnPreviewVisualsSpawned(const bool bUseSecondaryTransitionEffects, const bool bShowFloor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapPreview_C", "OnPreviewVisualsSpawned");

	Params::WrapPreview_C_OnPreviewVisualsSpawned Parms{};

	Parms.bUseSecondaryTransitionEffects = bUseSecondaryTransitionEffects;
	Parms.bShowFloor = bShowFloor;

	UObject::ProcessEvent(Func, &Parms);
}

void AWrapPreview_C::LightControl(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapPreview_C", "LightControl");

	Params::WrapPreview_C_LightControl Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}

void AWrapPreview_C::SetFloorEnabled(bool Floor_Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapPreview_C", "SetFloorEnabled");

	Params::WrapPreview_C_SetFloorEnabled Parms{};

	Parms.Floor_Enabled = Floor_Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

void AWrapPreview_C::HandleLightingScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapPreview_C", "HandleLightingScale");

	UObject::ProcessEvent(Func, nullptr);
}

void AWrapPreview_C::ExecuteUbergraph_WrapPreview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WrapPreview_C", "ExecuteUbergraph_WrapPreview");

	Params::WrapPreview_C_ExecuteUbergraph_WrapPreview Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
