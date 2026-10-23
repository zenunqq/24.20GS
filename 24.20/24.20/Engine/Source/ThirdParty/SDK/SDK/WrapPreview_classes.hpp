#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AWrapPreview_C final : public AAthenaWrapPreviewActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USkyLightComponent*                     SkyLightPC;
	class USkeletalMeshComponent*                 AssaultRiflePreview;
	class USkeletalMeshComponent*                 MechPreview;
	class USkyLightComponent*                     SkyLightLowMobile;
	class UArrowComponent*                        Arrow;
	class UDirectionalLightComponent*             DirectionalLightMobile;
	class USpotLightComponent*                    KeyLight_StandaloneForSwitch;
	class USpotLightComponent*                    KeyLigh4;
	class USpotLightComponent*                    KeyLight7;
	class USpotLightComponent*                    KeyLight8;
	class USpotLightComponent*                    KeyLight3;
	class USpotLightComponent*                    RimLowerRight2;
	class USpotLightComponent*                    RimLeft2;
	class USpotLightComponent*                    Bounce2;
	class USpotLightComponent*                    BounceRear2;
	class USpotLightComponent*                    RimTopRight2;
	class USpotLightComponent*                    RimBottomLeft2;
	class USceneComponent*                        LightingPivot;
	class UStaticMeshComponent*                   Plane;
	bool                                          bLightsScaledForVehicle;
	uint8                                         Pad_5C1[0x7];
	double                                        DeltaScale;
	bool                                          IsActive;
	bool                                          AlwaysOn;
	bool                                          FloorEverAllowed;
	bool                                          debugConstructionLighting;

public:
	void UpdateSettings();
	void UpdateLightingScale();
	void UpdateFloorVisibility();
	void SwitchPCLighting(bool Visibility);
	void OnUpdateFloorMaterial(bool bEnableAutotestBackground);
	void SwitchMobileLighting(bool NewParam);
	void OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance);
	void SwitchErebusLighting(bool Visibility);
	void OnPreviewVisualsSpawned(const bool bUseSecondaryTransitionEffects, const bool bShowFloor);
	void LightControl(bool Active);
	void SetFloorEnabled(bool Floor_Enabled);
	void HandleLightingScale();
	void ExecuteUbergraph_WrapPreview(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WrapPreview_C">();
	}
	static class AWrapPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWrapPreview_C>();
	}
};
static_assert(alignof(AWrapPreview_C) == 0x000010, "Wrong alignment on AWrapPreview_C");
static_assert(sizeof(AWrapPreview_C) == 0x0005E0, "Wrong size on AWrapPreview_C");
static_assert(offsetof(AWrapPreview_C, UberGraphFrame) == 0x000520, "Member 'AWrapPreview_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, SkyLightPC) == 0x000528, "Member 'AWrapPreview_C::SkyLightPC' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, AssaultRiflePreview) == 0x000530, "Member 'AWrapPreview_C::AssaultRiflePreview' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, MechPreview) == 0x000538, "Member 'AWrapPreview_C::MechPreview' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, SkyLightLowMobile) == 0x000540, "Member 'AWrapPreview_C::SkyLightLowMobile' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, Arrow) == 0x000548, "Member 'AWrapPreview_C::Arrow' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, DirectionalLightMobile) == 0x000550, "Member 'AWrapPreview_C::DirectionalLightMobile' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, KeyLight_StandaloneForSwitch) == 0x000558, "Member 'AWrapPreview_C::KeyLight_StandaloneForSwitch' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, KeyLigh4) == 0x000560, "Member 'AWrapPreview_C::KeyLigh4' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, KeyLight7) == 0x000568, "Member 'AWrapPreview_C::KeyLight7' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, KeyLight8) == 0x000570, "Member 'AWrapPreview_C::KeyLight8' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, KeyLight3) == 0x000578, "Member 'AWrapPreview_C::KeyLight3' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, RimLowerRight2) == 0x000580, "Member 'AWrapPreview_C::RimLowerRight2' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, RimLeft2) == 0x000588, "Member 'AWrapPreview_C::RimLeft2' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, Bounce2) == 0x000590, "Member 'AWrapPreview_C::Bounce2' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, BounceRear2) == 0x000598, "Member 'AWrapPreview_C::BounceRear2' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, RimTopRight2) == 0x0005A0, "Member 'AWrapPreview_C::RimTopRight2' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, RimBottomLeft2) == 0x0005A8, "Member 'AWrapPreview_C::RimBottomLeft2' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, LightingPivot) == 0x0005B0, "Member 'AWrapPreview_C::LightingPivot' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, Plane) == 0x0005B8, "Member 'AWrapPreview_C::Plane' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, bLightsScaledForVehicle) == 0x0005C0, "Member 'AWrapPreview_C::bLightsScaledForVehicle' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, DeltaScale) == 0x0005C8, "Member 'AWrapPreview_C::DeltaScale' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, IsActive) == 0x0005D0, "Member 'AWrapPreview_C::IsActive' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, AlwaysOn) == 0x0005D1, "Member 'AWrapPreview_C::AlwaysOn' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, FloorEverAllowed) == 0x0005D2, "Member 'AWrapPreview_C::FloorEverAllowed' has a wrong offset!");
static_assert(offsetof(AWrapPreview_C, debugConstructionLighting) == 0x0005D3, "Member 'AWrapPreview_C::debugConstructionLighting' has a wrong offset!");

}
