#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class ABP_FrontendBackPlate_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UStaticMeshComponent*                   SM_INvertedSphere;
	class UParticleSystemComponent*               P_DudeBro_MultiHomingProj_Trail;
	class UParticleSystemComponent*               ParticleSystem11;
	class UParticleSystemComponent*               ParticleSystem1;
	class UStaticMeshComponent*                   SM_FrontendBackPlate_Floor;
	class UStaticMeshComponent*                   StaticMesh_fog;
	class UStaticMeshComponent*                   StaticMesh;
	class USceneComponent*                        DefaultSceneRoot;
	float                                         StopHyperSpeed_BlurControl_740818E745B3B8A476EC3CA79F88917D;
	float                                         StopHyperSpeed_LessBrightFlash_740818E745B3B8A476EC3CA79F88917D;
	float                                         StopHyperSpeed_Flash_740818E745B3B8A476EC3CA79F88917D;
	ETimelineDirection                            StopHyperSpeed__Direction_740818E745B3B8A476EC3CA79F88917D;
	uint8                                         Pad_2DD[0x3];
	class UTimelineComponent*                     StopHyperSpeed;
	float                                         HyperSpace_StarUVScale_BA3E59114EDDA7E96C3E87A6A52D0356;
	float                                         HyperSpace_StarFieldFade_BA3E59114EDDA7E96C3E87A6A52D0356;
	float                                         HyperSpace_StarBloom_BA3E59114EDDA7E96C3E87A6A52D0356;
	float                                         HyperSpace_NumStarLoops_BA3E59114EDDA7E96C3E87A6A52D0356;
	float                                         HyperSpace_UVScale_BA3E59114EDDA7E96C3E87A6A52D0356;
	float                                         HyperSpace_ShowStarLines_BA3E59114EDDA7E96C3E87A6A52D0356;
	float                                         HyperSpace_bloom_BA3E59114EDDA7E96C3E87A6A52D0356;
	float                                         HyperSpace_Tunnel_BA3E59114EDDA7E96C3E87A6A52D0356;
	float                                         HyperSpace_flash_BA3E59114EDDA7E96C3E87A6A52D0356;
	float                                         HyperSpace_starlines_BA3E59114EDDA7E96C3E87A6A52D0356;
	ETimelineDirection                            HyperSpace__Direction_BA3E59114EDDA7E96C3E87A6A52D0356;
	uint8                                         Pad_311[0x7];
	class UTimelineComponent*                     HyperSpace;
	float                                         UISpecailEventTransition_UsingUISpecialEventColors_26FA49894E4D045B21346598A2D837C2;
	ETimelineDirection                            UISpecailEventTransition__Direction_26FA49894E4D045B21346598A2D837C2;
	uint8                                         Pad_325[0x3];
	class UTimelineComponent*                     UISpecailEventTransition;
	class UTexture*                               BackgroundTexture;
	class UMaterialInterface*                     Material_background;
	class UMaterialInterface*                     Material_Fog;
	class UMaterialInstanceDynamic*               BlurMaterial;
	class UTextureRenderTarget2D*                 RenderTarget;
	bool                                          UpdateFoginRealTime;
	uint8                                         Pad_359[0x7];
	class UMaterialInstanceDynamic*               MID_Floor;
	class UMaterialInterface*                     PreBlurMaterial;
	class UTextureRenderTarget2D*                 RenderTarget_preblur;
	class UMaterialInstanceDynamic*               MID_Background;
	class UMaterialInstanceDynamic*               MID_Preblur;
	TMulticastInlineDelegate<void()>              BeginRockyRidge;
	TMulticastInlineDelegate<void()>              OnRockyRidgeFinished;
	TMulticastInlineDelegate<void()>              HidePlayer;
	TMulticastInlineDelegate<void(const struct FLinearColor& Color_A, bool UseDefaultScheme)> RequestLobbyColorChanges;
	struct FLinearColor                           CurrentUIColorScheme;
	bool                                          bHasUIColorOverride;
	uint8                                         Pad_3D9[0x7];
	TArray<class AActor*>                         FloatingShapes;
	class UAudioComponent*                        LoopingAudio;
	bool                                          AllowMatchmakingInteraction;

