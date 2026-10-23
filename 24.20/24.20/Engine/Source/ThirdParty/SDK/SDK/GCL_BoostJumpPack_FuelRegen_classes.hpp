#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCL_BoostJumpPack_FuelRegen_C final : public AGameplayCueNotify_Jetpack_FuelRegen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	float                                         FullBlinkTimeline_Blink_108772B949790E60DC9BE1BAC70C2EA1;
	ETimelineDirection                            FullBlinkTimeline__Direction_108772B949790E60DC9BE1BAC70C2EA1;
	uint8                                         Pad_495[0x3];
	class UTimelineComponent*                     FullBlinkTimeline;

public:
	void ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen(int32 EntryPoint);
	void FullBlinkTimeline__FinishedFunc();
	void FullBlinkTimeline__UpdateFunc();
	void ResetBlink(class AFortPlayerPawn* PlayerPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_BoostJumpPack_FuelRegen_C">();
	}
	static class AGCL_BoostJumpPack_FuelRegen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_BoostJumpPack_FuelRegen_C>();
	}
};
static_assert(alignof(AGCL_BoostJumpPack_FuelRegen_C) == 0x000008, "Wrong alignment on AGCL_BoostJumpPack_FuelRegen_C");
static_assert(sizeof(AGCL_BoostJumpPack_FuelRegen_C) == 0x0004A0, "Wrong size on AGCL_BoostJumpPack_FuelRegen_C");
static_assert(offsetof(AGCL_BoostJumpPack_FuelRegen_C, UberGraphFrame) == 0x000488, "Member 'AGCL_BoostJumpPack_FuelRegen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_FuelRegen_C, FullBlinkTimeline_Blink_108772B949790E60DC9BE1BAC70C2EA1) == 0x000490, "Member 'AGCL_BoostJumpPack_FuelRegen_C::FullBlinkTimeline_Blink_108772B949790E60DC9BE1BAC70C2EA1' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_FuelRegen_C, FullBlinkTimeline__Direction_108772B949790E60DC9BE1BAC70C2EA1) == 0x000494, "Member 'AGCL_BoostJumpPack_FuelRegen_C::FullBlinkTimeline__Direction_108772B949790E60DC9BE1BAC70C2EA1' has a wrong offset!");
static_assert(offsetof(AGCL_BoostJumpPack_FuelRegen_C, FullBlinkTimeline) == 0x000498, "Member 'AGCL_BoostJumpPack_FuelRegen_C::FullBlinkTimeline' has a wrong offset!");

}
