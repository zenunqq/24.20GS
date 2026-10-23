#pragma once

#include "Basic.hpp"

#include "Foliage_classes.hpp"
#include "Foliage_parameters.hpp"

namespace SDK
{

int32 UFoliageStatistics::FoliageOverlappingBoxCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, const struct FBox& Box)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FoliageStatistics", "FoliageOverlappingBoxCount");

	Params::FoliageStatistics_FoliageOverlappingBoxCount Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StaticMesh = StaticMesh;
	Parms.Box = std::move(Box);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFoliageStatistics::FoliageOverlappingBoxTransforms(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, const struct FBox& Box, TArray<struct FTransform>* OutTransforms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FoliageStatistics", "FoliageOverlappingBoxTransforms");

	Params::FoliageStatistics_FoliageOverlappingBoxTransforms Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StaticMesh = StaticMesh;
	Parms.Box = std::move(Box);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutTransforms != nullptr)
		*OutTransforms = std::move(Parms.OutTransforms);
}

int32 UFoliageStatistics::FoliageOverlappingSphereCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FoliageStatistics", "FoliageOverlappingSphereCount");

	Params::FoliageStatistics_FoliageOverlappingSphereCount Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StaticMesh = StaticMesh;
	Parms.CenterPosition = std::move(CenterPosition);
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AInteractiveFoliageActor::CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractiveFoliageActor", "CapsuleTouched");

	Params::InteractiveFoliageActor_CapsuleTouched Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.OverlapInfo = std::move(OverlapInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralFoliageSpawner::Simulate(int32 numSteps)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralFoliageSpawner", "Simulate");

	Params::ProceduralFoliageSpawner_Simulate Parms{};

	Parms.numSteps = numSteps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
