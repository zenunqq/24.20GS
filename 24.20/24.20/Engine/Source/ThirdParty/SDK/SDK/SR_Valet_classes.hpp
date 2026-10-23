#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SrirachaRanchValet_classes.hpp"

namespace SDK
{

class USR_Valet_C final : public UStreamingRadioPlayerComponent_Valet
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_SR_Valet(int32 EntryPoint);
	void On_Source_Played(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource);
	void On_Source_Stopped(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

	bool CanApplyHolster(const class FName& HolsterId) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SR_Valet_C">();
	}
	static class USR_Valet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USR_Valet_C>();
	}
};
static_assert(alignof(USR_Valet_C) == 0x000008, "Wrong alignment on USR_Valet_C");
static_assert(sizeof(USR_Valet_C) == 0x000458, "Wrong size on USR_Valet_C");
static_assert(offsetof(USR_Valet_C, UberGraphFrame) == 0x000450, "Member 'USR_Valet_C::UberGraphFrame' has a wrong offset!");

}
