#pragma once

#include "Basic.hpp"

#include "Paper2D_classes.hpp"
#include "Paper2D_parameters.hpp"

namespace SDK
{

int32 UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbook", "GetKeyFrameIndexAtTime");

	Params::PaperFlipbook_GetKeyFrameIndexAtTime Parms{};

	Parms.Time = Time;
	Parms.bClampToEnds = bClampToEnds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UPaperFlipbook::GetNumFrames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbook", "GetNumFrames");

	Params::PaperFlipbook_GetNumFrames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UPaperFlipbook::GetNumKeyFrames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbook", "GetNumKeyFrames");

	Params::PaperFlipbook_GetNumKeyFrames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int32 FrameIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbook", "GetSpriteAtFrame");

	Params::PaperFlipbook_GetSpriteAtFrame Parms{};

	Parms.FrameIndex = FrameIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbook", "GetSpriteAtTime");

	Params::PaperFlipbook_GetSpriteAtTime Parms{};

	Parms.Time = Time;
	Parms.bClampToEnds = bClampToEnds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UPaperFlipbook::GetTotalDuration() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbook", "GetTotalDuration");

	Params::PaperFlipbook_GetTotalDuration Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPaperFlipbook::IsValidKeyFrameIndex(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbook", "IsValidKeyFrameIndex");

	Params::PaperFlipbook_IsValidKeyFrameIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPaperFlipbook* UPaperFlipbookComponent::GetFlipbook()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetFlipbook");

	Params::PaperFlipbookComponent_GetFlipbook Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPaperFlipbookComponent::OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "OnRep_SourceFlipbook");

	Params::PaperFlipbookComponent_OnRep_SourceFlipbook Parms{};

