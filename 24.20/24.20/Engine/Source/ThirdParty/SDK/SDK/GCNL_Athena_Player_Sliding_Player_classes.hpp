#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Athena_Player_Sliding_Player_C final : public AFortGameplayCueNotifyLoop_Sliding
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UFortCollisionAudioComponent*           FortCollisionAudio;
	bool                                          bUpdateAudioParams;
	uint8                                         Pad_A01[0x7];
	double                                        VelocityLengthAudioParam;
	double                                        ZVelocityAudioParam;
	class USoundBase*                             StopSlideSound;
	class UAudioComponent*                        Stop_Slide_Audio;
	struct FTimerHandle                           SlidingFailsafeTimerHandle;
	class USoundBase*                             StartSlideSound;
	class UFortMovementComp_Character*            Cached_Movement_ComponentRef;
	class UFXSystemComponent*                     Dust_FX;
	bool                                          bIsGraceFalling;
	uint8                                         Pad_A49[0x7];
	struct FTimerHandle                           SpeedLineTimerHandle;
	int32                                         SurfaceTypeInt;
	uint8                                         Pad_A5C[0x4];
	struct FTimerHandle                           SlideAudioTimerHandle;

public:
	void CheckSurfaceType(class AFortPawn* Pawn, int32* SurfaceTypeInt_0);
	void ExecuteUbergraph_GCNL_Athena_Player_Sliding_Player(int32 EntryPoint);
	void On_Target_Pawn_Actor_Hit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ResetAudioData();
	void ResumeSlidingAudio();
	void Sliding_Failsafe_Check();
	void StartSlideAudio();
	void Stop_Sliding_Audio();
	void StopSlideAudio();
	void ToggleLoopingSoundIndicator(bool bEnableSoundIndicator);
	void Update_Speed_Line();
	void UpdateSlideAudio();
	void UpdateSoundComponentParameters(class AFortPlayerPawn* PlayerPawn_0, class UAudioComponent* AudioComponent);
	void UpdateSurfaceType();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_Player_Sliding_Player_C">();
	}
	static class AGCNL_Athena_Player_Sliding_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_Player_Sliding_Player_C>();
	}
};
static_assert(alignof(AGCNL_Athena_Player_Sliding_Player_C) == 0x000008, "Wrong alignment on AGCNL_Athena_Player_Sliding_Player_C");
static_assert(sizeof(AGCNL_Athena_Player_Sliding_Player_C) == 0x000A68, "Wrong size on AGCNL_Athena_Player_Sliding_Player_C");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, UberGraphFrame) == 0x0009F0, "Member 'AGCNL_Athena_Player_Sliding_Player_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, FortCollisionAudio) == 0x0009F8, "Member 'AGCNL_Athena_Player_Sliding_Player_C::FortCollisionAudio' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, bUpdateAudioParams) == 0x000A00, "Member 'AGCNL_Athena_Player_Sliding_Player_C::bUpdateAudioParams' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, VelocityLengthAudioParam) == 0x000A08, "Member 'AGCNL_Athena_Player_Sliding_Player_C::VelocityLengthAudioParam' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, ZVelocityAudioParam) == 0x000A10, "Member 'AGCNL_Athena_Player_Sliding_Player_C::ZVelocityAudioParam' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, StopSlideSound) == 0x000A18, "Member 'AGCNL_Athena_Player_Sliding_Player_C::StopSlideSound' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, Stop_Slide_Audio) == 0x000A20, "Member 'AGCNL_Athena_Player_Sliding_Player_C::Stop_Slide_Audio' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, SlidingFailsafeTimerHandle) == 0x000A28, "Member 'AGCNL_Athena_Player_Sliding_Player_C::SlidingFailsafeTimerHandle' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, StartSlideSound) == 0x000A30, "Member 'AGCNL_Athena_Player_Sliding_Player_C::StartSlideSound' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, Cached_Movement_ComponentRef) == 0x000A38, "Member 'AGCNL_Athena_Player_Sliding_Player_C::Cached_Movement_ComponentRef' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, Dust_FX) == 0x000A40, "Member 'AGCNL_Athena_Player_Sliding_Player_C::Dust_FX' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, bIsGraceFalling) == 0x000A48, "Member 'AGCNL_Athena_Player_Sliding_Player_C::bIsGraceFalling' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, SpeedLineTimerHandle) == 0x000A50, "Member 'AGCNL_Athena_Player_Sliding_Player_C::SpeedLineTimerHandle' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, SurfaceTypeInt) == 0x000A58, "Member 'AGCNL_Athena_Player_Sliding_Player_C::SurfaceTypeInt' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Player_C, SlideAudioTimerHandle) == 0x000A60, "Member 'AGCNL_Athena_Player_Sliding_Player_C::SlideAudioTimerHandle' has a wrong offset!");

}
