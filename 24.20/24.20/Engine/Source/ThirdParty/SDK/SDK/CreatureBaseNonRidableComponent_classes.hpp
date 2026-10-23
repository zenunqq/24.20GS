#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UCreatureBaseNonRidableComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	double                                        Jump_Attach_Ground_Height_Min;
	double                                        Jump_Attach_Ground_Height_Buffer;
	bool                                          Uses_Alt_Riding_Message;
	bool                                          KillOnRideAttempt;

public:
	void AlternateRidingEvent();
	void ExecuteUbergraph_CreatureBaseNonRidableComponent(int32 EntryPoint);
	void GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage);
	void ToggleRidingAlternative();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CreatureBaseNonRidableComponent_C">();
	}
	static class UCreatureBaseNonRidableComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreatureBaseNonRidableComponent_C>();
	}
};
static_assert(alignof(UCreatureBaseNonRidableComponent_C) == 0x000008, "Wrong alignment on UCreatureBaseNonRidableComponent_C");
static_assert(sizeof(UCreatureBaseNonRidableComponent_C) == 0x0000C0, "Wrong size on UCreatureBaseNonRidableComponent_C");
static_assert(offsetof(UCreatureBaseNonRidableComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UCreatureBaseNonRidableComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCreatureBaseNonRidableComponent_C, Jump_Attach_Ground_Height_Min) == 0x0000A8, "Member 'UCreatureBaseNonRidableComponent_C::Jump_Attach_Ground_Height_Min' has a wrong offset!");
static_assert(offsetof(UCreatureBaseNonRidableComponent_C, Jump_Attach_Ground_Height_Buffer) == 0x0000B0, "Member 'UCreatureBaseNonRidableComponent_C::Jump_Attach_Ground_Height_Buffer' has a wrong offset!");
static_assert(offsetof(UCreatureBaseNonRidableComponent_C, Uses_Alt_Riding_Message) == 0x0000B8, "Member 'UCreatureBaseNonRidableComponent_C::Uses_Alt_Riding_Message' has a wrong offset!");
static_assert(offsetof(UCreatureBaseNonRidableComponent_C, KillOnRideAttempt) == 0x0000B9, "Member 'UCreatureBaseNonRidableComponent_C::KillOnRideAttempt' has a wrong offset!");

}
