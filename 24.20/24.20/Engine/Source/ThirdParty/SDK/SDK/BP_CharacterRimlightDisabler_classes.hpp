#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class ABP_CharacterRimlightDisabler_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;

public:
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CharacterRimlightDisabler(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharacterRimlightDisabler_C">();
	}
	static class ABP_CharacterRimlightDisabler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CharacterRimlightDisabler_C>();
	}
};
static_assert(alignof(ABP_CharacterRimlightDisabler_C) == 0x000008, "Wrong alignment on ABP_CharacterRimlightDisabler_C");
static_assert(sizeof(ABP_CharacterRimlightDisabler_C) == 0x000298, "Wrong size on ABP_CharacterRimlightDisabler_C");
static_assert(offsetof(ABP_CharacterRimlightDisabler_C, UberGraphFrame) == 0x000288, "Member 'ABP_CharacterRimlightDisabler_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CharacterRimlightDisabler_C, DefaultSceneRoot) == 0x000290, "Member 'ABP_CharacterRimlightDisabler_C::DefaultSceneRoot' has a wrong offset!");

}