public:
	void UserConstructionScript();
	void UpdateSettings();
	void UpdateRenderTargetRealtime();
	void UpdateRenderTarget();
	void UISpecailEventTransition__UpdateFunc();
	void UISpecailEventTransition__FinishedFunc();
	void TestBlur();
	void StopHyperSpeed__UpdateFunc();
	void StopHyperSpeed__FinishedFunc();
	void SetSpecialEventUIColorScheme(bool SetUIPanelColors, const struct FLinearColor& Backing, const struct FLinearColor& Backing_Hover, const struct FLinearColor& Backing_Selection, bool SetFontColors, const struct FLinearColor& Primary, const struct FLinearColor& Secondary, const struct FLinearColor& Tertiary, const struct FLinearColor& Quaternary);
	void SetFloatingShapeVisibility(bool Show);
	void SetEnableBlackMondayFX(bool IsEnabled);
	void SetBackgroundTexture(class UTexture* InTexture, class UMaterialInterface* InMaterial, class UMaterialInterface* InPreBlurMaterial);
	void SetAllowMatchmakingInteraction(bool AllowInteraction);
	void ResetUIColorScheme();
	void ResetMatchmakingAnim();
	void RequestUIColorScheme(const struct FLinearColor& MainUIColor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void PlayUISpecialEventTransition(bool bTransitionToSpecialEvent);
	void PlayEnterMatchmakingAnim();
	void MatchmakingEnded(bool bWasSuccess);
	void HyperSpace__UpdateFunc();
	void HyperSpace__FinishedFunc();
	void HasUIColorOverride(bool* HasUIColorOverride_0);
	void HasMatcmakingInteraction(bool* HasInteraction);
	void HandleSpecialEventAudioOnMatchmakingEnd(bool Success);
	void GetUIColorScheme(struct FLinearColor* colorscheme, bool* bHasOverride);
	void ExecuteUbergraph_BP_FrontendBackPlate(int32 EntryPoint);
	void EnteringMatchmaking();
	void EnableRealtimeUpdate(bool Enabled);
	void CreateUniqueMaterialName(const class FString& PostFix, class FString* UniqueString);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FrontendBackPlate_C">();
	}
	static class ABP_FrontendBackPlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FrontendBackPlate_C>();
	}
};
static_assert(alignof(ABP_FrontendBackPlate_C) == 0x000008, "Wrong alignment on ABP_FrontendBackPlate_C");
static_assert(sizeof(ABP_FrontendBackPlate_C) == 0x000400, "Wrong size on ABP_FrontendBackPlate_C");
static_assert(offsetof(ABP_FrontendBackPlate_C, UberGraphFrame) == 0x000288, "Member 'ABP_FrontendBackPlate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, SM_INvertedSphere) == 0x000290, "Member 'ABP_FrontendBackPlate_C::SM_INvertedSphere' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, P_DudeBro_MultiHomingProj_Trail) == 0x000298, "Member 'ABP_FrontendBackPlate_C::P_DudeBro_MultiHomingProj_Trail' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, ParticleSystem11) == 0x0002A0, "Member 'ABP_FrontendBackPlate_C::ParticleSystem11' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, ParticleSystem1) == 0x0002A8, "Member 'ABP_FrontendBackPlate_C::ParticleSystem1' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, SM_FrontendBackPlate_Floor) == 0x0002B0, "Member 'ABP_FrontendBackPlate_C::SM_FrontendBackPlate_Floor' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, StaticMesh_fog) == 0x0002B8, "Member 'ABP_FrontendBackPlate_C::StaticMesh_fog' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, StaticMesh) == 0x0002C0, "Member 'ABP_FrontendBackPlate_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, DefaultSceneRoot) == 0x0002C8, "Member 'ABP_FrontendBackPlate_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, StopHyperSpeed_BlurControl_740818E745B3B8A476EC3CA79F88917D) == 0x0002D0, "Member 'ABP_FrontendBackPlate_C::StopHyperSpeed_BlurControl_740818E745B3B8A476EC3CA79F88917D' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, StopHyperSpeed_LessBrightFlash_740818E745B3B8A476EC3CA79F88917D) == 0x0002D4, "Member 'ABP_FrontendBackPlate_C::StopHyperSpeed_LessBrightFlash_740818E745B3B8A476EC3CA79F88917D' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, StopHyperSpeed_Flash_740818E745B3B8A476EC3CA79F88917D) == 0x0002D8, "Member 'ABP_FrontendBackPlate_C::StopHyperSpeed_Flash_740818E745B3B8A476EC3CA79F88917D' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, StopHyperSpeed__Direction_740818E745B3B8A476EC3CA79F88917D) == 0x0002DC, "Member 'ABP_FrontendBackPlate_C::StopHyperSpeed__Direction_740818E745B3B8A476EC3CA79F88917D' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, StopHyperSpeed) == 0x0002E0, "Member 'ABP_FrontendBackPlate_C::StopHyperSpeed' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_StarUVScale_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x0002E8, "Member 'ABP_FrontendBackPlate_C::HyperSpace_StarUVScale_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_StarFieldFade_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x0002EC, "Member 'ABP_FrontendBackPlate_C::HyperSpace_StarFieldFade_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_StarBloom_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x0002F0, "Member 'ABP_FrontendBackPlate_C::HyperSpace_StarBloom_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_NumStarLoops_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x0002F4, "Member 'ABP_FrontendBackPlate_C::HyperSpace_NumStarLoops_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_UVScale_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x0002F8, "Member 'ABP_FrontendBackPlate_C::HyperSpace_UVScale_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_ShowStarLines_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x0002FC, "Member 'ABP_FrontendBackPlate_C::HyperSpace_ShowStarLines_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_bloom_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x000300, "Member 'ABP_FrontendBackPlate_C::HyperSpace_bloom_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_Tunnel_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x000304, "Member 'ABP_FrontendBackPlate_C::HyperSpace_Tunnel_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_flash_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x000308, "Member 'ABP_FrontendBackPlate_C::HyperSpace_flash_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_starlines_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x00030C, "Member 'ABP_FrontendBackPlate_C::HyperSpace_starlines_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace__Direction_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x000310, "Member 'ABP_FrontendBackPlate_C::HyperSpace__Direction_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace) == 0x000318, "Member 'ABP_FrontendBackPlate_C::HyperSpace' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, UISpecailEventTransition_UsingUISpecialEventColors_26FA49894E4D045B21346598A2D837C2) == 0x000320, "Member 'ABP_FrontendBackPlate_C::UISpecailEventTransition_UsingUISpecialEventColors_26FA49894E4D045B21346598A2D837C2' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, UISpecailEventTransition__Direction_26FA49894E4D045B21346598A2D837C2) == 0x000324, "Member 'ABP_FrontendBackPlate_C::UISpecailEventTransition__Direction_26FA49894E4D045B21346598A2D837C2' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, UISpecailEventTransition) == 0x000328, "Member 'ABP_FrontendBackPlate_C::UISpecailEventTransition' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, BackgroundTexture) == 0x000330, "Member 'ABP_FrontendBackPlate_C::BackgroundTexture' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, Material_background) == 0x000338, "Member 'ABP_FrontendBackPlate_C::Material_background' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, Material_Fog) == 0x000340, "Member 'ABP_FrontendBackPlate_C::Material_Fog' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, BlurMaterial) == 0x000348, "Member 'ABP_FrontendBackPlate_C::BlurMaterial' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, RenderTarget) == 0x000350, "Member 'ABP_FrontendBackPlate_C::RenderTarget' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, UpdateFoginRealTime) == 0x000358, "Member 'ABP_FrontendBackPlate_C::UpdateFoginRealTime' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, MID_Floor) == 0x000360, "Member 'ABP_FrontendBackPlate_C::MID_Floor' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, PreBlurMaterial) == 0x000368, "Member 'ABP_FrontendBackPlate_C::PreBlurMaterial' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, RenderTarget_preblur) == 0x000370, "Member 'ABP_FrontendBackPlate_C::RenderTarget_preblur' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, MID_Background) == 0x000378, "Member 'ABP_FrontendBackPlate_C::MID_Background' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, MID_Preblur) == 0x000380, "Member 'ABP_FrontendBackPlate_C::MID_Preblur' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, BeginRockyRidge) == 0x000388, "Member 'ABP_FrontendBackPlate_C::BeginRockyRidge' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, OnRockyRidgeFinished) == 0x000398, "Member 'ABP_FrontendBackPlate_C::OnRockyRidgeFinished' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HidePlayer) == 0x0003A8, "Member 'ABP_FrontendBackPlate_C::HidePlayer' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, RequestLobbyColorChanges) == 0x0003B8, "Member 'ABP_FrontendBackPlate_C::RequestLobbyColorChanges' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, CurrentUIColorScheme) == 0x0003C8, "Member 'ABP_FrontendBackPlate_C::CurrentUIColorScheme' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, bHasUIColorOverride) == 0x0003D8, "Member 'ABP_FrontendBackPlate_C::bHasUIColorOverride' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, FloatingShapes) == 0x0003E0, "Member 'ABP_FrontendBackPlate_C::FloatingShapes' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, LoopingAudio) == 0x0003F0, "Member 'ABP_FrontendBackPlate_C::LoopingAudio' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, AllowMatchmakingInteraction) == 0x0003F8, "Member 'ABP_FrontendBackPlate_C::AllowMatchmakingInteraction' has a wrong offset!");

}
