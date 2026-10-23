#pragma once

#include "Basic.hpp"

#include "Water_classes.hpp"
#include "Water_parameters.hpp"

namespace SDK
{

void UBuoyancyComponent::GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int32* OutWaterBodyIdx, struct FVector* OutWaterVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuoyancyComponent", "GetLastWaterSurfaceInfo");

	Params::BuoyancyComponent_GetLastWaterSurfaceInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutWaterPlaneLocation != nullptr)
		*OutWaterPlaneLocation = std::move(Parms.OutWaterPlaneLocation);

	if (OutWaterPlaneNormal != nullptr)
		*OutWaterPlaneNormal = std::move(Parms.OutWaterPlaneNormal);

	if (OutWaterSurfacePosition != nullptr)
		*OutWaterSurfacePosition = std::move(Parms.OutWaterSurfacePosition);

	if (OutWaterDepth != nullptr)
		*OutWaterDepth = Parms.OutWaterDepth;

	if (OutWaterBodyIdx != nullptr)
		*OutWaterBodyIdx = Parms.OutWaterBodyIdx;

	if (OutWaterVelocity != nullptr)
		*OutWaterVelocity = std::move(Parms.OutWaterVelocity);
}

void UBuoyancyComponent::OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuoyancyComponent", "OnPontoonEnteredWater");

	Params::BuoyancyComponent_OnPontoonEnteredWater Parms{};

	Parms.Pontoon = std::move(Pontoon);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBuoyancyComponent::OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuoyancyComponent", "OnPontoonExitedWater");

	Params::BuoyancyComponent_OnPontoonExitedWater Parms{};

	Parms.Pontoon = std::move(Pontoon);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const TArray<class UWaterBodyComponent*> UBuoyancyComponent::GetCurrentWaterBodyComponents() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuoyancyComponent", "GetCurrentWaterBodyComponents");

	Params::BuoyancyComponent_GetCurrentWaterBodyComponents Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBuoyancyComponent::IsInWaterBody() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuoyancyComponent", "IsInWaterBody");

	Params::BuoyancyComponent_IsInWaterBody Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBuoyancyComponent::IsOverlappingWaterBody() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuoyancyComponent", "IsOverlappingWaterBody");

	Params::BuoyancyComponent_IsOverlappingWaterBody Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ABuoyancyManager::GetBuoyancyComponentManager(const class UObject* WorldContextObject, class ABuoyancyManager** Manager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BuoyancyManager", "GetBuoyancyComponentManager");

	Params::BuoyancyManager_GetBuoyancyComponentManager Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Manager != nullptr)
		*Manager = Parms.Manager;

	return Parms.ReturnValue;
}

void UGerstnerWaterWaveGeneratorBase::GenerateGerstnerWaves(TArray<struct FGerstnerWave>* OutWaves) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GerstnerWaterWaveGeneratorBase", "GenerateGerstnerWaves");

	Params::GerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutWaves != nullptr)
		*OutWaves = std::move(Parms.OutWaves);
}

