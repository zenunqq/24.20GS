#pragma once

#include "Basic.hpp"

#include "ItemOnPawnPreview_classes.hpp"
#include "ItemOnPawnPreview_parameters.hpp"

namespace SDK
{

void AItemOnPawnPreview_C::SetFloorEnabled(bool Show_Floor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "SetFloorEnabled");

	Params::ItemOnPawnPreview_C_SetFloorEnabled Parms{};

	Parms.Show_Floor = Show_Floor;

	UObject::ProcessEvent(Func, &Parms);
}

void AItemOnPawnPreview_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AItemOnPawnPreview_C::UpdateSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "UpdateSettings");

	UObject::ProcessEvent(Func, nullptr);
}

void AItemOnPawnPreview_C::OnUpdateFloorMaterial(bool bEnableAutotestBackground)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "OnUpdateFloorMaterial");

	Params::ItemOnPawnPreview_C_OnUpdateFloorMaterial Parms{};

	Parms.bEnableAutotestBackground = bEnableAutotestBackground;

	UObject::ProcessEvent(Func, &Parms);
}

void AItemOnPawnPreview_C::SwitchPCLighting(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "SwitchPCLighting");

	Params::ItemOnPawnPreview_C_SwitchPCLighting Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);
}

void AItemOnPawnPreview_C::OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "OnSetFloorMaterial");

	Params::ItemOnPawnPreview_C_OnSetFloorMaterial Parms{};

	Parms.InMaterialInstance = InMaterialInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AItemOnPawnPreview_C::SwitchMobileLighting(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "SwitchMobileLighting");

	Params::ItemOnPawnPreview_C_SwitchMobileLighting Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}

void AItemOnPawnPreview_C::OnPreviewVisualsSpawned(const bool bUseSecondaryTransitionEffects, const bool bShowFloor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "OnPreviewVisualsSpawned");

	Params::ItemOnPawnPreview_C_OnPreviewVisualsSpawned Parms{};

	Parms.bUseSecondaryTransitionEffects = bUseSecondaryTransitionEffects;
	Parms.bShowFloor = bShowFloor;

	UObject::ProcessEvent(Func, &Parms);
}

void AItemOnPawnPreview_C::SwitchErebusLighting(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "SwitchErebusLighting");

	Params::ItemOnPawnPreview_C_SwitchErebusLighting Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);
}

void AItemOnPawnPreview_C::Get_LOD_Streaming_Safety_Duration()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "Get LOD Streaming Safety Duration");

	UObject::ProcessEvent(Func, nullptr);
}

void AItemOnPawnPreview_C::OnCurrentVisualsCleanedUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "OnCurrentVisualsCleanedUp");

	UObject::ProcessEvent(Func, nullptr);
}

void AItemOnPawnPreview_C::ExecuteUbergraph_ItemOnPawnPreview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "ExecuteUbergraph_ItemOnPawnPreview");

	Params::ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AItemOnPawnPreview_C::OnAllLODStreamingComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "OnAllLODStreamingComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void AItemOnPawnPreview_C::Backup_LODStreamingFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "Backup_LODStreamingFailed");

	UObject::ProcessEvent(Func, nullptr);
}

void AItemOnPawnPreview_C::LightControl(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemOnPawnPreview_C", "LightControl");

	Params::ItemOnPawnPreview_C_LightControl Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}

}
