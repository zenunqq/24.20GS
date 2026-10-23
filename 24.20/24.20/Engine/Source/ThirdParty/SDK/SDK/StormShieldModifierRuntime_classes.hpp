#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "StormShieldModifierRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class AFortAthenaMutator_SplitStorm final : public AFortAthenaMutator_GameModeBase
{
public:
	TSubclassOf<class AActor>                     SafeZoneProxyClass;
	struct FScalableFloat                         ProxyUpdateFrequency;
	struct FScalableFloat                         SplitParallelTravelDistance;
	struct FScalableFloat                         JoinParallelTravelDistance;
	struct FScalableFloat                         SplitPerpendicularTravelDistance;
	struct FScalableFloat                         JoinAngleFromParallelDegrees;
	struct FScalableFloat                         PhaseToSplitStorm;
	struct FLinearColor                           ProxyMapCircleColor;
	float                                         ProxyMapCircleLineThickness;
	int32                                         ProxyMapCircleLineSegments;
	class AActor*                                 SafeZoneProxy;
	ESplitStormProxyPhase                         CurrentProxyPhase;
	uint8                                         Pad_569[0x3];
	float                                         MoveToHoldWaitDuration;
	float                                         MoveToHoldDuration;
	float                                         MoveToEndWaitDuration;
	float                                         MoveToEndDuration;
	float                                         MoveStartTime;
	struct FSplitStormProxyCircle                 ProxyStartCircle;
	struct FSplitStormProxyCircle                 ProxyEndCircle;
	struct FSplitStormProxyCircle                 ProxyHoldCircle;
	struct FSplitStormProxyCircle                 CurrentProxyCircle;
	uint8                                         Pad_600[0x10];

public:
	void OnRep_CurrentProxyCircle();
	void OnSafeZoneIndicatorSpawned(class AFortSafeZoneIndicator* SafeZoneIndicator);
	void OnSafeZonePhaseChanged();
	void SetProxyCenter(const struct FVector& NewCenter);
	void SetProxyRadius(const float NewRadius);
	void SetSafeZoneProxyPhase(ESplitStormProxyPhase NewPhase);
	void StartProxyUpdateTimer();
	void UpdateProxyCenterAndRadius();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_SplitStorm">();
	}
	static class AFortAthenaMutator_SplitStorm* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_SplitStorm>();
	}
};
static_assert(alignof(AFortAthenaMutator_SplitStorm) == 0x000008, "Wrong alignment on AFortAthenaMutator_SplitStorm");
static_assert(sizeof(AFortAthenaMutator_SplitStorm) == 0x000610, "Wrong size on AFortAthenaMutator_SplitStorm");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, SafeZoneProxyClass) == 0x000450, "Member 'AFortAthenaMutator_SplitStorm::SafeZoneProxyClass' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, ProxyUpdateFrequency) == 0x000458, "Member 'AFortAthenaMutator_SplitStorm::ProxyUpdateFrequency' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, SplitParallelTravelDistance) == 0x000480, "Member 'AFortAthenaMutator_SplitStorm::SplitParallelTravelDistance' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, JoinParallelTravelDistance) == 0x0004A8, "Member 'AFortAthenaMutator_SplitStorm::JoinParallelTravelDistance' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, SplitPerpendicularTravelDistance) == 0x0004D0, "Member 'AFortAthenaMutator_SplitStorm::SplitPerpendicularTravelDistance' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, JoinAngleFromParallelDegrees) == 0x0004F8, "Member 'AFortAthenaMutator_SplitStorm::JoinAngleFromParallelDegrees' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, PhaseToSplitStorm) == 0x000520, "Member 'AFortAthenaMutator_SplitStorm::PhaseToSplitStorm' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, ProxyMapCircleColor) == 0x000548, "Member 'AFortAthenaMutator_SplitStorm::ProxyMapCircleColor' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, ProxyMapCircleLineThickness) == 0x000558, "Member 'AFortAthenaMutator_SplitStorm::ProxyMapCircleLineThickness' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, ProxyMapCircleLineSegments) == 0x00055C, "Member 'AFortAthenaMutator_SplitStorm::ProxyMapCircleLineSegments' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, SafeZoneProxy) == 0x000560, "Member 'AFortAthenaMutator_SplitStorm::SafeZoneProxy' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, CurrentProxyPhase) == 0x000568, "Member 'AFortAthenaMutator_SplitStorm::CurrentProxyPhase' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, MoveToHoldWaitDuration) == 0x00056C, "Member 'AFortAthenaMutator_SplitStorm::MoveToHoldWaitDuration' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, MoveToHoldDuration) == 0x000570, "Member 'AFortAthenaMutator_SplitStorm::MoveToHoldDuration' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, MoveToEndWaitDuration) == 0x000574, "Member 'AFortAthenaMutator_SplitStorm::MoveToEndWaitDuration' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, MoveToEndDuration) == 0x000578, "Member 'AFortAthenaMutator_SplitStorm::MoveToEndDuration' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, MoveStartTime) == 0x00057C, "Member 'AFortAthenaMutator_SplitStorm::MoveStartTime' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, ProxyStartCircle) == 0x000580, "Member 'AFortAthenaMutator_SplitStorm::ProxyStartCircle' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, ProxyEndCircle) == 0x0005A0, "Member 'AFortAthenaMutator_SplitStorm::ProxyEndCircle' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, ProxyHoldCircle) == 0x0005C0, "Member 'AFortAthenaMutator_SplitStorm::ProxyHoldCircle' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SplitStorm, CurrentProxyCircle) == 0x0005E0, "Member 'AFortAthenaMutator_SplitStorm::CurrentProxyCircle' has a wrong offset!");

}
