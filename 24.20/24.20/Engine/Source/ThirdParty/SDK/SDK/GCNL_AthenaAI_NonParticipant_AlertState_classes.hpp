#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_AthenaAI_NonParticipant_AlertState_C final : public AFortGameplayCueNotifyAthena_AIAlertState
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FLinearColor                           IconColorAlert;
	struct FLinearColor                           IconColorThreatend;
	double                                        AnimationLength;
	struct FLinearColor                           IconColorAlertInner;
	class USoundBase*                             Aggro_Sound;
	class USoundBase*                             SearchingSound;
	class AFortPawn*                              Pawn_Converter;

public:
	void ExecuteUbergraph_GCNL_AthenaAI_NonParticipant_AlertState(int32 EntryPoint);
	void OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void Play_Alert_Sound(class AActor* TargetedActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_AthenaAI_NonParticipant_AlertState_C">();
	}
	static class AGCNL_AthenaAI_NonParticipant_AlertState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_AthenaAI_NonParticipant_AlertState_C>();
	}
};
static_assert(alignof(AGCNL_AthenaAI_NonParticipant_AlertState_C) == 0x000010, "Wrong alignment on AGCNL_AthenaAI_NonParticipant_AlertState_C");
static_assert(sizeof(AGCNL_AthenaAI_NonParticipant_AlertState_C) == 0x000A50, "Wrong size on AGCNL_AthenaAI_NonParticipant_AlertState_C");
static_assert(offsetof(AGCNL_AthenaAI_NonParticipant_AlertState_C, UberGraphFrame) == 0x0009F0, "Member 'AGCNL_AthenaAI_NonParticipant_AlertState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_AthenaAI_NonParticipant_AlertState_C, IconColorAlert) == 0x0009F8, "Member 'AGCNL_AthenaAI_NonParticipant_AlertState_C::IconColorAlert' has a wrong offset!");
static_assert(offsetof(AGCNL_AthenaAI_NonParticipant_AlertState_C, IconColorThreatend) == 0x000A08, "Member 'AGCNL_AthenaAI_NonParticipant_AlertState_C::IconColorThreatend' has a wrong offset!");
static_assert(offsetof(AGCNL_AthenaAI_NonParticipant_AlertState_C, AnimationLength) == 0x000A18, "Member 'AGCNL_AthenaAI_NonParticipant_AlertState_C::AnimationLength' has a wrong offset!");
static_assert(offsetof(AGCNL_AthenaAI_NonParticipant_AlertState_C, IconColorAlertInner) == 0x000A20, "Member 'AGCNL_AthenaAI_NonParticipant_AlertState_C::IconColorAlertInner' has a wrong offset!");
static_assert(offsetof(AGCNL_AthenaAI_NonParticipant_AlertState_C, Aggro_Sound) == 0x000A30, "Member 'AGCNL_AthenaAI_NonParticipant_AlertState_C::Aggro_Sound' has a wrong offset!");
static_assert(offsetof(AGCNL_AthenaAI_NonParticipant_AlertState_C, SearchingSound) == 0x000A38, "Member 'AGCNL_AthenaAI_NonParticipant_AlertState_C::SearchingSound' has a wrong offset!");
static_assert(offsetof(AGCNL_AthenaAI_NonParticipant_AlertState_C, Pawn_Converter) == 0x000A40, "Member 'AGCNL_AthenaAI_NonParticipant_AlertState_C::Pawn_Converter' has a wrong offset!");

}