	Parms.OldFlipbook = OldFlipbook;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPaperFlipbookComponent::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPaperFlipbookComponent::PlayFromStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "PlayFromStart");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPaperFlipbookComponent::Reverse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "Reverse");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPaperFlipbookComponent::ReverseFromEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "ReverseFromEnd");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UPaperFlipbookComponent::SetFlipbook(class UPaperFlipbook* NewFlipbook)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "SetFlipbook");

	Params::PaperFlipbookComponent_SetFlipbook Parms{};

	Parms.NewFlipbook = NewFlipbook;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPaperFlipbookComponent::SetLooping(bool bNewLooping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "SetLooping");

	Params::PaperFlipbookComponent_SetLooping Parms{};

	Parms.bNewLooping = bNewLooping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPaperFlipbookComponent::SetNewTime(float NewTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "SetNewTime");

	Params::PaperFlipbookComponent_SetNewTime Parms{};

	Parms.NewTime = NewTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPaperFlipbookComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "SetPlaybackPosition");

	Params::PaperFlipbookComponent_SetPlaybackPosition Parms{};

	Parms.NewPosition = NewPosition;
	Parms.bFireEvents = bFireEvents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int32 NewFramePosition, bool bFireEvents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "SetPlaybackPositionInFrames");

	Params::PaperFlipbookComponent_SetPlaybackPositionInFrames Parms{};

	Parms.NewFramePosition = NewFramePosition;
	Parms.bFireEvents = bFireEvents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPaperFlipbookComponent::SetPlayRate(float NewRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "SetPlayRate");

	Params::PaperFlipbookComponent_SetPlayRate Parms{};

	Parms.NewRate = NewRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPaperFlipbookComponent::SetSpriteColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "SetSpriteColor");

	Params::PaperFlipbookComponent_SetSpriteColor Parms{};

	Parms.NewColor = std::move(NewColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPaperFlipbookComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "Stop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

float UPaperFlipbookComponent::GetFlipbookFramerate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetFlipbookFramerate");

	Params::PaperFlipbookComponent_GetFlipbookFramerate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UPaperFlipbookComponent::GetFlipbookLength() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetFlipbookLength");

	Params::PaperFlipbookComponent_GetFlipbookLength Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UPaperFlipbookComponent::GetFlipbookLengthInFrames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetFlipbookLengthInFrames");

	Params::PaperFlipbookComponent_GetFlipbookLengthInFrames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UPaperFlipbookComponent::GetPlaybackPosition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetPlaybackPosition");

	Params::PaperFlipbookComponent_GetPlaybackPosition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UPaperFlipbookComponent::GetPlaybackPositionInFrames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetPlaybackPositionInFrames");

	Params::PaperFlipbookComponent_GetPlaybackPositionInFrames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UPaperFlipbookComponent::GetPlayRate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetPlayRate");

	Params::PaperFlipbookComponent_GetPlayRate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FLinearColor UPaperFlipbookComponent::GetSpriteColor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "GetSpriteColor");

	Params::PaperFlipbookComponent_GetSpriteColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPaperFlipbookComponent::IsLooping() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "IsLooping");

	Params::PaperFlipbookComponent_IsLooping Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPaperFlipbookComponent::IsPlaying() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "IsPlaying");

	Params::PaperFlipbookComponent_IsPlaying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPaperFlipbookComponent::IsReversing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperFlipbookComponent", "IsReversing");

	Params::PaperFlipbookComponent_IsReversing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UPaperGroupedSpriteComponent::AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "AddInstance");

	Params::PaperGroupedSpriteComponent_AddInstance Parms{};

	Parms.Transform = std::move(Transform);
	Parms.Sprite = Sprite;
	Parms.bWorldSpace = bWorldSpace;
	Parms.Color = std::move(Color);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPaperGroupedSpriteComponent::ClearInstances()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "ClearInstances");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UPaperGroupedSpriteComponent::RemoveInstance(int32 InstanceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "RemoveInstance");

	Params::PaperGroupedSpriteComponent_RemoveInstance Parms{};

	Parms.InstanceIndex = InstanceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "SortInstancesAlongAxis");

	Params::PaperGroupedSpriteComponent_SortInstancesAlongAxis Parms{};

	Parms.WorldSpaceSortAxis = std::move(WorldSpaceSortAxis);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int32 InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "UpdateInstanceColor");

	Params::PaperGroupedSpriteComponent_UpdateInstanceColor Parms{};

	Parms.InstanceIndex = InstanceIndex;
	Parms.NewInstanceColor = std::move(NewInstanceColor);
	Parms.bMarkRenderStateDirty = bMarkRenderStateDirty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int32 InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "UpdateInstanceTransform");

	Params::PaperGroupedSpriteComponent_UpdateInstanceTransform Parms{};

	Parms.InstanceIndex = InstanceIndex;
	Parms.NewInstanceTransform = std::move(NewInstanceTransform);
	Parms.bWorldSpace = bWorldSpace;
	Parms.bMarkRenderStateDirty = bMarkRenderStateDirty;
	Parms.bTeleport = bTeleport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UPaperGroupedSpriteComponent::GetInstanceCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "GetInstanceCount");

	Params::PaperGroupedSpriteComponent_GetInstanceCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPaperGroupedSpriteComponent::GetInstanceTransform(int32 InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperGroupedSpriteComponent", "GetInstanceTransform");

	Params::PaperGroupedSpriteComponent_GetInstanceTransform Parms{};

	Parms.InstanceIndex = InstanceIndex;
	Parms.bWorldSpace = bWorldSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutInstanceTransform != nullptr)
		*OutInstanceTransform = std::move(Parms.OutInstanceTransform);

	return Parms.ReturnValue;
}

