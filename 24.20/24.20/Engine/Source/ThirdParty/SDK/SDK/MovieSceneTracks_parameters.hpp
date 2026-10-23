#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"
#include "Engine_structs.hpp"
#include "MovieSceneTracks_structs.hpp"

namespace SDK::Params
{

struct MovieSceneTransformOrigin_BP_GetTransformOrigin final
{
public:
	struct FTransform                             ReturnValue;
};
static_assert(alignof(MovieSceneTransformOrigin_BP_GetTransformOrigin) == 0x000010, "Wrong alignment on MovieSceneTransformOrigin_BP_GetTransformOrigin");
static_assert(sizeof(MovieSceneTransformOrigin_BP_GetTransformOrigin) == 0x000060, "Wrong size on MovieSceneTransformOrigin_BP_GetTransformOrigin");
static_assert(offsetof(MovieSceneTransformOrigin_BP_GetTransformOrigin, ReturnValue) == 0x000000, "Member 'MovieSceneTransformOrigin_BP_GetTransformOrigin::ReturnValue' has a wrong offset!");

struct MovieScene3DConstraintSection_SetConstraintBindingID final
{
public:
	struct FMovieSceneObjectBindingID             InConstraintBindingID;
};
static_assert(alignof(MovieScene3DConstraintSection_SetConstraintBindingID) == 0x000004, "Wrong alignment on MovieScene3DConstraintSection_SetConstraintBindingID");
static_assert(sizeof(MovieScene3DConstraintSection_SetConstraintBindingID) == 0x000018, "Wrong size on MovieScene3DConstraintSection_SetConstraintBindingID");
static_assert(offsetof(MovieScene3DConstraintSection_SetConstraintBindingID, InConstraintBindingID) == 0x000000, "Member 'MovieScene3DConstraintSection_SetConstraintBindingID::InConstraintBindingID' has a wrong offset!");

struct MovieScene3DConstraintSection_GetConstraintBindingID final
{
public:
	struct FMovieSceneObjectBindingID             ReturnValue;
};
static_assert(alignof(MovieScene3DConstraintSection_GetConstraintBindingID) == 0x000004, "Wrong alignment on MovieScene3DConstraintSection_GetConstraintBindingID");
static_assert(sizeof(MovieScene3DConstraintSection_GetConstraintBindingID) == 0x000018, "Wrong size on MovieScene3DConstraintSection_GetConstraintBindingID");
static_assert(offsetof(MovieScene3DConstraintSection_GetConstraintBindingID, ReturnValue) == 0x000000, "Member 'MovieScene3DConstraintSection_GetConstraintBindingID::ReturnValue' has a wrong offset!");

struct MovieSceneAudioSection_SetSound final
{
public:
	class USoundBase*                             InSound;
};
static_assert(alignof(MovieSceneAudioSection_SetSound) == 0x000008, "Wrong alignment on MovieSceneAudioSection_SetSound");
static_assert(sizeof(MovieSceneAudioSection_SetSound) == 0x000008, "Wrong size on MovieSceneAudioSection_SetSound");
static_assert(offsetof(MovieSceneAudioSection_SetSound, InSound) == 0x000000, "Member 'MovieSceneAudioSection_SetSound::InSound' has a wrong offset!");

struct MovieSceneAudioSection_SetStartOffset final
{
public:
	struct FFrameNumber                           InStartOffset;
};
static_assert(alignof(MovieSceneAudioSection_SetStartOffset) == 0x000004, "Wrong alignment on MovieSceneAudioSection_SetStartOffset");
static_assert(sizeof(MovieSceneAudioSection_SetStartOffset) == 0x000004, "Wrong size on MovieSceneAudioSection_SetStartOffset");
static_assert(offsetof(MovieSceneAudioSection_SetStartOffset, InStartOffset) == 0x000000, "Member 'MovieSceneAudioSection_SetStartOffset::InStartOffset' has a wrong offset!");

struct MovieSceneAudioSection_GetSound final
{
public:
	class USoundBase*                             ReturnValue;
};
static_assert(alignof(MovieSceneAudioSection_GetSound) == 0x000008, "Wrong alignment on MovieSceneAudioSection_GetSound");
static_assert(sizeof(MovieSceneAudioSection_GetSound) == 0x000008, "Wrong size on MovieSceneAudioSection_GetSound");
static_assert(offsetof(MovieSceneAudioSection_GetSound, ReturnValue) == 0x000000, "Member 'MovieSceneAudioSection_GetSound::ReturnValue' has a wrong offset!");

struct MovieSceneAudioSection_GetStartOffset final
{
public:
	struct FFrameNumber                           ReturnValue;
};
static_assert(alignof(MovieSceneAudioSection_GetStartOffset) == 0x000004, "Wrong alignment on MovieSceneAudioSection_GetStartOffset");
static_assert(sizeof(MovieSceneAudioSection_GetStartOffset) == 0x000004, "Wrong size on MovieSceneAudioSection_GetStartOffset");
static_assert(offsetof(MovieSceneAudioSection_GetStartOffset, ReturnValue) == 0x000000, "Member 'MovieSceneAudioSection_GetStartOffset::ReturnValue' has a wrong offset!");

struct MovieSceneCameraCutSection_SetCameraBindingID final
{
public:
	struct FMovieSceneObjectBindingID             InCameraBindingID;
};
static_assert(alignof(MovieSceneCameraCutSection_SetCameraBindingID) == 0x000004, "Wrong alignment on MovieSceneCameraCutSection_SetCameraBindingID");
static_assert(sizeof(MovieSceneCameraCutSection_SetCameraBindingID) == 0x000018, "Wrong size on MovieSceneCameraCutSection_SetCameraBindingID");
static_assert(offsetof(MovieSceneCameraCutSection_SetCameraBindingID, InCameraBindingID) == 0x000000, "Member 'MovieSceneCameraCutSection_SetCameraBindingID::InCameraBindingID' has a wrong offset!");

struct MovieSceneCameraCutSection_GetCameraBindingID final
{
public:
	struct FMovieSceneObjectBindingID             ReturnValue;
};
static_assert(alignof(MovieSceneCameraCutSection_GetCameraBindingID) == 0x000004, "Wrong alignment on MovieSceneCameraCutSection_GetCameraBindingID");
static_assert(sizeof(MovieSceneCameraCutSection_GetCameraBindingID) == 0x000018, "Wrong size on MovieSceneCameraCutSection_GetCameraBindingID");
static_assert(offsetof(MovieSceneCameraCutSection_GetCameraBindingID, ReturnValue) == 0x000000, "Member 'MovieSceneCameraCutSection_GetCameraBindingID::ReturnValue' has a wrong offset!");

struct MovieSceneCinematicShotSection_SetShotDisplayName final
{
public:
	class FString                                 InShotDisplayName;
};
static_assert(alignof(MovieSceneCinematicShotSection_SetShotDisplayName) == 0x000008, "Wrong alignment on MovieSceneCinematicShotSection_SetShotDisplayName");
static_assert(sizeof(MovieSceneCinematicShotSection_SetShotDisplayName) == 0x000010, "Wrong size on MovieSceneCinematicShotSection_SetShotDisplayName");
static_assert(offsetof(MovieSceneCinematicShotSection_SetShotDisplayName, InShotDisplayName) == 0x000000, "Member 'MovieSceneCinematicShotSection_SetShotDisplayName::InShotDisplayName' has a wrong offset!");

struct MovieSceneCinematicShotSection_GetShotDisplayName final
{
public:
	class FString                                 ReturnValue;
};
static_assert(alignof(MovieSceneCinematicShotSection_GetShotDisplayName) == 0x000008, "Wrong alignment on MovieSceneCinematicShotSection_GetShotDisplayName");
static_assert(sizeof(MovieSceneCinematicShotSection_GetShotDisplayName) == 0x000010, "Wrong size on MovieSceneCinematicShotSection_GetShotDisplayName");
static_assert(offsetof(MovieSceneCinematicShotSection_GetShotDisplayName, ReturnValue) == 0x000000, "Member 'MovieSceneCinematicShotSection_GetShotDisplayName::ReturnValue' has a wrong offset!");

struct MovieSceneCVarSection_SetFromString final
{
public:
	class FString                                 InString;
};
static_assert(alignof(MovieSceneCVarSection_SetFromString) == 0x000008, "Wrong alignment on MovieSceneCVarSection_SetFromString");
static_assert(sizeof(MovieSceneCVarSection_SetFromString) == 0x000010, "Wrong size on MovieSceneCVarSection_SetFromString");
static_assert(offsetof(MovieSceneCVarSection_SetFromString, InString) == 0x000000, "Member 'MovieSceneCVarSection_SetFromString::InString' has a wrong offset!");

struct MovieSceneCVarSection_GetString final
{
public:
	class FString                                 ReturnValue;
};
static_assert(alignof(MovieSceneCVarSection_GetString) == 0x000008, "Wrong alignment on MovieSceneCVarSection_GetString");
static_assert(sizeof(MovieSceneCVarSection_GetString) == 0x000010, "Wrong size on MovieSceneCVarSection_GetString");
static_assert(offsetof(MovieSceneCVarSection_GetString, ReturnValue) == 0x000000, "Member 'MovieSceneCVarSection_GetString::ReturnValue' has a wrong offset!");

struct MovieSceneDataLayerSection_SetDataLayerAssets final
{
public:
	TArray<class UDataLayerAsset*>                InDataLayerAssets;
};
static_assert(alignof(MovieSceneDataLayerSection_SetDataLayerAssets) == 0x000008, "Wrong alignment on MovieSceneDataLayerSection_SetDataLayerAssets");
static_assert(sizeof(MovieSceneDataLayerSection_SetDataLayerAssets) == 0x000010, "Wrong size on MovieSceneDataLayerSection_SetDataLayerAssets");
static_assert(offsetof(MovieSceneDataLayerSection_SetDataLayerAssets, InDataLayerAssets) == 0x000000, "Member 'MovieSceneDataLayerSection_SetDataLayerAssets::InDataLayerAssets' has a wrong offset!");

struct MovieSceneDataLayerSection_SetDataLayers final
{
public:
	TArray<struct FActorDataLayer>                InDataLayers;
};
static_assert(alignof(MovieSceneDataLayerSection_SetDataLayers) == 0x000008, "Wrong alignment on MovieSceneDataLayerSection_SetDataLayers");
static_assert(sizeof(MovieSceneDataLayerSection_SetDataLayers) == 0x000010, "Wrong size on MovieSceneDataLayerSection_SetDataLayers");
static_assert(offsetof(MovieSceneDataLayerSection_SetDataLayers, InDataLayers) == 0x000000, "Member 'MovieSceneDataLayerSection_SetDataLayers::InDataLayers' has a wrong offset!");

struct MovieSceneDataLayerSection_SetDesiredState final
{
public:
	EDataLayerRuntimeState                        InDesiredState;
};
static_assert(alignof(MovieSceneDataLayerSection_SetDesiredState) == 0x000001, "Wrong alignment on MovieSceneDataLayerSection_SetDesiredState");
static_assert(sizeof(MovieSceneDataLayerSection_SetDesiredState) == 0x000001, "Wrong size on MovieSceneDataLayerSection_SetDesiredState");
static_assert(offsetof(MovieSceneDataLayerSection_SetDesiredState, InDesiredState) == 0x000000, "Member 'MovieSceneDataLayerSection_SetDesiredState::InDesiredState' has a wrong offset!");

struct MovieSceneDataLayerSection_SetFlushOnUnload final
{
public:
	bool                                          bFlushOnUnload_0;
};
static_assert(alignof(MovieSceneDataLayerSection_SetFlushOnUnload) == 0x000001, "Wrong alignment on MovieSceneDataLayerSection_SetFlushOnUnload");
static_assert(sizeof(MovieSceneDataLayerSection_SetFlushOnUnload) == 0x000001, "Wrong size on MovieSceneDataLayerSection_SetFlushOnUnload");
static_assert(offsetof(MovieSceneDataLayerSection_SetFlushOnUnload, bFlushOnUnload_0) == 0x000000, "Member 'MovieSceneDataLayerSection_SetFlushOnUnload::bFlushOnUnload_0' has a wrong offset!");

struct MovieSceneDataLayerSection_SetPrerollState final
{
public:
	EDataLayerRuntimeState                        InPrerollState;
};
static_assert(alignof(MovieSceneDataLayerSection_SetPrerollState) == 0x000001, "Wrong alignment on MovieSceneDataLayerSection_SetPrerollState");
static_assert(sizeof(MovieSceneDataLayerSection_SetPrerollState) == 0x000001, "Wrong size on MovieSceneDataLayerSection_SetPrerollState");
static_assert(offsetof(MovieSceneDataLayerSection_SetPrerollState, InPrerollState) == 0x000000, "Member 'MovieSceneDataLayerSection_SetPrerollState::InPrerollState' has a wrong offset!");

struct MovieSceneDataLayerSection_GetDataLayerAssets final
{
public:
	TArray<class UDataLayerAsset*>                ReturnValue;
};
static_assert(alignof(MovieSceneDataLayerSection_GetDataLayerAssets) == 0x000008, "Wrong alignment on MovieSceneDataLayerSection_GetDataLayerAssets");
static_assert(sizeof(MovieSceneDataLayerSection_GetDataLayerAssets) == 0x000010, "Wrong size on MovieSceneDataLayerSection_GetDataLayerAssets");
static_assert(offsetof(MovieSceneDataLayerSection_GetDataLayerAssets, ReturnValue) == 0x000000, "Member 'MovieSceneDataLayerSection_GetDataLayerAssets::ReturnValue' has a wrong offset!");

struct MovieSceneDataLayerSection_GetDataLayers final
{
public:
	TArray<struct FActorDataLayer>                ReturnValue;
};
static_assert(alignof(MovieSceneDataLayerSection_GetDataLayers) == 0x000008, "Wrong alignment on MovieSceneDataLayerSection_GetDataLayers");
static_assert(sizeof(MovieSceneDataLayerSection_GetDataLayers) == 0x000010, "Wrong size on MovieSceneDataLayerSection_GetDataLayers");
static_assert(offsetof(MovieSceneDataLayerSection_GetDataLayers, ReturnValue) == 0x000000, "Member 'MovieSceneDataLayerSection_GetDataLayers::ReturnValue' has a wrong offset!");

struct MovieSceneDataLayerSection_GetDesiredState final
{
public:
	EDataLayerRuntimeState                        ReturnValue;
};
static_assert(alignof(MovieSceneDataLayerSection_GetDesiredState) == 0x000001, "Wrong alignment on MovieSceneDataLayerSection_GetDesiredState");
static_assert(sizeof(MovieSceneDataLayerSection_GetDesiredState) == 0x000001, "Wrong size on MovieSceneDataLayerSection_GetDesiredState");
static_assert(offsetof(MovieSceneDataLayerSection_GetDesiredState, ReturnValue) == 0x000000, "Member 'MovieSceneDataLayerSection_GetDesiredState::ReturnValue' has a wrong offset!");

struct MovieSceneDataLayerSection_GetFlushOnUnload final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(MovieSceneDataLayerSection_GetFlushOnUnload) == 0x000001, "Wrong alignment on MovieSceneDataLayerSection_GetFlushOnUnload");
static_assert(sizeof(MovieSceneDataLayerSection_GetFlushOnUnload) == 0x000001, "Wrong size on MovieSceneDataLayerSection_GetFlushOnUnload");
static_assert(offsetof(MovieSceneDataLayerSection_GetFlushOnUnload, ReturnValue) == 0x000000, "Member 'MovieSceneDataLayerSection_GetFlushOnUnload::ReturnValue' has a wrong offset!");

