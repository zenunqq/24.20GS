#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteAI_structs.hpp"
#include "FortniteAI_classes.hpp"
#include "NavigationSystem_classes.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFortAthenaCaretakerAIController final : public AAthenaAIController
{
public:
	uint8                                         Pad_5B0[0x8];

public:
	void DebugUpdate(float UpdateInterval);
	void OnMovementModeChanged(class ACharacter* CharacterOwner, EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaCaretakerAIController">();
	}
	static class AFortAthenaCaretakerAIController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaCaretakerAIController>();
	}
};
static_assert(alignof(AFortAthenaCaretakerAIController) == 0x000008, "Wrong alignment on AFortAthenaCaretakerAIController");
static_assert(sizeof(AFortAthenaCaretakerAIController) == 0x0005B8, "Wrong size on AFortAthenaCaretakerAIController");

class UFortBTTask_CaretakerMoveTo final : public UBTTask_MoveTo
{
public:
	struct FBlackboardKeySelector                 FocalPointWhileMoving;
	EPathObstacleAction                           PathObstacleAction;
	uint8                                         Pad_D9[0x3];
	uint8                                         bEnableSlowdownAtGoal : 1;
	uint8                                         bMoveDirectlyTowards : 1;
	uint8                                         bStopAtGoal : 1;
	uint8                                         bFinishMoveOnOverlap : 1;
	uint8                                         Pad_DD[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTTask_CaretakerMoveTo">();
	}
	static class UFortBTTask_CaretakerMoveTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTTask_CaretakerMoveTo>();
	}
};
static_assert(alignof(UFortBTTask_CaretakerMoveTo) == 0x000008, "Wrong alignment on UFortBTTask_CaretakerMoveTo");
static_assert(sizeof(UFortBTTask_CaretakerMoveTo) == 0x0000E0, "Wrong size on UFortBTTask_CaretakerMoveTo");
static_assert(offsetof(UFortBTTask_CaretakerMoveTo, FocalPointWhileMoving) == 0x0000B0, "Member 'UFortBTTask_CaretakerMoveTo::FocalPointWhileMoving' has a wrong offset!");
static_assert(offsetof(UFortBTTask_CaretakerMoveTo, PathObstacleAction) == 0x0000D8, "Member 'UFortBTTask_CaretakerMoveTo::PathObstacleAction' has a wrong offset!");

class UFortNavigationFilter_Caretaker final : public UNavigationQueryFilter
{
public:
	float                                         EndPointAcceptableRadius;
	uint8                                         Pad_4C[0x4];
	TSubclassOf<class UNavigationQueryFilter>     EndPointFilterClass;
	uint8                                         bEndPointReachTestIncludesAgentRadius : 1;
	uint8                                         bEndPointReachTestIncludesGoalRadius : 1;
	uint8                                         Pad_59[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNavigationFilter_Caretaker">();
	}
	static class UFortNavigationFilter_Caretaker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavigationFilter_Caretaker>();
	}
};
static_assert(alignof(UFortNavigationFilter_Caretaker) == 0x000008, "Wrong alignment on UFortNavigationFilter_Caretaker");
static_assert(sizeof(UFortNavigationFilter_Caretaker) == 0x000060, "Wrong size on UFortNavigationFilter_Caretaker");
static_assert(offsetof(UFortNavigationFilter_Caretaker, EndPointAcceptableRadius) == 0x000048, "Member 'UFortNavigationFilter_Caretaker::EndPointAcceptableRadius' has a wrong offset!");
static_assert(offsetof(UFortNavigationFilter_Caretaker, EndPointFilterClass) == 0x000050, "Member 'UFortNavigationFilter_Caretaker::EndPointFilterClass' has a wrong offset!");

class UFortAITask_CaretakerMove final : public UFortAbilityTask_MoveAI
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAITask_CaretakerMove">();
	}
	static class UFortAITask_CaretakerMove* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAITask_CaretakerMove>();
	}
};
static_assert(alignof(UFortAITask_CaretakerMove) == 0x000008, "Wrong alignment on UFortAITask_CaretakerMove");
static_assert(sizeof(UFortAITask_CaretakerMove) == 0x000198, "Wrong size on UFortAITask_CaretakerMove");