struct FSlateBrush UPaperSpriteBlueprintLibrary::MakeBrushFromSprite(class UPaperSprite* Sprite, int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PaperSpriteBlueprintLibrary", "MakeBrushFromSprite");

	Params::PaperSpriteBlueprintLibrary_MakeBrushFromSprite Parms{};

	Parms.Sprite = Sprite;
	Parms.Width = Width;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPaperSprite* UPaperSpriteComponent::GetSprite()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperSpriteComponent", "GetSprite");

	Params::PaperSpriteComponent_GetSprite Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPaperSpriteComponent::SetSprite(class UPaperSprite* NewSprite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperSpriteComponent", "SetSprite");

	Params::PaperSpriteComponent_SetSprite Parms{};

	Parms.NewSprite = NewSprite;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPaperSpriteComponent::SetSpriteColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperSpriteComponent", "SetSpriteColor");

	Params::PaperSpriteComponent_SetSpriteColor Parms{};

	Parms.NewColor = std::move(NewColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UPaperTileLayer* UPaperTileMapComponent::AddNewLayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "AddNewLayer");

	Params::PaperTileMapComponent_AddNewLayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPaperTileMapComponent::CreateNewTileMap(int32 MapWidth_0, int32 MapHeight_0, int32 TileWidth_0, int32 TileHeight_0, float PixelsPerUnrealUnit, bool bCreateLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "CreateNewTileMap");

	Params::PaperTileMapComponent_CreateNewTileMap Parms{};

	Parms.MapWidth_0 = MapWidth_0;
	Parms.MapHeight_0 = MapHeight_0;
	Parms.TileWidth_0 = TileWidth_0;
	Parms.TileHeight_0 = TileHeight_0;
	Parms.PixelsPerUnrealUnit = PixelsPerUnrealUnit;
	Parms.bCreateLayer = bCreateLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPaperTileMapComponent::GetMapSize(int32* MapWidth_0, int32* MapHeight_0, int32* NumLayers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "GetMapSize");

	Params::PaperTileMapComponent_GetMapSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (MapWidth_0 != nullptr)
		*MapWidth_0 = Parms.MapWidth_0;

	if (MapHeight_0 != nullptr)
		*MapHeight_0 = Parms.MapHeight_0;

	if (NumLayers != nullptr)
		*NumLayers = Parms.NumLayers;
}

void UPaperTileMapComponent::MakeTileMapEditable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "MakeTileMapEditable");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPaperTileMapComponent::RebuildCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "RebuildCollision");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPaperTileMapComponent::ResizeMap(int32 NewWidthInTiles, int32 NewHeightInTiles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "ResizeMap");

	Params::PaperTileMapComponent_ResizeMap Parms{};

	Parms.NewWidthInTiles = NewWidthInTiles;
	Parms.NewHeightInTiles = NewHeightInTiles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "SetDefaultCollisionThickness");

	Params::PaperTileMapComponent_SetDefaultCollisionThickness Parms{};

	Parms.Thickness = Thickness;
	Parms.bRebuildCollision = bRebuildCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPaperTileMapComponent::SetLayerCollision(int32 Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "SetLayerCollision");

	Params::PaperTileMapComponent_SetLayerCollision Parms{};

	Parms.Layer = Layer;
	Parms.bHasCollision = bHasCollision;
	Parms.bOverrideThickness = bOverrideThickness;
	Parms.CustomThickness = CustomThickness;
	Parms.bOverrideOffset = bOverrideOffset;
	Parms.CustomOffset = CustomOffset;
	Parms.bRebuildCollision = bRebuildCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPaperTileMapComponent::SetLayerColor(const struct FLinearColor& NewColor, int32 Layer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "SetLayerColor");

	Params::PaperTileMapComponent_SetLayerColor Parms{};

	Parms.NewColor = std::move(NewColor);
	Parms.Layer = Layer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPaperTileMapComponent::SetTile(int32 X, int32 Y, int32 Layer, const struct FPaperTileInfo& NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "SetTile");

	Params::PaperTileMapComponent_SetTile Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Layer = Layer;
	Parms.NewValue = std::move(NewValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UPaperTileMapComponent::SetTileMap(class UPaperTileMap* NewTileMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "SetTileMap");

	Params::PaperTileMapComponent_SetTileMap Parms{};

	Parms.NewTileMap = NewTileMap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPaperTileMapComponent::SetTileMapColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "SetTileMapColor");

	Params::PaperTileMapComponent_SetTileMapColor Parms{};

	Parms.NewColor = std::move(NewColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FLinearColor UPaperTileMapComponent::GetLayerColor(int32 Layer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "GetLayerColor");

	Params::PaperTileMapComponent_GetLayerColor Parms{};

	Parms.Layer = Layer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FPaperTileInfo UPaperTileMapComponent::GetTile(int32 X, int32 Y, int32 Layer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "GetTile");

	Params::PaperTileMapComponent_GetTile Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Layer = Layer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UPaperTileMapComponent::GetTileCenterPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "GetTileCenterPosition");

	Params::PaperTileMapComponent_GetTileCenterPosition Parms{};

	Parms.TileX = TileX;
	Parms.TileY = TileY;
	Parms.LayerIndex = LayerIndex;
	Parms.bWorldSpace = bWorldSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UPaperTileMapComponent::GetTileCornerPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "GetTileCornerPosition");

	Params::PaperTileMapComponent_GetTileCornerPosition Parms{};

	Parms.TileX = TileX;
	Parms.TileY = TileY;
	Parms.LayerIndex = LayerIndex;
	Parms.bWorldSpace = bWorldSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FLinearColor UPaperTileMapComponent::GetTileMapColor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "GetTileMapColor");

	Params::PaperTileMapComponent_GetTileMapColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPaperTileMapComponent::GetTilePolygon(int32 TileX, int32 TileY, TArray<struct FVector>* Points, int32 LayerIndex, bool bWorldSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "GetTilePolygon");

	Params::PaperTileMapComponent_GetTilePolygon Parms{};

	Parms.TileX = TileX;
	Parms.TileY = TileY;
	Parms.LayerIndex = LayerIndex;
	Parms.bWorldSpace = bWorldSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Points != nullptr)
		*Points = std::move(Parms.Points);
}

