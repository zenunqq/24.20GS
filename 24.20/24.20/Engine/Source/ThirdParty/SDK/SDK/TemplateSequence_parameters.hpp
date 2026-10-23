#pragma once

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct TemplateSequenceActor_SetBinding final
{
public:
	class AActor*                                 Actor;
	bool                                          bOverridesDefault;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(TemplateSequenceActor_SetBinding) == 0x000008, "Wrong alignment on TemplateSequenceActor_SetBinding");
static_assert(sizeof(TemplateSequenceActor_SetBinding) == 0x000010, "Wrong size on TemplateSequenceActor_SetBinding");
static_assert(offsetof(TemplateSequenceActor_SetBinding, Actor) == 0x000000, "Member 'TemplateSequenceActor_SetBinding::Actor' has a wrong offset!");
static_assert(offsetof(TemplateSequenceActor_SetBinding, bOverridesDefault) == 0x000008, "Member 'TemplateSequenceActor_SetBinding::bOverridesDefault' has a wrong offset!");

struct TemplateSequenceActor_SetSequence final
{
public:
	class UTemplateSequence*                      InSequence;
};
static_assert(alignof(TemplateSequenceActor_SetSequence) == 0x000008, "Wrong alignment on TemplateSequenceActor_SetSequence");
static_assert(sizeof(TemplateSequenceActor_SetSequence) == 0x000008, "Wrong size on TemplateSequenceActor_SetSequence");
static_assert(offsetof(TemplateSequenceActor_SetSequence, InSequence) == 0x000000, "Member 'TemplateSequenceActor_SetSequence::InSequence' has a wrong offset!");

struct TemplateSequenceActor_GetSequence final
{
public:
	class UTemplateSequence*                      ReturnValue;
};
static_assert(alignof(TemplateSequenceActor_GetSequence) == 0x000008, "Wrong alignment on TemplateSequenceActor_GetSequence");
static_assert(sizeof(TemplateSequenceActor_GetSequence) == 0x000008, "Wrong size on TemplateSequenceActor_GetSequence");
static_assert(offsetof(TemplateSequenceActor_GetSequence, ReturnValue) == 0x000000, "Member 'TemplateSequenceActor_GetSequence::ReturnValue' has a wrong offset!");

struct TemplateSequenceActor_GetSequencePlayer final
{
public:
	class UTemplateSequencePlayer*                ReturnValue;
};
static_assert(alignof(TemplateSequenceActor_GetSequencePlayer) == 0x000008, "Wrong alignment on TemplateSequenceActor_GetSequencePlayer");
static_assert(sizeof(TemplateSequenceActor_GetSequencePlayer) == 0x000008, "Wrong size on TemplateSequenceActor_GetSequencePlayer");
static_assert(offsetof(TemplateSequenceActor_GetSequencePlayer, ReturnValue) == 0x000000, "Member 'TemplateSequenceActor_GetSequencePlayer::ReturnValue' has a wrong offset!");

struct TemplateSequenceActor_LoadSequence final
{
public:
	class UTemplateSequence*                      ReturnValue;
};
static_assert(alignof(TemplateSequenceActor_LoadSequence) == 0x000008, "Wrong alignment on TemplateSequenceActor_LoadSequence");
static_assert(sizeof(TemplateSequenceActor_LoadSequence) == 0x000008, "Wrong size on TemplateSequenceActor_LoadSequence");
static_assert(offsetof(TemplateSequenceActor_LoadSequence, ReturnValue) == 0x000000, "Member 'TemplateSequenceActor_LoadSequence::ReturnValue' has a wrong offset!");

