#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CinematicCamera_structs.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class ACameraRig_Crane final : public AActor
{
public:
	float                                         CranePitch;
	float                                         CraneYaw;
	float                                         CraneArmLength;
	bool                                          bLockMountPitch;
	bool                                          bLockMountYaw;
	uint8                                         Pad_296[0x2];
	class USceneComponent*                        TransformComponent;
	class USceneComponent*                        CraneYawControl;
	class USceneComponent*                        CranePitchControl;
	class USceneComponent*                        CraneCameraMount;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraRig_Crane">();
	}
	static class ACameraRig_Crane* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraRig_Crane>();
	}
};
static_assert(alignof(ACameraRig_Crane) == 0x000008, "Wrong alignment on ACameraRig_Crane");
static_assert(sizeof(ACameraRig_Crane) == 0x0002B8, "Wrong size on ACameraRig_Crane");
static_assert(offsetof(ACameraRig_Crane, CranePitch) == 0x000288, "Member 'ACameraRig_Crane::CranePitch' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneYaw) == 0x00028C, "Member 'ACameraRig_Crane::CraneYaw' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneArmLength) == 0x000290, "Member 'ACameraRig_Crane::CraneArmLength' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, bLockMountPitch) == 0x000294, "Member 'ACameraRig_Crane::bLockMountPitch' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, bLockMountYaw) == 0x000295, "Member 'ACameraRig_Crane::bLockMountYaw' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, TransformComponent) == 0x000298, "Member 'ACameraRig_Crane::TransformComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneYawControl) == 0x0002A0, "Member 'ACameraRig_Crane::CraneYawControl' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CranePitchControl) == 0x0002A8, "Member 'ACameraRig_Crane::CranePitchControl' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneCameraMount) == 0x0002B0, "Member 'ACameraRig_Crane::CraneCameraMount' has a wrong offset!");

class ACameraRig_Rail final : public AActor
{
public:
	float                                         CurrentPositionOnRail;
	bool                                          bLockOrientationToRail;
	uint8                                         Pad_28D[0x3];
	class USceneComponent*                        TransformComponent;
	class USplineComponent*                       RailSplineComponent;
	class USceneComponent*                        RailCameraMount;

public:
	class USplineComponent* GetRailSplineComponent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraRig_Rail">();
	}
	static class ACameraRig_Rail* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraRig_Rail>();
	}
};
static_assert(alignof(ACameraRig_Rail) == 0x000008, "Wrong alignment on ACameraRig_Rail");
static_assert(sizeof(ACameraRig_Rail) == 0x0002A8, "Wrong size on ACameraRig_Rail");
static_assert(offsetof(ACameraRig_Rail, CurrentPositionOnRail) == 0x000288, "Member 'ACameraRig_Rail::CurrentPositionOnRail' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, bLockOrientationToRail) == 0x00028C, "Member 'ACameraRig_Rail::bLockOrientationToRail' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, TransformComponent) == 0x000290, "Member 'ACameraRig_Rail::TransformComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, RailSplineComponent) == 0x000298, "Member 'ACameraRig_Rail::RailSplineComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, RailCameraMount) == 0x0002A0, "Member 'ACameraRig_Rail::RailCameraMount' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings          LookatTrackingSettings;
	uint8                                         Pad_9F8[0x10];

public:
	class UCineCameraComponent* GetCineCameraComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CineCameraActor">();
	}
	static class ACineCameraActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACineCameraActor>();
	}
};
#pragma pack(pop)
static_assert(alignof(ACineCameraActor) == 0x000010, "Wrong alignment on ACineCameraActor");
static_assert(sizeof(ACineCameraActor) == 0x000A10, "Wrong size on ACineCameraActor");
static_assert(offsetof(ACineCameraActor, LookatTrackingSettings) == 0x000990, "Member 'ACineCameraActor::LookatTrackingSettings' has a wrong offset!");

class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings                FilmbackSettings;
	struct FCameraFilmbackSettings                Filmback;
	struct FCameraLensSettings                    LensSettings;
	uint8                                         Pad_A64[0x4];
	struct FCameraFocusSettings                   FocusSettings;
	struct FPlateCropSettings                     CropSettings;
	float                                         CurrentFocalLength;
	float                                         CurrentAperture;
	float                                         CurrentFocusDistance;
	uint8                                         bOverride_CustomNearClippingPlane : 1;
	uint8                                         Pad_AD9[0x3];
	float                                         CustomNearClippingPlane;
	uint8                                         Pad_AE0[0x8];
	TArray<struct FNamedFilmbackPreset>           FilmbackPresets;
	TArray<struct FNamedLensPreset>               LensPresets;
	class FString                                 DefaultFilmbackPresetName;
	class FString                                 DefaultFilmbackPreset;
	class FString                                 DefaultLensPresetName;
	float                                         DefaultLensFocalLength;
	float                                         DefaultLensFStop;

