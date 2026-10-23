#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "VaultWorld_classes.hpp"

namespace SDK
{

class ABattlePassVaultWorld_C final : public AVaultWorld_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BattlePassVaultWorld_C;
	class UStaticMeshComponent*                   floor;
	float                                         TransitionForward_FX_Transition_Fade_46DACBD74D0A8B2278950785C007984A;
	float                                         TransitionForward_Fade_46DACBD74D0A8B2278950785C007984A;
	float                                         TransitionForward_Forward_46DACBD74D0A8B2278950785C007984A;
	ETimelineDirection                            TransitionForward__Direction_46DACBD74D0A8B2278950785C007984A;
	uint8                                         Pad_365[0x3];
	class UTimelineComponent*                     TransitionForward;
	float                                         BackgroundIntenstiy_Intensity_8C51F99C4026F0204F2184AD9661CD23;
	ETimelineDirection                            BackgroundIntenstiy__Direction_8C51F99C4026F0204F2184AD9661CD23;
	uint8                                         Pad_375[0x3];
	class UTimelineComponent*                     BackgroundIntenstiy;
	float                                         ItemDetailsIntensity_TextureIntensity_1EC6205345E5A708DA53B5A9449F1700;
	ETimelineDirection                            ItemDetailsIntensity__Direction_1EC6205345E5A708DA53B5A9449F1700;
	uint8                                         Pad_385[0x3];
	class UTimelineComponent*                     ItemDetailsIntensity;
	float                                         Background_Effects_SetStreaks_50767E4640E86998EC96B7B2D57E5E27;
	ETimelineDirection                            Background_Effects__Direction_50767E4640E86998EC96B7B2D57E5E27;
	uint8                                         Pad_395[0x3];
	class UTimelineComponent*                     Background_Effects;
	float                                         IconDissolve_NewTrack_0_983A4DA644BE5CFAED0C378063FC66FC;
	ETimelineDirection                            IconDissolve__Direction_983A4DA644BE5CFAED0C378063FC66FC;
	uint8                                         Pad_3A5[0x3];
	class UTimelineComponent*                     IconDissolve;
	float                                         ItemDetails_Icon_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781;
	float                                         ItemDetails_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781;
	ETimelineDirection                            ItemDetails__Direction_F4D1C4E246C708FA1F53EDA5A3FEE781;
	uint8                                         Pad_3B9[0x7];
	class UTimelineComponent*                     ItemDetails;
	float                                         Floor_Visibility_FloorMask_CE7E338346E82397065B65AA77823F50;
	ETimelineDirection                            Floor_Visibility__Direction_CE7E338346E82397065B65AA77823F50;
	uint8                                         Pad_3CD[0x3];
	class UTimelineComponent*                     Floor_Visibility;
	float                                         TransitionBackward_fx_Transition_fade_7073CD0840227233D3A64795A5A1B1B8;
	float                                         TransitionBackward_Fade_7073CD0840227233D3A64795A5A1B1B8;
	float                                         TransitionBackward_Backward_7073CD0840227233D3A64795A5A1B1B8;
	ETimelineDirection                            TransitionBackward__Direction_7073CD0840227233D3A64795A5A1B1B8;
	uint8                                         Pad_3E5[0x3];
	class UTimelineComponent*                     TransitionBackward;
	class UMaterialInstance*                      FloorMI;
	class UMaterialInstanceDynamic*               FloorMID;
	double                                        BG_Intensity_Max;
	double                                        BG_Intensity_Mid;
	double                                        BG_Intensity_Min;
	bool                                          bIsTransitioning;
	EBackgroundIntensityLevel                     Intensity_Transition;
	bool                                          bIsPageA_Max;
	bool                                          bIsPageB_Max;
	float                                         PageA_X_Offset;
	float                                         PageB_X_Offset;
	float                                         X_Offset_Anim_Distance;

public:
	void TransitionBackward__UpdateFunc();
	void TransitionBackward__FinishedFunc();
	void UserConstructionScript();
	void TransitionBackgroundForward(double Forward, double fade, double FXTransitionFade, class UMaterialInstanceDynamic* Mid);
	void TransitionForward__UpdateFunc();
	void TransitionBackgroundBackward(double Backward, double fade, double FXTransitionFade, class UMaterialInstanceDynamic* Mid);
	void TransitionForward__FinishedFunc();
	void OnTransitionItemDetails(const bool bShowItemDetails);
	void SetupBackgroundMaterial(class UTexture2D*& TextureBackground, struct FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid);
	void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition);
	void ReceiveBeginPlay();
	void OnSetupBackground(const class UTexture2D* LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& BackgroundInfo);
	void PageTransitionIntensityUpdate(class UMaterialInstanceDynamic* MID_Background, class UMaterialInstanceDynamic* MID_Floor);
	void OnIntensityChange(bool bToLowIntensity);
	void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);
	void ItemDetails__FinishedFunc();
	void OnInitialBackgroundTransition();
	void IconDissolve__UpdateFunc();
	void ItemDetailsIntensity__UpdateFunc();
	void IconDissolve__FinishedFunc();
	void ItemDetailsIntensity__FinishedFunc();
	void Floor_Visibility__UpdateFunc();
	void ItemDetails__UpdateFunc();
	void Floor_Visibility__FinishedFunc();
	void ExecuteUbergraph_BattlePassVaultWorld(int32 EntryPoint);
	void BackgroundIntenstiy__UpdateFunc();
	void BackgroundIntenstiy__FinishedFunc();
	void Background_Effects__UpdateFunc();
	void Background_Effects__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattlePassVaultWorld_C">();
	}
	static class ABattlePassVaultWorld_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABattlePassVaultWorld_C>();
	}
};
static_assert(alignof(ABattlePassVaultWorld_C) == 0x000008, "Wrong alignment on ABattlePassVaultWorld_C");
static_assert(sizeof(ABattlePassVaultWorld_C) == 0x000428, "Wrong size on ABattlePassVaultWorld_C");
static_assert(offsetof(ABattlePassVaultWorld_C, UberGraphFrame_BattlePassVaultWorld_C) == 0x000348, "Member 'ABattlePassVaultWorld_C::UberGraphFrame_BattlePassVaultWorld_C' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, floor) == 0x000350, "Member 'ABattlePassVaultWorld_C::floor' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, TransitionForward_FX_Transition_Fade_46DACBD74D0A8B2278950785C007984A) == 0x000358, "Member 'ABattlePassVaultWorld_C::TransitionForward_FX_Transition_Fade_46DACBD74D0A8B2278950785C007984A' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, TransitionForward_Fade_46DACBD74D0A8B2278950785C007984A) == 0x00035C, "Member 'ABattlePassVaultWorld_C::TransitionForward_Fade_46DACBD74D0A8B2278950785C007984A' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, TransitionForward_Forward_46DACBD74D0A8B2278950785C007984A) == 0x000360, "Member 'ABattlePassVaultWorld_C::TransitionForward_Forward_46DACBD74D0A8B2278950785C007984A' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, TransitionForward__Direction_46DACBD74D0A8B2278950785C007984A) == 0x000364, "Member 'ABattlePassVaultWorld_C::TransitionForward__Direction_46DACBD74D0A8B2278950785C007984A' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, TransitionForward) == 0x000368, "Member 'ABattlePassVaultWorld_C::TransitionForward' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, BackgroundIntenstiy_Intensity_8C51F99C4026F0204F2184AD9661CD23) == 0x000370, "Member 'ABattlePassVaultWorld_C::BackgroundIntenstiy_Intensity_8C51F99C4026F0204F2184AD9661CD23' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, BackgroundIntenstiy__Direction_8C51F99C4026F0204F2184AD9661CD23) == 0x000374, "Member 'ABattlePassVaultWorld_C::BackgroundIntenstiy__Direction_8C51F99C4026F0204F2184AD9661CD23' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, BackgroundIntenstiy) == 0x000378, "Member 'ABattlePassVaultWorld_C::BackgroundIntenstiy' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, ItemDetailsIntensity_TextureIntensity_1EC6205345E5A708DA53B5A9449F1700) == 0x000380, "Member 'ABattlePassVaultWorld_C::ItemDetailsIntensity_TextureIntensity_1EC6205345E5A708DA53B5A9449F1700' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, ItemDetailsIntensity__Direction_1EC6205345E5A708DA53B5A9449F1700) == 0x000384, "Member 'ABattlePassVaultWorld_C::ItemDetailsIntensity__Direction_1EC6205345E5A708DA53B5A9449F1700' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, ItemDetailsIntensity) == 0x000388, "Member 'ABattlePassVaultWorld_C::ItemDetailsIntensity' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, Background_Effects_SetStreaks_50767E4640E86998EC96B7B2D57E5E27) == 0x000390, "Member 'ABattlePassVaultWorld_C::Background_Effects_SetStreaks_50767E4640E86998EC96B7B2D57E5E27' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, Background_Effects__Direction_50767E4640E86998EC96B7B2D57E5E27) == 0x000394, "Member 'ABattlePassVaultWorld_C::Background_Effects__Direction_50767E4640E86998EC96B7B2D57E5E27' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, Background_Effects) == 0x000398, "Member 'ABattlePassVaultWorld_C::Background_Effects' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, IconDissolve_NewTrack_0_983A4DA644BE5CFAED0C378063FC66FC) == 0x0003A0, "Member 'ABattlePassVaultWorld_C::IconDissolve_NewTrack_0_983A4DA644BE5CFAED0C378063FC66FC' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, IconDissolve__Direction_983A4DA644BE5CFAED0C378063FC66FC) == 0x0003A4, "Member 'ABattlePassVaultWorld_C::IconDissolve__Direction_983A4DA644BE5CFAED0C378063FC66FC' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, IconDissolve) == 0x0003A8, "Member 'ABattlePassVaultWorld_C::IconDissolve' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, ItemDetails_Icon_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781) == 0x0003B0, "Member 'ABattlePassVaultWorld_C::ItemDetails_Icon_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, ItemDetails_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781) == 0x0003B4, "Member 'ABattlePassVaultWorld_C::ItemDetails_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, ItemDetails__Direction_F4D1C4E246C708FA1F53EDA5A3FEE781) == 0x0003B8, "Member 'ABattlePassVaultWorld_C::ItemDetails__Direction_F4D1C4E246C708FA1F53EDA5A3FEE781' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, ItemDetails) == 0x0003C0, "Member 'ABattlePassVaultWorld_C::ItemDetails' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, Floor_Visibility_FloorMask_CE7E338346E82397065B65AA77823F50) == 0x0003C8, "Member 'ABattlePassVaultWorld_C::Floor_Visibility_FloorMask_CE7E338346E82397065B65AA77823F50' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, Floor_Visibility__Direction_CE7E338346E82397065B65AA77823F50) == 0x0003CC, "Member 'ABattlePassVaultWorld_C::Floor_Visibility__Direction_CE7E338346E82397065B65AA77823F50' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, Floor_Visibility) == 0x0003D0, "Member 'ABattlePassVaultWorld_C::Floor_Visibility' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, TransitionBackward_fx_Transition_fade_7073CD0840227233D3A64795A5A1B1B8) == 0x0003D8, "Member 'ABattlePassVaultWorld_C::TransitionBackward_fx_Transition_fade_7073CD0840227233D3A64795A5A1B1B8' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, TransitionBackward_Fade_7073CD0840227233D3A64795A5A1B1B8) == 0x0003DC, "Member 'ABattlePassVaultWorld_C::TransitionBackward_Fade_7073CD0840227233D3A64795A5A1B1B8' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, TransitionBackward_Backward_7073CD0840227233D3A64795A5A1B1B8) == 0x0003E0, "Member 'ABattlePassVaultWorld_C::TransitionBackward_Backward_7073CD0840227233D3A64795A5A1B1B8' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, TransitionBackward__Direction_7073CD0840227233D3A64795A5A1B1B8) == 0x0003E4, "Member 'ABattlePassVaultWorld_C::TransitionBackward__Direction_7073CD0840227233D3A64795A5A1B1B8' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, TransitionBackward) == 0x0003E8, "Member 'ABattlePassVaultWorld_C::TransitionBackward' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, FloorMI) == 0x0003F0, "Member 'ABattlePassVaultWorld_C::FloorMI' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, FloorMID) == 0x0003F8, "Member 'ABattlePassVaultWorld_C::FloorMID' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, BG_Intensity_Max) == 0x000400, "Member 'ABattlePassVaultWorld_C::BG_Intensity_Max' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, BG_Intensity_Mid) == 0x000408, "Member 'ABattlePassVaultWorld_C::BG_Intensity_Mid' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, BG_Intensity_Min) == 0x000410, "Member 'ABattlePassVaultWorld_C::BG_Intensity_Min' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, bIsTransitioning) == 0x000418, "Member 'ABattlePassVaultWorld_C::bIsTransitioning' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, Intensity_Transition) == 0x000419, "Member 'ABattlePassVaultWorld_C::Intensity_Transition' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, bIsPageA_Max) == 0x00041A, "Member 'ABattlePassVaultWorld_C::bIsPageA_Max' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, bIsPageB_Max) == 0x00041B, "Member 'ABattlePassVaultWorld_C::bIsPageB_Max' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, PageA_X_Offset) == 0x00041C, "Member 'ABattlePassVaultWorld_C::PageA_X_Offset' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, PageB_X_Offset) == 0x000420, "Member 'ABattlePassVaultWorld_C::PageB_X_Offset' has a wrong offset!");
static_assert(offsetof(ABattlePassVaultWorld_C, X_Offset_Anim_Distance) == 0x000424, "Member 'ABattlePassVaultWorld_C::X_Offset_Anim_Distance' has a wrong offset!");

}
