#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class AVaultCharacterLightingBP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UArrowComponent*                        Arrow1;
	class USpotLightComponent*                    KeyLight4;
	class USpotLightComponent*                    KeyLight3;
	class USpotLightComponent*                    KeyLight2;
	class UPostProcessComponent*                  PostProcess_Mobile;
	class UPostProcessComponent*                  PostProcess_LOWPC;
	class USkyLightComponent*                     SkyLight_LOWPC;
	class UDirectionalLightComponent*             DirectionalLight_LOWPC;
	class UArrowComponent*                        Arrow;
	class UDirectionalLightComponent*             DirectionalLightMobile;
	class USkyLightComponent*                     SkyLightLowMobil;
	class USkyLightComponent*                     SkyLight;
	class USpotLightComponent*                    RimLowerRight;
	class USpotLightComponent*                    RimLeft;
	class USpotLightComponent*                    RimTopRight;
	class USpotLightComponent*                    RimBottomLeft;
	class USpotLightComponent*                    KeyLight;
	class USpotLightComponent*                    Bounce;
	class USpotLightComponent*                    BounceRear;
	class USceneComponent*                        SharedRoot;
	bool                                          DebugMobile_Lighting;
	bool                                          DebugLightingPC;
	bool                                          IsActive;
	bool                                          AlwaysOn;
	bool                                          DebugLighting_LOWDetailPC;
	uint8                                         Pad_335[0x3];
	struct FLinearColor                           MPC_ManualSunlightVector;
	struct FLinearColor                           MPC_ManualSunlightColor;

public:
	void UserConstructionScript();
	void UpdateSettings();
	void ToggleLighting();
	void SwitchPCLighting_LOWDetail(bool Visibility);
	void SwitchPCLighting(bool Visibility);
	void SwitchMobileLighting(bool Visibilty);
	void ReceiveBeginPlay();
	void OVERRIDELIGHTING();
	void LightControl(bool NewParam);
	void ExecuteUbergraph_VaultCharacterLightingBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VaultCharacterLightingBP_C">();
	}
	static class AVaultCharacterLightingBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVaultCharacterLightingBP_C>();
	}
};
static_assert(alignof(AVaultCharacterLightingBP_C) == 0x000008, "Wrong alignment on AVaultCharacterLightingBP_C");
static_assert(sizeof(AVaultCharacterLightingBP_C) == 0x000358, "Wrong size on AVaultCharacterLightingBP_C");
static_assert(offsetof(AVaultCharacterLightingBP_C, UberGraphFrame) == 0x000288, "Member 'AVaultCharacterLightingBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, Arrow1) == 0x000290, "Member 'AVaultCharacterLightingBP_C::Arrow1' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, KeyLight4) == 0x000298, "Member 'AVaultCharacterLightingBP_C::KeyLight4' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, KeyLight3) == 0x0002A0, "Member 'AVaultCharacterLightingBP_C::KeyLight3' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, KeyLight2) == 0x0002A8, "Member 'AVaultCharacterLightingBP_C::KeyLight2' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, PostProcess_Mobile) == 0x0002B0, "Member 'AVaultCharacterLightingBP_C::PostProcess_Mobile' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, PostProcess_LOWPC) == 0x0002B8, "Member 'AVaultCharacterLightingBP_C::PostProcess_LOWPC' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, SkyLight_LOWPC) == 0x0002C0, "Member 'AVaultCharacterLightingBP_C::SkyLight_LOWPC' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, DirectionalLight_LOWPC) == 0x0002C8, "Member 'AVaultCharacterLightingBP_C::DirectionalLight_LOWPC' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, Arrow) == 0x0002D0, "Member 'AVaultCharacterLightingBP_C::Arrow' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, DirectionalLightMobile) == 0x0002D8, "Member 'AVaultCharacterLightingBP_C::DirectionalLightMobile' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, SkyLightLowMobil) == 0x0002E0, "Member 'AVaultCharacterLightingBP_C::SkyLightLowMobil' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, SkyLight) == 0x0002E8, "Member 'AVaultCharacterLightingBP_C::SkyLight' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, RimLowerRight) == 0x0002F0, "Member 'AVaultCharacterLightingBP_C::RimLowerRight' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, RimLeft) == 0x0002F8, "Member 'AVaultCharacterLightingBP_C::RimLeft' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, RimTopRight) == 0x000300, "Member 'AVaultCharacterLightingBP_C::RimTopRight' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, RimBottomLeft) == 0x000308, "Member 'AVaultCharacterLightingBP_C::RimBottomLeft' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, KeyLight) == 0x000310, "Member 'AVaultCharacterLightingBP_C::KeyLight' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, Bounce) == 0x000318, "Member 'AVaultCharacterLightingBP_C::Bounce' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, BounceRear) == 0x000320, "Member 'AVaultCharacterLightingBP_C::BounceRear' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, SharedRoot) == 0x000328, "Member 'AVaultCharacterLightingBP_C::SharedRoot' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, DebugMobile_Lighting) == 0x000330, "Member 'AVaultCharacterLightingBP_C::DebugMobile_Lighting' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, DebugLightingPC) == 0x000331, "Member 'AVaultCharacterLightingBP_C::DebugLightingPC' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, IsActive) == 0x000332, "Member 'AVaultCharacterLightingBP_C::IsActive' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, AlwaysOn) == 0x000333, "Member 'AVaultCharacterLightingBP_C::AlwaysOn' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, DebugLighting_LOWDetailPC) == 0x000334, "Member 'AVaultCharacterLightingBP_C::DebugLighting_LOWDetailPC' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, MPC_ManualSunlightVector) == 0x000338, "Member 'AVaultCharacterLightingBP_C::MPC_ManualSunlightVector' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, MPC_ManualSunlightColor) == 0x000348, "Member 'AVaultCharacterLightingBP_C::MPC_ManualSunlightColor' has a wrong offset!");

}
