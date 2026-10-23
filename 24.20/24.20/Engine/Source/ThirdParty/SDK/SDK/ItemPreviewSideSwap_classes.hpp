#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class AItemPreviewSideSwap_C final : public AItemPreviewSwapper
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UPostProcessComponent*                  PostProcess_Mobile;
	class USkyLightComponent*                     SkyLightLowMobile;
	class USkyLightComponent*                     SkyLight;
	class USkyLightComponent*                     SkyLight_LOWPC;
	class UArrowComponent*                        Arrow;
	class UPostProcessComponent*                  PostProcess_LOWPC;
	class UDirectionalLightComponent*             DirectionalLight_LOWPC;
	class UDirectionalLightComponent*             DirectionalLightMobile;
	class USceneComponent*                        DirectionalLights;
	class USceneComponent*                        GenericLighting;
	float                                         Timeline_1_RotationOffsetLerp_F81FDC884C74C17EBF78B0B928138870;
	ETimelineDirection                            Timeline_1__Direction_F81FDC884C74C17EBF78B0B928138870;
	uint8                                         Pad_425[0x3];
	class UTimelineComponent*                     Timeline_1;
	float                                         Timeline_0_ZoomLevel_F92CF88A423F8300F5A67CB744A0DA45;
	ETimelineDirection                            Timeline_0__Direction_F92CF88A423F8300F5A67CB744A0DA45;
	uint8                                         Pad_435[0x3];
	class UTimelineComponent*                     Timeline_0;
	struct FVector                                MoveOutRight_Location_89D9209D4024EFFF08326CBAE53949F1;
	ETimelineDirection                            MoveOutRight__Direction_89D9209D4024EFFF08326CBAE53949F1;
	uint8                                         Pad_459[0x7];
	class UTimelineComponent*                     MoveOutRight;
	struct FVector                                MoveInRight_Location_3FE1D8EB4B6BCBA0C3D120B521728FCE;
	ETimelineDirection                            MoveInRight__Direction_3FE1D8EB4B6BCBA0C3D120B521728FCE;
	uint8                                         Pad_481[0x7];
	class UTimelineComponent*                     MoveInRight;
	struct FVector                                MoveInLeft_Location_B344DA1A46B3CB2F19E2E0A1F7E36A47;
	ETimelineDirection                            MoveInLeft__Direction_B344DA1A46B3CB2F19E2E0A1F7E36A47;
	uint8                                         Pad_4A9[0x7];
	class UTimelineComponent*                     MoveInLeft;
	struct FVector                                MoveOutLeft_Location_6890893D4037128B5CB3B2AE9A4AE0A1;
	ETimelineDirection                            MoveOutLeft__Direction_6890893D4037128B5CB3B2AE9A4AE0A1;
	uint8                                         Pad_4D1[0x7];
	class UTimelineComponent*                     MoveOutLeft;
	bool                                          DebugMobile_Lighting;
	bool                                          DebugLightingPC;
	bool                                          IsActive;
	bool                                          AlwaysOn;
	bool                                          DebugLighting_LOWDetailPC;
	uint8                                         Pad_4E5[0x3];
	TMulticastInlineDelegate<void(bool Should_Show_Floor)> On_New_Item_Spawned;
	double                                        CurrentZoomLevel;
	double                                        TargetZoomLevel;
	struct FRotator                               TargetRotationOffset;
	struct FRotator                               OrigRotationOffset;
	class UFortAccountItemDefinition*             Primary_Requested_Item;
	class UFortAccountItemDefinition*             Previous_Requested_Item;

