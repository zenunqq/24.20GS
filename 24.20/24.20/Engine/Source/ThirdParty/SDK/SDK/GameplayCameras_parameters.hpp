#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayCameras_structs.hpp"

namespace SDK::Params
{

struct LegacyCameraShake_StartLegacyCameraShake final
{
public:
	class APlayerCameraManager*                   PlayerCameraManager;
	TSubclassOf<class ULegacyCameraShake>         ShakeClass;
	float                                         Scale;
	ECameraShakePlaySpace                         Playspace;
	uint8                                         Pad_15[0x3];
	struct FRotator                               UserPlaySpaceRot;
	class ULegacyCameraShake*                     ReturnValue;
};
static_assert(alignof(LegacyCameraShake_StartLegacyCameraShake) == 0x000008, "Wrong alignment on LegacyCameraShake_StartLegacyCameraShake");
static_assert(sizeof(LegacyCameraShake_StartLegacyCameraShake) == 0x000038, "Wrong size on LegacyCameraShake_StartLegacyCameraShake");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShake, PlayerCameraManager) == 0x000000, "Member 'LegacyCameraShake_StartLegacyCameraShake::PlayerCameraManager' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShake, ShakeClass) == 0x000008, "Member 'LegacyCameraShake_StartLegacyCameraShake::ShakeClass' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShake, Scale) == 0x000010, "Member 'LegacyCameraShake_StartLegacyCameraShake::Scale' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShake, Playspace) == 0x000014, "Member 'LegacyCameraShake_StartLegacyCameraShake::Playspace' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShake, UserPlaySpaceRot) == 0x000018, "Member 'LegacyCameraShake_StartLegacyCameraShake::UserPlaySpaceRot' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShake, ReturnValue) == 0x000030, "Member 'LegacyCameraShake_StartLegacyCameraShake::ReturnValue' has a wrong offset!");

struct LegacyCameraShake_StartLegacyCameraShakeFromSource final
{
public:
	class APlayerCameraManager*                   PlayerCameraManager;
	TSubclassOf<class ULegacyCameraShake>         ShakeClass;
	class UCameraShakeSourceComponent*            SourceComponent;
	float                                         Scale;
	ECameraShakePlaySpace                         Playspace;
	uint8                                         Pad_1D[0x3];
	struct FRotator                               UserPlaySpaceRot;
	class ULegacyCameraShake*                     ReturnValue;
};
static_assert(alignof(LegacyCameraShake_StartLegacyCameraShakeFromSource) == 0x000008, "Wrong alignment on LegacyCameraShake_StartLegacyCameraShakeFromSource");
static_assert(sizeof(LegacyCameraShake_StartLegacyCameraShakeFromSource) == 0x000040, "Wrong size on LegacyCameraShake_StartLegacyCameraShakeFromSource");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShakeFromSource, PlayerCameraManager) == 0x000000, "Member 'LegacyCameraShake_StartLegacyCameraShakeFromSource::PlayerCameraManager' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShakeFromSource, ShakeClass) == 0x000008, "Member 'LegacyCameraShake_StartLegacyCameraShakeFromSource::ShakeClass' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShakeFromSource, SourceComponent) == 0x000010, "Member 'LegacyCameraShake_StartLegacyCameraShakeFromSource::SourceComponent' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShakeFromSource, Scale) == 0x000018, "Member 'LegacyCameraShake_StartLegacyCameraShakeFromSource::Scale' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShakeFromSource, Playspace) == 0x00001C, "Member 'LegacyCameraShake_StartLegacyCameraShakeFromSource::Playspace' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShakeFromSource, UserPlaySpaceRot) == 0x000020, "Member 'LegacyCameraShake_StartLegacyCameraShakeFromSource::UserPlaySpaceRot' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShakeFromSource, ReturnValue) == 0x000038, "Member 'LegacyCameraShake_StartLegacyCameraShakeFromSource::ReturnValue' has a wrong offset!");

