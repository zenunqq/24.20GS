#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class AGCNL_PlayerIsRiding_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USoundBase*                             RidingSoundLoop;
	class UAudioComponent*                        RidingSoundLoopComp;
	struct FTimerHandle                           VelocityTimerHandle;
	class AActor*                                 Player;
	double                                        Speed;
	EFortTeamAffiliation                          TeamAffiliation;
	uint8                                         Pad_991[0x7];
	struct FVector                                Previous;
	class USoundBase*                             Enemy_RidingSoundLoop;
	class AFortPlayerPawnAthena*                  As_Fort_Player_Pawn_Athena;
	double                                        JumpParamTarget;
	double                                        JumpValue;
	bool                                          bIsFalling;
	bool                                          bCanResetJump;
	uint8                                         Pad_9D2[0x6];
	class UPawnMovementComponent*                 CreatureMovementComponent;
	struct FTimerHandle                           JumpResetTimerHandle;
	double                                        JumpPitchInterpSpeed;
	struct FCurveTableRowHandle                   RidingCurveTable;
	double                                        BoarSprintSpeed;
	double                                        CurrentVelocity;
	double                                        MaxNormalRunSpeed;
	bool                                          bSprinting;
	uint8                                         Pad_A19[0x7];
	double                                        MaxSpeed;
	double                                        MaxSpeedClamped;

public:
	void CalculateVelocityParam();
	void ExecuteUbergraph_GCNL_PlayerIsRiding(int32 EntryPoint);
	void OnJumpApex();
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void PlayerRidingDCNLEnded();
	void PlayerRidingGCNLStarted();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetUpRidableAudioEvents();
	void StartLoopingAudio();
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_PlayerIsRiding_C">();
	}
	static class AGCNL_PlayerIsRiding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_PlayerIsRiding_C>();
	}
};
static_assert(alignof(AGCNL_PlayerIsRiding_C) == 0x000008, "Wrong alignment on AGCNL_PlayerIsRiding_C");
static_assert(sizeof(AGCNL_PlayerIsRiding_C) == 0x000A30, "Wrong size on AGCNL_PlayerIsRiding_C");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_PlayerIsRiding_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, RidingSoundLoop) == 0x000968, "Member 'AGCNL_PlayerIsRiding_C::RidingSoundLoop' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, RidingSoundLoopComp) == 0x000970, "Member 'AGCNL_PlayerIsRiding_C::RidingSoundLoopComp' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, VelocityTimerHandle) == 0x000978, "Member 'AGCNL_PlayerIsRiding_C::VelocityTimerHandle' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, Player) == 0x000980, "Member 'AGCNL_PlayerIsRiding_C::Player' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, Speed) == 0x000988, "Member 'AGCNL_PlayerIsRiding_C::Speed' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, TeamAffiliation) == 0x000990, "Member 'AGCNL_PlayerIsRiding_C::TeamAffiliation' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, Previous) == 0x000998, "Member 'AGCNL_PlayerIsRiding_C::Previous' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, Enemy_RidingSoundLoop) == 0x0009B0, "Member 'AGCNL_PlayerIsRiding_C::Enemy_RidingSoundLoop' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, As_Fort_Player_Pawn_Athena) == 0x0009B8, "Member 'AGCNL_PlayerIsRiding_C::As_Fort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, JumpParamTarget) == 0x0009C0, "Member 'AGCNL_PlayerIsRiding_C::JumpParamTarget' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, JumpValue) == 0x0009C8, "Member 'AGCNL_PlayerIsRiding_C::JumpValue' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, bIsFalling) == 0x0009D0, "Member 'AGCNL_PlayerIsRiding_C::bIsFalling' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, bCanResetJump) == 0x0009D1, "Member 'AGCNL_PlayerIsRiding_C::bCanResetJump' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, CreatureMovementComponent) == 0x0009D8, "Member 'AGCNL_PlayerIsRiding_C::CreatureMovementComponent' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, JumpResetTimerHandle) == 0x0009E0, "Member 'AGCNL_PlayerIsRiding_C::JumpResetTimerHandle' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, JumpPitchInterpSpeed) == 0x0009E8, "Member 'AGCNL_PlayerIsRiding_C::JumpPitchInterpSpeed' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, RidingCurveTable) == 0x0009F0, "Member 'AGCNL_PlayerIsRiding_C::RidingCurveTable' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, BoarSprintSpeed) == 0x000A00, "Member 'AGCNL_PlayerIsRiding_C::BoarSprintSpeed' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, CurrentVelocity) == 0x000A08, "Member 'AGCNL_PlayerIsRiding_C::CurrentVelocity' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, MaxNormalRunSpeed) == 0x000A10, "Member 'AGCNL_PlayerIsRiding_C::MaxNormalRunSpeed' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, bSprinting) == 0x000A18, "Member 'AGCNL_PlayerIsRiding_C::bSprinting' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, MaxSpeed) == 0x000A20, "Member 'AGCNL_PlayerIsRiding_C::MaxSpeed' has a wrong offset!");
static_assert(offsetof(AGCNL_PlayerIsRiding_C, MaxSpeedClamped) == 0x000A28, "Member 'AGCNL_PlayerIsRiding_C::MaxSpeedClamped' has a wrong offset!");

}
