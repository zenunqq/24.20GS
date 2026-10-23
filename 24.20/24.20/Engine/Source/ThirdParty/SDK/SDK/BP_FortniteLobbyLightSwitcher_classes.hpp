#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class ABP_FortniteLobbyLightSwitcher_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;
	class ADirectionalLight*                      DirectionLight;
	class ASkyLight*                              SkyLight;
	TArray<class APointLight*>                    Pointlights;
	class AExponentialHeightFog*                  ExponentialHeightFog;
	class ADirectionalLight*                      DirectionalLight_LowDetailMode;
	TArray<class AEmitter*>                       ParticleSystems;
	bool                                          IsActive;
	bool                                          DebugLOWQualityLighting;
	uint8                                         Pad_2DA[0x6];
	class ASkyLight*                              SkyLight_LowDetailMode;
	class AExponentialHeightFog*                  ExponentialHeightfog_LowDetailMode;
	bool                                          LOW_FX_Setting_Use_MobileLighting;
	bool                                          IsLightalreadyActive;
	uint8                                         Pad_2F2[0x2];
	struct FLinearColor                           MPC_ManualSunlightVector;
	struct FLinearColor                           MPC_ManualSunlightColor;

public:
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UpdateSettings();
	void ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int32 EntryPoint);
	void SetVisiblityofSceneLighting(bool Activate);
	void EnableLobbySetLighting();
	void SetVisiblityofDetailSpecificMeshes();
	void DisableLobbySetLighting();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortniteLobbyLightSwitcher_C">();
	}
	static class ABP_FortniteLobbyLightSwitcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FortniteLobbyLightSwitcher_C>();
	}
};
static_assert(alignof(ABP_FortniteLobbyLightSwitcher_C) == 0x000008, "Wrong alignment on ABP_FortniteLobbyLightSwitcher_C");
static_assert(sizeof(ABP_FortniteLobbyLightSwitcher_C) == 0x000318, "Wrong size on ABP_FortniteLobbyLightSwitcher_C");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, UberGraphFrame) == 0x000288, "Member 'ABP_FortniteLobbyLightSwitcher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, DefaultSceneRoot) == 0x000290, "Member 'ABP_FortniteLobbyLightSwitcher_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, DirectionLight) == 0x000298, "Member 'ABP_FortniteLobbyLightSwitcher_C::DirectionLight' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, SkyLight) == 0x0002A0, "Member 'ABP_FortniteLobbyLightSwitcher_C::SkyLight' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, Pointlights) == 0x0002A8, "Member 'ABP_FortniteLobbyLightSwitcher_C::Pointlights' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, ExponentialHeightFog) == 0x0002B8, "Member 'ABP_FortniteLobbyLightSwitcher_C::ExponentialHeightFog' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, DirectionalLight_LowDetailMode) == 0x0002C0, "Member 'ABP_FortniteLobbyLightSwitcher_C::DirectionalLight_LowDetailMode' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, ParticleSystems) == 0x0002C8, "Member 'ABP_FortniteLobbyLightSwitcher_C::ParticleSystems' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, IsActive) == 0x0002D8, "Member 'ABP_FortniteLobbyLightSwitcher_C::IsActive' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, DebugLOWQualityLighting) == 0x0002D9, "Member 'ABP_FortniteLobbyLightSwitcher_C::DebugLOWQualityLighting' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, SkyLight_LowDetailMode) == 0x0002E0, "Member 'ABP_FortniteLobbyLightSwitcher_C::SkyLight_LowDetailMode' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, ExponentialHeightfog_LowDetailMode) == 0x0002E8, "Member 'ABP_FortniteLobbyLightSwitcher_C::ExponentialHeightfog_LowDetailMode' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, LOW_FX_Setting_Use_MobileLighting) == 0x0002F0, "Member 'ABP_FortniteLobbyLightSwitcher_C::LOW_FX_Setting_Use_MobileLighting' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, IsLightalreadyActive) == 0x0002F1, "Member 'ABP_FortniteLobbyLightSwitcher_C::IsLightalreadyActive' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, MPC_ManualSunlightVector) == 0x0002F4, "Member 'ABP_FortniteLobbyLightSwitcher_C::MPC_ManualSunlightVector' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, MPC_ManualSunlightColor) == 0x000304, "Member 'ABP_FortniteLobbyLightSwitcher_C::MPC_ManualSunlightColor' has a wrong offset!");

}
