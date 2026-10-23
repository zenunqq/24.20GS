#pragma once

#include "Basic.hpp"

#include "GameplayCameras_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class ULegacyCameraShake : public UCameraShakeBase
{
public:
	float                                         OscillationDuration;
	float                                         OscillationBlendInTime;
	float                                         OscillationBlendOutTime;
	struct FROscillator                           RotOscillation;
	struct FVOscillator                           LocOscillation;
	struct FFOscillator                           FOVOscillation;
	float                                         AnimPlayRate;
	float                                         AnimScale;
	float                                         AnimBlendInTime;
	float                                         AnimBlendOutTime;
	float                                         RandomAnimSegmentDuration;
	uint8                                         Pad_15C[0x4];
	class UCameraAnimationSequence*               AnimSequence;
	uint8                                         bRandomAnimSegment : 1;
	uint8                                         Pad_169[0x3];
	float                                         OscillatorTimeRemaining;
	uint8                                         Pad_170[0x70];
	class USequenceCameraShakePattern*            SequenceShakePattern;
	uint8                                         Pad_1E8[0x28];

public:
	static class ULegacyCameraShake* StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace Playspace, const struct FRotator& UserPlaySpaceRot);
	static class ULegacyCameraShake* StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace Playspace, const struct FRotator& UserPlaySpaceRot);

	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);
	void ReceivePlayShake(float Scale);
	void ReceiveStopShake(bool bImmediately);

	bool ReceiveIsFinished() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LegacyCameraShake">();
	}
	static class ULegacyCameraShake* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULegacyCameraShake>();
	}
};
static_assert(alignof(ULegacyCameraShake) == 0x000010, "Wrong alignment on ULegacyCameraShake");
static_assert(sizeof(ULegacyCameraShake) == 0x000210, "Wrong size on ULegacyCameraShake");
static_assert(offsetof(ULegacyCameraShake, OscillationDuration) == 0x0000E8, "Member 'ULegacyCameraShake::OscillationDuration' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, OscillationBlendInTime) == 0x0000EC, "Member 'ULegacyCameraShake::OscillationBlendInTime' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, OscillationBlendOutTime) == 0x0000F0, "Member 'ULegacyCameraShake::OscillationBlendOutTime' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, RotOscillation) == 0x0000F4, "Member 'ULegacyCameraShake::RotOscillation' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, LocOscillation) == 0x000118, "Member 'ULegacyCameraShake::LocOscillation' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, FOVOscillation) == 0x00013C, "Member 'ULegacyCameraShake::FOVOscillation' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, AnimPlayRate) == 0x000148, "Member 'ULegacyCameraShake::AnimPlayRate' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, AnimScale) == 0x00014C, "Member 'ULegacyCameraShake::AnimScale' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, AnimBlendInTime) == 0x000150, "Member 'ULegacyCameraShake::AnimBlendInTime' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, AnimBlendOutTime) == 0x000154, "Member 'ULegacyCameraShake::AnimBlendOutTime' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, RandomAnimSegmentDuration) == 0x000158, "Member 'ULegacyCameraShake::RandomAnimSegmentDuration' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, AnimSequence) == 0x000160, "Member 'ULegacyCameraShake::AnimSequence' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, OscillatorTimeRemaining) == 0x00016C, "Member 'ULegacyCameraShake::OscillatorTimeRemaining' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, SequenceShakePattern) == 0x0001E0, "Member 'ULegacyCameraShake::SequenceShakePattern' has a wrong offset!");

class ULegacyCameraShakePattern final : public UCameraShakePattern
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LegacyCameraShakePattern">();
	}
	static class ULegacyCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULegacyCameraShakePattern>();
	}
};
static_assert(alignof(ULegacyCameraShakePattern) == 0x000008, "Wrong alignment on ULegacyCameraShakePattern");
static_assert(sizeof(ULegacyCameraShakePattern) == 0x000028, "Wrong size on ULegacyCameraShakePattern");

class ULegacyCameraShakeFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class ULegacyCameraShake* Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LegacyCameraShakeFunctionLibrary">();
	}
	static class ULegacyCameraShakeFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULegacyCameraShakeFunctionLibrary>();
	}
};
static_assert(alignof(ULegacyCameraShakeFunctionLibrary) == 0x000008, "Wrong alignment on ULegacyCameraShakeFunctionLibrary");
static_assert(sizeof(ULegacyCameraShakeFunctionLibrary) == 0x000028, "Wrong size on ULegacyCameraShakeFunctionLibrary");

class UCameraAnimationCameraModifier final : public UCameraModifier
{
public:
	TArray<struct FActiveCameraAnimationInfo>     ActiveAnimations;
	uint16                                        NextInstanceSerialNumber;
	uint8                                         Pad_5A[0x6];

public:
	static class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(const class UObject* WorldContextObject, int32 PlayerIndex);
	static class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(const class UObject* WorldContextObject, int32 ControllerId);
	static class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(const class APlayerController* PlayerController);

