#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class URiderWidget_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       A_BoostCompletedAnim;
	class UWidgetAnimation*                       A_BoostStartedAnim;
	class UWidgetAnimation*                       A_LowAnim;
	class UWidgetAnimation*                       A_FullBarAnim;
	class UImage*                                 BoostGlow;
	class UBorder*                                BoostGlowBorder;
	class UCommonTextBlock*                       CurrentValue;
	class UImage*                                 DeltaBar;
	class UImage*                                 DeltaBar_1;
	class UImage*                                 EmptyStatusGlow;
	class UImage*                                 FillBar;
	class UImage*                                 FillBar_1;
	class UHorizontalBox*                         HorizontalBox_50;
	class UImage*                                 Image_LargeCone;
	class UImage*                                 Image_Sparks;
	class UImage*                                 Image_Sparks_1;
	class UOverlay*                               Overlay_BoostSparks;
	class UOverlay*                               Overlay_Stats;
	class USizeBox*                               SizeBox_Health;
	class USizeBox*                               SizeBox_Progress;
	class UImage*                                 SprintIcon;
	class UCommonTagVisibilityWidget*             TagVisibility_HealthValue;
	class UMaterialInstanceDynamic*               CahcedProgressDynamicMat;
	double                                        LowEnergyThreshold;
	double                                        CachedCurrentEnergy;
	double                                        PrevEnergy;
	double                                        Anim_DeltaThreshold;
	struct FTimerHandle                           EmptyEnergyDelta_Handle;
	class UPlayerRiderComponent_C*                PlayerRiderComponentRef;
	double                                        PrevHealth;
	struct FTimerHandle                           EmptyHealthDelta_Handle;
	double                                        EnergyDeltaDecayDelay;
	double                                        HealthDeltaDecayDelay;
	class AFortPawn*                              AIPawn;
	double                                        CooldownStartTime;
	struct FLinearColor                           ColorStart;
	struct FGameplayTag                           SprintingAbilityTag;
	bool                                          IsListeningForSprint;
	bool                                          IsListeningForSprintStopped;
	uint8                                         Pad_406[0x2];
	class UAbilityAsync_WaitGameplayTagAdded*     WaitingForSprint;
	class UAbilityAsync_WaitGameplayTagRemoved*   WaitingForSprintStopped;
	bool                                          IsBoostingState;

