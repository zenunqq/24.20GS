#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UHealthWarningScreen_C final : public UHealthWarningScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       FinishingAnim;
	class USafeZone*                              SafeZone_0;
	TMulticastInlineDelegate<void()>              HealthWarningCompleted;
	struct FTimerHandle                           ShowTimer;
	struct FMargin                                IconPadding;

public:
	void HandleShowTimerComplete();
	void ExecuteUbergraph_HealthWarningScreen(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HealthWarningScreen_C">();
	}
	static class UHealthWarningScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHealthWarningScreen_C>();
	}
};
static_assert(alignof(UHealthWarningScreen_C) == 0x000008, "Wrong alignment on UHealthWarningScreen_C");
static_assert(sizeof(UHealthWarningScreen_C) == 0x000558, "Wrong size on UHealthWarningScreen_C");
static_assert(offsetof(UHealthWarningScreen_C, UberGraphFrame) == 0x000518, "Member 'UHealthWarningScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHealthWarningScreen_C, FinishingAnim) == 0x000520, "Member 'UHealthWarningScreen_C::FinishingAnim' has a wrong offset!");
static_assert(offsetof(UHealthWarningScreen_C, SafeZone_0) == 0x000528, "Member 'UHealthWarningScreen_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UHealthWarningScreen_C, HealthWarningCompleted) == 0x000530, "Member 'UHealthWarningScreen_C::HealthWarningCompleted' has a wrong offset!");
static_assert(offsetof(UHealthWarningScreen_C, ShowTimer) == 0x000540, "Member 'UHealthWarningScreen_C::ShowTimer' has a wrong offset!");
static_assert(offsetof(UHealthWarningScreen_C, IconPadding) == 0x000548, "Member 'UHealthWarningScreen_C::IconPadding' has a wrong offset!");

}