struct LegacyCameraShake_BlueprintUpdateCameraShake final
{
public:
	float                                         DeltaTime;
	float                                         Alpha;
	uint8                                         Pad_8[0x8];
	struct FMinimalViewInfo                       POV;
	struct FMinimalViewInfo                       ModifiedPOV;
};
static_assert(alignof(LegacyCameraShake_BlueprintUpdateCameraShake) == 0x000010, "Wrong alignment on LegacyCameraShake_BlueprintUpdateCameraShake");
static_assert(sizeof(LegacyCameraShake_BlueprintUpdateCameraShake) == 0x000F90, "Wrong size on LegacyCameraShake_BlueprintUpdateCameraShake");
static_assert(offsetof(LegacyCameraShake_BlueprintUpdateCameraShake, DeltaTime) == 0x000000, "Member 'LegacyCameraShake_BlueprintUpdateCameraShake::DeltaTime' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_BlueprintUpdateCameraShake, Alpha) == 0x000004, "Member 'LegacyCameraShake_BlueprintUpdateCameraShake::Alpha' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_BlueprintUpdateCameraShake, POV) == 0x000010, "Member 'LegacyCameraShake_BlueprintUpdateCameraShake::POV' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_BlueprintUpdateCameraShake, ModifiedPOV) == 0x0007D0, "Member 'LegacyCameraShake_BlueprintUpdateCameraShake::ModifiedPOV' has a wrong offset!");

struct LegacyCameraShake_ReceivePlayShake final
{
public:
	float                                         Scale;
};
static_assert(alignof(LegacyCameraShake_ReceivePlayShake) == 0x000004, "Wrong alignment on LegacyCameraShake_ReceivePlayShake");
static_assert(sizeof(LegacyCameraShake_ReceivePlayShake) == 0x000004, "Wrong size on LegacyCameraShake_ReceivePlayShake");
static_assert(offsetof(LegacyCameraShake_ReceivePlayShake, Scale) == 0x000000, "Member 'LegacyCameraShake_ReceivePlayShake::Scale' has a wrong offset!");

struct LegacyCameraShake_ReceiveStopShake final
{
public:
	bool                                          bImmediately;
};
static_assert(alignof(LegacyCameraShake_ReceiveStopShake) == 0x000001, "Wrong alignment on LegacyCameraShake_ReceiveStopShake");
static_assert(sizeof(LegacyCameraShake_ReceiveStopShake) == 0x000001, "Wrong size on LegacyCameraShake_ReceiveStopShake");
static_assert(offsetof(LegacyCameraShake_ReceiveStopShake, bImmediately) == 0x000000, "Member 'LegacyCameraShake_ReceiveStopShake::bImmediately' has a wrong offset!");

struct LegacyCameraShake_ReceiveIsFinished final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(LegacyCameraShake_ReceiveIsFinished) == 0x000001, "Wrong alignment on LegacyCameraShake_ReceiveIsFinished");
static_assert(sizeof(LegacyCameraShake_ReceiveIsFinished) == 0x000001, "Wrong size on LegacyCameraShake_ReceiveIsFinished");
static_assert(offsetof(LegacyCameraShake_ReceiveIsFinished, ReturnValue) == 0x000000, "Member 'LegacyCameraShake_ReceiveIsFinished::ReturnValue' has a wrong offset!");

struct LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake final
{
public:
	class UCameraShakeBase*                       CameraShake;
	class ULegacyCameraShake*                     ReturnValue;
};
static_assert(alignof(LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake) == 0x000008, "Wrong alignment on LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake");
static_assert(sizeof(LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake) == 0x000010, "Wrong size on LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake");
static_assert(offsetof(LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake, CameraShake) == 0x000000, "Member 'LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake::CameraShake' has a wrong offset!");
static_assert(offsetof(LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake, ReturnValue) == 0x000008, "Member 'LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake::ReturnValue' has a wrong offset!");

struct CameraAnimationCameraModifier_GetCameraAnimationCameraModifier final
{
public:
	const class UObject*                          WorldContextObject;
	int32                                         PlayerIndex;
	uint8                                         Pad_C[0x4];
	class UCameraAnimationCameraModifier*         ReturnValue;
};
static_assert(alignof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifier) == 0x000008, "Wrong alignment on CameraAnimationCameraModifier_GetCameraAnimationCameraModifier");
static_assert(sizeof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifier) == 0x000018, "Wrong size on CameraAnimationCameraModifier_GetCameraAnimationCameraModifier");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifier, WorldContextObject) == 0x000000, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifier::WorldContextObject' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifier, PlayerIndex) == 0x000008, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifier::PlayerIndex' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifier, ReturnValue) == 0x000010, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifier::ReturnValue' has a wrong offset!");