	struct FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params_0);
	void StopAllCameraAnimations(bool bImmediate);
	void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate);
	void StopCameraAnimation(const struct FCameraAnimationHandle& Handle, bool bImmediate);

	bool IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationCameraModifier">();
	}
	static class UCameraAnimationCameraModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationCameraModifier>();
	}
};
static_assert(alignof(UCameraAnimationCameraModifier) == 0x000008, "Wrong alignment on UCameraAnimationCameraModifier");
static_assert(sizeof(UCameraAnimationCameraModifier) == 0x000060, "Wrong size on UCameraAnimationCameraModifier");
static_assert(offsetof(UCameraAnimationCameraModifier, ActiveAnimations) == 0x000048, "Member 'UCameraAnimationCameraModifier::ActiveAnimations' has a wrong offset!");
static_assert(offsetof(UCameraAnimationCameraModifier, NextInstanceSerialNumber) == 0x000058, "Member 'UCameraAnimationCameraModifier::NextInstanceSerialNumber' has a wrong offset!");

class UGameplayCamerasFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager);
	static ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace);
	static ECameraShakePlaySpace Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayCamerasFunctionLibrary">();
	}
	static class UGameplayCamerasFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayCamerasFunctionLibrary>();
	}
};
static_assert(alignof(UGameplayCamerasFunctionLibrary) == 0x000008, "Wrong alignment on UGameplayCamerasFunctionLibrary");
static_assert(sizeof(UGameplayCamerasFunctionLibrary) == 0x000028, "Wrong size on UGameplayCamerasFunctionLibrary");

class UCompositeCameraShakePattern final : public UCameraShakePattern
{
public:
	TArray<class UCameraShakePattern*>            ChildPatterns;
	uint8                                         Pad_38[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompositeCameraShakePattern">();
	}
	static class UCompositeCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompositeCameraShakePattern>();
	}
};
static_assert(alignof(UCompositeCameraShakePattern) == 0x000008, "Wrong alignment on UCompositeCameraShakePattern");
static_assert(sizeof(UCompositeCameraShakePattern) == 0x000048, "Wrong size on UCompositeCameraShakePattern");
static_assert(offsetof(UCompositeCameraShakePattern, ChildPatterns) == 0x000028, "Member 'UCompositeCameraShakePattern::ChildPatterns' has a wrong offset!");

class UDefaultCameraShakeBase final : public UCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DefaultCameraShakeBase">();
	}
	static class UDefaultCameraShakeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultCameraShakeBase>();
	}
};
static_assert(alignof(UDefaultCameraShakeBase) == 0x000010, "Wrong alignment on UDefaultCameraShakeBase");
static_assert(sizeof(UDefaultCameraShakeBase) == 0x0000F0, "Wrong size on UDefaultCameraShakeBase");

class UGameplayCamerasSubsystem final : public UWorldSubsystem
{
public:
	struct FCameraAnimationHandle PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params_0);
	void StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate);
	void StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate);
	void StopCameraAnimation(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle, bool bImmediate);

	bool IsCameraAnimationActive(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayCamerasSubsystem">();
	}
	static class UGameplayCamerasSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayCamerasSubsystem>();
	}
};
static_assert(alignof(UGameplayCamerasSubsystem) == 0x000008, "Wrong alignment on UGameplayCamerasSubsystem");
static_assert(sizeof(UGameplayCamerasSubsystem) == 0x000030, "Wrong size on UGameplayCamerasSubsystem");

class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
	float                                         Duration;
	float                                         BlendInTime;
	float                                         BlendOutTime;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimpleCameraShakePattern">();
	}
	static class USimpleCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleCameraShakePattern>();
	}
};
static_assert(alignof(USimpleCameraShakePattern) == 0x000008, "Wrong alignment on USimpleCameraShakePattern");
static_assert(sizeof(USimpleCameraShakePattern) == 0x000038, "Wrong size on USimpleCameraShakePattern");
static_assert(offsetof(USimpleCameraShakePattern, Duration) == 0x000028, "Member 'USimpleCameraShakePattern::Duration' has a wrong offset!");
static_assert(offsetof(USimpleCameraShakePattern, BlendInTime) == 0x00002C, "Member 'USimpleCameraShakePattern::BlendInTime' has a wrong offset!");
static_assert(offsetof(USimpleCameraShakePattern, BlendOutTime) == 0x000030, "Member 'USimpleCameraShakePattern::BlendOutTime' has a wrong offset!");

class UPerlinNoiseCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	float                                         LocationAmplitudeMultiplier;
	float                                         LocationFrequencyMultiplier;
	struct FPerlinNoiseShaker                     X;
	struct FPerlinNoiseShaker                     Y;
	struct FPerlinNoiseShaker                     Z;
	float                                         RotationAmplitudeMultiplier;
	float                                         RotationFrequencyMultiplier;
	struct FPerlinNoiseShaker                     Pitch;
	struct FPerlinNoiseShaker                     Yaw;
	struct FPerlinNoiseShaker                     Roll;
	struct FPerlinNoiseShaker                     FOV;
	uint8                                         Pad_80[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PerlinNoiseCameraShakePattern">();
	}
	static class UPerlinNoiseCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerlinNoiseCameraShakePattern>();
	}
};
static_assert(alignof(UPerlinNoiseCameraShakePattern) == 0x000008, "Wrong alignment on UPerlinNoiseCameraShakePattern");
static_assert(sizeof(UPerlinNoiseCameraShakePattern) == 0x0000B8, "Wrong size on UPerlinNoiseCameraShakePattern");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, LocationAmplitudeMultiplier) == 0x000038, "Member 'UPerlinNoiseCameraShakePattern::LocationAmplitudeMultiplier' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, LocationFrequencyMultiplier) == 0x00003C, "Member 'UPerlinNoiseCameraShakePattern::LocationFrequencyMultiplier' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, X) == 0x000040, "Member 'UPerlinNoiseCameraShakePattern::X' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Y) == 0x000048, "Member 'UPerlinNoiseCameraShakePattern::Y' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Z) == 0x000050, "Member 'UPerlinNoiseCameraShakePattern::Z' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, RotationAmplitudeMultiplier) == 0x000058, "Member 'UPerlinNoiseCameraShakePattern::RotationAmplitudeMultiplier' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, RotationFrequencyMultiplier) == 0x00005C, "Member 'UPerlinNoiseCameraShakePattern::RotationFrequencyMultiplier' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Pitch) == 0x000060, "Member 'UPerlinNoiseCameraShakePattern::Pitch' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Yaw) == 0x000068, "Member 'UPerlinNoiseCameraShakePattern::Yaw' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Roll) == 0x000070, "Member 'UPerlinNoiseCameraShakePattern::Roll' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, FOV) == 0x000078, "Member 'UPerlinNoiseCameraShakePattern::FOV' has a wrong offset!");

class UTestCameraShake final : public UCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestCameraShake">();
	}
	static class UTestCameraShake* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestCameraShake>();
	}
};
static_assert(alignof(UTestCameraShake) == 0x000010, "Wrong alignment on UTestCameraShake");
static_assert(sizeof(UTestCameraShake) == 0x0000F0, "Wrong size on UTestCameraShake");

class UConstantCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	struct FVector                                LocationOffset;
	struct FRotator                               RotationOffset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstantCameraShakePattern">();
	}
	static class UConstantCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConstantCameraShakePattern>();
	}
};
static_assert(alignof(UConstantCameraShakePattern) == 0x000008, "Wrong alignment on UConstantCameraShakePattern");
static_assert(sizeof(UConstantCameraShakePattern) == 0x000068, "Wrong size on UConstantCameraShakePattern");
static_assert(offsetof(UConstantCameraShakePattern, LocationOffset) == 0x000038, "Member 'UConstantCameraShakePattern::LocationOffset' has a wrong offset!");
static_assert(offsetof(UConstantCameraShakePattern, RotationOffset) == 0x000050, "Member 'UConstantCameraShakePattern::RotationOffset' has a wrong offset!");

class UWaveOscillatorCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	float                                         LocationAmplitudeMultiplier;
	float                                         LocationFrequencyMultiplier;
	struct FWaveOscillator                        X;
	struct FWaveOscillator                        Y;
	struct FWaveOscillator                        Z;
	float                                         RotationAmplitudeMultiplier;
	float                                         RotationFrequencyMultiplier;
	struct FWaveOscillator                        Pitch;
	struct FWaveOscillator                        Yaw;
	struct FWaveOscillator                        Roll;
	struct FWaveOscillator                        FOV;
	uint8                                         Pad_9C[0x3C];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaveOscillatorCameraShakePattern">();
	}
	static class UWaveOscillatorCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaveOscillatorCameraShakePattern>();
	}
};
static_assert(alignof(UWaveOscillatorCameraShakePattern) == 0x000008, "Wrong alignment on UWaveOscillatorCameraShakePattern");
static_assert(sizeof(UWaveOscillatorCameraShakePattern) == 0x0000D8, "Wrong size on UWaveOscillatorCameraShakePattern");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, LocationAmplitudeMultiplier) == 0x000038, "Member 'UWaveOscillatorCameraShakePattern::LocationAmplitudeMultiplier' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, LocationFrequencyMultiplier) == 0x00003C, "Member 'UWaveOscillatorCameraShakePattern::LocationFrequencyMultiplier' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, X) == 0x000040, "Member 'UWaveOscillatorCameraShakePattern::X' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Y) == 0x00004C, "Member 'UWaveOscillatorCameraShakePattern::Y' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Z) == 0x000058, "Member 'UWaveOscillatorCameraShakePattern::Z' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, RotationAmplitudeMultiplier) == 0x000064, "Member 'UWaveOscillatorCameraShakePattern::RotationAmplitudeMultiplier' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, RotationFrequencyMultiplier) == 0x000068, "Member 'UWaveOscillatorCameraShakePattern::RotationFrequencyMultiplier' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Pitch) == 0x00006C, "Member 'UWaveOscillatorCameraShakePattern::Pitch' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Yaw) == 0x000078, "Member 'UWaveOscillatorCameraShakePattern::Yaw' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Roll) == 0x000084, "Member 'UWaveOscillatorCameraShakePattern::Roll' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, FOV) == 0x000090, "Member 'UWaveOscillatorCameraShakePattern::FOV' has a wrong offset!");

}
