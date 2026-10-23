#pragma once

#include "Basic.hpp"

#include "IrwinRuntime_classes.hpp"
#include "LabradorRuntime_structs.hpp"
#include "FortniteAI_classes.hpp"

namespace SDK
{

class UFortAIFaunaAnimInstance_Labrador final : public UFortAIFaunaAnimInstance
{
public:
	bool                                          bHighVelocity;
	bool                                          bIsInterruptible;
	bool                                          bLocoToIdle;
	bool                                          bIdleToLoco;
	bool                                          bJumpStartToJumpLoop;
	bool                                          bJumpLandToMovement;
	bool                                          bIsRunning;
	bool                                          bIdleToFalling;
	bool                                          bToppledOnGround;
	bool                                          bTransitionToLand;
	uint8                                         Pad_6DA[0x2];
	float                                         TargetDistance;
	bool                                          bTargetIsClose;
	bool                                          bIsToppled;
	bool                                          bIsLeaking;
	uint8                                         Pad_6E3[0x1];
	float                                         MinHighVelocityMagnitude;
	float                                         MaxInterruptibleCurveValue;
	float                                         LocoIdleTransitionThreshold;
	float                                         RunSpeedThreshold;
	float                                         JumpLandToMovementInterruptibleThreshold;
	float                                         MinTargetIsCloseDistance;
	class FName                                   CurveName_Interruptible;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIFaunaAnimInstance_Labrador">();
	}
	static class UFortAIFaunaAnimInstance_Labrador* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIFaunaAnimInstance_Labrador>();
	}
};
static_assert(alignof(UFortAIFaunaAnimInstance_Labrador) == 0x000010, "Wrong alignment on UFortAIFaunaAnimInstance_Labrador");
static_assert(sizeof(UFortAIFaunaAnimInstance_Labrador) == 0x000700, "Wrong size on UFortAIFaunaAnimInstance_Labrador");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bHighVelocity) == 0x0006D0, "Member 'UFortAIFaunaAnimInstance_Labrador::bHighVelocity' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bIsInterruptible) == 0x0006D1, "Member 'UFortAIFaunaAnimInstance_Labrador::bIsInterruptible' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bLocoToIdle) == 0x0006D2, "Member 'UFortAIFaunaAnimInstance_Labrador::bLocoToIdle' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bIdleToLoco) == 0x0006D3, "Member 'UFortAIFaunaAnimInstance_Labrador::bIdleToLoco' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bJumpStartToJumpLoop) == 0x0006D4, "Member 'UFortAIFaunaAnimInstance_Labrador::bJumpStartToJumpLoop' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bJumpLandToMovement) == 0x0006D5, "Member 'UFortAIFaunaAnimInstance_Labrador::bJumpLandToMovement' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bIsRunning) == 0x0006D6, "Member 'UFortAIFaunaAnimInstance_Labrador::bIsRunning' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bIdleToFalling) == 0x0006D7, "Member 'UFortAIFaunaAnimInstance_Labrador::bIdleToFalling' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bToppledOnGround) == 0x0006D8, "Member 'UFortAIFaunaAnimInstance_Labrador::bToppledOnGround' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bTransitionToLand) == 0x0006D9, "Member 'UFortAIFaunaAnimInstance_Labrador::bTransitionToLand' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, TargetDistance) == 0x0006DC, "Member 'UFortAIFaunaAnimInstance_Labrador::TargetDistance' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bTargetIsClose) == 0x0006E0, "Member 'UFortAIFaunaAnimInstance_Labrador::bTargetIsClose' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bIsToppled) == 0x0006E1, "Member 'UFortAIFaunaAnimInstance_Labrador::bIsToppled' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bIsLeaking) == 0x0006E2, "Member 'UFortAIFaunaAnimInstance_Labrador::bIsLeaking' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, MinHighVelocityMagnitude) == 0x0006E4, "Member 'UFortAIFaunaAnimInstance_Labrador::MinHighVelocityMagnitude' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, MaxInterruptibleCurveValue) == 0x0006E8, "Member 'UFortAIFaunaAnimInstance_Labrador::MaxInterruptibleCurveValue' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, LocoIdleTransitionThreshold) == 0x0006EC, "Member 'UFortAIFaunaAnimInstance_Labrador::LocoIdleTransitionThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, RunSpeedThreshold) == 0x0006F0, "Member 'UFortAIFaunaAnimInstance_Labrador::RunSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, JumpLandToMovementInterruptibleThreshold) == 0x0006F4, "Member 'UFortAIFaunaAnimInstance_Labrador::JumpLandToMovementInterruptibleThreshold' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, MinTargetIsCloseDistance) == 0x0006F8, "Member 'UFortAIFaunaAnimInstance_Labrador::MinTargetIsCloseDistance' has a wrong offset!");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, CurveName_Interruptible) == 0x0006FC, "Member 'UFortAIFaunaAnimInstance_Labrador::CurveName_Interruptible' has a wrong offset!");

class UFortLabradorComponent_Telemetry final : public UFortAIComponent_Telemetry
{
public:
	bool                                          bWasAwake;
	uint8                                         Pad_109[0x7];
	class FString                                 InstigatorAwakeNetIDString;
	ELabradorDespawnReason                        DespawnReason;
	uint8                                         Pad_121[0x3];
	float                                         DamageReceivedFromPlayers;

public:
	void OnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnTeleport();
	void OnWakeUp(class AActor* GoalActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortLabradorComponent_Telemetry">();
	}
	static class UFortLabradorComponent_Telemetry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortLabradorComponent_Telemetry>();
	}
};
static_assert(alignof(UFortLabradorComponent_Telemetry) == 0x000008, "Wrong alignment on UFortLabradorComponent_Telemetry");
static_assert(sizeof(UFortLabradorComponent_Telemetry) == 0x000128, "Wrong size on UFortLabradorComponent_Telemetry");
static_assert(offsetof(UFortLabradorComponent_Telemetry, bWasAwake) == 0x000108, "Member 'UFortLabradorComponent_Telemetry::bWasAwake' has a wrong offset!");
static_assert(offsetof(UFortLabradorComponent_Telemetry, InstigatorAwakeNetIDString) == 0x000110, "Member 'UFortLabradorComponent_Telemetry::InstigatorAwakeNetIDString' has a wrong offset!");
static_assert(offsetof(UFortLabradorComponent_Telemetry, DespawnReason) == 0x000120, "Member 'UFortLabradorComponent_Telemetry::DespawnReason' has a wrong offset!");
static_assert(offsetof(UFortLabradorComponent_Telemetry, DamageReceivedFromPlayers) == 0x000124, "Member 'UFortLabradorComponent_Telemetry::DamageReceivedFromPlayers' has a wrong offset!");

}
