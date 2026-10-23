#pragma once

#include "Basic.hpp"

#include "GLTFExporter_classes.hpp"
#include "GLTFExporter_parameters.hpp"

namespace SDK
{

void UGLTFExportOptions::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GLTFExportOptions", "ResetToDefault");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UGLTFExporter::ExportToGLTF(class UObject* Object, const class FString& FilePath, const class UGLTFExportOptions* Options, const TSet<class AActor*>& SelectedActors, struct FGLTFExportMessages* OutMessages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GLTFExporter", "ExportToGLTF");

	Params::GLTFExporter_ExportToGLTF Parms{};

	Parms.Object = Object;
	Parms.FilePath = std::move(FilePath);
	Parms.Options = Options;
	Parms.SelectedActors = std::move(SelectedActors);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutMessages != nullptr)
		*OutMessages = std::move(Parms.OutMessages);

	return Parms.ReturnValue;
}

void UGLTFProxyOptions::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GLTFProxyOptions", "ResetToDefault");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