public:
	void UpdateHealthDelta();
	void UpdateHealth(double Value);
	void UpdateEnergy(double Value);
	void UpdateBoostEffect(double ProgressRatio);
	void TryPlayingLowState(class UWidgetAnimation* InAnimation);
	void SetupEventBinds();
	void SetProgressBar(double Value, class UImage* TargetFillBar, class UImage* DeltaBar_0, double PreviousValue, double Threshold, const class FString& FunctionName, struct FTimerHandle& TimerHandle, double DeltaDecayDelay, struct FTimerHandle* DeltaTimerHandle);
	void SetHealthValue(double Value);
	void SetBoostAnim(bool IsBoosting);
	void Set_Delta(class UImage* Target, double CurrentValue_0, double PreviousValue, double Threshold, const class FString& FunctionName, struct FTimerHandle& TimerHandle, double DeltaDecayDelay, struct FTimerHandle* TimerHandleRef);
	void RiderUIHealthChanged(double Health);
	void RiderUIEnergyChanged(double Energy);
	void Removed_2725D3654E4B103B624310B5CBD4B008();
	void OnSprintStopped();
	void OnSprintStarted();
	void OnRiderUINewStats(const class FText& Name_0, const struct FSlateBrush& Icon, class AActor* RidableActor);
	void OnRiderUIEnd(class AActor* RidableActor);
	void OnOvershieldVisibilityChanged(bool IsVisible_0);
	void OnInitialized();
	void ListenToSprintEvents(bool ListenForSprinting);
	void InitRiderWidget();
	void Finished_357CBEA140721428C88288A0127368B0();
	void ExecuteUbergraph_RiderWidget(int32 EntryPoint);
	void EmptyEnergyDelta();
	void Destruct();
	void Construct();
	void ClearOldBindings();
	void Added_2054A51646A7A04B3C1966AECE2DA459();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RiderWidget_C">();
	}
	static class URiderWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URiderWidget_C>();
	}
};
static_assert(alignof(URiderWidget_C) == 0x000008, "Wrong alignment on URiderWidget_C");
static_assert(sizeof(URiderWidget_C) == 0x000420, "Wrong size on URiderWidget_C");
static_assert(offsetof(URiderWidget_C, UberGraphFrame) == 0x0002D0, "Member 'URiderWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, A_BoostCompletedAnim) == 0x0002D8, "Member 'URiderWidget_C::A_BoostCompletedAnim' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, A_BoostStartedAnim) == 0x0002E0, "Member 'URiderWidget_C::A_BoostStartedAnim' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, A_LowAnim) == 0x0002E8, "Member 'URiderWidget_C::A_LowAnim' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, A_FullBarAnim) == 0x0002F0, "Member 'URiderWidget_C::A_FullBarAnim' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, BoostGlow) == 0x0002F8, "Member 'URiderWidget_C::BoostGlow' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, BoostGlowBorder) == 0x000300, "Member 'URiderWidget_C::BoostGlowBorder' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, CurrentValue) == 0x000308, "Member 'URiderWidget_C::CurrentValue' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, DeltaBar) == 0x000310, "Member 'URiderWidget_C::DeltaBar' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, DeltaBar_1) == 0x000318, "Member 'URiderWidget_C::DeltaBar_1' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, EmptyStatusGlow) == 0x000320, "Member 'URiderWidget_C::EmptyStatusGlow' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, FillBar) == 0x000328, "Member 'URiderWidget_C::FillBar' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, FillBar_1) == 0x000330, "Member 'URiderWidget_C::FillBar_1' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, HorizontalBox_50) == 0x000338, "Member 'URiderWidget_C::HorizontalBox_50' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, Image_LargeCone) == 0x000340, "Member 'URiderWidget_C::Image_LargeCone' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, Image_Sparks) == 0x000348, "Member 'URiderWidget_C::Image_Sparks' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, Image_Sparks_1) == 0x000350, "Member 'URiderWidget_C::Image_Sparks_1' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, Overlay_BoostSparks) == 0x000358, "Member 'URiderWidget_C::Overlay_BoostSparks' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, Overlay_Stats) == 0x000360, "Member 'URiderWidget_C::Overlay_Stats' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, SizeBox_Health) == 0x000368, "Member 'URiderWidget_C::SizeBox_Health' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, SizeBox_Progress) == 0x000370, "Member 'URiderWidget_C::SizeBox_Progress' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, SprintIcon) == 0x000378, "Member 'URiderWidget_C::SprintIcon' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, TagVisibility_HealthValue) == 0x000380, "Member 'URiderWidget_C::TagVisibility_HealthValue' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, CahcedProgressDynamicMat) == 0x000388, "Member 'URiderWidget_C::CahcedProgressDynamicMat' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, LowEnergyThreshold) == 0x000390, "Member 'URiderWidget_C::LowEnergyThreshold' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, CachedCurrentEnergy) == 0x000398, "Member 'URiderWidget_C::CachedCurrentEnergy' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, PrevEnergy) == 0x0003A0, "Member 'URiderWidget_C::PrevEnergy' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, Anim_DeltaThreshold) == 0x0003A8, "Member 'URiderWidget_C::Anim_DeltaThreshold' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, EmptyEnergyDelta_Handle) == 0x0003B0, "Member 'URiderWidget_C::EmptyEnergyDelta_Handle' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, PlayerRiderComponentRef) == 0x0003B8, "Member 'URiderWidget_C::PlayerRiderComponentRef' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, PrevHealth) == 0x0003C0, "Member 'URiderWidget_C::PrevHealth' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, EmptyHealthDelta_Handle) == 0x0003C8, "Member 'URiderWidget_C::EmptyHealthDelta_Handle' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, EnergyDeltaDecayDelay) == 0x0003D0, "Member 'URiderWidget_C::EnergyDeltaDecayDelay' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, HealthDeltaDecayDelay) == 0x0003D8, "Member 'URiderWidget_C::HealthDeltaDecayDelay' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, AIPawn) == 0x0003E0, "Member 'URiderWidget_C::AIPawn' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, CooldownStartTime) == 0x0003E8, "Member 'URiderWidget_C::CooldownStartTime' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, ColorStart) == 0x0003F0, "Member 'URiderWidget_C::ColorStart' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, SprintingAbilityTag) == 0x000400, "Member 'URiderWidget_C::SprintingAbilityTag' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, IsListeningForSprint) == 0x000404, "Member 'URiderWidget_C::IsListeningForSprint' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, IsListeningForSprintStopped) == 0x000405, "Member 'URiderWidget_C::IsListeningForSprintStopped' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, WaitingForSprint) == 0x000408, "Member 'URiderWidget_C::WaitingForSprint' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, WaitingForSprintStopped) == 0x000410, "Member 'URiderWidget_C::WaitingForSprintStopped' has a wrong offset!");
static_assert(offsetof(URiderWidget_C, IsBoostingState) == 0x000418, "Member 'URiderWidget_C::IsBoostingState' has a wrong offset!");

}