void UNiagaraWaterFunctionLibrary::SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraWaterFunctionLibrary", "SetWaterBody");

	Params::NiagaraWaterFunctionLibrary_SetWaterBody Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = std::move(OverrideName);
	Parms.WaterBody = WaterBody;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNiagaraWaterFunctionLibrary::SetWaterBodyComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UWaterBodyComponent* WaterBodyComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NiagaraWaterFunctionLibrary", "SetWaterBodyComponent");

	Params::NiagaraWaterFunctionLibrary_SetWaterBodyComponent Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = std::move(OverrideName);
	Parms.WaterBodyComponent = WaterBodyComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UMaterialInstanceDynamic* AWaterBody::GetRiverToLakeTransitionMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBody", "GetRiverToLakeTransitionMaterialInstance");

	Params::WaterBody_GetRiverToLakeTransitionMaterialInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInstanceDynamic* AWaterBody::GetRiverToOceanTransitionMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBody", "GetRiverToOceanTransitionMaterialInstance");

	Params::WaterBody_GetRiverToOceanTransitionMaterialInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInstanceDynamic* AWaterBody::GetWaterMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBody", "GetWaterMaterialInstance");

	Params::WaterBody_GetWaterMaterialInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AWaterBody::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBody", "OnWaterBodyChanged");

	Params::WaterBody_OnWaterBodyChanged Parms{};

	Parms.bShapeOrPositionChanged = bShapeOrPositionChanged;
	Parms.bWeightmapSettingsChanged = bWeightmapSettingsChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AWaterBody::SetWaterMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBody", "SetWaterMaterial");

	Params::WaterBody_SetWaterMaterial Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AWaterBody::SetWaterWaves(class UWaterWavesBase* InWaterWaves)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBody", "SetWaterWaves");

	Params::WaterBody_SetWaterWaves Parms{};

	Parms.InWaterWaves = InWaterWaves;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float AWaterBody::GetAudioIntensityAtSplineInputKey(float InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBody", "GetAudioIntensityAtSplineInputKey");

	Params::WaterBody_GetAudioIntensityAtSplineInputKey Parms{};

	Parms.InKey = InKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class AWaterBodyExclusionVolume*> AWaterBody::GetExclusionVolumes() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBody", "GetExclusionVolumes");

	Params::WaterBody_GetExclusionVolumes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class AWaterBodyIsland*> AWaterBody::GetIslands() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBody", "GetIslands");

	Params::WaterBody_GetIslands Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWaterBodyComponent* AWaterBody::GetWaterBodyComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBody", "GetWaterBodyComponent");

	Params::WaterBody_GetWaterBodyComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EWaterBodyType AWaterBody::GetWaterBodyType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBody", "GetWaterBodyType");

	Params::WaterBody_GetWaterBodyType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWaterSplineComponent* AWaterBody::GetWaterSpline() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBody", "GetWaterSpline");

	Params::WaterBody_GetWaterSpline Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AWaterBody::GetWaterVelocityAtSplineInputKey(float InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBody", "GetWaterVelocityAtSplineInputKey");

	Params::WaterBody_GetWaterVelocityAtSplineInputKey Parms{};

	Parms.InKey = InKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector AWaterBody::GetWaterVelocityVectorAtSplineInputKey(float InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBody", "GetWaterVelocityVectorAtSplineInputKey");

	Params::WaterBody_GetWaterVelocityVectorAtSplineInputKey Parms{};

	Parms.InKey = InKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInstanceDynamic* UWaterBodyComponent::GetRiverToLakeTransitionMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetRiverToLakeTransitionMaterialInstance");

	Params::WaterBodyComponent_GetRiverToLakeTransitionMaterialInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInstanceDynamic* UWaterBodyComponent::GetRiverToOceanTransitionMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetRiverToOceanTransitionMaterialInstance");

	Params::WaterBodyComponent_GetRiverToOceanTransitionMaterialInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInstanceDynamic* UWaterBodyComponent::GetUnderwaterPostProcessMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetUnderwaterPostProcessMaterialInstance");

	Params::WaterBodyComponent_GetUnderwaterPostProcessMaterialInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterInfoMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterInfoMaterialInstance");

	Params::WaterBodyComponent_GetWaterInfoMaterialInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterLODMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterLODMaterialInstance");

	Params::WaterBodyComponent_GetWaterLODMaterialInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterMaterialInstance");

	Params::WaterBodyComponent_GetWaterMaterialInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWaterBodyComponent::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "OnWaterBodyChanged");

	Params::WaterBodyComponent_OnWaterBodyChanged Parms{};

	Parms.bShapeOrPositionChanged = bShapeOrPositionChanged;
	Parms.bWeightmapSettingsChanged = bWeightmapSettingsChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWaterBodyComponent::SetWaterAndUnderWaterPostProcessMaterial(class UMaterialInterface* InWaterMaterial, class UMaterialInterface* InUnderWaterPostProcessMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "SetWaterAndUnderWaterPostProcessMaterial");

	Params::WaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial Parms{};

	Parms.InWaterMaterial = InWaterMaterial;
	Parms.InUnderWaterPostProcessMaterial = InUnderWaterPostProcessMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<class UPrimitiveComponent*> UWaterBodyComponent::GetCollisionComponents(bool bInOnlyEnabledComponents) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetCollisionComponents");

	Params::WaterBodyComponent_GetCollisionComponents Parms{};

	Parms.bInOnlyEnabledComponents = bInOnlyEnabledComponents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class AWaterBodyExclusionVolume*> UWaterBodyComponent::GetExclusionVolumes() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetExclusionVolumes");

	Params::WaterBodyComponent_GetExclusionVolumes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class AWaterBodyIsland*> UWaterBodyComponent::GetIslands() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetIslands");

	Params::WaterBodyComponent_GetIslands Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UWaterBodyComponent::GetMaxWaveHeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetMaxWaveHeight");

	Params::WaterBodyComponent_GetMaxWaveHeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UPrimitiveComponent*> UWaterBodyComponent::GetStandardRenderableComponents() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetStandardRenderableComponents");

	Params::WaterBodyComponent_GetStandardRenderableComponents Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AWaterBody* UWaterBodyComponent::GetWaterBodyActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterBodyActor");

	Params::WaterBodyComponent_GetWaterBodyActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInterface* UWaterBodyComponent::GetWaterMaterial() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterMaterial");

	Params::WaterBodyComponent_GetWaterMaterial Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWaterSplineComponent* UWaterBodyComponent::GetWaterSpline() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterSpline");

	Params::WaterBodyComponent_GetWaterSpline Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWaterBodyComponent::GetWaterSurfaceInfoAtLocation(const struct FVector& InLocation, struct FVector* OutWaterSurfaceLocation, struct FVector* OutWaterSurfaceNormal, struct FVector* OutWaterVelocity, float* OutWaterDepth, bool bIncludeDepth) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterSurfaceInfoAtLocation");

	Params::WaterBodyComponent_GetWaterSurfaceInfoAtLocation Parms{};

	Parms.InLocation = std::move(InLocation);
	Parms.bIncludeDepth = bIncludeDepth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutWaterSurfaceLocation != nullptr)
		*OutWaterSurfaceLocation = std::move(Parms.OutWaterSurfaceLocation);

	if (OutWaterSurfaceNormal != nullptr)
		*OutWaterSurfaceNormal = std::move(Parms.OutWaterSurfaceNormal);

	if (OutWaterVelocity != nullptr)
		*OutWaterVelocity = std::move(Parms.OutWaterVelocity);

	if (OutWaterDepth != nullptr)
		*OutWaterDepth = Parms.OutWaterDepth;
}

