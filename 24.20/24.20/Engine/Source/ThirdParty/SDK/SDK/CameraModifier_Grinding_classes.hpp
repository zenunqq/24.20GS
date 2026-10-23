#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GrindRailRuntime_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UCameraModifier_Grinding_C final : public UFortCameraModifier_Grinding
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBP_GrindingComponent_C*                GrindingComp;
	double                                        CurrentForward;
	double                                        CurrentRight;
	double                                        CurrentLean;
	double                                        CurrentFOV;
	double                                        CurrentOffset;
	struct FVector                                CurrentOffset_Vec;
	double                                        CurrentUp;
	struct FVector                                SavedLocation;
	bool                                          LocationLocked;
	uint8                                         Pad_A31[0x7];
	double                                        TimeWhenLocked;
	double                                        TimeWhenUnlocked;
	float                                         ADS_Alpha;
	uint8                                         Pad_A4C[0x4];
	class UCurveFloat*                            AlphaCurve;
	struct FVector                                StartingLocation;
	bool                                          TurningOff;
	bool                                          SF_SnapToGrindingLocation;
	uint8                                         Pad_A72[0x6];
	struct FScalableFloat                         BaseRightOffsetMultiplier;
	struct FScalableFloat                         SprintingRightOffsetMultiplier;
	struct FScalableFloat                         BoostedRightOffsetMultiplier;
	struct FScalableFloat                         BaseUpOffsetMultiplier;
	struct FScalableFloat                         SprintingUpOffsetMultiplier;
	struct FScalableFloat                         BoostedUpOffsetMultiplier;

public:
	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV);
	void ExecuteUbergraph_CameraModifier_Grinding(int32 EntryPoint);
	void SetStartingLocation(const struct FVector& StartingLocation_0);
	void TurnOff();
	void TurnOn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CameraModifier_Grinding_C">();
	}
	static class UCameraModifier_Grinding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraModifier_Grinding_C>();
	}
};
static_assert(alignof(UCameraModifier_Grinding_C) == 0x000008, "Wrong alignment on UCameraModifier_Grinding_C");
static_assert(sizeof(UCameraModifier_Grinding_C) == 0x000B68, "Wrong size on UCameraModifier_Grinding_C");
static_assert(offsetof(UCameraModifier_Grinding_C, UberGraphFrame) == 0x0009C0, "Member 'UCameraModifier_Grinding_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, GrindingComp) == 0x0009C8, "Member 'UCameraModifier_Grinding_C::GrindingComp' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, CurrentForward) == 0x0009D0, "Member 'UCameraModifier_Grinding_C::CurrentForward' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, CurrentRight) == 0x0009D8, "Member 'UCameraModifier_Grinding_C::CurrentRight' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, CurrentLean) == 0x0009E0, "Member 'UCameraModifier_Grinding_C::CurrentLean' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, CurrentFOV) == 0x0009E8, "Member 'UCameraModifier_Grinding_C::CurrentFOV' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, CurrentOffset) == 0x0009F0, "Member 'UCameraModifier_Grinding_C::CurrentOffset' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, CurrentOffset_Vec) == 0x0009F8, "Member 'UCameraModifier_Grinding_C::CurrentOffset_Vec' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, CurrentUp) == 0x000A10, "Member 'UCameraModifier_Grinding_C::CurrentUp' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, SavedLocation) == 0x000A18, "Member 'UCameraModifier_Grinding_C::SavedLocation' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, LocationLocked) == 0x000A30, "Member 'UCameraModifier_Grinding_C::LocationLocked' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, TimeWhenLocked) == 0x000A38, "Member 'UCameraModifier_Grinding_C::TimeWhenLocked' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, TimeWhenUnlocked) == 0x000A40, "Member 'UCameraModifier_Grinding_C::TimeWhenUnlocked' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, ADS_Alpha) == 0x000A48, "Member 'UCameraModifier_Grinding_C::ADS_Alpha' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, AlphaCurve) == 0x000A50, "Member 'UCameraModifier_Grinding_C::AlphaCurve' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, StartingLocation) == 0x000A58, "Member 'UCameraModifier_Grinding_C::StartingLocation' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, TurningOff) == 0x000A70, "Member 'UCameraModifier_Grinding_C::TurningOff' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, SF_SnapToGrindingLocation) == 0x000A71, "Member 'UCameraModifier_Grinding_C::SF_SnapToGrindingLocation' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, BaseRightOffsetMultiplier) == 0x000A78, "Member 'UCameraModifier_Grinding_C::BaseRightOffsetMultiplier' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, SprintingRightOffsetMultiplier) == 0x000AA0, "Member 'UCameraModifier_Grinding_C::SprintingRightOffsetMultiplier' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, BoostedRightOffsetMultiplier) == 0x000AC8, "Member 'UCameraModifier_Grinding_C::BoostedRightOffsetMultiplier' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, BaseUpOffsetMultiplier) == 0x000AF0, "Member 'UCameraModifier_Grinding_C::BaseUpOffsetMultiplier' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, SprintingUpOffsetMultiplier) == 0x000B18, "Member 'UCameraModifier_Grinding_C::SprintingUpOffsetMultiplier' has a wrong offset!");
static_assert(offsetof(UCameraModifier_Grinding_C, BoostedUpOffsetMultiplier) == 0x000B40, "Member 'UCameraModifier_Grinding_C::BoostedUpOffsetMultiplier' has a wrong offset!");

}
