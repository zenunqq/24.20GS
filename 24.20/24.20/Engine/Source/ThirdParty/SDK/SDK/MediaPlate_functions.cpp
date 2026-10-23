#pragma once

#include "Basic.hpp"

#include "MediaPlate_classes.hpp"
#include "MediaPlate_parameters.hpp"

namespace SDK
{

void UMediaPlateComponent::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "Close");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

float UMediaPlateComponent::GetLetterboxAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "GetLetterboxAspectRatio");

	Params::MediaPlateComponent_GetLetterboxAspectRatio Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlateComponent::GetLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "GetLoop");

	Params::MediaPlateComponent_GetLoop Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMediaPlayer* UMediaPlateComponent::GetMediaPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "GetMediaPlayer");

	Params::MediaPlateComponent_GetMediaPlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMediaTexture* UMediaPlateComponent::GetMediaTexture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "GetMediaTexture");

	Params::MediaPlateComponent_GetMediaTexture Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMediaPlateComponent::OnMediaEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "OnMediaEnd");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMediaPlateComponent::OnMediaOpened(const class FString& DeviceUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "OnMediaOpened");

	Params::MediaPlateComponent_OnMediaOpened Parms{};

	Parms.DeviceUrl = std::move(DeviceUrl);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMediaPlateComponent::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "Open");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMediaPlateComponent::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "Pause");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMediaPlateComponent::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UMediaPlateComponent::Rewind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "Rewind");

	Params::MediaPlateComponent_Rewind Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlateComponent::Seek(const struct FTimespan& Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "Seek");

	Params::MediaPlateComponent_Seek Parms{};

	Parms.Time = std::move(Time);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMediaPlateComponent::SetLetterboxAspectRatio(float AspectRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "SetLetterboxAspectRatio");

	Params::MediaPlateComponent_SetLetterboxAspectRatio Parms{};

	Parms.AspectRatio = AspectRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMediaPlateComponent::SetLoop(bool bInLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "SetLoop");

	Params::MediaPlateComponent_SetLoop Parms{};

	Parms.bInLoop = bInLoop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMediaPlateComponent::SetMeshRange(const struct FVector2D& InMeshRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "SetMeshRange");

	Params::MediaPlateComponent_SetMeshRange Parms{};

	Parms.InMeshRange = std::move(InMeshRange);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMediaPlateComponent::SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "SetPlayOnlyWhenVisible");

	Params::MediaPlateComponent_SetPlayOnlyWhenVisible Parms{};

	Parms.bInPlayOnlyWhenVisible = bInPlayOnlyWhenVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FVector2D UMediaPlateComponent::GetMeshRange() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "GetMeshRange");

	Params::MediaPlateComponent_GetMeshRange Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlateComponent::IsMediaPlatePlaying() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlateComponent", "IsMediaPlatePlaying");

	Params::MediaPlateComponent_IsMediaPlatePlaying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
