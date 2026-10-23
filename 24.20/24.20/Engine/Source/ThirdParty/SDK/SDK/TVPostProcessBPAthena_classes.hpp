#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TVPostProcessBP_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class ATVPostProcessBPAthena_C final : public ATVPostProcessBP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TVPostProcessBPAthena_C;
	class UPostProcessComponent*                  FullScreenTVPP_OnlyMaterialModified;
	float                                         FrontEndCameraSwitchFadeAthena_SwipeLines_Animation_8828A7EA43DFA9153F986F805918F9F7;
	float                                         FrontEndCameraSwitchFadeAthena_PostProcessVisibility_8828A7EA43DFA9153F986F805918F9F7;
	ETimelineDirection                            FrontEndCameraSwitchFadeAthena__Direction_8828A7EA43DFA9153F986F805918F9F7;
	uint8                                         Pad_2C1[0x7];
	class UTimelineComponent*                     FrontEndCameraSwitchFadeAthena;

public:
	void FrontEndCameraSwitchFadeAthena__UpdateFunc();
	void FrontEndCameraSwitchFadeAthena__FinishedFunc();
	void ExecuteUbergraph_TVPostProcessBPAthena(int32 EntryPoint);
	void IsEnabledForCurrentSubgame(bool* bEnabled);
	void ExecuteCameraSwitch();
	void Camera_DisableEffects();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TVPostProcessBPAthena_C">();
	}
	static class ATVPostProcessBPAthena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATVPostProcessBPAthena_C>();
	}
};
static_assert(alignof(ATVPostProcessBPAthena_C) == 0x000008, "Wrong alignment on ATVPostProcessBPAthena_C");
static_assert(sizeof(ATVPostProcessBPAthena_C) == 0x0002D0, "Wrong size on ATVPostProcessBPAthena_C");
static_assert(offsetof(ATVPostProcessBPAthena_C, UberGraphFrame_TVPostProcessBPAthena_C) == 0x0002A8, "Member 'ATVPostProcessBPAthena_C::UberGraphFrame_TVPostProcessBPAthena_C' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBPAthena_C, FullScreenTVPP_OnlyMaterialModified) == 0x0002B0, "Member 'ATVPostProcessBPAthena_C::FullScreenTVPP_OnlyMaterialModified' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBPAthena_C, FrontEndCameraSwitchFadeAthena_SwipeLines_Animation_8828A7EA43DFA9153F986F805918F9F7) == 0x0002B8, "Member 'ATVPostProcessBPAthena_C::FrontEndCameraSwitchFadeAthena_SwipeLines_Animation_8828A7EA43DFA9153F986F805918F9F7' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBPAthena_C, FrontEndCameraSwitchFadeAthena_PostProcessVisibility_8828A7EA43DFA9153F986F805918F9F7) == 0x0002BC, "Member 'ATVPostProcessBPAthena_C::FrontEndCameraSwitchFadeAthena_PostProcessVisibility_8828A7EA43DFA9153F986F805918F9F7' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBPAthena_C, FrontEndCameraSwitchFadeAthena__Direction_8828A7EA43DFA9153F986F805918F9F7) == 0x0002C0, "Member 'ATVPostProcessBPAthena_C::FrontEndCameraSwitchFadeAthena__Direction_8828A7EA43DFA9153F986F805918F9F7' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBPAthena_C, FrontEndCameraSwitchFadeAthena) == 0x0002C8, "Member 'ATVPostProcessBPAthena_C::FrontEndCameraSwitchFadeAthena' has a wrong offset!");

}
