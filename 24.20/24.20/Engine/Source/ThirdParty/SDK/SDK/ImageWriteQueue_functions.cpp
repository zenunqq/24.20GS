#pragma once

#include "Basic.hpp"

#include "ImageWriteQueue_classes.hpp"
#include "ImageWriteQueue_parameters.hpp"

namespace SDK
{

void UImageWriteBlueprintLibrary::ExportToDisk(class UTexture* Texture, const class FString& Filename, const struct FImageWriteOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ImageWriteBlueprintLibrary", "ExportToDisk");

	Params::ImageWriteBlueprintLibrary_ExportToDisk Parms{};

	Parms.Texture = Texture;
	Parms.Filename = std::move(Filename);
	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