struct TemplateSequencePlayer_CreateTemplateSequencePlayer final
{
public:
	class UObject*                                WorldContextObject;
	class UTemplateSequence*                      TemplateSequence;
	struct FMovieSceneSequencePlaybackSettings    Settings;
	class ATemplateSequenceActor*                 OutActor;
	class UTemplateSequencePlayer*                ReturnValue;
};
static_assert(alignof(TemplateSequencePlayer_CreateTemplateSequencePlayer) == 0x000008, "Wrong alignment on TemplateSequencePlayer_CreateTemplateSequencePlayer");
static_assert(sizeof(TemplateSequencePlayer_CreateTemplateSequencePlayer) == 0x000040, "Wrong size on TemplateSequencePlayer_CreateTemplateSequencePlayer");
static_assert(offsetof(TemplateSequencePlayer_CreateTemplateSequencePlayer, WorldContextObject) == 0x000000, "Member 'TemplateSequencePlayer_CreateTemplateSequencePlayer::WorldContextObject' has a wrong offset!");
static_assert(offsetof(TemplateSequencePlayer_CreateTemplateSequencePlayer, TemplateSequence) == 0x000008, "Member 'TemplateSequencePlayer_CreateTemplateSequencePlayer::TemplateSequence' has a wrong offset!");
static_assert(offsetof(TemplateSequencePlayer_CreateTemplateSequencePlayer, Settings) == 0x000010, "Member 'TemplateSequencePlayer_CreateTemplateSequencePlayer::Settings' has a wrong offset!");
static_assert(offsetof(TemplateSequencePlayer_CreateTemplateSequencePlayer, OutActor) == 0x000030, "Member 'TemplateSequencePlayer_CreateTemplateSequencePlayer::OutActor' has a wrong offset!");
static_assert(offsetof(TemplateSequencePlayer_CreateTemplateSequencePlayer, ReturnValue) == 0x000038, "Member 'TemplateSequencePlayer_CreateTemplateSequencePlayer::ReturnValue' has a wrong offset!");

struct SequenceCameraShakeTestUtil_GetCameraCachePOV final
{
public:
	class APlayerController*                      PlayerController;
	uint8                                         Pad_8[0x8];
	struct FMinimalViewInfo                       ReturnValue;
};
static_assert(alignof(SequenceCameraShakeTestUtil_GetCameraCachePOV) == 0x000010, "Wrong alignment on SequenceCameraShakeTestUtil_GetCameraCachePOV");
static_assert(sizeof(SequenceCameraShakeTestUtil_GetCameraCachePOV) == 0x0007D0, "Wrong size on SequenceCameraShakeTestUtil_GetCameraCachePOV");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetCameraCachePOV, PlayerController) == 0x000000, "Member 'SequenceCameraShakeTestUtil_GetCameraCachePOV::PlayerController' has a wrong offset!");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetCameraCachePOV, ReturnValue) == 0x000010, "Member 'SequenceCameraShakeTestUtil_GetCameraCachePOV::ReturnValue' has a wrong offset!");

struct SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV final
{
public:
	class APlayerController*                      PlayerController;
	uint8                                         Pad_8[0x8];
	struct FMinimalViewInfo                       ReturnValue;
};
static_assert(alignof(SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV) == 0x000010, "Wrong alignment on SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV");
static_assert(sizeof(SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV) == 0x0007D0, "Wrong size on SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV, PlayerController) == 0x000000, "Member 'SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV::PlayerController' has a wrong offset!");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV, ReturnValue) == 0x000010, "Member 'SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV::ReturnValue' has a wrong offset!");

struct SequenceCameraShakeTestUtil_GetPostProcessBlendCache final
{
public:
	class APlayerController*                      PlayerController;
	int32                                         PPIndex;
	uint8                                         Pad_C[0x4];
	struct FPostProcessSettings                   OutPPSettings;
	float                                         OutPPBlendWeight;
	bool                                          ReturnValue;
	uint8                                         Pad_6F5[0xB];
};
static_assert(alignof(SequenceCameraShakeTestUtil_GetPostProcessBlendCache) == 0x000010, "Wrong alignment on SequenceCameraShakeTestUtil_GetPostProcessBlendCache");
static_assert(sizeof(SequenceCameraShakeTestUtil_GetPostProcessBlendCache) == 0x000700, "Wrong size on SequenceCameraShakeTestUtil_GetPostProcessBlendCache");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetPostProcessBlendCache, PlayerController) == 0x000000, "Member 'SequenceCameraShakeTestUtil_GetPostProcessBlendCache::PlayerController' has a wrong offset!");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetPostProcessBlendCache, PPIndex) == 0x000008, "Member 'SequenceCameraShakeTestUtil_GetPostProcessBlendCache::PPIndex' has a wrong offset!");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetPostProcessBlendCache, OutPPSettings) == 0x000010, "Member 'SequenceCameraShakeTestUtil_GetPostProcessBlendCache::OutPPSettings' has a wrong offset!");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetPostProcessBlendCache, OutPPBlendWeight) == 0x0006F0, "Member 'SequenceCameraShakeTestUtil_GetPostProcessBlendCache::OutPPBlendWeight' has a wrong offset!");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetPostProcessBlendCache, ReturnValue) == 0x0006F4, "Member 'SequenceCameraShakeTestUtil_GetPostProcessBlendCache::ReturnValue' has a wrong offset!");

}
