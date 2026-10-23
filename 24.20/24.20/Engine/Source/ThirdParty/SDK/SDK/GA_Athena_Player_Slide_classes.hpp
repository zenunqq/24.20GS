#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_Athena_Player_Slide_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	TSubclassOf<class UCameraShakeBase>           CameraShake;
	TSubclassOf<class UFortCameraMode>            Camera_Mode_Class;
	struct FGameplayTag                           CameraShakeGCNL;
	uint8                                         Pad_B44[0x4];
	TSubclassOf<class UCameraModifier>            CameraModifier;
	double                                        MinAngleForMomentum;
	struct FGameplayTag                           SpeedlinesCue;
	uint8                                         Pad_B5C[0x4];
	TSubclassOf<class UCameraShakeBase>           StartSlideCameraShake;
	double                                        AdditionalLaunchVelocityOffRamp;
	struct FSlidingControlParams                  DefaultSlidingParams;
	struct FSlidingControlParams                  PostDashGroundSlidingParams;
	double                                        LevelGroundSlideDuration;
	struct FTimerHandle                           EndLevelGroundSlideTimerHandle;
	struct FScalableFloat                         DashDuration;
	struct FTimerHandle                           CameraFXDelay;
	struct FGameplayTag                           PlayerGameplayCue;
	uint8                                         Pad_18E4[0x4];
	double                                        CameraShakeDelay;
	struct FScalableFloat                         MinAdditionalMomentum;
	struct FScalableFloat                         MaxAdditionalMomentum;
	struct FScalableFloat                         MinAngleForAdditionalMomentum;
	bool                                          Prev_FallingGracePeriodState;
	uint8                                         Pad_1969[0x7];
	class UCameraModifier*                        SlideCameraModifier;
	struct FTimerHandle                           AddMomentumTimerHandle;

public:
	void AddMomentum();
	void CameraFX();
	void EndAbilityClientSide();
	void EndAbilityServerSide();
	void EndLevelGroundSlide();
	void ExecuteUbergraph_GA_Athena_Player_Slide(int32 EntryPoint);
	void ForceRemoveSlideGC();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnFinishedCharacterCustomization_Event_0(class AFortPlayerPawn* Pawn);

	bool BuildDataRegistryResolverScope(TArray<class FName>* InOutResolverScopes, int32* InOutPriority) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Player_Slide_C">();
	}
	static class UGA_Athena_Player_Slide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Player_Slide_C>();
	}
};
static_assert(alignof(UGA_Athena_Player_Slide_C) == 0x000008, "Wrong alignment on UGA_Athena_Player_Slide_C");
static_assert(sizeof(UGA_Athena_Player_Slide_C) == 0x001980, "Wrong size on UGA_Athena_Player_Slide_C");
static_assert(offsetof(UGA_Athena_Player_Slide_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_Player_Slide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, CameraShake) == 0x000B30, "Member 'UGA_Athena_Player_Slide_C::CameraShake' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, Camera_Mode_Class) == 0x000B38, "Member 'UGA_Athena_Player_Slide_C::Camera_Mode_Class' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, CameraShakeGCNL) == 0x000B40, "Member 'UGA_Athena_Player_Slide_C::CameraShakeGCNL' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, CameraModifier) == 0x000B48, "Member 'UGA_Athena_Player_Slide_C::CameraModifier' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, MinAngleForMomentum) == 0x000B50, "Member 'UGA_Athena_Player_Slide_C::MinAngleForMomentum' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, SpeedlinesCue) == 0x000B58, "Member 'UGA_Athena_Player_Slide_C::SpeedlinesCue' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, StartSlideCameraShake) == 0x000B60, "Member 'UGA_Athena_Player_Slide_C::StartSlideCameraShake' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, AdditionalLaunchVelocityOffRamp) == 0x000B68, "Member 'UGA_Athena_Player_Slide_C::AdditionalLaunchVelocityOffRamp' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, DefaultSlidingParams) == 0x000B70, "Member 'UGA_Athena_Player_Slide_C::DefaultSlidingParams' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, PostDashGroundSlidingParams) == 0x001208, "Member 'UGA_Athena_Player_Slide_C::PostDashGroundSlidingParams' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, LevelGroundSlideDuration) == 0x0018A0, "Member 'UGA_Athena_Player_Slide_C::LevelGroundSlideDuration' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, EndLevelGroundSlideTimerHandle) == 0x0018A8, "Member 'UGA_Athena_Player_Slide_C::EndLevelGroundSlideTimerHandle' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, DashDuration) == 0x0018B0, "Member 'UGA_Athena_Player_Slide_C::DashDuration' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, CameraFXDelay) == 0x0018D8, "Member 'UGA_Athena_Player_Slide_C::CameraFXDelay' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, PlayerGameplayCue) == 0x0018E0, "Member 'UGA_Athena_Player_Slide_C::PlayerGameplayCue' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, CameraShakeDelay) == 0x0018E8, "Member 'UGA_Athena_Player_Slide_C::CameraShakeDelay' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, MinAdditionalMomentum) == 0x0018F0, "Member 'UGA_Athena_Player_Slide_C::MinAdditionalMomentum' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, MaxAdditionalMomentum) == 0x001918, "Member 'UGA_Athena_Player_Slide_C::MaxAdditionalMomentum' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, MinAngleForAdditionalMomentum) == 0x001940, "Member 'UGA_Athena_Player_Slide_C::MinAngleForAdditionalMomentum' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, Prev_FallingGracePeriodState) == 0x001968, "Member 'UGA_Athena_Player_Slide_C::Prev_FallingGracePeriodState' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, SlideCameraModifier) == 0x001970, "Member 'UGA_Athena_Player_Slide_C::SlideCameraModifier' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, AddMomentumTimerHandle) == 0x001978, "Member 'UGA_Athena_Player_Slide_C::AddMomentumTimerHandle' has a wrong offset!");

}