float UWaterBodyComponent::GetWaterVelocityAtSplineInputKey(float InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterVelocityAtSplineInputKey");

	Params::WaterBodyComponent_GetWaterVelocityAtSplineInputKey Parms{};

	Parms.InKey = InKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWaterWavesBase* UWaterBodyComponent::GetWaterWaves() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyComponent", "GetWaterWaves");

	Params::WaterBodyComponent_GetWaterWaves Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWaterSplineComponent* AWaterBodyIsland::GetWaterSpline() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterBodyIsland", "GetWaterSpline");

	Params::WaterBodyIsland_GetWaterSpline Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWaterMeshComponent::IsEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterMeshComponent", "IsEnabled");

	Params::WaterMeshComponent_IsEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWaterSplineComponent::K2_SynchronizeAndBroadcastDataChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterSplineComponent", "K2_SynchronizeAndBroadcastDataChange");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int32 UWaterSubsystem::GetShallowWaterMaxDynamicForces()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WaterSubsystem", "GetShallowWaterMaxDynamicForces");

	Params::WaterSubsystem_GetShallowWaterMaxDynamicForces Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UWaterSubsystem::GetShallowWaterMaxImpulseForces()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WaterSubsystem", "GetShallowWaterMaxImpulseForces");

	Params::WaterSubsystem_GetShallowWaterMaxImpulseForces Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UWaterSubsystem::GetShallowWaterSimulationRenderTargetSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WaterSubsystem", "GetShallowWaterSimulationRenderTargetSize");

	Params::WaterSubsystem_GetShallowWaterSimulationRenderTargetSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWaterSubsystem::PrintToWaterLog(const class FString& message, bool bWarning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterSubsystem", "PrintToWaterLog");

	Params::WaterSubsystem_PrintToWaterLog Parms{};

	Parms.message = std::move(message);
	Parms.bWarning = bWarning;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWaterSubsystem::SetOceanFloodHeight(float InFloodHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterSubsystem", "SetOceanFloodHeight");

	Params::WaterSubsystem_SetOceanFloodHeight Parms{};

	Parms.InFloodHeight = InFloodHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UWaterSubsystem::GetCameraUnderwaterDepth() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterSubsystem", "GetCameraUnderwaterDepth");

	Params::WaterSubsystem_GetCameraUnderwaterDepth Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UWaterSubsystem::GetOceanBaseHeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterSubsystem", "GetOceanBaseHeight");

	Params::WaterSubsystem_GetOceanBaseHeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UWaterSubsystem::GetOceanFloodHeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterSubsystem", "GetOceanFloodHeight");

	Params::WaterSubsystem_GetOceanFloodHeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UWaterSubsystem::GetOceanTotalHeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterSubsystem", "GetOceanTotalHeight");

	Params::WaterSubsystem_GetOceanTotalHeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UWaterSubsystem::GetSmoothedWorldTimeSeconds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterSubsystem", "GetSmoothedWorldTimeSeconds");

	Params::WaterSubsystem_GetSmoothedWorldTimeSeconds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UWaterSubsystem::GetWaterTimeSeconds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterSubsystem", "GetWaterTimeSeconds");

	Params::WaterSubsystem_GetWaterTimeSeconds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWaterSubsystem::IsShallowWaterSimulationEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterSubsystem", "IsShallowWaterSimulationEnabled");

	Params::WaterSubsystem_IsShallowWaterSimulationEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWaterSubsystem::IsUnderwaterPostProcessEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterSubsystem", "IsUnderwaterPostProcessEnabled");

	Params::WaterSubsystem_IsUnderwaterPostProcessEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWaterSubsystem::IsWaterRenderingEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaterSubsystem", "IsWaterRenderingEnabled");

	Params::WaterSubsystem_IsWaterRenderingEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