struct MovieSceneDataLayerSection_GetPrerollState final
{
public:
	EDataLayerRuntimeState                        ReturnValue;
};
static_assert(alignof(MovieSceneDataLayerSection_GetPrerollState) == 0x000001, "Wrong alignment on MovieSceneDataLayerSection_GetPrerollState");
static_assert(sizeof(MovieSceneDataLayerSection_GetPrerollState) == 0x000001, "Wrong size on MovieSceneDataLayerSection_GetPrerollState");
static_assert(offsetof(MovieSceneDataLayerSection_GetPrerollState, ReturnValue) == 0x000000, "Member 'MovieSceneDataLayerSection_GetPrerollState::ReturnValue' has a wrong offset!");

struct MovieSceneLevelVisibilitySection_SetLevelNames final
{
public:
	TArray<class FName>                           InLevelNames;
};
static_assert(alignof(MovieSceneLevelVisibilitySection_SetLevelNames) == 0x000008, "Wrong alignment on MovieSceneLevelVisibilitySection_SetLevelNames");
static_assert(sizeof(MovieSceneLevelVisibilitySection_SetLevelNames) == 0x000010, "Wrong size on MovieSceneLevelVisibilitySection_SetLevelNames");
static_assert(offsetof(MovieSceneLevelVisibilitySection_SetLevelNames, InLevelNames) == 0x000000, "Member 'MovieSceneLevelVisibilitySection_SetLevelNames::InLevelNames' has a wrong offset!");

