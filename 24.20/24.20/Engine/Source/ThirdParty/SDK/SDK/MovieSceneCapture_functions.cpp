#pragma once

#include "Basic.hpp"

#include "MovieSceneCapture_classes.hpp"
#include "MovieSceneCapture_parameters.hpp"

namespace SDK
{

EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCaptureProtocolBase", "GetState");

	Params::MovieSceneCaptureProtocolBase_GetState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneCaptureProtocolBase::IsCapturing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCaptureProtocolBase", "IsCapturing");

	Params::MovieSceneCaptureProtocolBase_IsCapturing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCapture", "GetAudioCaptureProtocol");

	Params::MovieSceneCapture_GetAudioCaptureProtocol Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCapture", "GetImageCaptureProtocol");

	Params::MovieSceneCapture_GetImageCaptureProtocol Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneCapture::SetAudioCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCapture", "SetAudioCaptureProtocolType");

	Params::MovieSceneCapture_SetAudioCaptureProtocolType Parms{};

	Parms.ProtocolType = ProtocolType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneCapture::SetImageCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCapture", "SetImageCaptureProtocolType");

	Params::MovieSceneCapture_SetImageCaptureProtocolType Parms{};

	Parms.ProtocolType = ProtocolType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UMovieSceneAudioCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneCaptureEnvironment", "FindAudioCaptureProtocol");

	Params::MovieSceneCaptureEnvironment_FindAudioCaptureProtocol Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneImageCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindImageCaptureProtocol()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneCaptureEnvironment", "FindImageCaptureProtocol");

	Params::MovieSceneCaptureEnvironment_FindImageCaptureProtocol Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneCaptureEnvironment::GetCaptureElapsedTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneCaptureEnvironment", "GetCaptureElapsedTime");

	Params::MovieSceneCaptureEnvironment_GetCaptureElapsedTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneCaptureEnvironment::GetCaptureFrameNumber()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneCaptureEnvironment", "GetCaptureFrameNumber");

	Params::MovieSceneCaptureEnvironment_GetCaptureFrameNumber Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneCaptureEnvironment::IsCaptureInProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneCaptureEnvironment", "IsCaptureInProgress");

	Params::MovieSceneCaptureEnvironment_IsCaptureInProgress Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UUserDefinedCaptureProtocol::OnBeginFinalize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnBeginFinalize");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserDefinedCaptureProtocol::OnCaptureFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnCaptureFrame");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserDefinedCaptureProtocol::OnFinalize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnFinalize");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserDefinedCaptureProtocol::OnPauseCapture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnPauseCapture");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserDefinedCaptureProtocol::OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnPixelsReceived");

	Params::UserDefinedCaptureProtocol_OnPixelsReceived Parms{};

	Parms.Pixels = std::move(Pixels);
	Parms.ID = std::move(ID);
	Parms.FrameMetrics = std::move(FrameMetrics);

	UObject::ProcessEvent(Func, &Parms);
}

void UUserDefinedCaptureProtocol::OnPreTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnPreTick");

	UObject::ProcessEvent(Func, nullptr);
}

bool UUserDefinedCaptureProtocol::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnSetup");

	Params::UserDefinedCaptureProtocol_OnSetup Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UUserDefinedCaptureProtocol::OnStartCapture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnStartCapture");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserDefinedCaptureProtocol::OnTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnTick");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserDefinedCaptureProtocol::OnWarmUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnWarmUp");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserDefinedCaptureProtocol::ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "ResolveBuffer");

	Params::UserDefinedCaptureProtocol_ResolveBuffer Parms{};

	Parms.Buffer = Buffer;
	Parms.BufferID = std::move(BufferID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "StartCapturingFinalPixels");

	Params::UserDefinedCaptureProtocol_StartCapturingFinalPixels Parms{};

	Parms.StreamID = std::move(StreamID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUserDefinedCaptureProtocol::StopCapturingFinalPixels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "StopCapturingFinalPixels");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class FString UUserDefinedCaptureProtocol::GenerateFilename(const struct FFrameMetrics& InFrameMetrics) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "GenerateFilename");

	Params::UserDefinedCaptureProtocol_GenerateFilename Parms{};

	Parms.InFrameMetrics = std::move(InFrameMetrics);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "GetCurrentFrameMetrics");

	Params::UserDefinedCaptureProtocol_GetCurrentFrameMetrics Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UUserDefinedCaptureProtocol::OnCanFinalize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnCanFinalize");

	Params::UserDefinedCaptureProtocol_OnCanFinalize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& StreamID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedImageCaptureProtocol", "GenerateFilenameForBuffer");

	Params::UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer Parms{};

	Parms.Buffer = Buffer;
	Parms.StreamID = std::move(StreamID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedImageCaptureProtocol", "GenerateFilenameForCurrentFrame");

	Params::UserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UUserDefinedImageCaptureProtocol::WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserDefinedImageCaptureProtocol", "WriteImageToDisk");

	Params::UserDefinedImageCaptureProtocol_WriteImageToDisk Parms{};

	Parms.PixelData = std::move(PixelData);
	Parms.StreamID = std::move(StreamID);
	Parms.FrameMetrics = std::move(FrameMetrics);
	Parms.bCopyImageData = bCopyImageData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
