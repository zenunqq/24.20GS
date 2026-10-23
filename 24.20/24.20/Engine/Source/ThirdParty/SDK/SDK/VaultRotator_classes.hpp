#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class AVaultRotator_C final : public AItemPreviewRotator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UDirectionalLightComponent*             DirectionalLightMobile;
	class UDirectionalLightComponent*             DirectionalLight_LOWPC;
	class USceneComponent*                        DirectionalLights;
	class USkyLightComponent*                     SkyLightLowMobile;
	class USkyLightComponent*                     SkyLight;
	class USkyLightComponent*                     SkyLight_LOWPC;
	class UArrowComponent*                        Arrow;
	class UPostProcessComponent*                  PostProcess_Mobile;
	class UPostProcessComponent*                  PostProcess_LOWPC;
	class USceneComponent*                        GenericLighting;
	float                                         Timeline_YawRotation_YawInterpAlpha_F13714DD4AFE0C9C8857E2950BEC127B;
	ETimelineDirection                            Timeline_YawRotation__Direction_F13714DD4AFE0C9C8857E2950BEC127B;
	uint8                                         Pad_41D[0x3];
	class UTimelineComponent*                     Timeline_YawRotation;
	float                                         Timeline_Zoom_ZoomLevel_6FFD6729471BD965D850258DA1C0AF39;
	ETimelineDirection                            Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39;
	uint8                                         Pad_42D[0x3];
	class UTimelineComponent*                     Timeline_Zoom;
	struct FVector                                CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714;
	struct FVector                                CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714;
	float                                         CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714;
	float                                         CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714;
	ETimelineDirection                            CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714;
	uint8                                         Pad_471[0x7];
	class UTimelineComponent*                     CameraTurn_180_to_360;
	struct FVector                                CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0;
	struct FVector                                CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0;
	float                                         CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0;
	float                                         CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0;
	ETimelineDirection                            CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0;
	uint8                                         Pad_4B9[0x7];
	class UTimelineComponent*                     CameraTurn_0_to_180;
	uint8                                         Pad_4C8[0x8];
	struct FTransform                             InitialCameraTransform;
	class USoundBase*                             ClockwiseSound;
	class USoundBase*                             CounterClockwiseSound;
	bool                                          DebugMobile_Lighting;
	bool                                          DebugLightingPC;
	bool                                          IsActive;
	bool                                          AlwaysOn;
	bool                                          DebugLighting_LOWDetailPC;
	uint8                                         Pad_545[0x3];
	double                                        TargetZoomLevel;
	struct FRotator                               StartingRotationOffset;
	struct FRotator                               TargetRotationOffset;