public:
	void UpdateSettings();
	void Timeline_1__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void SwitchPCLighting(bool Visibility);
	void Timeline_0__FinishedFunc();
	void SwitchMobileLighting(bool Visibility);
	void SwitchPCLighting_LOWDetail(bool Visibility);
	void OnReadyToSwap(const class UFortAccountItemDefinition* PrimaryRequestedItem, const struct FSceneTransitionOptions& Options);
	void ReceiveBeginPlay();
	void OnNewSceneRequested(const class UFortAccountItemDefinition* PrimaryRequestedItem, const struct FSceneTransitionOptions& TransitionOptions);
	void OnTargetZoomLevelSet(float TargetZoomLevel_0);
	void OnTargetRotationOffsetSet(const struct FRotator& TargetRotationOffset_0);
	void MoveOutLeft__UpdateFunc();
	void MoveOutRight__UpdateFunc();
	void MoveOutLeft__FinishedFunc();
	void MoveOutRight__FinishedFunc();
	void MoveInRight__UpdateFunc();
	void MoveInRight__FinishedFunc();
	void MoveInLeft__UpdateFunc();
	void MoveInLeft__FinishedFunc();
	void LightControl(bool Active);
	void ExecuteUbergraph_ItemPreviewSideSwap(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemPreviewSideSwap_C">();
	}
	static class AItemPreviewSideSwap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AItemPreviewSideSwap_C>();
	}
};
static_assert(alignof(AItemPreviewSideSwap_C) == 0x000008, "Wrong alignment on AItemPreviewSideSwap_C");
static_assert(sizeof(AItemPreviewSideSwap_C) == 0x000548, "Wrong size on AItemPreviewSideSwap_C");
static_assert(offsetof(AItemPreviewSideSwap_C, UberGraphFrame) == 0x0003C8, "Member 'AItemPreviewSideSwap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, PostProcess_Mobile) == 0x0003D0, "Member 'AItemPreviewSideSwap_C::PostProcess_Mobile' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, SkyLightLowMobile) == 0x0003D8, "Member 'AItemPreviewSideSwap_C::SkyLightLowMobile' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, SkyLight) == 0x0003E0, "Member 'AItemPreviewSideSwap_C::SkyLight' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, SkyLight_LOWPC) == 0x0003E8, "Member 'AItemPreviewSideSwap_C::SkyLight_LOWPC' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, Arrow) == 0x0003F0, "Member 'AItemPreviewSideSwap_C::Arrow' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, PostProcess_LOWPC) == 0x0003F8, "Member 'AItemPreviewSideSwap_C::PostProcess_LOWPC' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, DirectionalLight_LOWPC) == 0x000400, "Member 'AItemPreviewSideSwap_C::DirectionalLight_LOWPC' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, DirectionalLightMobile) == 0x000408, "Member 'AItemPreviewSideSwap_C::DirectionalLightMobile' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, DirectionalLights) == 0x000410, "Member 'AItemPreviewSideSwap_C::DirectionalLights' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, GenericLighting) == 0x000418, "Member 'AItemPreviewSideSwap_C::GenericLighting' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, Timeline_1_RotationOffsetLerp_F81FDC884C74C17EBF78B0B928138870) == 0x000420, "Member 'AItemPreviewSideSwap_C::Timeline_1_RotationOffsetLerp_F81FDC884C74C17EBF78B0B928138870' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, Timeline_1__Direction_F81FDC884C74C17EBF78B0B928138870) == 0x000424, "Member 'AItemPreviewSideSwap_C::Timeline_1__Direction_F81FDC884C74C17EBF78B0B928138870' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, Timeline_1) == 0x000428, "Member 'AItemPreviewSideSwap_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, Timeline_0_ZoomLevel_F92CF88A423F8300F5A67CB744A0DA45) == 0x000430, "Member 'AItemPreviewSideSwap_C::Timeline_0_ZoomLevel_F92CF88A423F8300F5A67CB744A0DA45' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, Timeline_0__Direction_F92CF88A423F8300F5A67CB744A0DA45) == 0x000434, "Member 'AItemPreviewSideSwap_C::Timeline_0__Direction_F92CF88A423F8300F5A67CB744A0DA45' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, Timeline_0) == 0x000438, "Member 'AItemPreviewSideSwap_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, MoveOutRight_Location_89D9209D4024EFFF08326CBAE53949F1) == 0x000440, "Member 'AItemPreviewSideSwap_C::MoveOutRight_Location_89D9209D4024EFFF08326CBAE53949F1' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, MoveOutRight__Direction_89D9209D4024EFFF08326CBAE53949F1) == 0x000458, "Member 'AItemPreviewSideSwap_C::MoveOutRight__Direction_89D9209D4024EFFF08326CBAE53949F1' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, MoveOutRight) == 0x000460, "Member 'AItemPreviewSideSwap_C::MoveOutRight' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, MoveInRight_Location_3FE1D8EB4B6BCBA0C3D120B521728FCE) == 0x000468, "Member 'AItemPreviewSideSwap_C::MoveInRight_Location_3FE1D8EB4B6BCBA0C3D120B521728FCE' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, MoveInRight__Direction_3FE1D8EB4B6BCBA0C3D120B521728FCE) == 0x000480, "Member 'AItemPreviewSideSwap_C::MoveInRight__Direction_3FE1D8EB4B6BCBA0C3D120B521728FCE' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, MoveInRight) == 0x000488, "Member 'AItemPreviewSideSwap_C::MoveInRight' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, MoveInLeft_Location_B344DA1A46B3CB2F19E2E0A1F7E36A47) == 0x000490, "Member 'AItemPreviewSideSwap_C::MoveInLeft_Location_B344DA1A46B3CB2F19E2E0A1F7E36A47' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, MoveInLeft__Direction_B344DA1A46B3CB2F19E2E0A1F7E36A47) == 0x0004A8, "Member 'AItemPreviewSideSwap_C::MoveInLeft__Direction_B344DA1A46B3CB2F19E2E0A1F7E36A47' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, MoveInLeft) == 0x0004B0, "Member 'AItemPreviewSideSwap_C::MoveInLeft' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, MoveOutLeft_Location_6890893D4037128B5CB3B2AE9A4AE0A1) == 0x0004B8, "Member 'AItemPreviewSideSwap_C::MoveOutLeft_Location_6890893D4037128B5CB3B2AE9A4AE0A1' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, MoveOutLeft__Direction_6890893D4037128B5CB3B2AE9A4AE0A1) == 0x0004D0, "Member 'AItemPreviewSideSwap_C::MoveOutLeft__Direction_6890893D4037128B5CB3B2AE9A4AE0A1' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, MoveOutLeft) == 0x0004D8, "Member 'AItemPreviewSideSwap_C::MoveOutLeft' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, DebugMobile_Lighting) == 0x0004E0, "Member 'AItemPreviewSideSwap_C::DebugMobile_Lighting' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, DebugLightingPC) == 0x0004E1, "Member 'AItemPreviewSideSwap_C::DebugLightingPC' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, IsActive) == 0x0004E2, "Member 'AItemPreviewSideSwap_C::IsActive' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, AlwaysOn) == 0x0004E3, "Member 'AItemPreviewSideSwap_C::AlwaysOn' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, DebugLighting_LOWDetailPC) == 0x0004E4, "Member 'AItemPreviewSideSwap_C::DebugLighting_LOWDetailPC' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, On_New_Item_Spawned) == 0x0004E8, "Member 'AItemPreviewSideSwap_C::On_New_Item_Spawned' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, CurrentZoomLevel) == 0x0004F8, "Member 'AItemPreviewSideSwap_C::CurrentZoomLevel' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, TargetZoomLevel) == 0x000500, "Member 'AItemPreviewSideSwap_C::TargetZoomLevel' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, TargetRotationOffset) == 0x000508, "Member 'AItemPreviewSideSwap_C::TargetRotationOffset' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, OrigRotationOffset) == 0x000520, "Member 'AItemPreviewSideSwap_C::OrigRotationOffset' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, Primary_Requested_Item) == 0x000538, "Member 'AItemPreviewSideSwap_C::Primary_Requested_Item' has a wrong offset!");
static_assert(offsetof(AItemPreviewSideSwap_C, Previous_Requested_Item) == 0x000540, "Member 'AItemPreviewSideSwap_C::Previous_Requested_Item' has a wrong offset!");

}
