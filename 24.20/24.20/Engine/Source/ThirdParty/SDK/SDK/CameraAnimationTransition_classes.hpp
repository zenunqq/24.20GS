#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class ACameraAnimationTransition_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;
	float                                         Timeline_0_NewTrack_0_2750533A46B9AEF2BE294F8153FE4FD4;
	ETimelineDirection                            Timeline_0__Direction_2750533A46B9AEF2BE294F8153FE4FD4;
	uint8                                         Pad_29D[0x3];
	class UTimelineComponent*                     Timeline_0;
	class AFortnitePartyBackdrop_Camera_C*        CameraBR;
	struct FTransform                             CameraLocationBR;
	class AFortnitePartyBackdrop_Camera_C*        CameraBR16Player;
	class AFortnitePartyBackdrop_Camera_C*        CameraCreative;
	class AFortnitePartyBackdrop_Camera_C*        CameraCreative16Player;
	uint8                                         Pad_328[0x8];
	struct FTransform                             CameraLocationCreative;
	double                                        FOVPostion1;
	double                                        FOVPostion2;

public:
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void MoveCameraUp();
	void MoveCameraDown();
	void UserConstructionScript();
	void ExecuteUbergraph_CameraAnimationTransition(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CameraAnimationTransition_C">();
	}
	static class ACameraAnimationTransition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraAnimationTransition_C>();
	}
};
static_assert(alignof(ACameraAnimationTransition_C) == 0x000010, "Wrong alignment on ACameraAnimationTransition_C");
static_assert(sizeof(ACameraAnimationTransition_C) == 0x0003A0, "Wrong size on ACameraAnimationTransition_C");
static_assert(offsetof(ACameraAnimationTransition_C, UberGraphFrame) == 0x000288, "Member 'ACameraAnimationTransition_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACameraAnimationTransition_C, DefaultSceneRoot) == 0x000290, "Member 'ACameraAnimationTransition_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ACameraAnimationTransition_C, Timeline_0_NewTrack_0_2750533A46B9AEF2BE294F8153FE4FD4) == 0x000298, "Member 'ACameraAnimationTransition_C::Timeline_0_NewTrack_0_2750533A46B9AEF2BE294F8153FE4FD4' has a wrong offset!");
static_assert(offsetof(ACameraAnimationTransition_C, Timeline_0__Direction_2750533A46B9AEF2BE294F8153FE4FD4) == 0x00029C, "Member 'ACameraAnimationTransition_C::Timeline_0__Direction_2750533A46B9AEF2BE294F8153FE4FD4' has a wrong offset!");
static_assert(offsetof(ACameraAnimationTransition_C, Timeline_0) == 0x0002A0, "Member 'ACameraAnimationTransition_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ACameraAnimationTransition_C, CameraBR) == 0x0002A8, "Member 'ACameraAnimationTransition_C::CameraBR' has a wrong offset!");
static_assert(offsetof(ACameraAnimationTransition_C, CameraLocationBR) == 0x0002B0, "Member 'ACameraAnimationTransition_C::CameraLocationBR' has a wrong offset!");
static_assert(offsetof(ACameraAnimationTransition_C, CameraBR16Player) == 0x000310, "Member 'ACameraAnimationTransition_C::CameraBR16Player' has a wrong offset!");
static_assert(offsetof(ACameraAnimationTransition_C, CameraCreative) == 0x000318, "Member 'ACameraAnimationTransition_C::CameraCreative' has a wrong offset!");
static_assert(offsetof(ACameraAnimationTransition_C, CameraCreative16Player) == 0x000320, "Member 'ACameraAnimationTransition_C::CameraCreative16Player' has a wrong offset!");
static_assert(offsetof(ACameraAnimationTransition_C, CameraLocationCreative) == 0x000330, "Member 'ACameraAnimationTransition_C::CameraLocationCreative' has a wrong offset!");
static_assert(offsetof(ACameraAnimationTransition_C, FOVPostion1) == 0x000390, "Member 'ACameraAnimationTransition_C::FOVPostion1' has a wrong offset!");
static_assert(offsetof(ACameraAnimationTransition_C, FOVPostion2) == 0x000398, "Member 'ACameraAnimationTransition_C::FOVPostion2' has a wrong offset!");

}
