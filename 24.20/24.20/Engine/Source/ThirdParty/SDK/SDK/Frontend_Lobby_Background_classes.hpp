#pragma once

#include "Basic.hpp"

#include "FrontendBackgroundData_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFrontend_Lobby_Background_C final : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	float                                         FadeIn_Fade_3606FDF647A6577B9DAC47B89146CD85;
	ETimelineDirection                            FadeIn__Direction_3606FDF647A6577B9DAC47B89146CD85;
	uint8                                         Pad_2AD[0x3];
	class UTimelineComponent*                     FadeIn;
	float                                         FadeOut_Fade_44D3B05B49031FA3891648AB32F57584;
	ETimelineDirection                            FadeOut__Direction_44D3B05B49031FA3891648AB32F57584;
	uint8                                         Pad_2BD[0x3];
	class UTimelineComponent*                     FadeOut;
	double                                        FadetoBlackFloor;
	double                                        FadeGrid;
	double                                        FadeGrid_Targetvalue;
	double                                        FadetoBlackFloor_TargetValue;
	class FString                                 PresetEnvironment;
	class UTexture*                               Texture;
	class UMaterialInstance*                      Material;
	class UMaterialInstance*                      PreBlueMaterial;
	TMap<class FString, struct FFrontendBackgroundData> Backgrounds;
	class ABP_FrontendBackPlate_C*                Six_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty;
	class AEmitter*                               P_Storm_Rain_01_5_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty;
	class AEmitter*                               P_Snow_Ambient_Lobby_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty;
	class ANiagaraActor*                          NS_SideWays_Volume_InFrontEnd_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty;
	class AFortStaticMeshActor*                   SM_Sideways_Smoke_FrontEnd_159_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty;
	class AFortStaticMeshActor*                   SM_Mother_Crash_BlinkingLights_01_3_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty;
	class ANiagaraActor*                          NiagaraActor_3_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty;
	class AFortStaticMeshActor*                   SM_Sideways_Smoke_FrontEnd_0_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty;
	class ANiagaraActor*                          NiagaraActor_1_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty;
	class ANiagaraActor*                          NiagaraActor_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty;
	class ANiagaraActor*                          NiagaraActor_4_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty;
	class ABP_FrontendBackPlate_C*                Six_Setup_Basic_Background_Data_MERGED_RefProperty;
	class ABP_FrontendBackPlate_C*                Six_SetupGalileo_MERGED_RefProperty;
	class ABP_FrontendBackPlate_C*                Six_SetupSpecialEventBackgroundData_MERGED_RefProperty;
	class ABP_FrontendBackPlate_C*                Six_SetupBasicBackgroundDataWithRenderTarget_MERGED_RefProperty;
	class ABP_FrontendBackPlate_C*                Six_SetupSpecialEventBackgroundDataWithRenderTarget_MERGED_RefProperty;

