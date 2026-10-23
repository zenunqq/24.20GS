#pragma once

#include "Basic.hpp"

#include "AudioShapes_classes.hpp"
#include "AudioShapes_parameters.hpp"

namespace SDK
{

void UAudioShapeComponent::Disable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapeComponent", "Disable");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAudioShapeComponent::Enable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapeComponent", "Enable");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAudioShapeComponent::UpdateAudioShape(const TArray<class APlayerController*>& InLocalControllers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapeComponent", "UpdateAudioShape");

	Params::AudioShapeComponent_UpdateAudioShape Parms{};

	Parms.InLocalControllers = std::move(InLocalControllers);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAudioComponent* UAudioShapePrimitiveComponent::GetEdgeAudioComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapePrimitiveComponent", "GetEdgeAudioComponent");

	Params::AudioShapePrimitiveComponent_GetEdgeAudioComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAudioComponent* UAudioShapePrimitiveComponent::GetInsideAudioComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapePrimitiveComponent", "GetInsideAudioComponent");

	Params::AudioShapePrimitiveComponent_GetInsideAudioComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAudioShapePrimitiveComponent::GetIsPlayerInside() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapePrimitiveComponent", "GetIsPlayerInside");

	Params::AudioShapePrimitiveComponent_GetIsPlayerInside Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAudioShapeBoxComponent::SetBoxTransform(const struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapeBoxComponent", "SetBoxTransform");

	Params::AudioShapeBoxComponent_SetBoxTransform Parms{};

	Parms.InTransform = std::move(InTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioShapeCylinderComponent::SetHalfHeight(float InHalfHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapeCylinderComponent", "SetHalfHeight");

	Params::AudioShapeCylinderComponent_SetHalfHeight Parms{};

	Parms.InHalfHeight = InHalfHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioShapeCylinderComponent::SetRadius(float InRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapeCylinderComponent", "SetRadius");

	Params::AudioShapeCylinderComponent_SetRadius Parms{};

	Parms.InRadius = InRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioShapeLineComponent::SetEndPoint(const struct FVector& InEndPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapeLineComponent", "SetEndPoint");

	Params::AudioShapeLineComponent_SetEndPoint Parms{};

	Parms.InEndPoint = std::move(InEndPoint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioShapeLineComponent::SetStartPoint(const struct FVector& InStartPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapeLineComponent", "SetStartPoint");

	Params::AudioShapeLineComponent_SetStartPoint Parms{};

	Parms.InStartPoint = std::move(InStartPoint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UAudioShapeLineListComponent::AddPoint(const struct FVector& InPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapeLineListComponent", "AddPoint");

	Params::AudioShapeLineListComponent_AddPoint Parms{};

	Parms.InPoint = std::move(InPoint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAudioShapeLineListComponent::RemovePoint(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapeLineListComponent", "RemovePoint");

	Params::AudioShapeLineListComponent_RemovePoint Parms{};

	Parms.InIndex = InIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAudioShapeLineListComponent::UpdatePoint(int32 InIndex, const struct FVector& InPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapeLineListComponent", "UpdatePoint");

	Params::AudioShapeLineListComponent_UpdatePoint Parms{};

	Parms.InIndex = InIndex;
	Parms.InPoint = std::move(InPoint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAudioShapeLineListComponent::GetPoints(TArray<struct FVector>* OutPoints) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapeLineListComponent", "GetPoints");

	Params::AudioShapeLineListComponent_GetPoints Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPoints != nullptr)
		*OutPoints = std::move(Parms.OutPoints);
}

void UAudioShapeSphereComponent::SetRadius(float InRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioShapeSphereComponent", "SetRadius");

	Params::AudioShapeSphereComponent_SetRadius Parms{};

	Parms.InRadius = InRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
