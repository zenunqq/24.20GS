#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AItemOnPawnPreview_C final : public AFortItemPreviewOnPawnActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UArrowComponent*                        Arrow1;
	class UDirectionalLightComponent*             Directional_Light_For_Atmosphere_PC;
	class USkyLightComponent*                     SkyLightPC;
	class UArrowComponent*                        Arrow;
	class USkyLightComponent*                     SkyLightLowMobile;
	class UDirectionalLightComponent*             DirectionalLightMobile;
	class USpotLightComponent*                    KeyLight_StandaloneForSwitch;
	class USpotLightComponent*                    KeyLight5;
	class USpotLightComponent*                    KeyLight6;
	class USpotLightComponent*                    KeyLigh3;
	class USpotLightComponent*                    KeyLight2;
	class USpotLightComponent*                    BounceRear1;
	class USpotLightComponent*                    RimLowerRight1;
	class USpotLightComponent*                    RimLeft1;
	class USpotLightComponent*                    RimTopRight1;
	class USpotLightComponent*                    RimBottomLeft1;
	class USpotLightComponent*                    Bounce1;
	class USceneComponent*                        LightTransform;
	class UStaticMeshComponent*                   Plane;
	class USkeletalMeshComponent*                 Sample_Mesh;
	bool                                          AlwaysOn;
	bool                                          IsActive;
	bool                                          debugConstructionLighting;
	uint8                                         Pad_71B[0x5];
	class UParticleSystemComponent*               ObscuringLoopEmitter;
	struct FRotator                               ToonLightRotatio;
	bool                                          bIsBattlePassReward;
	uint8                                         Pad_741[0x7];
	struct FTimerHandle                           LOD_StreamingSafetyTimer;
	class UMaterialInterface*                     DefaultFloorMaterial;
	class UMaterialInterface*                     CustomFloorMaterial;

public:
	void SetFloorEnabled(bool Show_Floor);
	void ReceiveBeginPlay();
	void UpdateSettings();
	void OnUpdateFloorMaterial(bool bEnableAutotestBackground);
	void SwitchPCLighting(bool Visibility);
	void OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance);
	void SwitchMobileLighting(bool NewParam);
	void OnPreviewVisualsSpawned(const bool bUseSecondaryTransitionEffects, const bool bShowFloor);
	void SwitchErebusLighting(bool Visibility);
	void Get_LOD_Streaming_Safety_Duration();
	void OnCurrentVisualsCleanedUp();
	void ExecuteUbergraph_ItemOnPawnPreview(int32 EntryPoint);
	void OnAllLODStreamingComplete();
	void Backup_LODStreamingFailed();
	void LightControl(bool Active);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemOnPawnPreview_C">();
	}
	static class AItemOnPawnPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AItemOnPawnPreview_C>();
	}
};
static_assert(alignof(AItemOnPawnPreview_C) == 0x000010, "Wrong alignment on AItemOnPawnPreview_C");
static_assert(sizeof(AItemOnPawnPreview_C) == 0x000760, "Wrong size on AItemOnPawnPreview_C");
static_assert(offsetof(AItemOnPawnPreview_C, UberGraphFrame) == 0x000670, "Member 'AItemOnPawnPreview_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, Arrow1) == 0x000678, "Member 'AItemOnPawnPreview_C::Arrow1' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, Directional_Light_For_Atmosphere_PC) == 0x000680, "Member 'AItemOnPawnPreview_C::Directional_Light_For_Atmosphere_PC' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, SkyLightPC) == 0x000688, "Member 'AItemOnPawnPreview_C::SkyLightPC' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, Arrow) == 0x000690, "Member 'AItemOnPawnPreview_C::Arrow' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, SkyLightLowMobile) == 0x000698, "Member 'AItemOnPawnPreview_C::SkyLightLowMobile' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, DirectionalLightMobile) == 0x0006A0, "Member 'AItemOnPawnPreview_C::DirectionalLightMobile' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, KeyLight_StandaloneForSwitch) == 0x0006A8, "Member 'AItemOnPawnPreview_C::KeyLight_StandaloneForSwitch' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, KeyLight5) == 0x0006B0, "Member 'AItemOnPawnPreview_C::KeyLight5' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, KeyLight6) == 0x0006B8, "Member 'AItemOnPawnPreview_C::KeyLight6' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, KeyLigh3) == 0x0006C0, "Member 'AItemOnPawnPreview_C::KeyLigh3' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, KeyLight2) == 0x0006C8, "Member 'AItemOnPawnPreview_C::KeyLight2' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, BounceRear1) == 0x0006D0, "Member 'AItemOnPawnPreview_C::BounceRear1' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, RimLowerRight1) == 0x0006D8, "Member 'AItemOnPawnPreview_C::RimLowerRight1' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, RimLeft1) == 0x0006E0, "Member 'AItemOnPawnPreview_C::RimLeft1' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, RimTopRight1) == 0x0006E8, "Member 'AItemOnPawnPreview_C::RimTopRight1' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, RimBottomLeft1) == 0x0006F0, "Member 'AItemOnPawnPreview_C::RimBottomLeft1' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, Bounce1) == 0x0006F8, "Member 'AItemOnPawnPreview_C::Bounce1' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, LightTransform) == 0x000700, "Member 'AItemOnPawnPreview_C::LightTransform' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, Plane) == 0x000708, "Member 'AItemOnPawnPreview_C::Plane' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, Sample_Mesh) == 0x000710, "Member 'AItemOnPawnPreview_C::Sample_Mesh' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, AlwaysOn) == 0x000718, "Member 'AItemOnPawnPreview_C::AlwaysOn' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, IsActive) == 0x000719, "Member 'AItemOnPawnPreview_C::IsActive' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, debugConstructionLighting) == 0x00071A, "Member 'AItemOnPawnPreview_C::debugConstructionLighting' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, ObscuringLoopEmitter) == 0x000720, "Member 'AItemOnPawnPreview_C::ObscuringLoopEmitter' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, ToonLightRotatio) == 0x000728, "Member 'AItemOnPawnPreview_C::ToonLightRotatio' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, bIsBattlePassReward) == 0x000740, "Member 'AItemOnPawnPreview_C::bIsBattlePassReward' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, LOD_StreamingSafetyTimer) == 0x000748, "Member 'AItemOnPawnPreview_C::LOD_StreamingSafetyTimer' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, DefaultFloorMaterial) == 0x000750, "Member 'AItemOnPawnPreview_C::DefaultFloorMaterial' has a wrong offset!");
static_assert(offsetof(AItemOnPawnPreview_C, CustomFloorMaterial) == 0x000758, "Member 'AItemOnPawnPreview_C::CustomFloorMaterial' has a wrong offset!");

}