struct CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID final
{
public:
	const class UObject*                          WorldContextObject;
	int32                                         ControllerId;
	uint8                                         Pad_C[0x4];
	class UCameraAnimationCameraModifier*         ReturnValue;
};
static_assert(alignof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID) == 0x000008, "Wrong alignment on CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID");
static_assert(sizeof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID) == 0x000018, "Wrong size on CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID, WorldContextObject) == 0x000000, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID::WorldContextObject' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID, ControllerId) == 0x000008, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID::ControllerId' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID, ReturnValue) == 0x000010, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID::ReturnValue' has a wrong offset!");

struct CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController final
{
public:
	const class APlayerController*                PlayerController;
	class UCameraAnimationCameraModifier*         ReturnValue;
};
static_assert(alignof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController) == 0x000008, "Wrong alignment on CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController");
static_assert(sizeof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController) == 0x000010, "Wrong size on CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController, PlayerController) == 0x000000, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController::PlayerController' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController, ReturnValue) == 0x000008, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController::ReturnValue' has a wrong offset!");

struct CameraAnimationCameraModifier_PlayCameraAnimation final
{
public:
	class UCameraAnimationSequence*               Sequence;
	struct FCameraAnimationParams                 Params_0;
	struct FCameraAnimationHandle                 ReturnValue;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(CameraAnimationCameraModifier_PlayCameraAnimation) == 0x000008, "Wrong alignment on CameraAnimationCameraModifier_PlayCameraAnimation");
static_assert(sizeof(CameraAnimationCameraModifier_PlayCameraAnimation) == 0x000050, "Wrong size on CameraAnimationCameraModifier_PlayCameraAnimation");
static_assert(offsetof(CameraAnimationCameraModifier_PlayCameraAnimation, Sequence) == 0x000000, "Member 'CameraAnimationCameraModifier_PlayCameraAnimation::Sequence' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_PlayCameraAnimation, Params_0) == 0x000008, "Member 'CameraAnimationCameraModifier_PlayCameraAnimation::Params_0' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_PlayCameraAnimation, ReturnValue) == 0x000048, "Member 'CameraAnimationCameraModifier_PlayCameraAnimation::ReturnValue' has a wrong offset!");

struct CameraAnimationCameraModifier_StopAllCameraAnimations final
{
public:
	bool                                          bImmediate;
};
static_assert(alignof(CameraAnimationCameraModifier_StopAllCameraAnimations) == 0x000001, "Wrong alignment on CameraAnimationCameraModifier_StopAllCameraAnimations");
static_assert(sizeof(CameraAnimationCameraModifier_StopAllCameraAnimations) == 0x000001, "Wrong size on CameraAnimationCameraModifier_StopAllCameraAnimations");
static_assert(offsetof(CameraAnimationCameraModifier_StopAllCameraAnimations, bImmediate) == 0x000000, "Member 'CameraAnimationCameraModifier_StopAllCameraAnimations::bImmediate' has a wrong offset!");

struct CameraAnimationCameraModifier_StopAllCameraAnimationsOf final
{
public:
	class UCameraAnimationSequence*               Sequence;
	bool                                          bImmediate;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(CameraAnimationCameraModifier_StopAllCameraAnimationsOf) == 0x000008, "Wrong alignment on CameraAnimationCameraModifier_StopAllCameraAnimationsOf");