bool UPaperTileMapComponent::OwnsTileMap() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTileMapComponent", "OwnsTileMap");

	Params::PaperTileMapComponent_OwnsTileMap Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPaperTerrainComponent::SetTerrainColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperTerrainComponent", "SetTerrainColor");

	Params::PaperTerrainComponent_SetTerrainColor Parms{};

	Parms.NewColor = std::move(NewColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTileMapBlueprintLibrary::BreakTile(const struct FPaperTileInfo& Tile, int32* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TileMapBlueprintLibrary", "BreakTile");

	Params::TileMapBlueprintLibrary_BreakTile Parms{};

	Parms.Tile = std::move(Tile);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TileIndex != nullptr)
		*TileIndex = Parms.TileIndex;

	if (TileSet != nullptr)
		*TileSet = Parms.TileSet;

	if (bFlipH != nullptr)
		*bFlipH = Parms.bFlipH;

	if (bFlipV != nullptr)
		*bFlipV = Parms.bFlipV;

	if (bFlipD != nullptr)
		*bFlipD = Parms.bFlipD;
}

struct FTransform UTileMapBlueprintLibrary::GetTileTransform(const struct FPaperTileInfo& Tile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TileMapBlueprintLibrary", "GetTileTransform");

	Params::TileMapBlueprintLibrary_GetTileTransform Parms{};

	Parms.Tile = std::move(Tile);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UTileMapBlueprintLibrary::GetTileUserData(const struct FPaperTileInfo& Tile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TileMapBlueprintLibrary", "GetTileUserData");

	Params::TileMapBlueprintLibrary_GetTileUserData Parms{};

	Parms.Tile = std::move(Tile);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FPaperTileInfo UTileMapBlueprintLibrary::MakeTile(int32 TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TileMapBlueprintLibrary", "MakeTile");

	Params::TileMapBlueprintLibrary_MakeTile Parms{};

	Parms.TileIndex = TileIndex;
	Parms.TileSet = TileSet;
	Parms.bFlipH = bFlipH;
	Parms.bFlipV = bFlipV;
	Parms.bFlipD = bFlipD;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