public:
	void BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(const class FString& PresetEnvironmentName);
	void BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(class UTexture* BackgroundImage);
	void BndEvt__Frontend_Lobby_Background_CMSLobbyDirector_3_K2Node_ActorBoundEvent_2_OnLobbyDataChanged__DelegateSignature(const struct FFrontendLobbyData& LobbyData);
	void ContinueBackgroundSetup();
	void Convert_Legacy_Frontend_Background_Data(const struct FFrontendBackgroundData& Legacy_Frontend_Background_Data, struct FFrontendLobbyData* Frontend_Lobby_Data);
	void ExecuteUbergraph_Frontend_Lobby_Background(int32 EntryPoint);
	void FadeFromBlue();
	void FadeIn__FinishedFunc();
	void FadeIn__UpdateFunc();
	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void LoadAssets(TSoftObjectPtr<class UTexture> InTexture, TSoftObjectPtr<class UMaterialInstance> InMaterial, TSoftObjectPtr<class UMaterialInstance> InPreBlurMaterial);
	void LoadBackgroundData();
	void OnLoaded_1CC0D8274FA1EFC9AE28C89FDF518A70(class UObject* Loaded);
	void OnLoaded_7B16DAE04937EECB604410A2EC352CE3(class UObject* Loaded);
	void OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99(class UObject* Loaded);
	void OnLoaded_E5F1E80A4DD36718D41FF68F137C4775(class UObject* Loaded);
	void ReceiveBeginPlay();
	void SetShowPedestalSparkles(bool Show);
	void Setup_Basic_Background_Data(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue);
	void SetupBasicBackgroundDataWithRenderTarget(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue);
	void SetupGalileo();
	void SetupSpecialEventBackgroundData(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue);
	void SetupSpecialEventBackgroundDataWithRenderTarget(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue);
	void TestDynColor();
	void UpdateFade(double FadeValue, double FadeFloorToBlack, double InFadeGrid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Frontend_Lobby_Background_C">();
	}
	static class AFrontend_Lobby_Background_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontend_Lobby_Background_C>();
	}
};
static_assert(alignof(AFrontend_Lobby_Background_C) == 0x000008, "Wrong alignment on AFrontend_Lobby_Background_C");
static_assert(sizeof(AFrontend_Lobby_Background_C) == 0x0003E0, "Wrong size on AFrontend_Lobby_Background_C");
static_assert(offsetof(AFrontend_Lobby_Background_C, UberGraphFrame) == 0x0002A0, "Member 'AFrontend_Lobby_Background_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeIn_Fade_3606FDF647A6577B9DAC47B89146CD85) == 0x0002A8, "Member 'AFrontend_Lobby_Background_C::FadeIn_Fade_3606FDF647A6577B9DAC47B89146CD85' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeIn__Direction_3606FDF647A6577B9DAC47B89146CD85) == 0x0002AC, "Member 'AFrontend_Lobby_Background_C::FadeIn__Direction_3606FDF647A6577B9DAC47B89146CD85' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeIn) == 0x0002B0, "Member 'AFrontend_Lobby_Background_C::FadeIn' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeOut_Fade_44D3B05B49031FA3891648AB32F57584) == 0x0002B8, "Member 'AFrontend_Lobby_Background_C::FadeOut_Fade_44D3B05B49031FA3891648AB32F57584' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeOut__Direction_44D3B05B49031FA3891648AB32F57584) == 0x0002BC, "Member 'AFrontend_Lobby_Background_C::FadeOut__Direction_44D3B05B49031FA3891648AB32F57584' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeOut) == 0x0002C0, "Member 'AFrontend_Lobby_Background_C::FadeOut' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadetoBlackFloor) == 0x0002C8, "Member 'AFrontend_Lobby_Background_C::FadetoBlackFloor' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeGrid) == 0x0002D0, "Member 'AFrontend_Lobby_Background_C::FadeGrid' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeGrid_Targetvalue) == 0x0002D8, "Member 'AFrontend_Lobby_Background_C::FadeGrid_Targetvalue' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadetoBlackFloor_TargetValue) == 0x0002E0, "Member 'AFrontend_Lobby_Background_C::FadetoBlackFloor_TargetValue' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, PresetEnvironment) == 0x0002E8, "Member 'AFrontend_Lobby_Background_C::PresetEnvironment' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, Texture) == 0x0002F8, "Member 'AFrontend_Lobby_Background_C::Texture' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, Material) == 0x000300, "Member 'AFrontend_Lobby_Background_C::Material' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, PreBlueMaterial) == 0x000308, "Member 'AFrontend_Lobby_Background_C::PreBlueMaterial' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, Backgrounds) == 0x000310, "Member 'AFrontend_Lobby_Background_C::Backgrounds' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, Six_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty) == 0x000360, "Member 'AFrontend_Lobby_Background_C::Six_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, P_Storm_Rain_01_5_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty) == 0x000368, "Member 'AFrontend_Lobby_Background_C::P_Storm_Rain_01_5_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, P_Snow_Ambient_Lobby_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty) == 0x000370, "Member 'AFrontend_Lobby_Background_C::P_Snow_Ambient_Lobby_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, NS_SideWays_Volume_InFrontEnd_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty) == 0x000378, "Member 'AFrontend_Lobby_Background_C::NS_SideWays_Volume_InFrontEnd_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, SM_Sideways_Smoke_FrontEnd_159_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty) == 0x000380, "Member 'AFrontend_Lobby_Background_C::SM_Sideways_Smoke_FrontEnd_159_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, SM_Mother_Crash_BlinkingLights_01_3_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty) == 0x000388, "Member 'AFrontend_Lobby_Background_C::SM_Mother_Crash_BlinkingLights_01_3_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, NiagaraActor_3_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty) == 0x000390, "Member 'AFrontend_Lobby_Background_C::NiagaraActor_3_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, SM_Sideways_Smoke_FrontEnd_0_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty) == 0x000398, "Member 'AFrontend_Lobby_Background_C::SM_Sideways_Smoke_FrontEnd_0_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, NiagaraActor_1_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty) == 0x0003A0, "Member 'AFrontend_Lobby_Background_C::NiagaraActor_1_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, NiagaraActor_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty) == 0x0003A8, "Member 'AFrontend_Lobby_Background_C::NiagaraActor_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, NiagaraActor_4_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty) == 0x0003B0, "Member 'AFrontend_Lobby_Background_C::NiagaraActor_4_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, Six_Setup_Basic_Background_Data_MERGED_RefProperty) == 0x0003B8, "Member 'AFrontend_Lobby_Background_C::Six_Setup_Basic_Background_Data_MERGED_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, Six_SetupGalileo_MERGED_RefProperty) == 0x0003C0, "Member 'AFrontend_Lobby_Background_C::Six_SetupGalileo_MERGED_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, Six_SetupSpecialEventBackgroundData_MERGED_RefProperty) == 0x0003C8, "Member 'AFrontend_Lobby_Background_C::Six_SetupSpecialEventBackgroundData_MERGED_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, Six_SetupBasicBackgroundDataWithRenderTarget_MERGED_RefProperty) == 0x0003D0, "Member 'AFrontend_Lobby_Background_C::Six_SetupBasicBackgroundDataWithRenderTarget_MERGED_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, Six_SetupSpecialEventBackgroundDataWithRenderTarget_MERGED_RefProperty) == 0x0003D8, "Member 'AFrontend_Lobby_Background_C::Six_SetupSpecialEventBackgroundDataWithRenderTarget_MERGED_RefProperty' has a wrong offset!");

}