public:
	static TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy();
	static TArray<struct FNamedLensPreset> GetLensPresetsCopy();

	void SetCropPresetByName(const class FString& InPresetName);
	void SetCropSettings(const struct FPlateCropSettings& NewCropSettings);
	void SetCurrentAperture(const float NewCurrentAperture);
	void SetCurrentFocalLength(float InFocalLength);
	void SetFilmback(const struct FCameraFilmbackSettings& NewFilmback);
	void SetFilmbackPresetByName(const class FString& InPresetName);
	void SetFocusSettings(const struct FCameraFocusSettings& NewFocusSettings);
	void SetLensPresetByName(const class FString& InPresetName);
	void SetLensSettings(const struct FCameraLensSettings& NewLensSettings);

	class FString GetCropPresetName() const;
	class FString GetDefaultFilmbackPresetName() const;
	class FString GetFilmbackPresetName() const;
	float GetHorizontalFieldOfView() const;
	class FString GetLensPresetName() const;
	float GetVerticalFieldOfView() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CineCameraComponent">();
	}
	static class UCineCameraComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCineCameraComponent>();
	}
};
static_assert(alignof(UCineCameraComponent) == 0x000010, "Wrong alignment on UCineCameraComponent");
static_assert(sizeof(UCineCameraComponent) == 0x000B40, "Wrong size on UCineCameraComponent");
static_assert(offsetof(UCineCameraComponent, FilmbackSettings) == 0x000A30, "Member 'UCineCameraComponent::FilmbackSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, Filmback) == 0x000A3C, "Member 'UCineCameraComponent::Filmback' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, LensSettings) == 0x000A48, "Member 'UCineCameraComponent::LensSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, FocusSettings) == 0x000A68, "Member 'UCineCameraComponent::FocusSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CropSettings) == 0x000AC8, "Member 'UCineCameraComponent::CropSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentFocalLength) == 0x000ACC, "Member 'UCineCameraComponent::CurrentFocalLength' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentAperture) == 0x000AD0, "Member 'UCineCameraComponent::CurrentAperture' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentFocusDistance) == 0x000AD4, "Member 'UCineCameraComponent::CurrentFocusDistance' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CustomNearClippingPlane) == 0x000ADC, "Member 'UCineCameraComponent::CustomNearClippingPlane' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, FilmbackPresets) == 0x000AE8, "Member 'UCineCameraComponent::FilmbackPresets' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, LensPresets) == 0x000AF8, "Member 'UCineCameraComponent::LensPresets' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPresetName) == 0x000B08, "Member 'UCineCameraComponent::DefaultFilmbackPresetName' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPreset) == 0x000B18, "Member 'UCineCameraComponent::DefaultFilmbackPreset' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensPresetName) == 0x000B28, "Member 'UCineCameraComponent::DefaultLensPresetName' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensFocalLength) == 0x000B38, "Member 'UCineCameraComponent::DefaultLensFocalLength' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensFStop) == 0x000B3C, "Member 'UCineCameraComponent::DefaultLensFStop' has a wrong offset!");

class UCineCameraSettings final : public UDeveloperSettings
{
public:
	class FString                                 DefaultLensPresetName;
	float                                         DefaultLensFocalLength;
	float                                         DefaultLensFStop;
	TArray<struct FNamedLensPreset>               LensPresets;
	class FString                                 DefaultFilmbackPreset;
	TArray<struct FNamedFilmbackPreset>           FilmbackPresets;
	class FString                                 DefaultCropPresetName;
	TArray<struct FNamedPlateCropPreset>          CropPresets;
	uint8                                         Pad_98[0x10];

public:
	static class UCineCameraSettings* GetCineCameraSettings();

	bool GetCropPresetByName(const class FString& PresetName, struct FPlateCropSettings* CropSettings);
	bool GetFilmbackPresetByName(const class FString& PresetName, struct FCameraFilmbackSettings* FilmbackSettings);
	bool GetLensPresetByName(const class FString& PresetName, struct FCameraLensSettings* LensSettings);
	void SetCropPresets(const TArray<struct FNamedPlateCropPreset>& InCropPresets);
	void SetDefaultCropPresetName(const class FString& InDefaultCropPresetName);
	void SetDefaultFilmbackPreset(const class FString& InDefaultFilmbackPreset);
	void SetDefaultLensFocalLength(const float InDefaultLensFocalLength);
	void SetDefaultLensFStop(const float InDefaultLensFStop);
	void SetDefaultLensPresetName(const class FString& InDefaultLensPresetName);
	void SetFilmbackPresets(const TArray<struct FNamedFilmbackPreset>& InFilmbackPresets);
	void SetLensPresets(const TArray<struct FNamedLensPreset>& InLensPresets);

	TArray<class FString> GetCropPresetNames() const;
	TArray<class FString> GetFilmbackPresetNames() const;
	TArray<class FString> GetLensPresetNames() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CineCameraSettings">();
	}
	static class UCineCameraSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCineCameraSettings>();
	}
};
static_assert(alignof(UCineCameraSettings) == 0x000008, "Wrong alignment on UCineCameraSettings");
static_assert(sizeof(UCineCameraSettings) == 0x0000A8, "Wrong size on UCineCameraSettings");
static_assert(offsetof(UCineCameraSettings, DefaultLensPresetName) == 0x000030, "Member 'UCineCameraSettings::DefaultLensPresetName' has a wrong offset!");
static_assert(offsetof(UCineCameraSettings, DefaultLensFocalLength) == 0x000040, "Member 'UCineCameraSettings::DefaultLensFocalLength' has a wrong offset!");
static_assert(offsetof(UCineCameraSettings, DefaultLensFStop) == 0x000044, "Member 'UCineCameraSettings::DefaultLensFStop' has a wrong offset!");
static_assert(offsetof(UCineCameraSettings, LensPresets) == 0x000048, "Member 'UCineCameraSettings::LensPresets' has a wrong offset!");
static_assert(offsetof(UCineCameraSettings, DefaultFilmbackPreset) == 0x000058, "Member 'UCineCameraSettings::DefaultFilmbackPreset' has a wrong offset!");
static_assert(offsetof(UCineCameraSettings, FilmbackPresets) == 0x000068, "Member 'UCineCameraSettings::FilmbackPresets' has a wrong offset!");
static_assert(offsetof(UCineCameraSettings, DefaultCropPresetName) == 0x000078, "Member 'UCineCameraSettings::DefaultCropPresetName' has a wrong offset!");
static_assert(offsetof(UCineCameraSettings, CropPresets) == 0x000088, "Member 'UCineCameraSettings::CropPresets' has a wrong offset!");

}