public:
	void UpdateSettings();
	void ToggleBackgroundText(bool bDisplayText);
	void SwitchPCLighting_LOWDetail(bool Visibility);
	void Timeline_Zoom__UpdateFunc();
	void SwitchPCLighting(bool Visibility);
	void Timeline_Zoom__FinishedFunc();
	void SwitchMobileLighting(bool Visibility);
	void Timeline_YawRotation__UpdateFunc();
	void SetBackgroundString(const class FText& CustomText);
	void Timeline_YawRotation__FinishedFunc();
	void OnTargetZoomLevelSet(float TargetZoomLevel_0);
	void SetBackgroundColor(const struct FLinearColor& RGBA0, const struct FLinearColor& RGBA1);
	void OnTargetZoomLevelCanceled();
	void ReceiveBeginPlay();
	void OnTargetRotationOffsetSet(const struct FRotator& TargetRotationOffset_0);
	void PlaySoundWhenEnabled(class USoundBase* sound);
	void OnUpdateBackgroundColor(bool bEnableAutotestBackground);
	void LightControl(bool Active);
	void OnTargetRotationOffsetCanceled();
	void ExecuteUbergraph_VaultRotator(int32 EntryPoint);
	void OnSetBackgroundMessageText(const class FText& BackgroundMessageText);
	void CameraTurn_180_to_360__UpdateFunc();
	void CameraTurn_180_to_360__FinishedFunc();
	void OnCameraTransitionReady(bool bPrimaryToSecondary, const class UFortAccountItemDefinition* PrimaryRequestedItem, const struct FSceneTransitionOptions& Options);
	void CameraTurn_0_to_180__UpdateFunc();
	void CameraTurn_0_to_180__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VaultRotator_C">();
	}
	static class AVaultRotator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVaultRotator_C>();
	}
};
static_assert(alignof(AVaultRotator_C) == 0x000010, "Wrong alignment on AVaultRotator_C");
static_assert(sizeof(AVaultRotator_C) == 0x000580, "Wrong size on AVaultRotator_C");
static_assert(offsetof(AVaultRotator_C, UberGraphFrame) == 0x0003C0, "Member 'AVaultRotator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, DirectionalLightMobile) == 0x0003C8, "Member 'AVaultRotator_C::DirectionalLightMobile' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, DirectionalLight_LOWPC) == 0x0003D0, "Member 'AVaultRotator_C::DirectionalLight_LOWPC' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, DirectionalLights) == 0x0003D8, "Member 'AVaultRotator_C::DirectionalLights' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, SkyLightLowMobile) == 0x0003E0, "Member 'AVaultRotator_C::SkyLightLowMobile' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, SkyLight) == 0x0003E8, "Member 'AVaultRotator_C::SkyLight' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, SkyLight_LOWPC) == 0x0003F0, "Member 'AVaultRotator_C::SkyLight_LOWPC' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, Arrow) == 0x0003F8, "Member 'AVaultRotator_C::Arrow' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, PostProcess_Mobile) == 0x000400, "Member 'AVaultRotator_C::PostProcess_Mobile' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, PostProcess_LOWPC) == 0x000408, "Member 'AVaultRotator_C::PostProcess_LOWPC' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, GenericLighting) == 0x000410, "Member 'AVaultRotator_C::GenericLighting' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, Timeline_YawRotation_YawInterpAlpha_F13714DD4AFE0C9C8857E2950BEC127B) == 0x000418, "Member 'AVaultRotator_C::Timeline_YawRotation_YawInterpAlpha_F13714DD4AFE0C9C8857E2950BEC127B' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, Timeline_YawRotation__Direction_F13714DD4AFE0C9C8857E2950BEC127B) == 0x00041C, "Member 'AVaultRotator_C::Timeline_YawRotation__Direction_F13714DD4AFE0C9C8857E2950BEC127B' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, Timeline_YawRotation) == 0x000420, "Member 'AVaultRotator_C::Timeline_YawRotation' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, Timeline_Zoom_ZoomLevel_6FFD6729471BD965D850258DA1C0AF39) == 0x000428, "Member 'AVaultRotator_C::Timeline_Zoom_ZoomLevel_6FFD6729471BD965D850258DA1C0AF39' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39) == 0x00042C, "Member 'AVaultRotator_C::Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, Timeline_Zoom) == 0x000430, "Member 'AVaultRotator_C::Timeline_Zoom' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714) == 0x000438, "Member 'AVaultRotator_C::CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714) == 0x000450, "Member 'AVaultRotator_C::CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714) == 0x000468, "Member 'AVaultRotator_C::CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714) == 0x00046C, "Member 'AVaultRotator_C::CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714) == 0x000470, "Member 'AVaultRotator_C::CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_180_to_360) == 0x000478, "Member 'AVaultRotator_C::CameraTurn_180_to_360' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0) == 0x000480, "Member 'AVaultRotator_C::CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0) == 0x000498, "Member 'AVaultRotator_C::CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0) == 0x0004B0, "Member 'AVaultRotator_C::CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0) == 0x0004B4, "Member 'AVaultRotator_C::CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0) == 0x0004B8, "Member 'AVaultRotator_C::CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_0_to_180) == 0x0004C0, "Member 'AVaultRotator_C::CameraTurn_0_to_180' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, InitialCameraTransform) == 0x0004D0, "Member 'AVaultRotator_C::InitialCameraTransform' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, ClockwiseSound) == 0x000530, "Member 'AVaultRotator_C::ClockwiseSound' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CounterClockwiseSound) == 0x000538, "Member 'AVaultRotator_C::CounterClockwiseSound' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, DebugMobile_Lighting) == 0x000540, "Member 'AVaultRotator_C::DebugMobile_Lighting' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, DebugLightingPC) == 0x000541, "Member 'AVaultRotator_C::DebugLightingPC' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, IsActive) == 0x000542, "Member 'AVaultRotator_C::IsActive' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, AlwaysOn) == 0x000543, "Member 'AVaultRotator_C::AlwaysOn' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, DebugLighting_LOWDetailPC) == 0x000544, "Member 'AVaultRotator_C::DebugLighting_LOWDetailPC' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, TargetZoomLevel) == 0x000548, "Member 'AVaultRotator_C::TargetZoomLevel' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, StartingRotationOffset) == 0x000550, "Member 'AVaultRotator_C::StartingRotationOffset' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, TargetRotationOffset) == 0x000568, "Member 'AVaultRotator_C::TargetRotationOffset' has a wrong offset!");

}
