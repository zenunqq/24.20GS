#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FieldSystemEngine_classes.hpp"
#include "Chaos_structs.hpp"

namespace SDK
{

class AFN_RadialForce_C final : public AFieldSystemActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UOperatorField*                         DistanceFadMult;
	class URadialFalloff*                         DistanceFalloff;
	class UWaveScalar*                            DecayScalar;
	class UOperatorField*                         DecayMult;
	class UWaveScalar*                            RadialFalloffWave;
	class UOperatorField*                         RadialVecMultiplyRadialFallOff;
	class URadialVector*                          RadialVector;
	float                                         Timeline_0_Radius_CD3BE591473F9A800DF08A8AC8690190;
	ETimelineDirection                            Timeline_0__Direction_CD3BE591473F9A800DF08A8AC8690190;
	uint8                                         Pad_2D5[0x3];
	class UTimelineComponent*                     Timeline_0;
	double                                        Wave_Period;
	double                                        Force_Duration;
	double                                        Radius;
	double                                        Magnitude;
	double                                        PlayRate;
	double                                        Scale;
	double                                        Impact_Time;
	double                                        Period;
	double                                        WaveLength;
	double                                        Time_Decay;
	EFieldFalloffType                             Falloff_Type;
	uint8                                         Pad_331[0x7];
	double                                        Expansion;
	double                                        Impact_Radius;
	double                                        Strength;
	float                                         DelayTime;

public:
	void ExecuteUbergraph_FN_RadialForce(int32 EntryPoint);
	struct FTransform NewFunction_0(double Roll, double Scale_0);
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FN_RadialForce_C">();
	}
	static class AFN_RadialForce_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFN_RadialForce_C>();
	}
};
static_assert(alignof(AFN_RadialForce_C) == 0x000008, "Wrong alignment on AFN_RadialForce_C");
static_assert(sizeof(AFN_RadialForce_C) == 0x000358, "Wrong size on AFN_RadialForce_C");
static_assert(offsetof(AFN_RadialForce_C, UberGraphFrame) == 0x000290, "Member 'AFN_RadialForce_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, DistanceFadMult) == 0x000298, "Member 'AFN_RadialForce_C::DistanceFadMult' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, DistanceFalloff) == 0x0002A0, "Member 'AFN_RadialForce_C::DistanceFalloff' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, DecayScalar) == 0x0002A8, "Member 'AFN_RadialForce_C::DecayScalar' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, DecayMult) == 0x0002B0, "Member 'AFN_RadialForce_C::DecayMult' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, RadialFalloffWave) == 0x0002B8, "Member 'AFN_RadialForce_C::RadialFalloffWave' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, RadialVecMultiplyRadialFallOff) == 0x0002C0, "Member 'AFN_RadialForce_C::RadialVecMultiplyRadialFallOff' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, RadialVector) == 0x0002C8, "Member 'AFN_RadialForce_C::RadialVector' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Timeline_0_Radius_CD3BE591473F9A800DF08A8AC8690190) == 0x0002D0, "Member 'AFN_RadialForce_C::Timeline_0_Radius_CD3BE591473F9A800DF08A8AC8690190' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Timeline_0__Direction_CD3BE591473F9A800DF08A8AC8690190) == 0x0002D4, "Member 'AFN_RadialForce_C::Timeline_0__Direction_CD3BE591473F9A800DF08A8AC8690190' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Timeline_0) == 0x0002D8, "Member 'AFN_RadialForce_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Wave_Period) == 0x0002E0, "Member 'AFN_RadialForce_C::Wave_Period' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Force_Duration) == 0x0002E8, "Member 'AFN_RadialForce_C::Force_Duration' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Radius) == 0x0002F0, "Member 'AFN_RadialForce_C::Radius' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Magnitude) == 0x0002F8, "Member 'AFN_RadialForce_C::Magnitude' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, PlayRate) == 0x000300, "Member 'AFN_RadialForce_C::PlayRate' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Scale) == 0x000308, "Member 'AFN_RadialForce_C::Scale' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Impact_Time) == 0x000310, "Member 'AFN_RadialForce_C::Impact_Time' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Period) == 0x000318, "Member 'AFN_RadialForce_C::Period' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, WaveLength) == 0x000320, "Member 'AFN_RadialForce_C::WaveLength' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Time_Decay) == 0x000328, "Member 'AFN_RadialForce_C::Time_Decay' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Falloff_Type) == 0x000330, "Member 'AFN_RadialForce_C::Falloff_Type' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Expansion) == 0x000338, "Member 'AFN_RadialForce_C::Expansion' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Impact_Radius) == 0x000340, "Member 'AFN_RadialForce_C::Impact_Radius' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, Strength) == 0x000348, "Member 'AFN_RadialForce_C::Strength' has a wrong offset!");
static_assert(offsetof(AFN_RadialForce_C, DelayTime) == 0x000350, "Member 'AFN_RadialForce_C::DelayTime' has a wrong offset!");

}