static_assert(sizeof(CameraAnimationCameraModifier_StopAllCameraAnimationsOf) == 0x000010, "Wrong size on CameraAnimationCameraModifier_StopAllCameraAnimationsOf");
static_assert(offsetof(CameraAnimationCameraModifier_StopAllCameraAnimationsOf, Sequence) == 0x000000, "Member 'CameraAnimationCameraModifier_StopAllCameraAnimationsOf::Sequence' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_StopAllCameraAnimationsOf, bImmediate) == 0x000008, "Member 'CameraAnimationCameraModifier_StopAllCameraAnimationsOf::bImmediate' has a wrong offset!");

struct CameraAnimationCameraModifier_StopCameraAnimation final
{
public:
	struct FCameraAnimationHandle                 Handle;
	bool                                          bImmediate;
	uint8                                         Pad_5[0x1];
};
static_assert(alignof(CameraAnimationCameraModifier_StopCameraAnimation) == 0x000002, "Wrong alignment on CameraAnimationCameraModifier_StopCameraAnimation");
static_assert(sizeof(CameraAnimationCameraModifier_StopCameraAnimation) == 0x000006, "Wrong size on CameraAnimationCameraModifier_StopCameraAnimation");
static_assert(offsetof(CameraAnimationCameraModifier_StopCameraAnimation, Handle) == 0x000000, "Member 'CameraAnimationCameraModifier_StopCameraAnimation::Handle' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_StopCameraAnimation, bImmediate) == 0x000004, "Member 'CameraAnimationCameraModifier_StopCameraAnimation::bImmediate' has a wrong offset!");

struct CameraAnimationCameraModifier_IsCameraAnimationActive final
{
public:
	struct FCameraAnimationHandle                 Handle;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x1];
};
static_assert(alignof(CameraAnimationCameraModifier_IsCameraAnimationActive) == 0x000002, "Wrong alignment on CameraAnimationCameraModifier_IsCameraAnimationActive");
static_assert(sizeof(CameraAnimationCameraModifier_IsCameraAnimationActive) == 0x000006, "Wrong size on CameraAnimationCameraModifier_IsCameraAnimationActive");
static_assert(offsetof(CameraAnimationCameraModifier_IsCameraAnimationActive, Handle) == 0x000000, "Member 'CameraAnimationCameraModifier_IsCameraAnimationActive::Handle' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_IsCameraAnimationActive, ReturnValue) == 0x000004, "Member 'CameraAnimationCameraModifier_IsCameraAnimationActive::ReturnValue' has a wrong offset!");

struct GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier final
{
public:
	class APlayerCameraManager*                   PlayerCameraManager;
	class UCameraAnimationCameraModifier*         ReturnValue;
};
static_assert(alignof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier) == 0x000008, "Wrong alignment on GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier");
static_assert(sizeof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier) == 0x000010, "Wrong size on GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier");
static_assert(offsetof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier, PlayerCameraManager) == 0x000000, "Member 'GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier::PlayerCameraManager' has a wrong offset!");
static_assert(offsetof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier, ReturnValue) == 0x000008, "Member 'GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier::ReturnValue' has a wrong offset!");

struct GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace final
{
public:
	ECameraShakePlaySpace                         CameraShakePlaySpace;
	ECameraAnimationPlaySpace                     ReturnValue;
};
static_assert(alignof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace) == 0x000001, "Wrong alignment on GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace");
static_assert(sizeof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace) == 0x000002, "Wrong size on GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace");
static_assert(offsetof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace, CameraShakePlaySpace) == 0x000000, "Member 'GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace::CameraShakePlaySpace' has a wrong offset!");
static_assert(offsetof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace, ReturnValue) == 0x000001, "Member 'GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace::ReturnValue' has a wrong offset!");

struct GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace final
{
public:
	ECameraAnimationPlaySpace                     CameraAnimationPlaySpace;
	ECameraShakePlaySpace                         ReturnValue;
};
static_assert(alignof(GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace) == 0x000001, "Wrong alignment on GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace");
static_assert(sizeof(GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace) == 0x000002, "Wrong size on GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace");
static_assert(offsetof(GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace, CameraAnimationPlaySpace) == 0x000000, "Member 'GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace::CameraAnimationPlaySpace' has a wrong offset!");
static_assert(offsetof(GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace, ReturnValue) == 0x000001, "Member 'GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace::ReturnValue' has a wrong offset!");

struct GameplayCamerasSubsystem_PlayCameraAnimation final
{
public:
	class APlayerController*                      PlayerController;
	class UCameraAnimationSequence*               Sequence;
	struct FCameraAnimationParams                 Params_0;
	struct FCameraAnimationHandle                 ReturnValue;
	uint8                                         Pad_54[0x4];
};
static_assert(alignof(GameplayCamerasSubsystem_PlayCameraAnimation) == 0x000008, "Wrong alignment on GameplayCamerasSubsystem_PlayCameraAnimation");
static_assert(sizeof(GameplayCamerasSubsystem_PlayCameraAnimation) == 0x000058, "Wrong size on GameplayCamerasSubsystem_PlayCameraAnimation");
static_assert(offsetof(GameplayCamerasSubsystem_PlayCameraAnimation, PlayerController) == 0x000000, "Member 'GameplayCamerasSubsystem_PlayCameraAnimation::PlayerController' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_PlayCameraAnimation, Sequence) == 0x000008, "Member 'GameplayCamerasSubsystem_PlayCameraAnimation::Sequence' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_PlayCameraAnimation, Params_0) == 0x000010, "Member 'GameplayCamerasSubsystem_PlayCameraAnimation::Params_0' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_PlayCameraAnimation, ReturnValue) == 0x000050, "Member 'GameplayCamerasSubsystem_PlayCameraAnimation::ReturnValue' has a wrong offset!");

