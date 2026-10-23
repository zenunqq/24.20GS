#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UMicIndicator_C final : public UFortMicIndicatorWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UOverlay*                               Zero1_NotSpeaking;
	class UOverlay*                               Zero2_Speaking;
	class UOverlay*                               Zero3_Muted;
	class UWidgetSwitcher*                        MicStateSwitcher;
	bool                                          bIsMuted;
	bool                                          bIsTalking;

public:
	void ExecuteUbergraph_MicIndicator(int32 EntryPoint);
	void OnPlayerMuted(bool bIsMuted_0);
	void OnPlayerTalkingChanged(bool bIsTalking_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MicIndicator_C">();
	}
	static class UMicIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMicIndicator_C>();
	}
};
static_assert(alignof(UMicIndicator_C) == 0x000008, "Wrong alignment on UMicIndicator_C");
static_assert(sizeof(UMicIndicator_C) == 0x0002F0, "Wrong size on UMicIndicator_C");
static_assert(offsetof(UMicIndicator_C, UberGraphFrame) == 0x0002C0, "Member 'UMicIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMicIndicator_C, Zero1_NotSpeaking) == 0x0002C8, "Member 'UMicIndicator_C::Zero1_NotSpeaking' has a wrong offset!");
static_assert(offsetof(UMicIndicator_C, Zero2_Speaking) == 0x0002D0, "Member 'UMicIndicator_C::Zero2_Speaking' has a wrong offset!");
static_assert(offsetof(UMicIndicator_C, Zero3_Muted) == 0x0002D8, "Member 'UMicIndicator_C::Zero3_Muted' has a wrong offset!");
static_assert(offsetof(UMicIndicator_C, MicStateSwitcher) == 0x0002E0, "Member 'UMicIndicator_C::MicStateSwitcher' has a wrong offset!");
static_assert(offsetof(UMicIndicator_C, bIsMuted) == 0x0002E8, "Member 'UMicIndicator_C::bIsMuted' has a wrong offset!");
static_assert(offsetof(UMicIndicator_C, bIsTalking) == 0x0002E9, "Member 'UMicIndicator_C::bIsTalking' has a wrong offset!");

}