struct MovieSceneLevelVisibilitySection_SetVisibility final
{
public:
	ELevelVisibility                              InVisibility;
};
static_assert(alignof(MovieSceneLevelVisibilitySection_SetVisibility) == 0x000001, "Wrong alignment on MovieSceneLevelVisibilitySection_SetVisibility");
static_assert(sizeof(MovieSceneLevelVisibilitySection_SetVisibility) == 0x000001, "Wrong size on MovieSceneLevelVisibilitySection_SetVisibility");
static_assert(offsetof(MovieSceneLevelVisibilitySection_SetVisibility, InVisibility) == 0x000000, "Member 'MovieSceneLevelVisibilitySection_SetVisibility::InVisibility' has a wrong offset!");

struct MovieSceneLevelVisibilitySection_GetLevelNames final
{
public:
	TArray<class FName>                           ReturnValue;
};
static_assert(alignof(MovieSceneLevelVisibilitySection_GetLevelNames) == 0x000008, "Wrong alignment on MovieSceneLevelVisibilitySection_GetLevelNames");
static_assert(sizeof(MovieSceneLevelVisibilitySection_GetLevelNames) == 0x000010, "Wrong size on MovieSceneLevelVisibilitySection_GetLevelNames");
static_assert(offsetof(MovieSceneLevelVisibilitySection_GetLevelNames, ReturnValue) == 0x000000, "Member 'MovieSceneLevelVisibilitySection_GetLevelNames::ReturnValue' has a wrong offset!");