struct GameplayCamerasSubsystem_StopAllCameraAnimations final
{
public:
	class APlayerController*                      PlayerController;
	bool                                          bImmediate;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(GameplayCamerasSubsystem_StopAllCameraAnimations) == 0x000008, "Wrong alignment on GameplayCamerasSubsystem_StopAllCameraAnimations");
static_assert(sizeof(GameplayCamerasSubsystem_StopAllCameraAnimations) == 0x000010, "Wrong size on GameplayCamerasSubsystem_StopAllCameraAnimations");
static_assert(offsetof(GameplayCamerasSubsystem_StopAllCameraAnimations, PlayerController) == 0x000000, "Member 'GameplayCamerasSubsystem_StopAllCameraAnimations::PlayerController' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_StopAllCameraAnimations, bImmediate) == 0x000008, "Member 'GameplayCamerasSubsystem_StopAllCameraAnimations::bImmediate' has a wrong offset!");

struct GameplayCamerasSubsystem_StopAllCameraAnimationsOf final
{
public:
	class APlayerController*                      PlayerController;
	class UCameraAnimationSequence*               Sequence;
	bool                                          bImmediate;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(GameplayCamerasSubsystem_StopAllCameraAnimationsOf) == 0x000008, "Wrong alignment on GameplayCamerasSubsystem_StopAllCameraAnimationsOf");
static_assert(sizeof(GameplayCamerasSubsystem_StopAllCameraAnimationsOf) == 0x000018, "Wrong size on GameplayCamerasSubsystem_StopAllCameraAnimationsOf");
static_assert(offsetof(GameplayCamerasSubsystem_StopAllCameraAnimationsOf, PlayerController) == 0x000000, "Member 'GameplayCamerasSubsystem_StopAllCameraAnimationsOf::PlayerController' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_StopAllCameraAnimationsOf, Sequence) == 0x000008, "Member 'GameplayCamerasSubsystem_StopAllCameraAnimationsOf::Sequence' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_StopAllCameraAnimationsOf, bImmediate) == 0x000010, "Member 'GameplayCamerasSubsystem_StopAllCameraAnimationsOf::bImmediate' has a wrong offset!");

struct GameplayCamerasSubsystem_StopCameraAnimation final
{
public:
	class APlayerController*                      PlayerController;
	struct FCameraAnimationHandle                 Handle;
	bool                                          bImmediate;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(GameplayCamerasSubsystem_StopCameraAnimation) == 0x000008, "Wrong alignment on GameplayCamerasSubsystem_StopCameraAnimation");
static_assert(sizeof(GameplayCamerasSubsystem_StopCameraAnimation) == 0x000010, "Wrong size on GameplayCamerasSubsystem_StopCameraAnimation");
static_assert(offsetof(GameplayCamerasSubsystem_StopCameraAnimation, PlayerController) == 0x000000, "Member 'GameplayCamerasSubsystem_StopCameraAnimation::PlayerController' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_StopCameraAnimation, Handle) == 0x000008, "Member 'GameplayCamerasSubsystem_StopCameraAnimation::Handle' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_StopCameraAnimation, bImmediate) == 0x00000C, "Member 'GameplayCamerasSubsystem_StopCameraAnimation::bImmediate' has a wrong offset!");

struct GameplayCamerasSubsystem_IsCameraAnimationActive final
{
public:
	class APlayerController*                      PlayerController;
	struct FCameraAnimationHandle                 Handle;
	bool                                          ReturnValue;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(GameplayCamerasSubsystem_IsCameraAnimationActive) == 0x000008, "Wrong alignment on GameplayCamerasSubsystem_IsCameraAnimationActive");
static_assert(sizeof(GameplayCamerasSubsystem_IsCameraAnimationActive) == 0x000010, "Wrong size on GameplayCamerasSubsystem_IsCameraAnimationActive");
static_assert(offsetof(GameplayCamerasSubsystem_IsCameraAnimationActive, PlayerController) == 0x000000, "Member 'GameplayCamerasSubsystem_IsCameraAnimationActive::PlayerController' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_IsCameraAnimationActive, Handle) == 0x000008, "Member 'GameplayCamerasSubsystem_IsCameraAnimationActive::Handle' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_IsCameraAnimationActive, ReturnValue) == 0x00000C, "Member 'GameplayCamerasSubsystem_IsCameraAnimationActive::ReturnValue' has a wrong offset!");

}