class UFortAIAnimInstance_Caretaker final : public UFortAIAnimInstance
{
public:
	bool                                          bIsMoving;
	uint8                                         Pad_571[0x3];
	float                                         WalkPlayRate;
	float                                         AimOffsetCurve;
	bool                                          bFootPhase_StopLeftPlant;
	bool                                          bFootPhase_StopLeftPass;
	bool                                          bFootPhase_StopRightPlant;
	bool                                          bFootPhase_StopRightPass;
	float                                         BreathingCurve;
	float                                         MovingTreshold;
	class FName                                   CurveName_AimOffsetCurve;
	class FName                                   CurveName_FootPhase;
	class FName                                   CurveName_BreathingCurve;
	class FName                                   SocketName_FX_Chest;
	class FName                                   ParamName_ChestSocketLocation;
	class FName                                   ParamName_ChestSocketVector;
	float                                         FirstFootPhaseMin;
	float                                         SecondFootPhaseMin;
	float                                         ThirdFootPhaseMin;
	float                                         FourthFootPhaseMin;
	float                                         FootPhaseMax;
	uint8                                         Pad_5B4[0x4];
	class UFortAnimWorldStriderComponent*         WorldStriderComponent;

public:
	void SetDelayedMaterialParameters();

	float GetStartAnimPosition() const;
	float GetWalkPlayRateValue() const;
	float GetWalkSpeedWarpingValue() const;
	class UFortAnimWorldStriderComponent* GetWorldStriderComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAIAnimInstance_Caretaker">();
	}
	static class UFortAIAnimInstance_Caretaker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAIAnimInstance_Caretaker>();
	}
};
static_assert(alignof(UFortAIAnimInstance_Caretaker) == 0x000010, "Wrong alignment on UFortAIAnimInstance_Caretaker");
static_assert(sizeof(UFortAIAnimInstance_Caretaker) == 0x0005C0, "Wrong size on UFortAIAnimInstance_Caretaker");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, bIsMoving) == 0x000570, "Member 'UFortAIAnimInstance_Caretaker::bIsMoving' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, WalkPlayRate) == 0x000574, "Member 'UFortAIAnimInstance_Caretaker::WalkPlayRate' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, AimOffsetCurve) == 0x000578, "Member 'UFortAIAnimInstance_Caretaker::AimOffsetCurve' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, bFootPhase_StopLeftPlant) == 0x00057C, "Member 'UFortAIAnimInstance_Caretaker::bFootPhase_StopLeftPlant' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, bFootPhase_StopLeftPass) == 0x00057D, "Member 'UFortAIAnimInstance_Caretaker::bFootPhase_StopLeftPass' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, bFootPhase_StopRightPlant) == 0x00057E, "Member 'UFortAIAnimInstance_Caretaker::bFootPhase_StopRightPlant' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, bFootPhase_StopRightPass) == 0x00057F, "Member 'UFortAIAnimInstance_Caretaker::bFootPhase_StopRightPass' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, BreathingCurve) == 0x000580, "Member 'UFortAIAnimInstance_Caretaker::BreathingCurve' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, MovingTreshold) == 0x000584, "Member 'UFortAIAnimInstance_Caretaker::MovingTreshold' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, CurveName_AimOffsetCurve) == 0x000588, "Member 'UFortAIAnimInstance_Caretaker::CurveName_AimOffsetCurve' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, CurveName_FootPhase) == 0x00058C, "Member 'UFortAIAnimInstance_Caretaker::CurveName_FootPhase' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, CurveName_BreathingCurve) == 0x000590, "Member 'UFortAIAnimInstance_Caretaker::CurveName_BreathingCurve' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, SocketName_FX_Chest) == 0x000594, "Member 'UFortAIAnimInstance_Caretaker::SocketName_FX_Chest' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, ParamName_ChestSocketLocation) == 0x000598, "Member 'UFortAIAnimInstance_Caretaker::ParamName_ChestSocketLocation' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, ParamName_ChestSocketVector) == 0x00059C, "Member 'UFortAIAnimInstance_Caretaker::ParamName_ChestSocketVector' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, FirstFootPhaseMin) == 0x0005A0, "Member 'UFortAIAnimInstance_Caretaker::FirstFootPhaseMin' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, SecondFootPhaseMin) == 0x0005A4, "Member 'UFortAIAnimInstance_Caretaker::SecondFootPhaseMin' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, ThirdFootPhaseMin) == 0x0005A8, "Member 'UFortAIAnimInstance_Caretaker::ThirdFootPhaseMin' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, FourthFootPhaseMin) == 0x0005AC, "Member 'UFortAIAnimInstance_Caretaker::FourthFootPhaseMin' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, FootPhaseMax) == 0x0005B0, "Member 'UFortAIAnimInstance_Caretaker::FootPhaseMax' has a wrong offset!");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, WorldStriderComponent) == 0x0005B8, "Member 'UFortAIAnimInstance_Caretaker::WorldStriderComponent' has a wrong offset!");

}