struct MovieSceneLevelVisibilitySection_GetVisibility final
{
public:
	ELevelVisibility                              ReturnValue;
};
static_assert(alignof(MovieSceneLevelVisibilitySection_GetVisibility) == 0x000001, "Wrong alignment on MovieSceneLevelVisibilitySection_GetVisibility");
static_assert(sizeof(MovieSceneLevelVisibilitySection_GetVisibility) == 0x000001, "Wrong size on MovieSceneLevelVisibilitySection_GetVisibility");
static_assert(offsetof(MovieSceneLevelVisibilitySection_GetVisibility, ReturnValue) == 0x000000, "Member 'MovieSceneLevelVisibilitySection_GetVisibility::ReturnValue' has a wrong offset!");

struct MovieSceneParameterSection_AddBoolParameterKey final
{
public:
	class FName                                   InParameterName;
	struct FFrameNumber                           InTime;
	bool                                          InValue;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(MovieSceneParameterSection_AddBoolParameterKey) == 0x000004, "Wrong alignment on MovieSceneParameterSection_AddBoolParameterKey");
static_assert(sizeof(MovieSceneParameterSection_AddBoolParameterKey) == 0x00000C, "Wrong size on MovieSceneParameterSection_AddBoolParameterKey");
static_assert(offsetof(MovieSceneParameterSection_AddBoolParameterKey, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_AddBoolParameterKey::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddBoolParameterKey, InTime) == 0x000004, "Member 'MovieSceneParameterSection_AddBoolParameterKey::InTime' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddBoolParameterKey, InValue) == 0x000008, "Member 'MovieSceneParameterSection_AddBoolParameterKey::InValue' has a wrong offset!");

struct MovieSceneParameterSection_AddColorParameterKey final
{
public:
	class FName                                   InParameterName;
	struct FFrameNumber                           InTime;
	struct FLinearColor                           InValue;
};
static_assert(alignof(MovieSceneParameterSection_AddColorParameterKey) == 0x000004, "Wrong alignment on MovieSceneParameterSection_AddColorParameterKey");
static_assert(sizeof(MovieSceneParameterSection_AddColorParameterKey) == 0x000018, "Wrong size on MovieSceneParameterSection_AddColorParameterKey");
static_assert(offsetof(MovieSceneParameterSection_AddColorParameterKey, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_AddColorParameterKey::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddColorParameterKey, InTime) == 0x000004, "Member 'MovieSceneParameterSection_AddColorParameterKey::InTime' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddColorParameterKey, InValue) == 0x000008, "Member 'MovieSceneParameterSection_AddColorParameterKey::InValue' has a wrong offset!");

struct MovieSceneParameterSection_AddScalarParameterKey final
{
public:
	class FName                                   InParameterName;
	struct FFrameNumber                           InTime;
	float                                         InValue;
};
static_assert(alignof(MovieSceneParameterSection_AddScalarParameterKey) == 0x000004, "Wrong alignment on MovieSceneParameterSection_AddScalarParameterKey");
static_assert(sizeof(MovieSceneParameterSection_AddScalarParameterKey) == 0x00000C, "Wrong size on MovieSceneParameterSection_AddScalarParameterKey");
static_assert(offsetof(MovieSceneParameterSection_AddScalarParameterKey, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_AddScalarParameterKey::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddScalarParameterKey, InTime) == 0x000004, "Member 'MovieSceneParameterSection_AddScalarParameterKey::InTime' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddScalarParameterKey, InValue) == 0x000008, "Member 'MovieSceneParameterSection_AddScalarParameterKey::InValue' has a wrong offset!");

struct MovieSceneParameterSection_AddTransformParameterKey final
{
public:
	class FName                                   InParameterName;
	struct FFrameNumber                           InTime;
	uint8                                         Pad_8[0x8];
	struct FTransform                             InValue;
};
static_assert(alignof(MovieSceneParameterSection_AddTransformParameterKey) == 0x000010, "Wrong alignment on MovieSceneParameterSection_AddTransformParameterKey");
static_assert(sizeof(MovieSceneParameterSection_AddTransformParameterKey) == 0x000070, "Wrong size on MovieSceneParameterSection_AddTransformParameterKey");
static_assert(offsetof(MovieSceneParameterSection_AddTransformParameterKey, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_AddTransformParameterKey::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddTransformParameterKey, InTime) == 0x000004, "Member 'MovieSceneParameterSection_AddTransformParameterKey::InTime' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddTransformParameterKey, InValue) == 0x000010, "Member 'MovieSceneParameterSection_AddTransformParameterKey::InValue' has a wrong offset!");

struct MovieSceneParameterSection_AddVector2DParameterKey final
{
public:
	class FName                                   InParameterName;
	struct FFrameNumber                           InTime;
	struct FVector2D                              InValue;
};
static_assert(alignof(MovieSceneParameterSection_AddVector2DParameterKey) == 0x000008, "Wrong alignment on MovieSceneParameterSection_AddVector2DParameterKey");
static_assert(sizeof(MovieSceneParameterSection_AddVector2DParameterKey) == 0x000018, "Wrong size on MovieSceneParameterSection_AddVector2DParameterKey");
static_assert(offsetof(MovieSceneParameterSection_AddVector2DParameterKey, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_AddVector2DParameterKey::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddVector2DParameterKey, InTime) == 0x000004, "Member 'MovieSceneParameterSection_AddVector2DParameterKey::InTime' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddVector2DParameterKey, InValue) == 0x000008, "Member 'MovieSceneParameterSection_AddVector2DParameterKey::InValue' has a wrong offset!");

struct MovieSceneParameterSection_AddVectorParameterKey final
{
public:
	class FName                                   InParameterName;
	struct FFrameNumber                           InTime;
	struct FVector                                InValue;
};
static_assert(alignof(MovieSceneParameterSection_AddVectorParameterKey) == 0x000008, "Wrong alignment on MovieSceneParameterSection_AddVectorParameterKey");
static_assert(sizeof(MovieSceneParameterSection_AddVectorParameterKey) == 0x000020, "Wrong size on MovieSceneParameterSection_AddVectorParameterKey");
static_assert(offsetof(MovieSceneParameterSection_AddVectorParameterKey, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_AddVectorParameterKey::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddVectorParameterKey, InTime) == 0x000004, "Member 'MovieSceneParameterSection_AddVectorParameterKey::InTime' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddVectorParameterKey, InValue) == 0x000008, "Member 'MovieSceneParameterSection_AddVectorParameterKey::InValue' has a wrong offset!");

struct MovieSceneParameterSection_RemoveBoolParameter final
{
public:
	class FName                                   InParameterName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(MovieSceneParameterSection_RemoveBoolParameter) == 0x000004, "Wrong alignment on MovieSceneParameterSection_RemoveBoolParameter");
static_assert(sizeof(MovieSceneParameterSection_RemoveBoolParameter) == 0x000008, "Wrong size on MovieSceneParameterSection_RemoveBoolParameter");
static_assert(offsetof(MovieSceneParameterSection_RemoveBoolParameter, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_RemoveBoolParameter::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_RemoveBoolParameter, ReturnValue) == 0x000004, "Member 'MovieSceneParameterSection_RemoveBoolParameter::ReturnValue' has a wrong offset!");

struct MovieSceneParameterSection_RemoveColorParameter final
{
public:
	class FName                                   InParameterName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(MovieSceneParameterSection_RemoveColorParameter) == 0x000004, "Wrong alignment on MovieSceneParameterSection_RemoveColorParameter");
static_assert(sizeof(MovieSceneParameterSection_RemoveColorParameter) == 0x000008, "Wrong size on MovieSceneParameterSection_RemoveColorParameter");
static_assert(offsetof(MovieSceneParameterSection_RemoveColorParameter, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_RemoveColorParameter::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_RemoveColorParameter, ReturnValue) == 0x000004, "Member 'MovieSceneParameterSection_RemoveColorParameter::ReturnValue' has a wrong offset!");

struct MovieSceneParameterSection_RemoveScalarParameter final
{
public:
	class FName                                   InParameterName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(MovieSceneParameterSection_RemoveScalarParameter) == 0x000004, "Wrong alignment on MovieSceneParameterSection_RemoveScalarParameter");
static_assert(sizeof(MovieSceneParameterSection_RemoveScalarParameter) == 0x000008, "Wrong size on MovieSceneParameterSection_RemoveScalarParameter");
static_assert(offsetof(MovieSceneParameterSection_RemoveScalarParameter, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_RemoveScalarParameter::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_RemoveScalarParameter, ReturnValue) == 0x000004, "Member 'MovieSceneParameterSection_RemoveScalarParameter::ReturnValue' has a wrong offset!");

struct MovieSceneParameterSection_RemoveTransformParameter final
{
public:
	class FName                                   InParameterName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(MovieSceneParameterSection_RemoveTransformParameter) == 0x000004, "Wrong alignment on MovieSceneParameterSection_RemoveTransformParameter");
static_assert(sizeof(MovieSceneParameterSection_RemoveTransformParameter) == 0x000008, "Wrong size on MovieSceneParameterSection_RemoveTransformParameter");
static_assert(offsetof(MovieSceneParameterSection_RemoveTransformParameter, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_RemoveTransformParameter::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_RemoveTransformParameter, ReturnValue) == 0x000004, "Member 'MovieSceneParameterSection_RemoveTransformParameter::ReturnValue' has a wrong offset!");

struct MovieSceneParameterSection_RemoveVector2DParameter final
{
public:
	class FName                                   InParameterName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(MovieSceneParameterSection_RemoveVector2DParameter) == 0x000004, "Wrong alignment on MovieSceneParameterSection_RemoveVector2DParameter");
static_assert(sizeof(MovieSceneParameterSection_RemoveVector2DParameter) == 0x000008, "Wrong size on MovieSceneParameterSection_RemoveVector2DParameter");
static_assert(offsetof(MovieSceneParameterSection_RemoveVector2DParameter, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_RemoveVector2DParameter::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_RemoveVector2DParameter, ReturnValue) == 0x000004, "Member 'MovieSceneParameterSection_RemoveVector2DParameter::ReturnValue' has a wrong offset!");

struct MovieSceneParameterSection_RemoveVectorParameter final
{
public:
	class FName                                   InParameterName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(MovieSceneParameterSection_RemoveVectorParameter) == 0x000004, "Wrong alignment on MovieSceneParameterSection_RemoveVectorParameter");
static_assert(sizeof(MovieSceneParameterSection_RemoveVectorParameter) == 0x000008, "Wrong size on MovieSceneParameterSection_RemoveVectorParameter");
static_assert(offsetof(MovieSceneParameterSection_RemoveVectorParameter, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_RemoveVectorParameter::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_RemoveVectorParameter, ReturnValue) == 0x000004, "Member 'MovieSceneParameterSection_RemoveVectorParameter::ReturnValue' has a wrong offset!");

struct MovieSceneParameterSection_GetParameterNames final
{
public:
	TSet<class FName>                             ParameterNames;
};
static_assert(alignof(MovieSceneParameterSection_GetParameterNames) == 0x000008, "Wrong alignment on MovieSceneParameterSection_GetParameterNames");
static_assert(sizeof(MovieSceneParameterSection_GetParameterNames) == 0x000050, "Wrong size on MovieSceneParameterSection_GetParameterNames");
static_assert(offsetof(MovieSceneParameterSection_GetParameterNames, ParameterNames) == 0x000000, "Member 'MovieSceneParameterSection_GetParameterNames::ParameterNames' has a wrong offset!");

struct MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame final
{
public:
	class UMovieSceneSequencePlayer*              Player;
	class USceneComponent*                        TargetComponent;
	struct FFrameTime                             FrameTime;
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;
};
static_assert(alignof(MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame) == 0x000008, "Wrong alignment on MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame");
static_assert(sizeof(MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame) == 0x000020, "Wrong size on MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame, Player) == 0x000000, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame::Player' has a wrong offset!");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame, TargetComponent) == 0x000008, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame::TargetComponent' has a wrong offset!");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame, FrameTime) == 0x000010, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame::FrameTime' has a wrong offset!");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame, ReturnValue) == 0x000018, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame::ReturnValue' has a wrong offset!");

struct MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime final
{
public:
	class UMovieSceneSequencePlayer*              Player;
	class USceneComponent*                        TargetComponent;
	float                                         TimeInSeconds;
	uint8                                         Pad_14[0x4];
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;
};
static_assert(alignof(MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime) == 0x000008, "Wrong alignment on MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime");
static_assert(sizeof(MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime) == 0x000020, "Wrong size on MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime, Player) == 0x000000, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime::Player' has a wrong offset!");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime, TargetComponent) == 0x000008, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime::TargetComponent' has a wrong offset!");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime, TimeInSeconds) == 0x000010, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime::TimeInSeconds' has a wrong offset!");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime, ReturnValue) == 0x000018, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime::ReturnValue' has a wrong offset!");

struct MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame final
{
public:
	class UMovieSceneSequencePlayer*              Player;
	class USceneComponent*                        TargetComponent;
	struct FFrameTime                             FrameTime;
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;
};
static_assert(alignof(MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame) == 0x000008, "Wrong alignment on MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame");
static_assert(sizeof(MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame) == 0x000020, "Wrong size on MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame, Player) == 0x000000, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame::Player' has a wrong offset!");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame, TargetComponent) == 0x000008, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame::TargetComponent' has a wrong offset!");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame, FrameTime) == 0x000010, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame::FrameTime' has a wrong offset!");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame, ReturnValue) == 0x000018, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame::ReturnValue' has a wrong offset!");

struct MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime final
{
public:
	class UMovieSceneSequencePlayer*              Player;
	class USceneComponent*                        TargetComponent;
	float                                         TimeInSeconds;
	uint8                                         Pad_14[0x4];
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;
};
static_assert(alignof(MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime) == 0x000008, "Wrong alignment on MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime");
static_assert(sizeof(MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime) == 0x000020, "Wrong size on MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime, Player) == 0x000000, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime::Player' has a wrong offset!");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime, TargetComponent) == 0x000008, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime::TargetComponent' has a wrong offset!");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime, TimeInSeconds) == 0x000010, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime::TimeInSeconds' has a wrong offset!");
static_assert(offsetof(MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime, ReturnValue) == 0x000018, "Member 'MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime::ReturnValue' has a wrong offset!");

}
