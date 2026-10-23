#pragma once

#include "Basic.hpp"

#include "ImagePlate_classes.hpp"
#include "ImagePlate_parameters.hpp"

namespace SDK
{

void UImagePlateComponent::OnRenderTextureChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagePlateComponent", "OnRenderTextureChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UImagePlateComponent::SetImagePlate(const struct FImagePlateParameters& Plate_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagePlateComponent", "SetImagePlate");

	Params::ImagePlateComponent_SetImagePlate Parms{};

	Parms.Plate_0 = std::move(Plate_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FImagePlateParameters UImagePlateComponent::GetPlate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagePlateComponent", "GetPlate");

	Params::ImagePlateComponent_GetPlate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
